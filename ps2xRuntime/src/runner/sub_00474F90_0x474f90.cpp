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

// Function: sub_00474F90
// Address: 0x474f90 - 0x4753b0
void sub_00474F90_0x474f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00474F90_0x474f90");
#endif

    switch (ctx->pc) {
        case 0x474f90u: goto label_474f90;
        case 0x474f94u: goto label_474f94;
        case 0x474f98u: goto label_474f98;
        case 0x474f9cu: goto label_474f9c;
        case 0x474fa0u: goto label_474fa0;
        case 0x474fa4u: goto label_474fa4;
        case 0x474fa8u: goto label_474fa8;
        case 0x474facu: goto label_474fac;
        case 0x474fb0u: goto label_474fb0;
        case 0x474fb4u: goto label_474fb4;
        case 0x474fb8u: goto label_474fb8;
        case 0x474fbcu: goto label_474fbc;
        case 0x474fc0u: goto label_474fc0;
        case 0x474fc4u: goto label_474fc4;
        case 0x474fc8u: goto label_474fc8;
        case 0x474fccu: goto label_474fcc;
        case 0x474fd0u: goto label_474fd0;
        case 0x474fd4u: goto label_474fd4;
        case 0x474fd8u: goto label_474fd8;
        case 0x474fdcu: goto label_474fdc;
        case 0x474fe0u: goto label_474fe0;
        case 0x474fe4u: goto label_474fe4;
        case 0x474fe8u: goto label_474fe8;
        case 0x474fecu: goto label_474fec;
        case 0x474ff0u: goto label_474ff0;
        case 0x474ff4u: goto label_474ff4;
        case 0x474ff8u: goto label_474ff8;
        case 0x474ffcu: goto label_474ffc;
        case 0x475000u: goto label_475000;
        case 0x475004u: goto label_475004;
        case 0x475008u: goto label_475008;
        case 0x47500cu: goto label_47500c;
        case 0x475010u: goto label_475010;
        case 0x475014u: goto label_475014;
        case 0x475018u: goto label_475018;
        case 0x47501cu: goto label_47501c;
        case 0x475020u: goto label_475020;
        case 0x475024u: goto label_475024;
        case 0x475028u: goto label_475028;
        case 0x47502cu: goto label_47502c;
        case 0x475030u: goto label_475030;
        case 0x475034u: goto label_475034;
        case 0x475038u: goto label_475038;
        case 0x47503cu: goto label_47503c;
        case 0x475040u: goto label_475040;
        case 0x475044u: goto label_475044;
        case 0x475048u: goto label_475048;
        case 0x47504cu: goto label_47504c;
        case 0x475050u: goto label_475050;
        case 0x475054u: goto label_475054;
        case 0x475058u: goto label_475058;
        case 0x47505cu: goto label_47505c;
        case 0x475060u: goto label_475060;
        case 0x475064u: goto label_475064;
        case 0x475068u: goto label_475068;
        case 0x47506cu: goto label_47506c;
        case 0x475070u: goto label_475070;
        case 0x475074u: goto label_475074;
        case 0x475078u: goto label_475078;
        case 0x47507cu: goto label_47507c;
        case 0x475080u: goto label_475080;
        case 0x475084u: goto label_475084;
        case 0x475088u: goto label_475088;
        case 0x47508cu: goto label_47508c;
        case 0x475090u: goto label_475090;
        case 0x475094u: goto label_475094;
        case 0x475098u: goto label_475098;
        case 0x47509cu: goto label_47509c;
        case 0x4750a0u: goto label_4750a0;
        case 0x4750a4u: goto label_4750a4;
        case 0x4750a8u: goto label_4750a8;
        case 0x4750acu: goto label_4750ac;
        case 0x4750b0u: goto label_4750b0;
        case 0x4750b4u: goto label_4750b4;
        case 0x4750b8u: goto label_4750b8;
        case 0x4750bcu: goto label_4750bc;
        case 0x4750c0u: goto label_4750c0;
        case 0x4750c4u: goto label_4750c4;
        case 0x4750c8u: goto label_4750c8;
        case 0x4750ccu: goto label_4750cc;
        case 0x4750d0u: goto label_4750d0;
        case 0x4750d4u: goto label_4750d4;
        case 0x4750d8u: goto label_4750d8;
        case 0x4750dcu: goto label_4750dc;
        case 0x4750e0u: goto label_4750e0;
        case 0x4750e4u: goto label_4750e4;
        case 0x4750e8u: goto label_4750e8;
        case 0x4750ecu: goto label_4750ec;
        case 0x4750f0u: goto label_4750f0;
        case 0x4750f4u: goto label_4750f4;
        case 0x4750f8u: goto label_4750f8;
        case 0x4750fcu: goto label_4750fc;
        case 0x475100u: goto label_475100;
        case 0x475104u: goto label_475104;
        case 0x475108u: goto label_475108;
        case 0x47510cu: goto label_47510c;
        case 0x475110u: goto label_475110;
        case 0x475114u: goto label_475114;
        case 0x475118u: goto label_475118;
        case 0x47511cu: goto label_47511c;
        case 0x475120u: goto label_475120;
        case 0x475124u: goto label_475124;
        case 0x475128u: goto label_475128;
        case 0x47512cu: goto label_47512c;
        case 0x475130u: goto label_475130;
        case 0x475134u: goto label_475134;
        case 0x475138u: goto label_475138;
        case 0x47513cu: goto label_47513c;
        case 0x475140u: goto label_475140;
        case 0x475144u: goto label_475144;
        case 0x475148u: goto label_475148;
        case 0x47514cu: goto label_47514c;
        case 0x475150u: goto label_475150;
        case 0x475154u: goto label_475154;
        case 0x475158u: goto label_475158;
        case 0x47515cu: goto label_47515c;
        case 0x475160u: goto label_475160;
        case 0x475164u: goto label_475164;
        case 0x475168u: goto label_475168;
        case 0x47516cu: goto label_47516c;
        case 0x475170u: goto label_475170;
        case 0x475174u: goto label_475174;
        case 0x475178u: goto label_475178;
        case 0x47517cu: goto label_47517c;
        case 0x475180u: goto label_475180;
        case 0x475184u: goto label_475184;
        case 0x475188u: goto label_475188;
        case 0x47518cu: goto label_47518c;
        case 0x475190u: goto label_475190;
        case 0x475194u: goto label_475194;
        case 0x475198u: goto label_475198;
        case 0x47519cu: goto label_47519c;
        case 0x4751a0u: goto label_4751a0;
        case 0x4751a4u: goto label_4751a4;
        case 0x4751a8u: goto label_4751a8;
        case 0x4751acu: goto label_4751ac;
        case 0x4751b0u: goto label_4751b0;
        case 0x4751b4u: goto label_4751b4;
        case 0x4751b8u: goto label_4751b8;
        case 0x4751bcu: goto label_4751bc;
        case 0x4751c0u: goto label_4751c0;
        case 0x4751c4u: goto label_4751c4;
        case 0x4751c8u: goto label_4751c8;
        case 0x4751ccu: goto label_4751cc;
        case 0x4751d0u: goto label_4751d0;
        case 0x4751d4u: goto label_4751d4;
        case 0x4751d8u: goto label_4751d8;
        case 0x4751dcu: goto label_4751dc;
        case 0x4751e0u: goto label_4751e0;
        case 0x4751e4u: goto label_4751e4;
        case 0x4751e8u: goto label_4751e8;
        case 0x4751ecu: goto label_4751ec;
        case 0x4751f0u: goto label_4751f0;
        case 0x4751f4u: goto label_4751f4;
        case 0x4751f8u: goto label_4751f8;
        case 0x4751fcu: goto label_4751fc;
        case 0x475200u: goto label_475200;
        case 0x475204u: goto label_475204;
        case 0x475208u: goto label_475208;
        case 0x47520cu: goto label_47520c;
        case 0x475210u: goto label_475210;
        case 0x475214u: goto label_475214;
        case 0x475218u: goto label_475218;
        case 0x47521cu: goto label_47521c;
        case 0x475220u: goto label_475220;
        case 0x475224u: goto label_475224;
        case 0x475228u: goto label_475228;
        case 0x47522cu: goto label_47522c;
        case 0x475230u: goto label_475230;
        case 0x475234u: goto label_475234;
        case 0x475238u: goto label_475238;
        case 0x47523cu: goto label_47523c;
        case 0x475240u: goto label_475240;
        case 0x475244u: goto label_475244;
        case 0x475248u: goto label_475248;
        case 0x47524cu: goto label_47524c;
        case 0x475250u: goto label_475250;
        case 0x475254u: goto label_475254;
        case 0x475258u: goto label_475258;
        case 0x47525cu: goto label_47525c;
        case 0x475260u: goto label_475260;
        case 0x475264u: goto label_475264;
        case 0x475268u: goto label_475268;
        case 0x47526cu: goto label_47526c;
        case 0x475270u: goto label_475270;
        case 0x475274u: goto label_475274;
        case 0x475278u: goto label_475278;
        case 0x47527cu: goto label_47527c;
        case 0x475280u: goto label_475280;
        case 0x475284u: goto label_475284;
        case 0x475288u: goto label_475288;
        case 0x47528cu: goto label_47528c;
        case 0x475290u: goto label_475290;
        case 0x475294u: goto label_475294;
        case 0x475298u: goto label_475298;
        case 0x47529cu: goto label_47529c;
        case 0x4752a0u: goto label_4752a0;
        case 0x4752a4u: goto label_4752a4;
        case 0x4752a8u: goto label_4752a8;
        case 0x4752acu: goto label_4752ac;
        case 0x4752b0u: goto label_4752b0;
        case 0x4752b4u: goto label_4752b4;
        case 0x4752b8u: goto label_4752b8;
        case 0x4752bcu: goto label_4752bc;
        case 0x4752c0u: goto label_4752c0;
        case 0x4752c4u: goto label_4752c4;
        case 0x4752c8u: goto label_4752c8;
        case 0x4752ccu: goto label_4752cc;
        case 0x4752d0u: goto label_4752d0;
        case 0x4752d4u: goto label_4752d4;
        case 0x4752d8u: goto label_4752d8;
        case 0x4752dcu: goto label_4752dc;
        case 0x4752e0u: goto label_4752e0;
        case 0x4752e4u: goto label_4752e4;
        case 0x4752e8u: goto label_4752e8;
        case 0x4752ecu: goto label_4752ec;
        case 0x4752f0u: goto label_4752f0;
        case 0x4752f4u: goto label_4752f4;
        case 0x4752f8u: goto label_4752f8;
        case 0x4752fcu: goto label_4752fc;
        case 0x475300u: goto label_475300;
        case 0x475304u: goto label_475304;
        case 0x475308u: goto label_475308;
        case 0x47530cu: goto label_47530c;
        case 0x475310u: goto label_475310;
        case 0x475314u: goto label_475314;
        case 0x475318u: goto label_475318;
        case 0x47531cu: goto label_47531c;
        case 0x475320u: goto label_475320;
        case 0x475324u: goto label_475324;
        case 0x475328u: goto label_475328;
        case 0x47532cu: goto label_47532c;
        case 0x475330u: goto label_475330;
        case 0x475334u: goto label_475334;
        case 0x475338u: goto label_475338;
        case 0x47533cu: goto label_47533c;
        case 0x475340u: goto label_475340;
        case 0x475344u: goto label_475344;
        case 0x475348u: goto label_475348;
        case 0x47534cu: goto label_47534c;
        case 0x475350u: goto label_475350;
        case 0x475354u: goto label_475354;
        case 0x475358u: goto label_475358;
        case 0x47535cu: goto label_47535c;
        case 0x475360u: goto label_475360;
        case 0x475364u: goto label_475364;
        case 0x475368u: goto label_475368;
        case 0x47536cu: goto label_47536c;
        case 0x475370u: goto label_475370;
        case 0x475374u: goto label_475374;
        case 0x475378u: goto label_475378;
        case 0x47537cu: goto label_47537c;
        case 0x475380u: goto label_475380;
        case 0x475384u: goto label_475384;
        case 0x475388u: goto label_475388;
        case 0x47538cu: goto label_47538c;
        case 0x475390u: goto label_475390;
        case 0x475394u: goto label_475394;
        case 0x475398u: goto label_475398;
        case 0x47539cu: goto label_47539c;
        case 0x4753a0u: goto label_4753a0;
        case 0x4753a4u: goto label_4753a4;
        case 0x4753a8u: goto label_4753a8;
        case 0x4753acu: goto label_4753ac;
        default: break;
    }

    ctx->pc = 0x474f90u;

