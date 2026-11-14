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

// Function: sub_00398F30
// Address: 0x398f30 - 0x398f88
void sub_00398F30_0x398f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00398F30_0x398f30");
#endif

    switch (ctx->pc) {
        case 0x398f4cu: goto label_398f4c;
        case 0x398f70u: goto label_398f70;
        default: break;
    }

    ctx->pc = 0x398f30u;

    // 0x398f30: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x398f30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398f34: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x398f34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x398f38: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x398f38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398f3c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x398f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x398f40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x398f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x398f44: 0xc104a64  jal         func_412990
    ctx->pc = 0x398F44u;
    SET_GPR_U32(ctx, 31, 0x398F4Cu);
    ctx->pc = 0x398F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398F44u;
    // 0x398f48: 0x2444ae40  addiu       $a0, $v0, -0x51C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412990u, 0x398F44u, 0x398F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398F4Cu;
label_398f4c:
    // 0x398f4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x398f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x398f50: 0x3e00008  jr          $ra
    ctx->pc = 0x398F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x398F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398F50u;
        // 0x398f54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398F50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x398F58u;
    // 0x398f58: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x398f58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398f5c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x398f5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x398f60: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x398f60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x398f64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x398f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x398f68: 0xc104c74  jal         func_4131D0
    ctx->pc = 0x398F68u;
    SET_GPR_U32(ctx, 31, 0x398F70u);
    ctx->pc = 0x398F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398F68u;
    // 0x398f6c: 0x2484ae40  addiu       $a0, $a0, -0x51C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4131D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4131D0u, 0x398F68u, 0x398F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398F70u;
label_398f70:
    // 0x398f70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x398f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x398f74: 0x3e00008  jr          $ra
    ctx->pc = 0x398F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x398F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398F74u;
        // 0x398f78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398F74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x398F7Cu;
    // 0x398f7c: 0x0  nop
    ctx->pc = 0x398f7cu;
    // NOP
    // 0x398f80: 0x3e00008  jr          $ra
    ctx->pc = 0x398F80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x398F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398F80u;
        // 0x398f84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398F80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x398F88u;
}
