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

// Function: sub_0039B448
// Address: 0x39b448 - 0x39b8d8
void sub_0039B448_0x39b448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039B448_0x39b448");
#endif

    switch (ctx->pc) {
        case 0x39b448u: goto label_39b448;
        case 0x39b44cu: goto label_39b44c;
        case 0x39b450u: goto label_39b450;
        case 0x39b454u: goto label_39b454;
        case 0x39b458u: goto label_39b458;
        case 0x39b45cu: goto label_39b45c;
        case 0x39b460u: goto label_39b460;
        case 0x39b464u: goto label_39b464;
        case 0x39b468u: goto label_39b468;
        case 0x39b46cu: goto label_39b46c;
        case 0x39b470u: goto label_39b470;
        case 0x39b474u: goto label_39b474;
        case 0x39b478u: goto label_39b478;
        case 0x39b47cu: goto label_39b47c;
        case 0x39b480u: goto label_39b480;
        case 0x39b484u: goto label_39b484;
        case 0x39b488u: goto label_39b488;
        case 0x39b48cu: goto label_39b48c;
        case 0x39b490u: goto label_39b490;
        case 0x39b494u: goto label_39b494;
        case 0x39b498u: goto label_39b498;
        case 0x39b49cu: goto label_39b49c;
        case 0x39b4a0u: goto label_39b4a0;
        case 0x39b4a4u: goto label_39b4a4;
        case 0x39b4a8u: goto label_39b4a8;
        case 0x39b4acu: goto label_39b4ac;
        case 0x39b4b0u: goto label_39b4b0;
        case 0x39b4b4u: goto label_39b4b4;
        case 0x39b4b8u: goto label_39b4b8;
        case 0x39b4bcu: goto label_39b4bc;
        case 0x39b4c0u: goto label_39b4c0;
        case 0x39b4c4u: goto label_39b4c4;
        case 0x39b4c8u: goto label_39b4c8;
        case 0x39b4ccu: goto label_39b4cc;
        case 0x39b4d0u: goto label_39b4d0;
        case 0x39b4d4u: goto label_39b4d4;
        case 0x39b4d8u: goto label_39b4d8;
        case 0x39b4dcu: goto label_39b4dc;
        case 0x39b4e0u: goto label_39b4e0;
        case 0x39b4e4u: goto label_39b4e4;
        case 0x39b4e8u: goto label_39b4e8;
        case 0x39b4ecu: goto label_39b4ec;
        case 0x39b4f0u: goto label_39b4f0;
        case 0x39b4f4u: goto label_39b4f4;
        case 0x39b4f8u: goto label_39b4f8;
        case 0x39b4fcu: goto label_39b4fc;
        case 0x39b500u: goto label_39b500;
        case 0x39b504u: goto label_39b504;
        case 0x39b508u: goto label_39b508;
        case 0x39b50cu: goto label_39b50c;
        case 0x39b510u: goto label_39b510;
        case 0x39b514u: goto label_39b514;
        case 0x39b518u: goto label_39b518;
        case 0x39b51cu: goto label_39b51c;
        case 0x39b520u: goto label_39b520;
        case 0x39b524u: goto label_39b524;
        case 0x39b528u: goto label_39b528;
        case 0x39b52cu: goto label_39b52c;
        case 0x39b530u: goto label_39b530;
        case 0x39b534u: goto label_39b534;
        case 0x39b538u: goto label_39b538;
        case 0x39b53cu: goto label_39b53c;
        case 0x39b540u: goto label_39b540;
        case 0x39b544u: goto label_39b544;
        case 0x39b548u: goto label_39b548;
        case 0x39b54cu: goto label_39b54c;
        case 0x39b550u: goto label_39b550;
        case 0x39b554u: goto label_39b554;
        case 0x39b558u: goto label_39b558;
        case 0x39b55cu: goto label_39b55c;
        case 0x39b560u: goto label_39b560;
        case 0x39b564u: goto label_39b564;
        case 0x39b568u: goto label_39b568;
        case 0x39b56cu: goto label_39b56c;
        case 0x39b570u: goto label_39b570;
        case 0x39b574u: goto label_39b574;
        case 0x39b578u: goto label_39b578;
        case 0x39b57cu: goto label_39b57c;
        case 0x39b580u: goto label_39b580;
        case 0x39b584u: goto label_39b584;
        case 0x39b588u: goto label_39b588;
        case 0x39b58cu: goto label_39b58c;
        case 0x39b590u: goto label_39b590;
        case 0x39b594u: goto label_39b594;
        case 0x39b598u: goto label_39b598;
        case 0x39b59cu: goto label_39b59c;
        case 0x39b5a0u: goto label_39b5a0;
        case 0x39b5a4u: goto label_39b5a4;
        case 0x39b5a8u: goto label_39b5a8;
        case 0x39b5acu: goto label_39b5ac;
        case 0x39b5b0u: goto label_39b5b0;
        case 0x39b5b4u: goto label_39b5b4;
        case 0x39b5b8u: goto label_39b5b8;
        case 0x39b5bcu: goto label_39b5bc;
        case 0x39b5c0u: goto label_39b5c0;
        case 0x39b5c4u: goto label_39b5c4;
        case 0x39b5c8u: goto label_39b5c8;
        case 0x39b5ccu: goto label_39b5cc;
        case 0x39b5d0u: goto label_39b5d0;
        case 0x39b5d4u: goto label_39b5d4;
        case 0x39b5d8u: goto label_39b5d8;
        case 0x39b5dcu: goto label_39b5dc;
        case 0x39b5e0u: goto label_39b5e0;
        case 0x39b5e4u: goto label_39b5e4;
        case 0x39b5e8u: goto label_39b5e8;
        case 0x39b5ecu: goto label_39b5ec;
        case 0x39b5f0u: goto label_39b5f0;
        case 0x39b5f4u: goto label_39b5f4;
        case 0x39b5f8u: goto label_39b5f8;
        case 0x39b5fcu: goto label_39b5fc;
        case 0x39b600u: goto label_39b600;
        case 0x39b604u: goto label_39b604;
        case 0x39b608u: goto label_39b608;
        case 0x39b60cu: goto label_39b60c;
        case 0x39b610u: goto label_39b610;
        case 0x39b614u: goto label_39b614;
        case 0x39b618u: goto label_39b618;
        case 0x39b61cu: goto label_39b61c;
        case 0x39b620u: goto label_39b620;
        case 0x39b624u: goto label_39b624;
        case 0x39b628u: goto label_39b628;
        case 0x39b62cu: goto label_39b62c;
        case 0x39b630u: goto label_39b630;
        case 0x39b634u: goto label_39b634;
        case 0x39b638u: goto label_39b638;
        case 0x39b63cu: goto label_39b63c;
        case 0x39b640u: goto label_39b640;
        case 0x39b644u: goto label_39b644;
        case 0x39b648u: goto label_39b648;
        case 0x39b64cu: goto label_39b64c;
        case 0x39b650u: goto label_39b650;
        case 0x39b654u: goto label_39b654;
        case 0x39b658u: goto label_39b658;
        case 0x39b65cu: goto label_39b65c;
        case 0x39b660u: goto label_39b660;
        case 0x39b664u: goto label_39b664;
        case 0x39b668u: goto label_39b668;
        case 0x39b66cu: goto label_39b66c;
        case 0x39b670u: goto label_39b670;
        case 0x39b674u: goto label_39b674;
        case 0x39b678u: goto label_39b678;
        case 0x39b67cu: goto label_39b67c;
        case 0x39b680u: goto label_39b680;
        case 0x39b684u: goto label_39b684;
        case 0x39b688u: goto label_39b688;
        case 0x39b68cu: goto label_39b68c;
        case 0x39b690u: goto label_39b690;
        case 0x39b694u: goto label_39b694;
        case 0x39b698u: goto label_39b698;
        case 0x39b69cu: goto label_39b69c;
        case 0x39b6a0u: goto label_39b6a0;
        case 0x39b6a4u: goto label_39b6a4;
        case 0x39b6a8u: goto label_39b6a8;
        case 0x39b6acu: goto label_39b6ac;
        case 0x39b6b0u: goto label_39b6b0;
        case 0x39b6b4u: goto label_39b6b4;
        case 0x39b6b8u: goto label_39b6b8;
        case 0x39b6bcu: goto label_39b6bc;
        case 0x39b6c0u: goto label_39b6c0;
        case 0x39b6c4u: goto label_39b6c4;
        case 0x39b6c8u: goto label_39b6c8;
        case 0x39b6ccu: goto label_39b6cc;
        case 0x39b6d0u: goto label_39b6d0;
        case 0x39b6d4u: goto label_39b6d4;
        case 0x39b6d8u: goto label_39b6d8;
        case 0x39b6dcu: goto label_39b6dc;
        case 0x39b6e0u: goto label_39b6e0;
        case 0x39b6e4u: goto label_39b6e4;
        case 0x39b6e8u: goto label_39b6e8;
        case 0x39b6ecu: goto label_39b6ec;
        case 0x39b6f0u: goto label_39b6f0;
        case 0x39b6f4u: goto label_39b6f4;
        case 0x39b6f8u: goto label_39b6f8;
        case 0x39b6fcu: goto label_39b6fc;
        case 0x39b700u: goto label_39b700;
        case 0x39b704u: goto label_39b704;
        case 0x39b708u: goto label_39b708;
        case 0x39b70cu: goto label_39b70c;
        case 0x39b710u: goto label_39b710;
        case 0x39b714u: goto label_39b714;
        case 0x39b718u: goto label_39b718;
        case 0x39b71cu: goto label_39b71c;
        case 0x39b720u: goto label_39b720;
        case 0x39b724u: goto label_39b724;
        case 0x39b728u: goto label_39b728;
        case 0x39b72cu: goto label_39b72c;
        case 0x39b730u: goto label_39b730;
        case 0x39b734u: goto label_39b734;
        case 0x39b738u: goto label_39b738;
        case 0x39b73cu: goto label_39b73c;
        case 0x39b740u: goto label_39b740;
        case 0x39b744u: goto label_39b744;
        case 0x39b748u: goto label_39b748;
        case 0x39b74cu: goto label_39b74c;
        case 0x39b750u: goto label_39b750;
        case 0x39b754u: goto label_39b754;
        case 0x39b758u: goto label_39b758;
        case 0x39b75cu: goto label_39b75c;
        case 0x39b760u: goto label_39b760;
        case 0x39b764u: goto label_39b764;
        case 0x39b768u: goto label_39b768;
        case 0x39b76cu: goto label_39b76c;
        case 0x39b770u: goto label_39b770;
        case 0x39b774u: goto label_39b774;
        case 0x39b778u: goto label_39b778;
        case 0x39b77cu: goto label_39b77c;
        case 0x39b780u: goto label_39b780;
        case 0x39b784u: goto label_39b784;
        case 0x39b788u: goto label_39b788;
        case 0x39b78cu: goto label_39b78c;
        case 0x39b790u: goto label_39b790;
        case 0x39b794u: goto label_39b794;
        case 0x39b798u: goto label_39b798;
        case 0x39b79cu: goto label_39b79c;
        case 0x39b7a0u: goto label_39b7a0;
        case 0x39b7a4u: goto label_39b7a4;
        case 0x39b7a8u: goto label_39b7a8;
        case 0x39b7acu: goto label_39b7ac;
        case 0x39b7b0u: goto label_39b7b0;
        case 0x39b7b4u: goto label_39b7b4;
        case 0x39b7b8u: goto label_39b7b8;
        case 0x39b7bcu: goto label_39b7bc;
        case 0x39b7c0u: goto label_39b7c0;
        case 0x39b7c4u: goto label_39b7c4;
        case 0x39b7c8u: goto label_39b7c8;
        case 0x39b7ccu: goto label_39b7cc;
        case 0x39b7d0u: goto label_39b7d0;
        case 0x39b7d4u: goto label_39b7d4;
        case 0x39b7d8u: goto label_39b7d8;
        case 0x39b7dcu: goto label_39b7dc;
        case 0x39b7e0u: goto label_39b7e0;
        case 0x39b7e4u: goto label_39b7e4;
        case 0x39b7e8u: goto label_39b7e8;
        case 0x39b7ecu: goto label_39b7ec;
        case 0x39b7f0u: goto label_39b7f0;
        case 0x39b7f4u: goto label_39b7f4;
        case 0x39b7f8u: goto label_39b7f8;
        case 0x39b7fcu: goto label_39b7fc;
        case 0x39b800u: goto label_39b800;
        case 0x39b804u: goto label_39b804;
        case 0x39b808u: goto label_39b808;
        case 0x39b80cu: goto label_39b80c;
        case 0x39b810u: goto label_39b810;
        case 0x39b814u: goto label_39b814;
        case 0x39b818u: goto label_39b818;
        case 0x39b81cu: goto label_39b81c;
        case 0x39b820u: goto label_39b820;
        case 0x39b824u: goto label_39b824;
        case 0x39b828u: goto label_39b828;
        case 0x39b82cu: goto label_39b82c;
        case 0x39b830u: goto label_39b830;
        case 0x39b834u: goto label_39b834;
        case 0x39b838u: goto label_39b838;
        case 0x39b83cu: goto label_39b83c;
        case 0x39b840u: goto label_39b840;
        case 0x39b844u: goto label_39b844;
        case 0x39b848u: goto label_39b848;
        case 0x39b84cu: goto label_39b84c;
        case 0x39b850u: goto label_39b850;
        case 0x39b854u: goto label_39b854;
        case 0x39b858u: goto label_39b858;
        case 0x39b85cu: goto label_39b85c;
        case 0x39b860u: goto label_39b860;
        case 0x39b864u: goto label_39b864;
        case 0x39b868u: goto label_39b868;
        case 0x39b86cu: goto label_39b86c;
        case 0x39b870u: goto label_39b870;
        case 0x39b874u: goto label_39b874;
        case 0x39b878u: goto label_39b878;
        case 0x39b87cu: goto label_39b87c;
        case 0x39b880u: goto label_39b880;
        case 0x39b884u: goto label_39b884;
        case 0x39b888u: goto label_39b888;
        case 0x39b88cu: goto label_39b88c;
        case 0x39b890u: goto label_39b890;
        case 0x39b894u: goto label_39b894;
        case 0x39b898u: goto label_39b898;
        case 0x39b89cu: goto label_39b89c;
        case 0x39b8a0u: goto label_39b8a0;
        case 0x39b8a4u: goto label_39b8a4;
        case 0x39b8a8u: goto label_39b8a8;
        case 0x39b8acu: goto label_39b8ac;
        case 0x39b8b0u: goto label_39b8b0;
        case 0x39b8b4u: goto label_39b8b4;
        case 0x39b8b8u: goto label_39b8b8;
        case 0x39b8bcu: goto label_39b8bc;
        case 0x39b8c0u: goto label_39b8c0;
        case 0x39b8c4u: goto label_39b8c4;
        case 0x39b8c8u: goto label_39b8c8;
        case 0x39b8ccu: goto label_39b8cc;
        case 0x39b8d0u: goto label_39b8d0;
        case 0x39b8d4u: goto label_39b8d4;
        default: break;
    }

    ctx->pc = 0x39b448u;

