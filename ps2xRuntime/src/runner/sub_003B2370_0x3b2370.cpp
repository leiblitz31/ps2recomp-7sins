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

// Function: sub_003B2370
// Address: 0x3b2370 - 0x3b2428
void sub_003B2370_0x3b2370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B2370_0x3b2370");
#endif

    switch (ctx->pc) {
        case 0x3b2370u: goto label_3b2370;
        case 0x3b2374u: goto label_3b2374;
        case 0x3b2378u: goto label_3b2378;
        case 0x3b237cu: goto label_3b237c;
        case 0x3b2380u: goto label_3b2380;
        case 0x3b2384u: goto label_3b2384;
        case 0x3b2388u: goto label_3b2388;
        case 0x3b238cu: goto label_3b238c;
        case 0x3b2390u: goto label_3b2390;
        case 0x3b2394u: goto label_3b2394;
        case 0x3b2398u: goto label_3b2398;
        case 0x3b239cu: goto label_3b239c;
        case 0x3b23a0u: goto label_3b23a0;
        case 0x3b23a4u: goto label_3b23a4;
        case 0x3b23a8u: goto label_3b23a8;
        case 0x3b23acu: goto label_3b23ac;
        case 0x3b23b0u: goto label_3b23b0;
        case 0x3b23b4u: goto label_3b23b4;
        case 0x3b23b8u: goto label_3b23b8;
        case 0x3b23bcu: goto label_3b23bc;
        case 0x3b23c0u: goto label_3b23c0;
        case 0x3b23c4u: goto label_3b23c4;
        case 0x3b23c8u: goto label_3b23c8;
        case 0x3b23ccu: goto label_3b23cc;
        case 0x3b23d0u: goto label_3b23d0;
        case 0x3b23d4u: goto label_3b23d4;
        case 0x3b23d8u: goto label_3b23d8;
        case 0x3b23dcu: goto label_3b23dc;
        case 0x3b23e0u: goto label_3b23e0;
        case 0x3b23e4u: goto label_3b23e4;
        case 0x3b23e8u: goto label_3b23e8;
        case 0x3b23ecu: goto label_3b23ec;
        case 0x3b23f0u: goto label_3b23f0;
        case 0x3b23f4u: goto label_3b23f4;
        case 0x3b23f8u: goto label_3b23f8;
        case 0x3b23fcu: goto label_3b23fc;
        case 0x3b2400u: goto label_3b2400;
        case 0x3b2404u: goto label_3b2404;
        case 0x3b2408u: goto label_3b2408;
        case 0x3b240cu: goto label_3b240c;
        case 0x3b2410u: goto label_3b2410;
        case 0x3b2414u: goto label_3b2414;
        case 0x3b2418u: goto label_3b2418;
        case 0x3b241cu: goto label_3b241c;
        case 0x3b2420u: goto label_3b2420;
        case 0x3b2424u: goto label_3b2424;
        default: break;
    }

    ctx->pc = 0x3b2370u;

label_3b2370:
    // 0x3b2370: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3b2370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3b2374:
    // 0x3b2374: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3b2374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3b2378:
    // 0x3b2378: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3b2378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3b237c:
    // 0x3b237c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b237cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b2380:
    // 0x3b2380: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3b2380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3b2384:
    // 0x3b2384: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
label_3b2388:
    if (ctx->pc == 0x3B2388u) {
        ctx->pc = 0x3B2388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2384u;
        // 0x3b2388: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B238Cu;
        goto label_3b238c;
    }
    ctx->pc = 0x3B2384u;
    {
        const bool branch_taken_0x3b2384 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2384u;
        // 0x3b2388: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2384) {
            ctx->pc = 0x3B2408u;
            goto label_3b2408;
        }
    }
    ctx->pc = 0x3B238Cu;
label_3b238c:
    // 0x3b238c: 0xc0ec8dc  jal         func_3B2370
label_3b2390:
    if (ctx->pc == 0x3B2390u) {
        ctx->pc = 0x3B2390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B238Cu;
        // 0x3b2390: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2394u;
        goto label_3b2394;
    }
    ctx->pc = 0x3B238Cu;
    SET_GPR_U32(ctx, 31, 0x3B2394u);
    ctx->pc = 0x3B2390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B238Cu;
    // 0x3b2390: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2370u;
    goto label_3b2370;
    ctx->pc = 0x3B2394u;
label_3b2394:
    // 0x3b2394: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3b2394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3b2398:
    // 0x3b2398: 0xc10376a  jal         func_40DDA8
label_3b239c:
    if (ctx->pc == 0x3B239Cu) {
        ctx->pc = 0x3B239Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2398u;
        // 0x3b239c: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B23A0u;
        goto label_3b23a0;
    }
    ctx->pc = 0x3B2398u;
    SET_GPR_U32(ctx, 31, 0x3B23A0u);
    ctx->pc = 0x3B239Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2398u;
    // 0x3b239c: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3B2398u, 0x3B23A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B23A0u;
label_3b23a0:
    // 0x3b23a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b23a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b23a4:
    // 0x3b23a4: 0x14430019  bne         $v0, $v1, . + 4 + (0x19 << 2)
label_3b23a8:
    if (ctx->pc == 0x3B23A8u) {
        ctx->pc = 0x3B23A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B23A4u;
        // 0x3b23a8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B23ACu;
        goto label_3b23ac;
    }
    ctx->pc = 0x3B23A4u;
    {
        const bool branch_taken_0x3b23a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3B23A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B23A4u;
        // 0x3b23a8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b23a4) {
            ctx->pc = 0x3B240Cu;
            goto label_3b240c;
        }
    }
    ctx->pc = 0x3B23ACu;
