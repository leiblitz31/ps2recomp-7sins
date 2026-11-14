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

// Function: sub_00309420
// Address: 0x309420 - 0x3094e0
void sub_00309420_0x309420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00309420_0x309420");
#endif

    switch (ctx->pc) {
        case 0x309468u: goto label_309468;
        case 0x3094a8u: goto label_3094a8;
        case 0x3094b4u: goto label_3094b4;
        case 0x3094c4u: goto label_3094c4;
        default: break;
    }

    ctx->pc = 0x309420u;

label_309420:
    // 0x309420: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x309420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x309424: 0x41282  srl         $v0, $a0, 10
    ctx->pc = 0x309424u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
    // 0x309428: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x309428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x30942c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x30942cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x309430: 0x28980  sll         $s1, $v0, 6
    ctx->pc = 0x309430u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x309434: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x309434u;
    {
        const bool branch_taken_0x309434 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x309438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309434u;
        // 0x309438: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309434) {
            ctx->pc = 0x30944Cu;
            goto label_30944c;
        }
    }
    ctx->pc = 0x30943Cu;
    // 0x30943c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x30943cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x309440: 0x308203ff  andi        $v0, $a0, 0x3FF
    ctx->pc = 0x309440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1023);
    // 0x309444: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x309444u;
    {
        const bool branch_taken_0x309444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x309444) {
            ctx->pc = 0x309448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x309444u;
            // 0x309448: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x309454u;
            goto label_309454;
        }
    }
    ctx->pc = 0x30944Cu;
label_30944c:
    // 0x30944c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x30944Cu;
    {
        const bool branch_taken_0x30944c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30944Cu;
        // 0x309450: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30944c) {
            ctx->pc = 0x309478u;
            goto label_309478;
        }
    }
    ctx->pc = 0x309454u;
label_309454:
    // 0x309454: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x309454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x309458: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x309458u;
    {
        const bool branch_taken_0x309458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30945Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309458u;
        // 0x30945c: 0xde300018  ld          $s0, 0x18($s1) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309458) {
            ctx->pc = 0x309474u;
            goto label_309474;
        }
    }
    ctx->pc = 0x309460u;
    // 0x309460: 0xc0c235e  jal         func_308D78
    ctx->pc = 0x309460u;
    SET_GPR_U32(ctx, 31, 0x309468u);
    ctx->pc = 0x308D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308D78u, 0x309460u, 0x309468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309468u;
label_309468:
    // 0x309468: 0xde230010  ld          $v1, 0x10($s1)
    ctx->pc = 0x309468u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x30946c: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x30946cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x309470: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x309470u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
label_309474:
    // 0x309474: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x309474u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_309478:
    // 0x309478: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x309478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30947c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x30947cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x309480: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x309480u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x309484: 0x3e00008  jr          $ra
    ctx->pc = 0x309484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309484u;
        // 0x309488: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30948Cu;
    // 0x30948c: 0x0  nop
    ctx->pc = 0x30948cu;
    // NOP
    // 0x309490: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x309490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x309494: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x309494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x309498: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x309498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x30949c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x30949cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3094a0: 0xc0c1f08  jal         func_307C20
    ctx->pc = 0x3094A0u;
    SET_GPR_U32(ctx, 31, 0x3094A8u);
    ctx->pc = 0x3094A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3094A0u;
    // 0x3094a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C20u, 0x3094A0u, 0x3094A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3094A8u;
label_3094a8:
    // 0x3094a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3094a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3094ac: 0xc0c2508  jal         func_309420
    ctx->pc = 0x3094ACu;
    SET_GPR_U32(ctx, 31, 0x3094B4u);
    ctx->pc = 0x3094B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3094ACu;
    // 0x3094b0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309420u;
    goto label_309420;
    ctx->pc = 0x3094B4u;
label_3094b4:
    // 0x3094b4: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3094B4u;
    {
        const bool branch_taken_0x3094b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3094B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3094B4u;
        // 0x3094b8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3094b4) {
            ctx->pc = 0x3094C4u;
            goto label_3094c4;
        }
    }
    ctx->pc = 0x3094BCu;
    // 0x3094bc: 0xc0c1f1c  jal         func_307C70
    ctx->pc = 0x3094BCu;
    SET_GPR_U32(ctx, 31, 0x3094C4u);
    ctx->pc = 0x307C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C70u, 0x3094BCu, 0x3094C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3094C4u;
label_3094c4:
    // 0x3094c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3094c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3094c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3094c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3094cc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3094ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3094d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3094d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3094d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3094D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3094D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3094D4u;
        // 0x3094d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3094D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3094DCu;
    // 0x3094dc: 0x0  nop
    ctx->pc = 0x3094dcu;
    // NOP
    ctx->pc = 0x3094e0u;
}
