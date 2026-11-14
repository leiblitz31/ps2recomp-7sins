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

// Function: sub_0040B3F0
// Address: 0x40b3f0 - 0x40b7a0
void sub_0040B3F0_0x40b3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040B3F0_0x40b3f0");
#endif

    switch (ctx->pc) {
        case 0x40b3f0u: goto label_40b3f0;
        case 0x40b3f4u: goto label_40b3f4;
        case 0x40b3f8u: goto label_40b3f8;
        case 0x40b3fcu: goto label_40b3fc;
        case 0x40b400u: goto label_40b400;
        case 0x40b404u: goto label_40b404;
        case 0x40b408u: goto label_40b408;
        case 0x40b40cu: goto label_40b40c;
        case 0x40b410u: goto label_40b410;
        case 0x40b414u: goto label_40b414;
        case 0x40b418u: goto label_40b418;
        case 0x40b41cu: goto label_40b41c;
        case 0x40b420u: goto label_40b420;
        case 0x40b424u: goto label_40b424;
        case 0x40b428u: goto label_40b428;
        case 0x40b42cu: goto label_40b42c;
        case 0x40b430u: goto label_40b430;
        case 0x40b434u: goto label_40b434;
        case 0x40b438u: goto label_40b438;
        case 0x40b43cu: goto label_40b43c;
        case 0x40b440u: goto label_40b440;
        case 0x40b444u: goto label_40b444;
        case 0x40b448u: goto label_40b448;
        case 0x40b44cu: goto label_40b44c;
        case 0x40b450u: goto label_40b450;
        case 0x40b454u: goto label_40b454;
        case 0x40b458u: goto label_40b458;
        case 0x40b45cu: goto label_40b45c;
        case 0x40b460u: goto label_40b460;
        case 0x40b464u: goto label_40b464;
        case 0x40b468u: goto label_40b468;
        case 0x40b46cu: goto label_40b46c;
        case 0x40b470u: goto label_40b470;
        case 0x40b474u: goto label_40b474;
        case 0x40b478u: goto label_40b478;
        case 0x40b47cu: goto label_40b47c;
        case 0x40b480u: goto label_40b480;
        case 0x40b484u: goto label_40b484;
        case 0x40b488u: goto label_40b488;
        case 0x40b48cu: goto label_40b48c;
        case 0x40b490u: goto label_40b490;
        case 0x40b494u: goto label_40b494;
        case 0x40b498u: goto label_40b498;
        case 0x40b49cu: goto label_40b49c;
        case 0x40b4a0u: goto label_40b4a0;
        case 0x40b4a4u: goto label_40b4a4;
        case 0x40b4a8u: goto label_40b4a8;
        case 0x40b4acu: goto label_40b4ac;
        case 0x40b4b0u: goto label_40b4b0;
        case 0x40b4b4u: goto label_40b4b4;
        case 0x40b4b8u: goto label_40b4b8;
        case 0x40b4bcu: goto label_40b4bc;
        case 0x40b4c0u: goto label_40b4c0;
        case 0x40b4c4u: goto label_40b4c4;
        case 0x40b4c8u: goto label_40b4c8;
        case 0x40b4ccu: goto label_40b4cc;
        case 0x40b4d0u: goto label_40b4d0;
        case 0x40b4d4u: goto label_40b4d4;
        case 0x40b4d8u: goto label_40b4d8;
        case 0x40b4dcu: goto label_40b4dc;
        case 0x40b4e0u: goto label_40b4e0;
        case 0x40b4e4u: goto label_40b4e4;
        case 0x40b4e8u: goto label_40b4e8;
        case 0x40b4ecu: goto label_40b4ec;
        case 0x40b4f0u: goto label_40b4f0;
        case 0x40b4f4u: goto label_40b4f4;
        case 0x40b4f8u: goto label_40b4f8;
        case 0x40b4fcu: goto label_40b4fc;
        case 0x40b500u: goto label_40b500;
        case 0x40b504u: goto label_40b504;
        case 0x40b508u: goto label_40b508;
        case 0x40b50cu: goto label_40b50c;
        case 0x40b510u: goto label_40b510;
        case 0x40b514u: goto label_40b514;
        case 0x40b518u: goto label_40b518;
        case 0x40b51cu: goto label_40b51c;
        case 0x40b520u: goto label_40b520;
        case 0x40b524u: goto label_40b524;
        case 0x40b528u: goto label_40b528;
        case 0x40b52cu: goto label_40b52c;
        case 0x40b530u: goto label_40b530;
        case 0x40b534u: goto label_40b534;
        case 0x40b538u: goto label_40b538;
        case 0x40b53cu: goto label_40b53c;
        case 0x40b540u: goto label_40b540;
        case 0x40b544u: goto label_40b544;
        case 0x40b548u: goto label_40b548;
        case 0x40b54cu: goto label_40b54c;
        case 0x40b550u: goto label_40b550;
        case 0x40b554u: goto label_40b554;
        case 0x40b558u: goto label_40b558;
        case 0x40b55cu: goto label_40b55c;
        case 0x40b560u: goto label_40b560;
        case 0x40b564u: goto label_40b564;
        case 0x40b568u: goto label_40b568;
        case 0x40b56cu: goto label_40b56c;
        case 0x40b570u: goto label_40b570;
        case 0x40b574u: goto label_40b574;
        case 0x40b578u: goto label_40b578;
        case 0x40b57cu: goto label_40b57c;
        case 0x40b580u: goto label_40b580;
        case 0x40b584u: goto label_40b584;
        case 0x40b588u: goto label_40b588;
        case 0x40b58cu: goto label_40b58c;
        case 0x40b590u: goto label_40b590;
        case 0x40b594u: goto label_40b594;
        case 0x40b598u: goto label_40b598;
        case 0x40b59cu: goto label_40b59c;
        case 0x40b5a0u: goto label_40b5a0;
        case 0x40b5a4u: goto label_40b5a4;
        case 0x40b5a8u: goto label_40b5a8;
        case 0x40b5acu: goto label_40b5ac;
        case 0x40b5b0u: goto label_40b5b0;
        case 0x40b5b4u: goto label_40b5b4;
        case 0x40b5b8u: goto label_40b5b8;
        case 0x40b5bcu: goto label_40b5bc;
        case 0x40b5c0u: goto label_40b5c0;
        case 0x40b5c4u: goto label_40b5c4;
        case 0x40b5c8u: goto label_40b5c8;
        case 0x40b5ccu: goto label_40b5cc;
        case 0x40b5d0u: goto label_40b5d0;
        case 0x40b5d4u: goto label_40b5d4;
        case 0x40b5d8u: goto label_40b5d8;
        case 0x40b5dcu: goto label_40b5dc;
        case 0x40b5e0u: goto label_40b5e0;
        case 0x40b5e4u: goto label_40b5e4;
        case 0x40b5e8u: goto label_40b5e8;
        case 0x40b5ecu: goto label_40b5ec;
        case 0x40b5f0u: goto label_40b5f0;
        case 0x40b5f4u: goto label_40b5f4;
        case 0x40b5f8u: goto label_40b5f8;
        case 0x40b5fcu: goto label_40b5fc;
        case 0x40b600u: goto label_40b600;
        case 0x40b604u: goto label_40b604;
        case 0x40b608u: goto label_40b608;
        case 0x40b60cu: goto label_40b60c;
        case 0x40b610u: goto label_40b610;
        case 0x40b614u: goto label_40b614;
        case 0x40b618u: goto label_40b618;
        case 0x40b61cu: goto label_40b61c;
        case 0x40b620u: goto label_40b620;
        case 0x40b624u: goto label_40b624;
        case 0x40b628u: goto label_40b628;
        case 0x40b62cu: goto label_40b62c;
        case 0x40b630u: goto label_40b630;
        case 0x40b634u: goto label_40b634;
        case 0x40b638u: goto label_40b638;
        case 0x40b63cu: goto label_40b63c;
        case 0x40b640u: goto label_40b640;
        case 0x40b644u: goto label_40b644;
        case 0x40b648u: goto label_40b648;
        case 0x40b64cu: goto label_40b64c;
        case 0x40b650u: goto label_40b650;
        case 0x40b654u: goto label_40b654;
        case 0x40b658u: goto label_40b658;
        case 0x40b65cu: goto label_40b65c;
        case 0x40b660u: goto label_40b660;
        case 0x40b664u: goto label_40b664;
        case 0x40b668u: goto label_40b668;
        case 0x40b66cu: goto label_40b66c;
        case 0x40b670u: goto label_40b670;
        case 0x40b674u: goto label_40b674;
        case 0x40b678u: goto label_40b678;
        case 0x40b67cu: goto label_40b67c;
        case 0x40b680u: goto label_40b680;
        case 0x40b684u: goto label_40b684;
        case 0x40b688u: goto label_40b688;
        case 0x40b68cu: goto label_40b68c;
        case 0x40b690u: goto label_40b690;
        case 0x40b694u: goto label_40b694;
        case 0x40b698u: goto label_40b698;
        case 0x40b69cu: goto label_40b69c;
        case 0x40b6a0u: goto label_40b6a0;
        case 0x40b6a4u: goto label_40b6a4;
        case 0x40b6a8u: goto label_40b6a8;
        case 0x40b6acu: goto label_40b6ac;
        case 0x40b6b0u: goto label_40b6b0;
        case 0x40b6b4u: goto label_40b6b4;
        case 0x40b6b8u: goto label_40b6b8;
        case 0x40b6bcu: goto label_40b6bc;
        case 0x40b6c0u: goto label_40b6c0;
        case 0x40b6c4u: goto label_40b6c4;
        case 0x40b6c8u: goto label_40b6c8;
        case 0x40b6ccu: goto label_40b6cc;
        case 0x40b6d0u: goto label_40b6d0;
        case 0x40b6d4u: goto label_40b6d4;
        case 0x40b6d8u: goto label_40b6d8;
        case 0x40b6dcu: goto label_40b6dc;
        case 0x40b6e0u: goto label_40b6e0;
        case 0x40b6e4u: goto label_40b6e4;
        case 0x40b6e8u: goto label_40b6e8;
        case 0x40b6ecu: goto label_40b6ec;
        case 0x40b6f0u: goto label_40b6f0;
        case 0x40b6f4u: goto label_40b6f4;
        case 0x40b6f8u: goto label_40b6f8;
        case 0x40b6fcu: goto label_40b6fc;
        case 0x40b700u: goto label_40b700;
        case 0x40b704u: goto label_40b704;
        case 0x40b708u: goto label_40b708;
        case 0x40b70cu: goto label_40b70c;
        case 0x40b710u: goto label_40b710;
        case 0x40b714u: goto label_40b714;
        case 0x40b718u: goto label_40b718;
        case 0x40b71cu: goto label_40b71c;
        case 0x40b720u: goto label_40b720;
        case 0x40b724u: goto label_40b724;
        case 0x40b728u: goto label_40b728;
        case 0x40b72cu: goto label_40b72c;
        case 0x40b730u: goto label_40b730;
        case 0x40b734u: goto label_40b734;
        case 0x40b738u: goto label_40b738;
        case 0x40b73cu: goto label_40b73c;
        case 0x40b740u: goto label_40b740;
        case 0x40b744u: goto label_40b744;
        case 0x40b748u: goto label_40b748;
        case 0x40b74cu: goto label_40b74c;
        case 0x40b750u: goto label_40b750;
        case 0x40b754u: goto label_40b754;
        case 0x40b758u: goto label_40b758;
        case 0x40b75cu: goto label_40b75c;
        case 0x40b760u: goto label_40b760;
        case 0x40b764u: goto label_40b764;
        case 0x40b768u: goto label_40b768;
        case 0x40b76cu: goto label_40b76c;
        case 0x40b770u: goto label_40b770;
        case 0x40b774u: goto label_40b774;
        case 0x40b778u: goto label_40b778;
        case 0x40b77cu: goto label_40b77c;
        case 0x40b780u: goto label_40b780;
        case 0x40b784u: goto label_40b784;
        case 0x40b788u: goto label_40b788;
        case 0x40b78cu: goto label_40b78c;
        case 0x40b790u: goto label_40b790;
        case 0x40b794u: goto label_40b794;
        case 0x40b798u: goto label_40b798;
        case 0x40b79cu: goto label_40b79c;
        default: break;
    }

    ctx->pc = 0x40b3f0u;