label_3b23ac:
    // 0x3b23ac: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3b23acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3b23b0:
    // 0x3b23b0: 0x3c110062  lui         $s1, 0x62
    ctx->pc = 0x3b23b0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)98 << 16));
label_3b23b4:
    // 0x3b23b4: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_3b23b8:
    if (ctx->pc == 0x3B23B8u) {
        ctx->pc = 0x3B23B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B23B4u;
        // 0x3b23b8: 0x8e120014  lw          $s2, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B23BCu;
        goto label_3b23bc;
    }
    ctx->pc = 0x3B23B4u;
    {
        const bool branch_taken_0x3b23b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B23B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B23B4u;
        // 0x3b23b8: 0x8e120014  lw          $s2, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b23b4) {
            ctx->pc = 0x3B23E8u;
            goto label_3b23e8;
        }
    }
    ctx->pc = 0x3B23BCu;
label_3b23bc:
    // 0x3b23bc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3b23bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3b23c0:
    // 0x3b23c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3b23c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3b23c4:
    // 0x3b23c4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_3b23c8:
    if (ctx->pc == 0x3B23C8u) {
        ctx->pc = 0x3B23C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B23C4u;
        // 0x3b23c8: 0x2622e880  addiu       $v0, $s1, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B23CCu;
        goto label_3b23cc;
    }
    ctx->pc = 0x3B23C4u;
    {
        const bool branch_taken_0x3b23c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B23C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B23C4u;
        // 0x3b23c8: 0x2622e880  addiu       $v0, $s1, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b23c4) {
            ctx->pc = 0x3B23DCu;
            goto label_3b23dc;
        }
    }
    ctx->pc = 0x3B23CCu;
label_3b23cc:
    // 0x3b23cc: 0xc103684  jal         func_40DA10
label_3b23d0:
    if (ctx->pc == 0x3B23D0u) {
        ctx->pc = 0x3B23D4u;
        goto label_3b23d4;
    }
    ctx->pc = 0x3B23CCu;
    SET_GPR_U32(ctx, 31, 0x3B23D4u);
    ctx->pc = 0x40DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DA10u, 0x3B23CCu, 0x3B23D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B23D4u;
label_3b23d4:
    // 0x3b23d4: 0x10000005  b           . + 4 + (0x5 << 2)
label_3b23d8:
    if (ctx->pc == 0x3B23D8u) {
        ctx->pc = 0x3B23D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B23D4u;
        // 0x3b23d8: 0x2623e880  addiu       $v1, $s1, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B23DCu;
        goto label_3b23dc;
    }
    ctx->pc = 0x3B23D4u;
    {
        const bool branch_taken_0x3b23d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B23D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B23D4u;
        // 0x3b23d8: 0x2623e880  addiu       $v1, $s1, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b23d4) {
            ctx->pc = 0x3B23ECu;
            goto label_3b23ec;
        }
    }
    ctx->pc = 0x3B23DCu;
label_3b23dc:
    // 0x3b23dc: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x3b23dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_3b23e0:
    // 0x3b23e0: 0x60f809  jalr        $v1
label_3b23e4:
    if (ctx->pc == 0x3B23E4u) {
        ctx->pc = 0x3B23E8u;
        goto label_3b23e8;
    }
    ctx->pc = 0x3B23E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3B23E8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B23E0u, 0x3B23E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B23E8u;
label_3b23e8:
    // 0x3b23e8: 0x2623e880  addiu       $v1, $s1, -0x1780
    ctx->pc = 0x3b23e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961280));
label_3b23ec:
    // 0x3b23ec: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x3b23ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
label_3b23f0:
    // 0x3b23f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3b23f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b23f4:
    // 0x3b23f4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3b23f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_3b23f8:
    // 0x3b23f8: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x3b23f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_3b23fc:
    // 0x3b23fc: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x3b23fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b2400:
    // 0x3b2400: 0x40f809  jalr        $v0
label_3b2404:
    if (ctx->pc == 0x3B2404u) {
        ctx->pc = 0x3B2404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2400u;
        // 0x3b2404: 0x8cc4d3a4  lw          $a0, -0x2C5C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294955940)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2408u;
        goto label_3b2408;
    }
    ctx->pc = 0x3B2400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B2408u);
        ctx->pc = 0x3B2404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2400u;
        // 0x3b2404: 0x8cc4d3a4  lw          $a0, -0x2C5C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294955940)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B2400u, 0x3B2408u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B2408u;
label_3b2408:
    // 0x3b2408: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3b2408u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b240c:
    // 0x3b240c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3b240cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b2410:
    // 0x3b2410: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3b2410u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3b2414:
    // 0x3b2414: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3b2414u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b2418:
    // 0x3b2418: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b2418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b241c:
    // 0x3b241c: 0x3e00008  jr          $ra
label_3b2420:
    if (ctx->pc == 0x3B2420u) {
        ctx->pc = 0x3B2420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B241Cu;
        // 0x3b2420: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2424u;
        goto label_3b2424;
    }
    ctx->pc = 0x3B241Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B2420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B241Cu;
        // 0x3b2420: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B241Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B2424u;
label_3b2424:
    // 0x3b2424: 0x0  nop
    ctx->pc = 0x3b2424u;
    // NOP
    ctx->pc = 0x3b2428u;
}
