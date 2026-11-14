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

// Function: sub_00309388
// Address: 0x309388 - 0x309420
void sub_00309388_0x309388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00309388_0x309388");
#endif

    switch (ctx->pc) {
        case 0x3093e8u: goto label_3093e8;
        case 0x3093f4u: goto label_3093f4;
        case 0x309404u: goto label_309404;
        default: break;
    }

    ctx->pc = 0x309388u;

label_309388:
    // 0x309388: 0x41282  srl         $v0, $a0, 10
    ctx->pc = 0x309388u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
    // 0x30938c: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30938Cu;
    {
        const bool branch_taken_0x30938c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x309390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30938Cu;
        // 0x309390: 0x22980  sll         $a1, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30938c) {
            ctx->pc = 0x3093A4u;
            goto label_3093a4;
        }
    }
    ctx->pc = 0x309394u;
    // 0x309394: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x309394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x309398: 0x308203ff  andi        $v0, $a0, 0x3FF
    ctx->pc = 0x309398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1023);
    // 0x30939c: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30939Cu;
    {
        const bool branch_taken_0x30939c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x30939c) {
            ctx->pc = 0x3093A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30939Cu;
            // 0x3093a0: 0x8ca2000c  lw          $v0, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3093ACu;
            goto label_3093ac;
        }
    }
    ctx->pc = 0x3093A4u;
label_3093a4:
    // 0x3093a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3093A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3093A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3093A4u;
        // 0x3093a8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3093A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3093ACu;
label_3093ac:
    // 0x3093ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3093acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3093b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3093B0u;
    {
        const bool branch_taken_0x3093b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3093b0) {
            ctx->pc = 0x3093C8u;
            goto label_3093c8;
        }
    }
    ctx->pc = 0x3093B8u;
    // 0x3093b8: 0xdca30018  ld          $v1, 0x18($a1)
    ctx->pc = 0x3093b8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x3093bc: 0xdca20010  ld          $v0, 0x10($a1)
    ctx->pc = 0x3093bcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3093c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3093C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3093C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3093C0u;
        // 0x3093c4: 0x43102f  dsubu       $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3093C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3093C8u;
label_3093c8:
    // 0x3093c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3093C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3093CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3093C8u;
        // 0x3093cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3093C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3093D0u;
    // 0x3093d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3093d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3093d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3093d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3093d8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3093d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3093dc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3093dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3093e0: 0xc0c1f08  jal         func_307C20
    ctx->pc = 0x3093E0u;
    SET_GPR_U32(ctx, 31, 0x3093E8u);
    ctx->pc = 0x3093E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3093E0u;
    // 0x3093e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C20u, 0x3093E0u, 0x3093E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3093E8u;
label_3093e8:
    // 0x3093e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3093e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3093ec: 0xc0c24e2  jal         func_309388
    ctx->pc = 0x3093ECu;
    SET_GPR_U32(ctx, 31, 0x3093F4u);
    ctx->pc = 0x3093F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3093ECu;
    // 0x3093f0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309388u;
    goto label_309388;
    ctx->pc = 0x3093F4u;
label_3093f4:
    // 0x3093f4: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3093F4u;
    {
        const bool branch_taken_0x3093f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3093F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3093F4u;
        // 0x3093f8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3093f4) {
            ctx->pc = 0x309404u;
            goto label_309404;
        }
    }
    ctx->pc = 0x3093FCu;
    // 0x3093fc: 0xc0c1f1c  jal         func_307C70
    ctx->pc = 0x3093FCu;
    SET_GPR_U32(ctx, 31, 0x309404u);
    ctx->pc = 0x307C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C70u, 0x3093FCu, 0x309404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309404u;
label_309404:
    // 0x309404: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x309404u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309408: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x309408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30940c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x30940cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x309410: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x309410u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x309414: 0x3e00008  jr          $ra
    ctx->pc = 0x309414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309414u;
        // 0x309418: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30941Cu;
    // 0x30941c: 0x0  nop
    ctx->pc = 0x30941cu;
    // NOP
    ctx->pc = 0x309420u;
}
