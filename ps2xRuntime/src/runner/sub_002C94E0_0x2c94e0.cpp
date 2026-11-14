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

// Function: sub_002C94E0
// Address: 0x2c94e0 - 0x2c98e0
void sub_002C94E0_0x2c94e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C94E0_0x2c94e0");
#endif

    switch (ctx->pc) {
        case 0x2c94e0u: goto label_2c94e0;
        case 0x2c94e4u: goto label_2c94e4;
        case 0x2c94e8u: goto label_2c94e8;
        case 0x2c94ecu: goto label_2c94ec;
        case 0x2c94f0u: goto label_2c94f0;
        case 0x2c94f4u: goto label_2c94f4;
        case 0x2c94f8u: goto label_2c94f8;
        case 0x2c94fcu: goto label_2c94fc;
        case 0x2c9500u: goto label_2c9500;
        case 0x2c9504u: goto label_2c9504;
        case 0x2c9508u: goto label_2c9508;
        case 0x2c950cu: goto label_2c950c;
        case 0x2c9510u: goto label_2c9510;
        case 0x2c9514u: goto label_2c9514;
        case 0x2c9518u: goto label_2c9518;
        case 0x2c951cu: goto label_2c951c;
        case 0x2c9520u: goto label_2c9520;
        case 0x2c9524u: goto label_2c9524;
        case 0x2c9528u: goto label_2c9528;
        case 0x2c952cu: goto label_2c952c;
        case 0x2c9530u: goto label_2c9530;
        case 0x2c9534u: goto label_2c9534;
        case 0x2c9538u: goto label_2c9538;
        case 0x2c953cu: goto label_2c953c;
        case 0x2c9540u: goto label_2c9540;
        case 0x2c9544u: goto label_2c9544;
        case 0x2c9548u: goto label_2c9548;
        case 0x2c954cu: goto label_2c954c;
        case 0x2c9550u: goto label_2c9550;
        case 0x2c9554u: goto label_2c9554;
        case 0x2c9558u: goto label_2c9558;
        case 0x2c955cu: goto label_2c955c;
        case 0x2c9560u: goto label_2c9560;
        case 0x2c9564u: goto label_2c9564;
        case 0x2c9568u: goto label_2c9568;
        case 0x2c956cu: goto label_2c956c;
        case 0x2c9570u: goto label_2c9570;
        case 0x2c9574u: goto label_2c9574;
        case 0x2c9578u: goto label_2c9578;
        case 0x2c957cu: goto label_2c957c;
        case 0x2c9580u: goto label_2c9580;
        case 0x2c9584u: goto label_2c9584;
        case 0x2c9588u: goto label_2c9588;
        case 0x2c958cu: goto label_2c958c;
        case 0x2c9590u: goto label_2c9590;
        case 0x2c9594u: goto label_2c9594;
        case 0x2c9598u: goto label_2c9598;
        case 0x2c959cu: goto label_2c959c;
        case 0x2c95a0u: goto label_2c95a0;
        case 0x2c95a4u: goto label_2c95a4;
        case 0x2c95a8u: goto label_2c95a8;
        case 0x2c95acu: goto label_2c95ac;
        case 0x2c95b0u: goto label_2c95b0;
        case 0x2c95b4u: goto label_2c95b4;
        case 0x2c95b8u: goto label_2c95b8;
        case 0x2c95bcu: goto label_2c95bc;
        case 0x2c95c0u: goto label_2c95c0;
        case 0x2c95c4u: goto label_2c95c4;
        case 0x2c95c8u: goto label_2c95c8;
        case 0x2c95ccu: goto label_2c95cc;
        case 0x2c95d0u: goto label_2c95d0;
        case 0x2c95d4u: goto label_2c95d4;
        case 0x2c95d8u: goto label_2c95d8;
        case 0x2c95dcu: goto label_2c95dc;
        case 0x2c95e0u: goto label_2c95e0;
        case 0x2c95e4u: goto label_2c95e4;
        case 0x2c95e8u: goto label_2c95e8;
        case 0x2c95ecu: goto label_2c95ec;
        case 0x2c95f0u: goto label_2c95f0;
        case 0x2c95f4u: goto label_2c95f4;
        case 0x2c95f8u: goto label_2c95f8;
        case 0x2c95fcu: goto label_2c95fc;
        case 0x2c9600u: goto label_2c9600;
        case 0x2c9604u: goto label_2c9604;
        case 0x2c9608u: goto label_2c9608;
        case 0x2c960cu: goto label_2c960c;
        case 0x2c9610u: goto label_2c9610;
        case 0x2c9614u: goto label_2c9614;
        case 0x2c9618u: goto label_2c9618;
        case 0x2c961cu: goto label_2c961c;
        case 0x2c9620u: goto label_2c9620;
        case 0x2c9624u: goto label_2c9624;
        case 0x2c9628u: goto label_2c9628;
        case 0x2c962cu: goto label_2c962c;
        case 0x2c9630u: goto label_2c9630;
        case 0x2c9634u: goto label_2c9634;
        case 0x2c9638u: goto label_2c9638;
        case 0x2c963cu: goto label_2c963c;
        case 0x2c9640u: goto label_2c9640;
        case 0x2c9644u: goto label_2c9644;
        case 0x2c9648u: goto label_2c9648;
        case 0x2c964cu: goto label_2c964c;
        case 0x2c9650u: goto label_2c9650;
        case 0x2c9654u: goto label_2c9654;
        case 0x2c9658u: goto label_2c9658;
        case 0x2c965cu: goto label_2c965c;
        case 0x2c9660u: goto label_2c9660;
        case 0x2c9664u: goto label_2c9664;
        case 0x2c9668u: goto label_2c9668;
        case 0x2c966cu: goto label_2c966c;
        case 0x2c9670u: goto label_2c9670;
        case 0x2c9674u: goto label_2c9674;
        case 0x2c9678u: goto label_2c9678;
        case 0x2c967cu: goto label_2c967c;
        case 0x2c9680u: goto label_2c9680;
        case 0x2c9684u: goto label_2c9684;
        case 0x2c9688u: goto label_2c9688;
        case 0x2c968cu: goto label_2c968c;
        case 0x2c9690u: goto label_2c9690;
        case 0x2c9694u: goto label_2c9694;
        case 0x2c9698u: goto label_2c9698;
        case 0x2c969cu: goto label_2c969c;
        case 0x2c96a0u: goto label_2c96a0;
        case 0x2c96a4u: goto label_2c96a4;
        case 0x2c96a8u: goto label_2c96a8;
        case 0x2c96acu: goto label_2c96ac;
        case 0x2c96b0u: goto label_2c96b0;
        case 0x2c96b4u: goto label_2c96b4;
        case 0x2c96b8u: goto label_2c96b8;
        case 0x2c96bcu: goto label_2c96bc;
        case 0x2c96c0u: goto label_2c96c0;
        case 0x2c96c4u: goto label_2c96c4;
        case 0x2c96c8u: goto label_2c96c8;
        case 0x2c96ccu: goto label_2c96cc;
        case 0x2c96d0u: goto label_2c96d0;
        case 0x2c96d4u: goto label_2c96d4;
        case 0x2c96d8u: goto label_2c96d8;
        case 0x2c96dcu: goto label_2c96dc;
        case 0x2c96e0u: goto label_2c96e0;
        case 0x2c96e4u: goto label_2c96e4;
        case 0x2c96e8u: goto label_2c96e8;
        case 0x2c96ecu: goto label_2c96ec;
        case 0x2c96f0u: goto label_2c96f0;
        case 0x2c96f4u: goto label_2c96f4;
        case 0x2c96f8u: goto label_2c96f8;
        case 0x2c96fcu: goto label_2c96fc;
        case 0x2c9700u: goto label_2c9700;
        case 0x2c9704u: goto label_2c9704;
        case 0x2c9708u: goto label_2c9708;
        case 0x2c970cu: goto label_2c970c;
        case 0x2c9710u: goto label_2c9710;
        case 0x2c9714u: goto label_2c9714;
        case 0x2c9718u: goto label_2c9718;
        case 0x2c971cu: goto label_2c971c;
        case 0x2c9720u: goto label_2c9720;
        case 0x2c9724u: goto label_2c9724;
        case 0x2c9728u: goto label_2c9728;
        case 0x2c972cu: goto label_2c972c;
        case 0x2c9730u: goto label_2c9730;
        case 0x2c9734u: goto label_2c9734;
        case 0x2c9738u: goto label_2c9738;
        case 0x2c973cu: goto label_2c973c;
        case 0x2c9740u: goto label_2c9740;
        case 0x2c9744u: goto label_2c9744;
        case 0x2c9748u: goto label_2c9748;
        case 0x2c974cu: goto label_2c974c;
        case 0x2c9750u: goto label_2c9750;
        case 0x2c9754u: goto label_2c9754;
        case 0x2c9758u: goto label_2c9758;
        case 0x2c975cu: goto label_2c975c;
        case 0x2c9760u: goto label_2c9760;
        case 0x2c9764u: goto label_2c9764;
        case 0x2c9768u: goto label_2c9768;
        case 0x2c976cu: goto label_2c976c;
        case 0x2c9770u: goto label_2c9770;
        case 0x2c9774u: goto label_2c9774;
        case 0x2c9778u: goto label_2c9778;
        case 0x2c977cu: goto label_2c977c;
        case 0x2c9780u: goto label_2c9780;
        case 0x2c9784u: goto label_2c9784;
        case 0x2c9788u: goto label_2c9788;
        case 0x2c978cu: goto label_2c978c;
        case 0x2c9790u: goto label_2c9790;
        case 0x2c9794u: goto label_2c9794;
        case 0x2c9798u: goto label_2c9798;
        case 0x2c979cu: goto label_2c979c;
        case 0x2c97a0u: goto label_2c97a0;
        case 0x2c97a4u: goto label_2c97a4;
        case 0x2c97a8u: goto label_2c97a8;
        case 0x2c97acu: goto label_2c97ac;
        case 0x2c97b0u: goto label_2c97b0;
        case 0x2c97b4u: goto label_2c97b4;
        case 0x2c97b8u: goto label_2c97b8;
        case 0x2c97bcu: goto label_2c97bc;
        case 0x2c97c0u: goto label_2c97c0;
        case 0x2c97c4u: goto label_2c97c4;
        case 0x2c97c8u: goto label_2c97c8;
        case 0x2c97ccu: goto label_2c97cc;
        case 0x2c97d0u: goto label_2c97d0;
        case 0x2c97d4u: goto label_2c97d4;
        case 0x2c97d8u: goto label_2c97d8;
        case 0x2c97dcu: goto label_2c97dc;
        case 0x2c97e0u: goto label_2c97e0;
        case 0x2c97e4u: goto label_2c97e4;
        case 0x2c97e8u: goto label_2c97e8;
        case 0x2c97ecu: goto label_2c97ec;
        case 0x2c97f0u: goto label_2c97f0;
        case 0x2c97f4u: goto label_2c97f4;
        case 0x2c97f8u: goto label_2c97f8;
        case 0x2c97fcu: goto label_2c97fc;
        case 0x2c9800u: goto label_2c9800;
        case 0x2c9804u: goto label_2c9804;
        case 0x2c9808u: goto label_2c9808;
        case 0x2c980cu: goto label_2c980c;
        case 0x2c9810u: goto label_2c9810;
        case 0x2c9814u: goto label_2c9814;
        case 0x2c9818u: goto label_2c9818;
        case 0x2c981cu: goto label_2c981c;
        case 0x2c9820u: goto label_2c9820;
        case 0x2c9824u: goto label_2c9824;
        case 0x2c9828u: goto label_2c9828;
        case 0x2c982cu: goto label_2c982c;
        case 0x2c9830u: goto label_2c9830;
        case 0x2c9834u: goto label_2c9834;
        case 0x2c9838u: goto label_2c9838;
        case 0x2c983cu: goto label_2c983c;
        case 0x2c9840u: goto label_2c9840;
        case 0x2c9844u: goto label_2c9844;
        case 0x2c9848u: goto label_2c9848;
        case 0x2c984cu: goto label_2c984c;
        case 0x2c9850u: goto label_2c9850;
        case 0x2c9854u: goto label_2c9854;
        case 0x2c9858u: goto label_2c9858;
        case 0x2c985cu: goto label_2c985c;
        case 0x2c9860u: goto label_2c9860;
        case 0x2c9864u: goto label_2c9864;
        case 0x2c9868u: goto label_2c9868;
        case 0x2c986cu: goto label_2c986c;
        case 0x2c9870u: goto label_2c9870;
        case 0x2c9874u: goto label_2c9874;
        case 0x2c9878u: goto label_2c9878;
        case 0x2c987cu: goto label_2c987c;
        case 0x2c9880u: goto label_2c9880;
        case 0x2c9884u: goto label_2c9884;
        case 0x2c9888u: goto label_2c9888;
        case 0x2c988cu: goto label_2c988c;
        case 0x2c9890u: goto label_2c9890;
        case 0x2c9894u: goto label_2c9894;
        case 0x2c9898u: goto label_2c9898;
        case 0x2c989cu: goto label_2c989c;
        case 0x2c98a0u: goto label_2c98a0;
        case 0x2c98a4u: goto label_2c98a4;
        case 0x2c98a8u: goto label_2c98a8;
        case 0x2c98acu: goto label_2c98ac;
        case 0x2c98b0u: goto label_2c98b0;
        case 0x2c98b4u: goto label_2c98b4;
        case 0x2c98b8u: goto label_2c98b8;
        case 0x2c98bcu: goto label_2c98bc;
        case 0x2c98c0u: goto label_2c98c0;
        case 0x2c98c4u: goto label_2c98c4;
        case 0x2c98c8u: goto label_2c98c8;
        case 0x2c98ccu: goto label_2c98cc;
        case 0x2c98d0u: goto label_2c98d0;
        case 0x2c98d4u: goto label_2c98d4;
        case 0x2c98d8u: goto label_2c98d8;
        case 0x2c98dcu: goto label_2c98dc;
        default: break;
    }

    ctx->pc = 0x2c94e0u;

