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

// Function: sub_0038B420
// Address: 0x38b420 - 0x38b6f0
void sub_0038B420_0x38b420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038B420_0x38b420");
#endif

    switch (ctx->pc) {
        case 0x38b420u: goto label_38b420;
        case 0x38b424u: goto label_38b424;
        case 0x38b428u: goto label_38b428;
        case 0x38b42cu: goto label_38b42c;
        case 0x38b430u: goto label_38b430;
        case 0x38b434u: goto label_38b434;
        case 0x38b438u: goto label_38b438;
        case 0x38b43cu: goto label_38b43c;
        case 0x38b440u: goto label_38b440;
        case 0x38b444u: goto label_38b444;
        case 0x38b448u: goto label_38b448;
        case 0x38b44cu: goto label_38b44c;
        case 0x38b450u: goto label_38b450;
        case 0x38b454u: goto label_38b454;
        case 0x38b458u: goto label_38b458;
        case 0x38b45cu: goto label_38b45c;
        case 0x38b460u: goto label_38b460;
        case 0x38b464u: goto label_38b464;
        case 0x38b468u: goto label_38b468;
        case 0x38b46cu: goto label_38b46c;
        case 0x38b470u: goto label_38b470;
        case 0x38b474u: goto label_38b474;
        case 0x38b478u: goto label_38b478;
        case 0x38b47cu: goto label_38b47c;
        case 0x38b480u: goto label_38b480;
        case 0x38b484u: goto label_38b484;
        case 0x38b488u: goto label_38b488;
        case 0x38b48cu: goto label_38b48c;
        case 0x38b490u: goto label_38b490;
        case 0x38b494u: goto label_38b494;
        case 0x38b498u: goto label_38b498;
        case 0x38b49cu: goto label_38b49c;
        case 0x38b4a0u: goto label_38b4a0;
        case 0x38b4a4u: goto label_38b4a4;
        case 0x38b4a8u: goto label_38b4a8;
        case 0x38b4acu: goto label_38b4ac;
        case 0x38b4b0u: goto label_38b4b0;
        case 0x38b4b4u: goto label_38b4b4;
        case 0x38b4b8u: goto label_38b4b8;
        case 0x38b4bcu: goto label_38b4bc;
        case 0x38b4c0u: goto label_38b4c0;
        case 0x38b4c4u: goto label_38b4c4;
        case 0x38b4c8u: goto label_38b4c8;
        case 0x38b4ccu: goto label_38b4cc;
        case 0x38b4d0u: goto label_38b4d0;
        case 0x38b4d4u: goto label_38b4d4;
        case 0x38b4d8u: goto label_38b4d8;
        case 0x38b4dcu: goto label_38b4dc;
        case 0x38b4e0u: goto label_38b4e0;
        case 0x38b4e4u: goto label_38b4e4;
        case 0x38b4e8u: goto label_38b4e8;
        case 0x38b4ecu: goto label_38b4ec;
        case 0x38b4f0u: goto label_38b4f0;
        case 0x38b4f4u: goto label_38b4f4;
        case 0x38b4f8u: goto label_38b4f8;
        case 0x38b4fcu: goto label_38b4fc;
        case 0x38b500u: goto label_38b500;
        case 0x38b504u: goto label_38b504;
        case 0x38b508u: goto label_38b508;
        case 0x38b50cu: goto label_38b50c;
        case 0x38b510u: goto label_38b510;
        case 0x38b514u: goto label_38b514;
        case 0x38b518u: goto label_38b518;
        case 0x38b51cu: goto label_38b51c;
        case 0x38b520u: goto label_38b520;
        case 0x38b524u: goto label_38b524;
        case 0x38b528u: goto label_38b528;
        case 0x38b52cu: goto label_38b52c;
        case 0x38b530u: goto label_38b530;
        case 0x38b534u: goto label_38b534;
        case 0x38b538u: goto label_38b538;
        case 0x38b53cu: goto label_38b53c;
        case 0x38b540u: goto label_38b540;
        case 0x38b544u: goto label_38b544;
        case 0x38b548u: goto label_38b548;
        case 0x38b54cu: goto label_38b54c;
        case 0x38b550u: goto label_38b550;
        case 0x38b554u: goto label_38b554;
        case 0x38b558u: goto label_38b558;
        case 0x38b55cu: goto label_38b55c;
        case 0x38b560u: goto label_38b560;
        case 0x38b564u: goto label_38b564;
        case 0x38b568u: goto label_38b568;
        case 0x38b56cu: goto label_38b56c;
        case 0x38b570u: goto label_38b570;
        case 0x38b574u: goto label_38b574;
        case 0x38b578u: goto label_38b578;
        case 0x38b57cu: goto label_38b57c;
        case 0x38b580u: goto label_38b580;
        case 0x38b584u: goto label_38b584;
        case 0x38b588u: goto label_38b588;
        case 0x38b58cu: goto label_38b58c;
        case 0x38b590u: goto label_38b590;
        case 0x38b594u: goto label_38b594;
        case 0x38b598u: goto label_38b598;
        case 0x38b59cu: goto label_38b59c;
        case 0x38b5a0u: goto label_38b5a0;
        case 0x38b5a4u: goto label_38b5a4;
        case 0x38b5a8u: goto label_38b5a8;
        case 0x38b5acu: goto label_38b5ac;
        case 0x38b5b0u: goto label_38b5b0;
        case 0x38b5b4u: goto label_38b5b4;
        case 0x38b5b8u: goto label_38b5b8;
        case 0x38b5bcu: goto label_38b5bc;
        case 0x38b5c0u: goto label_38b5c0;
        case 0x38b5c4u: goto label_38b5c4;
        case 0x38b5c8u: goto label_38b5c8;
        case 0x38b5ccu: goto label_38b5cc;
        case 0x38b5d0u: goto label_38b5d0;
        case 0x38b5d4u: goto label_38b5d4;
        case 0x38b5d8u: goto label_38b5d8;
        case 0x38b5dcu: goto label_38b5dc;
        case 0x38b5e0u: goto label_38b5e0;
        case 0x38b5e4u: goto label_38b5e4;
        case 0x38b5e8u: goto label_38b5e8;
        case 0x38b5ecu: goto label_38b5ec;
        case 0x38b5f0u: goto label_38b5f0;
        case 0x38b5f4u: goto label_38b5f4;
        case 0x38b5f8u: goto label_38b5f8;
        case 0x38b5fcu: goto label_38b5fc;
        case 0x38b600u: goto label_38b600;
        case 0x38b604u: goto label_38b604;
        case 0x38b608u: goto label_38b608;
        case 0x38b60cu: goto label_38b60c;
        case 0x38b610u: goto label_38b610;
        case 0x38b614u: goto label_38b614;
        case 0x38b618u: goto label_38b618;
        case 0x38b61cu: goto label_38b61c;
        case 0x38b620u: goto label_38b620;
        case 0x38b624u: goto label_38b624;
        case 0x38b628u: goto label_38b628;
        case 0x38b62cu: goto label_38b62c;
        case 0x38b630u: goto label_38b630;
        case 0x38b634u: goto label_38b634;
        case 0x38b638u: goto label_38b638;
        case 0x38b63cu: goto label_38b63c;
        case 0x38b640u: goto label_38b640;
        case 0x38b644u: goto label_38b644;
        case 0x38b648u: goto label_38b648;
        case 0x38b64cu: goto label_38b64c;
        case 0x38b650u: goto label_38b650;
        case 0x38b654u: goto label_38b654;
        case 0x38b658u: goto label_38b658;
        case 0x38b65cu: goto label_38b65c;
        case 0x38b660u: goto label_38b660;
        case 0x38b664u: goto label_38b664;
        case 0x38b668u: goto label_38b668;
        case 0x38b66cu: goto label_38b66c;
        case 0x38b670u: goto label_38b670;
        case 0x38b674u: goto label_38b674;
        case 0x38b678u: goto label_38b678;
        case 0x38b67cu: goto label_38b67c;
        case 0x38b680u: goto label_38b680;
        case 0x38b684u: goto label_38b684;
        case 0x38b688u: goto label_38b688;
        case 0x38b68cu: goto label_38b68c;
        case 0x38b690u: goto label_38b690;
        case 0x38b694u: goto label_38b694;
        case 0x38b698u: goto label_38b698;
        case 0x38b69cu: goto label_38b69c;
        case 0x38b6a0u: goto label_38b6a0;
        case 0x38b6a4u: goto label_38b6a4;
        case 0x38b6a8u: goto label_38b6a8;
        case 0x38b6acu: goto label_38b6ac;
        case 0x38b6b0u: goto label_38b6b0;
        case 0x38b6b4u: goto label_38b6b4;
        case 0x38b6b8u: goto label_38b6b8;
        case 0x38b6bcu: goto label_38b6bc;
        case 0x38b6c0u: goto label_38b6c0;
        case 0x38b6c4u: goto label_38b6c4;
        case 0x38b6c8u: goto label_38b6c8;
        case 0x38b6ccu: goto label_38b6cc;
        case 0x38b6d0u: goto label_38b6d0;
        case 0x38b6d4u: goto label_38b6d4;
        case 0x38b6d8u: goto label_38b6d8;
        case 0x38b6dcu: goto label_38b6dc;
        case 0x38b6e0u: goto label_38b6e0;
        case 0x38b6e4u: goto label_38b6e4;
        case 0x38b6e8u: goto label_38b6e8;
        case 0x38b6ecu: goto label_38b6ec;
        default: break;
    }

    ctx->pc = 0x38b420u;

