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

// Function: sub_0041D800
// Address: 0x41d800 - 0x41d878
void sub_0041D800_0x41d800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041D800_0x41d800");
#endif

    switch (ctx->pc) {
        case 0x41d838u: goto label_41d838;
        case 0x41d860u: goto label_41d860;
        default: break;
    }

    ctx->pc = 0x41d800u;

    // 0x41d800: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x41d800u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41d804: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x41d804u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x41d808: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x41d808u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41d80c: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x41d80cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41d810: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x41d810u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41d814: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x41d814u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41d818: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x41d818u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x41d81c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41d81cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41d820: 0x2484c9f8  addiu       $a0, $a0, -0x3608
    ctx->pc = 0x41d820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953464));
    // 0x41d824: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x41d824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41d828: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x41d828u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41d82c: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x41d82cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41d830: 0xc104b72  jal         func_412DC8
    ctx->pc = 0x41D830u;
    SET_GPR_U32(ctx, 31, 0x41D838u);
    ctx->pc = 0x41D834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41D830u;
    // 0x41d834: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412DC8u, 0x41D830u, 0x41D838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41D838u;
label_41d838:
    // 0x41d838: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41d838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41d83c: 0x3e00008  jr          $ra
    ctx->pc = 0x41D83Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41D840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D83Cu;
        // 0x41d840: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D83Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41D844u;
    // 0x41d844: 0x0  nop
    ctx->pc = 0x41d844u;
    // NOP
    // 0x41d848: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x41d848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41d84c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x41d84cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x41d850: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x41d850u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x41d854: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41d854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41d858: 0xc104c74  jal         func_4131D0
    ctx->pc = 0x41D858u;
    SET_GPR_U32(ctx, 31, 0x41D860u);
    ctx->pc = 0x41D85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41D858u;
    // 0x41d85c: 0x2484c9f8  addiu       $a0, $a0, -0x3608 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4131D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4131D0u, 0x41D858u, 0x41D860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41D860u;
label_41d860:
    // 0x41d860: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41d860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41d864: 0x3e00008  jr          $ra
    ctx->pc = 0x41D864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41D868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D864u;
        // 0x41d868: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41D86Cu;
    // 0x41d86c: 0x0  nop
    ctx->pc = 0x41d86cu;
    // NOP
    // 0x41d870: 0x3e00008  jr          $ra
    ctx->pc = 0x41D870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41D874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D870u;
        // 0x41d874: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41D878u;
}