label_2c94e0:
    // 0x2c94e0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2c94e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_2c94e4:
    // 0x2c94e4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2c94e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2c94e8:
    // 0x2c94e8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2c94e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_2c94ec:
    // 0x2c94ec: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2c94ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2c94f0:
    // 0x2c94f0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2c94f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2c94f4:
    // 0x2c94f4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2c94f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2c94f8:
    // 0x2c94f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c94f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2c94fc:
    // 0x2c94fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c94fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2c9500:
    // 0x2c9500: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c9500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2c9504:
    // 0x2c9504: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c9504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c9508:
    // 0x2c9508: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c9508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c950c:
    // 0x2c950c: 0xafa40100  sw          $a0, 0x100($sp)
    ctx->pc = 0x2c950cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 4));
label_2c9510:
    // 0x2c9510: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x2c9510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_2c9514:
    // 0x2c9514: 0x8c440098  lw          $a0, 0x98($v0)
    ctx->pc = 0x2c9514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
label_2c9518:
    // 0x2c9518: 0xc090018  jal         func_240060
label_2c951c:
    if (ctx->pc == 0x2C951Cu) {
        ctx->pc = 0x2C9520u;
        goto label_2c9520;
    }
    ctx->pc = 0x2C9518u;
    SET_GPR_U32(ctx, 31, 0x2C9520u);
    ctx->pc = 0x240060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240060u, 0x2C9518u, 0x2C9520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9520u;