label_474f90:
    // 0x474f90: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x474f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_474f94:
    // 0x474f94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x474f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_474f98:
    // 0x474f98: 0xafa40140  sw          $a0, 0x140($sp)
    ctx->pc = 0x474f98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 4));
label_474f9c:
    // 0x474f9c: 0xafa50150  sw          $a1, 0x150($sp)
    ctx->pc = 0x474f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 5));
label_474fa0:
    // 0x474fa0: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x474fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_474fa4:
    // 0x474fa4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x474fa4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_474fa8:
    // 0x474fa8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x474fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_474fac:
    // 0x474fac: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_474fb0:
    if (ctx->pc == 0x474FB0u) {
        ctx->pc = 0x474FB4u;
        goto label_474fb4;
    }
    ctx->pc = 0x474FACu;
    {
        const bool branch_taken_0x474fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x474fac) {
            ctx->pc = 0x47505Cu;
            goto label_47505c;
        }
    }
    ctx->pc = 0x474FB4u;
label_474fb4:
    // 0x474fb4: 0x8f82b440  lw          $v0, -0x4BC0($gp)
    ctx->pc = 0x474fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947904)));
label_474fb8:
    // 0x474fb8: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_474fbc:
    if (ctx->pc == 0x474FBCu) {
        ctx->pc = 0x474FC0u;
        goto label_474fc0;
    }
    ctx->pc = 0x474FB8u;
    {
        const bool branch_taken_0x474fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x474fb8) {
            ctx->pc = 0x47505Cu;
            goto label_47505c;
        }
    }
    ctx->pc = 0x474FC0u;
