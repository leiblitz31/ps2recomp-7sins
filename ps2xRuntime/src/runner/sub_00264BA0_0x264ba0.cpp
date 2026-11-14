#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00264BA0
// Address: 0x264ba0 - 0x264c20
void sub_00264BA0_0x264ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264BA0_0x264ba0");
#endif

    switch (ctx->pc) {
        case 0x264bc8u: goto label_264bc8;
        case 0x264bd8u: goto label_264bd8;
        default: break;
    }

    ctx->pc = 0x264ba0u;

    // 0x264ba0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x264ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x264ba4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x264ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x264ba8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x264ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x264bac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x264bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x264bb0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x264bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x264bb4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x264bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x264bb8: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x264bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x264bbc: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x264bbcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x264bc0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x264BC0u;
    {
        const bool branch_taken_0x264bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264bc0) {
            ctx->pc = 0x264BECu;
            goto label_264bec;
        }
    }
    ctx->pc = 0x264BC8u;
label_264bc8:
    // 0x264bc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x264bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264bcc: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x264bccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x264bd0: 0xc099318  jal         func_264C60
    ctx->pc = 0x264BD0u;
    SET_GPR_U32(ctx, 31, 0x264BD8u);
    ctx->pc = 0x264C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264C60u, 0x264BD0u, 0x264BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264BD8u;
label_264bd8:
    // 0x264bd8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x264bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x264bdc: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x264bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x264be0: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x264be0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x264be4: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x264be4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x264be8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x264be8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_264bec:
    // 0x264bec: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x264becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x264bf0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x264bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x264bf4: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x264BF4u;
    {
        const bool branch_taken_0x264bf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x264bf4) {
            ctx->pc = 0x264BC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_264bc8;
        }
    }
    ctx->pc = 0x264BFCu;
    // 0x264bfc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x264bfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264c00: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x264c00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x264c04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x264c04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x264c08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x264c08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x264c0c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x264c0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x264c10: 0x3e00008  jr          $ra
    ctx->pc = 0x264C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264C10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264C18u;
    // 0x264c18: 0x0  nop
    ctx->pc = 0x264c18u;
    // NOP
    // 0x264c1c: 0x0  nop
    ctx->pc = 0x264c1cu;
    // NOP
    ctx->pc = 0x264c20u;
}
