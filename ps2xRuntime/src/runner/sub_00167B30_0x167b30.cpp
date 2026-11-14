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

// Function: sub_00167B30
// Address: 0x167b30 - 0x167bb0
void sub_00167B30_0x167b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00167B30_0x167b30");
#endif

    switch (ctx->pc) {
        case 0x167b58u: goto label_167b58;
        case 0x167b68u: goto label_167b68;
        default: break;
    }

    ctx->pc = 0x167b30u;

    // 0x167b30: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x167b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x167b34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x167b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x167b38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x167b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x167b3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x167b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x167b40: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x167b40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x167b44: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x167b44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x167b48: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x167b48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x167b4c: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x167b4cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x167b50: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x167B50u;
    {
        const bool branch_taken_0x167b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167b50) {
            ctx->pc = 0x167B7Cu;
            goto label_167b7c;
        }
    }
    ctx->pc = 0x167B58u;
label_167b58:
    // 0x167b58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x167b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167b5c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x167b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x167b60: 0xc059e58  jal         func_167960
    ctx->pc = 0x167B60u;
    SET_GPR_U32(ctx, 31, 0x167B68u);
    ctx->pc = 0x167960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167960u, 0x167B60u, 0x167B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167B68u;
label_167b68:
    // 0x167b68: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x167b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x167b6c: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x167b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x167b70: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x167b70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x167b74: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x167b74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x167b78: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x167b78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_167b7c:
    // 0x167b7c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x167b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x167b80: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x167b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x167b84: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x167B84u;
    {
        const bool branch_taken_0x167b84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x167b84) {
            ctx->pc = 0x167B58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_167b58;
        }
    }
    ctx->pc = 0x167B8Cu;
    // 0x167b8c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x167b8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167b90: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x167b90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x167b94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x167b94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167b98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x167b98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167b9c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x167b9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x167ba0: 0x3e00008  jr          $ra
    ctx->pc = 0x167BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167BA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167BA8u;
    // 0x167ba8: 0x0  nop
    ctx->pc = 0x167ba8u;
    // NOP
    // 0x167bac: 0x0  nop
    ctx->pc = 0x167bacu;
    // NOP
    ctx->pc = 0x167bb0u;
}
