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

// Function: sub_004193C0
// Address: 0x4193c0 - 0x419510
void sub_004193C0_0x4193c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004193C0_0x4193c0");
#endif

    switch (ctx->pc) {
        case 0x4193c0u: goto label_4193c0;
        case 0x4193c4u: goto label_4193c4;
        case 0x4193c8u: goto label_4193c8;
        case 0x4193ccu: goto label_4193cc;
        case 0x4193d0u: goto label_4193d0;
        case 0x4193d4u: goto label_4193d4;
        case 0x4193d8u: goto label_4193d8;
        case 0x4193dcu: goto label_4193dc;
        case 0x4193e0u: goto label_4193e0;
        case 0x4193e4u: goto label_4193e4;
        case 0x4193e8u: goto label_4193e8;
        case 0x4193ecu: goto label_4193ec;
        case 0x4193f0u: goto label_4193f0;
        case 0x4193f4u: goto label_4193f4;
        case 0x4193f8u: goto label_4193f8;
        case 0x4193fcu: goto label_4193fc;
        case 0x419400u: goto label_419400;
        case 0x419404u: goto label_419404;
        case 0x419408u: goto label_419408;
        case 0x41940cu: goto label_41940c;
        case 0x419410u: goto label_419410;
        case 0x419414u: goto label_419414;
        case 0x419418u: goto label_419418;
        case 0x41941cu: goto label_41941c;
        case 0x419420u: goto label_419420;
        case 0x419424u: goto label_419424;
        case 0x419428u: goto label_419428;
        case 0x41942cu: goto label_41942c;
        case 0x419430u: goto label_419430;
        case 0x419434u: goto label_419434;
        case 0x419438u: goto label_419438;
        case 0x41943cu: goto label_41943c;
        case 0x419440u: goto label_419440;
        case 0x419444u: goto label_419444;
        case 0x419448u: goto label_419448;
        case 0x41944cu: goto label_41944c;
        case 0x419450u: goto label_419450;
        case 0x419454u: goto label_419454;
        case 0x419458u: goto label_419458;
        case 0x41945cu: goto label_41945c;
        case 0x419460u: goto label_419460;
        case 0x419464u: goto label_419464;
        case 0x419468u: goto label_419468;
        case 0x41946cu: goto label_41946c;
        case 0x419470u: goto label_419470;
        case 0x419474u: goto label_419474;
        case 0x419478u: goto label_419478;
        case 0x41947cu: goto label_41947c;
        case 0x419480u: goto label_419480;
        case 0x419484u: goto label_419484;
        case 0x419488u: goto label_419488;
        case 0x41948cu: goto label_41948c;
        case 0x419490u: goto label_419490;
        case 0x419494u: goto label_419494;
        case 0x419498u: goto label_419498;
        case 0x41949cu: goto label_41949c;
        case 0x4194a0u: goto label_4194a0;
        case 0x4194a4u: goto label_4194a4;
        case 0x4194a8u: goto label_4194a8;
        case 0x4194acu: goto label_4194ac;
        case 0x4194b0u: goto label_4194b0;
        case 0x4194b4u: goto label_4194b4;
        case 0x4194b8u: goto label_4194b8;
        case 0x4194bcu: goto label_4194bc;
        case 0x4194c0u: goto label_4194c0;
        case 0x4194c4u: goto label_4194c4;
        case 0x4194c8u: goto label_4194c8;
        case 0x4194ccu: goto label_4194cc;
        case 0x4194d0u: goto label_4194d0;
        case 0x4194d4u: goto label_4194d4;
        case 0x4194d8u: goto label_4194d8;
        case 0x4194dcu: goto label_4194dc;
        case 0x4194e0u: goto label_4194e0;
        case 0x4194e4u: goto label_4194e4;
        case 0x4194e8u: goto label_4194e8;
        case 0x4194ecu: goto label_4194ec;
        case 0x4194f0u: goto label_4194f0;
        case 0x4194f4u: goto label_4194f4;
        case 0x4194f8u: goto label_4194f8;
        case 0x4194fcu: goto label_4194fc;
        case 0x419500u: goto label_419500;
        case 0x419504u: goto label_419504;
        case 0x419508u: goto label_419508;
        case 0x41950cu: goto label_41950c;
        default: break;
    }

    ctx->pc = 0x4193c0u;