label_40b3f0:
    // 0x40b3f0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x40b3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_40b3f4:
    // 0x40b3f4: 0x24060074  addiu       $a2, $zero, 0x74
    ctx->pc = 0x40b3f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
label_40b3f8:
    // 0x40b3f8: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x40b3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_40b3fc:
    // 0x40b3fc: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x40b3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_40b400:
    // 0x40b400: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x40b400u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_40b404:
    // 0x40b404: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x40b404u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_40b408:
    // 0x40b408: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x40b408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_40b40c:
    // 0x40b40c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x40b40cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_40b410:
    // 0x40b410: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x40b410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40b414:
    // 0x40b414: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x40b414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_40b418:
    // 0x40b418: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x40b418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_40b41c:
    // 0x40b41c: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x40b41cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_40b420:
    // 0x40b420: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x40b420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_40b424:
    // 0x40b424: 0xc0bb7e6  jal         func_2EDF98
label_40b428:
    if (ctx->pc == 0x40B428u) {
        ctx->pc = 0x40B428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B424u;
        // 0x40b428: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40B42Cu;
        goto label_40b42c;
    }
    ctx->pc = 0x40B424u;
    SET_GPR_U32(ctx, 31, 0x40B42Cu);
    ctx->pc = 0x40B428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B424u;
    // 0x40b428: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x40B424u, 0x40B42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B42Cu;