label_38b420:
    // 0x38b420: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x38b420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_38b424:
    // 0x38b424: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x38b424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_38b428:
    // 0x38b428: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x38b428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_38b42c:
    // 0x38b42c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x38b42cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38b430:
    // 0x38b430: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x38b430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_38b434:
    // 0x38b434: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x38b434u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38b438:
    // 0x38b438: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x38b438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_38b43c:
    // 0x38b43c: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x38b43cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_38b440:
    // 0x38b440: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x38b440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_38b444:
    // 0x38b444: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x38b444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_38b448:
    // 0x38b448: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x38b448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_38b44c:
    // 0x38b44c: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x38b44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_38b450:
    // 0x38b450: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x38b450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_38b454:
    // 0x38b454: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x38b454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_38b458:
    // 0x38b458: 0x8e620054  lw          $v0, 0x54($s3)
    ctx->pc = 0x38b458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_38b45c:
    // 0x38b45c: 0x14400097  bnez        $v0, . + 4 + (0x97 << 2)
label_38b460:
    if (ctx->pc == 0x38B460u) {
        ctx->pc = 0x38B460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B45Cu;
        // 0x38b460: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B464u;
        goto label_38b464;
    }
    ctx->pc = 0x38B45Cu;
    {
        const bool branch_taken_0x38b45c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38B460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B45Cu;
        // 0x38b460: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b45c) {
            ctx->pc = 0x38B6BCu;
            goto label_38b6bc;
        }
    }
    ctx->pc = 0x38B464u;