label_2c9520:
    // 0x2c9520: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2c9520u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c9524:
    // 0x2c9524: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2c9524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2c9528:
    // 0x2c9528: 0xc08feb4  jal         func_23FAD0
label_2c952c:
    if (ctx->pc == 0x2C952Cu) {
        ctx->pc = 0x2C9530u;
        goto label_2c9530;
    }
    ctx->pc = 0x2C9528u;
    SET_GPR_U32(ctx, 31, 0x2C9530u);
    ctx->pc = 0x23FAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FAD0u, 0x2C9528u, 0x2C9530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9530u;
label_2c9530:
    // 0x2c9530: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c9530u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c9534:
    // 0x2c9534: 0x100000d8  b           . + 4 + (0xD8 << 2)
label_2c9538:
    if (ctx->pc == 0x2C9538u) {
        ctx->pc = 0x2C953Cu;
        goto label_2c953c;
    }
    ctx->pc = 0x2C9534u;
    {
        const bool branch_taken_0x2c9534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9534) {
            ctx->pc = 0x2C9898u;
            goto label_2c9898;
        }
    }
    ctx->pc = 0x2C953Cu;
label_2c953c:
    // 0x2c953c: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x2c953cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c9540:
    // 0x2c9540: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2c9540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c9544:
    // 0x2c9544: 0x2c41000b  sltiu       $at, $v0, 0xB
    ctx->pc = 0x2c9544u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_2c9548:
    // 0x2c9548: 0x102000c6  beqz        $at, . + 4 + (0xC6 << 2)
label_2c954c:
    if (ctx->pc == 0x2C954Cu) {
        ctx->pc = 0x2C9550u;
        goto label_2c9550;
    }
    ctx->pc = 0x2C9548u;
    {
        const bool branch_taken_0x2c9548 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9548) {
            ctx->pc = 0x2C9864u;
            goto label_2c9864;
        }
    }
    ctx->pc = 0x2C9550u;
label_2c9550:
    // 0x2c9550: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2c9550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_2c9554:
    // 0x2c9554: 0x24638ce0  addiu       $v1, $v1, -0x7320
    ctx->pc = 0x2c9554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937824));
label_2c9558:
    // 0x2c9558: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c9558u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2c955c:
    // 0x2c955c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c955cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2c9560:
    // 0x2c9560: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c9560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c9564:
    // 0x2c9564: 0x400008  jr          $v0
label_2c9568:
    if (ctx->pc == 0x2C9568u) {
        ctx->pc = 0x2C956Cu;
        goto label_2c956c;
    }
    ctx->pc = 0x2C9564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C956Cu: goto label_2c956c;
            case 0x2C9584u: goto label_2c9584;
            case 0x2C959Cu: goto label_2c959c;
            case 0x2C96CCu: goto label_2c96cc;
            case 0x2C972Cu: goto label_2c972c;
            case 0x2C97DCu: goto label_2c97dc;
            case 0x2C97F4u: goto label_2c97f4;
            case 0x2C980Cu: goto label_2c980c;
            case 0x2C9824u: goto label_2c9824;
            case 0x2C983Cu: goto label_2c983c;
            case 0x2C9854u: goto label_2c9854;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9564u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C956Cu;
label_2c956c:
    // 0x2c956c: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x2c956cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_2c9570:
    // 0x2c9570: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c9570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c9574:
    // 0x2c9574: 0xc0b1140  jal         func_2C4500
label_2c9578:
    if (ctx->pc == 0x2C9578u) {
        ctx->pc = 0x2C957Cu;
        goto label_2c957c;
    }
    ctx->pc = 0x2C9574u;
    SET_GPR_U32(ctx, 31, 0x2C957Cu);
    ctx->pc = 0x2C4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4500u, 0x2C9574u, 0x2C957Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C957Cu;
label_2c957c:
    // 0x2c957c: 0x100000b9  b           . + 4 + (0xB9 << 2)
