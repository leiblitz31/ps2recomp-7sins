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

// Function: sub_004182D0
// Address: 0x4182d0 - 0x418348
void sub_004182D0_0x4182d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004182D0_0x4182d0");
#endif

    switch (ctx->pc) {
        case 0x418308u: goto label_418308;
        case 0x418330u: goto label_418330;
        default: break;
    }

    ctx->pc = 0x4182d0u;

    // 0x4182d0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4182d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4182d4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4182d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4182d8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x4182d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4182dc: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x4182dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4182e0: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x4182e0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4182e4: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x4182e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4182e8: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x4182e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x4182ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4182ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4182f0: 0x2484c898  addiu       $a0, $a0, -0x3768
    ctx->pc = 0x4182f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953112));
    // 0x4182f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4182f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4182f8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x4182f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4182fc: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x4182fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418300: 0xc104b72  jal         func_412DC8
    ctx->pc = 0x418300u;
    SET_GPR_U32(ctx, 31, 0x418308u);
    ctx->pc = 0x418304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418300u;
    // 0x418304: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412DC8u, 0x418300u, 0x418308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418308u;
label_418308:
    // 0x418308: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x418308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41830c: 0x3e00008  jr          $ra
    ctx->pc = 0x41830Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x418310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41830Cu;
        // 0x418310: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41830Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x418314u;
    // 0x418314: 0x0  nop
    ctx->pc = 0x418314u;
    // NOP
    // 0x418318: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x418318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41831c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x41831cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x418320: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x418320u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x418324: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x418324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x418328: 0xc104c74  jal         func_4131D0
    ctx->pc = 0x418328u;
    SET_GPR_U32(ctx, 31, 0x418330u);
    ctx->pc = 0x41832Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418328u;
    // 0x41832c: 0x2484c898  addiu       $a0, $a0, -0x3768 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4131D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4131D0u, 0x418328u, 0x418330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418330u;
label_418330:
    // 0x418330: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x418330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x418334: 0x3e00008  jr          $ra
    ctx->pc = 0x418334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x418338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418334u;
        // 0x418338: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x418334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41833Cu;
    // 0x41833c: 0x0  nop
    ctx->pc = 0x41833cu;
    // NOP
    // 0x418340: 0x3e00008  jr          $ra
    ctx->pc = 0x418340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x418344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418340u;
        // 0x418344: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x418340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x418348u;
}