label_38b464:
    // 0x38b464: 0xc0e3ff8  jal         func_38FFE0
label_38b468:
    if (ctx->pc == 0x38B468u) {
        ctx->pc = 0x38B468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B464u;
        // 0x38b468: 0x8e640010  lw          $a0, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B46Cu;
        goto label_38b46c;
    }
    ctx->pc = 0x38B464u;
    SET_GPR_U32(ctx, 31, 0x38B46Cu);
    ctx->pc = 0x38B468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B464u;
    // 0x38b468: 0x8e640010  lw          $a0, 0x10($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FFE0u, 0x38B464u, 0x38B46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B46Cu;
label_38b46c:
    // 0x38b46c: 0x10400091  beqz        $v0, . + 4 + (0x91 << 2)
label_38b470:
    if (ctx->pc == 0x38B470u) {
        ctx->pc = 0x38B470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B46Cu;
        // 0x38b470: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B474u;
        goto label_38b474;
    }
    ctx->pc = 0x38B46Cu;
    {
        const bool branch_taken_0x38b46c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B46Cu;
        // 0x38b470: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b46c) {
            ctx->pc = 0x38B6B4u;
            goto label_38b6b4;
        }
    }
    ctx->pc = 0x38B474u;
label_38b474:
    // 0x38b474: 0x8e710024  lw          $s1, 0x24($s3)
    ctx->pc = 0x38b474u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_38b478:
    // 0x38b478: 0x1a20007e  blez        $s1, . + 4 + (0x7E << 2)
label_38b47c:
    if (ctx->pc == 0x38B47Cu) {
        ctx->pc = 0x38B47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B478u;
        // 0x38b47c: 0x3c100062  lui         $s0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B480u;
        goto label_38b480;
    }
    ctx->pc = 0x38B478u;
    {
        const bool branch_taken_0x38b478 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x38B47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B478u;
        // 0x38b47c: 0x3c100062  lui         $s0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b478) {
            ctx->pc = 0x38B674u;
            goto label_38b674;
        }
    }
    ctx->pc = 0x38B480u;
label_38b480:
    // 0x38b480: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x38b480u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_38b484:
    // 0x38b484: 0x2610e880  addiu       $s0, $s0, -0x1780
    ctx->pc = 0x38b484u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
label_38b488:
    // 0x38b488: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x38b488u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_38b48c:
    // 0x38b48c: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x38b48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_38b490:
    // 0x38b490: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38b490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38b494:
    // 0x38b494: 0x34a50006  ori         $a1, $a1, 0x6
    ctx->pc = 0x38b494u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
label_38b498:
    // 0x38b498: 0x40f809  jalr        $v0
label_38b49c:
    if (ctx->pc == 0x38B49Cu) {
        ctx->pc = 0x38B49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B498u;
        // 0x38b49c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B4A0u;
        goto label_38b4a0;
    }
    ctx->pc = 0x38B498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38B4A0u);
        ctx->pc = 0x38B49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B498u;
        // 0x38b49c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38B498u, 0x38B4A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38B4A0u;
label_38b4a0:
    // 0x38b4a0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x38b4a0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38b4a4:
    // 0x38b4a4: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x38b4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_38b4a8:
    // 0x38b4a8: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x38b4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_38b4ac:
    // 0x38b4ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38b4acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38b4b0:
    // 0x38b4b0: 0x40f809  jalr        $v0
label_38b4b4:
    if (ctx->pc == 0x38B4B4u) {
        ctx->pc = 0x38B4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B4B0u;
        // 0x38b4b4: 0x34a50503  ori         $a1, $a1, 0x503 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1283);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B4B8u;
        goto label_38b4b8;
    }
    ctx->pc = 0x38B4B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38B4B8u);
        ctx->pc = 0x38B4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B4B0u;
        // 0x38b4b4: 0x34a50503  ori         $a1, $a1, 0x503 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1283);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38B4B0u, 0x38B4B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38B4B8u;
label_38b4b8:
    // 0x38b4b8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x38b4b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38b4bc:
    // 0x38b4bc: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x38b4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_38b4c0:
    // 0x38b4c0: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x38b4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_38b4c4:
    // 0x38b4c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38b4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38b4c8:
    // 0x38b4c8: 0x40f809  jalr        $v0