label_4193c0:
    // 0x4193c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4193c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4193c4:
    // 0x4193c4: 0x8f83be00  lw          $v1, -0x4200($gp)
    ctx->pc = 0x4193c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950400)));
label_4193c8:
    // 0x4193c8: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x4193c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
label_4193cc:
    // 0x4193cc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4193ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_4193d0:
    // 0x4193d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4193d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4193d4:
    // 0x4193d4: 0x24c6e880  addiu       $a2, $a2, -0x1780
    ctx->pc = 0x4193d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961280));
label_4193d8:
    // 0x4193d8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4193d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_4193dc:
    // 0x4193dc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x4193dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_4193e0:
    // 0x4193e0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4193e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_4193e4:
    // 0x4193e4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4193e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4193e8:
    // 0x4193e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4193e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4193ec:
    // 0x4193ec: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4193ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4193f0:
    // 0x4193f0: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x4193f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_4193f4:
    // 0x4193f4: 0x8cc20118  lw          $v0, 0x118($a2)
    ctx->pc = 0x4193f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 280)));
label_4193f8:
    // 0x4193f8: 0x34a5000e  ori         $a1, $a1, 0xE
    ctx->pc = 0x4193f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)14);
label_4193fc:
    // 0x4193fc: 0x40f809  jalr        $v0
label_419400:
    if (ctx->pc == 0x419400u) {
        ctx->pc = 0x419400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4193FCu;
        // 0x419400: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x419404u;
        goto label_419404;
    }
    ctx->pc = 0x4193FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x419404u);
        ctx->pc = 0x419400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4193FCu;
        // 0x419400: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4193FCu, 0x419404u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x419404u;
label_419404:
    // 0x419404: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x419404u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_419408:
    // 0x419408: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
label_41940c:
    if (ctx->pc == 0x41940Cu) {
        ctx->pc = 0x41940Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419408u;
        // 0x41940c: 0x233980a  movz        $s3, $s1, $s3 (Delay Slot)
        if (GPR_U64(ctx, 19) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x419410u;
        goto label_419410;
    }
    ctx->pc = 0x419408u;
    {
        const bool branch_taken_0x419408 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x41940Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419408u;
        // 0x41940c: 0x233980a  movz        $s3, $s1, $s3 (Delay Slot)
        if (GPR_U64(ctx, 19) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419408) {
            ctx->pc = 0x419428u;
            goto label_419428;
        }
    }
    ctx->pc = 0x419410u;
label_419410:
    // 0x419410: 0x10000037  b           . + 4 + (0x37 << 2)
label_419414:
    if (ctx->pc == 0x419414u) {
        ctx->pc = 0x419414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419410u;
        // 0x419414: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x419418u;
        goto label_419418;
    }
    ctx->pc = 0x419410u;
    {
        const bool branch_taken_0x419410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x419414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419410u;
        // 0x419414: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419410) {
            ctx->pc = 0x4194F0u;
            goto label_4194f0;
        }
    }
    ctx->pc = 0x419418u;
label_419418:
    // 0x419418: 0xc106698  jal         func_419A60
label_41941c:
    if (ctx->pc == 0x41941Cu) {
        ctx->pc = 0x41941Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419418u;
        // 0x41941c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x419420u;
        goto label_419420;
    }
    ctx->pc = 0x419418u;
    SET_GPR_U32(ctx, 31, 0x419420u);
    ctx->pc = 0x41941Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x419418u;
    // 0x41941c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419A60u, 0x419418u, 0x419420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419420u;
label_419420:
    // 0x419420: 0x10000033  b           . + 4 + (0x33 << 2)
label_419424:
    if (ctx->pc == 0x419424u) {
        ctx->pc = 0x419424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419420u;
        // 0x419424: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x419428u;
        goto label_419428;
    }
    ctx->pc = 0x419420u;
    {
        const bool branch_taken_0x419420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x419424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419420u;
        // 0x419424: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419420) {
            ctx->pc = 0x4194F0u;
            goto label_4194f0;
        }
    }
    ctx->pc = 0x419428u;