label_474fc0:
    // 0x474fc0: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x474fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_474fc4:
    // 0x474fc4: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x474fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_474fc8:
    // 0x474fc8: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x474fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_474fcc:
    // 0x474fcc: 0xc115ee8  jal         func_457BA0
label_474fd0:
    if (ctx->pc == 0x474FD0u) {
        ctx->pc = 0x474FD4u;
        goto label_474fd4;
    }
    ctx->pc = 0x474FCCu;
    SET_GPR_U32(ctx, 31, 0x474FD4u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x474FCCu, 0x474FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x474FD4u;
label_474fd4:
    // 0x474fd4: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_474fd8:
    if (ctx->pc == 0x474FD8u) {
        ctx->pc = 0x474FDCu;
        goto label_474fdc;
    }
    ctx->pc = 0x474FD4u;
    {
        const bool branch_taken_0x474fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x474fd4) {
            ctx->pc = 0x47505Cu;
            goto label_47505c;
        }
    }
    ctx->pc = 0x474FDCu;
label_474fdc:
    // 0x474fdc: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x474fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_474fe0:
    // 0x474fe0: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_474fe4:
    if (ctx->pc == 0x474FE4u) {
        ctx->pc = 0x474FE8u;
        goto label_474fe8;
    }
    ctx->pc = 0x474FE0u;
    {
        const bool branch_taken_0x474fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x474fe0) {
            ctx->pc = 0x47505Cu;
            goto label_47505c;
        }
    }
    ctx->pc = 0x474FE8u;
label_474fe8:
    // 0x474fe8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x474fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_474fec:
    // 0x474fec: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x474fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_474ff0:
    // 0x474ff0: 0x8fa60134  lw          $a2, 0x134($sp)
    ctx->pc = 0x474ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_474ff4:
    // 0x474ff4: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x474ff4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_474ff8:
    // 0x474ff8: 0x24e70af0  addiu       $a3, $a3, 0xAF0
    ctx->pc = 0x474ff8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2800));
label_474ffc:
    // 0x474ffc: 0x24080095  addiu       $t0, $zero, 0x95
    ctx->pc = 0x474ffcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
label_475000:
    // 0x475000: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x475000u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_475004:
    // 0x475004: 0x25290d10  addiu       $t1, $t1, 0xD10
    ctx->pc = 0x475004u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3344));
label_475008:
    // 0x475008: 0xc113940  jal         func_44E500
label_47500c:
    if (ctx->pc == 0x47500Cu) {
        ctx->pc = 0x475010u;
        goto label_475010;
    }
    ctx->pc = 0x475008u;
    SET_GPR_U32(ctx, 31, 0x475010u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x475008u, 0x475010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475010u;
label_475010:
    // 0x475010: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x475010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_475014:
    // 0x475014: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x475014u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_475018:
    // 0x475018: 0x24a50d30  addiu       $a1, $a1, 0xD30
    ctx->pc = 0x475018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3376));
label_47501c:
    // 0x47501c: 0xc115c24  jal         func_457090