label_38b4cc:
    if (ctx->pc == 0x38B4CCu) {
        ctx->pc = 0x38B4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B4C8u;
        // 0x38b4cc: 0x34a50503  ori         $a1, $a1, 0x503 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1283);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B4D0u;
        goto label_38b4d0;
    }
    ctx->pc = 0x38B4C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38B4D0u);
        ctx->pc = 0x38B4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B4C8u;
        // 0x38b4cc: 0x34a50503  ori         $a1, $a1, 0x503 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1283);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38B4C8u, 0x38B4D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38B4D0u;
label_38b4d0:
    // 0x38b4d0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x38b4d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38b4d4:
    // 0x38b4d4: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x38b4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_38b4d8:
    // 0x38b4d8: 0x1840005c  blez        $v0, . + 4 + (0x5C << 2)
label_38b4dc:
    if (ctx->pc == 0x38B4DCu) {
        ctx->pc = 0x38B4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B4D8u;
        // 0x38b4dc: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B4E0u;
        goto label_38b4e0;
    }
    ctx->pc = 0x38B4D8u;
    {
        const bool branch_taken_0x38b4d8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x38B4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B4D8u;
        // 0x38b4dc: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b4d8) {
            ctx->pc = 0x38B64Cu;
            goto label_38b64c;
        }
    }
    ctx->pc = 0x38B4E0u;
label_38b4e0:
    // 0x38b4e0: 0x8e63002c  lw          $v1, 0x2C($s3)
    ctx->pc = 0x38b4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_38b4e4:
    // 0x38b4e4: 0x0  nop
    ctx->pc = 0x38b4e4u;
    // NOP
label_38b4e8:
    // 0x38b4e8: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x38b4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_38b4ec:
    // 0x38b4ec: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x38b4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_38b4f0:
    // 0x38b4f0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x38b4f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_38b4f4:
    // 0x38b4f4: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x38b4f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_38b4f8:
    // 0x38b4f8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x38b4f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38b4fc:
    // 0x38b4fc: 0xc0e3df2  jal         func_38F7C8
label_38b500:
    if (ctx->pc == 0x38B500u) {
        ctx->pc = 0x38B500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B4FCu;
        // 0x38b500: 0x96050006  lhu         $a1, 0x6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B504u;
        goto label_38b504;
    }
    ctx->pc = 0x38B4FCu;
    SET_GPR_U32(ctx, 31, 0x38B504u);
    ctx->pc = 0x38B500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B4FCu;
    // 0x38b500: 0x96050006  lhu         $a1, 0x6($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F7C8u, 0x38B4FCu, 0x38B504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B504u;
label_38b504:
    // 0x38b504: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x38b504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38b508:
    // 0x38b508: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x38b508u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38b50c:
    // 0x38b50c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x38b50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_38b510:
    // 0x38b510: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_38b514:
    if (ctx->pc == 0x38B514u) {
        ctx->pc = 0x38B514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B510u;
        // 0x38b514: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B518u;
        goto label_38b518;
    }
    ctx->pc = 0x38B510u;
    {
        const bool branch_taken_0x38b510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B510u;
        // 0x38b514: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b510) {
            ctx->pc = 0x38B550u;
            goto label_38b550;
        }
    }
    ctx->pc = 0x38B518u;
label_38b518:
    // 0x38b518: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x38b518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_38b51c:
    // 0x38b51c: 0x1044000c  beq         $v0, $a0, . + 4 + (0xC << 2)
label_38b520:
    if (ctx->pc == 0x38B520u) {
        ctx->pc = 0x38B520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B51Cu;
        // 0x38b520: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B524u;
        goto label_38b524;
    }
    ctx->pc = 0x38B51Cu;
    {
        const bool branch_taken_0x38b51c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x38B520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B51Cu;
        // 0x38b520: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b51c) {
            ctx->pc = 0x38B550u;
            goto label_38b550;
        }
    }
    ctx->pc = 0x38B524u;
label_38b524:
    // 0x38b524: 0x25420001  addiu       $v0, $t2, 0x1
    ctx->pc = 0x38b524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_38b528:
    // 0x38b528: 0x304affff  andi        $t2, $v0, 0xFFFF
    ctx->pc = 0x38b528u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_38b52c:
    // 0x38b52c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x38b52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_38b530:
    // 0x38b530: 0x142182b  sltu        $v1, $t2, $v0
    ctx->pc = 0x38b530u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_38b534:
    // 0x38b534: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_38b538:
    if (ctx->pc == 0x38B538u) {
        ctx->pc = 0x38B538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B534u;
        // 0x38b538: 0xa1080  sll         $v0, $t2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B53Cu;
        goto label_38b53c;
    }
    ctx->pc = 0x38B534u;
    {
        const bool branch_taken_0x38b534 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B534u;
        // 0x38b538: 0xa1080  sll         $v0, $t2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b534) {
            ctx->pc = 0x38B54Cu;
            goto label_38b54c;
        }
    }
    ctx->pc = 0x38B53Cu;