label_2c9580:
    if (ctx->pc == 0x2C9580u) {
        ctx->pc = 0x2C9584u;
        goto label_2c9584;
    }
    ctx->pc = 0x2C957Cu;
    {
        const bool branch_taken_0x2c957c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c957c) {
            ctx->pc = 0x2C9864u;
            goto label_2c9864;
        }
    }
    ctx->pc = 0x2C9584u;
label_2c9584:
    // 0x2c9584: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x2c9584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_2c9588:
    // 0x2c9588: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c9588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c958c:
    // 0x2c958c: 0xc0b111c  jal         func_2C4470
label_2c9590:
    if (ctx->pc == 0x2C9590u) {
        ctx->pc = 0x2C9594u;
        goto label_2c9594;
    }
    ctx->pc = 0x2C958Cu;
    SET_GPR_U32(ctx, 31, 0x2C9594u);
    ctx->pc = 0x2C4470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4470u, 0x2C958Cu, 0x2C9594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9594u;
label_2c9594:
    // 0x2c9594: 0x100000b3  b           . + 4 + (0xB3 << 2)
label_2c9598:
    if (ctx->pc == 0x2C9598u) {
        ctx->pc = 0x2C959Cu;
        goto label_2c959c;
    }
    ctx->pc = 0x2C9594u;
    {
        const bool branch_taken_0x2c9594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9594) {
            ctx->pc = 0x2C9864u;
            goto label_2c9864;
        }
    }
    ctx->pc = 0x2C959Cu;
label_2c959c:
    // 0x2c959c: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x2c959cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_2c95a0:
    // 0x2c95a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c95a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c95a4:
    // 0x2c95a4: 0xc0b111c  jal         func_2C4470
label_2c95a8:
    if (ctx->pc == 0x2C95A8u) {
        ctx->pc = 0x2C95ACu;
        goto label_2c95ac;
    }
    ctx->pc = 0x2C95A4u;
    SET_GPR_U32(ctx, 31, 0x2C95ACu);
    ctx->pc = 0x2C4470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4470u, 0x2C95A4u, 0x2C95ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C95ACu;
label_2c95ac:
    // 0x2c95ac: 0x8e1e0004  lw          $fp, 0x4($s0)
    ctx->pc = 0x2c95acu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2c95b0:
    // 0x2c95b0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2c95b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2c95b4:
    // 0x2c95b4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2c95b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2c95b8:
    // 0x2c95b8: 0xc085538  jal         func_2154E0
label_2c95bc:
    if (ctx->pc == 0x2C95BCu) {
        ctx->pc = 0x2C95C0u;
        goto label_2c95c0;
    }
    ctx->pc = 0x2C95B8u;
    SET_GPR_U32(ctx, 31, 0x2C95C0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C95B8u, 0x2C95C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C95C0u;
label_2c95c0:
    // 0x2c95c0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2c95c0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c95c4:
    // 0x2c95c4: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x2c95c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_2c95c8:
    // 0x2c95c8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2c95c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2c95cc:
    // 0x2c95cc: 0xc090f80  jal         func_243E00
label_2c95d0:
    if (ctx->pc == 0x2C95D0u) {
        ctx->pc = 0x2C95D4u;
        goto label_2c95d4;
    }
    ctx->pc = 0x2C95CCu;
    SET_GPR_U32(ctx, 31, 0x2C95D4u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2C95CCu, 0x2C95D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C95D4u;
label_2c95d4:
    // 0x2c95d4: 0x27a300a8  addiu       $v1, $sp, 0xA8
    ctx->pc = 0x2c95d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_2c95d8:
    // 0x2c95d8: 0x27a200d8  addiu       $v0, $sp, 0xD8
    ctx->pc = 0x2c95d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_2c95dc:
    // 0x2c95dc: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2c95dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2c95e0:
    // 0x2c95e0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2c95e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c95e4:
    // 0x2c95e4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2c95e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c95e8:
    // 0x2c95e8: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2c95e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2c95ec:
    // 0x2c95ec: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2c95ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_2c95f0:
    // 0x2c95f0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2c95f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2c95f4:
    // 0x2c95f4: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x2c95f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_2c95f8:
    // 0x2c95f8: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x2c95f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_2c95fc:
    // 0x2c95fc: 0x244278f0  addiu       $v0, $v0, 0x78F0
    ctx->pc = 0x2c95fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30960));
label_2c9600:
    // 0x2c9600: 0xafa200f4  sw          $v0, 0xF4($sp)
    ctx->pc = 0x2c9600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
label_2c9604:
    // 0x2c9604: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x2c9604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_2c9608:
    // 0x2c9608: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2c9608u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c960c:
    // 0x2c960c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x2c960cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_2c9610:
    // 0x2c9610: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2c9610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2c9614:
    // 0x2c9614: 0x27a500e8  addiu       $a1, $sp, 0xE8
    ctx->pc = 0x2c9614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_2c9618:
    // 0x2c9618: 0x27a600d8  addiu       $a2, $sp, 0xD8
    ctx->pc = 0x2c9618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_2c961c:
    // 0x2c961c: 0x24470084  addiu       $a3, $v0, 0x84
    ctx->pc = 0x2c961cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
label_2c9620:
    // 0x2c9620: 0x8fa200f4  lw          $v0, 0xF4($sp)
    ctx->pc = 0x2c9620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
label_2c9624:
    // 0x2c9624: 0x40f809  jalr        $v0
label_2c9628:
    if (ctx->pc == 0x2C9628u) {
        ctx->pc = 0x2C962Cu;
        goto label_2c962c;
    }
    ctx->pc = 0x2C9624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C962Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9624u, 0x2C962Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C962Cu;
label_2c962c:
    // 0x2c962c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_2c9630:
    if (ctx->pc == 0x2C9630u) {
        ctx->pc = 0x2C9634u;
        goto label_2c9634;
    }
    ctx->pc = 0x2C962Cu;
    {
        const bool branch_taken_0x2c962c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c962c) {
            ctx->pc = 0x2C966Cu;
            goto label_2c966c;
        }
    }
    ctx->pc = 0x2C9634u;
label_2c9634:
    // 0x2c9634: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x2c9634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_2c9638:
    // 0x2c9638: 0x27a500e8  addiu       $a1, $sp, 0xE8
    ctx->pc = 0x2c9638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_2c963c:
    // 0x2c963c: 0xc0b5f04  jal         func_2D7C10
label_2c9640:
    if (ctx->pc == 0x2C9640u) {
        ctx->pc = 0x2C9644u;
        goto label_2c9644;
    }
    ctx->pc = 0x2C963Cu;
    SET_GPR_U32(ctx, 31, 0x2C9644u);
    ctx->pc = 0x2D7C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7C10u, 0x2C963Cu, 0x2C9644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9644u;