label_40b42c:
    // 0x40b42c: 0xafb10004  sw          $s1, 0x4($sp)
    ctx->pc = 0x40b42cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 17));
label_40b430:
    // 0x40b430: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40b430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_40b434:
    // 0x40b434: 0xc0de5f2  jal         func_3797C8
label_40b438:
    if (ctx->pc == 0x40B438u) {
        ctx->pc = 0x40B438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B434u;
        // 0x40b438: 0xafb20028  sw          $s2, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40B43Cu;
        goto label_40b43c;
    }
    ctx->pc = 0x40B434u;
    SET_GPR_U32(ctx, 31, 0x40B43Cu);
    ctx->pc = 0x40B438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B434u;
    // 0x40b438: 0xafb20028  sw          $s2, 0x28($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3797C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3797C8u, 0x40B434u, 0x40B43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B43Cu;
label_40b43c:
    // 0x40b43c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x40b43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_40b440:
    // 0x40b440: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x40b440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_40b444:
    // 0x40b444: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x40b444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_40b448:
    // 0x40b448: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x40b448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40b44c:
    // 0x40b44c: 0xc0de61a  jal         func_379868
label_40b450:
    if (ctx->pc == 0x40B450u) {
        ctx->pc = 0x40B450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B44Cu;
        // 0x40b450: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40B454u;
        goto label_40b454;
    }
    ctx->pc = 0x40B44Cu;
    SET_GPR_U32(ctx, 31, 0x40B454u);
    ctx->pc = 0x40B450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B44Cu;
    // 0x40b450: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x379868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x379868u, 0x40B44Cu, 0x40B454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B454u;
label_40b454:
    // 0x40b454: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x40b454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40b458:
    // 0x40b458: 0xc0de646  jal         func_379918
label_40b45c:
    if (ctx->pc == 0x40B45Cu) {
        ctx->pc = 0x40B45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B458u;
        // 0x40b45c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40B460u;
        goto label_40b460;
    }
    ctx->pc = 0x40B458u;
    SET_GPR_U32(ctx, 31, 0x40B460u);
    ctx->pc = 0x40B45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B458u;
    // 0x40b45c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x379918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x379918u, 0x40B458u, 0x40B460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B460u;
label_40b460:
    // 0x40b460: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x40b460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40b464:
    // 0x40b464: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x40b464u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_40b468:
    // 0x40b468: 0xafa5003c  sw          $a1, 0x3C($sp)
    ctx->pc = 0x40b468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 5));
label_40b46c:
    // 0x40b46c: 0x10c000c3  beqz        $a2, . + 4 + (0xC3 << 2)
label_40b470:
    if (ctx->pc == 0x40B470u) {
        ctx->pc = 0x40B470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B46Cu;
        // 0x40b470: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40B474u;
        goto label_40b474;
    }
    ctx->pc = 0x40B46Cu;
    {
        const bool branch_taken_0x40b46c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x40B470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B46Cu;
        // 0x40b470: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b46c) {
            ctx->pc = 0x40B77Cu;
            goto label_40b77c;
        }
    }
    ctx->pc = 0x40B474u;
label_40b474:
    // 0x40b474: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x40b474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_40b478:
    // 0x40b478: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
label_40b47c:
    if (ctx->pc == 0x40B47Cu) {
        ctx->pc = 0x40B47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B478u;
        // 0x40b47c: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40B480u;
        goto label_40b480;
    }
    ctx->pc = 0x40B478u;
    {
        const bool branch_taken_0x40b478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40B47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B478u;
        // 0x40b47c: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b478) {
            ctx->pc = 0x40B5B0u;
            goto label_40b5b0;
        }
    }
    ctx->pc = 0x40B480u;
label_40b480:
    // 0x40b480: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x40b480u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_40b484:
    // 0x40b484: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x40b484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_40b488:
    // 0x40b488: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x40b488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_40b48c:
    // 0x40b48c: 0x146000bb  bnez        $v1, . + 4 + (0xBB << 2)
label_40b490:
    if (ctx->pc == 0x40B490u) {
        ctx->pc = 0x40B490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B48Cu;
        // 0x40b490: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40B494u;
        goto label_40b494;
    }
    ctx->pc = 0x40B48Cu;
    {
        const bool branch_taken_0x40b48c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x40B490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B48Cu;
        // 0x40b490: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b48c) {
            ctx->pc = 0x40B77Cu;
            goto label_40b77c;
        }
    }
    ctx->pc = 0x40B494u;
label_40b494:
    // 0x40b494: 0x245102b  sltu        $v0, $s2, $a1
    ctx->pc = 0x40b494u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_40b498:
    // 0x40b498: 0x104000b8  beqz        $v0, . + 4 + (0xB8 << 2)
label_40b49c:
    if (ctx->pc == 0x40B49Cu) {
        ctx->pc = 0x40B49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B498u;
        // 0x40b49c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40B4A0u;
        goto label_40b4a0;
    }
    ctx->pc = 0x40B498u;
    {
        const bool branch_taken_0x40b498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40B49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B498u;
        // 0x40b49c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b498) {
            ctx->pc = 0x40B77Cu;
            goto label_40b77c;
        }
    }
    ctx->pc = 0x40B4A0u;
label_40b4a0:
    // 0x40b4a0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x40b4a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_40b4a4:
    // 0x40b4a4: 0xc0de64a  jal         func_379928
label_40b4a8:
    if (ctx->pc == 0x40B4A8u) {
        ctx->pc = 0x40B4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B4A4u;
        // 0x40b4a8: 0x3c100062  lui         $s0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40B4ACu;
        goto label_40b4ac;
    }
    ctx->pc = 0x40B4A4u;
    SET_GPR_U32(ctx, 31, 0x40B4ACu);
    ctx->pc = 0x40B4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B4A4u;
    // 0x40b4a8: 0x3c100062  lui         $s0, 0x62 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x379928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x379928u, 0x40B4A4u, 0x40B4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B4ACu;
label_40b4ac:
    // 0x40b4ac: 0x2613e880  addiu       $s3, $s0, -0x1780
    ctx->pc = 0x40b4acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
