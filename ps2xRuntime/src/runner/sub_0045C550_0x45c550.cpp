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

// Function: sub_0045C550
// Address: 0x45c550 - 0x45c6b0
void sub_0045C550_0x45c550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045C550_0x45c550");
#endif

    switch (ctx->pc) {
        case 0x45c550u: goto label_45c550;
        case 0x45c554u: goto label_45c554;
        case 0x45c558u: goto label_45c558;
        case 0x45c55cu: goto label_45c55c;
        case 0x45c560u: goto label_45c560;
        case 0x45c564u: goto label_45c564;
        case 0x45c568u: goto label_45c568;
        case 0x45c56cu: goto label_45c56c;
        case 0x45c570u: goto label_45c570;
        case 0x45c574u: goto label_45c574;
        case 0x45c578u: goto label_45c578;
        case 0x45c57cu: goto label_45c57c;
        case 0x45c580u: goto label_45c580;
        case 0x45c584u: goto label_45c584;
        case 0x45c588u: goto label_45c588;
        case 0x45c58cu: goto label_45c58c;
        case 0x45c590u: goto label_45c590;
        case 0x45c594u: goto label_45c594;
        case 0x45c598u: goto label_45c598;
        case 0x45c59cu: goto label_45c59c;
        case 0x45c5a0u: goto label_45c5a0;
        case 0x45c5a4u: goto label_45c5a4;
        case 0x45c5a8u: goto label_45c5a8;
        case 0x45c5acu: goto label_45c5ac;
        case 0x45c5b0u: goto label_45c5b0;
        case 0x45c5b4u: goto label_45c5b4;
        case 0x45c5b8u: goto label_45c5b8;
        case 0x45c5bcu: goto label_45c5bc;
        case 0x45c5c0u: goto label_45c5c0;
        case 0x45c5c4u: goto label_45c5c4;
        case 0x45c5c8u: goto label_45c5c8;
        case 0x45c5ccu: goto label_45c5cc;
        case 0x45c5d0u: goto label_45c5d0;
        case 0x45c5d4u: goto label_45c5d4;
        case 0x45c5d8u: goto label_45c5d8;
        case 0x45c5dcu: goto label_45c5dc;
        case 0x45c5e0u: goto label_45c5e0;
        case 0x45c5e4u: goto label_45c5e4;
        case 0x45c5e8u: goto label_45c5e8;
        case 0x45c5ecu: goto label_45c5ec;
        case 0x45c5f0u: goto label_45c5f0;
        case 0x45c5f4u: goto label_45c5f4;
        case 0x45c5f8u: goto label_45c5f8;
        case 0x45c5fcu: goto label_45c5fc;
        case 0x45c600u: goto label_45c600;
        case 0x45c604u: goto label_45c604;
        case 0x45c608u: goto label_45c608;
        case 0x45c60cu: goto label_45c60c;
        case 0x45c610u: goto label_45c610;
        case 0x45c614u: goto label_45c614;
        case 0x45c618u: goto label_45c618;
        case 0x45c61cu: goto label_45c61c;
        case 0x45c620u: goto label_45c620;
        case 0x45c624u: goto label_45c624;
        case 0x45c628u: goto label_45c628;
        case 0x45c62cu: goto label_45c62c;
        case 0x45c630u: goto label_45c630;
        case 0x45c634u: goto label_45c634;
        case 0x45c638u: goto label_45c638;
        case 0x45c63cu: goto label_45c63c;
        case 0x45c640u: goto label_45c640;
        case 0x45c644u: goto label_45c644;
        case 0x45c648u: goto label_45c648;
        case 0x45c64cu: goto label_45c64c;
        case 0x45c650u: goto label_45c650;
        case 0x45c654u: goto label_45c654;
        case 0x45c658u: goto label_45c658;
        case 0x45c65cu: goto label_45c65c;
        case 0x45c660u: goto label_45c660;
        case 0x45c664u: goto label_45c664;
        case 0x45c668u: goto label_45c668;
        case 0x45c66cu: goto label_45c66c;
        case 0x45c670u: goto label_45c670;
        case 0x45c674u: goto label_45c674;
        case 0x45c678u: goto label_45c678;
        case 0x45c67cu: goto label_45c67c;
        case 0x45c680u: goto label_45c680;
        case 0x45c684u: goto label_45c684;
        case 0x45c688u: goto label_45c688;
        case 0x45c68cu: goto label_45c68c;
        case 0x45c690u: goto label_45c690;
        case 0x45c694u: goto label_45c694;
        case 0x45c698u: goto label_45c698;
        case 0x45c69cu: goto label_45c69c;
        case 0x45c6a0u: goto label_45c6a0;
        case 0x45c6a4u: goto label_45c6a4;
        case 0x45c6a8u: goto label_45c6a8;
        case 0x45c6acu: goto label_45c6ac;
        default: break;
    }

    ctx->pc = 0x45c550u;