label_2c9644:
    // 0x2c9644: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x2c9644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_2c9648:
    // 0x2c9648: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c9648u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2c964c:
    // 0x2c964c: 0x0  nop
    ctx->pc = 0x2c964cu;
    // NOP
label_2c9650:
    // 0x2c9650: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x2c9650u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2c9654:
    // 0x2c9654: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2c9654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_2c9658:
    // 0x2c9658: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2c9658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2c965c:
    // 0x2c965c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2c965cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2c9660:
    // 0x2c9660: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c9660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c9664:
    // 0x2c9664: 0xc090fe0  jal         func_243F80
label_2c9668:
    if (ctx->pc == 0x2C9668u) {
        ctx->pc = 0x2C966Cu;
        goto label_2c966c;
    }
    ctx->pc = 0x2C9664u;
    SET_GPR_U32(ctx, 31, 0x2C966Cu);
    ctx->pc = 0x243F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243F80u, 0x2C9664u, 0x2C966Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C966Cu;
label_2c966c:
    // 0x2c966c: 0xc090864  jal         func_242190
label_2c9670:
    if (ctx->pc == 0x2C9670u) {
        ctx->pc = 0x2C9674u;
        goto label_2c9674;
    }
    ctx->pc = 0x2C966Cu;
    SET_GPR_U32(ctx, 31, 0x2C9674u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x2C966Cu, 0x2C9674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9674u;
label_2c9674:
    // 0x2c9674: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c9674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c9678:
    // 0x2c9678: 0xc0905a0  jal         func_241680
label_2c967c:
    if (ctx->pc == 0x2C967Cu) {
        ctx->pc = 0x2C9680u;
        goto label_2c9680;
    }
    ctx->pc = 0x2C9678u;
    SET_GPR_U32(ctx, 31, 0x2C9680u);
    ctx->pc = 0x241680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241680u, 0x2C9678u, 0x2C9680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9680u;
label_2c9680:
    // 0x2c9680: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x2c9680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
label_2c9684:
    // 0x2c9684: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x2c9684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_2c9688:
    // 0x2c9688: 0xc09ac08  jal         func_26B020
label_2c968c:
    if (ctx->pc == 0x2C968Cu) {
        ctx->pc = 0x2C9690u;
        goto label_2c9690;
    }
    ctx->pc = 0x2C9688u;
    SET_GPR_U32(ctx, 31, 0x2C9690u);
    ctx->pc = 0x26B020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B020u, 0x2C9688u, 0x2C9690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9690u;
label_2c9690:
    // 0x2c9690: 0x8fa400fc  lw          $a0, 0xFC($sp)
    ctx->pc = 0x2c9690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_2c9694:
    // 0x2c9694: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2c9694u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_2c9698:
    // 0x2c9698: 0x24a5e278  addiu       $a1, $a1, -0x1D88
    ctx->pc = 0x2c9698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959736));
label_2c969c:
    // 0x2c969c: 0xc09a364  jal         func_268D90
label_2c96a0:
    if (ctx->pc == 0x2C96A0u) {
        ctx->pc = 0x2C96A4u;
        goto label_2c96a4;
    }
    ctx->pc = 0x2C969Cu;
    SET_GPR_U32(ctx, 31, 0x2C96A4u);
    ctx->pc = 0x268D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D90u, 0x2C969Cu, 0x2C96A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C96A4u;
label_2c96a4:
    // 0x2c96a4: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x2c96a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
label_2c96a8:
    // 0x2c96a8: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x2c96a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
label_2c96ac:
    // 0x2c96ac: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2c96acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2c96b0:
    // 0x2c96b0: 0x27a500c8  addiu       $a1, $sp, 0xC8
    ctx->pc = 0x2c96b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_2c96b4:
    // 0x2c96b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c96b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c96b8:
    // 0x2c96b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c96b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c96bc:
    // 0x2c96bc: 0xc0af028  jal         func_2BC0A0
label_2c96c0:
    if (ctx->pc == 0x2C96C0u) {
        ctx->pc = 0x2C96C4u;
        goto label_2c96c4;
    }
    ctx->pc = 0x2C96BCu;
    SET_GPR_U32(ctx, 31, 0x2C96C4u);
    ctx->pc = 0x2BC0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC0A0u, 0x2C96BCu, 0x2C96C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C96C4u;
label_2c96c4:
    // 0x2c96c4: 0x10000067  b           . + 4 + (0x67 << 2)
label_2c96c8:
    if (ctx->pc == 0x2C96C8u) {
        ctx->pc = 0x2C96CCu;
        goto label_2c96cc;
    }
    ctx->pc = 0x2C96C4u;
    {
        const bool branch_taken_0x2c96c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c96c4) {
            ctx->pc = 0x2C9864u;
            goto label_2c9864;
        }
    }
    ctx->pc = 0x2C96CCu;
label_2c96cc:
    // 0x2c96cc: 0xc090864  jal         func_242190
label_2c96d0:
    if (ctx->pc == 0x2C96D0u) {
        ctx->pc = 0x2C96D4u;
        goto label_2c96d4;
    }
    ctx->pc = 0x2C96CCu;
    SET_GPR_U32(ctx, 31, 0x2C96D4u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x2C96CCu, 0x2C96D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C96D4u;
label_2c96d4:
    // 0x2c96d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c96d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c96d8:
    // 0x2c96d8: 0xc0905a0  jal         func_241680
label_2c96dc:
    if (ctx->pc == 0x2C96DCu) {
        ctx->pc = 0x2C96E0u;
        goto label_2c96e0;
    }
    ctx->pc = 0x2C96D8u;
    SET_GPR_U32(ctx, 31, 0x2C96E0u);
    ctx->pc = 0x241680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241680u, 0x2C96D8u, 0x2C96E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C96E0u;
label_2c96e0:
    // 0x2c96e0: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x2c96e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
label_2c96e4:
    // 0x2c96e4: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x2c96e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_2c96e8:
    // 0x2c96e8: 0xc09ac08  jal         func_26B020
label_2c96ec:
    if (ctx->pc == 0x2C96ECu) {
        ctx->pc = 0x2C96F0u;
        goto label_2c96f0;
    }
    ctx->pc = 0x2C96E8u;
    SET_GPR_U32(ctx, 31, 0x2C96F0u);
    ctx->pc = 0x26B020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B020u, 0x2C96E8u, 0x2C96F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C96F0u;
label_2c96f0:
    // 0x2c96f0: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x2c96f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_2c96f4:
    // 0x2c96f4: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2c96f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_2c96f8:
    // 0x2c96f8: 0x24a5e288  addiu       $a1, $a1, -0x1D78
    ctx->pc = 0x2c96f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959752));
