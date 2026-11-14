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

// Function: sub_00301530
// Address: 0x301530 - 0x301768
void sub_00301530_0x301530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00301530_0x301530");
#endif

    switch (ctx->pc) {
        case 0x301560u: goto label_301560;
        case 0x301570u: goto label_301570;
        case 0x3015c8u: goto label_3015c8;
        case 0x301640u: goto label_301640;
        case 0x301694u: goto label_301694;
        case 0x3016a4u: goto label_3016a4;
        case 0x3016ccu: goto label_3016cc;
        case 0x3016dcu: goto label_3016dc;
        case 0x3016e4u: goto label_3016e4;
        case 0x3016f4u: goto label_3016f4;
        case 0x3016fcu: goto label_3016fc;
        case 0x30172cu: goto label_30172c;
        case 0x30173cu: goto label_30173c;
        default: break;
    }

    ctx->pc = 0x301530u;

    // 0x301530: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x301530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x301534: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x301534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x301538: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x301538u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30153c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x30153cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x301540: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x301540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x301544: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x301544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301548: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x301548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x30154c: 0x30a20004  andi        $v0, $a1, 0x4
    ctx->pc = 0x30154cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x301550: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x301550u;
    {
        const bool branch_taken_0x301550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x301550) {
            ctx->pc = 0x301568u;
            goto label_301568;
        }
    }
    ctx->pc = 0x301558u;
    // 0x301558: 0xc0c04f8  jal         func_3013E0
    ctx->pc = 0x301558u;
    SET_GPR_U32(ctx, 31, 0x301560u);
    ctx->pc = 0x30155Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301558u;
    // 0x30155c: 0x52c02  srl         $a1, $a1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3013E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3013E0u, 0x301558u, 0x301560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301560u;
label_301560:
    // 0x301560: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x301560u;
    {
        const bool branch_taken_0x301560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301560u;
        // 0x301564: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301560) {
            ctx->pc = 0x301574u;
            goto label_301574;
        }
    }
    ctx->pc = 0x301568u;
label_301568:
    // 0x301568: 0xc0c04ec  jal         func_3013B0
    ctx->pc = 0x301568u;
    SET_GPR_U32(ctx, 31, 0x301570u);
    ctx->pc = 0x3013B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3013B0u, 0x301568u, 0x301570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301570u;
label_301570:
    // 0x301570: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x301570u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_301574:
    // 0x301574: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x301574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x301578: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x301578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x30157c: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x30157cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x301580: 0x3442000c  ori         $v0, $v0, 0xC
    ctx->pc = 0x301580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12);
    // 0x301584: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x301584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x301588: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x301588u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x30158c: 0xae05001c  sw          $a1, 0x1C($s0)
    ctx->pc = 0x30158cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 5));
    // 0x301590: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x301590u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x301594: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x301594u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x301598: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x301598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30159c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x30159cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3015a0: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x3015a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x3015a4: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x3015a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x3015a8: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x3015a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x3015ac: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x3015acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x3015b0: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x3015b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x3015b4: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x3015b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x3015b8: 0x8e290028  lw          $t1, 0x28($s1)
    ctx->pc = 0x3015b8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x3015bc: 0x8e270020  lw          $a3, 0x20($s1)
    ctx->pc = 0x3015bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x3015c0: 0xc0c03ba  jal         func_300EE8
    ctx->pc = 0x3015C0u;
    SET_GPR_U32(ctx, 31, 0x3015C8u);
    ctx->pc = 0x3015C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3015C0u;
    // 0x3015c4: 0x8e280024  lw          $t0, 0x24($s1) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300EE8u, 0x3015C0u, 0x3015C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3015C8u;
label_3015c8:
    // 0x3015c8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3015C8u;
    {
        const bool branch_taken_0x3015c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3015CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3015C8u;
        // 0x3015cc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3015c8) {
            ctx->pc = 0x3015F0u;
            goto label_3015f0;
        }
    }
    ctx->pc = 0x3015D0u;
    // 0x3015d0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3015d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3015d4: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x3015d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x3015d8: 0x24a514f0  addiu       $a1, $a1, 0x14F0
    ctx->pc = 0x3015d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5360));
    // 0x3015dc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3015dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3015e0: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x3015e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x3015e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3015e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3015e8: 0x80c2678  j           func_3099E0
    ctx->pc = 0x3015E8u;
    ctx->pc = 0x3015ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3015E8u;
    // 0x3015ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3099E0u, 0x3015E8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3015F0u;