label_38b53c:
    // 0x38b53c: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x38b53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_38b540:
    // 0x38b540: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x38b540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_38b544:
    // 0x38b544: 0x1464fff8  bne         $v1, $a0, . + 4 + (-0x8 << 2)
label_38b548:
    if (ctx->pc == 0x38B548u) {
        ctx->pc = 0x38B548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B544u;
        // 0x38b548: 0x25420001  addiu       $v0, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B54Cu;
        goto label_38b54c;
    }
    ctx->pc = 0x38B544u;
    {
        const bool branch_taken_0x38b544 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x38B548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B544u;
        // 0x38b548: 0x25420001  addiu       $v0, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b544) {
            ctx->pc = 0x38B528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38b528;
        }
    }
    ctx->pc = 0x38B54Cu;
label_38b54c:
    // 0x38b54c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x38b54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_38b550:
    // 0x38b550: 0x15420006  bne         $t2, $v0, . + 4 + (0x6 << 2)
label_38b554:
    if (ctx->pc == 0x38B554u) {
        ctx->pc = 0x38B554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B550u;
        // 0x38b554: 0x25430001  addiu       $v1, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B558u;
        goto label_38b558;
    }
    ctx->pc = 0x38B550u;
    {
        const bool branch_taken_0x38b550 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        ctx->pc = 0x38B554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B550u;
        // 0x38b554: 0x25430001  addiu       $v1, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b550) {
            ctx->pc = 0x38B56Cu;
            goto label_38b56c;
        }
    }
    ctx->pc = 0x38B558u;
label_38b558:
    // 0x38b558: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x38b558u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_38b55c:
    // 0x38b55c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x38b55cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_38b560:
    // 0x38b560: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x38b560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_38b564:
    // 0x38b564: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x38b564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_38b568:
    // 0x38b568: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x38b568u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_38b56c:
    // 0x38b56c: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
label_38b570:
    if (ctx->pc == 0x38B570u) {
        ctx->pc = 0x38B570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B56Cu;
        // 0x38b570: 0x8c910000  lw          $s1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B574u;
        goto label_38b574;
    }
    ctx->pc = 0x38B56Cu;
    {
        const bool branch_taken_0x38b56c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x38b56c) {
            ctx->pc = 0x38B570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38B56Cu;
            // 0x38b570: 0x8c910000  lw          $s1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38B574u;
            goto label_38b574;
        }
    }
    ctx->pc = 0x38B574u;
label_38b574:
    // 0x38b574: 0x13c0000c  beqz        $fp, . + 4 + (0xC << 2)
label_38b578:
    if (ctx->pc == 0x38B578u) {
        ctx->pc = 0x38B578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B574u;
        // 0x38b578: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B57Cu;
        goto label_38b57c;
    }
    ctx->pc = 0x38B574u;
    {
        const bool branch_taken_0x38b574 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B574u;
        // 0x38b578: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b574) {
            ctx->pc = 0x38B5A8u;
            goto label_38b5a8;
        }
    }
    ctx->pc = 0x38B57Cu;
label_38b57c:
    // 0x38b57c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x38b57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_38b580:
    // 0x38b580: 0x10510009  beq         $v0, $s1, . + 4 + (0x9 << 2)
label_38b584:
    if (ctx->pc == 0x38B584u) {
        ctx->pc = 0x38B584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B580u;
        // 0x38b584: 0x25620001  addiu       $v0, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B588u;
        goto label_38b588;
    }
    ctx->pc = 0x38B580u;
    {
        const bool branch_taken_0x38b580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x38B584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B580u;
        // 0x38b584: 0x25620001  addiu       $v0, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b580) {
            ctx->pc = 0x38B5A8u;
            goto label_38b5a8;
        }
    }
    ctx->pc = 0x38B588u;
label_38b588:
    // 0x38b588: 0x304bffff  andi        $t3, $v0, 0xFFFF
    ctx->pc = 0x38b588u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_38b58c:
    // 0x38b58c: 0x17e182b  sltu        $v1, $t3, $fp
    ctx->pc = 0x38b58cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_38b590:
    // 0x38b590: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_38b594:
    if (ctx->pc == 0x38B594u) {
        ctx->pc = 0x38B594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B590u;
        // 0x38b594: 0xb1080  sll         $v0, $t3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B598u;
        goto label_38b598;
    }
    ctx->pc = 0x38B590u;
    {
        const bool branch_taken_0x38b590 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B590u;
        // 0x38b594: 0xb1080  sll         $v0, $t3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b590) {
            ctx->pc = 0x38B5A8u;
            goto label_38b5a8;
        }
    }
    ctx->pc = 0x38B598u;
label_38b598:
    // 0x38b598: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x38b598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_38b59c:
    // 0x38b59c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x38b59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_38b5a0:
    // 0x38b5a0: 0x1471fff9  bne         $v1, $s1, . + 4 + (-0x7 << 2)