label_40b4b0:
    // 0x40b4b0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x40b4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_40b4b4:
    // 0x40b4b4: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x40b4b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40b4b8:
    // 0x40b4b8: 0xc0de648  jal         func_379920
label_40b4bc:
    if (ctx->pc == 0x40B4BCu) {
        ctx->pc = 0x40B4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B4B8u;
        // 0x40b4bc: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40B4C0u;
        goto label_40b4c0;
    }
    ctx->pc = 0x40B4B8u;
    SET_GPR_U32(ctx, 31, 0x40B4C0u);
    ctx->pc = 0x40B4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B4B8u;
    // 0x40b4bc: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x379920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x379920u, 0x40B4B8u, 0x40B4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B4C0u;
label_40b4c0:
    // 0x40b4c0: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x40b4c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_40b4c4:
    // 0x40b4c4: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x40b4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_40b4c8:
    // 0x40b4c8: 0x8e6a0108  lw          $t2, 0x108($s3)
    ctx->pc = 0x40b4c8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 264)));
label_40b4cc:
    // 0x40b4cc: 0x34a501b8  ori         $a1, $a1, 0x1B8
    ctx->pc = 0x40b4ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)440);
label_40b4d0:
    // 0x40b4d0: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x40b4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_40b4d4:
    // 0x40b4d4: 0x24c40020  addiu       $a0, $a2, 0x20
    ctx->pc = 0x40b4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
label_40b4d8:
    // 0x40b4d8: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x40b4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_40b4dc:
    // 0x40b4dc: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x40b4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
label_40b4e0:
    // 0x40b4e0: 0x8fa7003c  lw          $a3, 0x3C($sp)
    ctx->pc = 0x40b4e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_40b4e4:
    // 0x40b4e4: 0x8cc30024  lw          $v1, 0x24($a2)
    ctx->pc = 0x40b4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_40b4e8:
    // 0x40b4e8: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x40b4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
label_40b4ec:
    // 0x40b4ec: 0x74940  sll         $t1, $a3, 5
    ctx->pc = 0x40b4ecu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_40b4f0:
    // 0x40b4f0: 0x674018  mult        $t0, $v1, $a3
    ctx->pc = 0x40b4f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_40b4f4:
    // 0x40b4f4: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x40b4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_40b4f8:
    // 0x40b4f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x40b4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_40b4fc:
    // 0x40b4fc: 0xafa30034  sw          $v1, 0x34($sp)
    ctx->pc = 0x40b4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
label_40b500:
    // 0x40b500: 0x8cc40014  lw          $a0, 0x14($a2)
    ctx->pc = 0x40b500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_40b504:
    // 0x40b504: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x40b504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_40b508:
    // 0x40b508: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x40b508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_40b50c:
    // 0x40b50c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x40b50cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
label_40b510:
    // 0x40b510: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x40b510u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_40b514:
    // 0x40b514: 0x498021  addu        $s0, $v0, $t1
    ctx->pc = 0x40b514u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_40b518:
    // 0x40b518: 0x140f809  jalr        $t2
label_40b51c:
    if (ctx->pc == 0x40B51Cu) {
        ctx->pc = 0x40B51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B518u;
        // 0x40b51c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40B520u;
        goto label_40b520;
    }
    ctx->pc = 0x40B518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 10);
        SET_GPR_U32(ctx, 31, 0x40B520u);
        ctx->pc = 0x40B51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B518u;
        // 0x40b51c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40B518u, 0x40B520u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40B520u;
label_40b520:
    // 0x40b520: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_40b524:
    if (ctx->pc == 0x40B524u) {
        ctx->pc = 0x40B524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B520u;
        // 0x40b524: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40B528u;
        goto label_40b528;
    }
    ctx->pc = 0x40B520u;
    {
        const bool branch_taken_0x40b520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40B524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B520u;
        // 0x40b524: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b520) {
            ctx->pc = 0x40B5B0u;
            goto label_40b5b0;
        }
    }
    ctx->pc = 0x40B528u;
label_40b528:
    // 0x40b528: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x40b528u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40b52c:
    // 0x40b52c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x40b52cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40b530:
    // 0x40b530: 0xc0bb7e6  jal         func_2EDF98
label_40b534:
    if (ctx->pc == 0x40B534u) {
        ctx->pc = 0x40B534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B530u;
        // 0x40b534: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40B538u;
        goto label_40b538;
    }
    ctx->pc = 0x40B530u;
    SET_GPR_U32(ctx, 31, 0x40B538u);
    ctx->pc = 0x40B534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B530u;
    // 0x40b534: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x40B530u, 0x40B538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B538u;
label_40b538:
    // 0x40b538: 0x8fa60034  lw          $a2, 0x34($sp)
    ctx->pc = 0x40b538u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_40b53c:
    // 0x40b53c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x40b53cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_40b540:
    // 0x40b540: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x40b540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_40b544:
    // 0x40b544: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x40b544u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_40b548:
    // 0x40b548: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x40b548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_40b54c:
    // 0x40b54c: 0xc53018  mult        $a2, $a2, $a1
    ctx->pc = 0x40b54cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_40b550:
    // 0x40b550: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x40b550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_40b554:
    // 0x40b554: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x40b554u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_40b558:
    // 0x40b558: 0x653821  addu        $a3, $v1, $a1
    ctx->pc = 0x40b558u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_40b55c:
    // 0x40b55c: 0xafa3004c  sw          $v1, 0x4C($sp)
    ctx->pc = 0x40b55cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
label_40b560:
    // 0x40b560: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x40b560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_40b564:
    // 0x40b564: 0xafa70054  sw          $a3, 0x54($sp)
    ctx->pc = 0x40b564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 7));
label_40b568:
    // 0x40b568: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x40b568u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_40b56c:
    // 0x40b56c: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x40b56cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_40b570:
    // 0x40b570: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x40b570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_40b574:
    // 0x40b574: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x40b574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_40b578:
    // 0x40b578: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x40b578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
label_40b57c:
    // 0x40b57c: 0xc1027b6  jal         func_409ED8
label_40b580:
    if (ctx->pc == 0x40B580u) {
        ctx->pc = 0x40B580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B57Cu;
        // 0x40b580: 0xafa5005c  sw          $a1, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40B584u;
        goto label_40b584;
    }
    ctx->pc = 0x40B57Cu;
    SET_GPR_U32(ctx, 31, 0x40B584u);
    ctx->pc = 0x40B580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B57Cu;
    // 0x40b580: 0xafa5005c  sw          $a1, 0x5C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409ED8u, 0x40B57Cu, 0x40B584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B584u;
label_40b584:
    // 0x40b584: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x40b584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_40b588:
    // 0x40b588: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x40b588u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_40b58c:
    // 0x40b58c: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
