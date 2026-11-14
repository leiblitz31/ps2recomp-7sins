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

// Function: sub_004490C0
// Address: 0x4490c0 - 0x449608
void sub_004490C0_0x4490c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004490C0_0x4490c0");
#endif

    switch (ctx->pc) {
        case 0x4490c0u: goto label_4490c0;
        case 0x4490c4u: goto label_4490c4;
        case 0x4490c8u: goto label_4490c8;
        case 0x4490ccu: goto label_4490cc;
        case 0x4490d0u: goto label_4490d0;
        case 0x4490d4u: goto label_4490d4;
        case 0x4490d8u: goto label_4490d8;
        case 0x4490dcu: goto label_4490dc;
        case 0x4490e0u: goto label_4490e0;
        case 0x4490e4u: goto label_4490e4;
        case 0x4490e8u: goto label_4490e8;
        case 0x4490ecu: goto label_4490ec;
        case 0x4490f0u: goto label_4490f0;
        case 0x4490f4u: goto label_4490f4;
        case 0x4490f8u: goto label_4490f8;
        case 0x4490fcu: goto label_4490fc;
        case 0x449100u: goto label_449100;
        case 0x449104u: goto label_449104;
        case 0x449108u: goto label_449108;
        case 0x44910cu: goto label_44910c;
        case 0x449110u: goto label_449110;
        case 0x449114u: goto label_449114;
        case 0x449118u: goto label_449118;
        case 0x44911cu: goto label_44911c;
        case 0x449120u: goto label_449120;
        case 0x449124u: goto label_449124;
        case 0x449128u: goto label_449128;
        case 0x44912cu: goto label_44912c;
        case 0x449130u: goto label_449130;
        case 0x449134u: goto label_449134;
        case 0x449138u: goto label_449138;
        case 0x44913cu: goto label_44913c;
        case 0x449140u: goto label_449140;
        case 0x449144u: goto label_449144;
        case 0x449148u: goto label_449148;
        case 0x44914cu: goto label_44914c;
        case 0x449150u: goto label_449150;
        case 0x449154u: goto label_449154;
        case 0x449158u: goto label_449158;
        case 0x44915cu: goto label_44915c;
        case 0x449160u: goto label_449160;
        case 0x449164u: goto label_449164;
        case 0x449168u: goto label_449168;
        case 0x44916cu: goto label_44916c;
        case 0x449170u: goto label_449170;
        case 0x449174u: goto label_449174;
        case 0x449178u: goto label_449178;
        case 0x44917cu: goto label_44917c;
        case 0x449180u: goto label_449180;
        case 0x449184u: goto label_449184;
        case 0x449188u: goto label_449188;
        case 0x44918cu: goto label_44918c;
        case 0x449190u: goto label_449190;
        case 0x449194u: goto label_449194;
        case 0x449198u: goto label_449198;
        case 0x44919cu: goto label_44919c;
        case 0x4491a0u: goto label_4491a0;
        case 0x4491a4u: goto label_4491a4;
        case 0x4491a8u: goto label_4491a8;
        case 0x4491acu: goto label_4491ac;
        case 0x4491b0u: goto label_4491b0;
        case 0x4491b4u: goto label_4491b4;
        case 0x4491b8u: goto label_4491b8;
        case 0x4491bcu: goto label_4491bc;
        case 0x4491c0u: goto label_4491c0;
        case 0x4491c4u: goto label_4491c4;
        case 0x4491c8u: goto label_4491c8;
        case 0x4491ccu: goto label_4491cc;
        case 0x4491d0u: goto label_4491d0;
        case 0x4491d4u: goto label_4491d4;
        case 0x4491d8u: goto label_4491d8;
        case 0x4491dcu: goto label_4491dc;
        case 0x4491e0u: goto label_4491e0;
        case 0x4491e4u: goto label_4491e4;
        case 0x4491e8u: goto label_4491e8;
        case 0x4491ecu: goto label_4491ec;
        case 0x4491f0u: goto label_4491f0;
        case 0x4491f4u: goto label_4491f4;
        case 0x4491f8u: goto label_4491f8;
        case 0x4491fcu: goto label_4491fc;
        case 0x449200u: goto label_449200;
        case 0x449204u: goto label_449204;
        case 0x449208u: goto label_449208;
        case 0x44920cu: goto label_44920c;
        case 0x449210u: goto label_449210;
        case 0x449214u: goto label_449214;
        case 0x449218u: goto label_449218;
        case 0x44921cu: goto label_44921c;
        case 0x449220u: goto label_449220;
        case 0x449224u: goto label_449224;
        case 0x449228u: goto label_449228;
        case 0x44922cu: goto label_44922c;
        case 0x449230u: goto label_449230;
        case 0x449234u: goto label_449234;
        case 0x449238u: goto label_449238;
        case 0x44923cu: goto label_44923c;
        case 0x449240u: goto label_449240;
        case 0x449244u: goto label_449244;
        case 0x449248u: goto label_449248;
        case 0x44924cu: goto label_44924c;
        case 0x449250u: goto label_449250;
        case 0x449254u: goto label_449254;
        case 0x449258u: goto label_449258;
        case 0x44925cu: goto label_44925c;
        case 0x449260u: goto label_449260;
        case 0x449264u: goto label_449264;
        case 0x449268u: goto label_449268;
        case 0x44926cu: goto label_44926c;
        case 0x449270u: goto label_449270;
        case 0x449274u: goto label_449274;
        case 0x449278u: goto label_449278;
        case 0x44927cu: goto label_44927c;
        case 0x449280u: goto label_449280;
        case 0x449284u: goto label_449284;
        case 0x449288u: goto label_449288;
        case 0x44928cu: goto label_44928c;
        case 0x449290u: goto label_449290;
        case 0x449294u: goto label_449294;
        case 0x449298u: goto label_449298;
        case 0x44929cu: goto label_44929c;
        case 0x4492a0u: goto label_4492a0;
        case 0x4492a4u: goto label_4492a4;
        case 0x4492a8u: goto label_4492a8;
        case 0x4492acu: goto label_4492ac;
        case 0x4492b0u: goto label_4492b0;
        case 0x4492b4u: goto label_4492b4;
        case 0x4492b8u: goto label_4492b8;
        case 0x4492bcu: goto label_4492bc;
        case 0x4492c0u: goto label_4492c0;
        case 0x4492c4u: goto label_4492c4;
        case 0x4492c8u: goto label_4492c8;
        case 0x4492ccu: goto label_4492cc;
        case 0x4492d0u: goto label_4492d0;
        case 0x4492d4u: goto label_4492d4;
        case 0x4492d8u: goto label_4492d8;
        case 0x4492dcu: goto label_4492dc;
        case 0x4492e0u: goto label_4492e0;
        case 0x4492e4u: goto label_4492e4;
        case 0x4492e8u: goto label_4492e8;
        case 0x4492ecu: goto label_4492ec;
        case 0x4492f0u: goto label_4492f0;
        case 0x4492f4u: goto label_4492f4;
        case 0x4492f8u: goto label_4492f8;
        case 0x4492fcu: goto label_4492fc;
        case 0x449300u: goto label_449300;
        case 0x449304u: goto label_449304;
        case 0x449308u: goto label_449308;
        case 0x44930cu: goto label_44930c;
        case 0x449310u: goto label_449310;
        case 0x449314u: goto label_449314;
        case 0x449318u: goto label_449318;
        case 0x44931cu: goto label_44931c;
        case 0x449320u: goto label_449320;
        case 0x449324u: goto label_449324;
        case 0x449328u: goto label_449328;
        case 0x44932cu: goto label_44932c;
        case 0x449330u: goto label_449330;
        case 0x449334u: goto label_449334;
        case 0x449338u: goto label_449338;
        case 0x44933cu: goto label_44933c;
        case 0x449340u: goto label_449340;
        case 0x449344u: goto label_449344;
        case 0x449348u: goto label_449348;
        case 0x44934cu: goto label_44934c;
        case 0x449350u: goto label_449350;
        case 0x449354u: goto label_449354;
        case 0x449358u: goto label_449358;
        case 0x44935cu: goto label_44935c;
        case 0x449360u: goto label_449360;
        case 0x449364u: goto label_449364;
        case 0x449368u: goto label_449368;
        case 0x44936cu: goto label_44936c;
        case 0x449370u: goto label_449370;
        case 0x449374u: goto label_449374;
        case 0x449378u: goto label_449378;
        case 0x44937cu: goto label_44937c;
        case 0x449380u: goto label_449380;
        case 0x449384u: goto label_449384;
        case 0x449388u: goto label_449388;
        case 0x44938cu: goto label_44938c;
        case 0x449390u: goto label_449390;
        case 0x449394u: goto label_449394;
        case 0x449398u: goto label_449398;
        case 0x44939cu: goto label_44939c;
        case 0x4493a0u: goto label_4493a0;
        case 0x4493a4u: goto label_4493a4;
        case 0x4493a8u: goto label_4493a8;
        case 0x4493acu: goto label_4493ac;
        case 0x4493b0u: goto label_4493b0;
        case 0x4493b4u: goto label_4493b4;
        case 0x4493b8u: goto label_4493b8;
        case 0x4493bcu: goto label_4493bc;
        case 0x4493c0u: goto label_4493c0;
        case 0x4493c4u: goto label_4493c4;
        case 0x4493c8u: goto label_4493c8;
        case 0x4493ccu: goto label_4493cc;
        case 0x4493d0u: goto label_4493d0;
        case 0x4493d4u: goto label_4493d4;
        case 0x4493d8u: goto label_4493d8;
        case 0x4493dcu: goto label_4493dc;
        case 0x4493e0u: goto label_4493e0;
        case 0x4493e4u: goto label_4493e4;
        case 0x4493e8u: goto label_4493e8;
        case 0x4493ecu: goto label_4493ec;
        case 0x4493f0u: goto label_4493f0;
        case 0x4493f4u: goto label_4493f4;
        case 0x4493f8u: goto label_4493f8;
        case 0x4493fcu: goto label_4493fc;
        case 0x449400u: goto label_449400;
        case 0x449404u: goto label_449404;
        case 0x449408u: goto label_449408;
        case 0x44940cu: goto label_44940c;
        case 0x449410u: goto label_449410;
        case 0x449414u: goto label_449414;
        case 0x449418u: goto label_449418;
        case 0x44941cu: goto label_44941c;
        case 0x449420u: goto label_449420;
        case 0x449424u: goto label_449424;
        case 0x449428u: goto label_449428;
        case 0x44942cu: goto label_44942c;
        case 0x449430u: goto label_449430;
        case 0x449434u: goto label_449434;
        case 0x449438u: goto label_449438;
        case 0x44943cu: goto label_44943c;
        case 0x449440u: goto label_449440;
        case 0x449444u: goto label_449444;
        case 0x449448u: goto label_449448;
        case 0x44944cu: goto label_44944c;
        case 0x449450u: goto label_449450;
        case 0x449454u: goto label_449454;
        case 0x449458u: goto label_449458;
        case 0x44945cu: goto label_44945c;
        case 0x449460u: goto label_449460;
        case 0x449464u: goto label_449464;
        case 0x449468u: goto label_449468;
        case 0x44946cu: goto label_44946c;
        case 0x449470u: goto label_449470;
        case 0x449474u: goto label_449474;
        case 0x449478u: goto label_449478;
        case 0x44947cu: goto label_44947c;
        case 0x449480u: goto label_449480;
        case 0x449484u: goto label_449484;
        case 0x449488u: goto label_449488;
        case 0x44948cu: goto label_44948c;
        case 0x449490u: goto label_449490;
        case 0x449494u: goto label_449494;
        case 0x449498u: goto label_449498;
        case 0x44949cu: goto label_44949c;
        case 0x4494a0u: goto label_4494a0;
        case 0x4494a4u: goto label_4494a4;
        case 0x4494a8u: goto label_4494a8;
        case 0x4494acu: goto label_4494ac;
        case 0x4494b0u: goto label_4494b0;
        case 0x4494b4u: goto label_4494b4;
        case 0x4494b8u: goto label_4494b8;
        case 0x4494bcu: goto label_4494bc;
        case 0x4494c0u: goto label_4494c0;
        case 0x4494c4u: goto label_4494c4;
        case 0x4494c8u: goto label_4494c8;
        case 0x4494ccu: goto label_4494cc;
        case 0x4494d0u: goto label_4494d0;
        case 0x4494d4u: goto label_4494d4;
        case 0x4494d8u: goto label_4494d8;
        case 0x4494dcu: goto label_4494dc;
        case 0x4494e0u: goto label_4494e0;
        case 0x4494e4u: goto label_4494e4;
        case 0x4494e8u: goto label_4494e8;
        case 0x4494ecu: goto label_4494ec;
        case 0x4494f0u: goto label_4494f0;
        case 0x4494f4u: goto label_4494f4;
        case 0x4494f8u: goto label_4494f8;
        case 0x4494fcu: goto label_4494fc;
        case 0x449500u: goto label_449500;
        case 0x449504u: goto label_449504;
        case 0x449508u: goto label_449508;
        case 0x44950cu: goto label_44950c;
        case 0x449510u: goto label_449510;
        case 0x449514u: goto label_449514;
        case 0x449518u: goto label_449518;
        case 0x44951cu: goto label_44951c;
        case 0x449520u: goto label_449520;
        case 0x449524u: goto label_449524;
        case 0x449528u: goto label_449528;
        case 0x44952cu: goto label_44952c;
        case 0x449530u: goto label_449530;
        case 0x449534u: goto label_449534;
        case 0x449538u: goto label_449538;
        case 0x44953cu: goto label_44953c;
        case 0x449540u: goto label_449540;
        case 0x449544u: goto label_449544;
        case 0x449548u: goto label_449548;
        case 0x44954cu: goto label_44954c;
        case 0x449550u: goto label_449550;
        case 0x449554u: goto label_449554;
        case 0x449558u: goto label_449558;
        case 0x44955cu: goto label_44955c;
        case 0x449560u: goto label_449560;
        case 0x449564u: goto label_449564;
        case 0x449568u: goto label_449568;
        case 0x44956cu: goto label_44956c;
        case 0x449570u: goto label_449570;
        case 0x449574u: goto label_449574;
        case 0x449578u: goto label_449578;
        case 0x44957cu: goto label_44957c;
        case 0x449580u: goto label_449580;
        case 0x449584u: goto label_449584;
        case 0x449588u: goto label_449588;
        case 0x44958cu: goto label_44958c;
        case 0x449590u: goto label_449590;
        case 0x449594u: goto label_449594;
        case 0x449598u: goto label_449598;
        case 0x44959cu: goto label_44959c;
        case 0x4495a0u: goto label_4495a0;
        case 0x4495a4u: goto label_4495a4;
        case 0x4495a8u: goto label_4495a8;
        case 0x4495acu: goto label_4495ac;
        case 0x4495b0u: goto label_4495b0;
        case 0x4495b4u: goto label_4495b4;
        case 0x4495b8u: goto label_4495b8;
        case 0x4495bcu: goto label_4495bc;
        case 0x4495c0u: goto label_4495c0;
        case 0x4495c4u: goto label_4495c4;
        case 0x4495c8u: goto label_4495c8;
        case 0x4495ccu: goto label_4495cc;
        case 0x4495d0u: goto label_4495d0;
        case 0x4495d4u: goto label_4495d4;
        case 0x4495d8u: goto label_4495d8;
        case 0x4495dcu: goto label_4495dc;
        case 0x4495e0u: goto label_4495e0;
        case 0x4495e4u: goto label_4495e4;
        case 0x4495e8u: goto label_4495e8;
        case 0x4495ecu: goto label_4495ec;
        case 0x4495f0u: goto label_4495f0;
        case 0x4495f4u: goto label_4495f4;
        case 0x4495f8u: goto label_4495f8;
        case 0x4495fcu: goto label_4495fc;
        case 0x449600u: goto label_449600;
        case 0x449604u: goto label_449604;
        default: break;
    }

    ctx->pc = 0x4490c0u;