label_3015f0:
    // 0x3015f0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3015f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3015f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3015f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3015f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3015F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3015FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3015F8u;
        // 0x3015fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3015F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x301600u;
    // 0x301600: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x301600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x301604: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x301604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x301608: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x301608u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30160c: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x30160cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x301610: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x301610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x301614: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x301614u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x301618: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x301618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x30161c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x30161cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301620: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x301620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x301624: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x301624u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301628: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x301628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x30162c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x30162cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301630: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x301630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x301634: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x301634u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301638: 0xc0c04ba  jal         func_3012E8
    ctx->pc = 0x301638u;
    SET_GPR_U32(ctx, 31, 0x301640u);
    ctx->pc = 0x30163Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301638u;
    // 0x30163c: 0x248412c0  addiu       $a0, $a0, 0x12C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3012E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3012E8u, 0x301638u, 0x301640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301640u;
label_301640:
    // 0x301640: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x301640u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301644: 0x1200003e  beqz        $s0, . + 4 + (0x3E << 2)
    ctx->pc = 0x301644u;
    {
        const bool branch_taken_0x301644 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x301648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301644u;
        // 0x301648: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301644) {
            ctx->pc = 0x301740u;
            goto label_301740;
        }
    }
    ctx->pc = 0x30164Cu;
    // 0x30164c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x30164cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x301650: 0x32430001  andi        $v1, $s2, 0x1
    ctx->pc = 0x301650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x301654: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x301654u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x301658: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x301658u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x30165c: 0xae130020  sw          $s3, 0x20($s0)
    ctx->pc = 0x30165cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 19));
    // 0x301660: 0xae140024  sw          $s4, 0x24($s0)
    ctx->pc = 0x301660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 20));
    // 0x301664: 0xae150028  sw          $s5, 0x28($s0)
    ctx->pc = 0x301664u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 21));
    // 0x301668: 0xae100014  sw          $s0, 0x14($s0)
    ctx->pc = 0x301668u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 16));
    // 0x30166c: 0x14600025  bnez        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x30166Cu;
    {
        const bool branch_taken_0x30166c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x301670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30166Cu;
        // 0x301670: 0xae11001c  sw          $s1, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30166c) {
            ctx->pc = 0x301704u;
            goto label_301704;
        }
    }
    ctx->pc = 0x301674u;
    // 0x301674: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x301674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x301678: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x301678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30167c: 0x2442a9e8  addiu       $v0, $v0, -0x5618
    ctx->pc = 0x30167cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945256));
    // 0x301680: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x301680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x301684: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x301684u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x301688: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x301688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30168c: 0xc0bf6d8  jal         func_2FDB60
    ctx->pc = 0x30168Cu;
    SET_GPR_U32(ctx, 31, 0x301694u);
    ctx->pc = 0x301690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30168Cu;
    // 0x301690: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB60u, 0x30168Cu, 0x301694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301694u;
label_301694:
    // 0x301694: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x301694u;
    {
        const bool branch_taken_0x301694 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x301698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301694u;
        // 0x301698: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301694) {
            ctx->pc = 0x3016ACu;
            goto label_3016ac;
        }
    }
    ctx->pc = 0x30169Cu;
    // 0x30169c: 0xc0c04e4  jal         func_301390
    ctx->pc = 0x30169Cu;
    SET_GPR_U32(ctx, 31, 0x3016A4u);
    ctx->pc = 0x3016A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30169Cu;
    // 0x3016a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301390u, 0x30169Cu, 0x3016A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3016A4u;
label_3016a4:
    // 0x3016a4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x3016A4u;
    {
        const bool branch_taken_0x3016a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3016A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3016A4u;
        // 0x3016a8: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3016a4) {
            ctx->pc = 0x301740u;
            goto label_301740;
        }
    }
    ctx->pc = 0x3016ACu;
label_3016ac:
    // 0x3016ac: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3016acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x3016b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3016b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3016b4: 0x3484000c  ori         $a0, $a0, 0xC
    ctx->pc = 0x3016b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12);
    // 0x3016b8: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x3016b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3016bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3016bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3016c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3016c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3016c4: 0xc0c03aa  jal         func_300EA8
    ctx->pc = 0x3016C4u;
    SET_GPR_U32(ctx, 31, 0x3016CCu);
    ctx->pc = 0x3016C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3016C4u;
    // 0x3016c8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300EA8u, 0x3016C4u, 0x3016CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3016CCu;
