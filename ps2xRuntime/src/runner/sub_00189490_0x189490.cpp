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

// Function: sub_00189490
// Address: 0x189490 - 0x189930
void sub_00189490_0x189490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189490_0x189490");
#endif

    switch (ctx->pc) {
        case 0x189490u: goto label_189490;
        case 0x189494u: goto label_189494;
        case 0x189498u: goto label_189498;
        case 0x18949cu: goto label_18949c;
        case 0x1894a0u: goto label_1894a0;
        case 0x1894a4u: goto label_1894a4;
        case 0x1894a8u: goto label_1894a8;
        case 0x1894acu: goto label_1894ac;
        case 0x1894b0u: goto label_1894b0;
        case 0x1894b4u: goto label_1894b4;
        case 0x1894b8u: goto label_1894b8;
        case 0x1894bcu: goto label_1894bc;
        case 0x1894c0u: goto label_1894c0;
        case 0x1894c4u: goto label_1894c4;
        case 0x1894c8u: goto label_1894c8;
        case 0x1894ccu: goto label_1894cc;
        case 0x1894d0u: goto label_1894d0;
        case 0x1894d4u: goto label_1894d4;
        case 0x1894d8u: goto label_1894d8;
        case 0x1894dcu: goto label_1894dc;
        case 0x1894e0u: goto label_1894e0;
        case 0x1894e4u: goto label_1894e4;
        case 0x1894e8u: goto label_1894e8;
        case 0x1894ecu: goto label_1894ec;
        case 0x1894f0u: goto label_1894f0;
        case 0x1894f4u: goto label_1894f4;
        case 0x1894f8u: goto label_1894f8;
        case 0x1894fcu: goto label_1894fc;
        case 0x189500u: goto label_189500;
        case 0x189504u: goto label_189504;
        case 0x189508u: goto label_189508;
        case 0x18950cu: goto label_18950c;
        case 0x189510u: goto label_189510;
        case 0x189514u: goto label_189514;
        case 0x189518u: goto label_189518;
        case 0x18951cu: goto label_18951c;
        case 0x189520u: goto label_189520;
        case 0x189524u: goto label_189524;
        case 0x189528u: goto label_189528;
        case 0x18952cu: goto label_18952c;
        case 0x189530u: goto label_189530;
        case 0x189534u: goto label_189534;
        case 0x189538u: goto label_189538;
        case 0x18953cu: goto label_18953c;
        case 0x189540u: goto label_189540;
        case 0x189544u: goto label_189544;
        case 0x189548u: goto label_189548;
        case 0x18954cu: goto label_18954c;
        case 0x189550u: goto label_189550;
        case 0x189554u: goto label_189554;
        case 0x189558u: goto label_189558;
        case 0x18955cu: goto label_18955c;
        case 0x189560u: goto label_189560;
        case 0x189564u: goto label_189564;
        case 0x189568u: goto label_189568;
        case 0x18956cu: goto label_18956c;
        case 0x189570u: goto label_189570;
        case 0x189574u: goto label_189574;
        case 0x189578u: goto label_189578;
        case 0x18957cu: goto label_18957c;
        case 0x189580u: goto label_189580;
        case 0x189584u: goto label_189584;
        case 0x189588u: goto label_189588;
        case 0x18958cu: goto label_18958c;
        case 0x189590u: goto label_189590;
        case 0x189594u: goto label_189594;
        case 0x189598u: goto label_189598;
        case 0x18959cu: goto label_18959c;
        case 0x1895a0u: goto label_1895a0;
        case 0x1895a4u: goto label_1895a4;
        case 0x1895a8u: goto label_1895a8;
        case 0x1895acu: goto label_1895ac;
        case 0x1895b0u: goto label_1895b0;
        case 0x1895b4u: goto label_1895b4;
        case 0x1895b8u: goto label_1895b8;
        case 0x1895bcu: goto label_1895bc;
        case 0x1895c0u: goto label_1895c0;
        case 0x1895c4u: goto label_1895c4;
        case 0x1895c8u: goto label_1895c8;
        case 0x1895ccu: goto label_1895cc;
        case 0x1895d0u: goto label_1895d0;
        case 0x1895d4u: goto label_1895d4;
        case 0x1895d8u: goto label_1895d8;
        case 0x1895dcu: goto label_1895dc;
        case 0x1895e0u: goto label_1895e0;
        case 0x1895e4u: goto label_1895e4;
        case 0x1895e8u: goto label_1895e8;
        case 0x1895ecu: goto label_1895ec;
        case 0x1895f0u: goto label_1895f0;
        case 0x1895f4u: goto label_1895f4;
        case 0x1895f8u: goto label_1895f8;
        case 0x1895fcu: goto label_1895fc;
        case 0x189600u: goto label_189600;
        case 0x189604u: goto label_189604;
        case 0x189608u: goto label_189608;
        case 0x18960cu: goto label_18960c;
        case 0x189610u: goto label_189610;
        case 0x189614u: goto label_189614;
        case 0x189618u: goto label_189618;
        case 0x18961cu: goto label_18961c;
        case 0x189620u: goto label_189620;
        case 0x189624u: goto label_189624;
        case 0x189628u: goto label_189628;
        case 0x18962cu: goto label_18962c;
        case 0x189630u: goto label_189630;
        case 0x189634u: goto label_189634;
        case 0x189638u: goto label_189638;
        case 0x18963cu: goto label_18963c;
        case 0x189640u: goto label_189640;
        case 0x189644u: goto label_189644;
        case 0x189648u: goto label_189648;
        case 0x18964cu: goto label_18964c;
        case 0x189650u: goto label_189650;
        case 0x189654u: goto label_189654;
        case 0x189658u: goto label_189658;
        case 0x18965cu: goto label_18965c;
        case 0x189660u: goto label_189660;
        case 0x189664u: goto label_189664;
        case 0x189668u: goto label_189668;
        case 0x18966cu: goto label_18966c;
        case 0x189670u: goto label_189670;
        case 0x189674u: goto label_189674;
        case 0x189678u: goto label_189678;
        case 0x18967cu: goto label_18967c;
        case 0x189680u: goto label_189680;
        case 0x189684u: goto label_189684;
        case 0x189688u: goto label_189688;
        case 0x18968cu: goto label_18968c;
        case 0x189690u: goto label_189690;
        case 0x189694u: goto label_189694;
        case 0x189698u: goto label_189698;
        case 0x18969cu: goto label_18969c;
        case 0x1896a0u: goto label_1896a0;
        case 0x1896a4u: goto label_1896a4;
        case 0x1896a8u: goto label_1896a8;
        case 0x1896acu: goto label_1896ac;
        case 0x1896b0u: goto label_1896b0;
        case 0x1896b4u: goto label_1896b4;
        case 0x1896b8u: goto label_1896b8;
        case 0x1896bcu: goto label_1896bc;
        case 0x1896c0u: goto label_1896c0;
        case 0x1896c4u: goto label_1896c4;
        case 0x1896c8u: goto label_1896c8;
        case 0x1896ccu: goto label_1896cc;
        case 0x1896d0u: goto label_1896d0;
        case 0x1896d4u: goto label_1896d4;
        case 0x1896d8u: goto label_1896d8;
        case 0x1896dcu: goto label_1896dc;
        case 0x1896e0u: goto label_1896e0;
        case 0x1896e4u: goto label_1896e4;
        case 0x1896e8u: goto label_1896e8;
        case 0x1896ecu: goto label_1896ec;
        case 0x1896f0u: goto label_1896f0;
        case 0x1896f4u: goto label_1896f4;
        case 0x1896f8u: goto label_1896f8;
        case 0x1896fcu: goto label_1896fc;
        case 0x189700u: goto label_189700;
        case 0x189704u: goto label_189704;
        case 0x189708u: goto label_189708;
        case 0x18970cu: goto label_18970c;
        case 0x189710u: goto label_189710;
        case 0x189714u: goto label_189714;
        case 0x189718u: goto label_189718;
        case 0x18971cu: goto label_18971c;
        case 0x189720u: goto label_189720;
        case 0x189724u: goto label_189724;
        case 0x189728u: goto label_189728;
        case 0x18972cu: goto label_18972c;
        case 0x189730u: goto label_189730;
        case 0x189734u: goto label_189734;
        case 0x189738u: goto label_189738;
        case 0x18973cu: goto label_18973c;
        case 0x189740u: goto label_189740;
        case 0x189744u: goto label_189744;
        case 0x189748u: goto label_189748;
        case 0x18974cu: goto label_18974c;
        case 0x189750u: goto label_189750;
        case 0x189754u: goto label_189754;
        case 0x189758u: goto label_189758;
        case 0x18975cu: goto label_18975c;
        case 0x189760u: goto label_189760;
        case 0x189764u: goto label_189764;
        case 0x189768u: goto label_189768;
        case 0x18976cu: goto label_18976c;
        case 0x189770u: goto label_189770;
        case 0x189774u: goto label_189774;
        case 0x189778u: goto label_189778;
        case 0x18977cu: goto label_18977c;
        case 0x189780u: goto label_189780;
        case 0x189784u: goto label_189784;
        case 0x189788u: goto label_189788;
        case 0x18978cu: goto label_18978c;
        case 0x189790u: goto label_189790;
        case 0x189794u: goto label_189794;
        case 0x189798u: goto label_189798;
        case 0x18979cu: goto label_18979c;
        case 0x1897a0u: goto label_1897a0;
        case 0x1897a4u: goto label_1897a4;
        case 0x1897a8u: goto label_1897a8;
        case 0x1897acu: goto label_1897ac;
        case 0x1897b0u: goto label_1897b0;
        case 0x1897b4u: goto label_1897b4;
        case 0x1897b8u: goto label_1897b8;
        case 0x1897bcu: goto label_1897bc;
        case 0x1897c0u: goto label_1897c0;
        case 0x1897c4u: goto label_1897c4;
        case 0x1897c8u: goto label_1897c8;
        case 0x1897ccu: goto label_1897cc;
        case 0x1897d0u: goto label_1897d0;
        case 0x1897d4u: goto label_1897d4;
        case 0x1897d8u: goto label_1897d8;
        case 0x1897dcu: goto label_1897dc;
        case 0x1897e0u: goto label_1897e0;
        case 0x1897e4u: goto label_1897e4;
        case 0x1897e8u: goto label_1897e8;
        case 0x1897ecu: goto label_1897ec;
        case 0x1897f0u: goto label_1897f0;
        case 0x1897f4u: goto label_1897f4;
        case 0x1897f8u: goto label_1897f8;
        case 0x1897fcu: goto label_1897fc;
        case 0x189800u: goto label_189800;
        case 0x189804u: goto label_189804;
        case 0x189808u: goto label_189808;
        case 0x18980cu: goto label_18980c;
        case 0x189810u: goto label_189810;
        case 0x189814u: goto label_189814;
        case 0x189818u: goto label_189818;
        case 0x18981cu: goto label_18981c;
        case 0x189820u: goto label_189820;
        case 0x189824u: goto label_189824;
        case 0x189828u: goto label_189828;
        case 0x18982cu: goto label_18982c;
        case 0x189830u: goto label_189830;
        case 0x189834u: goto label_189834;
        case 0x189838u: goto label_189838;
        case 0x18983cu: goto label_18983c;
        case 0x189840u: goto label_189840;
        case 0x189844u: goto label_189844;
        case 0x189848u: goto label_189848;
        case 0x18984cu: goto label_18984c;
        case 0x189850u: goto label_189850;
        case 0x189854u: goto label_189854;
        case 0x189858u: goto label_189858;
        case 0x18985cu: goto label_18985c;
        case 0x189860u: goto label_189860;
        case 0x189864u: goto label_189864;
        case 0x189868u: goto label_189868;
        case 0x18986cu: goto label_18986c;
        case 0x189870u: goto label_189870;
        case 0x189874u: goto label_189874;
        case 0x189878u: goto label_189878;
        case 0x18987cu: goto label_18987c;
        case 0x189880u: goto label_189880;
        case 0x189884u: goto label_189884;
        case 0x189888u: goto label_189888;
        case 0x18988cu: goto label_18988c;
        case 0x189890u: goto label_189890;
        case 0x189894u: goto label_189894;
        case 0x189898u: goto label_189898;
        case 0x18989cu: goto label_18989c;
        case 0x1898a0u: goto label_1898a0;
        case 0x1898a4u: goto label_1898a4;
        case 0x1898a8u: goto label_1898a8;
        case 0x1898acu: goto label_1898ac;
        case 0x1898b0u: goto label_1898b0;
        case 0x1898b4u: goto label_1898b4;
        case 0x1898b8u: goto label_1898b8;
        case 0x1898bcu: goto label_1898bc;
        case 0x1898c0u: goto label_1898c0;
        case 0x1898c4u: goto label_1898c4;
        case 0x1898c8u: goto label_1898c8;
        case 0x1898ccu: goto label_1898cc;
        case 0x1898d0u: goto label_1898d0;
        case 0x1898d4u: goto label_1898d4;
        case 0x1898d8u: goto label_1898d8;
        case 0x1898dcu: goto label_1898dc;
        case 0x1898e0u: goto label_1898e0;
        case 0x1898e4u: goto label_1898e4;
        case 0x1898e8u: goto label_1898e8;
        case 0x1898ecu: goto label_1898ec;
        case 0x1898f0u: goto label_1898f0;
        case 0x1898f4u: goto label_1898f4;
        case 0x1898f8u: goto label_1898f8;
        case 0x1898fcu: goto label_1898fc;
        case 0x189900u: goto label_189900;
        case 0x189904u: goto label_189904;
        case 0x189908u: goto label_189908;
        case 0x18990cu: goto label_18990c;
        case 0x189910u: goto label_189910;
        case 0x189914u: goto label_189914;
        case 0x189918u: goto label_189918;
        case 0x18991cu: goto label_18991c;
        case 0x189920u: goto label_189920;
        case 0x189924u: goto label_189924;
        case 0x189928u: goto label_189928;
        case 0x18992cu: goto label_18992c;
        default: break;
    }

    ctx->pc = 0x189490u;