label_475020:
    if (ctx->pc == 0x475020u) {
        ctx->pc = 0x475024u;
        goto label_475024;
    }
    ctx->pc = 0x47501Cu;
    SET_GPR_U32(ctx, 31, 0x475024u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x47501Cu, 0x475024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475024u;
label_475024:
    // 0x475024: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x475024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_475028:
    // 0x475028: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x475028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_47502c:
    // 0x47502c: 0x40f809  jalr        $v0
label_475030:
    if (ctx->pc == 0x475030u) {
        ctx->pc = 0x475034u;
        goto label_475034;
    }
    ctx->pc = 0x47502Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x475034u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47502Cu, 0x475034u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x475034u;
label_475034:
    // 0x475034: 0xaf82b440  sw          $v0, -0x4BC0($gp)
    ctx->pc = 0x475034u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947904), GPR_U32(ctx, 2));
label_475038:
    // 0x475038: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x475038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_47503c:
    // 0x47503c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_475040:
    if (ctx->pc == 0x475040u) {
        ctx->pc = 0x475044u;
        goto label_475044;
    }
    ctx->pc = 0x47503Cu;
    {
        const bool branch_taken_0x47503c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47503c) {
            ctx->pc = 0x47504Cu;
            goto label_47504c;
        }
    }
    ctx->pc = 0x475044u;
label_475044:
    // 0x475044: 0xd  break       0
    ctx->pc = 0x475044u;
    runtime->handleBreak(rdram, ctx);
label_475048:
    // 0x475048: 0x0  nop
    ctx->pc = 0x475048u;
    // NOP
label_47504c:
    // 0x47504c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x47504cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_475050:
    // 0x475050: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x475050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_475054:
    // 0x475054: 0xc11392c  jal         func_44E4B0
label_475058:
    if (ctx->pc == 0x475058u) {
        ctx->pc = 0x47505Cu;
        goto label_47505c;
    }
    ctx->pc = 0x475054u;
    SET_GPR_U32(ctx, 31, 0x47505Cu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x475054u, 0x47505Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47505Cu;
label_47505c:
    // 0x47505c: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x47505cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_475060:
    // 0x475060: 0x8c440024  lw          $a0, 0x24($v0)
    ctx->pc = 0x475060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_475064:
    // 0x475064: 0x8fa50150  lw          $a1, 0x150($sp)
    ctx->pc = 0x475064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_475068:
    // 0x475068: 0xc11bfc8  jal         func_46FF20
label_47506c:
    if (ctx->pc == 0x47506Cu) {
        ctx->pc = 0x475070u;
        goto label_475070;
    }
    ctx->pc = 0x475068u;
    SET_GPR_U32(ctx, 31, 0x475070u);
    ctx->pc = 0x46FF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46FF20u, 0x475068u, 0x475070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475070u;
label_475070:
    // 0x475070: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x475070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_475074:
    // 0x475074: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x475074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_475078:
    // 0x475078: 0xc11d300  jal         func_474C00
label_47507c:
    if (ctx->pc == 0x47507Cu) {
        ctx->pc = 0x475080u;
        goto label_475080;
    }
    ctx->pc = 0x475078u;
    SET_GPR_U32(ctx, 31, 0x475080u);
    ctx->pc = 0x474C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x474C00u, 0x475078u, 0x475080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475080u;
label_475080:
    // 0x475080: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x475080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_475084:
    // 0x475084: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x475084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_475088:
    // 0x475088: 0x27bd0160  addiu       $sp, $sp, 0x160
    ctx->pc = 0x475088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_47508c:
    // 0x47508c: 0x3e00008  jr          $ra
label_475090:
    if (ctx->pc == 0x475090u) {
        ctx->pc = 0x475094u;
        goto label_475094;
    }
    ctx->pc = 0x47508Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47508Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x475094u;
label_475094:
    // 0x475094: 0x0  nop
    ctx->pc = 0x475094u;
    // NOP
label_475098:
    // 0x475098: 0x0  nop
    ctx->pc = 0x475098u;
    // NOP
label_47509c:
    // 0x47509c: 0x0  nop
    ctx->pc = 0x47509cu;
    // NOP
label_4750a0:
    // 0x4750a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4750a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4750a4:
    // 0x4750a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4750a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4750a8:
    // 0x4750a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x4750a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_4750ac:
    // 0x4750ac: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x4750acu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
label_4750b0:
    // 0x4750b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4750b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_4750b4:
    // 0x4750b4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_4750b8:
    if (ctx->pc == 0x4750B8u) {
        ctx->pc = 0x4750BCu;
        goto label_4750bc;
    }
    ctx->pc = 0x4750B4u;
    {
        const bool branch_taken_0x4750b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4750b4) {
            ctx->pc = 0x4750FCu;
            goto label_4750fc;
        }
    }
    ctx->pc = 0x4750BCu;
label_4750bc:
    // 0x4750bc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x4750bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_4750c0:
    // 0x4750c0: 0x24636d60  addiu       $v1, $v1, 0x6D60
    ctx->pc = 0x4750c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28000));
label_4750c4:
    // 0x4750c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4750c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_4750c8:
    // 0x4750c8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4750c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_4750cc:
    // 0x4750cc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x4750ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_4750d0:
    // 0x4750d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4750d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4750d4:
    // 0x4750d4: 0xc11caf4  jal         func_472BD0
label_4750d8:
    if (ctx->pc == 0x4750D8u) {
        ctx->pc = 0x4750DCu;
        goto label_4750dc;
    }
    ctx->pc = 0x4750D4u;
    SET_GPR_U32(ctx, 31, 0x4750DCu);
    ctx->pc = 0x472BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x472BD0u, 0x4750D4u, 0x4750DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4750DCu;