label_39b448:
    // 0x39b448: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39b448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_39b44c:
    // 0x39b44c: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x39b44cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
label_39b450:
    // 0x39b450: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x39b450u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
label_39b454:
    // 0x39b454: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x39b454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_39b458:
    // 0x39b458: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39b458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_39b45c:
    // 0x39b45c: 0x24c6c6b8  addiu       $a2, $a2, -0x3948
    ctx->pc = 0x39b45cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952632));
label_39b460:
    // 0x39b460: 0x24e7c798  addiu       $a3, $a3, -0x3868
    ctx->pc = 0x39b460u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952856));
label_39b464:
    // 0x39b464: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x39b464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_39b468:
    // 0x39b468: 0xc1063f6  jal         func_418FD8
label_39b46c:
    if (ctx->pc == 0x39B46Cu) {
        ctx->pc = 0x39B46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B468u;
        // 0x39b46c: 0x24050509  addiu       $a1, $zero, 0x509 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1289));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B470u;
        goto label_39b470;
    }
    ctx->pc = 0x39B468u;
    SET_GPR_U32(ctx, 31, 0x39B470u);
    ctx->pc = 0x39B46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B468u;
    // 0x39b46c: 0x24050509  addiu       $a1, $zero, 0x509 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1289));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418FD8u, 0x39B468u, 0x39B470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B470u;