label_40b590:
    if (ctx->pc == 0x40B590u) {
        ctx->pc = 0x40B590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B58Cu;
        // 0x40b590: 0x8e62010c  lw          $v0, 0x10C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40B594u;
        goto label_40b594;
    }
    ctx->pc = 0x40B58Cu;
    {
        const bool branch_taken_0x40b58c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x40b58c) {
            ctx->pc = 0x40B590u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40B58Cu;
            // 0x40b590: 0x8e62010c  lw          $v0, 0x10C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40B5A8u;
            goto label_40b5a8;
        }
    }
    ctx->pc = 0x40B594u;
label_40b594:
    // 0x40b594: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x40b594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_40b598:
    // 0x40b598: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x40b598u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_40b59c:
    // 0x40b59c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_40b5a0:
    if (ctx->pc == 0x40B5A0u) {
        ctx->pc = 0x40B5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B59Cu;
        // 0x40b5a0: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40B5A4u;
        goto label_40b5a4;
    }
    ctx->pc = 0x40B59Cu;
    {
        const bool branch_taken_0x40b59c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x40b59c) {
            ctx->pc = 0x40B5A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40B59Cu;
            // 0x40b5a0: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40B5B8u;
            goto label_40b5b8;
        }
    }
    ctx->pc = 0x40B5A4u;
label_40b5a4:
    // 0x40b5a4: 0x8e62010c  lw          $v0, 0x10C($s3)
    ctx->pc = 0x40b5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_40b5a8:
    // 0x40b5a8: 0x40f809  jalr        $v0
label_40b5ac:
    if (ctx->pc == 0x40B5ACu) {
        ctx->pc = 0x40B5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B5A8u;
        // 0x40b5ac: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40B5B0u;
        goto label_40b5b0;
    }
    ctx->pc = 0x40B5A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40B5B0u);
        ctx->pc = 0x40B5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B5A8u;
        // 0x40b5ac: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40B5A8u, 0x40B5B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40B5B0u;
label_40b5b0:
    // 0x40b5b0: 0x10000072  b           . + 4 + (0x72 << 2)
label_40b5b4:
    if (ctx->pc == 0x40B5B4u) {
        ctx->pc = 0x40B5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B5B0u;
        // 0x40b5b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40B5B8u;
        goto label_40b5b8;
    }
    ctx->pc = 0x40B5B0u;
    {
        const bool branch_taken_0x40b5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40B5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B5B0u;
        // 0x40b5b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b5b0) {
            ctx->pc = 0x40B77Cu;
            goto label_40b77c;
        }
    }
    ctx->pc = 0x40B5B8u;
label_40b5b8:
    // 0x40b5b8: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_40b5bc:
    if (ctx->pc == 0x40B5BCu) {
        ctx->pc = 0x40B5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B5B8u;
        // 0x40b5bc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40B5C0u;
        goto label_40b5c0;
    }
    ctx->pc = 0x40B5B8u;
    {
        const bool branch_taken_0x40b5b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40B5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B5B8u;
        // 0x40b5bc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b5b8) {
            ctx->pc = 0x40B664u;
            goto label_40b664;
        }
    }
    ctx->pc = 0x40B5C0u;
label_40b5c0:
    // 0x40b5c0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x40b5c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40b5c4:
    // 0x40b5c4: 0x0  nop
    ctx->pc = 0x40b5c4u;
    // NOP
label_40b5c8:
    // 0x40b5c8: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x40b5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_40b5cc:
    // 0x40b5cc: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x40b5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_40b5d0:
    // 0x40b5d0: 0xc102ace  jal         func_40AB38
label_40b5d4:
    if (ctx->pc == 0x40B5D4u) {
        ctx->pc = 0x40B5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B5D0u;
        // 0x40b5d4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40B5D8u;
        goto label_40b5d8;
    }
    ctx->pc = 0x40B5D0u;
    SET_GPR_U32(ctx, 31, 0x40B5D8u);
    ctx->pc = 0x40B5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B5D0u;
    // 0x40b5d4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40AB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40AB38u, 0x40B5D0u, 0x40B5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B5D8u;
label_40b5d8:
    // 0x40b5d8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x40b5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_40b5dc:
    // 0x40b5dc: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x40b5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
label_40b5e0:
    // 0x40b5e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x40b5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_40b5e4:
    // 0x40b5e4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_40b5e8:
    if (ctx->pc == 0x40B5E8u) {
        ctx->pc = 0x40B5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B5E4u;
        // 0x40b5e8: 0xafa30040  sw          $v1, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40B5ECu;
        goto label_40b5ec;
    }
    ctx->pc = 0x40B5E4u;
    {
        const bool branch_taken_0x40b5e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40B5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B5E4u;
        // 0x40b5e8: 0xafa30040  sw          $v1, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b5e4) {
            ctx->pc = 0x40B64Cu;
            goto label_40b64c;
        }
    }
    ctx->pc = 0x40B5ECu;
label_40b5ec:
    // 0x40b5ec: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x40b5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_40b5f0:
    // 0x40b5f0: 0xc0e3df2  jal         func_38F7C8
label_40b5f4:
    if (ctx->pc == 0x40B5F4u) {
        ctx->pc = 0x40B5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B5F0u;
        // 0x40b5f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40B5F8u;
        goto label_40b5f8;
    }
    ctx->pc = 0x40B5F0u;
    SET_GPR_U32(ctx, 31, 0x40B5F8u);
    ctx->pc = 0x40B5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B5F0u;
    // 0x40b5f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F7C8u, 0x40B5F0u, 0x40B5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B5F8u;
label_40b5f8:
    // 0x40b5f8: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x40b5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_40b5fc:
    // 0x40b5fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x40b5fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_40b600:
    // 0x40b600: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x40b600u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40b604:
    // 0x40b604: 0xc102b14  jal         func_40AC50
label_40b608:
    if (ctx->pc == 0x40B608u) {
        ctx->pc = 0x40B608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B604u;
        // 0x40b608: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40B60Cu;
        goto label_40b60c;
    }
    ctx->pc = 0x40B604u;
    SET_GPR_U32(ctx, 31, 0x40B60Cu);
    ctx->pc = 0x40B608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B604u;
    // 0x40b608: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40AC50u, 0x40B604u, 0x40B60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B60Cu;
label_40b60c:
    // 0x40b60c: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x40b60cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_40b610:
    // 0x40b610: 0xc102438  jal         func_4090E0
label_40b614:
    if (ctx->pc == 0x40B614u) {
        ctx->pc = 0x40B614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B610u;
        // 0x40b614: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40B618u;
        goto label_40b618;
    }
    ctx->pc = 0x40B610u;
    SET_GPR_U32(ctx, 31, 0x40B618u);
    ctx->pc = 0x40B614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B610u;
    // 0x40b614: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4090E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4090E0u, 0x40B610u, 0x40B618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B618u;
