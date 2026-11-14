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

// Function: sub_00186290
// Address: 0x186290 - 0x186310
void sub_00186290_0x186290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00186290_0x186290");
#endif

    switch (ctx->pc) {
        case 0x1862b8u: goto label_1862b8;
        case 0x1862c8u: goto label_1862c8;
        default: break;
    }

    ctx->pc = 0x186290u;

    // 0x186290: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x186290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x186294: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x186294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x186298: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x186298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18629c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18629cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1862a0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1862a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1862a4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1862a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1862a8: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x1862a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x1862ac: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x1862acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1862b0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1862B0u;
    {
        const bool branch_taken_0x1862b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1862b0) {
            ctx->pc = 0x1862DCu;
            goto label_1862dc;
        }
    }
    ctx->pc = 0x1862B8u;
label_1862b8:
    // 0x1862b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1862b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1862bc: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1862bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1862c0: 0xc0618c4  jal         func_186310
    ctx->pc = 0x1862C0u;
    SET_GPR_U32(ctx, 31, 0x1862C8u);
    ctx->pc = 0x186310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186310u, 0x1862C0u, 0x1862C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1862C8u;
label_1862c8:
    // 0x1862c8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1862c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1862cc: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1862ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1862d0: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x1862d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x1862d4: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x1862d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1862d8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1862d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1862dc:
    // 0x1862dc: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1862dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1862e0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1862e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1862e4: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1862E4u;
    {
        const bool branch_taken_0x1862e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1862e4) {
            ctx->pc = 0x1862B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1862b8;
        }
    }
    ctx->pc = 0x1862ECu;
    // 0x1862ec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1862ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1862f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1862f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1862f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1862f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1862f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1862f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1862fc: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1862fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x186300: 0x3e00008  jr          $ra
    ctx->pc = 0x186300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186308u;
    // 0x186308: 0x0  nop
    ctx->pc = 0x186308u;
    // NOP
    // 0x18630c: 0x0  nop
    ctx->pc = 0x18630cu;
    // NOP
    ctx->pc = 0x186310u;
}