label_4750dc:
    // 0x4750dc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x4750dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_4750e0:
    // 0x4750e0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x4750e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_4750e4:
    // 0x4750e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4750e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4750e8:
    // 0x4750e8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_4750ec:
    if (ctx->pc == 0x4750ECu) {
        ctx->pc = 0x4750F0u;
        goto label_4750f0;
    }
    ctx->pc = 0x4750E8u;
    {
        const bool branch_taken_0x4750e8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4750e8) {
            ctx->pc = 0x4750FCu;
            goto label_4750fc;
        }
    }
    ctx->pc = 0x4750F0u;
label_4750f0:
    // 0x4750f0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x4750f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_4750f4:
    // 0x4750f4: 0xc0ba070  jal         func_2E81C0
label_4750f8:
    if (ctx->pc == 0x4750F8u) {
        ctx->pc = 0x4750FCu;
        goto label_4750fc;
    }
    ctx->pc = 0x4750F4u;
    SET_GPR_U32(ctx, 31, 0x4750FCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x4750F4u, 0x4750FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4750FCu;
label_4750fc:
    // 0x4750fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4750fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_475100:
    // 0x475100: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x475100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_475104:
    // 0x475104: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x475104u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_475108:
    // 0x475108: 0x3e00008  jr          $ra
label_47510c:
    if (ctx->pc == 0x47510Cu) {
        ctx->pc = 0x475110u;
        goto label_475110;
    }
    ctx->pc = 0x475108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x475108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x475110u;
label_475110:
    // 0x475110: 0x27bdfd40  addiu       $sp, $sp, -0x2C0
    ctx->pc = 0x475110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966592));
label_475114:
    // 0x475114: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x475114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_475118:
    // 0x475118: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x475118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_47511c:
    // 0x47511c: 0xafa40280  sw          $a0, 0x280($sp)
    ctx->pc = 0x47511cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 4));
label_475120:
    // 0x475120: 0xe7ac0290  swc1        $f12, 0x290($sp)
    ctx->pc = 0x475120u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 656), bits); }
label_475124:
    // 0x475124: 0xe7ad02a0  swc1        $f13, 0x2A0($sp)
    ctx->pc = 0x475124u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 672), bits); }
label_475128:
    // 0x475128: 0x8fa30280  lw          $v1, 0x280($sp)
    ctx->pc = 0x475128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_47512c:
    // 0x47512c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x47512cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_475130:
    // 0x475130: 0x10600097  beqz        $v1, . + 4 + (0x97 << 2)
label_475134:
    if (ctx->pc == 0x475134u) {
        ctx->pc = 0x475138u;
        goto label_475138;
    }
    ctx->pc = 0x475130u;
    {
        const bool branch_taken_0x475130 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x475130) {
            ctx->pc = 0x475390u;
            goto label_475390;
        }
    }
    ctx->pc = 0x475138u;
label_475138:
    // 0x475138: 0xc7a00290  lwc1        $f0, 0x290($sp)
    ctx->pc = 0x475138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47513c:
    // 0x47513c: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x47513cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_475140:
    // 0x475140: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x475140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
label_475144:
    // 0x475144: 0xc7a002a0  lwc1        $f0, 0x2A0($sp)
    ctx->pc = 0x475144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_475148:
    // 0x475148: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x475148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_47514c:
    // 0x47514c: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x47514cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
label_475150:
    // 0x475150: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x475150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_475154:
    // 0x475154: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x475154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_475158:
    // 0x475158: 0xc0ee5a4  jal         func_3B9690
label_47515c:
    if (ctx->pc == 0x47515Cu) {
        ctx->pc = 0x475160u;
        goto label_475160;
    }
    ctx->pc = 0x475158u;
    SET_GPR_U32(ctx, 31, 0x475160u);
    ctx->pc = 0x3B9690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9690u, 0x475158u, 0x475160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475160u;
label_475160:
    // 0x475160: 0xc0ee592  jal         func_3B9648
label_475164:
    if (ctx->pc == 0x475164u) {
        ctx->pc = 0x475168u;
        goto label_475168;
    }
    ctx->pc = 0x475160u;
    SET_GPR_U32(ctx, 31, 0x475168u);
    ctx->pc = 0x3B9648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9648u, 0x475160u, 0x475168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475168u;
label_475168:
    // 0x475168: 0x8fa30280  lw          $v1, 0x280($sp)
    ctx->pc = 0x475168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_47516c:
    // 0x47516c: 0xac620028  sw          $v0, 0x28($v1)
    ctx->pc = 0x47516cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
label_475170:
    // 0x475170: 0xc0ec604  jal         func_3B1810
label_475174:
    if (ctx->pc == 0x475174u) {
        ctx->pc = 0x475178u;
        goto label_475178;
    }
    ctx->pc = 0x475170u;
    SET_GPR_U32(ctx, 31, 0x475178u);
    ctx->pc = 0x3B1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1810u, 0x475170u, 0x475178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475178u;
label_475178:
    // 0x475178: 0x8fa30280  lw          $v1, 0x280($sp)
    ctx->pc = 0x475178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_47517c:
    // 0x47517c: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x47517cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
label_475180:
    // 0x475180: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x475180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_475184:
    // 0x475184: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x475184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_475188:
    // 0x475188: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x475188u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_47518c:
    // 0x47518c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x47518cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_475190:
    // 0x475190: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_475194:
    if (ctx->pc == 0x475194u) {
        ctx->pc = 0x475198u;
        goto label_475198;
    }
    ctx->pc = 0x475190u;
    {
        const bool branch_taken_0x475190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x475190) {
            ctx->pc = 0x475240u;
            goto label_475240;
        }
    }
    ctx->pc = 0x475198u;
label_475198:
    // 0x475198: 0x8f82b444  lw          $v0, -0x4BBC($gp)
    ctx->pc = 0x475198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947908)));