label_40b618:
    // 0x40b618: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x40b618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_40b61c:
    // 0x40b61c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x40b61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_40b620:
    // 0x40b620: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x40b620u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_40b624:
    // 0x40b624: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_40b628:
    if (ctx->pc == 0x40B628u) {
        ctx->pc = 0x40B62Cu;
        goto label_40b62c;
    }
    ctx->pc = 0x40B624u;
    {
        const bool branch_taken_0x40b624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x40b624) {
            ctx->pc = 0x40B63Cu;
            goto label_40b63c;
        }
    }
    ctx->pc = 0x40B62Cu;
label_40b62c:
    // 0x40b62c: 0xc102ac2  jal         func_40AB08
label_40b630:
    if (ctx->pc == 0x40B630u) {
        ctx->pc = 0x40B630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B62Cu;
        // 0x40b630: 0x8fa40060  lw          $a0, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40B634u;
        goto label_40b634;
    }
    ctx->pc = 0x40B62Cu;
    SET_GPR_U32(ctx, 31, 0x40B634u);
    ctx->pc = 0x40B630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B62Cu;
    // 0x40b630: 0x8fa40060  lw          $a0, 0x60($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40AB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40AB08u, 0x40B62Cu, 0x40B634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B634u;
label_40b634:
    // 0x40b634: 0x10000006  b           . + 4 + (0x6 << 2)
label_40b638:
    if (ctx->pc == 0x40B638u) {
        ctx->pc = 0x40B638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B634u;
        // 0x40b638: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40B63Cu;
        goto label_40b63c;
    }
    ctx->pc = 0x40B634u;
    {
        const bool branch_taken_0x40b634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40B638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B634u;
        // 0x40b638: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b634) {
            ctx->pc = 0x40B650u;
            goto label_40b650;
        }
    }
    ctx->pc = 0x40B63Cu;
label_40b63c:
    // 0x40b63c: 0xc102ac2  jal         func_40AB08
label_40b640:
    if (ctx->pc == 0x40B640u) {
        ctx->pc = 0x40B640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B63Cu;
        // 0x40b640: 0x8fa40064  lw          $a0, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40B644u;
        goto label_40b644;
    }
    ctx->pc = 0x40B63Cu;
    SET_GPR_U32(ctx, 31, 0x40B644u);
    ctx->pc = 0x40B640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B63Cu;
    // 0x40b640: 0x8fa40064  lw          $a0, 0x64($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40AB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40AB08u, 0x40B63Cu, 0x40B644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B644u;
label_40b644:
    // 0x40b644: 0x10000002  b           . + 4 + (0x2 << 2)
label_40b648:
    if (ctx->pc == 0x40B648u) {
        ctx->pc = 0x40B648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B644u;
        // 0x40b648: 0xafa20064  sw          $v0, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40B64Cu;
        goto label_40b64c;
    }
    ctx->pc = 0x40B644u;
    {
        const bool branch_taken_0x40b644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40B648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B644u;
        // 0x40b648: 0xafa20064  sw          $v0, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b644) {
            ctx->pc = 0x40B650u;
            goto label_40b650;
        }
    }
    ctx->pc = 0x40B64Cu;
label_40b64c:
    // 0x40b64c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x40b64cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40b650:
    // 0x40b650: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x40b650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_40b654:
    // 0x40b654: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x40b654u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_40b658:
    // 0x40b658: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x40b658u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_40b65c:
    // 0x40b65c: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
label_40b660:
    if (ctx->pc == 0x40B660u) {
        ctx->pc = 0x40B660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B65Cu;
        // 0x40b660: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40B664u;
        goto label_40b664;
    }
    ctx->pc = 0x40B65Cu;
    {
        const bool branch_taken_0x40b65c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40B660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B65Cu;
        // 0x40b660: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b65c) {
            ctx->pc = 0x40B5C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_40b5c8;
        }
    }
    ctx->pc = 0x40B664u;
label_40b664:
    // 0x40b664: 0x12200034  beqz        $s1, . + 4 + (0x34 << 2)
label_40b668:
    if (ctx->pc == 0x40B668u) {
        ctx->pc = 0x40B668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B664u;
        // 0x40b668: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40B66Cu;
        goto label_40b66c;
    }
    ctx->pc = 0x40B664u;
    {
        const bool branch_taken_0x40b664 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x40B668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B664u;
        // 0x40b668: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b664) {
            ctx->pc = 0x40B738u;
            goto label_40b738;
        }
    }
    ctx->pc = 0x40B66Cu;
label_40b66c:
    // 0x40b66c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x40b66cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_40b670:
    // 0x40b670: 0x1000001a  b           . + 4 + (0x1A << 2)
label_40b674:
    if (ctx->pc == 0x40B674u) {
        ctx->pc = 0x40B674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B670u;
        // 0x40b674: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40B678u;
        goto label_40b678;
    }
    ctx->pc = 0x40B670u;
    {
        const bool branch_taken_0x40b670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40B674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B670u;
        // 0x40b674: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b670) {
            ctx->pc = 0x40B6DCu;
            goto label_40b6dc;
        }
    }
    ctx->pc = 0x40B678u;
label_40b678:
    // 0x40b678: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x40b678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_40b67c:
    // 0x40b67c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x40b67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_40b680:
    // 0x40b680: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x40b680u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_40b684:
    // 0x40b684: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_40b688:
    if (ctx->pc == 0x40B688u) {
        ctx->pc = 0x40B688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B684u;
        // 0x40b688: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40B68Cu;
        goto label_40b68c;
    }
    ctx->pc = 0x40B684u;
    {
        const bool branch_taken_0x40b684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40B688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B684u;
        // 0x40b688: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b684) {
            ctx->pc = 0x40B6C8u;
            goto label_40b6c8;
        }
    }
    ctx->pc = 0x40B68Cu;
label_40b68c:
    // 0x40b68c: 0xc1024e8  jal         func_4093A0
label_40b690:
    if (ctx->pc == 0x40B690u) {
        ctx->pc = 0x40B690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B68Cu;
        // 0x40b690: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40B694u;
        goto label_40b694;
    }
    ctx->pc = 0x40B68Cu;
    SET_GPR_U32(ctx, 31, 0x40B694u);
    ctx->pc = 0x40B690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B68Cu;
    // 0x40b690: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x40B68Cu, 0x40B694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B694u;
