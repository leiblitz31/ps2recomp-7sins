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

// Function: sub_0038DC20
// Address: 0x38dc20 - 0x38dcb0
void sub_0038DC20_0x38dc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038DC20_0x38dc20");
#endif

    switch (ctx->pc) {
        case 0x38dc4cu: goto label_38dc4c;
        case 0x38dc74u: goto label_38dc74;
        case 0x38dc98u: goto label_38dc98;
        default: break;
    }

    ctx->pc = 0x38dc20u;

    // 0x38dc20: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x38dc20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38dc24: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38dc24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38dc28: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x38dc28u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38dc2c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x38dc2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38dc30: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x38dc30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38dc34: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x38dc34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x38dc38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38dc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38dc3c: 0x2444ade8  addiu       $a0, $v0, -0x5218
    ctx->pc = 0x38dc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946280));
    // 0x38dc40: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x38dc40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38dc44: 0xc104a46  jal         func_412918
    ctx->pc = 0x38DC44u;
    SET_GPR_U32(ctx, 31, 0x38DC4Cu);
    ctx->pc = 0x38DC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DC44u;
    // 0x38dc48: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412918u, 0x38DC44u, 0x38DC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DC4Cu;
label_38dc4c:
    // 0x38dc4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38dc4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38dc50: 0x3e00008  jr          $ra
    ctx->pc = 0x38DC50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38DC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DC50u;
        // 0x38dc54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38DC50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38DC58u;
    // 0x38dc58: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x38dc58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38dc5c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38dc5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38dc60: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x38dc60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38dc64: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x38dc64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x38dc68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38dc68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38dc6c: 0xc104a56  jal         func_412958
    ctx->pc = 0x38DC6Cu;
    SET_GPR_U32(ctx, 31, 0x38DC74u);
    ctx->pc = 0x38DC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DC6Cu;
    // 0x38dc70: 0x2444ade8  addiu       $a0, $v0, -0x5218 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412958u, 0x38DC6Cu, 0x38DC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DC74u;
label_38dc74:
    // 0x38dc74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38dc74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38dc78: 0x3e00008  jr          $ra
    ctx->pc = 0x38DC78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38DC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DC78u;
        // 0x38dc7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38DC78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38DC80u;
    // 0x38dc80: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x38dc80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38dc84: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38dc84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38dc88: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x38dc88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x38dc8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38dc8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38dc90: 0xc104c74  jal         func_4131D0
    ctx->pc = 0x38DC90u;
    SET_GPR_U32(ctx, 31, 0x38DC98u);
    ctx->pc = 0x38DC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DC90u;
    // 0x38dc94: 0x2484ade8  addiu       $a0, $a0, -0x5218 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4131D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4131D0u, 0x38DC90u, 0x38DC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DC98u;
label_38dc98:
    // 0x38dc98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38dc98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38dc9c: 0x3e00008  jr          $ra
    ctx->pc = 0x38DC9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38DCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DC9Cu;
        // 0x38dca0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38DC9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38DCA4u;
    // 0x38dca4: 0x0  nop
    ctx->pc = 0x38dca4u;
    // NOP
    // 0x38dca8: 0x3e00008  jr          $ra
    ctx->pc = 0x38DCA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38DCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DCA8u;
        // 0x38dcac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38DCA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38DCB0u;
}