label_38b5a4:
    if (ctx->pc == 0x38B5A4u) {
        ctx->pc = 0x38B5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B5A0u;
        // 0x38b5a4: 0x25620001  addiu       $v0, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B5A8u;
        goto label_38b5a8;
    }
    ctx->pc = 0x38B5A0u;
    {
        const bool branch_taken_0x38b5a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x38B5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B5A0u;
        // 0x38b5a4: 0x25620001  addiu       $v0, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b5a0) {
            ctx->pc = 0x38B588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38b588;
        }
    }
    ctx->pc = 0x38B5A8u;
label_38b5a8:
    // 0x38b5a8: 0x557e0007  bnel        $t3, $fp, . + 4 + (0x7 << 2)
label_38b5ac:
    if (ctx->pc == 0x38B5ACu) {
        ctx->pc = 0x38B5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B5A8u;
        // 0x38b5ac: 0x8ca60008  lw          $a2, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B5B0u;
        goto label_38b5b0;
    }
    ctx->pc = 0x38B5A8u;
    {
        const bool branch_taken_0x38b5a8 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 30));
        if (branch_taken_0x38b5a8) {
            ctx->pc = 0x38B5ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38B5A8u;
            // 0x38b5ac: 0x8ca60008  lw          $a2, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38B5C8u;
            goto label_38b5c8;
        }
    }
    ctx->pc = 0x38B5B0u;
label_38b5b0:
    // 0x38b5b0: 0xb1080  sll         $v0, $t3, 2
    ctx->pc = 0x38b5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_38b5b4:
    // 0x38b5b4: 0x25630001  addiu       $v1, $t3, 0x1
    ctx->pc = 0x38b5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_38b5b8:
    // 0x38b5b8: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x38b5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_38b5bc:
    // 0x38b5bc: 0x307effff  andi        $fp, $v1, 0xFFFF
    ctx->pc = 0x38b5bcu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_38b5c0:
    // 0x38b5c0: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x38b5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_38b5c4:
    // 0x38b5c4: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x38b5c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_38b5c8:
    // 0x38b5c8: 0x12e0000d  beqz        $s7, . + 4 + (0xD << 2)
label_38b5cc:
    if (ctx->pc == 0x38B5CCu) {
        ctx->pc = 0x38B5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B5C8u;
        // 0x38b5cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B5D0u;
        goto label_38b5d0;
    }
    ctx->pc = 0x38B5C8u;
    {
        const bool branch_taken_0x38b5c8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B5C8u;
        // 0x38b5cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b5c8) {
            ctx->pc = 0x38B600u;
            goto label_38b600;
        }
    }
    ctx->pc = 0x38B5D0u;
label_38b5d0:
    // 0x38b5d0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x38b5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_38b5d4:
    // 0x38b5d4: 0x1046000a  beq         $v0, $a2, . + 4 + (0xA << 2)
label_38b5d8:
    if (ctx->pc == 0x38B5D8u) {
        ctx->pc = 0x38B5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B5D4u;
        // 0x38b5d8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B5DCu;
        goto label_38b5dc;
    }
    ctx->pc = 0x38B5D4u;
    {
        const bool branch_taken_0x38b5d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x38B5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B5D4u;
        // 0x38b5d8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b5d4) {
            ctx->pc = 0x38B600u;
            goto label_38b600;
        }
    }
    ctx->pc = 0x38B5DCu;
label_38b5dc:
    // 0x38b5dc: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x38b5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_38b5e0:
    // 0x38b5e0: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x38b5e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_38b5e4:
    // 0x38b5e4: 0x97182b  sltu        $v1, $a0, $s7
    ctx->pc = 0x38b5e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_38b5e8:
    // 0x38b5e8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_38b5ec:
    if (ctx->pc == 0x38B5ECu) {
        ctx->pc = 0x38B5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B5E8u;
        // 0x38b5ec: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B5F0u;
        goto label_38b5f0;
    }
    ctx->pc = 0x38B5E8u;
    {
        const bool branch_taken_0x38b5e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B5E8u;
        // 0x38b5ec: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b5e8) {
            ctx->pc = 0x38B600u;
            goto label_38b600;
        }
    }
    ctx->pc = 0x38B5F0u;
label_38b5f0:
    // 0x38b5f0: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x38b5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_38b5f4:
    // 0x38b5f4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x38b5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_38b5f8:
    // 0x38b5f8: 0x1467fff9  bne         $v1, $a3, . + 4 + (-0x7 << 2)
label_38b5fc:
    if (ctx->pc == 0x38B5FCu) {
        ctx->pc = 0x38B5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B5F8u;
        // 0x38b5fc: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B600u;
        goto label_38b600;
    }
    ctx->pc = 0x38B5F8u;
    {
        const bool branch_taken_0x38b5f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x38B5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B5F8u;
        // 0x38b5fc: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b5f8) {
            ctx->pc = 0x38B5E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38b5e0;
        }
    }
    ctx->pc = 0x38B600u;
label_38b600:
    // 0x38b600: 0x54970007  bnel        $a0, $s7, . + 4 + (0x7 << 2)
