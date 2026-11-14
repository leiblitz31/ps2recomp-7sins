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

// Function: sub_00301420
// Address: 0x301420 - 0x3014f0
void sub_00301420_0x301420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00301420_0x301420");
#endif

    switch (ctx->pc) {
        case 0x301420u: goto label_301420;
        case 0x301424u: goto label_301424;
        case 0x301428u: goto label_301428;
        case 0x30142cu: goto label_30142c;
        case 0x301430u: goto label_301430;
        case 0x301434u: goto label_301434;
        case 0x301438u: goto label_301438;
        case 0x30143cu: goto label_30143c;
        case 0x301440u: goto label_301440;
        case 0x301444u: goto label_301444;
        case 0x301448u: goto label_301448;
        case 0x30144cu: goto label_30144c;
        case 0x301450u: goto label_301450;
        case 0x301454u: goto label_301454;
        case 0x301458u: goto label_301458;
        case 0x30145cu: goto label_30145c;
        case 0x301460u: goto label_301460;
        case 0x301464u: goto label_301464;
        case 0x301468u: goto label_301468;
        case 0x30146cu: goto label_30146c;
        case 0x301470u: goto label_301470;
        case 0x301474u: goto label_301474;
        case 0x301478u: goto label_301478;
        case 0x30147cu: goto label_30147c;
        case 0x301480u: goto label_301480;
        case 0x301484u: goto label_301484;
        case 0x301488u: goto label_301488;
        case 0x30148cu: goto label_30148c;
        case 0x301490u: goto label_301490;
        case 0x301494u: goto label_301494;
        case 0x301498u: goto label_301498;
        case 0x30149cu: goto label_30149c;
        case 0x3014a0u: goto label_3014a0;
        case 0x3014a4u: goto label_3014a4;
        case 0x3014a8u: goto label_3014a8;
        case 0x3014acu: goto label_3014ac;
        case 0x3014b0u: goto label_3014b0;
        case 0x3014b4u: goto label_3014b4;
        case 0x3014b8u: goto label_3014b8;
        case 0x3014bcu: goto label_3014bc;
        case 0x3014c0u: goto label_3014c0;
        case 0x3014c4u: goto label_3014c4;
        case 0x3014c8u: goto label_3014c8;
        case 0x3014ccu: goto label_3014cc;
        case 0x3014d0u: goto label_3014d0;
        case 0x3014d4u: goto label_3014d4;
        case 0x3014d8u: goto label_3014d8;
        case 0x3014dcu: goto label_3014dc;
        case 0x3014e0u: goto label_3014e0;
        case 0x3014e4u: goto label_3014e4;
        case 0x3014e8u: goto label_3014e8;
        case 0x3014ecu: goto label_3014ec;
        default: break;
    }

    ctx->pc = 0x301420u;

label_301420:
    // 0x301420: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x301420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_301424:
    // 0x301424: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x301424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_301428:
    // 0x301428: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x301428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_30142c:
    // 0x30142c: 0x3442000a  ori         $v0, $v0, 0xA
    ctx->pc = 0x30142cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
label_301430:
    // 0x301430: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x301430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_301434:
    // 0x301434: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x301434u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_301438:
    // 0x301438: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x301438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_30143c:
    // 0x30143c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30143cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_301440:
    // 0x301440: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x301440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_301444:
    // 0x301444: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_301448:
    if (ctx->pc == 0x301448u) {
        ctx->pc = 0x301448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301444u;
        // 0x301448: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30144Cu;
        goto label_30144c;
    }
    ctx->pc = 0x301444u;
    {
        const bool branch_taken_0x301444 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x301448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301444u;
        // 0x301448: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x301444) {
            ctx->pc = 0x30146Cu;
            goto label_30146c;
        }
    }
    ctx->pc = 0x30144Cu;
label_30144c:
    // 0x30144c: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_301450:
    if (ctx->pc == 0x301450u) {
        ctx->pc = 0x301450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30144Cu;
        // 0x301450: 0x8e51001c  lw          $s1, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301454u;
        goto label_301454;
    }
    ctx->pc = 0x30144Cu;
    {
        const bool branch_taken_0x30144c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x301450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30144Cu;
        // 0x301450: 0x8e51001c  lw          $s1, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30144c) {
            ctx->pc = 0x3014B4u;
            goto label_3014b4;
        }
    }
    ctx->pc = 0x301454u;
label_301454:
    // 0x301454: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x301454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_301458:
    // 0x301458: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x301458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
label_30145c:
    // 0x30145c: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_301460:
    if (ctx->pc == 0x301460u) {
        ctx->pc = 0x301464u;
        goto label_301464;
    }
    ctx->pc = 0x30145Cu;
    {
        const bool branch_taken_0x30145c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30145c) {
            ctx->pc = 0x3014A4u;
            goto label_3014a4;
        }
    }
    ctx->pc = 0x301464u;
label_301464:
    // 0x301464: 0x10000014  b           . + 4 + (0x14 << 2)