label_47519c:
    // 0x47519c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_4751a0:
    if (ctx->pc == 0x4751A0u) {
        ctx->pc = 0x4751A4u;
        goto label_4751a4;
    }
    ctx->pc = 0x47519Cu;
    {
        const bool branch_taken_0x47519c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47519c) {
            ctx->pc = 0x475240u;
            goto label_475240;
        }
    }
    ctx->pc = 0x4751A4u;
label_4751a4:
    // 0x4751a4: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x4751a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_4751a8:
    // 0x4751a8: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4751a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4751ac:
    // 0x4751ac: 0x27a60270  addiu       $a2, $sp, 0x270
    ctx->pc = 0x4751acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_4751b0:
    // 0x4751b0: 0xc115ee8  jal         func_457BA0
label_4751b4:
    if (ctx->pc == 0x4751B4u) {
        ctx->pc = 0x4751B8u;
        goto label_4751b8;
    }
    ctx->pc = 0x4751B0u;
    SET_GPR_U32(ctx, 31, 0x4751B8u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x4751B0u, 0x4751B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4751B8u;
label_4751b8:
    // 0x4751b8: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_4751bc:
    if (ctx->pc == 0x4751BCu) {
        ctx->pc = 0x4751C0u;
        goto label_4751c0;
    }
    ctx->pc = 0x4751B8u;
    {
        const bool branch_taken_0x4751b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4751b8) {
            ctx->pc = 0x475240u;
            goto label_475240;
        }
    }
    ctx->pc = 0x4751C0u;
label_4751c0:
    // 0x4751c0: 0x8fa20278  lw          $v0, 0x278($sp)
    ctx->pc = 0x4751c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
label_4751c4:
    // 0x4751c4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_4751c8:
    if (ctx->pc == 0x4751C8u) {
        ctx->pc = 0x4751CCu;
        goto label_4751cc;
    }
    ctx->pc = 0x4751C4u;
    {
        const bool branch_taken_0x4751c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4751c4) {
            ctx->pc = 0x475240u;
            goto label_475240;
        }
    }
    ctx->pc = 0x4751CCu;
label_4751cc:
    // 0x4751cc: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x4751ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_4751d0:
    // 0x4751d0: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4751d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4751d4:
    // 0x4751d4: 0x8fa60274  lw          $a2, 0x274($sp)
    ctx->pc = 0x4751d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
label_4751d8:
    // 0x4751d8: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x4751d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_4751dc:
    // 0x4751dc: 0x24e70af0  addiu       $a3, $a3, 0xAF0
    ctx->pc = 0x4751dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2800));
label_4751e0:
    // 0x4751e0: 0x240800b6  addiu       $t0, $zero, 0xB6
    ctx->pc = 0x4751e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 182));
label_4751e4:
    // 0x4751e4: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x4751e4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_4751e8:
    // 0x4751e8: 0x25290b90  addiu       $t1, $t1, 0xB90
    ctx->pc = 0x4751e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2960));
label_4751ec:
    // 0x4751ec: 0xc113940  jal         func_44E500
label_4751f0:
    if (ctx->pc == 0x4751F0u) {
        ctx->pc = 0x4751F4u;
        goto label_4751f4;
    }
    ctx->pc = 0x4751ECu;
    SET_GPR_U32(ctx, 31, 0x4751F4u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x4751ECu, 0x4751F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4751F4u;
label_4751f4:
    // 0x4751f4: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x4751f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_4751f8:
    // 0x4751f8: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x4751f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_4751fc:
    // 0x4751fc: 0x24a50ba0  addiu       $a1, $a1, 0xBA0
    ctx->pc = 0x4751fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2976));
label_475200:
    // 0x475200: 0xc115c24  jal         func_457090
label_475204:
    if (ctx->pc == 0x475204u) {
        ctx->pc = 0x475208u;
        goto label_475208;
    }
    ctx->pc = 0x475200u;
    SET_GPR_U32(ctx, 31, 0x475208u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x475200u, 0x475208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475208u;
label_475208:
    // 0x475208: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x475208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_47520c:
    // 0x47520c: 0x8fa20278  lw          $v0, 0x278($sp)
    ctx->pc = 0x47520cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
label_475210:
    // 0x475210: 0x40f809  jalr        $v0
label_475214:
    if (ctx->pc == 0x475214u) {
        ctx->pc = 0x475218u;
        goto label_475218;
    }
    ctx->pc = 0x475210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x475218u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x475210u, 0x475218u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x475218u;
label_475218:
    // 0x475218: 0xaf82b444  sw          $v0, -0x4BBC($gp)
    ctx->pc = 0x475218u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947908), GPR_U32(ctx, 2));
label_47521c:
    // 0x47521c: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x47521cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_475220:
    // 0x475220: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_475224:
    if (ctx->pc == 0x475224u) {
        ctx->pc = 0x475228u;
        goto label_475228;
    }
    ctx->pc = 0x475220u;
    {
        const bool branch_taken_0x475220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x475220) {
            ctx->pc = 0x475230u;
            goto label_475230;
        }
    }
    ctx->pc = 0x475228u;
label_475228:
    // 0x475228: 0xd  break       0
    ctx->pc = 0x475228u;
    runtime->handleBreak(rdram, ctx);
label_47522c:
    // 0x47522c: 0x0  nop
    ctx->pc = 0x47522cu;
    // NOP
label_475230:
    // 0x475230: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x475230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_475234:
    // 0x475234: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x475234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_475238:
    // 0x475238: 0xc11392c  jal         func_44E4B0