label_39b470:
    // 0x39b470: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x39b470u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
label_39b474:
    // 0x39b474: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x39b474u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
label_39b478:
    // 0x39b478: 0x3c08003a  lui         $t0, 0x3A
    ctx->pc = 0x39b478u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)58 << 16));
label_39b47c:
    // 0x39b47c: 0x24c6c828  addiu       $a2, $a2, -0x37D8
    ctx->pc = 0x39b47cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953000));
label_39b480:
    // 0x39b480: 0x24e7c8d8  addiu       $a3, $a3, -0x3728
    ctx->pc = 0x39b480u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953176));
label_39b484:
    // 0x39b484: 0x2508c888  addiu       $t0, $t0, -0x3778
    ctx->pc = 0x39b484u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294953096));
label_39b488:
    // 0x39b488: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x39b488u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39b48c:
    // 0x39b48c: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x39b48cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_39b490:
    // 0x39b490: 0xc1060b4  jal         func_4182D0
label_39b494:
    if (ctx->pc == 0x39B494u) {
        ctx->pc = 0x39B494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B490u;
        // 0x39b494: 0x24050509  addiu       $a1, $zero, 0x509 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1289));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B498u;
        goto label_39b498;
    }
    ctx->pc = 0x39B490u;
    SET_GPR_U32(ctx, 31, 0x39B498u);
    ctx->pc = 0x39B494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B490u;
    // 0x39b494: 0x24050509  addiu       $a1, $zero, 0x509 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1289));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4182D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4182D0u, 0x39B490u, 0x39B498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B498u;
label_39b498:
    // 0x39b498: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x39b498u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
label_39b49c:
    // 0x39b49c: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x39b49cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
label_39b4a0:
    // 0x39b4a0: 0x3c08003a  lui         $t0, 0x3A
    ctx->pc = 0x39b4a0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)58 << 16));
label_39b4a4:
    // 0x39b4a4: 0x24c6c948  addiu       $a2, $a2, -0x36B8
    ctx->pc = 0x39b4a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953288));
label_39b4a8:
    // 0x39b4a8: 0x24e7c988  addiu       $a3, $a3, -0x3678
    ctx->pc = 0x39b4a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953352));
label_39b4ac:
    // 0x39b4ac: 0x2508c980  addiu       $t0, $t0, -0x3680
    ctx->pc = 0x39b4acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294953344));
label_39b4b0:
    // 0x39b4b0: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x39b4b0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_39b4b4:
    // 0x39b4b4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x39b4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_39b4b8:
    // 0x39b4b8: 0x24050509  addiu       $a1, $zero, 0x509
    ctx->pc = 0x39b4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1289));
label_39b4bc:
    // 0x39b4bc: 0xc0e28ec  jal         func_38A3B0
label_39b4c0:
    if (ctx->pc == 0x39B4C0u) {
        ctx->pc = 0x39B4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B4BCu;
        // 0x39b4c0: 0xaf82a9e0  sw          $v0, -0x5620($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294945248), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B4C4u;
        goto label_39b4c4;
    }
    ctx->pc = 0x39B4BCu;
    SET_GPR_U32(ctx, 31, 0x39B4C4u);
    ctx->pc = 0x39B4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B4BCu;
    // 0x39b4c0: 0xaf82a9e0  sw          $v0, -0x5620($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945248), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A3B0u, 0x39B4BCu, 0x39B4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B4C4u;
label_39b4c4:
    // 0x39b4c4: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x39b4c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
label_39b4c8:
    // 0x39b4c8: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x39b4c8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
label_39b4cc:
    // 0x39b4cc: 0x3c08003a  lui         $t0, 0x3A
    ctx->pc = 0x39b4ccu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)58 << 16));
label_39b4d0:
    // 0x39b4d0: 0x24c6ca58  addiu       $a2, $a2, -0x35A8
    ctx->pc = 0x39b4d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953560));
label_39b4d4:
    // 0x39b4d4: 0x24e7cac8  addiu       $a3, $a3, -0x3538
    ctx->pc = 0x39b4d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953672));
label_39b4d8:
    // 0x39b4d8: 0x2508ca88  addiu       $t0, $t0, -0x3578
    ctx->pc = 0x39b4d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294953608));
label_39b4dc:
    // 0x39b4dc: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x39b4dcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_39b4e0:
    // 0x39b4e0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x39b4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_39b4e4:
    // 0x39b4e4: 0x24050509  addiu       $a1, $zero, 0x509
    ctx->pc = 0x39b4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1289));
label_39b4e8:
    // 0x39b4e8: 0xc0e28fe  jal         func_38A3F8
label_39b4ec:
    if (ctx->pc == 0x39B4ECu) {
        ctx->pc = 0x39B4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B4E8u;
        // 0x39b4ec: 0xaf82a9e4  sw          $v0, -0x561C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294945252), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B4F0u;
        goto label_39b4f0;
    }
    ctx->pc = 0x39B4E8u;
    SET_GPR_U32(ctx, 31, 0x39B4F0u);
    ctx->pc = 0x39B4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B4E8u;
    // 0x39b4ec: 0xaf82a9e4  sw          $v0, -0x561C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945252), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A3F8u, 0x39B4E8u, 0x39B4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B4F0u;
