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

// Function: sub_0025E480
// Address: 0x25e480 - 0x25e500
void sub_0025E480_0x25e480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E480_0x25e480");
#endif

    switch (ctx->pc) {
        case 0x25e4a8u: goto label_25e4a8;
        case 0x25e4b8u: goto label_25e4b8;
        default: break;
    }

    ctx->pc = 0x25e480u;

    // 0x25e480: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x25e480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x25e484: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25e484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25e488: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25e488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25e48c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25e48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25e490: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x25e490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x25e494: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x25e494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x25e498: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x25e498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x25e49c: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x25e49cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25e4a0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x25E4A0u;
    {
        const bool branch_taken_0x25e4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e4a0) {
            ctx->pc = 0x25E4CCu;
            goto label_25e4cc;
        }
    }
    ctx->pc = 0x25E4A8u;
label_25e4a8:
    // 0x25e4a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e4a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e4ac: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x25e4acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25e4b0: 0xc097950  jal         func_25E540
    ctx->pc = 0x25E4B0u;
    SET_GPR_U32(ctx, 31, 0x25E4B8u);
    ctx->pc = 0x25E540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E540u, 0x25E4B0u, 0x25E4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E4B8u;
label_25e4b8:
    // 0x25e4b8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x25e4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25e4bc: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x25e4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x25e4c0: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x25e4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x25e4c4: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x25e4c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x25e4c8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x25e4c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25e4cc:
    // 0x25e4cc: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x25e4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25e4d0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x25e4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25e4d4: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x25E4D4u;
    {
        const bool branch_taken_0x25e4d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25e4d4) {
            ctx->pc = 0x25E4A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25e4a8;
        }
    }
    ctx->pc = 0x25E4DCu;
    // 0x25e4dc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25e4dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e4e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25e4e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25e4e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25e4e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25e4e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25e4e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e4ec: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x25e4ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x25e4f0: 0x3e00008  jr          $ra
    ctx->pc = 0x25E4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E4F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25E4F8u;
    // 0x25e4f8: 0x0  nop
    ctx->pc = 0x25e4f8u;
    // NOP
    // 0x25e4fc: 0x0  nop
    ctx->pc = 0x25e4fcu;
    // NOP
    ctx->pc = 0x25e500u;
}