label_189490:
    // 0x189490: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x189490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_189494:
    // 0x189494: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x189494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_189498:
    // 0x189498: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x189498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_18949c:
    // 0x18949c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x18949cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1894a0:
    // 0x1894a0: 0x3e00008  jr          $ra
label_1894a4:
    if (ctx->pc == 0x1894A4u) {
        ctx->pc = 0x1894A8u;
        goto label_1894a8;
    }
    ctx->pc = 0x1894A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1894A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1894A8u;
label_1894a8:
    // 0x1894a8: 0x0  nop
    ctx->pc = 0x1894a8u;
    // NOP
label_1894ac:
    // 0x1894ac: 0x0  nop
    ctx->pc = 0x1894acu;
    // NOP
label_1894b0:
    // 0x1894b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1894b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1894b4:
    // 0x1894b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1894b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1894b8:
    // 0x1894b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1894b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1894bc:
    // 0x1894bc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1894bcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
label_1894c0:
    // 0x1894c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1894c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1894c4:
    // 0x1894c4: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_1894c8:
    if (ctx->pc == 0x1894C8u) {
        ctx->pc = 0x1894CCu;
        goto label_1894cc;
    }
    ctx->pc = 0x1894C4u;
    {
        const bool branch_taken_0x1894c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1894c4) {
            ctx->pc = 0x189558u;
            goto label_189558;
        }
    }
    ctx->pc = 0x1894CCu;