label_2c96fc:
    // 0x2c96fc: 0xc09a364  jal         func_268D90
label_2c9700:
    if (ctx->pc == 0x2C9700u) {
        ctx->pc = 0x2C9704u;
        goto label_2c9704;
    }
    ctx->pc = 0x2C96FCu;
    SET_GPR_U32(ctx, 31, 0x2C9704u);
    ctx->pc = 0x268D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D90u, 0x2C96FCu, 0x2C9704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9704u;
label_2c9704:
    // 0x2c9704: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x2c9704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
label_2c9708:
    // 0x2c9708: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x2c9708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_2c970c:
    // 0x2c970c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2c970cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2c9710:
    // 0x2c9710: 0x27a500b8  addiu       $a1, $sp, 0xB8
    ctx->pc = 0x2c9710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_2c9714:
    // 0x2c9714: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c9714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c9718:
    // 0x2c9718: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c9718u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c971c:
    // 0x2c971c: 0xc0af028  jal         func_2BC0A0
label_2c9720:
    if (ctx->pc == 0x2C9720u) {
        ctx->pc = 0x2C9724u;
        goto label_2c9724;
    }
    ctx->pc = 0x2C971Cu;
    SET_GPR_U32(ctx, 31, 0x2C9724u);
    ctx->pc = 0x2BC0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC0A0u, 0x2C971Cu, 0x2C9724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9724u;
label_2c9724:
    // 0x2c9724: 0x1000004f  b           . + 4 + (0x4F << 2)
label_2c9728:
    if (ctx->pc == 0x2C9728u) {
        ctx->pc = 0x2C972Cu;
        goto label_2c972c;
    }
    ctx->pc = 0x2C9724u;
    {
        const bool branch_taken_0x2c9724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9724) {
            ctx->pc = 0x2C9864u;
            goto label_2c9864;
        }
    }
    ctx->pc = 0x2C972Cu;
label_2c972c:
    // 0x2c972c: 0x8e140004  lw          $s4, 0x4($s0)
    ctx->pc = 0x2c972cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2c9730:
    // 0x2c9730: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x2c9730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_2c9734:
    // 0x2c9734: 0x8c440094  lw          $a0, 0x94($v0)
    ctx->pc = 0x2c9734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_2c9738:
    // 0x2c9738: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2c9738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2c973c:
    // 0x2c973c: 0xc0b4d8c  jal         func_2D3630
label_2c9740:
    if (ctx->pc == 0x2C9740u) {
        ctx->pc = 0x2C9744u;
        goto label_2c9744;
    }
    ctx->pc = 0x2C973Cu;
    SET_GPR_U32(ctx, 31, 0x2C9744u);
    ctx->pc = 0x2D3630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3630u, 0x2C973Cu, 0x2C9744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9744u;
label_2c9744:
    // 0x2c9744: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2c9744u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c9748:
    // 0x2c9748: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c9748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2c974c:
    // 0x2c974c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2c974cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2c9750:
    // 0x2c9750: 0xc085538  jal         func_2154E0
label_2c9754:
    if (ctx->pc == 0x2C9754u) {
        ctx->pc = 0x2C9758u;
        goto label_2c9758;
    }
    ctx->pc = 0x2C9750u;
    SET_GPR_U32(ctx, 31, 0x2C9758u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C9750u, 0x2C9758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9758u;
label_2c9758:
    // 0x2c9758: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2c9758u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c975c:
    // 0x2c975c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2c975cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2c9760:
    // 0x2c9760: 0xc096880  jal         func_25A200
label_2c9764:
    if (ctx->pc == 0x2C9764u) {
        ctx->pc = 0x2C9768u;
        goto label_2c9768;
    }
    ctx->pc = 0x2C9760u;
    SET_GPR_U32(ctx, 31, 0x2C9768u);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x2C9760u, 0x2C9768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9768u;
label_2c9768:
    // 0x2c9768: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c9768u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c976c:
    // 0x2c976c: 0x1272003d  beq         $s3, $s2, . + 4 + (0x3D << 2)
label_2c9770:
    if (ctx->pc == 0x2C9770u) {
        ctx->pc = 0x2C9774u;
        goto label_2c9774;
    }
    ctx->pc = 0x2C976Cu;
    {
        const bool branch_taken_0x2c976c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 18));
        if (branch_taken_0x2c976c) {
            ctx->pc = 0x2C9864u;
            goto label_2c9864;
        }
    }
    ctx->pc = 0x2C9774u;
label_2c9774:
    // 0x2c9774: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2c9774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2c9778:
    // 0x2c9778: 0xc096874  jal         func_25A1D0
label_2c977c:
    if (ctx->pc == 0x2C977Cu) {
        ctx->pc = 0x2C9780u;
        goto label_2c9780;
    }
    ctx->pc = 0x2C9778u;
    SET_GPR_U32(ctx, 31, 0x2C9780u);
    ctx->pc = 0x25A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A1D0u, 0x2C9778u, 0x2C9780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9780u;
label_2c9780:
    // 0x2c9780: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
label_2c9784:
    if (ctx->pc == 0x2C9784u) {
        ctx->pc = 0x2C9788u;
        goto label_2c9788;
    }
    ctx->pc = 0x2C9780u;
    {
        const bool branch_taken_0x2c9780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9780) {
            ctx->pc = 0x2C9864u;
            goto label_2c9864;
        }
    }
    ctx->pc = 0x2C9788u;
label_2c9788:
    // 0x2c9788: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
label_2c978c:
    if (ctx->pc == 0x2C978Cu) {
        ctx->pc = 0x2C9790u;
        goto label_2c9790;
    }
    ctx->pc = 0x2C9788u;
    {
        const bool branch_taken_0x2c9788 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9788) {
            ctx->pc = 0x2C97B8u;
            goto label_2c97b8;
        }
    }
    ctx->pc = 0x2C9790u;
label_2c9790:
    // 0x2c9790: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x2c9790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_2c9794:
    // 0x2c9794: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c9794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c9798:
    // 0x2c9798: 0x12420007  beq         $s2, $v0, . + 4 + (0x7 << 2)