label_47523c:
    if (ctx->pc == 0x47523Cu) {
        ctx->pc = 0x475240u;
        goto label_475240;
    }
    ctx->pc = 0x475238u;
    SET_GPR_U32(ctx, 31, 0x475240u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x475238u, 0x475240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475240u;
label_475240:
    // 0x475240: 0x8fa40280  lw          $a0, 0x280($sp)
    ctx->pc = 0x475240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_475244:
    // 0x475244: 0x8fa60280  lw          $a2, 0x280($sp)
    ctx->pc = 0x475244u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_475248:
    // 0x475248: 0x8fa50280  lw          $a1, 0x280($sp)
    ctx->pc = 0x475248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_47524c:
    // 0x47524c: 0x8fa30280  lw          $v1, 0x280($sp)
    ctx->pc = 0x47524cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_475250:
    // 0x475250: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x475250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_475254:
    // 0x475254: 0x8c84002c  lw          $a0, 0x2C($a0)
    ctx->pc = 0x475254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_475258:
    // 0x475258: 0xc4cc0030  lwc1        $f12, 0x30($a2)
    ctx->pc = 0x475258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_47525c:
    // 0x47525c: 0xc4ad0034  lwc1        $f13, 0x34($a1)
    ctx->pc = 0x47525cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_475260:
    // 0x475260: 0xc46e0038  lwc1        $f14, 0x38($v1)
    ctx->pc = 0x475260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_475264:
    // 0x475264: 0xc44f003c  lwc1        $f15, 0x3C($v0)
    ctx->pc = 0x475264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_475268:
    // 0x475268: 0xc0ec750  jal         func_3B1D40
label_47526c:
    if (ctx->pc == 0x47526Cu) {
        ctx->pc = 0x475270u;
        goto label_475270;
    }
    ctx->pc = 0x475268u;
    SET_GPR_U32(ctx, 31, 0x475270u);
    ctx->pc = 0x3B1D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1D40u, 0x475268u, 0x475270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475270u;
label_475270:
    // 0x475270: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x475270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_475274:
    // 0x475274: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x475274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_475278:
    // 0x475278: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_47527c:
    if (ctx->pc == 0x47527Cu) {
        ctx->pc = 0x475280u;
        goto label_475280;
    }
    ctx->pc = 0x475278u;
    {
        const bool branch_taken_0x475278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x475278) {
            ctx->pc = 0x47528Cu;
            goto label_47528c;
        }
    }
    ctx->pc = 0x475280u;
label_475280:
    // 0x475280: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x475280u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_475284:
    // 0x475284: 0x10000002  b           . + 4 + (0x2 << 2)
label_475288:
    if (ctx->pc == 0x475288u) {
        ctx->pc = 0x47528Cu;
        goto label_47528c;
    }
    ctx->pc = 0x475284u;
    {
        const bool branch_taken_0x475284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x475284) {
            ctx->pc = 0x475290u;
            goto label_475290;
        }
    }
    ctx->pc = 0x47528Cu;
label_47528c:
    // 0x47528c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x47528cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_475290:
    // 0x475290: 0x8fa40280  lw          $a0, 0x280($sp)
    ctx->pc = 0x475290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_475294:
    // 0x475294: 0x8fa30280  lw          $v1, 0x280($sp)
    ctx->pc = 0x475294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_475298:
    // 0x475298: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x475298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_47529c:
    // 0x47529c: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x47529cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_4752a0:
    // 0x4752a0: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4752a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4752a4:
    // 0x4752a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4752a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4752a8:
    // 0x4752a8: 0x8c66002c  lw          $a2, 0x2C($v1)
    ctx->pc = 0x4752a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_4752ac:
    // 0x4752ac: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x4752acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4752b0:
    // 0x4752b0: 0xc0ee5ba  jal         func_3B96E8
label_4752b4:
    if (ctx->pc == 0x4752B4u) {
        ctx->pc = 0x4752B8u;
        goto label_4752b8;
    }
    ctx->pc = 0x4752B0u;
    SET_GPR_U32(ctx, 31, 0x4752B8u);
    ctx->pc = 0x3B96E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B96E8u, 0x4752B0u, 0x4752B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4752B8u;
label_4752b8:
    // 0x4752b8: 0x8fa30280  lw          $v1, 0x280($sp)
    ctx->pc = 0x4752b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_4752bc:
    // 0x4752bc: 0xac620028  sw          $v0, 0x28($v1)
    ctx->pc = 0x4752bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
label_4752c0:
    // 0x4752c0: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x4752c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_4752c4:
    // 0x4752c4: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x4752c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_4752c8:
    // 0x4752c8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4752c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4752cc:
    // 0x4752cc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4752ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4752d0:
    // 0x4752d0: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_4752d4:
    if (ctx->pc == 0x4752D4u) {
        ctx->pc = 0x4752D8u;
        goto label_4752d8;
    }
    ctx->pc = 0x4752D0u;
    {
        const bool branch_taken_0x4752d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4752d0) {
            ctx->pc = 0x475380u;
            goto label_475380;
        }
    }
    ctx->pc = 0x4752D8u;
label_4752d8:
    // 0x4752d8: 0x8f82b448  lw          $v0, -0x4BB8($gp)
    ctx->pc = 0x4752d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947912)));
label_4752dc:
    // 0x4752dc: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_4752e0:
    if (ctx->pc == 0x4752E0u) {
        ctx->pc = 0x4752E4u;
        goto label_4752e4;
    }
    ctx->pc = 0x4752DCu;
    {
        const bool branch_taken_0x4752dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4752dc) {
            ctx->pc = 0x475380u;
            goto label_475380;
        }
    }
    ctx->pc = 0x4752E4u;
label_4752e4:
    // 0x4752e4: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x4752e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_4752e8:
    // 0x4752e8: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4752e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4752ec:
    // 0x4752ec: 0x27a60260  addiu       $a2, $sp, 0x260
    ctx->pc = 0x4752ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_4752f0:
    // 0x4752f0: 0xc115ee8  jal         func_457BA0
