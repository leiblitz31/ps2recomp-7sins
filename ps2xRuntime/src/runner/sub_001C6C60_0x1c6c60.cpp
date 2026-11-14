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

// Function: sub_001C6C60
// Address: 0x1c6c60 - 0x1c6ce0
void sub_001C6C60_0x1c6c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6C60_0x1c6c60");
#endif

    switch (ctx->pc) {
        case 0x1c6c88u: goto label_1c6c88;
        case 0x1c6c98u: goto label_1c6c98;
        default: break;
    }

    ctx->pc = 0x1c6c60u;

    // 0x1c6c60: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1c6c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1c6c64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c6c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c6c68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c6c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c6c6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c6c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c6c70: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1c6c70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1c6c74: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1c6c74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1c6c78: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x1c6c78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x1c6c7c: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x1c6c7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c6c80: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1C6C80u;
    {
        const bool branch_taken_0x1c6c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6c80) {
            ctx->pc = 0x1C6CACu;
            goto label_1c6cac;
        }
    }
    ctx->pc = 0x1C6C88u;
label_1c6c88:
    // 0x1c6c88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c8c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x1c6c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c6c90: 0xc071b68  jal         func_1C6DA0
    ctx->pc = 0x1C6C90u;
    SET_GPR_U32(ctx, 31, 0x1C6C98u);
    ctx->pc = 0x1C6DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6DA0u, 0x1C6C90u, 0x1C6C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C98u;
label_1c6c98:
    // 0x1c6c98: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1c6c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c6c9c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c6c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c6ca0: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1c6ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1c6ca4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1c6ca4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1c6ca8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1c6ca8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c6cac:
    // 0x1c6cac: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1c6cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c6cb0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1C6CB0u;
    {
        const bool branch_taken_0x1c6cb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c6cb0) {
            ctx->pc = 0x1C6C88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c6c88;
        }
    }
    ctx->pc = 0x1C6CB8u;
    // 0x1c6cb8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c6cb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6cbc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c6cbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c6cc0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c6cc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6cc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c6cc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6cc8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1c6cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c6ccc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6CCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6CD4u;
    // 0x1c6cd4: 0x0  nop
    ctx->pc = 0x1c6cd4u;
    // NOP
    // 0x1c6cd8: 0x0  nop
    ctx->pc = 0x1c6cd8u;
    // NOP
    // 0x1c6cdc: 0x0  nop
    ctx->pc = 0x1c6cdcu;
    // NOP
    ctx->pc = 0x1c6ce0u;
}