label_2c979c:
    if (ctx->pc == 0x2C979Cu) {
        ctx->pc = 0x2C97A0u;
        goto label_2c97a0;
    }
    ctx->pc = 0x2C9798u;
    {
        const bool branch_taken_0x2c9798 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c9798) {
            ctx->pc = 0x2C97B8u;
            goto label_2c97b8;
        }
    }
    ctx->pc = 0x2C97A0u;
label_2c97a0:
    // 0x2c97a0: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x2c97a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_2c97a4:
    // 0x2c97a4: 0x8c440094  lw          $a0, 0x94($v0)
    ctx->pc = 0x2c97a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_2c97a8:
    // 0x2c97a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2c97a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c97ac:
    // 0x2c97ac: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2c97acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2c97b0:
    // 0x2c97b0: 0xc0b4784  jal         func_2D1E10
label_2c97b4:
    if (ctx->pc == 0x2C97B4u) {
        ctx->pc = 0x2C97B8u;
        goto label_2c97b8;
    }
    ctx->pc = 0x2C97B0u;
    SET_GPR_U32(ctx, 31, 0x2C97B8u);
    ctx->pc = 0x2D1E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1E10u, 0x2C97B0u, 0x2C97B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C97B8u;
label_2c97b8:
    // 0x2c97b8: 0x1260002a  beqz        $s3, . + 4 + (0x2A << 2)
label_2c97bc:
    if (ctx->pc == 0x2C97BCu) {
        ctx->pc = 0x2C97C0u;
        goto label_2c97c0;
    }
    ctx->pc = 0x2C97B8u;
    {
        const bool branch_taken_0x2c97b8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c97b8) {
            ctx->pc = 0x2C9864u;
            goto label_2c9864;
        }
    }
    ctx->pc = 0x2C97C0u;
label_2c97c0:
    // 0x2c97c0: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x2c97c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_2c97c4:
    // 0x2c97c4: 0x8c440094  lw          $a0, 0x94($v0)
    ctx->pc = 0x2c97c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_2c97c8:
    // 0x2c97c8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2c97c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c97cc:
    // 0x2c97cc: 0xc0b4a64  jal         func_2D2990
label_2c97d0:
    if (ctx->pc == 0x2C97D0u) {
        ctx->pc = 0x2C97D4u;
        goto label_2c97d4;
    }
    ctx->pc = 0x2C97CCu;
    SET_GPR_U32(ctx, 31, 0x2C97D4u);
    ctx->pc = 0x2D2990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2990u, 0x2C97CCu, 0x2C97D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C97D4u;
label_2c97d4:
    // 0x2c97d4: 0x10000023  b           . + 4 + (0x23 << 2)
label_2c97d8:
    if (ctx->pc == 0x2C97D8u) {
        ctx->pc = 0x2C97DCu;
        goto label_2c97dc;
    }
    ctx->pc = 0x2C97D4u;
    {
        const bool branch_taken_0x2c97d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c97d4) {
            ctx->pc = 0x2C9864u;
            goto label_2c9864;
        }
    }
    ctx->pc = 0x2C97DCu;
label_2c97dc:
    // 0x2c97dc: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x2c97dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_2c97e0:
    // 0x2c97e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c97e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c97e4:
    // 0x2c97e4: 0xc0b0e68  jal         func_2C39A0
label_2c97e8:
    if (ctx->pc == 0x2C97E8u) {
        ctx->pc = 0x2C97ECu;
        goto label_2c97ec;
    }
    ctx->pc = 0x2C97E4u;
    SET_GPR_U32(ctx, 31, 0x2C97ECu);
    ctx->pc = 0x2C39A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39A0u, 0x2C97E4u, 0x2C97ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C97ECu;
label_2c97ec:
    // 0x2c97ec: 0x1000001d  b           . + 4 + (0x1D << 2)
label_2c97f0:
    if (ctx->pc == 0x2C97F0u) {
        ctx->pc = 0x2C97F4u;
        goto label_2c97f4;
    }
    ctx->pc = 0x2C97ECu;
    {
        const bool branch_taken_0x2c97ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c97ec) {
            ctx->pc = 0x2C9864u;
            goto label_2c9864;
        }
    }
    ctx->pc = 0x2C97F4u;
label_2c97f4:
    // 0x2c97f4: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x2c97f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_2c97f8:
    // 0x2c97f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c97f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c97fc:
    // 0x2c97fc: 0xc0b0eac  jal         func_2C3AB0
label_2c9800:
    if (ctx->pc == 0x2C9800u) {
        ctx->pc = 0x2C9804u;
        goto label_2c9804;
    }
    ctx->pc = 0x2C97FCu;
    SET_GPR_U32(ctx, 31, 0x2C9804u);
    ctx->pc = 0x2C3AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3AB0u, 0x2C97FCu, 0x2C9804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9804u;
label_2c9804:
    // 0x2c9804: 0x10000017  b           . + 4 + (0x17 << 2)
label_2c9808:
    if (ctx->pc == 0x2C9808u) {
        ctx->pc = 0x2C980Cu;
        goto label_2c980c;
    }
    ctx->pc = 0x2C9804u;
    {
        const bool branch_taken_0x2c9804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9804) {
            ctx->pc = 0x2C9864u;
            goto label_2c9864;
        }
    }
    ctx->pc = 0x2C980Cu;
label_2c980c:
    // 0x2c980c: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x2c980cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_2c9810:
    // 0x2c9810: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c9810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c9814:
    // 0x2c9814: 0xc0b10d4  jal         func_2C4350
label_2c9818:
    if (ctx->pc == 0x2C9818u) {
        ctx->pc = 0x2C981Cu;
        goto label_2c981c;
    }
    ctx->pc = 0x2C9814u;
    SET_GPR_U32(ctx, 31, 0x2C981Cu);
    ctx->pc = 0x2C4350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4350u, 0x2C9814u, 0x2C981Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C981Cu;
label_2c981c:
    // 0x2c981c: 0x10000011  b           . + 4 + (0x11 << 2)
label_2c9820:
    if (ctx->pc == 0x2C9820u) {
        ctx->pc = 0x2C9824u;
        goto label_2c9824;
    }
    ctx->pc = 0x2C981Cu;
    {
        const bool branch_taken_0x2c981c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c981c) {
            ctx->pc = 0x2C9864u;
            goto label_2c9864;
        }
    }
    ctx->pc = 0x2C9824u;
label_2c9824:
    // 0x2c9824: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x2c9824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_2c9828:
    // 0x2c9828: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c9828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c982c:
    // 0x2c982c: 0xc0b0ff0  jal         func_2C3FC0