label_4752f4:
    if (ctx->pc == 0x4752F4u) {
        ctx->pc = 0x4752F8u;
        goto label_4752f8;
    }
    ctx->pc = 0x4752F0u;
    SET_GPR_U32(ctx, 31, 0x4752F8u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x4752F0u, 0x4752F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4752F8u;
label_4752f8:
    // 0x4752f8: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_4752fc:
    if (ctx->pc == 0x4752FCu) {
        ctx->pc = 0x475300u;
        goto label_475300;
    }
    ctx->pc = 0x4752F8u;
    {
        const bool branch_taken_0x4752f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4752f8) {
            ctx->pc = 0x475380u;
            goto label_475380;
        }
    }
    ctx->pc = 0x475300u;
label_475300:
    // 0x475300: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x475300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_475304:
    // 0x475304: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_475308:
    if (ctx->pc == 0x475308u) {
        ctx->pc = 0x47530Cu;
        goto label_47530c;
    }
    ctx->pc = 0x475304u;
    {
        const bool branch_taken_0x475304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x475304) {
            ctx->pc = 0x475380u;
            goto label_475380;
        }
    }
    ctx->pc = 0x47530Cu;
label_47530c:
    // 0x47530c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x47530cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_475310:
    // 0x475310: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x475310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_475314:
    // 0x475314: 0x8fa60264  lw          $a2, 0x264($sp)
    ctx->pc = 0x475314u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_475318:
    // 0x475318: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x475318u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_47531c:
    // 0x47531c: 0x24e70af0  addiu       $a3, $a3, 0xAF0
    ctx->pc = 0x47531cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2800));
label_475320:
    // 0x475320: 0x240800bf  addiu       $t0, $zero, 0xBF
    ctx->pc = 0x475320u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
label_475324:
    // 0x475324: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x475324u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_475328:
    // 0x475328: 0x25290be0  addiu       $t1, $t1, 0xBE0
    ctx->pc = 0x475328u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3040));
label_47532c:
    // 0x47532c: 0xc113940  jal         func_44E500
label_475330:
    if (ctx->pc == 0x475330u) {
        ctx->pc = 0x475334u;
        goto label_475334;
    }
    ctx->pc = 0x47532Cu;
    SET_GPR_U32(ctx, 31, 0x475334u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x47532Cu, 0x475334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475334u;
label_475334:
    // 0x475334: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x475334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_475338:
    // 0x475338: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x475338u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_47533c:
    // 0x47533c: 0x24a50d70  addiu       $a1, $a1, 0xD70
    ctx->pc = 0x47533cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3440));
label_475340:
    // 0x475340: 0xc115c24  jal         func_457090
label_475344:
    if (ctx->pc == 0x475344u) {
        ctx->pc = 0x475348u;
        goto label_475348;
    }
    ctx->pc = 0x475340u;
    SET_GPR_U32(ctx, 31, 0x475348u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x475340u, 0x475348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475348u;
label_475348:
    // 0x475348: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x475348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_47534c:
    // 0x47534c: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x47534cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_475350:
    // 0x475350: 0x40f809  jalr        $v0
label_475354:
    if (ctx->pc == 0x475354u) {
        ctx->pc = 0x475358u;
        goto label_475358;
    }
    ctx->pc = 0x475350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x475358u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x475350u, 0x475358u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x475358u;
label_475358:
    // 0x475358: 0xaf82b448  sw          $v0, -0x4BB8($gp)
    ctx->pc = 0x475358u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947912), GPR_U32(ctx, 2));
label_47535c:
    // 0x47535c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x47535cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_475360:
    // 0x475360: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_475364:
    if (ctx->pc == 0x475364u) {
        ctx->pc = 0x475368u;
        goto label_475368;
    }
    ctx->pc = 0x475360u;
    {
        const bool branch_taken_0x475360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x475360) {
            ctx->pc = 0x475370u;
            goto label_475370;
        }
    }
    ctx->pc = 0x475368u;
label_475368:
    // 0x475368: 0xd  break       0
    ctx->pc = 0x475368u;
    runtime->handleBreak(rdram, ctx);
label_47536c:
    // 0x47536c: 0x0  nop
    ctx->pc = 0x47536cu;
    // NOP
label_475370:
    // 0x475370: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x475370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_475374:
    // 0x475374: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x475374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_475378:
    // 0x475378: 0xc11392c  jal         func_44E4B0
label_47537c:
    if (ctx->pc == 0x47537Cu) {
        ctx->pc = 0x475380u;
        goto label_475380;
    }
    ctx->pc = 0x475378u;
    SET_GPR_U32(ctx, 31, 0x475380u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x475378u, 0x475380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475380u;
label_475380:
    // 0x475380: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x475380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_475384:
    // 0x475384: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x475384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_475388:
    // 0x475388: 0xc0ee6d8  jal         func_3B9B60
label_47538c:
    if (ctx->pc == 0x47538Cu) {
        ctx->pc = 0x475390u;
        goto label_475390;
    }
    ctx->pc = 0x475388u;
    SET_GPR_U32(ctx, 31, 0x475390u);
    ctx->pc = 0x3B9B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9B60u, 0x475388u, 0x475390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475390u;
label_475390:
    // 0x475390: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x475390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_475394:
    // 0x475394: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x475394u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_475398:
    // 0x475398: 0x27bd02c0  addiu       $sp, $sp, 0x2C0
    ctx->pc = 0x475398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_47539c:
    // 0x47539c: 0x3e00008  jr          $ra
label_4753a0:
    if (ctx->pc == 0x4753A0u) {
        ctx->pc = 0x4753A4u;
        goto label_4753a4;
    }
    ctx->pc = 0x47539Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47539Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4753A4u;
label_4753a4:
    // 0x4753a4: 0x0  nop
    ctx->pc = 0x4753a4u;
    // NOP
label_4753a8:
    // 0x4753a8: 0x0  nop
    ctx->pc = 0x4753a8u;
    // NOP
label_4753ac:
    // 0x4753ac: 0x0  nop
    ctx->pc = 0x4753acu;
    // NOP
    ctx->pc = 0x4753b0u;
}