label_4490c0:
    // 0x4490c0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4490c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_4490c4:
    // 0x4490c4: 0x8f85af34  lw          $a1, -0x50CC($gp)
    ctx->pc = 0x4490c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946612)));
label_4490c8:
    // 0x4490c8: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x4490c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
label_4490cc:
    // 0x4490cc: 0x24840003  addiu       $a0, $a0, 0x3
    ctx->pc = 0x4490ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
label_4490d0:
    // 0x4490d0: 0x823024  and         $a2, $a0, $v0
    ctx->pc = 0x4490d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_4490d4:
    // 0x4490d4: 0x8f83af30  lw          $v1, -0x50D0($gp)
    ctx->pc = 0x4490d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946608)));
label_4490d8:
    // 0x4490d8: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x4490d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_4490dc:
    // 0x4490dc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4490dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4490e0:
    // 0x4490e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4490e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4490e4:
    // 0x4490e4: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x4490e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4490e8:
    // 0x4490e8: 0xaf82af34  sw          $v0, -0x50CC($gp)
    ctx->pc = 0x4490e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946612), GPR_U32(ctx, 2));
label_4490ec:
    // 0x4490ec: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_4490f0:
    if (ctx->pc == 0x4490F0u) {
        ctx->pc = 0x4490F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4490ECu;
        // 0x4490f0: 0x461023  subu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4490F4u;
        goto label_4490f4;
    }
    ctx->pc = 0x4490ECu;
    {
        const bool branch_taken_0x4490ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4490F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4490ECu;
        // 0x4490f0: 0x461023  subu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4490ec) {
            ctx->pc = 0x449100u;
            goto label_449100;
        }
    }
    ctx->pc = 0x4490F4u;
label_4490f4:
    // 0x4490f4: 0x1000000e  b           . + 4 + (0xE << 2)
label_4490f8:
    if (ctx->pc == 0x4490F8u) {
        ctx->pc = 0x4490F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4490F4u;
        // 0x4490f8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4490FCu;
        goto label_4490fc;
    }
    ctx->pc = 0x4490F4u;
    {
        const bool branch_taken_0x4490f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4490F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4490F4u;
        // 0x4490f8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4490f4) {
            ctx->pc = 0x449130u;
            goto label_449130;
        }
    }
    ctx->pc = 0x4490FCu;
label_4490fc:
    // 0x4490fc: 0x0  nop
    ctx->pc = 0x4490fcu;
    // NOP