label_38b604:
    if (ctx->pc == 0x38B604u) {
        ctx->pc = 0x38B604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B600u;
        // 0x38b604: 0x96090006  lhu         $t1, 0x6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B608u;
        goto label_38b608;
    }
    ctx->pc = 0x38B600u;
    {
        const bool branch_taken_0x38b600 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 23));
        if (branch_taken_0x38b600) {
            ctx->pc = 0x38B604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38B600u;
            // 0x38b604: 0x96090006  lhu         $t1, 0x6($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38B620u;
            goto label_38b620;
        }
    }
    ctx->pc = 0x38B608u;
label_38b608:
    // 0x38b608: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x38b608u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_38b60c:
    // 0x38b60c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x38b60cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_38b610:
    // 0x38b610: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x38b610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_38b614:
    // 0x38b614: 0x3077ffff  andi        $s7, $v1, 0xFFFF
    ctx->pc = 0x38b614u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_38b618:
    // 0x38b618: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x38b618u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
label_38b61c:
    // 0x38b61c: 0x96090006  lhu         $t1, 0x6($s0)
    ctx->pc = 0x38b61cu;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_38b620:
    // 0x38b620: 0x96060000  lhu         $a2, 0x0($s0)
    ctx->pc = 0x38b620u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_38b624:
    // 0x38b624: 0x96070002  lhu         $a3, 0x2($s0)
    ctx->pc = 0x38b624u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_38b628:
    // 0x38b628: 0x96080004  lhu         $t0, 0x4($s0)
    ctx->pc = 0x38b628u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_38b62c:
    // 0x38b62c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x38b62cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_38b630:
    // 0x38b630: 0xc0e4068  jal         func_3901A0
label_38b634:
    if (ctx->pc == 0x38B634u) {
        ctx->pc = 0x38B634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B630u;
        // 0x38b634: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B638u;
        goto label_38b638;
    }
    ctx->pc = 0x38B630u;
    SET_GPR_U32(ctx, 31, 0x38B638u);
    ctx->pc = 0x38B634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B630u;
    // 0x38b634: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3901A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3901A0u, 0x38B630u, 0x38B638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B638u;
label_38b638:
    // 0x38b638: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x38b638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_38b63c:
    // 0x38b63c: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x38b63cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_38b640:
    // 0x38b640: 0x5460ffa9  bnel        $v1, $zero, . + 4 + (-0x57 << 2)
label_38b644:
    if (ctx->pc == 0x38B644u) {
        ctx->pc = 0x38B644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B640u;
        // 0x38b644: 0x8e63002c  lw          $v1, 0x2C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B648u;
        goto label_38b648;
    }
    ctx->pc = 0x38B640u;
    {
        const bool branch_taken_0x38b640 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x38b640) {
            ctx->pc = 0x38B644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38B640u;
            // 0x38b644: 0x8e63002c  lw          $v1, 0x2C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38B4E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38b4e8;
        }
    }
    ctx->pc = 0x38B648u;
label_38b648:
    // 0x38b648: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x38b648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_38b64c:
    // 0x38b64c: 0x2450e880  addiu       $s0, $v0, -0x1780
    ctx->pc = 0x38b64cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_38b650:
    // 0x38b650: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x38b650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_38b654:
    // 0x38b654: 0x40f809  jalr        $v0
label_38b658:
    if (ctx->pc == 0x38B658u) {
        ctx->pc = 0x38B658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B654u;
        // 0x38b658: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B65Cu;
        goto label_38b65c;
    }
    ctx->pc = 0x38B654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38B65Cu);
        ctx->pc = 0x38B658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B654u;
        // 0x38b658: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38B654u, 0x38B65Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38B65Cu;
label_38b65c:
    // 0x38b65c: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x38b65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_38b660:
    // 0x38b660: 0x60f809  jalr        $v1
label_38b664:
    if (ctx->pc == 0x38B664u) {
        ctx->pc = 0x38B664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B660u;
        // 0x38b664: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B668u;
        goto label_38b668;
    }
    ctx->pc = 0x38B660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x38B668u);
        ctx->pc = 0x38B664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B660u;
        // 0x38b664: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38B660u, 0x38B668u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38B668u;
label_38b668:
    // 0x38b668: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x38b668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_38b66c:
    // 0x38b66c: 0x40f809  jalr        $v0
label_38b670:
    if (ctx->pc == 0x38B670u) {
        ctx->pc = 0x38B670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B66Cu;
        // 0x38b670: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B674u;
        goto label_38b674;
    }
    ctx->pc = 0x38B66Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38B674u);
        ctx->pc = 0x38B670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B66Cu;
        // 0x38b670: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38B66Cu, 0x38B674u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38B674u;
label_38b674:
    // 0x38b674: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x38b674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_38b678:
    // 0x38b678: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x38b678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_38b67c:
    // 0x38b67c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_38b680:
    if (ctx->pc == 0x38B680u) {
        ctx->pc = 0x38B680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B67Cu;
        // 0x38b680: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B684u;
        goto label_38b684;
    }
    ctx->pc = 0x38B67Cu;
    {
        const bool branch_taken_0x38b67c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B67Cu;
        // 0x38b680: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b67c) {
            ctx->pc = 0x38B694u;
            goto label_38b694;
        }
    }
    ctx->pc = 0x38B684u;
label_38b684:
    // 0x38b684: 0xc0e6352  jal         func_398D48