label_2c9830:
    if (ctx->pc == 0x2C9830u) {
        ctx->pc = 0x2C9834u;
        goto label_2c9834;
    }
    ctx->pc = 0x2C982Cu;
    SET_GPR_U32(ctx, 31, 0x2C9834u);
    ctx->pc = 0x2C3FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3FC0u, 0x2C982Cu, 0x2C9834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9834u;
label_2c9834:
    // 0x2c9834: 0x1000000b  b           . + 4 + (0xB << 2)
label_2c9838:
    if (ctx->pc == 0x2C9838u) {
        ctx->pc = 0x2C983Cu;
        goto label_2c983c;
    }
    ctx->pc = 0x2C9834u;
    {
        const bool branch_taken_0x2c9834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9834) {
            ctx->pc = 0x2C9864u;
            goto label_2c9864;
        }
    }
    ctx->pc = 0x2C983Cu;
label_2c983c:
    // 0x2c983c: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x2c983cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_2c9840:
    // 0x2c9840: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c9840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c9844:
    // 0x2c9844: 0xc0b1070  jal         func_2C41C0
label_2c9848:
    if (ctx->pc == 0x2C9848u) {
        ctx->pc = 0x2C984Cu;
        goto label_2c984c;
    }
    ctx->pc = 0x2C9844u;
    SET_GPR_U32(ctx, 31, 0x2C984Cu);
    ctx->pc = 0x2C41C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C41C0u, 0x2C9844u, 0x2C984Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C984Cu;
label_2c984c:
    // 0x2c984c: 0x10000005  b           . + 4 + (0x5 << 2)
label_2c9850:
    if (ctx->pc == 0x2C9850u) {
        ctx->pc = 0x2C9854u;
        goto label_2c9854;
    }
    ctx->pc = 0x2C984Cu;
    {
        const bool branch_taken_0x2c984c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c984c) {
            ctx->pc = 0x2C9864u;
            goto label_2c9864;
        }
    }
    ctx->pc = 0x2C9854u;
label_2c9854:
    // 0x2c9854: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x2c9854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_2c9858:
    // 0x2c9858: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c9858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c985c:
    // 0x2c985c: 0xc0b1264  jal         func_2C4990
label_2c9860:
    if (ctx->pc == 0x2C9860u) {
        ctx->pc = 0x2C9864u;
        goto label_2c9864;
    }
    ctx->pc = 0x2C985Cu;
    SET_GPR_U32(ctx, 31, 0x2C9864u);
    ctx->pc = 0x2C4990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4990u, 0x2C985Cu, 0x2C9864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9864u;
label_2c9864:
    // 0x2c9864: 0x9202000c  lbu         $v0, 0xC($s0)
    ctx->pc = 0x2c9864u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
label_2c9868:
    // 0x2c9868: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c9868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2c986c:
    // 0x2c986c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c986cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c9870:
    // 0x2c9870: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_2c9874:
    if (ctx->pc == 0x2C9874u) {
        ctx->pc = 0x2C9878u;
        goto label_2c9878;
    }
    ctx->pc = 0x2C9870u;
    {
        const bool branch_taken_0x2c9870 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c9870) {
            ctx->pc = 0x2C9894u;
            goto label_2c9894;
        }
    }
    ctx->pc = 0x2C9878u;
label_2c9878:
    // 0x2c9878: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2c9878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2c987c:
    // 0x2c987c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c987cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c9880:
    // 0x2c9880: 0xc0add88  jal         func_2B7620
label_2c9884:
    if (ctx->pc == 0x2C9884u) {
        ctx->pc = 0x2C9888u;
        goto label_2c9888;
    }
    ctx->pc = 0x2C9880u;
    SET_GPR_U32(ctx, 31, 0x2C9888u);
    ctx->pc = 0x2B7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7620u, 0x2C9880u, 0x2C9888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9888u;
label_2c9888:
    // 0x2c9888: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c9888u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c988c:
    // 0x2c988c: 0x10000002  b           . + 4 + (0x2 << 2)
label_2c9890:
    if (ctx->pc == 0x2C9890u) {
        ctx->pc = 0x2C9894u;
        goto label_2c9894;
    }
    ctx->pc = 0x2C988Cu;
    {
        const bool branch_taken_0x2c988c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c988c) {
            ctx->pc = 0x2C9898u;
            goto label_2c9898;
        }
    }
    ctx->pc = 0x2C9894u;
label_2c9894:
    // 0x2c9894: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x2c9894u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2c9898:
    // 0x2c9898: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2c9898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2c989c:
    // 0x2c989c: 0xc08feac  jal         func_23FAB0
label_2c98a0:
    if (ctx->pc == 0x2C98A0u) {
        ctx->pc = 0x2C98A4u;
        goto label_2c98a4;
    }
    ctx->pc = 0x2C989Cu;
    SET_GPR_U32(ctx, 31, 0x2C98A4u);
    ctx->pc = 0x23FAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FAB0u, 0x2C989Cu, 0x2C98A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C98A4u;
label_2c98a4:
    // 0x2c98a4: 0x1622ff25  bne         $s1, $v0, . + 4 + (-0xDB << 2)
label_2c98a8:
    if (ctx->pc == 0x2C98A8u) {
        ctx->pc = 0x2C98ACu;
        goto label_2c98ac;
    }
    ctx->pc = 0x2C98A4u;
    {
        const bool branch_taken_0x2c98a4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c98a4) {
            ctx->pc = 0x2C953Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c953c;
        }
    }
    ctx->pc = 0x2C98ACu;
label_2c98ac:
    // 0x2c98ac: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2c98acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2c98b0:
    // 0x2c98b0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2c98b0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2c98b4:
    // 0x2c98b4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2c98b4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2c98b8:
    // 0x2c98b8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2c98b8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2c98bc:
    // 0x2c98bc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2c98bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2c98c0:
    // 0x2c98c0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c98c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2c98c4:
    // 0x2c98c4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c98c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2c98c8:
    // 0x2c98c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c98c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2c98cc:
    // 0x2c98cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c98ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c98d0:
    // 0x2c98d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c98d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c98d4:
    // 0x2c98d4: 0x27bd0110  addiu       $sp, $sp, 0x110
    ctx->pc = 0x2c98d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_2c98d8:
    // 0x2c98d8: 0x3e00008  jr          $ra
label_2c98dc:
    if (ctx->pc == 0x2C98DCu) {
        ctx->pc = 0x2C98E0u;
        goto label_fallthrough_0x2c98d8;
    }
    ctx->pc = 0x2C98D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C98D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2c98d8:
    ctx->pc = 0x2C98E0u;
}