label_449100:
    // 0x449100: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x449100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_449104:
    // 0x449104: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x449104u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_449108:
    // 0x449108: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x449108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_44910c:
    // 0x44910c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x44910cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_449110:
    // 0x449110: 0xaf82af34  sw          $v0, -0x50CC($gp)
    ctx->pc = 0x449110u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946612), GPR_U32(ctx, 2));
label_449114:
    // 0x449114: 0xc1035f6  jal         func_40D7D8
label_449118:
    if (ctx->pc == 0x449118u) {
        ctx->pc = 0x449118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449114u;
        // 0x449118: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x44911Cu;
        goto label_44911c;
    }
    ctx->pc = 0x449114u;
    SET_GPR_U32(ctx, 31, 0x44911Cu);
    ctx->pc = 0x449118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x449114u;
    // 0x449118: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x449114u, 0x44911Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44911Cu;
label_44911c:
    // 0x44911c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x44911cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_449120:
    // 0x449120: 0xc103628  jal         func_40D8A0
label_449124:
    if (ctx->pc == 0x449124u) {
        ctx->pc = 0x449124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449120u;
        // 0x449124: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449128u;
        goto label_449128;
    }
    ctx->pc = 0x449120u;
    SET_GPR_U32(ctx, 31, 0x449128u);
    ctx->pc = 0x449124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x449120u;
    // 0x449124: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x449120u, 0x449128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x449128u;
label_449128:
    // 0x449128: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x449128u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44912c:
    // 0x44912c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x44912cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_449130:
    // 0x449130: 0x3e00008  jr          $ra
label_449134:
    if (ctx->pc == 0x449134u) {
        ctx->pc = 0x449134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449130u;
        // 0x449134: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449138u;
        goto label_449138;
    }
    ctx->pc = 0x449130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x449134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449130u;
        // 0x449134: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x449130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x449138u;
label_449138:
    // 0x449138: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x449138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_44913c:
    // 0x44913c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x44913cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_449140:
    // 0x449140: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x449140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_449144:
    // 0x449144: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x449144u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_449148:
    // 0x449148: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x449148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_44914c:
    // 0x44914c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x44914cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_449150:
    // 0x449150: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x449150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_449154:
    // 0x449154: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x449154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_449158:
    // 0x449158: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x449158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_44915c:
    // 0x44915c: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x44915cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_449160:
    // 0x449160: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x449160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_449164:
    // 0x449164: 0x12a00056  beqz        $s5, . + 4 + (0x56 << 2)
label_449168:
    if (ctx->pc == 0x449168u) {
        ctx->pc = 0x449168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449164u;
        // 0x449168: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44916Cu;
        goto label_44916c;
    }
    ctx->pc = 0x449164u;
    {
        const bool branch_taken_0x449164 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x449168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449164u;
        // 0x449168: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449164) {
            ctx->pc = 0x4492C0u;
            goto label_4492c0;
        }
    }
    ctx->pc = 0x44916Cu;
label_44916c:
    // 0x44916c: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x44916cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_449170:
    // 0x449170: 0x10800054  beqz        $a0, . + 4 + (0x54 << 2)
label_449174:
    if (ctx->pc == 0x449174u) {
        ctx->pc = 0x449174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449170u;
        // 0x449174: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449178u;
        goto label_449178;
    }
    ctx->pc = 0x449170u;
    {
        const bool branch_taken_0x449170 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x449174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449170u;
        // 0x449174: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449170) {
            ctx->pc = 0x4492C4u;
            goto label_4492c4;
        }
    }
    ctx->pc = 0x449178u;
label_449178:
    // 0x449178: 0x12800052  beqz        $s4, . + 4 + (0x52 << 2)
label_44917c:
    if (ctx->pc == 0x44917Cu) {
        ctx->pc = 0x44917Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449178u;
        // 0x44917c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449180u;
        goto label_449180;
    }
    ctx->pc = 0x449178u;
    {
        const bool branch_taken_0x449178 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x44917Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449178u;
        // 0x44917c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449178) {
            ctx->pc = 0x4492C4u;
            goto label_4492c4;
        }
    }
    ctx->pc = 0x449180u;
label_449180:
    // 0x449180: 0x8c97002c  lw          $s7, 0x2C($a0)
    ctx->pc = 0x449180u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_449184:
    // 0x449184: 0x1ae0004f  blez        $s7, . + 4 + (0x4F << 2)
label_449188:
    if (ctx->pc == 0x449188u) {
        ctx->pc = 0x449188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449184u;
        // 0x449188: 0x8c910030  lw          $s1, 0x30($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44918Cu;
        goto label_44918c;
    }
    ctx->pc = 0x449184u;
    {
        const bool branch_taken_0x449184 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x449188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449184u;
        // 0x449188: 0x8c910030  lw          $s1, 0x30($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449184) {
            ctx->pc = 0x4492C4u;
            goto label_4492c4;
        }
    }
    ctx->pc = 0x44918Cu;
label_44918c:
    // 0x44918c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x44918cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_449190:
    // 0x449190: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x449190u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_449194:
    // 0x449194: 0x2456e880  addiu       $s6, $v0, -0x1780
    ctx->pc = 0x449194u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_449198:
    // 0x449198: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x449198u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_44919c:
    // 0x44919c: 0x1ae00019  blez        $s7, . + 4 + (0x19 << 2)
label_4491a0:
    if (ctx->pc == 0x4491A0u) {
        ctx->pc = 0x4491A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44919Cu;
        // 0x4491a0: 0x32e30003  andi        $v1, $s7, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4491A4u;
        goto label_4491a4;
    }
    ctx->pc = 0x44919Cu;
    {
        const bool branch_taken_0x44919c = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x4491A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44919Cu;
        // 0x4491a0: 0x32e30003  andi        $v1, $s7, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44919c) {
            ctx->pc = 0x449204u;
            goto label_449204;
        }
    }
    ctx->pc = 0x4491A4u;
label_4491a4:
    // 0x4491a4: 0x50600023  beql        $v1, $zero, . + 4 + (0x23 << 2)
label_4491a8:
    if (ctx->pc == 0x4491A8u) {
        ctx->pc = 0x4491A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4491A4u;
        // 0x4491a8: 0x8ec200e8  lw          $v0, 0xE8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 232)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4491ACu;
        goto label_4491ac;
    }
    ctx->pc = 0x4491A4u;
    {
        const bool branch_taken_0x4491a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4491a4) {
            ctx->pc = 0x4491A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4491A4u;
            // 0x4491a8: 0x8ec200e8  lw          $v0, 0xE8($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 232)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x449234u;
            goto label_449234;
        }
    }
    ctx->pc = 0x4491ACu;
label_4491ac:
    // 0x4491ac: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x4491acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_4491b0:
    // 0x4491b0: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
label_4491b4:
    if (ctx->pc == 0x4491B4u) {
        ctx->pc = 0x4491B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4491B0u;
        // 0x4491b4: 0x8ec200e8  lw          $v0, 0xE8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 232)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4491B8u;
        goto label_4491b8;
    }
    ctx->pc = 0x4491B0u;
    {
        const bool branch_taken_0x4491b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4491b0) {
            ctx->pc = 0x4491B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4491B0u;
            // 0x4491b4: 0x8ec200e8  lw          $v0, 0xE8($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 232)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x449208u;
            goto label_449208;
        }
    }
    ctx->pc = 0x4491B8u;
label_4491b8:
    // 0x4491b8: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x4491b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_4491bc:
    // 0x4491bc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_4491c0:
    if (ctx->pc == 0x4491C0u) {
        ctx->pc = 0x4491C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4491BCu;
        // 0x4491c0: 0x8ec200e8  lw          $v0, 0xE8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 232)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4491C4u;
        goto label_4491c4;
    }
    ctx->pc = 0x4491BCu;
    {
        const bool branch_taken_0x4491bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4491C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4491BCu;
        // 0x4491c0: 0x8ec200e8  lw          $v0, 0xE8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 232)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4491bc) {
            ctx->pc = 0x4491E8u;
            goto label_4491e8;
        }
    }
    ctx->pc = 0x4491C4u;
label_4491c4:
    // 0x4491c4: 0x40f809  jalr        $v0
label_4491c8:
    if (ctx->pc == 0x4491C8u) {
        ctx->pc = 0x4491C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4491C4u;
        // 0x4491c8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4491CCu;
        goto label_4491cc;
    }
    ctx->pc = 0x4491C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4491CCu);
        ctx->pc = 0x4491C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4491C4u;
        // 0x4491c8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4491C4u, 0x4491CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4491CCu;
label_4491cc:
    // 0x4491cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_4491d0:
    if (ctx->pc == 0x4491D0u) {
        ctx->pc = 0x4491D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4491CCu;
        // 0x4491d0: 0x2630000c  addiu       $s0, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4491D4u;
        goto label_4491d4;
    }
    ctx->pc = 0x4491CCu;
    {
        const bool branch_taken_0x4491cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4491D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4491CCu;
        // 0x4491d0: 0x2630000c  addiu       $s0, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4491cc) {
            ctx->pc = 0x4491DCu;
            goto label_4491dc;
        }
    }
    ctx->pc = 0x4491D4u;
label_4491d4:
    // 0x4491d4: 0x1000003b  b           . + 4 + (0x3B << 2)