label_40b694:
    // 0x40b694: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x40b694u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40b698:
    // 0x40b698: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_40b69c:
    if (ctx->pc == 0x40B69Cu) {
        ctx->pc = 0x40B69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B698u;
        // 0x40b69c: 0x8fa40060  lw          $a0, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40B6A0u;
        goto label_40b6a0;
    }
    ctx->pc = 0x40B698u;
    {
        const bool branch_taken_0x40b698 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x40B69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B698u;
        // 0x40b69c: 0x8fa40060  lw          $a0, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b698) {
            ctx->pc = 0x40B6C0u;
            goto label_40b6c0;
        }
    }
    ctx->pc = 0x40B6A0u;
label_40b6a0:
    // 0x40b6a0: 0xc102ac2  jal         func_40AB08
label_40b6a4:
    if (ctx->pc == 0x40B6A4u) {
        ctx->pc = 0x40B6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B6A0u;
        // 0x40b6a4: 0x8fa50080  lw          $a1, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40B6A8u;
        goto label_40b6a8;
    }
    ctx->pc = 0x40B6A0u;
    SET_GPR_U32(ctx, 31, 0x40B6A8u);
    ctx->pc = 0x40B6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B6A0u;
    // 0x40b6a4: 0x8fa50080  lw          $a1, 0x80($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40AB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40AB08u, 0x40B6A0u, 0x40B6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B6A8u;
label_40b6a8:
    // 0x40b6a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x40b6a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40b6ac:
    // 0x40b6ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x40b6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40b6b0:
    // 0x40b6b0: 0xc102ac2  jal         func_40AB08
label_40b6b4:
    if (ctx->pc == 0x40B6B4u) {
        ctx->pc = 0x40B6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B6B0u;
        // 0x40b6b4: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40B6B8u;
        goto label_40b6b8;
    }
    ctx->pc = 0x40B6B0u;
    SET_GPR_U32(ctx, 31, 0x40B6B8u);
    ctx->pc = 0x40B6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B6B0u;
    // 0x40b6b4: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40AB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40AB08u, 0x40B6B0u, 0x40B6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B6B8u;
label_40b6b8:
    // 0x40b6b8: 0x10000006  b           . + 4 + (0x6 << 2)
label_40b6bc:
    if (ctx->pc == 0x40B6BCu) {
        ctx->pc = 0x40B6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B6B8u;
        // 0x40b6bc: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40B6C0u;
        goto label_40b6c0;
    }
    ctx->pc = 0x40B6B8u;
    {
        const bool branch_taken_0x40b6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40B6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B6B8u;
        // 0x40b6bc: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b6b8) {
            ctx->pc = 0x40B6D4u;
            goto label_40b6d4;
        }
    }
    ctx->pc = 0x40B6C0u;
label_40b6c0:
    // 0x40b6c0: 0x10000004  b           . + 4 + (0x4 << 2)
label_40b6c4:
    if (ctx->pc == 0x40B6C4u) {
        ctx->pc = 0x40B6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B6C0u;
        // 0x40b6c4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40B6C8u;
        goto label_40b6c8;
    }
    ctx->pc = 0x40B6C0u;
    {
        const bool branch_taken_0x40b6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40B6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B6C0u;
        // 0x40b6c4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b6c0) {
            ctx->pc = 0x40B6D4u;
            goto label_40b6d4;
        }
    }
    ctx->pc = 0x40B6C8u;
label_40b6c8:
    // 0x40b6c8: 0xc102ac2  jal         func_40AB08
label_40b6cc:
    if (ctx->pc == 0x40B6CCu) {
        ctx->pc = 0x40B6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B6C8u;
        // 0x40b6cc: 0x8fa40064  lw          $a0, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40B6D0u;
        goto label_40b6d0;
    }
    ctx->pc = 0x40B6C8u;
    SET_GPR_U32(ctx, 31, 0x40B6D0u);
    ctx->pc = 0x40B6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B6C8u;
    // 0x40b6cc: 0x8fa40064  lw          $a0, 0x64($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40AB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40AB08u, 0x40B6C8u, 0x40B6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B6D0u;
label_40b6d0:
    // 0x40b6d0: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x40b6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_40b6d4:
    // 0x40b6d4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x40b6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_40b6d8:
    // 0x40b6d8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x40b6d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_40b6dc:
    // 0x40b6dc: 0xc102ac6  jal         func_40AB18
label_40b6e0:
    if (ctx->pc == 0x40B6E0u) {
        ctx->pc = 0x40B6E4u;
        goto label_40b6e4;
    }
    ctx->pc = 0x40B6DCu;
    SET_GPR_U32(ctx, 31, 0x40B6E4u);
    ctx->pc = 0x40AB18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40AB18u, 0x40B6DCu, 0x40B6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B6E4u;
label_40b6e4:
    // 0x40b6e4: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x40b6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_40b6e8:
    // 0x40b6e8: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
label_40b6ec:
    if (ctx->pc == 0x40B6ECu) {
        ctx->pc = 0x40B6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B6E8u;
        // 0x40b6ec: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40B6F0u;
        goto label_40b6f0;
    }
    ctx->pc = 0x40B6E8u;
    {
        const bool branch_taken_0x40b6e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x40B6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B6E8u;
        // 0x40b6ec: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b6e8) {
            ctx->pc = 0x40B678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_40b678;
        }
    }
    ctx->pc = 0x40B6F0u;
label_40b6f0:
    // 0x40b6f0: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
label_40b6f4:
    if (ctx->pc == 0x40B6F4u) {
        ctx->pc = 0x40B6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B6F0u;
        // 0x40b6f4: 0x8fa50064  lw          $a1, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40B6F8u;
        goto label_40b6f8;
    }
    ctx->pc = 0x40B6F0u;
    {
        const bool branch_taken_0x40b6f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x40B6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B6F0u;
        // 0x40b6f4: 0x8fa50064  lw          $a1, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b6f0) {
            ctx->pc = 0x40B738u;
            goto label_40b738;
        }
    }
    ctx->pc = 0x40B6F8u;
label_40b6f8:
    // 0x40b6f8: 0xc1025c2  jal         func_409708
label_40b6fc:
    if (ctx->pc == 0x40B6FCu) {
        ctx->pc = 0x40B6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B6F8u;
        // 0x40b6fc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40B700u;
        goto label_40b700;
    }
    ctx->pc = 0x40B6F8u;
    SET_GPR_U32(ctx, 31, 0x40B700u);
    ctx->pc = 0x40B6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B6F8u;
    // 0x40b6fc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409708u, 0x40B6F8u, 0x40B700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B700u;
label_40b700:
    // 0x40b700: 0x5d1026  xor         $v0, $v0, $sp
    ctx->pc = 0x40b700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 29));
label_40b704:
    // 0x40b704: 0x2880b  movn        $s1, $zero, $v0
    ctx->pc = 0x40b704u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
