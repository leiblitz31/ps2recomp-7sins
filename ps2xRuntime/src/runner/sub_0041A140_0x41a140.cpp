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

// Function: sub_0041A140
// Address: 0x41a140 - 0x41a1b8
void sub_0041A140_0x41a140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041A140_0x41a140");
#endif

    switch (ctx->pc) {
        case 0x41a178u: goto label_41a178;
        case 0x41a1a0u: goto label_41a1a0;
        default: break;
    }

    ctx->pc = 0x41a140u;

    // 0x41a140: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x41a140u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41a144: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x41a144u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x41a148: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x41a148u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41a14c: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x41a14cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41a150: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x41a150u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41a154: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x41a154u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41a158: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x41a158u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x41a15c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41a15cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41a160: 0x2484c9c8  addiu       $a0, $a0, -0x3638
    ctx->pc = 0x41a160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953416));
    // 0x41a164: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x41a164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41a168: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x41a168u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41a16c: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x41a16cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41a170: 0xc104b72  jal         func_412DC8
    ctx->pc = 0x41A170u;
    SET_GPR_U32(ctx, 31, 0x41A178u);
    ctx->pc = 0x41A174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A170u;
    // 0x41a174: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412DC8u, 0x41A170u, 0x41A178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A178u;
label_41a178:
    // 0x41a178: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41a178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41a17c: 0x3e00008  jr          $ra
    ctx->pc = 0x41A17Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41A180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A17Cu;
        // 0x41a180: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41A17Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41A184u;
    // 0x41a184: 0x0  nop
    ctx->pc = 0x41a184u;
    // NOP
    // 0x41a188: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x41a188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41a18c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x41a18cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x41a190: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x41a190u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x41a194: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41a194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41a198: 0xc104c74  jal         func_4131D0
    ctx->pc = 0x41A198u;
    SET_GPR_U32(ctx, 31, 0x41A1A0u);
    ctx->pc = 0x41A19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A198u;
    // 0x41a19c: 0x2484c9c8  addiu       $a0, $a0, -0x3638 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4131D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4131D0u, 0x41A198u, 0x41A1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A1A0u;
label_41a1a0:
    // 0x41a1a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41a1a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41a1a4: 0x3e00008  jr          $ra
    ctx->pc = 0x41A1A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41A1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A1A4u;
        // 0x41a1a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41A1A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41A1ACu;
    // 0x41a1ac: 0x0  nop
    ctx->pc = 0x41a1acu;
    // NOP
    // 0x41a1b0: 0x3e00008  jr          $ra
    ctx->pc = 0x41A1B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41A1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A1B0u;
        // 0x41a1b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41A1B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41A1B8u;
}