label_4491d8:
    if (ctx->pc == 0x4491D8u) {
        ctx->pc = 0x4491D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4491D4u;
        // 0x4491d8: 0x8ea20008  lw          $v0, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4491DCu;
        goto label_4491dc;
    }
    ctx->pc = 0x4491D4u;
    {
        const bool branch_taken_0x4491d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4491D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4491D4u;
        // 0x4491d8: 0x8ea20008  lw          $v0, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4491d4) {
            ctx->pc = 0x4492C4u;
            goto label_4492c4;
        }
    }
    ctx->pc = 0x4491DCu;
label_4491dc:
    // 0x4491dc: 0x24130004  addiu       $s3, $zero, 0x4
    ctx->pc = 0x4491dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4491e0:
    // 0x4491e0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x4491e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4491e4:
    // 0x4491e4: 0x8ec200e8  lw          $v0, 0xE8($s6)
    ctx->pc = 0x4491e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 232)));
label_4491e8:
    // 0x4491e8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4491e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4491ec:
    // 0x4491ec: 0x40f809  jalr        $v0
label_4491f0:
    if (ctx->pc == 0x4491F0u) {
        ctx->pc = 0x4491F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4491ECu;
        // 0x4491f0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4491F4u;
        goto label_4491f4;
    }
    ctx->pc = 0x4491ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4491F4u);
        ctx->pc = 0x4491F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4491ECu;
        // 0x4491f0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4491ECu, 0x4491F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4491F4u;
label_4491f4:
    // 0x4491f4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_4491f8:
    if (ctx->pc == 0x4491F8u) {
        ctx->pc = 0x4491F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4491F4u;
        // 0x4491f8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4491FCu;
        goto label_4491fc;
    }
    ctx->pc = 0x4491F4u;
    {
        const bool branch_taken_0x4491f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4491F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4491F4u;
        // 0x4491f8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4491f4) {
            ctx->pc = 0x449248u;
            goto label_449248;
        }
    }
    ctx->pc = 0x4491FCu;
label_4491fc:
    // 0x4491fc: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x4491fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_449200:
    // 0x449200: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x449200u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_449204:
    // 0x449204: 0x8ec200e8  lw          $v0, 0xE8($s6)
    ctx->pc = 0x449204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 232)));
label_449208:
    // 0x449208: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x449208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_44920c:
    // 0x44920c: 0x40f809  jalr        $v0
label_449210:
    if (ctx->pc == 0x449210u) {
        ctx->pc = 0x449210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44920Cu;
        // 0x449210: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449214u;
        goto label_449214;
    }
    ctx->pc = 0x44920Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x449214u);
        ctx->pc = 0x449210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44920Cu;
        // 0x449210: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44920Cu, 0x449214u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x449214u;
label_449214:
    // 0x449214: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_449218:
    if (ctx->pc == 0x449218u) {
        ctx->pc = 0x449218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449214u;
        // 0x449218: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44921Cu;
        goto label_44921c;
    }
    ctx->pc = 0x449214u;
    {
        const bool branch_taken_0x449214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x449218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449214u;
        // 0x449218: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449214) {
            ctx->pc = 0x449248u;
            goto label_449248;
        }
    }
    ctx->pc = 0x44921Cu;
label_44921c:
    // 0x44921c: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x44921cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_449220:
    // 0x449220: 0x257102a  slt         $v0, $s2, $s7
    ctx->pc = 0x449220u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_449224:
    // 0x449224: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_449228:
    if (ctx->pc == 0x449228u) {
        ctx->pc = 0x449228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449224u;
        // 0x449228: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44922Cu;
        goto label_44922c;
    }
    ctx->pc = 0x449224u;
    {
        const bool branch_taken_0x449224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x449228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449224u;
        // 0x449228: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449224) {
            ctx->pc = 0x4492C0u;
            goto label_4492c0;
        }
    }
    ctx->pc = 0x44922Cu;
label_44922c:
    // 0x44922c: 0x0  nop
    ctx->pc = 0x44922cu;
    // NOP
label_449230:
    // 0x449230: 0x8ec200e8  lw          $v0, 0xE8($s6)
    ctx->pc = 0x449230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 232)));
label_449234:
    // 0x449234: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x449234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_449238:
    // 0x449238: 0x40f809  jalr        $v0
label_44923c:
    if (ctx->pc == 0x44923Cu) {
        ctx->pc = 0x44923Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449238u;
        // 0x44923c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449240u;
        goto label_449240;
    }
    ctx->pc = 0x449238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x449240u);
        ctx->pc = 0x44923Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449238u;
        // 0x44923c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x449238u, 0x449240u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x449240u;
label_449240:
    // 0x449240: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_449244:
    if (ctx->pc == 0x449244u) {
        ctx->pc = 0x449244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449240u;
        // 0x449244: 0x8ec200e8  lw          $v0, 0xE8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 232)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449248u;
        goto label_449248;
    }
    ctx->pc = 0x449240u;
    {
        const bool branch_taken_0x449240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x449240) {
            ctx->pc = 0x449244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x449240u;
            // 0x449244: 0x8ec200e8  lw          $v0, 0xE8($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 232)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x449254u;
            goto label_449254;
        }
    }
    ctx->pc = 0x449248u;
label_449248:
    // 0x449248: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x449248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_44924c:
    // 0x44924c: 0x1000001d  b           . + 4 + (0x1D << 2)
label_449250:
    if (ctx->pc == 0x449250u) {
        ctx->pc = 0x449250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44924Cu;
        // 0x449250: 0x531021  addu        $v0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449254u;
        goto label_449254;
    }
    ctx->pc = 0x44924Cu;
    {
        const bool branch_taken_0x44924c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x449250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44924Cu;
        // 0x449250: 0x531021  addu        $v0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44924c) {
            ctx->pc = 0x4492C4u;
            goto label_4492c4;
        }
    }
    ctx->pc = 0x449254u;
label_449254:
    // 0x449254: 0x26710004  addiu       $s1, $s3, 0x4
    ctx->pc = 0x449254u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_449258:
    // 0x449258: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x449258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_44925c:
    // 0x44925c: 0x40f809  jalr        $v0
label_449260:
    if (ctx->pc == 0x449260u) {
        ctx->pc = 0x449260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44925Cu;
        // 0x449260: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449264u;
        goto label_449264;
    }
    ctx->pc = 0x44925Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x449264u);
        ctx->pc = 0x449260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44925Cu;
        // 0x449260: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44925Cu, 0x449264u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x449264u;
label_449264:
    // 0x449264: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_449268:
    if (ctx->pc == 0x449268u) {
        ctx->pc = 0x449268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449264u;
        // 0x449268: 0x8ea20008  lw          $v0, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44926Cu;
        goto label_44926c;
    }
    ctx->pc = 0x449264u;
    {
        const bool branch_taken_0x449264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x449264) {
            ctx->pc = 0x449268u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x449264u;
            // 0x449268: 0x8ea20008  lw          $v0, 0x8($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4492A8u;
            goto label_4492a8;
        }
    }
    ctx->pc = 0x44926Cu;
label_44926c:
    // 0x44926c: 0x8ec200e8  lw          $v0, 0xE8($s6)
    ctx->pc = 0x44926cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 232)));
label_449270:
    // 0x449270: 0x26710008  addiu       $s1, $s3, 0x8
    ctx->pc = 0x449270u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_449274:
    // 0x449274: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x449274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_449278:
    // 0x449278: 0x40f809  jalr        $v0
label_44927c:
    if (ctx->pc == 0x44927Cu) {
        ctx->pc = 0x44927Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449278u;
        // 0x44927c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449280u;
        goto label_449280;
    }
    ctx->pc = 0x449278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x449280u);
        ctx->pc = 0x44927Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449278u;
        // 0x44927c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x449278u, 0x449280u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x449280u;
label_449280:
    // 0x449280: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_449284:
    if (ctx->pc == 0x449284u) {
        ctx->pc = 0x449284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449280u;
        // 0x449284: 0x8ea20008  lw          $v0, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449288u;
        goto label_449288;
    }
    ctx->pc = 0x449280u;
    {
        const bool branch_taken_0x449280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x449280) {
            ctx->pc = 0x449284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x449280u;
            // 0x449284: 0x8ea20008  lw          $v0, 0x8($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4492A8u;
            goto label_4492a8;
        }
    }
    ctx->pc = 0x449288u;
label_449288:
    // 0x449288: 0x8ec200e8  lw          $v0, 0xE8($s6)
    ctx->pc = 0x449288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 232)));
label_44928c:
    // 0x44928c: 0x2671000c  addiu       $s1, $s3, 0xC
    ctx->pc = 0x44928cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
label_449290:
    // 0x449290: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x449290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_449294:
    // 0x449294: 0x40f809  jalr        $v0
label_449298:
    if (ctx->pc == 0x449298u) {
        ctx->pc = 0x449298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449294u;
        // 0x449298: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44929Cu;
        goto label_44929c;
    }
    ctx->pc = 0x449294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x44929Cu);
        ctx->pc = 0x449298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449294u;
        // 0x449298: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x449294u, 0x44929Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44929Cu;
label_44929c:
    // 0x44929c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_4492a0:
    if (ctx->pc == 0x4492A0u) {
        ctx->pc = 0x4492A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44929Cu;
        // 0x4492a0: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4492A4u;
        goto label_4492a4;
    }
    ctx->pc = 0x44929Cu;
    {
        const bool branch_taken_0x44929c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4492A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44929Cu;
        // 0x4492a0: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44929c) {
            ctx->pc = 0x4492B0u;
            goto label_4492b0;
        }
    }
    ctx->pc = 0x4492A4u;