label_301468:
    if (ctx->pc == 0x301468u) {
        ctx->pc = 0x301468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301464u;
        // 0x301468: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30146Cu;
        goto label_30146c;
    }
    ctx->pc = 0x301464u;
    {
        const bool branch_taken_0x301464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301464u;
        // 0x301468: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301464) {
            ctx->pc = 0x3014B8u;
            goto label_3014b8;
        }
    }
    ctx->pc = 0x30146Cu;
label_30146c:
    // 0x30146c: 0x8e51001c  lw          $s1, 0x1C($s2)
    ctx->pc = 0x30146cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_301470:
    // 0x301470: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x301470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_301474:
    // 0x301474: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_301478:
    if (ctx->pc == 0x301478u) {
        ctx->pc = 0x301478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301474u;
        // 0x301478: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30147Cu;
        goto label_30147c;
    }
    ctx->pc = 0x301474u;
    {
        const bool branch_taken_0x301474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x301474) {
            ctx->pc = 0x301478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x301474u;
            // 0x301478: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3014B8u;
            goto label_3014b8;
        }
    }
    ctx->pc = 0x30147Cu;
label_30147c:
    // 0x30147c: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x30147cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_301480:
    // 0x301480: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x301480u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_301484:
    // 0x301484: 0x40e02d  daddu       $gp, $v0, $zero
    ctx->pc = 0x301484u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_301488:
    // 0x301488: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x301488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_30148c:
    // 0x30148c: 0x40f809  jalr        $v0
label_301490:
    if (ctx->pc == 0x301490u) {
        ctx->pc = 0x301490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30148Cu;
        // 0x301490: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301494u;
        goto label_301494;
    }
    ctx->pc = 0x30148Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x301494u);
        ctx->pc = 0x301490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30148Cu;
        // 0x301490: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30148Cu, 0x301494u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x301494u;
label_301494:
    // 0x301494: 0x380182d  daddu       $v1, $gp, $zero
    ctx->pc = 0x301494u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_301498:
    // 0x301498: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x301498u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30149c:
    // 0x30149c: 0x10000005  b           . + 4 + (0x5 << 2)
label_3014a0:
    if (ctx->pc == 0x3014A0u) {
        ctx->pc = 0x3014A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30149Cu;
        // 0x3014a0: 0x8e51001c  lw          $s1, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3014A4u;
        goto label_3014a4;
    }
    ctx->pc = 0x30149Cu;
    {
        const bool branch_taken_0x30149c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3014A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30149Cu;
        // 0x3014a0: 0x8e51001c  lw          $s1, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30149c) {
            ctx->pc = 0x3014B4u;
            goto label_3014b4;
        }
    }
    ctx->pc = 0x3014A4u;
label_3014a4:
    // 0x3014a4: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x3014a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_3014a8:
    // 0x3014a8: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x3014a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_3014ac:
    // 0x3014ac: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x3014acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_3014b0:
    // 0x3014b0: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x3014b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
label_3014b4:
    // 0x3014b4: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x3014b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3014b8:
    // 0x3014b8: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
label_3014bc:
    if (ctx->pc == 0x3014BCu) {
        ctx->pc = 0x3014C0u;
        goto label_3014c0;
    }
    ctx->pc = 0x3014B8u;
    {
        const bool branch_taken_0x3014b8 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x3014b8) {
            ctx->pc = 0x3014C8u;
            goto label_3014c8;
        }
    }
    ctx->pc = 0x3014C0u;
label_3014c0:
    // 0x3014c0: 0xc0bf6e4  jal         func_2FDB90
label_3014c4:
    if (ctx->pc == 0x3014C4u) {
        ctx->pc = 0x3014C8u;
        goto label_3014c8;
    }
    ctx->pc = 0x3014C0u;
    SET_GPR_U32(ctx, 31, 0x3014C8u);
    ctx->pc = 0x2FDB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB90u, 0x3014C0u, 0x3014C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3014C8u;
label_3014c8:
    // 0x3014c8: 0xc0c04e4  jal         func_301390
label_3014cc:
    if (ctx->pc == 0x3014CCu) {
        ctx->pc = 0x3014CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3014C8u;
        // 0x3014cc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3014D0u;
        goto label_3014d0;
    }
    ctx->pc = 0x3014C8u;
    SET_GPR_U32(ctx, 31, 0x3014D0u);
    ctx->pc = 0x3014CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3014C8u;
    // 0x3014cc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301390u, 0x3014C8u, 0x3014D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3014D0u;
label_3014d0:
    // 0x3014d0: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x3014d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_3014d4:
    // 0x3014d4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3014d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3014d8:
    // 0x3014d8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3014d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3014dc:
    // 0x3014dc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3014dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3014e0:
    // 0x3014e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3014e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3014e4:
    // 0x3014e4: 0x3e00008  jr          $ra
label_3014e8:
    if (ctx->pc == 0x3014E8u) {
        ctx->pc = 0x3014E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3014E4u;
        // 0x3014e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3014ECu;
        goto label_3014ec;
    }
    ctx->pc = 0x3014E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3014E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3014E4u;
        // 0x3014e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3014E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3014ECu;
label_3014ec:
    // 0x3014ec: 0x0  nop
    ctx->pc = 0x3014ecu;
    // NOP
    ctx->pc = 0x3014f0u;
}