label_38b688:
    if (ctx->pc == 0x38B688u) {
        ctx->pc = 0x38B688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B684u;
        // 0x38b688: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B68Cu;
        goto label_38b68c;
    }
    ctx->pc = 0x38B684u;
    SET_GPR_U32(ctx, 31, 0x38B68Cu);
    ctx->pc = 0x38B688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B684u;
    // 0x38b688: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398D48u, 0x38B684u, 0x38B68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B68Cu;
label_38b68c:
    // 0x38b68c: 0x10000003  b           . + 4 + (0x3 << 2)
label_38b690:
    if (ctx->pc == 0x38B690u) {
        ctx->pc = 0x38B694u;
        goto label_38b694;
    }
    ctx->pc = 0x38B68Cu;
    {
        const bool branch_taken_0x38b68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38b68c) {
            ctx->pc = 0x38B69Cu;
            goto label_38b69c;
        }
    }
    ctx->pc = 0x38B694u;
label_38b694:
    // 0x38b694: 0xc0e6352  jal         func_398D48
label_38b698:
    if (ctx->pc == 0x38B698u) {
        ctx->pc = 0x38B698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B694u;
        // 0x38b698: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B69Cu;
        goto label_38b69c;
    }
    ctx->pc = 0x38B694u;
    SET_GPR_U32(ctx, 31, 0x38B69Cu);
    ctx->pc = 0x38B698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B694u;
    // 0x38b698: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398D48u, 0x38B694u, 0x38B69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B69Cu;
label_38b69c:
    // 0x38b69c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_38b6a0:
    if (ctx->pc == 0x38B6A0u) {
        ctx->pc = 0x38B6A4u;
        goto label_38b6a4;
    }
    ctx->pc = 0x38B69Cu;
    {
        const bool branch_taken_0x38b69c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38b69c) {
            ctx->pc = 0x38B6ACu;
            goto label_38b6ac;
        }
    }
    ctx->pc = 0x38B6A4u;
label_38b6a4:
    // 0x38b6a4: 0x10000005  b           . + 4 + (0x5 << 2)
label_38b6a8:
    if (ctx->pc == 0x38B6A8u) {
        ctx->pc = 0x38B6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B6A4u;
        // 0x38b6a8: 0xae620054  sw          $v0, 0x54($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B6ACu;
        goto label_38b6ac;
    }
    ctx->pc = 0x38B6A4u;
    {
        const bool branch_taken_0x38b6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B6A4u;
        // 0x38b6a8: 0xae620054  sw          $v0, 0x54($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b6a4) {
            ctx->pc = 0x38B6BCu;
            goto label_38b6bc;
        }
    }
    ctx->pc = 0x38B6ACu;
label_38b6ac:
    // 0x38b6ac: 0xc0e403a  jal         func_3900E8
label_38b6b0:
    if (ctx->pc == 0x38B6B0u) {
        ctx->pc = 0x38B6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B6ACu;
        // 0x38b6b0: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B6B4u;
        goto label_38b6b4;
    }
    ctx->pc = 0x38B6ACu;
    SET_GPR_U32(ctx, 31, 0x38B6B4u);
    ctx->pc = 0x38B6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B6ACu;
    // 0x38b6b0: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3900E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3900E8u, 0x38B6ACu, 0x38B6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B6B4u;
label_38b6b4:
    // 0x38b6b4: 0x10000002  b           . + 4 + (0x2 << 2)
label_38b6b8:
    if (ctx->pc == 0x38B6B8u) {
        ctx->pc = 0x38B6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B6B4u;
        // 0x38b6b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B6BCu;
        goto label_38b6bc;
    }
    ctx->pc = 0x38B6B4u;
    {
        const bool branch_taken_0x38b6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B6B4u;
        // 0x38b6b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b6b4) {
            ctx->pc = 0x38B6C0u;
            goto label_38b6c0;
        }
    }
    ctx->pc = 0x38B6BCu;
label_38b6bc:
    // 0x38b6bc: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x38b6bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_38b6c0:
    // 0x38b6c0: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x38b6c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_38b6c4:
    // 0x38b6c4: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x38b6c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_38b6c8:
    // 0x38b6c8: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x38b6c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_38b6cc:
    // 0x38b6cc: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x38b6ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_38b6d0:
    // 0x38b6d0: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x38b6d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_38b6d4:
    // 0x38b6d4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x38b6d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_38b6d8:
    // 0x38b6d8: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x38b6d8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_38b6dc:
    // 0x38b6dc: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x38b6dcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_38b6e0:
    // 0x38b6e0: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x38b6e0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_38b6e4:
    // 0x38b6e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x38b6e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_38b6e8:
    // 0x38b6e8: 0x3e00008  jr          $ra
label_38b6ec:
    if (ctx->pc == 0x38B6ECu) {
        ctx->pc = 0x38B6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B6E8u;
        // 0x38b6ec: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B6F0u;
        goto label_fallthrough_0x38b6e8;
    }
    ctx->pc = 0x38B6E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38B6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B6E8u;
        // 0x38b6ec: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38B6E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x38b6e8:
    ctx->pc = 0x38B6F0u;
}