label_4492a4:
    // 0x4492a4: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x4492a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_4492a8:
    // 0x4492a8: 0x10000006  b           . + 4 + (0x6 << 2)
label_4492ac:
    if (ctx->pc == 0x4492ACu) {
        ctx->pc = 0x4492ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4492A8u;
        // 0x4492ac: 0x511021  addu        $v0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4492B0u;
        goto label_4492b0;
    }
    ctx->pc = 0x4492A8u;
    {
        const bool branch_taken_0x4492a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4492ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4492A8u;
        // 0x4492ac: 0x511021  addu        $v0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4492a8) {
            ctx->pc = 0x4492C4u;
            goto label_4492c4;
        }
    }
    ctx->pc = 0x4492B0u;
label_4492b0:
    // 0x4492b0: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x4492b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_4492b4:
    // 0x4492b4: 0x257102a  slt         $v0, $s2, $s7
    ctx->pc = 0x4492b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_4492b8:
    // 0x4492b8: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
label_4492bc:
    if (ctx->pc == 0x4492BCu) {
        ctx->pc = 0x4492BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4492B8u;
        // 0x4492bc: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4492C0u;
        goto label_4492c0;
    }
    ctx->pc = 0x4492B8u;
    {
        const bool branch_taken_0x4492b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4492BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4492B8u;
        // 0x4492bc: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4492b8) {
            ctx->pc = 0x449230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_449230;
        }
    }
    ctx->pc = 0x4492C0u;
label_4492c0:
    // 0x4492c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4492c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4492c4:
    // 0x4492c4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x4492c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4492c8:
    // 0x4492c8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x4492c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4492cc:
    // 0x4492cc: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x4492ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4492d0:
    // 0x4492d0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x4492d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4492d4:
    // 0x4492d4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4492d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4492d8:
    // 0x4492d8: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x4492d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4492dc:
    // 0x4492dc: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x4492dcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4492e0:
    // 0x4492e0: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x4492e0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4492e4:
    // 0x4492e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4492e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4492e8:
    // 0x4492e8: 0x3e00008  jr          $ra
label_4492ec:
    if (ctx->pc == 0x4492ECu) {
        ctx->pc = 0x4492ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4492E8u;
        // 0x4492ec: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4492F0u;
        goto label_4492f0;
    }
    ctx->pc = 0x4492E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4492ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4492E8u;
        // 0x4492ec: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4492E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4492F0u;
label_4492f0:
    // 0x4492f0: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_4492f4:
    if (ctx->pc == 0x4492F4u) {
        ctx->pc = 0x4492F8u;
        goto label_4492f8;
    }
    ctx->pc = 0x4492F0u;
    {
        const bool branch_taken_0x4492f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4492f0) {
            ctx->pc = 0x449320u;
            goto label_449320;
        }
    }
    ctx->pc = 0x4492F8u;
label_4492f8:
    // 0x4492f8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4492f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4492fc:
    // 0x4492fc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_449300:
    if (ctx->pc == 0x449300u) {
        ctx->pc = 0x449304u;
        goto label_449304;
    }
    ctx->pc = 0x4492FCu;
    {
        const bool branch_taken_0x4492fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4492fc) {
            ctx->pc = 0x449320u;
            goto label_449320;
        }
    }
    ctx->pc = 0x449304u;
label_449304:
    // 0x449304: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x449304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_449308:
    // 0x449308: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x449308u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_44930c:
    // 0x44930c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_449310:
    if (ctx->pc == 0x449310u) {
        ctx->pc = 0x449310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44930Cu;
        // 0x449310: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449314u;
        goto label_449314;
    }
    ctx->pc = 0x44930Cu;
    {
        const bool branch_taken_0x44930c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x449310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44930Cu;
        // 0x449310: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44930c) {
            ctx->pc = 0x449320u;
            goto label_449320;
        }
    }
    ctx->pc = 0x449314u;
label_449314:
    // 0x449314: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x449314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_449318:
    // 0x449318: 0x3e00008  jr          $ra
label_44931c:
    if (ctx->pc == 0x44931Cu) {
        ctx->pc = 0x44931Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449318u;
        // 0x44931c: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449320u;
        goto label_449320;
    }
    ctx->pc = 0x449318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44931Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449318u;
        // 0x44931c: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x449318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x449320u;
label_449320:
    // 0x449320: 0x3e00008  jr          $ra
label_449324:
    if (ctx->pc == 0x449324u) {
        ctx->pc = 0x449324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449320u;
        // 0x449324: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449328u;
        goto label_449328;
    }
    ctx->pc = 0x449320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x449324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449320u;
        // 0x449324: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x449320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x449328u;
label_449328:
    // 0x449328: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x449328u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_44932c:
    // 0x44932c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_449330:
    if (ctx->pc == 0x449330u) {
        ctx->pc = 0x449330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44932Cu;
        // 0x449330: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449334u;
        goto label_449334;
    }
    ctx->pc = 0x44932Cu;
    {
        const bool branch_taken_0x44932c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44932c) {
            ctx->pc = 0x449330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44932Cu;
            // 0x449330: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x449340u;
            goto label_449340;
        }
    }
    ctx->pc = 0x449334u;
label_449334:
    // 0x449334: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x449334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_449338:
    // 0x449338: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_44933c:
    if (ctx->pc == 0x44933Cu) {
        ctx->pc = 0x44933Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449338u;
        // 0x44933c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449340u;
        goto label_449340;
    }
    ctx->pc = 0x449338u;
    {
        const bool branch_taken_0x449338 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x449338) {
            ctx->pc = 0x44933Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x449338u;
            // 0x44933c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x449340u;
            goto label_449340;
        }
    }
    ctx->pc = 0x449340u;
label_449340:
    // 0x449340: 0x3e00008  jr          $ra
label_449344:
    if (ctx->pc == 0x449344u) {
        ctx->pc = 0x449348u;
        goto label_449348;
    }
    ctx->pc = 0x449340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x449340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x449348u;
label_449348:
    // 0x449348: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x449348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_44934c:
    // 0x44934c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x44934cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_449350:
    // 0x449350: 0x10800020  beqz        $a0, . + 4 + (0x20 << 2)
label_449354:
    if (ctx->pc == 0x449354u) {
        ctx->pc = 0x449354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449350u;
        // 0x449354: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449358u;
        goto label_449358;
    }
    ctx->pc = 0x449350u;
    {
        const bool branch_taken_0x449350 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x449354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449350u;
        // 0x449354: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449350) {
            ctx->pc = 0x4493D4u;
            goto label_4493d4;
        }
    }
    ctx->pc = 0x449358u;
label_449358:
    // 0x449358: 0x10a0001b  beqz        $a1, . + 4 + (0x1B << 2)
label_44935c:
    if (ctx->pc == 0x44935Cu) {
        ctx->pc = 0x44935Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449358u;
        // 0x44935c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449360u;
        goto label_449360;
    }
    ctx->pc = 0x449358u;
    {
        const bool branch_taken_0x449358 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x44935Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449358u;
        // 0x44935c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449358) {
            ctx->pc = 0x4493C8u;
            goto label_4493c8;
        }
    }
    ctx->pc = 0x449360u;
label_449360:
    // 0x449360: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x449360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_449364:
    // 0x449364: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x449364u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_449368:
    // 0x449368: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x449368u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_44936c:
    // 0x44936c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x44936cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_449370:
    // 0x449370: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_449374:
    if (ctx->pc == 0x449374u) {
        ctx->pc = 0x449374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449370u;
        // 0x449374: 0x24680020  addiu       $t0, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449378u;
        goto label_449378;
    }
    ctx->pc = 0x449370u;
    {
        const bool branch_taken_0x449370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x449374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449370u;
        // 0x449374: 0x24680020  addiu       $t0, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449370) {
            ctx->pc = 0x4493BCu;
            goto label_4493bc;
        }
    }
    ctx->pc = 0x449378u;
label_449378:
    // 0x449378: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x449378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_44937c:
    // 0x44937c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x44937cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_449380:
    // 0x449380: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
label_449384:
    if (ctx->pc == 0x449384u) {
        ctx->pc = 0x449384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449380u;
        // 0x449384: 0x60502d  daddu       $t2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449388u;
        goto label_449388;
    }
    ctx->pc = 0x449380u;
    {
        const bool branch_taken_0x449380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x449384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449380u;
        // 0x449384: 0x60502d  daddu       $t2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449380) {
            ctx->pc = 0x449390u;
            goto label_449390;
        }
    }
    ctx->pc = 0x449388u;
label_449388:
    // 0x449388: 0x1000000c  b           . + 4 + (0xC << 2)
label_44938c:
    if (ctx->pc == 0x44938Cu) {
        ctx->pc = 0x44938Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449388u;
        // 0x44938c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449390u;
        goto label_449390;
    }
    ctx->pc = 0x449388u;
    {
        const bool branch_taken_0x449388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44938Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449388u;
        // 0x44938c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449388) {
            ctx->pc = 0x4493BCu;
            goto label_4493bc;
        }
    }
    ctx->pc = 0x449390u;