label_45c550:
    // 0x45c550: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x45c550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_45c554:
    // 0x45c554: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x45c554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_45c558:
    // 0x45c558: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x45c558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_45c55c:
    // 0x45c55c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x45c55cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_45c560:
    // 0x45c560: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x45c560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_45c564:
    // 0x45c564: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x45c564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_45c568:
    // 0x45c568: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45c568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_45c56c:
    // 0x45c56c: 0xafa500c0  sw          $a1, 0xC0($sp)
    ctx->pc = 0x45c56cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
label_45c570:
    // 0x45c570: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x45c570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_45c574:
    // 0x45c574: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x45c574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_45c578:
    // 0x45c578: 0xc0bc5c6  jal         func_2F1718
label_45c57c:
    if (ctx->pc == 0x45C57Cu) {
        ctx->pc = 0x45C580u;
        goto label_45c580;
    }
    ctx->pc = 0x45C578u;
    SET_GPR_U32(ctx, 31, 0x45C580u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x45C578u, 0x45C580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45C580u;
label_45c580:
    // 0x45c580: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x45c580u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45c584:
    // 0x45c584: 0x1000000c  b           . + 4 + (0xC << 2)
label_45c588:
    if (ctx->pc == 0x45C588u) {
        ctx->pc = 0x45C58Cu;
        goto label_45c58c;
    }
    ctx->pc = 0x45C584u;
    {
        const bool branch_taken_0x45c584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45c584) {
            ctx->pc = 0x45C5B8u;
            goto label_45c5b8;
        }
    }
    ctx->pc = 0x45C58Cu;
label_45c58c:
    // 0x45c58c: 0x21d1021  addu        $v0, $s0, $sp
    ctx->pc = 0x45c58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
label_45c590:
    // 0x45c590: 0x80420060  lb          $v0, 0x60($v0)
    ctx->pc = 0x45c590u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 96)));
label_45c594:
    // 0x45c594: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x45c594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
label_45c598:
    // 0x45c598: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x45c598u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_45c59c:
    // 0x45c59c: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x45c59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_45c5a0:
    // 0x45c5a0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_45c5a4:
    if (ctx->pc == 0x45C5A4u) {
        ctx->pc = 0x45C5A8u;
        goto label_45c5a8;
    }
    ctx->pc = 0x45C5A0u;
    {
        const bool branch_taken_0x45c5a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x45c5a0) {
            ctx->pc = 0x45C5B4u;
            goto label_45c5b4;
        }
    }
    ctx->pc = 0x45C5A8u;
label_45c5a8:
    // 0x45c5a8: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x45c5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_45c5ac:
    // 0x45c5ac: 0x21d1021  addu        $v0, $s0, $sp
    ctx->pc = 0x45c5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
label_45c5b0:
    // 0x45c5b0: 0xa0430060  sb          $v1, 0x60($v0)
    ctx->pc = 0x45c5b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 96), (uint8_t)GPR_U32(ctx, 3));