label_40b708:
    // 0x40b708: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_40b70c:
    if (ctx->pc == 0x40B70Cu) {
        ctx->pc = 0x40B70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B708u;
        // 0x40b70c: 0x8fa50064  lw          $a1, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40B710u;
        goto label_40b710;
    }
    ctx->pc = 0x40B708u;
    {
        const bool branch_taken_0x40b708 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x40B70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B708u;
        // 0x40b70c: 0x8fa50064  lw          $a1, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b708) {
            ctx->pc = 0x40B738u;
            goto label_40b738;
        }
    }
    ctx->pc = 0x40B710u;
label_40b710:
    // 0x40b710: 0xc102634  jal         func_4098D0
label_40b714:
    if (ctx->pc == 0x40B714u) {
        ctx->pc = 0x40B714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B710u;
        // 0x40b714: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40B718u;
        goto label_40b718;
    }
    ctx->pc = 0x40B710u;
    SET_GPR_U32(ctx, 31, 0x40B718u);
    ctx->pc = 0x40B714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B710u;
    // 0x40b714: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4098D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4098D0u, 0x40B710u, 0x40B718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B718u;
label_40b718:
    // 0x40b718: 0x5d1026  xor         $v0, $v0, $sp
    ctx->pc = 0x40b718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 29));
label_40b71c:
    // 0x40b71c: 0x2880b  movn        $s1, $zero, $v0
    ctx->pc = 0x40b71cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
label_40b720:
    // 0x40b720: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_40b724:
    if (ctx->pc == 0x40B724u) {
        ctx->pc = 0x40B724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B720u;
        // 0x40b724: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40B728u;
        goto label_40b728;
    }
    ctx->pc = 0x40B720u;
    {
        const bool branch_taken_0x40b720 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x40B724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B720u;
        // 0x40b724: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b720) {
            ctx->pc = 0x40B738u;
            goto label_40b738;
        }
    }
    ctx->pc = 0x40B728u;
label_40b728:
    // 0x40b728: 0xc102c4e  jal         func_40B138
label_40b72c:
    if (ctx->pc == 0x40B72Cu) {
        ctx->pc = 0x40B72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B728u;
        // 0x40b72c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40B730u;
        goto label_40b730;
    }
    ctx->pc = 0x40B728u;
    SET_GPR_U32(ctx, 31, 0x40B730u);
    ctx->pc = 0x40B72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B728u;
    // 0x40b72c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40B138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40B138u, 0x40B728u, 0x40B730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B730u;
label_40b730:
    // 0x40b730: 0x541026  xor         $v0, $v0, $s4
    ctx->pc = 0x40b730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 20));
label_40b734:
    // 0x40b734: 0x2880b  movn        $s1, $zero, $v0
    ctx->pc = 0x40b734u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
label_40b738:
    // 0x40b738: 0x26b0e880  addiu       $s0, $s5, -0x1780
    ctx->pc = 0x40b738u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961280));
label_40b73c:
    // 0x40b73c: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x40b73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_40b740:
    // 0x40b740: 0x40f809  jalr        $v0
label_40b744:
    if (ctx->pc == 0x40B744u) {
        ctx->pc = 0x40B744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B740u;
        // 0x40b744: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40B748u;
        goto label_40b748;
    }
    ctx->pc = 0x40B740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40B748u);
        ctx->pc = 0x40B744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B740u;
        // 0x40b744: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40B740u, 0x40B748u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40B748u;
label_40b748:
    // 0x40b748: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x40b748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_40b74c:
    // 0x40b74c: 0x60f809  jalr        $v1
label_40b750:
    if (ctx->pc == 0x40B750u) {
        ctx->pc = 0x40B750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B74Cu;
        // 0x40b750: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40B754u;
        goto label_40b754;
    }
    ctx->pc = 0x40B74Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x40B754u);
        ctx->pc = 0x40B750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B74Cu;
        // 0x40b750: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40B74Cu, 0x40B754u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40B754u;
label_40b754:
    // 0x40b754: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x40b754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_40b758:
    // 0x40b758: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_40b75c:
    if (ctx->pc == 0x40B75Cu) {
        ctx->pc = 0x40B75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B758u;
        // 0x40b75c: 0xafa20080  sw          $v0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40B760u;
        goto label_40b760;
    }
    ctx->pc = 0x40B758u;
    {
        const bool branch_taken_0x40b758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40B75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B758u;
        // 0x40b75c: 0xafa20080  sw          $v0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b758) {
            ctx->pc = 0x40B778u;
            goto label_40b778;
        }
    }
    ctx->pc = 0x40B760u;
label_40b760:
    // 0x40b760: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x40b760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_40b764:
    // 0x40b764: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x40b764u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_40b768:
    // 0x40b768: 0xc102b02  jal         func_40AC08
label_40b76c:
    if (ctx->pc == 0x40B76Cu) {
        ctx->pc = 0x40B76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B768u;
        // 0x40b76c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40B770u;
        goto label_40b770;
    }
    ctx->pc = 0x40B768u;
    SET_GPR_U32(ctx, 31, 0x40B770u);
    ctx->pc = 0x40B76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B768u;
    // 0x40b76c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40AC08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40AC08u, 0x40B768u, 0x40B770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B770u;
label_40b770:
    // 0x40b770: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
label_40b774:
    if (ctx->pc == 0x40B774u) {
        ctx->pc = 0x40B774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B770u;
        // 0x40b774: 0xafb00080  sw          $s0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40B778u;
        goto label_40b778;
    }
    ctx->pc = 0x40B770u;
    {
        const bool branch_taken_0x40b770 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x40B774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B770u;
        // 0x40b774: 0xafb00080  sw          $s0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b770) {
            ctx->pc = 0x40B760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_40b760;
        }
    }
    ctx->pc = 0x40B778u;
label_40b778:
    // 0x40b778: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x40b778u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_40b77c:
    // 0x40b77c: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x40b77cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_40b780:
    // 0x40b780: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x40b780u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_40b784:
    // 0x40b784: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x40b784u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_40b788:
    // 0x40b788: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x40b788u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_40b78c:
    // 0x40b78c: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x40b78cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_40b790:
    // 0x40b790: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x40b790u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_40b794:
    // 0x40b794: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x40b794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_40b798:
    // 0x40b798: 0x3e00008  jr          $ra
label_40b79c:
    if (ctx->pc == 0x40B79Cu) {
        ctx->pc = 0x40B79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B798u;
        // 0x40b79c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40B7A0u;
        goto label_fallthrough_0x40b798;
    }
    ctx->pc = 0x40B798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40B79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B798u;
        // 0x40b79c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40B798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x40b798:
    ctx->pc = 0x40B7A0u;
}