label_449390:
    // 0x449390: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x449390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_449394:
    // 0x449394: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x449394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_449398:
    // 0x449398: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x449398u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_44939c:
    // 0x44939c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_4493a0:
    if (ctx->pc == 0x4493A0u) {
        ctx->pc = 0x4493A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44939Cu;
        // 0x4493a0: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4493A4u;
        goto label_4493a4;
    }
    ctx->pc = 0x44939Cu;
    {
        const bool branch_taken_0x44939c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4493A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44939Cu;
        // 0x4493a0: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44939c) {
            ctx->pc = 0x4493BCu;
            goto label_4493bc;
        }
    }
    ctx->pc = 0x4493A4u;
label_4493a4:
    // 0x4493a4: 0xc21818  mult        $v1, $a2, $v0
    ctx->pc = 0x4493a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_4493a8:
    // 0x4493a8: 0x6a1021  addu        $v0, $v1, $t2
    ctx->pc = 0x4493a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_4493ac:
    // 0x4493ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4493acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4493b0:
    // 0x4493b0: 0x5465fff8  bnel        $v1, $a1, . + 4 + (-0x8 << 2)
label_4493b4:
    if (ctx->pc == 0x4493B4u) {
        ctx->pc = 0x4493B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4493B0u;
        // 0x4493b4: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4493B8u;
        goto label_4493b8;
    }
    ctx->pc = 0x4493B0u;
    {
        const bool branch_taken_0x4493b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x4493b0) {
            ctx->pc = 0x4493B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4493B0u;
            // 0x4493b4: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x449394u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_449394;
        }
    }
    ctx->pc = 0x4493B8u;
label_4493b8:
    // 0x4493b8: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x4493b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4493bc:
    // 0x4493bc: 0x71027  nor         $v0, $zero, $a3
    ctx->pc = 0x4493bcu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 7)));
label_4493c0:
    // 0x4493c0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_4493c4:
    if (ctx->pc == 0x4493C4u) {
        ctx->pc = 0x4493C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4493C0u;
        // 0x4493c4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4493C8u;
        goto label_4493c8;
    }
    ctx->pc = 0x4493C0u;
    {
        const bool branch_taken_0x4493c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4493C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4493C0u;
        // 0x4493c4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4493c0) {
            ctx->pc = 0x4493D8u;
            goto label_4493d8;
        }
    }
    ctx->pc = 0x4493C8u;
label_4493c8:
    // 0x4493c8: 0xc111a64  jal         func_446990
label_4493cc:
    if (ctx->pc == 0x4493CCu) {
        ctx->pc = 0x4493D0u;
        goto label_4493d0;
    }
    ctx->pc = 0x4493C8u;
    SET_GPR_U32(ctx, 31, 0x4493D0u);
    ctx->pc = 0x446990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x446990u, 0x4493C8u, 0x4493D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4493D0u;
label_4493d0:
    // 0x4493d0: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x4493d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4493d4:
    // 0x4493d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4493d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4493d8:
    // 0x4493d8: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x4493d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_4493dc:
    // 0x4493dc: 0x3e00008  jr          $ra
label_4493e0:
    if (ctx->pc == 0x4493E0u) {
        ctx->pc = 0x4493E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4493DCu;
        // 0x4493e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4493E4u;
        goto label_4493e4;
    }
    ctx->pc = 0x4493DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4493E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4493DCu;
        // 0x4493e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4493DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4493E4u;
label_4493e4:
    // 0x4493e4: 0x0  nop
    ctx->pc = 0x4493e4u;
    // NOP
label_4493e8:
    // 0x4493e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4493e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4493ec:
    // 0x4493ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4493ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4493f0:
    // 0x4493f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4493f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4493f4:
    // 0x4493f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4493f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4493f8:
    // 0x4493f8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x4493f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4493fc:
    // 0x4493fc: 0x12000044  beqz        $s0, . + 4 + (0x44 << 2)
label_449400:
    if (ctx->pc == 0x449400u) {
        ctx->pc = 0x449400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4493FCu;
        // 0x449400: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449404u;
        goto label_449404;
    }
    ctx->pc = 0x4493FCu;
    {
        const bool branch_taken_0x4493fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x449400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4493FCu;
        // 0x449400: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4493fc) {
            ctx->pc = 0x449510u;
            goto label_449510;
        }
    }
    ctx->pc = 0x449404u;
label_449404:
    // 0x449404: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x449404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_449408:
    // 0x449408: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
label_44940c:
    if (ctx->pc == 0x44940Cu) {
        ctx->pc = 0x44940Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449408u;
        // 0x44940c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449410u;
        goto label_449410;
    }
    ctx->pc = 0x449408u;
    {
        const bool branch_taken_0x449408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44940Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449408u;
        // 0x44940c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449408) {
            ctx->pc = 0x449514u;
            goto label_449514;
        }
    }
    ctx->pc = 0x449410u;
label_449410:
    // 0x449410: 0x50800041  beql        $a0, $zero, . + 4 + (0x41 << 2)
label_449414:
    if (ctx->pc == 0x449414u) {
        ctx->pc = 0x449414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449410u;
        // 0x449414: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449418u;
        goto label_449418;
    }
    ctx->pc = 0x449410u;
    {
        const bool branch_taken_0x449410 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x449410) {
            ctx->pc = 0x449414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x449410u;
            // 0x449414: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x449518u;
            goto label_449518;
        }
    }
    ctx->pc = 0x449418u;
label_449418:
    // 0x449418: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x449418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44941c:
    // 0x44941c: 0x5040003d  beql        $v0, $zero, . + 4 + (0x3D << 2)
label_449420:
    if (ctx->pc == 0x449420u) {
        ctx->pc = 0x449420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44941Cu;
        // 0x449420: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449424u;
        goto label_449424;
    }
    ctx->pc = 0x44941Cu;
    {
        const bool branch_taken_0x44941c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44941c) {
            ctx->pc = 0x449420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44941Cu;
            // 0x449420: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x449514u;
            goto label_449514;
        }
    }
    ctx->pc = 0x449424u;
label_449424:
    // 0x449424: 0x10a0003a  beqz        $a1, . + 4 + (0x3A << 2)
label_449428:
    if (ctx->pc == 0x449428u) {
        ctx->pc = 0x449428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449424u;
        // 0x449428: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44942Cu;
        goto label_44942c;
    }
    ctx->pc = 0x449424u;
    {
        const bool branch_taken_0x449424 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x449428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449424u;
        // 0x449428: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449424) {
            ctx->pc = 0x449510u;
            goto label_449510;
        }
    }
    ctx->pc = 0x44942Cu;
label_44942c:
    // 0x44942c: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x44942cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_449430:
    // 0x449430: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
label_449434:
    if (ctx->pc == 0x449434u) {
        ctx->pc = 0x449434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449430u;
        // 0x449434: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449438u;
        goto label_449438;
    }
    ctx->pc = 0x449430u;
    {
        const bool branch_taken_0x449430 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x449434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449430u;
        // 0x449434: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449430) {
            ctx->pc = 0x4494E4u;
            goto label_4494e4;
        }
    }
    ctx->pc = 0x449438u;
label_449438:
    // 0x449438: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x449438u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_44943c:
    // 0x44943c: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x44943cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_449440:
    // 0x449440: 0x31270003  andi        $a3, $t1, 0x3
    ctx->pc = 0x449440u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
label_449444:
    // 0x449444: 0x19200011  blez        $t1, . + 4 + (0x11 << 2)
label_449448:
    if (ctx->pc == 0x449448u) {
        ctx->pc = 0x449448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449444u;
        // 0x449448: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44944Cu;
        goto label_44944c;
    }
    ctx->pc = 0x449444u;
    {
        const bool branch_taken_0x449444 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x449448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449444u;
        // 0x449448: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449444) {
            ctx->pc = 0x44948Cu;
            goto label_44948c;
        }
    }
    ctx->pc = 0x44944Cu;
label_44944c:
    // 0x44944c: 0x50e00017  beql        $a3, $zero, . + 4 + (0x17 << 2)
label_449450:
    if (ctx->pc == 0x449450u) {
        ctx->pc = 0x449450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44944Cu;
        // 0x449450: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449454u;
        goto label_449454;
    }
    ctx->pc = 0x44944Cu;
    {
        const bool branch_taken_0x44944c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x44944c) {
            ctx->pc = 0x449450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44944Cu;
            // 0x449450: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4494ACu;
            goto label_4494ac;
        }
    }
    ctx->pc = 0x449454u;
label_449454:
    // 0x449454: 0x28e20002  slti        $v0, $a3, 0x2
    ctx->pc = 0x449454u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
label_449458:
    // 0x449458: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_44945c:
    if (ctx->pc == 0x44945Cu) {
        ctx->pc = 0x44945Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449458u;
        // 0x44945c: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449460u;
        goto label_449460;
    }
    ctx->pc = 0x449458u;
    {
        const bool branch_taken_0x449458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x449458) {
            ctx->pc = 0x44945Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x449458u;
            // 0x44945c: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x449490u;
            goto label_449490;
        }
    }
    ctx->pc = 0x449460u;
label_449460:
    // 0x449460: 0x28e20003  slti        $v0, $a3, 0x3
    ctx->pc = 0x449460u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
label_449464:
    // 0x449464: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_449468:
    if (ctx->pc == 0x449468u) {
        ctx->pc = 0x449468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449464u;
        // 0x449468: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44946Cu;
        goto label_44946c;
    }
    ctx->pc = 0x449464u;
    {
        const bool branch_taken_0x449464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x449464) {
            ctx->pc = 0x449468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x449464u;
            // 0x449468: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x449480u;
            goto label_449480;
        }
    }
    ctx->pc = 0x44946Cu;