label_419428:
    // 0x419428: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x419428u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_41942c:
    // 0x41942c: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x41942cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_419430:
    // 0x419430: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x419430u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_419434:
    // 0x419434: 0xa2230001  sb          $v1, 0x1($s1)
    ctx->pc = 0x419434u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
label_419438:
    // 0x419438: 0x92420002  lbu         $v0, 0x2($s2)
    ctx->pc = 0x419438u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_41943c:
    // 0x41943c: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x41943cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
label_419440:
    // 0x419440: 0x92430003  lbu         $v1, 0x3($s2)
    ctx->pc = 0x419440u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_419444:
    // 0x419444: 0xa2230003  sb          $v1, 0x3($s1)
    ctx->pc = 0x419444u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 3));
label_419448:
    // 0x419448: 0x26220090  addiu       $v0, $s1, 0x90
    ctx->pc = 0x419448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_41944c:
    // 0x41944c: 0xae220094  sw          $v0, 0x94($s1)
    ctx->pc = 0x41944cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 2));
label_419450:
    // 0x419450: 0xae220090  sw          $v0, 0x90($s1)
    ctx->pc = 0x419450u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 2));
label_419454:
    // 0x419454: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x419454u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_419458:
    // 0x419458: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x419458u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_41945c:
    // 0x41945c: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x41945cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_419460:
    // 0x419460: 0x7a430020  lq          $v1, 0x20($s2)
    ctx->pc = 0x419460u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 32)));
label_419464:
    // 0x419464: 0x7e230020  sq          $v1, 0x20($s1)
    ctx->pc = 0x419464u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
label_419468:
    // 0x419468: 0x7a420030  lq          $v0, 0x30($s2)
    ctx->pc = 0x419468u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 48)));
label_41946c:
    // 0x41946c: 0x7e220030  sq          $v0, 0x30($s1)
    ctx->pc = 0x41946cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 2));
label_419470:
    // 0x419470: 0x7a430040  lq          $v1, 0x40($s2)
    ctx->pc = 0x419470u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 64)));
label_419474:
    // 0x419474: 0xae200098  sw          $zero, 0x98($s1)
    ctx->pc = 0x419474u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 0));
label_419478:
    // 0x419478: 0x7e230040  sq          $v1, 0x40($s1)
    ctx->pc = 0x419478u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), GPR_VEC(ctx, 3));
label_41947c:
    // 0x41947c: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x41947cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_419480:
    // 0x419480: 0xae3300a0  sw          $s3, 0xA0($s1)
    ctx->pc = 0x419480u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 19));
label_419484:
    // 0x419484: 0xae5100a0  sw          $s1, 0xA0($s2)
    ctx->pc = 0x419484u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 17));
label_419488:
    // 0x419488: 0x8e500098  lw          $s0, 0x98($s2)
    ctx->pc = 0x419488u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
label_41948c:
    // 0x41948c: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_419490:
    if (ctx->pc == 0x419490u) {
        ctx->pc = 0x419490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41948Cu;
        // 0x419490: 0x3c10005e  lui         $s0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x419494u;
        goto label_419494;
    }
    ctx->pc = 0x41948Cu;
    {
        const bool branch_taken_0x41948c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x41948c) {
            ctx->pc = 0x419490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41948Cu;
            // 0x419490: 0x3c10005e  lui         $s0, 0x5E (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4194CCu;
            goto label_4194cc;
        }
    }
    ctx->pc = 0x419494u;
label_419494:
    // 0x419494: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x419494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_419498:
    // 0x419498: 0xc1064f0  jal         func_4193C0
label_41949c:
    if (ctx->pc == 0x41949Cu) {
        ctx->pc = 0x41949Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419498u;
        // 0x41949c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4194A0u;
        goto label_4194a0;
    }
    ctx->pc = 0x419498u;
    SET_GPR_U32(ctx, 31, 0x4194A0u);
    ctx->pc = 0x41949Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x419498u;
    // 0x41949c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4193C0u;
    goto label_4193c0;
    ctx->pc = 0x4194A0u;
label_4194a0:
    // 0x4194a0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4194a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4194a4:
    // 0x4194a4: 0x1060ffdc  beqz        $v1, . + 4 + (-0x24 << 2)
