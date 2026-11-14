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

// Function: sub_00453A50
// Address: 0x453a50 - 0x453ad0
void sub_00453A50_0x453a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00453A50_0x453a50");
#endif

    switch (ctx->pc) {
        case 0x453a74u: goto label_453a74;
        case 0x453ab8u: goto label_453ab8;
        default: break;
    }

    ctx->pc = 0x453a50u;

    // 0x453a50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x453a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x453a54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x453a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x453a58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x453a58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x453a5c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x453a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x453a60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x453a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x453a64: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x453a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x453a68: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x453a68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x453a6c: 0xc114950  jal         func_452540
    ctx->pc = 0x453A6Cu;
    SET_GPR_U32(ctx, 31, 0x453A74u);
    ctx->pc = 0x452540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x452540u, 0x453A6Cu, 0x453A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453A74u;
label_453a74:
    // 0x453a74: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x453a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x453a78: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x453a78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x453a7c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x453a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x453a80: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x453a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x453a84: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x453a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x453a88: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x453a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x453a8c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x453a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x453a90: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x453a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x453a94: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x453a94u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x453a98: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x453A98u;
    {
        const bool branch_taken_0x453a98 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x453a98) {
            ctx->pc = 0x453AA8u;
            goto label_453aa8;
        }
    }
    ctx->pc = 0x453AA0u;
    // 0x453aa0: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x453aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x453aa4: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x453aa4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_453aa8:
    // 0x453aa8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x453aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x453aac: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x453aacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x453ab0: 0xc1157ec  jal         func_455FB0
    ctx->pc = 0x453AB0u;
    SET_GPR_U32(ctx, 31, 0x453AB8u);
    ctx->pc = 0x455FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x455FB0u, 0x453AB0u, 0x453AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453AB8u;
label_453ab8:
    // 0x453ab8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x453ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x453abc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x453abcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x453ac0: 0x3e00008  jr          $ra
    ctx->pc = 0x453AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x453AC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x453AC8u;
    // 0x453ac8: 0x0  nop
    ctx->pc = 0x453ac8u;
    // NOP
    // 0x453acc: 0x0  nop
    ctx->pc = 0x453accu;
    // NOP
    ctx->pc = 0x453ad0u;
}