label_45c5b4:
    // 0x45c5b4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x45c5b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_45c5b8:
    // 0x45c5b8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x45c5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_45c5bc:
    // 0x45c5bc: 0xc0bc60c  jal         func_2F1830
label_45c5c0:
    if (ctx->pc == 0x45C5C0u) {
        ctx->pc = 0x45C5C4u;
        goto label_45c5c4;
    }
    ctx->pc = 0x45C5BCu;
    SET_GPR_U32(ctx, 31, 0x45C5C4u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x45C5BCu, 0x45C5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45C5C4u;
label_45c5c4:
    // 0x45c5c4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x45c5c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_45c5c8:
    // 0x45c5c8: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_45c5cc:
    if (ctx->pc == 0x45C5CCu) {
        ctx->pc = 0x45C5D0u;
        goto label_45c5d0;
    }
    ctx->pc = 0x45C5C8u;
    {
        const bool branch_taken_0x45c5c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45c5c8) {
            ctx->pc = 0x45C58Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45c58c;
        }
    }
    ctx->pc = 0x45C5D0u;
label_45c5d0:
    // 0x45c5d0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x45c5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_45c5d4:
    // 0x45c5d4: 0xc117948  jal         func_45E520
label_45c5d8:
    if (ctx->pc == 0x45C5D8u) {
        ctx->pc = 0x45C5DCu;
        goto label_45c5dc;
    }
    ctx->pc = 0x45C5D4u;
    SET_GPR_U32(ctx, 31, 0x45C5DCu);
    ctx->pc = 0x45E520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45E520u, 0x45C5D4u, 0x45C5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45C5DCu;
label_45c5dc:
    // 0x45c5dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x45c5dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45c5e0:
    // 0x45c5e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x45c5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45c5e4:
    // 0x45c5e4: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
label_45c5e8:
    if (ctx->pc == 0x45C5E8u) {
        ctx->pc = 0x45C5ECu;
        goto label_45c5ec;
    }
    ctx->pc = 0x45C5E4u;
    {
        const bool branch_taken_0x45c5e4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x45c5e4) {
            ctx->pc = 0x45C5F8u;
            goto label_45c5f8;
        }
    }
    ctx->pc = 0x45C5ECu;
label_45c5ec:
    // 0x45c5ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x45c5ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45c5f0:
    // 0x45c5f0: 0x10000023  b           . + 4 + (0x23 << 2)
label_45c5f4:
    if (ctx->pc == 0x45C5F4u) {
        ctx->pc = 0x45C5F8u;
        goto label_45c5f8;
    }
    ctx->pc = 0x45C5F0u;
    {
        const bool branch_taken_0x45c5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45c5f0) {
            ctx->pc = 0x45C680u;
            goto label_45c680;
        }
    }
    ctx->pc = 0x45C5F8u;
label_45c5f8:
    // 0x45c5f8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x45c5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_45c5fc:
    // 0x45c5fc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45c5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45c600:
    // 0x45c600: 0x8c42e974  lw          $v0, -0x168C($v0)
    ctx->pc = 0x45c600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961524)));
label_45c604:
    // 0x45c604: 0x40f809  jalr        $v0
label_45c608:
    if (ctx->pc == 0x45C608u) {
        ctx->pc = 0x45C60Cu;
        goto label_45c60c;
    }
    ctx->pc = 0x45C604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x45C60Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45C604u, 0x45C60Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x45C60Cu;
label_45c60c:
    // 0x45c60c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x45c60cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45c610:
    // 0x45c610: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x45c610u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_45c614:
    // 0x45c614: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45c614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45c618:
    // 0x45c618: 0x24424c80  addiu       $v0, $v0, 0x4C80
    ctx->pc = 0x45c618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19584));