label_1894cc:
    // 0x1894cc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1894ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1894d0:
    // 0x1894d0: 0x24634030  addiu       $v1, $v1, 0x4030
    ctx->pc = 0x1894d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16432));
label_1894d4:
    // 0x1894d4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1894d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1894d8:
    // 0x1894d8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1894d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1894dc:
    // 0x1894dc: 0xaf80bae8  sw          $zero, -0x4518($gp)
    ctx->pc = 0x1894dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949608), GPR_U32(ctx, 0));
label_1894e0:
    // 0x1894e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1894e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1894e4:
    // 0x1894e4: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x1894e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_1894e8:
    // 0x1894e8: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x1894e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
label_1894ec:
    // 0x1894ec: 0x24a59070  addiu       $a1, $a1, -0x6F90
    ctx->pc = 0x1894ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938736));
label_1894f0:
    // 0x1894f0: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x1894f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1894f4:
    // 0x1894f4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1894f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1894f8:
    // 0x1894f8: 0xc0b9fd4  jal         func_2E7F50
label_1894fc:
    if (ctx->pc == 0x1894FCu) {
        ctx->pc = 0x189500u;
        goto label_189500;
    }
    ctx->pc = 0x1894F8u;
    SET_GPR_U32(ctx, 31, 0x189500u);
    ctx->pc = 0x2E7F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7F50u, 0x1894F8u, 0x189500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189500u;