label_44946c:
    // 0x44946c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x44946cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_449470:
    // 0x449470: 0x10450027  beq         $v0, $a1, . + 4 + (0x27 << 2)
label_449474:
    if (ctx->pc == 0x449474u) {
        ctx->pc = 0x449474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449470u;
        // 0x449474: 0x24c3000c  addiu       $v1, $a2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449478u;
        goto label_449478;
    }
    ctx->pc = 0x449470u;
    {
        const bool branch_taken_0x449470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x449474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449470u;
        // 0x449474: 0x24c3000c  addiu       $v1, $a2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449470) {
            ctx->pc = 0x449510u;
            goto label_449510;
        }
    }
    ctx->pc = 0x449478u;
label_449478:
    // 0x449478: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x449478u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44947c:
    // 0x44947c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x44947cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_449480:
    // 0x449480: 0x10450023  beq         $v0, $a1, . + 4 + (0x23 << 2)
label_449484:
    if (ctx->pc == 0x449484u) {
        ctx->pc = 0x449484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449480u;
        // 0x449484: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449488u;
        goto label_449488;
    }
    ctx->pc = 0x449480u;
    {
        const bool branch_taken_0x449480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x449484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449480u;
        // 0x449484: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449480) {
            ctx->pc = 0x449510u;
            goto label_449510;
        }
    }
    ctx->pc = 0x449488u;
label_449488:
    // 0x449488: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x449488u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_44948c:
    // 0x44948c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x44948cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_449490:
    // 0x449490: 0x1045001f  beq         $v0, $a1, . + 4 + (0x1F << 2)
label_449494:
    if (ctx->pc == 0x449494u) {
        ctx->pc = 0x449494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449490u;
        // 0x449494: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449498u;
        goto label_449498;
    }
    ctx->pc = 0x449490u;
    {
        const bool branch_taken_0x449490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x449494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449490u;
        // 0x449494: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449490) {
            ctx->pc = 0x449510u;
            goto label_449510;
        }
    }
    ctx->pc = 0x449498u;
label_449498:
    // 0x449498: 0x109102b  sltu        $v0, $t0, $t1
    ctx->pc = 0x449498u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_44949c:
    // 0x44949c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_4494a0:
    if (ctx->pc == 0x4494A0u) {
        ctx->pc = 0x4494A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44949Cu;
        // 0x4494a0: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4494A4u;
        goto label_4494a4;
    }
    ctx->pc = 0x44949Cu;
    {
        const bool branch_taken_0x44949c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4494A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44949Cu;
        // 0x4494a0: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44949c) {
            ctx->pc = 0x4494E4u;
            goto label_4494e4;
        }
    }
    ctx->pc = 0x4494A4u;
label_4494a4:
    // 0x4494a4: 0x0  nop
    ctx->pc = 0x4494a4u;
    // NOP
label_4494a8:
    // 0x4494a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4494a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4494ac:
    // 0x4494ac: 0x10450019  beq         $v0, $a1, . + 4 + (0x19 << 2)
label_4494b0:
    if (ctx->pc == 0x4494B0u) {
        ctx->pc = 0x4494B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4494ACu;
        // 0x4494b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4494B4u;
        goto label_4494b4;
    }
    ctx->pc = 0x4494ACu;
    {
        const bool branch_taken_0x4494ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x4494B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4494ACu;
        // 0x4494b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4494ac) {
            ctx->pc = 0x449514u;
            goto label_449514;
        }
    }
    ctx->pc = 0x4494B4u;
label_4494b4:
    // 0x4494b4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4494b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4494b8:
    // 0x4494b8: 0x10450016  beq         $v0, $a1, . + 4 + (0x16 << 2)
label_4494bc:
    if (ctx->pc == 0x4494BCu) {
        ctx->pc = 0x4494BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4494B8u;
        // 0x4494bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4494C0u;
        goto label_4494c0;
    }
    ctx->pc = 0x4494B8u;
    {
        const bool branch_taken_0x4494b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x4494BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4494B8u;
        // 0x4494bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4494b8) {
            ctx->pc = 0x449514u;
            goto label_449514;
        }
    }
    ctx->pc = 0x4494C0u;
label_4494c0:
    // 0x4494c0: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x4494c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_4494c4:
    // 0x4494c4: 0x10450013  beq         $v0, $a1, . + 4 + (0x13 << 2)
label_4494c8:
    if (ctx->pc == 0x4494C8u) {
        ctx->pc = 0x4494C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4494C4u;
        // 0x4494c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4494CCu;
        goto label_4494cc;
    }
    ctx->pc = 0x4494C4u;
    {
        const bool branch_taken_0x4494c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x4494C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4494C4u;
        // 0x4494c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4494c4) {
            ctx->pc = 0x449514u;
            goto label_449514;
        }
    }
    ctx->pc = 0x4494CCu;
label_4494cc:
    // 0x4494cc: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x4494ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_4494d0:
    // 0x4494d0: 0x1045000f  beq         $v0, $a1, . + 4 + (0xF << 2)
label_4494d4:
    if (ctx->pc == 0x4494D4u) {
        ctx->pc = 0x4494D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4494D0u;
        // 0x4494d4: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4494D8u;
        goto label_4494d8;
    }
    ctx->pc = 0x4494D0u;
    {
        const bool branch_taken_0x4494d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x4494D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4494D0u;
        // 0x4494d4: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4494d0) {
            ctx->pc = 0x449510u;
            goto label_449510;
        }
    }
    ctx->pc = 0x4494D8u;
label_4494d8:
    // 0x4494d8: 0x109102b  sltu        $v0, $t0, $t1
    ctx->pc = 0x4494d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_4494dc:
    // 0x4494dc: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_4494e0:
    if (ctx->pc == 0x4494E0u) {
        ctx->pc = 0x4494E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4494DCu;
        // 0x4494e0: 0x24630030  addiu       $v1, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4494E4u;
        goto label_4494e4;
    }
    ctx->pc = 0x4494DCu;
    {
        const bool branch_taken_0x4494dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4494E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4494DCu;
        // 0x4494e0: 0x24630030  addiu       $v1, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4494dc) {
            ctx->pc = 0x4494A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4494a8;
        }
    }
    ctx->pc = 0x4494E4u;
label_4494e4:
    // 0x4494e4: 0xc111a64  jal         func_446990
label_4494e8:
    if (ctx->pc == 0x4494E8u) {
        ctx->pc = 0x4494ECu;
        goto label_4494ec;
    }
    ctx->pc = 0x4494E4u;
    SET_GPR_U32(ctx, 31, 0x4494ECu);
    ctx->pc = 0x446990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x446990u, 0x4494E4u, 0x4494ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4494ECu;
label_4494ec:
    // 0x4494ec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4494f0:
    if (ctx->pc == 0x4494F0u) {
        ctx->pc = 0x4494F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4494ECu;
        // 0x4494f0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4494F4u;
        goto label_4494f4;
    }
    ctx->pc = 0x4494ECu;
    {
        const bool branch_taken_0x4494ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4494F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4494ECu;
        // 0x4494f0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4494ec) {
            ctx->pc = 0x449510u;
            goto label_449510;
        }
    }
    ctx->pc = 0x4494F4u;
label_4494f4:
    // 0x4494f4: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x4494f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_4494f8:
    // 0x4494f8: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x4494f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_4494fc:
    // 0x4494fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4494fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_449500:
    // 0x449500: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x449500u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_449504:
    // 0x449504: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x449504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_449508:
    // 0x449508: 0x10000002  b           . + 4 + (0x2 << 2)
label_44950c:
    if (ctx->pc == 0x44950Cu) {
        ctx->pc = 0x44950Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449508u;
        // 0x44950c: 0xac65fffc  sw          $a1, -0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449510u;
        goto label_449510;
    }
    ctx->pc = 0x449508u;
    {
        const bool branch_taken_0x449508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44950Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449508u;
        // 0x44950c: 0xac65fffc  sw          $a1, -0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449508) {
            ctx->pc = 0x449514u;
            goto label_449514;
        }
    }
    ctx->pc = 0x449510u;
label_449510:
    // 0x449510: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x449510u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_449514:
    // 0x449514: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x449514u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_449518:
    // 0x449518: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x449518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_44951c:
    // 0x44951c: 0x3e00008  jr          $ra
label_449520:
    if (ctx->pc == 0x449520u) {
        ctx->pc = 0x449520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44951Cu;
        // 0x449520: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449524u;
        goto label_449524;
    }
    ctx->pc = 0x44951Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x449520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44951Cu;
        // 0x449520: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44951Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x449524u;
label_449524:
    // 0x449524: 0x0  nop
    ctx->pc = 0x449524u;
    // NOP
label_449528:
    // 0x449528: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x449528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_44952c:
    // 0x44952c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x44952cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_449530:
    // 0x449530: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x449530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_449534:
    // 0x449534: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x449534u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_449538:
    // 0x449538: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x449538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_44953c:
    // 0x44953c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x44953cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_449540:
    // 0x449540: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x449540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_449544:
    // 0x449544: 0x12200029  beqz        $s1, . + 4 + (0x29 << 2)
