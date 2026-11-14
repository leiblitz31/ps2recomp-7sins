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

// Function: sub_003094E0
// Address: 0x3094e0 - 0x3095d8
void sub_003094E0_0x3094e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003094E0_0x3094e0");
#endif

    switch (ctx->pc) {
        case 0x30955cu: goto label_30955c;
        case 0x3095a4u: goto label_3095a4;
        case 0x3095acu: goto label_3095ac;
        case 0x3095b4u: goto label_3095b4;
        default: break;
    }

    ctx->pc = 0x3094e0u;

    // 0x3094e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3094e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3094e4: 0x41282  srl         $v0, $a0, 10
    ctx->pc = 0x3094e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
    // 0x3094e8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x3094e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x3094ec: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3094ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3094f0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3094f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3094f4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3094f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3094f8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3094f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3094fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3094fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x309500: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x309500u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309504: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x309504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x309508: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x309508u;
    {
        const bool branch_taken_0x309508 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x30950Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309508u;
        // 0x30950c: 0x28180  sll         $s0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309508) {
            ctx->pc = 0x309520u;
            goto label_309520;
        }
    }
    ctx->pc = 0x309510u;
    // 0x309510: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x309510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x309514: 0x308203ff  andi        $v0, $a0, 0x3FF
    ctx->pc = 0x309514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1023);
    // 0x309518: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x309518u;
    {
        const bool branch_taken_0x309518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x309518) {
            ctx->pc = 0x30951Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x309518u;
            // 0x30951c: 0x3c02004f  lui         $v0, 0x4F (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30952Cu;
            goto label_30952c;
        }
    }
    ctx->pc = 0x309520u;
label_309520:
    // 0x309520: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x309520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x309524: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x309524u;
    {
        const bool branch_taken_0x309524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309524u;
        // 0x309528: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        if (branch_taken_0x309524) {
            ctx->pc = 0x3095B8u;
            goto label_3095b8;
        }
    }
    ctx->pc = 0x30952Cu;
label_30952c:
    // 0x30952c: 0x24422228  addiu       $v0, $v0, 0x2228
    ctx->pc = 0x30952cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8744));
    // 0x309530: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x309530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x309534: 0x54640004  bnel        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x309534u;
    {
        const bool branch_taken_0x309534 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x309534) {
            ctx->pc = 0x309538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x309534u;
            // 0x309538: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x309548u;
            goto label_309548;
        }
    }
    ctx->pc = 0x30953Cu;
    // 0x30953c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x30953cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x309540: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x309540u;
    {
        const bool branch_taken_0x309540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309540u;
        // 0x309544: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x309540) {
            ctx->pc = 0x3095B8u;
            goto label_3095b8;
        }
    }
    ctx->pc = 0x309548u;
label_309548:
    // 0x309548: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x309548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x30954c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30954Cu;
    {
        const bool branch_taken_0x30954c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30954c) {
            ctx->pc = 0x309560u;
            goto label_309560;
        }
    }
    ctx->pc = 0x309554u;
    // 0x309554: 0xc0c22a6  jal         func_308A98
    ctx->pc = 0x309554u;
    SET_GPR_U32(ctx, 31, 0x30955Cu);
    ctx->pc = 0x309558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309554u;
    // 0x309558: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308A98u, 0x309554u, 0x30955Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30955Cu;
label_30955c:
    // 0x30955c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x30955cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_309560:
    // 0x309560: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x309560u;
    {
        const bool branch_taken_0x309560 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x309564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309560u;
        // 0x309564: 0xae110028  sw          $s1, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309560) {
            ctx->pc = 0x30957Cu;
            goto label_30957c;
        }
    }
    ctx->pc = 0x309568u;
    // 0x309568: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x309568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x30956c: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x30956cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x309570: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x309570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x309574: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x309574u;
    {
        const bool branch_taken_0x309574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309574u;
        // 0x309578: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309574) {
            ctx->pc = 0x3095A4u;
            goto label_3095a4;
        }
    }
    ctx->pc = 0x30957Cu;
label_30957c:
    // 0x30957c: 0x34620002  ori         $v0, $v1, 0x2
    ctx->pc = 0x30957cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x309580: 0xfe120020  sd          $s2, 0x20($s0)
    ctx->pc = 0x309580u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 18));
    // 0x309584: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x309584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x309588: 0xae1c002c  sw          $gp, 0x2C($s0)
    ctx->pc = 0x309588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 28));
    // 0x30958c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x30958cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x309590: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x309590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x309594: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x309594u;
    {
        const bool branch_taken_0x309594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x309598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309594u;
        // 0x309598: 0xae130030  sw          $s3, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309594) {
            ctx->pc = 0x3095A4u;
            goto label_3095a4;
        }
    }
    ctx->pc = 0x30959Cu;
    // 0x30959c: 0xc0c2284  jal         func_308A10
    ctx->pc = 0x30959Cu;
    SET_GPR_U32(ctx, 31, 0x3095A4u);
    ctx->pc = 0x3095A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30959Cu;
    // 0x3095a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308A10u, 0x30959Cu, 0x3095A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3095A4u;
label_3095a4:
    // 0x3095a4: 0xc0c235e  jal         func_308D78
    ctx->pc = 0x3095A4u;
    SET_GPR_U32(ctx, 31, 0x3095ACu);
    ctx->pc = 0x308D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308D78u, 0x3095A4u, 0x3095ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3095ACu;
label_3095ac:
    // 0x3095ac: 0xc0c2220  jal         func_308880
    ctx->pc = 0x3095ACu;
    SET_GPR_U32(ctx, 31, 0x3095B4u);
    ctx->pc = 0x3095B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3095ACu;
    // 0x3095b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308880u, 0x3095ACu, 0x3095B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3095B4u;
label_3095b4:
    // 0x3095b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3095b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3095b8:
    // 0x3095b8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3095b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3095bc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x3095bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3095c0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3095c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3095c4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3095c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3095c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3095c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3095cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3095CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3095D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3095CCu;
        // 0x3095d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3095CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3095D4u;
    // 0x3095d4: 0x0  nop
    ctx->pc = 0x3095d4u;
    // NOP
    ctx->pc = 0x3095d8u;
}