label_4194a8:
    if (ctx->pc == 0x4194A8u) {
        ctx->pc = 0x4194ACu;
        goto label_4194ac;
    }
    ctx->pc = 0x4194A4u;
    {
        const bool branch_taken_0x4194a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4194a4) {
            ctx->pc = 0x419418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_419418;
        }
    }
    ctx->pc = 0x4194ACu;
label_4194ac:
    // 0x4194ac: 0x8e220098  lw          $v0, 0x98($s1)
    ctx->pc = 0x4194acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_4194b0:
    // 0x4194b0: 0xac710004  sw          $s1, 0x4($v1)
    ctx->pc = 0x4194b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
label_4194b4:
    // 0x4194b4: 0xac62009c  sw          $v0, 0x9C($v1)
    ctx->pc = 0x4194b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 156), GPR_U32(ctx, 2));
label_4194b8:
    // 0x4194b8: 0xae230098  sw          $v1, 0x98($s1)
    ctx->pc = 0x4194b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 3));
label_4194bc:
    // 0x4194bc: 0x8e10009c  lw          $s0, 0x9C($s0)
    ctx->pc = 0x4194bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_4194c0:
    // 0x4194c0: 0x1600fff5  bnez        $s0, . + 4 + (-0xB << 2)
label_4194c4:
    if (ctx->pc == 0x4194C4u) {
        ctx->pc = 0x4194C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4194C0u;
        // 0x4194c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4194C8u;
        goto label_4194c8;
    }
    ctx->pc = 0x4194C0u;
    {
        const bool branch_taken_0x4194c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4194C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4194C0u;
        // 0x4194c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4194c0) {
            ctx->pc = 0x419498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_419498;
        }
    }
    ctx->pc = 0x4194C8u;
label_4194c8:
    // 0x4194c8: 0x3c10005e  lui         $s0, 0x5E
    ctx->pc = 0x4194c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
label_4194cc:
    // 0x4194cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4194ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4194d0:
    // 0x4194d0: 0x2610c9c8  addiu       $s0, $s0, -0x3638
    ctx->pc = 0x4194d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294953416));
label_4194d4:
    // 0x4194d4: 0xc104c80  jal         func_413200
label_4194d8:
    if (ctx->pc == 0x4194D8u) {
        ctx->pc = 0x4194D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4194D4u;
        // 0x4194d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4194DCu;
        goto label_4194dc;
    }
    ctx->pc = 0x4194D4u;
    SET_GPR_U32(ctx, 31, 0x4194DCu);
    ctx->pc = 0x4194D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4194D4u;
    // 0x4194d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413200u, 0x4194D4u, 0x4194DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4194DCu;
label_4194dc:
    // 0x4194dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4194dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4194e0:
    // 0x4194e0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4194e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4194e4:
    // 0x4194e4: 0xc104cbe  jal         func_4132F8
label_4194e8:
    if (ctx->pc == 0x4194E8u) {
        ctx->pc = 0x4194E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4194E4u;
        // 0x4194e8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4194ECu;
        goto label_4194ec;
    }
    ctx->pc = 0x4194E4u;
    SET_GPR_U32(ctx, 31, 0x4194ECu);
    ctx->pc = 0x4194E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4194E4u;
    // 0x4194e8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4132F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4132F8u, 0x4194E4u, 0x4194ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4194ECu;
label_4194ec:
    // 0x4194ec: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4194ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4194f0:
    // 0x4194f0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4194f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4194f4:
    // 0x4194f4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4194f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4194f8:
    // 0x4194f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4194f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4194fc:
    // 0x4194fc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4194fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_419500:
    // 0x419500: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x419500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_419504:
    // 0x419504: 0x3e00008  jr          $ra
label_419508:
    if (ctx->pc == 0x419508u) {
        ctx->pc = 0x419508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419504u;
        // 0x419508: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41950Cu;
        goto label_41950c;
    }
    ctx->pc = 0x419504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x419508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419504u;
        // 0x419508: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x419504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41950Cu;
label_41950c:
    // 0x41950c: 0x0  nop
    ctx->pc = 0x41950cu;
    // NOP
    ctx->pc = 0x419510u;
}