label_449548:
    if (ctx->pc == 0x449548u) {
        ctx->pc = 0x449548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449544u;
        // 0x449548: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44954Cu;
        goto label_44954c;
    }
    ctx->pc = 0x449544u;
    {
        const bool branch_taken_0x449544 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x449548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449544u;
        // 0x449548: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449544) {
            ctx->pc = 0x4495ECu;
            goto label_4495ec;
        }
    }
    ctx->pc = 0x44954Cu;
label_44954c:
    // 0x44954c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x44954cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_449550:
    // 0x449550: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_449554:
    if (ctx->pc == 0x449554u) {
        ctx->pc = 0x449554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449550u;
        // 0x449554: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449558u;
        goto label_449558;
    }
    ctx->pc = 0x449550u;
    {
        const bool branch_taken_0x449550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x449554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449550u;
        // 0x449554: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449550) {
            ctx->pc = 0x4495F0u;
            goto label_4495f0;
        }
    }
    ctx->pc = 0x449558u;
label_449558:
    // 0x449558: 0x10800026  beqz        $a0, . + 4 + (0x26 << 2)
label_44955c:
    if (ctx->pc == 0x44955Cu) {
        ctx->pc = 0x44955Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449558u;
        // 0x44955c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449560u;
        goto label_449560;
    }
    ctx->pc = 0x449558u;
    {
        const bool branch_taken_0x449558 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x44955Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449558u;
        // 0x44955c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449558) {
            ctx->pc = 0x4495F4u;
            goto label_4495f4;
        }
    }
    ctx->pc = 0x449560u;
label_449560:
    // 0x449560: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x449560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_449564:
    // 0x449564: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
label_449568:
    if (ctx->pc == 0x449568u) {
        ctx->pc = 0x449568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449564u;
        // 0x449568: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44956Cu;
        goto label_44956c;
    }
    ctx->pc = 0x449564u;
    {
        const bool branch_taken_0x449564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x449564) {
            ctx->pc = 0x449568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x449564u;
            // 0x449568: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4495F4u;
            goto label_4495f4;
        }
    }
    ctx->pc = 0x44956Cu;
label_44956c:
    // 0x44956c: 0x50c00021  beql        $a2, $zero, . + 4 + (0x21 << 2)
label_449570:
    if (ctx->pc == 0x449570u) {
        ctx->pc = 0x449570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44956Cu;
        // 0x449570: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449574u;
        goto label_449574;
    }
    ctx->pc = 0x44956Cu;
    {
        const bool branch_taken_0x44956c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x44956c) {
            ctx->pc = 0x449570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44956Cu;
            // 0x449570: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4495F4u;
            goto label_4495f4;
        }
    }
    ctx->pc = 0x449574u;
label_449574:
    // 0x449574: 0x1240001d  beqz        $s2, . + 4 + (0x1D << 2)
label_449578:
    if (ctx->pc == 0x449578u) {
        ctx->pc = 0x449578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449574u;
        // 0x449578: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44957Cu;
        goto label_44957c;
    }
    ctx->pc = 0x449574u;
    {
        const bool branch_taken_0x449574 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x449578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449574u;
        // 0x449578: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449574) {
            ctx->pc = 0x4495ECu;
            goto label_4495ec;
        }
    }
    ctx->pc = 0x44957Cu;
label_44957c:
    // 0x44957c: 0x8c470020  lw          $a3, 0x20($v0)
    ctx->pc = 0x44957cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_449580:
    // 0x449580: 0x10e0000d  beqz        $a3, . + 4 + (0xD << 2)
label_449584:
    if (ctx->pc == 0x449584u) {
        ctx->pc = 0x449584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449580u;
        // 0x449584: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449588u;
        goto label_449588;
    }
    ctx->pc = 0x449580u;
    {
        const bool branch_taken_0x449580 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x449584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449580u;
        // 0x449584: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449580) {
            ctx->pc = 0x4495B8u;
            goto label_4495b8;
        }
    }
    ctx->pc = 0x449588u;
label_449588:
    // 0x449588: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x449588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_44958c:
    // 0x44958c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x44958cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_449590:
    // 0x449590: 0x5046000a  beql        $v0, $a2, . + 4 + (0xA << 2)
label_449594:
    if (ctx->pc == 0x449594u) {
        ctx->pc = 0x449594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449590u;
        // 0x449594: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449598u;
        goto label_449598;
    }
    ctx->pc = 0x449590u;
    {
        const bool branch_taken_0x449590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x449590) {
            ctx->pc = 0x449594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x449590u;
            // 0x449594: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4495BCu;
            goto label_4495bc;
        }
    }
    ctx->pc = 0x449598u;
label_449598:
    // 0x449598: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x449598u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_44959c:
    // 0x44959c: 0x0  nop
    ctx->pc = 0x44959cu;
    // NOP
label_4495a0:
    // 0x4495a0: 0x207102b  sltu        $v0, $s0, $a3
    ctx->pc = 0x4495a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_4495a4:
    // 0x4495a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_4495a8:
    if (ctx->pc == 0x4495A8u) {
        ctx->pc = 0x4495A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4495A4u;
        // 0x4495a8: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4495ACu;
        goto label_4495ac;
    }
    ctx->pc = 0x4495A4u;
    {
        const bool branch_taken_0x4495a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4495A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4495A4u;
        // 0x4495a8: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4495a4) {
            ctx->pc = 0x4495B8u;
            goto label_4495b8;
        }
    }
    ctx->pc = 0x4495ACu;
label_4495ac:
    // 0x4495ac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4495acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4495b0:
    // 0x4495b0: 0x5446fffb  bnel        $v0, $a2, . + 4 + (-0x5 << 2)
label_4495b4:
    if (ctx->pc == 0x4495B4u) {
        ctx->pc = 0x4495B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4495B0u;
        // 0x4495b4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4495B8u;
        goto label_4495b8;
    }
    ctx->pc = 0x4495B0u;
    {
        const bool branch_taken_0x4495b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x4495b0) {
            ctx->pc = 0x4495B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4495B0u;
            // 0x4495b4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4495A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4495a0;
        }
    }
    ctx->pc = 0x4495B8u;
label_4495b8:
    // 0x4495b8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4495b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4495bc:
    // 0x4495bc: 0x1202000c  beq         $s0, $v0, . + 4 + (0xC << 2)
label_4495c0:
    if (ctx->pc == 0x4495C0u) {
        ctx->pc = 0x4495C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4495BCu;
        // 0x4495c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4495C4u;
        goto label_4495c4;
    }
    ctx->pc = 0x4495BCu;
    {
        const bool branch_taken_0x4495bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x4495C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4495BCu;
        // 0x4495c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4495bc) {
            ctx->pc = 0x4495F0u;
            goto label_4495f0;
        }
    }
    ctx->pc = 0x4495C4u;
label_4495c4:
    // 0x4495c4: 0xc111a64  jal         func_446990
label_4495c8:
    if (ctx->pc == 0x4495C8u) {
        ctx->pc = 0x4495C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4495C4u;
        // 0x4495c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4495CCu;
        goto label_4495cc;
    }
    ctx->pc = 0x4495C4u;
    SET_GPR_U32(ctx, 31, 0x4495CCu);
    ctx->pc = 0x4495C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4495C4u;
    // 0x4495c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x446990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x446990u, 0x4495C4u, 0x4495CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4495CCu;
label_4495cc:
    // 0x4495cc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_4495d0:
    if (ctx->pc == 0x4495D0u) {
        ctx->pc = 0x4495D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4495CCu;
        // 0x4495d0: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4495D4u;
        goto label_4495d4;
    }
    ctx->pc = 0x4495CCu;
    {
        const bool branch_taken_0x4495cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4495D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4495CCu;
        // 0x4495d0: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4495cc) {
            ctx->pc = 0x4495ECu;
            goto label_4495ec;
        }
    }
    ctx->pc = 0x4495D4u;
label_4495d4:
    // 0x4495d4: 0x8c440024  lw          $a0, 0x24($v0)
    ctx->pc = 0x4495d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_4495d8:
    // 0x4495d8: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x4495d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_4495dc:
    // 0x4495dc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4495dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4495e0:
    // 0x4495e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4495e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4495e4:
    // 0x4495e4: 0x10000002  b           . + 4 + (0x2 << 2)
label_4495e8:
    if (ctx->pc == 0x4495E8u) {
        ctx->pc = 0x4495E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4495E4u;
        // 0x4495e8: 0xac720000  sw          $s2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4495ECu;
        goto label_4495ec;
    }
    ctx->pc = 0x4495E4u;
    {
        const bool branch_taken_0x4495e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4495E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4495E4u;
        // 0x4495e8: 0xac720000  sw          $s2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4495e4) {
            ctx->pc = 0x4495F0u;
            goto label_4495f0;
        }
    }
    ctx->pc = 0x4495ECu;
label_4495ec:
    // 0x4495ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4495ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4495f0:
    // 0x4495f0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4495f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4495f4:
    // 0x4495f4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4495f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4495f8:
    // 0x4495f8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4495f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4495fc:
    // 0x4495fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4495fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_449600:
    // 0x449600: 0x3e00008  jr          $ra
label_449604:
    if (ctx->pc == 0x449604u) {
        ctx->pc = 0x449604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449600u;
        // 0x449604: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449608u;
        goto label_fallthrough_0x449600;
    }
    ctx->pc = 0x449600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x449604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449600u;
        // 0x449604: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x449600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x449600:
    ctx->pc = 0x449608u;
}