label_189500:
    // 0x189500: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x189500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_189504:
    // 0x189504: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x189504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
label_189508:
    // 0x189508: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x189508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_18950c:
    // 0x18950c: 0xc056094  jal         func_158250
label_189510:
    if (ctx->pc == 0x189510u) {
        ctx->pc = 0x189514u;
        goto label_189514;
    }
    ctx->pc = 0x18950Cu;
    SET_GPR_U32(ctx, 31, 0x189514u);
    ctx->pc = 0x158250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158250u, 0x18950Cu, 0x189514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189514u;
label_189514:
    // 0x189514: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x189514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_189518:
    // 0x189518: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x189518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_18951c:
    // 0x18951c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x18951cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_189520:
    // 0x189520: 0xc056094  jal         func_158250
label_189524:
    if (ctx->pc == 0x189524u) {
        ctx->pc = 0x189528u;
        goto label_189528;
    }
    ctx->pc = 0x189520u;
    SET_GPR_U32(ctx, 31, 0x189528u);
    ctx->pc = 0x158250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158250u, 0x189520u, 0x189528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189528u;
label_189528:
    // 0x189528: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x189528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_18952c:
    // 0x18952c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18952cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_189530:
    // 0x189530: 0xc055950  jal         func_156540
label_189534:
    if (ctx->pc == 0x189534u) {
        ctx->pc = 0x189538u;
        goto label_189538;
    }
    ctx->pc = 0x189530u;
    SET_GPR_U32(ctx, 31, 0x189538u);
    ctx->pc = 0x156540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156540u, 0x189530u, 0x189538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189538u;
label_189538:
    // 0x189538: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x189538u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_18953c:
    // 0x18953c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x18953cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_189540:
    // 0x189540: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x189540u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_189544:
    // 0x189544: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_189548:
    if (ctx->pc == 0x189548u) {
        ctx->pc = 0x18954Cu;
        goto label_18954c;
    }
    ctx->pc = 0x189544u;
    {
        const bool branch_taken_0x189544 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x189544) {
            ctx->pc = 0x189558u;
            goto label_189558;
        }
    }
    ctx->pc = 0x18954Cu;
label_18954c:
    // 0x18954c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x18954cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_189550:
    // 0x189550: 0xc0ba070  jal         func_2E81C0
label_189554:
    if (ctx->pc == 0x189554u) {
        ctx->pc = 0x189558u;
        goto label_189558;
    }
    ctx->pc = 0x189550u;
    SET_GPR_U32(ctx, 31, 0x189558u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x189550u, 0x189558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189558u;
label_189558:
    // 0x189558: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x189558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_18955c:
    // 0x18955c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18955cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_189560:
    // 0x189560: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x189560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_189564:
    // 0x189564: 0x3e00008  jr          $ra
label_189568:
    if (ctx->pc == 0x189568u) {
        ctx->pc = 0x18956Cu;
        goto label_18956c;
    }
    ctx->pc = 0x189564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18956Cu;
label_18956c:
    // 0x18956c: 0x0  nop
    ctx->pc = 0x18956cu;
    // NOP
label_189570:
    // 0x189570: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x189570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_189574:
    // 0x189574: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x189574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_189578:
    // 0x189578: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x189578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_18957c:
    // 0x18957c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18957cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_189580:
    // 0x189580: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x189580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_189584:
    // 0x189584: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x189584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_189588:
    // 0x189588: 0xc055974  jal         func_1565D0
label_18958c:
    if (ctx->pc == 0x18958Cu) {
        ctx->pc = 0x189590u;
        goto label_189590;
    }
    ctx->pc = 0x189588u;
    SET_GPR_U32(ctx, 31, 0x189590u);
    ctx->pc = 0x1565D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1565D0u, 0x189588u, 0x189590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189590u;
label_189590:
    // 0x189590: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x189590u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_189594:
    // 0x189594: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x189594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_189598:
    // 0x189598: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x189598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18959c:
    // 0x18959c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_1895a0:
    if (ctx->pc == 0x1895A0u) {
        ctx->pc = 0x1895A4u;
        goto label_1895a4;
    }
    ctx->pc = 0x18959Cu;
    {
        const bool branch_taken_0x18959c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18959c) {
            ctx->pc = 0x1895C0u;
            goto label_1895c0;
        }
    }
    ctx->pc = 0x1895A4u;
label_1895a4:
    // 0x1895a4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1895a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1895a8:
    // 0x1895a8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1895a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1895ac:
    // 0x1895ac: 0x24a552f0  addiu       $a1, $a1, 0x52F0
    ctx->pc = 0x1895acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21232));
label_1895b0:
    // 0x1895b0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1895b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1895b4:
    // 0x1895b4: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x1895b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_1895b8:
    // 0x1895b8: 0x320f809  jalr        $t9
label_1895bc:
    if (ctx->pc == 0x1895BCu) {
        ctx->pc = 0x1895C0u;
        goto label_1895c0;
    }
    ctx->pc = 0x1895B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1895C0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1895B8u, 0x1895C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1895C0u;
label_1895c0:
    // 0x1895c0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1895c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1895c4:
    // 0x1895c4: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x1895c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_1895c8:
    // 0x1895c8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1895c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1895cc:
    // 0x1895cc: 0xc056708  jal         func_159C20
label_1895d0:
    if (ctx->pc == 0x1895D0u) {
        ctx->pc = 0x1895D4u;
        goto label_1895d4;
    }
    ctx->pc = 0x1895CCu;
    SET_GPR_U32(ctx, 31, 0x1895D4u);
    ctx->pc = 0x159C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159C20u, 0x1895CCu, 0x1895D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1895D4u;