label_39b4f0:
    // 0x39b4f0: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x39b4f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
label_39b4f4:
    // 0x39b4f4: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x39b4f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
label_39b4f8:
    // 0x39b4f8: 0x3c08003a  lui         $t0, 0x3A
    ctx->pc = 0x39b4f8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)58 << 16));
label_39b4fc:
    // 0x39b4fc: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x39b4fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_39b500:
    // 0x39b500: 0x24c6cad0  addiu       $a2, $a2, -0x3530
    ctx->pc = 0x39b500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953680));
label_39b504:
    // 0x39b504: 0x24e7cb38  addiu       $a3, $a3, -0x34C8
    ctx->pc = 0x39b504u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953784));
label_39b508:
    // 0x39b508: 0x2508caf8  addiu       $t0, $t0, -0x3508
    ctx->pc = 0x39b508u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294953720));
label_39b50c:
    // 0x39b50c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x39b50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_39b510:
    // 0x39b510: 0x24050509  addiu       $a1, $zero, 0x509
    ctx->pc = 0x39b510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1289));
label_39b514:
    // 0x39b514: 0xc0e36f6  jal         func_38DBD8
label_39b518:
    if (ctx->pc == 0x39B518u) {
        ctx->pc = 0x39B518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B514u;
        // 0x39b518: 0xaf82a9e8  sw          $v0, -0x5618($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294945256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B51Cu;
        goto label_39b51c;
    }
    ctx->pc = 0x39B514u;
    SET_GPR_U32(ctx, 31, 0x39B51Cu);
    ctx->pc = 0x39B518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B514u;
    // 0x39b518: 0xaf82a9e8  sw          $v0, -0x5618($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945256), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38DBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38DBD8u, 0x39B514u, 0x39B51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B51Cu;
label_39b51c:
    // 0x39b51c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x39b51cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39b520:
    // 0x39b520: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x39b520u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_39b524:
    // 0x39b524: 0x2405050e  addiu       $a1, $zero, 0x50E
    ctx->pc = 0x39b524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1294));
label_39b528:
    // 0x39b528: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39b528u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39b52c:
    // 0x39b52c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x39b52cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39b530:
    // 0x39b530: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x39b530u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39b534:
    // 0x39b534: 0xc0e344a  jal         func_38D128
label_39b538:
    if (ctx->pc == 0x39B538u) {
        ctx->pc = 0x39B538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B534u;
        // 0x39b538: 0xaf82a9ec  sw          $v0, -0x5614($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294945260), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B53Cu;
        goto label_39b53c;
    }
    ctx->pc = 0x39B534u;
    SET_GPR_U32(ctx, 31, 0x39B53Cu);
    ctx->pc = 0x39B538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B534u;
    // 0x39b538: 0xaf82a9ec  sw          $v0, -0x5614($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945260), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D128u, 0x39B534u, 0x39B53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B53Cu;
label_39b53c:
    // 0x39b53c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x39b53cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39b540:
    // 0x39b540: 0x2405050e  addiu       $a1, $zero, 0x50E
    ctx->pc = 0x39b540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1294));
label_39b544:
    // 0x39b544: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39b544u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39b548:
    // 0x39b548: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x39b548u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39b54c:
    // 0x39b54c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x39b54cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_39b550:
    // 0x39b550: 0xc0e63a2  jal         func_398E88
label_39b554:
    if (ctx->pc == 0x39B554u) {
        ctx->pc = 0x39B554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B550u;
        // 0x39b554: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B558u;
        goto label_39b558;
    }
    ctx->pc = 0x39B550u;
    SET_GPR_U32(ctx, 31, 0x39B558u);
    ctx->pc = 0x39B554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B550u;
    // 0x39b554: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398E88u, 0x39B550u, 0x39B558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B558u;
label_39b558:
    // 0x39b558: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x39b558u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
label_39b55c:
    // 0x39b55c: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x39b55cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
label_39b560:
    // 0x39b560: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x39b560u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
label_39b564:
    // 0x39b564: 0x24a5cd80  addiu       $a1, $a1, -0x3280
    ctx->pc = 0x39b564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954368));
label_39b568:
    // 0x39b568: 0x24c6cd50  addiu       $a2, $a2, -0x32B0
    ctx->pc = 0x39b568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954320));
label_39b56c:
    // 0x39b56c: 0x24e7cdc8  addiu       $a3, $a3, -0x3238
    ctx->pc = 0x39b56cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954440));
label_39b570:
    // 0x39b570: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x39b570u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_39b574:
    // 0x39b574: 0xc0e345c  jal         func_38D170
label_39b578:
    if (ctx->pc == 0x39B578u) {
        ctx->pc = 0x39B578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B574u;
        // 0x39b578: 0x2404050e  addiu       $a0, $zero, 0x50E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B57Cu;
        goto label_39b57c;
    }
    ctx->pc = 0x39B574u;
    SET_GPR_U32(ctx, 31, 0x39B57Cu);
    ctx->pc = 0x39B578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B574u;
    // 0x39b578: 0x2404050e  addiu       $a0, $zero, 0x50E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D170u, 0x39B574u, 0x39B57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B57Cu;
label_39b57c:
    // 0x39b57c: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x39b57cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
label_39b580:
    // 0x39b580: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x39b580u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
label_39b584:
    // 0x39b584: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x39b584u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
label_39b588:
    // 0x39b588: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x39b588u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_39b58c:
    // 0x39b58c: 0x24a5cf10  addiu       $a1, $a1, -0x30F0
    ctx->pc = 0x39b58cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954768));
label_39b590:
    // 0x39b590: 0x24c6cec8  addiu       $a2, $a2, -0x3138
    ctx->pc = 0x39b590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954696));
label_39b594:
    // 0x39b594: 0x24e7cf68  addiu       $a3, $a3, -0x3098
    ctx->pc = 0x39b594u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954856));
label_39b598:
    // 0x39b598: 0xc0e63b4  jal         func_398ED0
label_39b59c:
    if (ctx->pc == 0x39B59Cu) {
        ctx->pc = 0x39B59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B598u;
        // 0x39b59c: 0x2404050e  addiu       $a0, $zero, 0x50E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B5A0u;
        goto label_39b5a0;
    }
    ctx->pc = 0x39B598u;
    SET_GPR_U32(ctx, 31, 0x39B5A0u);
    ctx->pc = 0x39B59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B598u;
    // 0x39b59c: 0x2404050e  addiu       $a0, $zero, 0x50E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398ED0u, 0x39B598u, 0x39B5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B5A0u;
label_39b5a0:
    // 0x39b5a0: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x39b5a0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_39b5a4:
    // 0x39b5a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x39b5a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39b5a8:
    // 0x39b5a8: 0x24050510  addiu       $a1, $zero, 0x510
    ctx->pc = 0x39b5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1296));
label_39b5ac:
    // 0x39b5ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39b5acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39b5b0:
    // 0x39b5b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x39b5b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39b5b4:
    // 0x39b5b4: 0xc0e344a  jal         func_38D128