label_45c61c:
    // 0x45c61c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45c61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45c620:
    // 0x45c620: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x45c620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45c624:
    // 0x45c624: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45c624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45c628:
    // 0x45c628: 0x8c42e974  lw          $v0, -0x168C($v0)
    ctx->pc = 0x45c628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961524)));
label_45c62c:
    // 0x45c62c: 0x40f809  jalr        $v0
label_45c630:
    if (ctx->pc == 0x45C630u) {
        ctx->pc = 0x45C634u;
        goto label_45c634;
    }
    ctx->pc = 0x45C62Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x45C634u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45C62Cu, 0x45C634u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x45C634u;
label_45c634:
    // 0x45c634: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x45c634u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45c638:
    // 0x45c638: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x45c638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_45c63c:
    // 0x45c63c: 0x539021  addu        $s2, $v0, $s3
    ctx->pc = 0x45c63cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_45c640:
    // 0x45c640: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x45c640u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_45c644:
    // 0x45c644: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45c644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45c648:
    // 0x45c648: 0x24424c80  addiu       $v0, $v0, 0x4C80
    ctx->pc = 0x45c648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19584));
label_45c64c:
    // 0x45c64c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45c64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45c650:
    // 0x45c650: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x45c650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45c654:
    // 0x45c654: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x45c654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_45c658:
    // 0x45c658: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x45c658u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45c65c:
    // 0x45c65c: 0xc1170e0  jal         func_45C380
label_45c660:
    if (ctx->pc == 0x45C660u) {
        ctx->pc = 0x45C664u;
        goto label_45c664;
    }
    ctx->pc = 0x45C65Cu;
    SET_GPR_U32(ctx, 31, 0x45C664u);
    ctx->pc = 0x45C380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45C380u, 0x45C65Cu, 0x45C664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45C664u;
label_45c664:
    // 0x45c664: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x45c664u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45c668:
    // 0x45c668: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
label_45c66c:
    if (ctx->pc == 0x45C66Cu) {
        ctx->pc = 0x45C670u;
        goto label_45c670;
    }
    ctx->pc = 0x45C668u;
    {
        const bool branch_taken_0x45c668 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x45c668) {
            ctx->pc = 0x45C67Cu;
            goto label_45c67c;
        }
    }
    ctx->pc = 0x45C670u;
label_45c670:
    // 0x45c670: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x45c670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45c674:
    // 0x45c674: 0x10000002  b           . + 4 + (0x2 << 2)
label_45c678:
    if (ctx->pc == 0x45C678u) {
        ctx->pc = 0x45C67Cu;
        goto label_45c67c;
    }
    ctx->pc = 0x45C674u;
    {
        const bool branch_taken_0x45c674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45c674) {
            ctx->pc = 0x45C680u;
            goto label_45c680;
        }
    }
    ctx->pc = 0x45C67Cu;
label_45c67c:
    // 0x45c67c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x45c67cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45c680:
    // 0x45c680: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x45c680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_45c684:
    // 0x45c684: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x45c684u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_45c688:
    // 0x45c688: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x45c688u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_45c68c:
    // 0x45c68c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x45c68cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_45c690:
    // 0x45c690: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45c690u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_45c694:
    // 0x45c694: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45c694u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_45c698:
    // 0x45c698: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x45c698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_45c69c:
    // 0x45c69c: 0x3e00008  jr          $ra
label_45c6a0:
    if (ctx->pc == 0x45C6A0u) {
        ctx->pc = 0x45C6A4u;
        goto label_45c6a4;
    }
    ctx->pc = 0x45C69Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45C69Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45C6A4u;
label_45c6a4:
    // 0x45c6a4: 0x0  nop
    ctx->pc = 0x45c6a4u;
    // NOP
label_45c6a8:
    // 0x45c6a8: 0x0  nop
    ctx->pc = 0x45c6a8u;
    // NOP
label_45c6ac:
    // 0x45c6ac: 0x0  nop
    ctx->pc = 0x45c6acu;
    // NOP
    ctx->pc = 0x45c6b0u;
}