label_1895d4:
    // 0x1895d4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1895d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1895d8:
    // 0x1895d8: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x1895d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
label_1895dc:
    // 0x1895dc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1895dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1895e0:
    // 0x1895e0: 0xc056708  jal         func_159C20
label_1895e4:
    if (ctx->pc == 0x1895E4u) {
        ctx->pc = 0x1895E8u;
        goto label_1895e8;
    }
    ctx->pc = 0x1895E0u;
    SET_GPR_U32(ctx, 31, 0x1895E8u);
    ctx->pc = 0x159C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159C20u, 0x1895E0u, 0x1895E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1895E8u;
label_1895e8:
    // 0x1895e8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1895e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1895ec:
    // 0x1895ec: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1895ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1895f0:
    // 0x1895f0: 0x24a55310  addiu       $a1, $a1, 0x5310
    ctx->pc = 0x1895f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21264));
label_1895f4:
    // 0x1895f4: 0xc0552e4  jal         func_154B90
label_1895f8:
    if (ctx->pc == 0x1895F8u) {
        ctx->pc = 0x1895FCu;
        goto label_1895fc;
    }
    ctx->pc = 0x1895F4u;
    SET_GPR_U32(ctx, 31, 0x1895FCu);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x1895F4u, 0x1895FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1895FCu;
label_1895fc:
    // 0x1895fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1895fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_189600:
    // 0x189600: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x189600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_189604:
    // 0x189604: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x189604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_189608:
    // 0x189608: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x189608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18960c:
    // 0x18960c: 0xc05612c  jal         func_1584B0