label_39b5b8:
    if (ctx->pc == 0x39B5B8u) {
        ctx->pc = 0x39B5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B5B4u;
        // 0x39b5b8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B5BCu;
        goto label_39b5bc;
    }
    ctx->pc = 0x39B5B4u;
    SET_GPR_U32(ctx, 31, 0x39B5BCu);
    ctx->pc = 0x39B5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B5B4u;
    // 0x39b5b8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D128u, 0x39B5B4u, 0x39B5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B5BCu;
label_39b5bc:
    // 0x39b5bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x39b5bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39b5c0:
    // 0x39b5c0: 0x24050510  addiu       $a1, $zero, 0x510
    ctx->pc = 0x39b5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1296));
label_39b5c4:
    // 0x39b5c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39b5c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39b5c8:
    // 0x39b5c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x39b5c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39b5cc:
    // 0x39b5cc: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x39b5ccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_39b5d0:
    // 0x39b5d0: 0xc0e63a2  jal         func_398E88
label_39b5d4:
    if (ctx->pc == 0x39B5D4u) {
        ctx->pc = 0x39B5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B5D0u;
        // 0x39b5d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B5D8u;
        goto label_39b5d8;
    }
    ctx->pc = 0x39B5D0u;
    SET_GPR_U32(ctx, 31, 0x39B5D8u);
    ctx->pc = 0x39B5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B5D0u;
    // 0x39b5d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398E88u, 0x39B5D0u, 0x39B5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B5D8u;
label_39b5d8:
    // 0x39b5d8: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x39b5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
label_39b5dc:
    // 0x39b5dc: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x39b5dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
label_39b5e0:
    // 0x39b5e0: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x39b5e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
label_39b5e4:
    // 0x39b5e4: 0x24a5ce08  addiu       $a1, $a1, -0x31F8
    ctx->pc = 0x39b5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954504));
label_39b5e8:
    // 0x39b5e8: 0x24c6cde8  addiu       $a2, $a2, -0x3218
    ctx->pc = 0x39b5e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954472));
label_39b5ec:
    // 0x39b5ec: 0x24e7ce38  addiu       $a3, $a3, -0x31C8
    ctx->pc = 0x39b5ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954552));
label_39b5f0:
    // 0x39b5f0: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x39b5f0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_39b5f4:
    // 0x39b5f4: 0xc0e345c  jal         func_38D170
label_39b5f8:
    if (ctx->pc == 0x39B5F8u) {
        ctx->pc = 0x39B5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B5F4u;
        // 0x39b5f8: 0x24040510  addiu       $a0, $zero, 0x510 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1296));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B5FCu;
        goto label_39b5fc;
    }
    ctx->pc = 0x39B5F4u;
    SET_GPR_U32(ctx, 31, 0x39B5FCu);
    ctx->pc = 0x39B5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B5F4u;
    // 0x39b5f8: 0x24040510  addiu       $a0, $zero, 0x510 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D170u, 0x39B5F4u, 0x39B5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B5FCu;
label_39b5fc:
    // 0x39b5fc: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x39b5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
label_39b600:
    // 0x39b600: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x39b600u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
label_39b604:
    // 0x39b604: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x39b604u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
label_39b608:
    // 0x39b608: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x39b608u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_39b60c:
    // 0x39b60c: 0x24a5ce78  addiu       $a1, $a1, -0x3188
    ctx->pc = 0x39b60cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954616));
label_39b610:
    // 0x39b610: 0x24c6ce58  addiu       $a2, $a2, -0x31A8
    ctx->pc = 0x39b610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954584));
label_39b614:
    // 0x39b614: 0x24e7cea8  addiu       $a3, $a3, -0x3158
    ctx->pc = 0x39b614u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954664));
label_39b618:
    // 0x39b618: 0xc0e63b4  jal         func_398ED0
label_39b61c:
    if (ctx->pc == 0x39B61Cu) {
        ctx->pc = 0x39B61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B618u;
        // 0x39b61c: 0x24040510  addiu       $a0, $zero, 0x510 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1296));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B620u;
        goto label_39b620;
    }
    ctx->pc = 0x39B618u;
    SET_GPR_U32(ctx, 31, 0x39B620u);
    ctx->pc = 0x39B61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B618u;
    // 0x39b61c: 0x24040510  addiu       $a0, $zero, 0x510 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398ED0u, 0x39B618u, 0x39B620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B620u;
label_39b620:
    // 0x39b620: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x39b620u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39b624:
    // 0x39b624: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x39b624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_39b628:
    // 0x39b628: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39b628u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39b62c:
    // 0x39b62c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x39b62cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39b630:
    // 0x39b630: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x39b630u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_39b634:
    // 0x39b634: 0xc0e28ec  jal         func_38A3B0
label_39b638:
    if (ctx->pc == 0x39B638u) {
        ctx->pc = 0x39B638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B634u;
        // 0x39b638: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B63Cu;
        goto label_39b63c;
    }
    ctx->pc = 0x39B634u;
    SET_GPR_U32(ctx, 31, 0x39B63Cu);
    ctx->pc = 0x39B638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B634u;
    // 0x39b638: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A3B0u, 0x39B634u, 0x39B63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B63Cu;
label_39b63c:
    // 0x39b63c: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x39b63cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
label_39b640:
    // 0x39b640: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x39b640u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
label_39b644:
    // 0x39b644: 0x3c070039  lui         $a3, 0x39
    ctx->pc = 0x39b644u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)57 << 16));
label_39b648:
    // 0x39b648: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x39b648u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_39b64c:
    // 0x39b64c: 0x24a596c0  addiu       $a1, $a1, -0x6940
    ctx->pc = 0x39b64cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940352));
label_39b650:
    // 0x39b650: 0x24c69730  addiu       $a2, $a2, -0x68D0
    ctx->pc = 0x39b650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940464));
label_39b654:
    // 0x39b654: 0x24e79798  addiu       $a3, $a3, -0x6868
    ctx->pc = 0x39b654u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940568));
label_39b658:
    // 0x39b658: 0xc0e2910  jal         func_38A440
label_39b65c:
    if (ctx->pc == 0x39B65Cu) {
        ctx->pc = 0x39B65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B658u;
        // 0x39b65c: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B660u;
        goto label_39b660;
    }
    ctx->pc = 0x39B658u;
    SET_GPR_U32(ctx, 31, 0x39B660u);
    ctx->pc = 0x39B65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B658u;
    // 0x39b65c: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A440u, 0x39B658u, 0x39B660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B660u;
label_39b660:
    // 0x39b660: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x39b660u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39b664:
    // 0x39b664: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x39b664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_39b668:
    // 0x39b668: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39b668u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39b66c:
    // 0x39b66c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x39b66cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39b670:
    // 0x39b670: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x39b670u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_39b674:
    // 0x39b674: 0xc0e6a18  jal         func_39A860
label_39b678:
    if (ctx->pc == 0x39B678u) {
        ctx->pc = 0x39B678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B674u;
        // 0x39b678: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B67Cu;
        goto label_39b67c;
    }
    ctx->pc = 0x39B674u;
    SET_GPR_U32(ctx, 31, 0x39B67Cu);
    ctx->pc = 0x39B678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B674u;
    // 0x39b678: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A860u, 0x39B674u, 0x39B67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B67Cu;