label_3016cc:
    // 0x3016cc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3016CCu;
    {
        const bool branch_taken_0x3016cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3016cc) {
            ctx->pc = 0x3016ECu;
            goto label_3016ec;
        }
    }
    ctx->pc = 0x3016D4u;
    // 0x3016d4: 0xc0c04e4  jal         func_301390
    ctx->pc = 0x3016D4u;
    SET_GPR_U32(ctx, 31, 0x3016DCu);
    ctx->pc = 0x3016D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3016D4u;
    // 0x3016d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301390u, 0x3016D4u, 0x3016DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3016DCu;
label_3016dc:
    // 0x3016dc: 0xc0bf6dc  jal         func_2FDB70
    ctx->pc = 0x3016DCu;
    SET_GPR_U32(ctx, 31, 0x3016E4u);
    ctx->pc = 0x3016E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3016DCu;
    // 0x3016e0: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB70u, 0x3016DCu, 0x3016E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3016E4u;
label_3016e4:
    // 0x3016e4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x3016E4u;
    {
        const bool branch_taken_0x3016e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3016E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3016E4u;
        // 0x3016e8: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3016e4) {
            ctx->pc = 0x301740u;
            goto label_301740;
        }
    }
    ctx->pc = 0x3016ECu;
label_3016ec:
    // 0x3016ec: 0xc0bf6e8  jal         func_2FDBA0
    ctx->pc = 0x3016ECu;
    SET_GPR_U32(ctx, 31, 0x3016F4u);
    ctx->pc = 0x3016F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3016ECu;
    // 0x3016f0: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBA0u, 0x3016ECu, 0x3016F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3016F4u;
label_3016f4:
    // 0x3016f4: 0xc0bf6dc  jal         func_2FDB70
    ctx->pc = 0x3016F4u;
    SET_GPR_U32(ctx, 31, 0x3016FCu);
    ctx->pc = 0x3016F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3016F4u;
    // 0x3016f8: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB70u, 0x3016F4u, 0x3016FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3016FCu;
label_3016fc:
    // 0x3016fc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3016FCu;
    {
        const bool branch_taken_0x3016fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3016FCu;
        // 0x301700: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3016fc) {
            ctx->pc = 0x301740u;
            goto label_301740;
        }
    }
    ctx->pc = 0x301704u;
label_301704:
    // 0x301704: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x301704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x301708: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x301708u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x30170c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x30170cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x301710: 0x3484000c  ori         $a0, $a0, 0xC
    ctx->pc = 0x301710u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12);
    // 0x301714: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x301714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301718: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x301718u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x30171c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30171cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301720: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x301720u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301724: 0xc0c03aa  jal         func_300EA8
    ctx->pc = 0x301724u;
    SET_GPR_U32(ctx, 31, 0x30172Cu);
    ctx->pc = 0x301728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301724u;
    // 0x301728: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300EA8u, 0x301724u, 0x30172Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30172Cu;
label_30172c:
    // 0x30172c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30172Cu;
    {
        const bool branch_taken_0x30172c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x301730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30172Cu;
        // 0x301730: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30172c) {
            ctx->pc = 0x301740u;
            goto label_301740;
        }
    }
    ctx->pc = 0x301734u;
    // 0x301734: 0xc0c04e4  jal         func_301390
    ctx->pc = 0x301734u;
    SET_GPR_U32(ctx, 31, 0x30173Cu);
    ctx->pc = 0x301738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301734u;
    // 0x301738: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301390u, 0x301734u, 0x30173Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30173Cu;
label_30173c:
    // 0x30173c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x30173cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_301740:
    // 0x301740: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x301740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x301744: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x301744u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x301748: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x301748u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30174c: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x30174cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x301750: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x301750u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x301754: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x301754u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x301758: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x301758u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30175c: 0x3e00008  jr          $ra
    ctx->pc = 0x30175Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x301760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30175Cu;
        // 0x301760: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30175Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x301764u;
    // 0x301764: 0x0  nop
    ctx->pc = 0x301764u;
    // NOP
    ctx->pc = 0x301768u;
}