label_189610:
    if (ctx->pc == 0x189610u) {
        ctx->pc = 0x189614u;
        goto label_189614;
    }
    ctx->pc = 0x18960Cu;
    SET_GPR_U32(ctx, 31, 0x189614u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x18960Cu, 0x189614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189614u;
label_189614:
    // 0x189614: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x189614u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_189618:
    // 0x189618: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x189618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_18961c:
    // 0x18961c: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x18961cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_189620:
    // 0x189620: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x189620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_189624:
    // 0x189624: 0xc05612c  jal         func_1584B0
label_189628:
    if (ctx->pc == 0x189628u) {
        ctx->pc = 0x18962Cu;
        goto label_18962c;
    }
    ctx->pc = 0x189624u;
    SET_GPR_U32(ctx, 31, 0x18962Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x189624u, 0x18962Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18962Cu;
label_18962c:
    // 0x18962c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x18962cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_189630:
    // 0x189630: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x189630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_189634:
    // 0x189634: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x189634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_189638:
    // 0x189638: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x189638u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18963c:
    // 0x18963c: 0xc08c8dc  jal         func_232370
label_189640:
    if (ctx->pc == 0x189640u) {
        ctx->pc = 0x189644u;
        goto label_189644;
    }
    ctx->pc = 0x18963Cu;
    SET_GPR_U32(ctx, 31, 0x189644u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x18963Cu, 0x189644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189644u;
label_189644:
    // 0x189644: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x189644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_189648:
    // 0x189648: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x189648u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_18964c:
    // 0x18964c: 0x24a55320  addiu       $a1, $a1, 0x5320
    ctx->pc = 0x18964cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21280));
label_189650:
    // 0x189650: 0xc0552e4  jal         func_154B90
label_189654:
    if (ctx->pc == 0x189654u) {
        ctx->pc = 0x189658u;
        goto label_189658;
    }
    ctx->pc = 0x189650u;
    SET_GPR_U32(ctx, 31, 0x189658u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x189650u, 0x189658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189658u;
label_189658:
    // 0x189658: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x189658u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18965c:
    // 0x18965c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x18965cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_189660:
    // 0x189660: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x189660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
label_189664:
    // 0x189664: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x189664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_189668:
    // 0x189668: 0xc05612c  jal         func_1584B0
label_18966c:
    if (ctx->pc == 0x18966Cu) {
        ctx->pc = 0x189670u;
        goto label_189670;
    }
    ctx->pc = 0x189668u;
    SET_GPR_U32(ctx, 31, 0x189670u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x189668u, 0x189670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189670u;
label_189670:
    // 0x189670: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x189670u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_189674:
    // 0x189674: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x189674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_189678:
    // 0x189678: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x189678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
label_18967c:
    // 0x18967c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18967cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_189680:
    // 0x189680: 0xc05612c  jal         func_1584B0
label_189684:
    if (ctx->pc == 0x189684u) {
        ctx->pc = 0x189688u;
        goto label_189688;
    }
    ctx->pc = 0x189680u;
    SET_GPR_U32(ctx, 31, 0x189688u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x189680u, 0x189688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189688u;
label_189688:
    // 0x189688: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x189688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18968c:
    // 0x18968c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x18968cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_189690:
    // 0x189690: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x189690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_189694:
    // 0x189694: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x189694u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_189698:
    // 0x189698: 0xc08c8dc  jal         func_232370
label_18969c:
    if (ctx->pc == 0x18969Cu) {
        ctx->pc = 0x1896A0u;
        goto label_1896a0;
    }
    ctx->pc = 0x189698u;
    SET_GPR_U32(ctx, 31, 0x1896A0u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x189698u, 0x1896A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1896A0u;
label_1896a0:
    // 0x1896a0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1896a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1896a4:
    // 0x1896a4: 0x278591b8  addiu       $a1, $gp, -0x6E48
    ctx->pc = 0x1896a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939064));
label_1896a8:
    // 0x1896a8: 0xc0552e4  jal         func_154B90
label_1896ac:
    if (ctx->pc == 0x1896ACu) {
        ctx->pc = 0x1896B0u;
        goto label_1896b0;
    }
    ctx->pc = 0x1896A8u;
    SET_GPR_U32(ctx, 31, 0x1896B0u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x1896A8u, 0x1896B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1896B0u;
label_1896b0:
    // 0x1896b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1896b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1896b4:
    // 0x1896b4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1896b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1896b8:
    // 0x1896b8: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x1896b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
label_1896bc:
    // 0x1896bc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1896bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1896c0:
    // 0x1896c0: 0xc05612c  jal         func_1584B0
label_1896c4:
    if (ctx->pc == 0x1896C4u) {
        ctx->pc = 0x1896C8u;
        goto label_1896c8;
    }
    ctx->pc = 0x1896C0u;
    SET_GPR_U32(ctx, 31, 0x1896C8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1896C0u, 0x1896C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1896C8u;
label_1896c8:
    // 0x1896c8: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x1896c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_1896cc:
    // 0x1896cc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1896ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1896d0:
    // 0x1896d0: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x1896d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
label_1896d4:
    // 0x1896d4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1896d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1896d8:
    // 0x1896d8: 0xc05612c  jal         func_1584B0
label_1896dc:
    if (ctx->pc == 0x1896DCu) {
        ctx->pc = 0x1896E0u;
        goto label_1896e0;
    }
    ctx->pc = 0x1896D8u;
    SET_GPR_U32(ctx, 31, 0x1896E0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1896D8u, 0x1896E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1896E0u;
label_1896e0:
    // 0x1896e0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1896e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1896e4:
    // 0x1896e4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1896e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1896e8:
    // 0x1896e8: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x1896e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1896ec:
    // 0x1896ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1896ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1896f0:
    // 0x1896f0: 0xc08c8dc  jal         func_232370
label_1896f4:
    if (ctx->pc == 0x1896F4u) {
        ctx->pc = 0x1896F8u;
        goto label_1896f8;
    }
    ctx->pc = 0x1896F0u;
    SET_GPR_U32(ctx, 31, 0x1896F8u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1896F0u, 0x1896F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1896F8u;
label_1896f8:
    // 0x1896f8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1896f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1896fc:
    // 0x1896fc: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1896fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_189700:
    // 0x189700: 0x24a55330  addiu       $a1, $a1, 0x5330
    ctx->pc = 0x189700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21296));
label_189704:
    // 0x189704: 0xc0552e4  jal         func_154B90
label_189708:
    if (ctx->pc == 0x189708u) {
        ctx->pc = 0x18970Cu;
        goto label_18970c;
    }
    ctx->pc = 0x189704u;
    SET_GPR_U32(ctx, 31, 0x18970Cu);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x189704u, 0x18970Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18970Cu;
label_18970c:
    // 0x18970c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x18970cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_189710:
    // 0x189710: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x189710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_189714:
    // 0x189714: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x189714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_189718:
    // 0x189718: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x189718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18971c:
    // 0x18971c: 0xc05612c  jal         func_1584B0
label_189720:
    if (ctx->pc == 0x189720u) {
        ctx->pc = 0x189724u;
        goto label_189724;
    }
    ctx->pc = 0x18971Cu;
    SET_GPR_U32(ctx, 31, 0x189724u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x18971Cu, 0x189724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189724u;
label_189724:
    // 0x189724: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x189724u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_189728:
    // 0x189728: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x189728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_18972c:
    // 0x18972c: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x18972cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_189730:
    // 0x189730: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x189730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_189734:
    // 0x189734: 0xc05612c  jal         func_1584B0
label_189738:
    if (ctx->pc == 0x189738u) {
        ctx->pc = 0x18973Cu;
        goto label_18973c;
    }
    ctx->pc = 0x189734u;
    SET_GPR_U32(ctx, 31, 0x18973Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x189734u, 0x18973Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18973Cu;
label_18973c:
    // 0x18973c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x18973cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_189740:
    // 0x189740: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x189740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_189744:
    // 0x189744: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x189744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_189748:
    // 0x189748: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x189748u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18974c:
    // 0x18974c: 0xc08c8dc  jal         func_232370
label_189750:
    if (ctx->pc == 0x189750u) {
        ctx->pc = 0x189754u;
        goto label_189754;
    }
    ctx->pc = 0x18974Cu;
    SET_GPR_U32(ctx, 31, 0x189754u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x18974Cu, 0x189754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189754u;
label_189754:
    // 0x189754: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x189754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_189758:
    // 0x189758: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x189758u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_18975c:
    // 0x18975c: 0x24a55340  addiu       $a1, $a1, 0x5340
    ctx->pc = 0x18975cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21312));
label_189760:
    // 0x189760: 0xc0552e4  jal         func_154B90
label_189764:
    if (ctx->pc == 0x189764u) {
        ctx->pc = 0x189768u;
        goto label_189768;
    }
    ctx->pc = 0x189760u;
    SET_GPR_U32(ctx, 31, 0x189768u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x189760u, 0x189768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189768u;
label_189768:
    // 0x189768: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x189768u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18976c:
    // 0x18976c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x18976cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_189770:
    // 0x189770: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x189770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
label_189774:
    // 0x189774: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x189774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_189778:
    // 0x189778: 0xc05612c  jal         func_1584B0
label_18977c:
    if (ctx->pc == 0x18977Cu) {
        ctx->pc = 0x189780u;
        goto label_189780;
    }
    ctx->pc = 0x189778u;
    SET_GPR_U32(ctx, 31, 0x189780u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x189778u, 0x189780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189780u;
label_189780:
    // 0x189780: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x189780u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_189784:
    // 0x189784: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x189784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_189788:
    // 0x189788: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x189788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
label_18978c:
    // 0x18978c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18978cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_189790:
    // 0x189790: 0xc05612c  jal         func_1584B0
label_189794:
    if (ctx->pc == 0x189794u) {
        ctx->pc = 0x189798u;
        goto label_189798;
    }
    ctx->pc = 0x189790u;
    SET_GPR_U32(ctx, 31, 0x189798u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x189790u, 0x189798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189798u;
label_189798:
    // 0x189798: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x189798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18979c:
    // 0x18979c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x18979cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1897a0:
    // 0x1897a0: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x1897a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1897a4:
    // 0x1897a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1897a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1897a8:
    // 0x1897a8: 0xc08c8dc  jal         func_232370
label_1897ac:
    if (ctx->pc == 0x1897ACu) {
        ctx->pc = 0x1897B0u;
        goto label_1897b0;
    }
    ctx->pc = 0x1897A8u;
    SET_GPR_U32(ctx, 31, 0x1897B0u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1897A8u, 0x1897B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1897B0u;
label_1897b0:
    // 0x1897b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1897b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1897b4:
    // 0x1897b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1897b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1897b8:
    // 0x1897b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1897b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1897bc:
    // 0x1897bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1897bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1897c0:
    // 0x1897c0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1897c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1897c4:
    // 0x1897c4: 0x3e00008  jr          $ra
label_1897c8:
    if (ctx->pc == 0x1897C8u) {
        ctx->pc = 0x1897CCu;
        goto label_1897cc;
    }
    ctx->pc = 0x1897C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1897C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1897CCu;
label_1897cc:
    // 0x1897cc: 0x0  nop
    ctx->pc = 0x1897ccu;
    // NOP
label_1897d0:
    // 0x1897d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1897d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1897d4:
    // 0x1897d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1897d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1897d8:
    // 0x1897d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1897d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1897dc:
    // 0x1897dc: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x1897dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
label_1897e0:
    // 0x1897e0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1897e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1897e4:
    // 0x1897e4: 0x93a50020  lbu         $a1, 0x20($sp)
    ctx->pc = 0x1897e4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_1897e8:
    // 0x1897e8: 0xc055a78  jal         func_1569E0
label_1897ec:
    if (ctx->pc == 0x1897ECu) {
        ctx->pc = 0x1897F0u;
        goto label_1897f0;
    }
    ctx->pc = 0x1897E8u;
    SET_GPR_U32(ctx, 31, 0x1897F0u);
    ctx->pc = 0x1569E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1569E0u, 0x1897E8u, 0x1897F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1897F0u;
label_1897f0:
    // 0x1897f0: 0x93a20020  lbu         $v0, 0x20($sp)
    ctx->pc = 0x1897f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_1897f4:
    // 0x1897f4: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
label_1897f8:
    if (ctx->pc == 0x1897F8u) {
        ctx->pc = 0x1897FCu;
        goto label_1897fc;
    }
    ctx->pc = 0x1897F4u;
    {
        const bool branch_taken_0x1897f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1897f4) {
            ctx->pc = 0x1898E0u;
            goto label_1898e0;
        }
    }
    ctx->pc = 0x1897FCu;
label_1897fc:
    // 0x1897fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1897fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_189800:
    // 0x189800: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x189800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_189804:
    // 0x189804: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x189804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_189808:
    // 0x189808: 0xc05612c  jal         func_1584B0
label_18980c:
    if (ctx->pc == 0x18980Cu) {
        ctx->pc = 0x189810u;
        goto label_189810;
    }
    ctx->pc = 0x189808u;
    SET_GPR_U32(ctx, 31, 0x189810u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x189808u, 0x189810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189810u;
label_189810:
    // 0x189810: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x189810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_189814:
    // 0x189814: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x189814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_189818:
    // 0x189818: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x189818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_18981c:
    // 0x18981c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18981cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_189820:
    // 0x189820: 0xc08c8dc  jal         func_232370
label_189824:
    if (ctx->pc == 0x189824u) {
        ctx->pc = 0x189828u;
        goto label_189828;
    }
    ctx->pc = 0x189820u;
    SET_GPR_U32(ctx, 31, 0x189828u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x189820u, 0x189828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189828u;
label_189828:
    // 0x189828: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x189828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_18982c:
    // 0x18982c: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x18982cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
label_189830:
    // 0x189830: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x189830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_189834:
    // 0x189834: 0xc05612c  jal         func_1584B0
label_189838:
    if (ctx->pc == 0x189838u) {
        ctx->pc = 0x18983Cu;
        goto label_18983c;
    }
    ctx->pc = 0x189834u;
    SET_GPR_U32(ctx, 31, 0x18983Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x189834u, 0x18983Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18983Cu;
label_18983c:
    // 0x18983c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x18983cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_189840:
    // 0x189840: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x189840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_189844:
    // 0x189844: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x189844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_189848:
    // 0x189848: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x189848u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18984c:
    // 0x18984c: 0xc08c8dc  jal         func_232370
label_189850:
    if (ctx->pc == 0x189850u) {
        ctx->pc = 0x189854u;
        goto label_189854;
    }
    ctx->pc = 0x18984Cu;
    SET_GPR_U32(ctx, 31, 0x189854u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x18984Cu, 0x189854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189854u;
label_189854:
    // 0x189854: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x189854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_189858:
    // 0x189858: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x189858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
label_18985c:
    // 0x18985c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18985cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_189860:
    // 0x189860: 0xc05612c  jal         func_1584B0
label_189864:
    if (ctx->pc == 0x189864u) {
        ctx->pc = 0x189868u;
        goto label_189868;
    }
    ctx->pc = 0x189860u;
    SET_GPR_U32(ctx, 31, 0x189868u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x189860u, 0x189868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189868u;
label_189868:
    // 0x189868: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x189868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18986c:
    // 0x18986c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18986cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_189870:
    // 0x189870: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x189870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_189874:
    // 0x189874: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x189874u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_189878:
    // 0x189878: 0xc08c8dc  jal         func_232370
label_18987c:
    if (ctx->pc == 0x18987Cu) {
        ctx->pc = 0x189880u;
        goto label_189880;
    }
    ctx->pc = 0x189878u;
    SET_GPR_U32(ctx, 31, 0x189880u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x189878u, 0x189880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189880u;
label_189880:
    // 0x189880: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x189880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_189884:
    // 0x189884: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x189884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_189888:
    // 0x189888: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x189888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18988c:
    // 0x18988c: 0xc05612c  jal         func_1584B0
label_189890:
    if (ctx->pc == 0x189890u) {
        ctx->pc = 0x189894u;
        goto label_189894;
    }
    ctx->pc = 0x18988Cu;
    SET_GPR_U32(ctx, 31, 0x189894u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x18988Cu, 0x189894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189894u;
label_189894:
    // 0x189894: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x189894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_189898:
    // 0x189898: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x189898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_18989c:
    // 0x18989c: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x18989cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1898a0:
    // 0x1898a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1898a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1898a4:
    // 0x1898a4: 0xc08c8dc  jal         func_232370
label_1898a8:
    if (ctx->pc == 0x1898A8u) {
        ctx->pc = 0x1898ACu;
        goto label_1898ac;
    }
    ctx->pc = 0x1898A4u;
    SET_GPR_U32(ctx, 31, 0x1898ACu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1898A4u, 0x1898ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1898ACu;
label_1898ac:
    // 0x1898ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1898acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1898b0:
    // 0x1898b0: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x1898b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
label_1898b4:
    // 0x1898b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1898b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1898b8:
    // 0x1898b8: 0xc05612c  jal         func_1584B0
label_1898bc:
    if (ctx->pc == 0x1898BCu) {
        ctx->pc = 0x1898C0u;
        goto label_1898c0;
    }
    ctx->pc = 0x1898B8u;
    SET_GPR_U32(ctx, 31, 0x1898C0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1898B8u, 0x1898C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1898C0u;
label_1898c0:
    // 0x1898c0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1898c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1898c4:
    // 0x1898c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1898c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1898c8:
    // 0x1898c8: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x1898c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1898cc:
    // 0x1898cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1898ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1898d0:
    // 0x1898d0: 0xc08c8dc  jal         func_232370
label_1898d4:
    if (ctx->pc == 0x1898D4u) {
        ctx->pc = 0x1898D8u;
        goto label_1898d8;
    }
    ctx->pc = 0x1898D0u;
    SET_GPR_U32(ctx, 31, 0x1898D8u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1898D0u, 0x1898D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1898D8u;
label_1898d8:
    // 0x1898d8: 0x1000000e  b           . + 4 + (0xE << 2)
label_1898dc:
    if (ctx->pc == 0x1898DCu) {
        ctx->pc = 0x1898E0u;
        goto label_1898e0;
    }
    ctx->pc = 0x1898D8u;
    {
        const bool branch_taken_0x1898d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1898d8) {
            ctx->pc = 0x189914u;
            goto label_189914;
        }
    }
    ctx->pc = 0x1898E0u;
label_1898e0:
    // 0x1898e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1898e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1898e4:
    // 0x1898e4: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x1898e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1898e8:
    // 0x1898e8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1898e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1898ec:
    // 0x1898ec: 0xc08c910  jal         func_232440
label_1898f0:
    if (ctx->pc == 0x1898F0u) {
        ctx->pc = 0x1898F4u;
        goto label_1898f4;
    }
    ctx->pc = 0x1898ECu;
    SET_GPR_U32(ctx, 31, 0x1898F4u);
    ctx->pc = 0x232440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232440u, 0x1898ECu, 0x1898F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1898F4u;
label_1898f4:
    // 0x1898f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1898f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1898f8:
    // 0x1898f8: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x1898f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_1898fc:
    // 0x1898fc: 0xc06264c  jal         func_189930
label_189900:
    if (ctx->pc == 0x189900u) {
        ctx->pc = 0x189904u;
        goto label_189904;
    }
    ctx->pc = 0x1898FCu;
    SET_GPR_U32(ctx, 31, 0x189904u);
    ctx->pc = 0x189930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189930u, 0x1898FCu, 0x189904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189904u;
label_189904:
    // 0x189904: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x189904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_189908:
    // 0x189908: 0x24440074  addiu       $a0, $v0, 0x74
    ctx->pc = 0x189908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
label_18990c:
    // 0x18990c: 0xc06264c  jal         func_189930
label_189910:
    if (ctx->pc == 0x189910u) {
        ctx->pc = 0x189914u;
        goto label_189914;
    }
    ctx->pc = 0x18990Cu;
    SET_GPR_U32(ctx, 31, 0x189914u);
    ctx->pc = 0x189930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189930u, 0x18990Cu, 0x189914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189914u;
label_189914:
    // 0x189914: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x189914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_189918:
    // 0x189918: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x189918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_18991c:
    // 0x18991c: 0x3e00008  jr          $ra
label_189920:
    if (ctx->pc == 0x189920u) {
        ctx->pc = 0x189924u;
        goto label_189924;
    }
    ctx->pc = 0x18991Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18991Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189924u;
label_189924:
    // 0x189924: 0x0  nop
    ctx->pc = 0x189924u;
    // NOP
label_189928:
    // 0x189928: 0x0  nop
    ctx->pc = 0x189928u;
    // NOP
label_18992c:
    // 0x18992c: 0x0  nop
    ctx->pc = 0x18992cu;
    // NOP
    ctx->pc = 0x189930u;
}