label_39b67c:
    // 0x39b67c: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x39b67cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
label_39b680:
    // 0x39b680: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x39b680u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
label_39b684:
    // 0x39b684: 0x3c070038  lui         $a3, 0x38
    ctx->pc = 0x39b684u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)56 << 16));
label_39b688:
    // 0x39b688: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x39b688u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_39b68c:
    // 0x39b68c: 0x24a57400  addiu       $a1, $a1, 0x7400
    ctx->pc = 0x39b68cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29696));
label_39b690:
    // 0x39b690: 0x24c67470  addiu       $a2, $a2, 0x7470
    ctx->pc = 0x39b690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29808));
label_39b694:
    // 0x39b694: 0x24e774d8  addiu       $a3, $a3, 0x74D8
    ctx->pc = 0x39b694u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 29912));
label_39b698:
    // 0x39b698: 0xc0e6a2a  jal         func_39A8A8
label_39b69c:
    if (ctx->pc == 0x39B69Cu) {
        ctx->pc = 0x39B69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B698u;
        // 0x39b69c: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B6A0u;
        goto label_39b6a0;
    }
    ctx->pc = 0x39B698u;
    SET_GPR_U32(ctx, 31, 0x39B6A0u);
    ctx->pc = 0x39B69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B698u;
    // 0x39b69c: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A8A8u, 0x39B698u, 0x39B6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B6A0u;
label_39b6a0:
    // 0x39b6a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x39b6a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39b6a4:
    // 0x39b6a4: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x39b6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_39b6a8:
    // 0x39b6a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39b6a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39b6ac:
    // 0x39b6ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x39b6acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39b6b0:
    // 0x39b6b0: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x39b6b0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_39b6b4:
    // 0x39b6b4: 0xc0e63a2  jal         func_398E88
label_39b6b8:
    if (ctx->pc == 0x39B6B8u) {
        ctx->pc = 0x39B6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B6B4u;
        // 0x39b6b8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B6BCu;
        goto label_39b6bc;
    }
    ctx->pc = 0x39B6B4u;
    SET_GPR_U32(ctx, 31, 0x39B6BCu);
    ctx->pc = 0x39B6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B6B4u;
    // 0x39b6b8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398E88u, 0x39B6B4u, 0x39B6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B6BCu;
label_39b6bc:
    // 0x39b6bc: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x39b6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
label_39b6c0:
    // 0x39b6c0: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x39b6c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
label_39b6c4:
    // 0x39b6c4: 0x3c070038  lui         $a3, 0x38
    ctx->pc = 0x39b6c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)56 << 16));
label_39b6c8:
    // 0x39b6c8: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x39b6c8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_39b6cc:
    // 0x39b6cc: 0x24a57500  addiu       $a1, $a1, 0x7500
    ctx->pc = 0x39b6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29952));
label_39b6d0:
    // 0x39b6d0: 0x24c67570  addiu       $a2, $a2, 0x7570
    ctx->pc = 0x39b6d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30064));
label_39b6d4:
    // 0x39b6d4: 0x24e775d8  addiu       $a3, $a3, 0x75D8
    ctx->pc = 0x39b6d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 30168));
label_39b6d8:
    // 0x39b6d8: 0xc0e63b4  jal         func_398ED0
label_39b6dc:
    if (ctx->pc == 0x39B6DCu) {
        ctx->pc = 0x39B6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B6D8u;
        // 0x39b6dc: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B6E0u;
        goto label_39b6e0;
    }
    ctx->pc = 0x39B6D8u;
    SET_GPR_U32(ctx, 31, 0x39B6E0u);
    ctx->pc = 0x39B6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B6D8u;
    // 0x39b6dc: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398ED0u, 0x39B6D8u, 0x39B6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B6E0u;
label_39b6e0:
    // 0x39b6e0: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x39b6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_39b6e4:
    // 0x39b6e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39b6e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39b6e8:
    // 0x39b6e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x39b6e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39b6ec:
    // 0x39b6ec: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x39b6ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_39b6f0:
    // 0x39b6f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x39b6f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39b6f4:
    // 0x39b6f4: 0xc0e39f6  jal         func_38E7D8
label_39b6f8:
    if (ctx->pc == 0x39B6F8u) {
        ctx->pc = 0x39B6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B6F4u;
        // 0x39b6f8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B6FCu;
        goto label_39b6fc;
    }
    ctx->pc = 0x39B6F4u;
    SET_GPR_U32(ctx, 31, 0x39B6FCu);
    ctx->pc = 0x39B6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B6F4u;
    // 0x39b6f8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E7D8u, 0x39B6F4u, 0x39B6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B6FCu;
label_39b6fc:
    // 0x39b6fc: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x39b6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
label_39b700:
    // 0x39b700: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x39b700u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
label_39b704:
    // 0x39b704: 0x3c070039  lui         $a3, 0x39
    ctx->pc = 0x39b704u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)57 << 16));
label_39b708:
    // 0x39b708: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x39b708u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_39b70c:
    // 0x39b70c: 0x24a5e4f0  addiu       $a1, $a1, -0x1B10
    ctx->pc = 0x39b70cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960368));
label_39b710:
    // 0x39b710: 0x24c6e560  addiu       $a2, $a2, -0x1AA0
    ctx->pc = 0x39b710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960480));
label_39b714:
    // 0x39b714: 0x24e7e5c8  addiu       $a3, $a3, -0x1A38
    ctx->pc = 0x39b714u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960584));
label_39b718:
    // 0x39b718: 0xc0e3a08  jal         func_38E820
label_39b71c:
    if (ctx->pc == 0x39B71Cu) {
        ctx->pc = 0x39B71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B718u;
        // 0x39b71c: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B720u;
        goto label_39b720;
    }
    ctx->pc = 0x39B718u;
    SET_GPR_U32(ctx, 31, 0x39B720u);
    ctx->pc = 0x39B71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B718u;
    // 0x39b71c: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E820u, 0x39B718u, 0x39B720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B720u;
label_39b720:
    // 0x39b720: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x39b720u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_39b724:
    // 0x39b724: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_39b728:
    if (ctx->pc == 0x39B728u) {
        ctx->pc = 0x39B728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B724u;
        // 0x39b728: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B72Cu;
        goto label_39b72c;
    }
    ctx->pc = 0x39B724u;
    {
        const bool branch_taken_0x39b724 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x39b724) {
            ctx->pc = 0x39B728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39B724u;
            // 0x39b728: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39B738u;
            goto label_39b738;
        }
    }
    ctx->pc = 0x39B72Cu;
label_39b72c:
    // 0x39b72c: 0xc0e7846  jal         func_39E118
label_39b730:
    if (ctx->pc == 0x39B730u) {
        ctx->pc = 0x39B734u;
        goto label_39b734;
    }
    ctx->pc = 0x39B72Cu;
    SET_GPR_U32(ctx, 31, 0x39B734u);
    ctx->pc = 0x39E118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39E118u, 0x39B72Cu, 0x39B734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B734u;
label_39b734:
    // 0x39b734: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x39b734u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_39b738:
    // 0x39b738: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x39b738u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39b73c:
    // 0x39b73c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39b73cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39b740:
    // 0x39b740: 0x3e00008  jr          $ra
label_39b744:
    if (ctx->pc == 0x39B744u) {
        ctx->pc = 0x39B744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B740u;
        // 0x39b744: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B748u;
        goto label_39b748;
    }
    ctx->pc = 0x39B740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39B744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B740u;
        // 0x39b744: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39B740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39B748u;
label_39b748:
    // 0x39b748: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x39b748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_39b74c:
    // 0x39b74c: 0x8f86bd68  lw          $a2, -0x4298($gp)
    ctx->pc = 0x39b74cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950248)));
label_39b750:
    // 0x39b750: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x39b750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_39b754:
    // 0x39b754: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x39b754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_39b758:
    // 0x39b758: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x39b758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_39b75c:
    // 0x39b75c: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x39b75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_39b760:
    // 0x39b760: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x39b760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_39b764:
    // 0x39b764: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x39b764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_39b768:
    // 0x39b768: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x39b768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_39b76c:
    // 0x39b76c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x39b76cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39b770:
    // 0x39b770: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x39b770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_39b774:
    // 0x39b774: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x39b774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_39b778:
    // 0x39b778: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x39b778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_39b77c:
    // 0x39b77c: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x39b77cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_39b780:
    // 0x39b780: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x39b780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_39b784:
    // 0x39b784: 0x8f83a9e0  lw          $v1, -0x5620($gp)
    ctx->pc = 0x39b784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945248)));
label_39b788:
    // 0x39b788: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x39b788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_39b78c:
    // 0x39b78c: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x39b78cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_39b790:
    // 0x39b790: 0x24530001  addiu       $s3, $v0, 0x1
    ctx->pc = 0x39b790u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_39b794:
    // 0x39b794: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x39b794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_39b798:
    // 0x39b798: 0xacd30008  sw          $s3, 0x8($a2)
    ctx->pc = 0x39b798u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 19));
label_39b79c:
    // 0x39b79c: 0x8c720008  lw          $s2, 0x8($v1)
    ctx->pc = 0x39b79cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_39b7a0:
    // 0x39b7a0: 0x12400038  beqz        $s2, . + 4 + (0x38 << 2)
label_39b7a4:
    if (ctx->pc == 0x39B7A4u) {
        ctx->pc = 0x39B7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B7A0u;
        // 0x39b7a4: 0xa0b82d  daddu       $s7, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B7A8u;
        goto label_39b7a8;
    }
    ctx->pc = 0x39B7A0u;
    {
        const bool branch_taken_0x39b7a0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B7A0u;
        // 0x39b7a4: 0xa0b82d  daddu       $s7, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b7a0) {
            ctx->pc = 0x39B884u;
            goto label_39b884;
        }
    }
    ctx->pc = 0x39B7A8u;
label_39b7a8:
    // 0x39b7a8: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x39b7a8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39b7ac:
    // 0x39b7ac: 0x0  nop
    ctx->pc = 0x39b7acu;
    // NOP
label_39b7b0:
    // 0x39b7b0: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x39b7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_39b7b4:
    // 0x39b7b4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x39b7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_39b7b8:
    // 0x39b7b8: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x39b7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_39b7bc:
    // 0x39b7bc: 0x8c450038  lw          $a1, 0x38($v0)
    ctx->pc = 0x39b7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_39b7c0:
    // 0x39b7c0: 0x24550038  addiu       $s5, $v0, 0x38
    ctx->pc = 0x39b7c0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
label_39b7c4:
    // 0x39b7c4: 0x50b5002d  beql        $a1, $s5, . + 4 + (0x2D << 2)
label_39b7c8:
    if (ctx->pc == 0x39B7C8u) {
        ctx->pc = 0x39B7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B7C4u;
        // 0x39b7c8: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B7CCu;
        goto label_39b7cc;
    }
    ctx->pc = 0x39B7C4u;
    {
        const bool branch_taken_0x39b7c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 21));
        if (branch_taken_0x39b7c4) {
            ctx->pc = 0x39B7C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39B7C4u;
            // 0x39b7c8: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39B87Cu;
            goto label_39b87c;
        }
    }
    ctx->pc = 0x39B7CCu;
label_39b7cc:
    // 0x39b7cc: 0x0  nop
    ctx->pc = 0x39b7ccu;
    // NOP
label_39b7d0:
    // 0x39b7d0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x39b7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_39b7d4:
    // 0x39b7d4: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x39b7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
label_39b7d8:
    // 0x39b7d8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x39b7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_39b7dc:
    // 0x39b7dc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x39b7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_39b7e0:
    // 0x39b7e0: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x39b7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_39b7e4:
    // 0x39b7e4: 0xac5d0004  sw          $sp, 0x4($v0)
    ctx->pc = 0x39b7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 29));
label_39b7e8:
    // 0x39b7e8: 0x8c91003c  lw          $s1, 0x3C($a0)
    ctx->pc = 0x39b7e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_39b7ec:
    // 0x39b7ec: 0x1220001b  beqz        $s1, . + 4 + (0x1B << 2)
label_39b7f0:
    if (ctx->pc == 0x39B7F0u) {
        ctx->pc = 0x39B7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B7ECu;
        // 0x39b7f0: 0xacbd0000  sw          $sp, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B7F4u;
        goto label_39b7f4;
    }
    ctx->pc = 0x39B7ECu;
    {
        const bool branch_taken_0x39b7ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B7ECu;
        // 0x39b7f0: 0xacbd0000  sw          $sp, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b7ec) {
            ctx->pc = 0x39B85Cu;
            goto label_39b85c;
        }
    }
    ctx->pc = 0x39B7F4u;
label_39b7f4:
    // 0x39b7f4: 0x8f82a9e8  lw          $v0, -0x5618($gp)
    ctx->pc = 0x39b7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945256)));
label_39b7f8:
    // 0x39b7f8: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x39b7f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_39b7fc:
    // 0x39b7fc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x39b7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_39b800:
    // 0x39b800: 0x10730017  beq         $v1, $s3, . + 4 + (0x17 << 2)
label_39b804:
    if (ctx->pc == 0x39B804u) {
        ctx->pc = 0x39B804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B800u;
        // 0x39b804: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B808u;
        goto label_39b808;
    }
    ctx->pc = 0x39B800u;
    {
        const bool branch_taken_0x39b800 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x39B804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B800u;
        // 0x39b804: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b800) {
            ctx->pc = 0x39B860u;
            goto label_39b860;
        }
    }
    ctx->pc = 0x39B808u;
label_39b808:
    // 0x39b808: 0xc0e2048  jal         func_388120
label_39b80c:
    if (ctx->pc == 0x39B80Cu) {
        ctx->pc = 0x39B810u;
        goto label_39b810;
    }
    ctx->pc = 0x39B808u;
    SET_GPR_U32(ctx, 31, 0x39B810u);
    ctx->pc = 0x388120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388120u, 0x39B808u, 0x39B810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B810u;
label_39b810:
    // 0x39b810: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x39b810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39b814:
    // 0x39b814: 0xc1060d2  jal         func_418348
label_39b818:
    if (ctx->pc == 0x39B818u) {
        ctx->pc = 0x39B818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B814u;
        // 0x39b818: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B81Cu;
        goto label_39b81c;
    }
    ctx->pc = 0x39B814u;
    SET_GPR_U32(ctx, 31, 0x39B81Cu);
    ctx->pc = 0x39B818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B814u;
    // 0x39b818: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418348u, 0x39B814u, 0x39B81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B81Cu;
label_39b81c:
    // 0x39b81c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_39b820:
    if (ctx->pc == 0x39B820u) {
        ctx->pc = 0x39B820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B81Cu;
        // 0x39b820: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B824u;
        goto label_39b824;
    }
    ctx->pc = 0x39B81Cu;
    {
        const bool branch_taken_0x39b81c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B81Cu;
        // 0x39b820: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b81c) {
            ctx->pc = 0x39B85Cu;
            goto label_39b85c;
        }
    }
    ctx->pc = 0x39B824u;
label_39b824:
    // 0x39b824: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x39b824u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
label_39b828:
    // 0x39b828: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x39b828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_39b82c:
    // 0x39b82c: 0x40f809  jalr        $v0
label_39b830:
    if (ctx->pc == 0x39B830u) {
        ctx->pc = 0x39B830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B82Cu;
        // 0x39b830: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B834u;
        goto label_39b834;
    }
    ctx->pc = 0x39B82Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39B834u);
        ctx->pc = 0x39B830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B82Cu;
        // 0x39b830: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39B82Cu, 0x39B834u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39B834u;
label_39b834:
    // 0x39b834: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_39b838:
    if (ctx->pc == 0x39B838u) {
        ctx->pc = 0x39B838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B834u;
        // 0x39b838: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B83Cu;
        goto label_39b83c;
    }
    ctx->pc = 0x39B834u;
    {
        const bool branch_taken_0x39b834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39B838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B834u;
        // 0x39b838: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b834) {
            ctx->pc = 0x39B860u;
            goto label_39b860;
        }
    }
    ctx->pc = 0x39B83Cu;
label_39b83c:
    // 0x39b83c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x39b83cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_39b840:
    // 0x39b840: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x39b840u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_39b844:
    // 0x39b844: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x39b844u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_39b848:
    // 0x39b848: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x39b848u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_39b84c:
    // 0x39b84c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x39b84cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_39b850:
    // 0x39b850: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x39b850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_39b854:
    // 0x39b854: 0x1000000c  b           . + 4 + (0xC << 2)
label_39b858:
    if (ctx->pc == 0x39B858u) {
        ctx->pc = 0x39B858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B854u;
        // 0x39b858: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B85Cu;
        goto label_39b85c;
    }
    ctx->pc = 0x39B854u;
    {
        const bool branch_taken_0x39b854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B854u;
        // 0x39b858: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b854) {
            ctx->pc = 0x39B888u;
            goto label_39b888;
        }
    }
    ctx->pc = 0x39B85Cu;
label_39b85c:
    // 0x39b85c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x39b85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_39b860:
    // 0x39b860: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x39b860u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_39b864:
    // 0x39b864: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x39b864u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_39b868:
    // 0x39b868: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x39b868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_39b86c:
    // 0x39b86c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x39b86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_39b870:
    // 0x39b870: 0x14b5ffd7  bne         $a1, $s5, . + 4 + (-0x29 << 2)
label_39b874:
    if (ctx->pc == 0x39B874u) {
        ctx->pc = 0x39B874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B870u;
        // 0x39b874: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B878u;
        goto label_39b878;
    }
    ctx->pc = 0x39B870u;
    {
        const bool branch_taken_0x39b870 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 21));
        ctx->pc = 0x39B874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B870u;
        // 0x39b874: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b870) {
            ctx->pc = 0x39B7D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39b7d0;
        }
    }
    ctx->pc = 0x39B878u;
label_39b878:
    // 0x39b878: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x39b878u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_39b87c:
    // 0x39b87c: 0x1640ffcc  bnez        $s2, . + 4 + (-0x34 << 2)
label_39b880:
    if (ctx->pc == 0x39B880u) {
        ctx->pc = 0x39B880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B87Cu;
        // 0x39b880: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B884u;
        goto label_39b884;
    }
    ctx->pc = 0x39B87Cu;
    {
        const bool branch_taken_0x39b87c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x39B880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B87Cu;
        // 0x39b880: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b87c) {
            ctx->pc = 0x39B7B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39b7b0;
        }
    }
    ctx->pc = 0x39B884u;
label_39b884:
    // 0x39b884: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x39b884u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_39b888:
    // 0x39b888: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x39b888u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_39b88c:
    // 0x39b88c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x39b88cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_39b890:
    // 0x39b890: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x39b890u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_39b894:
    // 0x39b894: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x39b894u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_39b898:
    // 0x39b898: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x39b898u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_39b89c:
    // 0x39b89c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x39b89cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_39b8a0:
    // 0x39b8a0: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x39b8a0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_39b8a4:
    // 0x39b8a4: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x39b8a4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_39b8a8:
    // 0x39b8a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x39b8a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_39b8ac:
    // 0x39b8ac: 0x3e00008  jr          $ra
label_39b8b0:
    if (ctx->pc == 0x39B8B0u) {
        ctx->pc = 0x39B8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B8ACu;
        // 0x39b8b0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B8B4u;
        goto label_39b8b4;
    }
    ctx->pc = 0x39B8ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39B8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B8ACu;
        // 0x39b8b0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39B8ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39B8B4u;
label_39b8b4:
    // 0x39b8b4: 0x0  nop
    ctx->pc = 0x39b8b4u;
    // NOP
label_39b8b8:
    // 0x39b8b8: 0xaf84a9f0  sw          $a0, -0x5610($gp)
    ctx->pc = 0x39b8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945264), GPR_U32(ctx, 4));
label_39b8bc:
    // 0x39b8bc: 0x3e00008  jr          $ra
label_39b8c0:
    if (ctx->pc == 0x39B8C0u) {
        ctx->pc = 0x39B8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B8BCu;
        // 0x39b8c0: 0xaf85a9f4  sw          $a1, -0x560C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294945268), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B8C4u;
        goto label_39b8c4;
    }
    ctx->pc = 0x39B8BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39B8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B8BCu;
        // 0x39b8c0: 0xaf85a9f4  sw          $a1, -0x560C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294945268), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39B8BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39B8C4u;
label_39b8c4:
    // 0x39b8c4: 0x0  nop
    ctx->pc = 0x39b8c4u;
    // NOP
label_39b8c8:
    // 0x39b8c8: 0xaf84a9f8  sw          $a0, -0x5608($gp)
    ctx->pc = 0x39b8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945272), GPR_U32(ctx, 4));
label_39b8cc:
    // 0x39b8cc: 0x3e00008  jr          $ra
label_39b8d0:
    if (ctx->pc == 0x39B8D0u) {
        ctx->pc = 0x39B8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B8CCu;
        // 0x39b8d0: 0xaf85a9fc  sw          $a1, -0x5604($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294945276), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B8D4u;
        goto label_39b8d4;
    }
    ctx->pc = 0x39B8CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39B8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B8CCu;
        // 0x39b8d0: 0xaf85a9fc  sw          $a1, -0x5604($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294945276), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39B8CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39B8D4u;
label_39b8d4:
    // 0x39b8d4: 0x0  nop
    ctx->pc = 0x39b8d4u;
    // NOP
    ctx->pc = 0x39b8d8u;
}
