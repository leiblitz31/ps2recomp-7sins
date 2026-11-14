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

// Function: sub_00386ED8
// Address: 0x386ed8 - 0x3873d0
void sub_00386ED8_0x386ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00386ED8_0x386ed8");
#endif

    switch (ctx->pc) {
        case 0x386ed8u: goto label_386ed8;
        case 0x386edcu: goto label_386edc;
        case 0x386ee0u: goto label_386ee0;
        case 0x386ee4u: goto label_386ee4;
        case 0x386ee8u: goto label_386ee8;
        case 0x386eecu: goto label_386eec;
        case 0x386ef0u: goto label_386ef0;
        case 0x386ef4u: goto label_386ef4;
        case 0x386ef8u: goto label_386ef8;
        case 0x386efcu: goto label_386efc;
        case 0x386f00u: goto label_386f00;
        case 0x386f04u: goto label_386f04;
        case 0x386f08u: goto label_386f08;
        case 0x386f0cu: goto label_386f0c;
        case 0x386f10u: goto label_386f10;
        case 0x386f14u: goto label_386f14;
        case 0x386f18u: goto label_386f18;
        case 0x386f1cu: goto label_386f1c;
        case 0x386f20u: goto label_386f20;
        case 0x386f24u: goto label_386f24;
        case 0x386f28u: goto label_386f28;
        case 0x386f2cu: goto label_386f2c;
        case 0x386f30u: goto label_386f30;
        case 0x386f34u: goto label_386f34;
        case 0x386f38u: goto label_386f38;
        case 0x386f3cu: goto label_386f3c;
        case 0x386f40u: goto label_386f40;
        case 0x386f44u: goto label_386f44;
        case 0x386f48u: goto label_386f48;
        case 0x386f4cu: goto label_386f4c;
        case 0x386f50u: goto label_386f50;
        case 0x386f54u: goto label_386f54;
        case 0x386f58u: goto label_386f58;
        case 0x386f5cu: goto label_386f5c;
        case 0x386f60u: goto label_386f60;
        case 0x386f64u: goto label_386f64;
        case 0x386f68u: goto label_386f68;
        case 0x386f6cu: goto label_386f6c;
        case 0x386f70u: goto label_386f70;
        case 0x386f74u: goto label_386f74;
        case 0x386f78u: goto label_386f78;
        case 0x386f7cu: goto label_386f7c;
        case 0x386f80u: goto label_386f80;
        case 0x386f84u: goto label_386f84;
        case 0x386f88u: goto label_386f88;
        case 0x386f8cu: goto label_386f8c;
        case 0x386f90u: goto label_386f90;
        case 0x386f94u: goto label_386f94;
        case 0x386f98u: goto label_386f98;
        case 0x386f9cu: goto label_386f9c;
        case 0x386fa0u: goto label_386fa0;
        case 0x386fa4u: goto label_386fa4;
        case 0x386fa8u: goto label_386fa8;
        case 0x386facu: goto label_386fac;
        case 0x386fb0u: goto label_386fb0;
        case 0x386fb4u: goto label_386fb4;
        case 0x386fb8u: goto label_386fb8;
        case 0x386fbcu: goto label_386fbc;
        case 0x386fc0u: goto label_386fc0;
        case 0x386fc4u: goto label_386fc4;
        case 0x386fc8u: goto label_386fc8;
        case 0x386fccu: goto label_386fcc;
        case 0x386fd0u: goto label_386fd0;
        case 0x386fd4u: goto label_386fd4;
        case 0x386fd8u: goto label_386fd8;
        case 0x386fdcu: goto label_386fdc;
        case 0x386fe0u: goto label_386fe0;
        case 0x386fe4u: goto label_386fe4;
        case 0x386fe8u: goto label_386fe8;
        case 0x386fecu: goto label_386fec;
        case 0x386ff0u: goto label_386ff0;
        case 0x386ff4u: goto label_386ff4;
        case 0x386ff8u: goto label_386ff8;
        case 0x386ffcu: goto label_386ffc;
        case 0x387000u: goto label_387000;
        case 0x387004u: goto label_387004;
        case 0x387008u: goto label_387008;
        case 0x38700cu: goto label_38700c;
        case 0x387010u: goto label_387010;
        case 0x387014u: goto label_387014;
        case 0x387018u: goto label_387018;
        case 0x38701cu: goto label_38701c;
        case 0x387020u: goto label_387020;
        case 0x387024u: goto label_387024;
        case 0x387028u: goto label_387028;
        case 0x38702cu: goto label_38702c;
        case 0x387030u: goto label_387030;
        case 0x387034u: goto label_387034;
        case 0x387038u: goto label_387038;
        case 0x38703cu: goto label_38703c;
        case 0x387040u: goto label_387040;
        case 0x387044u: goto label_387044;
        case 0x387048u: goto label_387048;
        case 0x38704cu: goto label_38704c;
        case 0x387050u: goto label_387050;
        case 0x387054u: goto label_387054;
        case 0x387058u: goto label_387058;
        case 0x38705cu: goto label_38705c;
        case 0x387060u: goto label_387060;
        case 0x387064u: goto label_387064;
        case 0x387068u: goto label_387068;
        case 0x38706cu: goto label_38706c;
        case 0x387070u: goto label_387070;
        case 0x387074u: goto label_387074;
        case 0x387078u: goto label_387078;
        case 0x38707cu: goto label_38707c;
        case 0x387080u: goto label_387080;
        case 0x387084u: goto label_387084;
        case 0x387088u: goto label_387088;
        case 0x38708cu: goto label_38708c;
        case 0x387090u: goto label_387090;
        case 0x387094u: goto label_387094;
        case 0x387098u: goto label_387098;
        case 0x38709cu: goto label_38709c;
        case 0x3870a0u: goto label_3870a0;
        case 0x3870a4u: goto label_3870a4;
        case 0x3870a8u: goto label_3870a8;
        case 0x3870acu: goto label_3870ac;
        case 0x3870b0u: goto label_3870b0;
        case 0x3870b4u: goto label_3870b4;
        case 0x3870b8u: goto label_3870b8;
        case 0x3870bcu: goto label_3870bc;
        case 0x3870c0u: goto label_3870c0;
        case 0x3870c4u: goto label_3870c4;
        case 0x3870c8u: goto label_3870c8;
        case 0x3870ccu: goto label_3870cc;
        case 0x3870d0u: goto label_3870d0;
        case 0x3870d4u: goto label_3870d4;
        case 0x3870d8u: goto label_3870d8;
        case 0x3870dcu: goto label_3870dc;
        case 0x3870e0u: goto label_3870e0;
        case 0x3870e4u: goto label_3870e4;
        case 0x3870e8u: goto label_3870e8;
        case 0x3870ecu: goto label_3870ec;
        case 0x3870f0u: goto label_3870f0;
        case 0x3870f4u: goto label_3870f4;
        case 0x3870f8u: goto label_3870f8;
        case 0x3870fcu: goto label_3870fc;
        case 0x387100u: goto label_387100;
        case 0x387104u: goto label_387104;
        case 0x387108u: goto label_387108;
        case 0x38710cu: goto label_38710c;
        case 0x387110u: goto label_387110;
        case 0x387114u: goto label_387114;
        case 0x387118u: goto label_387118;
        case 0x38711cu: goto label_38711c;
        case 0x387120u: goto label_387120;
        case 0x387124u: goto label_387124;
        case 0x387128u: goto label_387128;
        case 0x38712cu: goto label_38712c;
        case 0x387130u: goto label_387130;
        case 0x387134u: goto label_387134;
        case 0x387138u: goto label_387138;
        case 0x38713cu: goto label_38713c;
        case 0x387140u: goto label_387140;
        case 0x387144u: goto label_387144;
        case 0x387148u: goto label_387148;
        case 0x38714cu: goto label_38714c;
        case 0x387150u: goto label_387150;
        case 0x387154u: goto label_387154;
        case 0x387158u: goto label_387158;
        case 0x38715cu: goto label_38715c;
        case 0x387160u: goto label_387160;
        case 0x387164u: goto label_387164;
        case 0x387168u: goto label_387168;
        case 0x38716cu: goto label_38716c;
        case 0x387170u: goto label_387170;
        case 0x387174u: goto label_387174;
        case 0x387178u: goto label_387178;
        case 0x38717cu: goto label_38717c;
        case 0x387180u: goto label_387180;
        case 0x387184u: goto label_387184;
        case 0x387188u: goto label_387188;
        case 0x38718cu: goto label_38718c;
        case 0x387190u: goto label_387190;
        case 0x387194u: goto label_387194;
        case 0x387198u: goto label_387198;
        case 0x38719cu: goto label_38719c;
        case 0x3871a0u: goto label_3871a0;
        case 0x3871a4u: goto label_3871a4;
        case 0x3871a8u: goto label_3871a8;
        case 0x3871acu: goto label_3871ac;
        case 0x3871b0u: goto label_3871b0;
        case 0x3871b4u: goto label_3871b4;
        case 0x3871b8u: goto label_3871b8;
        case 0x3871bcu: goto label_3871bc;
        case 0x3871c0u: goto label_3871c0;
        case 0x3871c4u: goto label_3871c4;
        case 0x3871c8u: goto label_3871c8;
        case 0x3871ccu: goto label_3871cc;
        case 0x3871d0u: goto label_3871d0;
        case 0x3871d4u: goto label_3871d4;
        case 0x3871d8u: goto label_3871d8;
        case 0x3871dcu: goto label_3871dc;
        case 0x3871e0u: goto label_3871e0;
        case 0x3871e4u: goto label_3871e4;
        case 0x3871e8u: goto label_3871e8;
        case 0x3871ecu: goto label_3871ec;
        case 0x3871f0u: goto label_3871f0;
        case 0x3871f4u: goto label_3871f4;
        case 0x3871f8u: goto label_3871f8;
        case 0x3871fcu: goto label_3871fc;
        case 0x387200u: goto label_387200;
        case 0x387204u: goto label_387204;
        case 0x387208u: goto label_387208;
        case 0x38720cu: goto label_38720c;
        case 0x387210u: goto label_387210;
        case 0x387214u: goto label_387214;
        case 0x387218u: goto label_387218;
        case 0x38721cu: goto label_38721c;
        case 0x387220u: goto label_387220;
        case 0x387224u: goto label_387224;
        case 0x387228u: goto label_387228;
        case 0x38722cu: goto label_38722c;
        case 0x387230u: goto label_387230;
        case 0x387234u: goto label_387234;
        case 0x387238u: goto label_387238;
        case 0x38723cu: goto label_38723c;
        case 0x387240u: goto label_387240;
        case 0x387244u: goto label_387244;
        case 0x387248u: goto label_387248;
        case 0x38724cu: goto label_38724c;
        case 0x387250u: goto label_387250;
        case 0x387254u: goto label_387254;
        case 0x387258u: goto label_387258;
        case 0x38725cu: goto label_38725c;
        case 0x387260u: goto label_387260;
        case 0x387264u: goto label_387264;
        case 0x387268u: goto label_387268;
        case 0x38726cu: goto label_38726c;
        case 0x387270u: goto label_387270;
        case 0x387274u: goto label_387274;
        case 0x387278u: goto label_387278;
        case 0x38727cu: goto label_38727c;
        case 0x387280u: goto label_387280;
        case 0x387284u: goto label_387284;
        case 0x387288u: goto label_387288;
        case 0x38728cu: goto label_38728c;
        case 0x387290u: goto label_387290;
        case 0x387294u: goto label_387294;
        case 0x387298u: goto label_387298;
        case 0x38729cu: goto label_38729c;
        case 0x3872a0u: goto label_3872a0;
        case 0x3872a4u: goto label_3872a4;
        case 0x3872a8u: goto label_3872a8;
        case 0x3872acu: goto label_3872ac;
        case 0x3872b0u: goto label_3872b0;
        case 0x3872b4u: goto label_3872b4;
        case 0x3872b8u: goto label_3872b8;
        case 0x3872bcu: goto label_3872bc;
        case 0x3872c0u: goto label_3872c0;
        case 0x3872c4u: goto label_3872c4;
        case 0x3872c8u: goto label_3872c8;
        case 0x3872ccu: goto label_3872cc;
        case 0x3872d0u: goto label_3872d0;
        case 0x3872d4u: goto label_3872d4;
        case 0x3872d8u: goto label_3872d8;
        case 0x3872dcu: goto label_3872dc;
        case 0x3872e0u: goto label_3872e0;
        case 0x3872e4u: goto label_3872e4;
        case 0x3872e8u: goto label_3872e8;
        case 0x3872ecu: goto label_3872ec;
        case 0x3872f0u: goto label_3872f0;
        case 0x3872f4u: goto label_3872f4;
        case 0x3872f8u: goto label_3872f8;
        case 0x3872fcu: goto label_3872fc;
        case 0x387300u: goto label_387300;
        case 0x387304u: goto label_387304;
        case 0x387308u: goto label_387308;
        case 0x38730cu: goto label_38730c;
        case 0x387310u: goto label_387310;
        case 0x387314u: goto label_387314;
        case 0x387318u: goto label_387318;
        case 0x38731cu: goto label_38731c;
        case 0x387320u: goto label_387320;
        case 0x387324u: goto label_387324;
        case 0x387328u: goto label_387328;
        case 0x38732cu: goto label_38732c;
        case 0x387330u: goto label_387330;
        case 0x387334u: goto label_387334;
        case 0x387338u: goto label_387338;
        case 0x38733cu: goto label_38733c;
        case 0x387340u: goto label_387340;
        case 0x387344u: goto label_387344;
        case 0x387348u: goto label_387348;
        case 0x38734cu: goto label_38734c;
        case 0x387350u: goto label_387350;
        case 0x387354u: goto label_387354;
        case 0x387358u: goto label_387358;
        case 0x38735cu: goto label_38735c;
        case 0x387360u: goto label_387360;
        case 0x387364u: goto label_387364;
        case 0x387368u: goto label_387368;
        case 0x38736cu: goto label_38736c;
        case 0x387370u: goto label_387370;
        case 0x387374u: goto label_387374;
        case 0x387378u: goto label_387378;
        case 0x38737cu: goto label_38737c;
        case 0x387380u: goto label_387380;
        case 0x387384u: goto label_387384;
        case 0x387388u: goto label_387388;
        case 0x38738cu: goto label_38738c;
        case 0x387390u: goto label_387390;
        case 0x387394u: goto label_387394;
        case 0x387398u: goto label_387398;
        case 0x38739cu: goto label_38739c;
        case 0x3873a0u: goto label_3873a0;
        case 0x3873a4u: goto label_3873a4;
        case 0x3873a8u: goto label_3873a8;
        case 0x3873acu: goto label_3873ac;
        case 0x3873b0u: goto label_3873b0;
        case 0x3873b4u: goto label_3873b4;
        case 0x3873b8u: goto label_3873b8;
        case 0x3873bcu: goto label_3873bc;
        case 0x3873c0u: goto label_3873c0;
        case 0x3873c4u: goto label_3873c4;
        case 0x3873c8u: goto label_3873c8;
        case 0x3873ccu: goto label_3873cc;
        default: break;
    }

    ctx->pc = 0x386ed8u;

label_386ed8:
    // 0x386ed8: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x386ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_386edc:
    // 0x386edc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x386edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_386ee0:
    // 0x386ee0: 0x7fb500e0  sq          $s5, 0xE0($sp)
    ctx->pc = 0x386ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 21));
label_386ee4:
    // 0x386ee4: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x386ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_386ee8:
    // 0x386ee8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x386ee8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_386eec:
    // 0x386eec: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x386eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
label_386ef0:
    // 0x386ef0: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x386ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
label_386ef4:
    // 0x386ef4: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x386ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
label_386ef8:
    // 0x386ef8: 0x7fb30100  sq          $s3, 0x100($sp)
    ctx->pc = 0x386ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 19));
label_386efc:
    // 0x386efc: 0x7fb400f0  sq          $s4, 0xF0($sp)
    ctx->pc = 0x386efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 20));
label_386f00:
    // 0x386f00: 0x7fb600d0  sq          $s6, 0xD0($sp)
    ctx->pc = 0x386f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 22));
label_386f04:
    // 0x386f04: 0x7fb700c0  sq          $s7, 0xC0($sp)
    ctx->pc = 0x386f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 23));
label_386f08:
    // 0x386f08: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x386f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_386f0c:
    // 0x386f0c: 0xc103322  jal         func_40CC88
label_386f10:
    if (ctx->pc == 0x386F10u) {
        ctx->pc = 0x386F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386F0Cu;
        // 0x386f10: 0x27a700a4  addiu       $a3, $sp, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386F14u;
        goto label_386f14;
    }
    ctx->pc = 0x386F0Cu;
    SET_GPR_U32(ctx, 31, 0x386F14u);
    ctx->pc = 0x386F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386F0Cu;
    // 0x386f10: 0x27a700a4  addiu       $a3, $sp, 0xA4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x386F0Cu, 0x386F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386F14u;
label_386f14:
    // 0x386f14: 0x10400122  beqz        $v0, . + 4 + (0x122 << 2)
label_386f18:
    if (ctx->pc == 0x386F18u) {
        ctx->pc = 0x386F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386F14u;
        // 0x386f18: 0x8fa300a4  lw          $v1, 0xA4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386F1Cu;
        goto label_386f1c;
    }
    ctx->pc = 0x386F14u;
    {
        const bool branch_taken_0x386f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x386F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386F14u;
        // 0x386f18: 0x8fa300a4  lw          $v1, 0xA4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386f14) {
            ctx->pc = 0x3873A0u;
            goto label_3873a0;
        }
    }
    ctx->pc = 0x386F1Cu;
label_386f1c:
    // 0x386f1c: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x386f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
label_386f20:
    // 0x386f20: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x386f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
label_386f24:
    // 0x386f24: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x386f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_386f28:
    // 0x386f28: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x386f28u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
label_386f2c:
    // 0x386f2c: 0x5460000c  bnel        $v1, $zero, . + 4 + (0xC << 2)
label_386f30:
    if (ctx->pc == 0x386F30u) {
        ctx->pc = 0x386F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386F2Cu;
        // 0x386f30: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386F34u;
        goto label_386f34;
    }
    ctx->pc = 0x386F2Cu;
    {
        const bool branch_taken_0x386f2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x386f2c) {
            ctx->pc = 0x386F30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x386F2Cu;
            // 0x386f30: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x386F60u;
            goto label_386f60;
        }
    }
    ctx->pc = 0x386F34u;
label_386f34:
    // 0x386f34: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x386f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_386f38:
    // 0x386f38: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x386f38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_386f3c:
    // 0x386f3c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x386f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_386f40:
    // 0x386f40: 0xc1035f6  jal         func_40D7D8
label_386f44:
    if (ctx->pc == 0x386F44u) {
        ctx->pc = 0x386F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386F40u;
        // 0x386f44: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x386F48u;
        goto label_386f48;
    }
    ctx->pc = 0x386F40u;
    SET_GPR_U32(ctx, 31, 0x386F48u);
    ctx->pc = 0x386F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386F40u;
    // 0x386f44: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x386F40u, 0x386F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386F48u;
label_386f48:
    // 0x386f48: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x386f48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_386f4c:
    // 0x386f4c: 0xc103628  jal         func_40D8A0
label_386f50:
    if (ctx->pc == 0x386F50u) {
        ctx->pc = 0x386F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386F4Cu;
        // 0x386f50: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386F54u;
        goto label_386f54;
    }
    ctx->pc = 0x386F4Cu;
    SET_GPR_U32(ctx, 31, 0x386F54u);
    ctx->pc = 0x386F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386F4Cu;
    // 0x386f50: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x386F4Cu, 0x386F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386F54u;
label_386f54:
    // 0x386f54: 0x10000113  b           . + 4 + (0x113 << 2)
label_386f58:
    if (ctx->pc == 0x386F58u) {
        ctx->pc = 0x386F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386F54u;
        // 0x386f58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386F5Cu;
        goto label_386f5c;
    }
    ctx->pc = 0x386F54u;
    {
        const bool branch_taken_0x386f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386F54u;
        // 0x386f58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386f54) {
            ctx->pc = 0x3873A4u;
            goto label_3873a4;
        }
    }
    ctx->pc = 0x386F5Cu;
label_386f5c:
    // 0x386f5c: 0x0  nop
    ctx->pc = 0x386f5cu;
    // NOP
label_386f60:
    // 0x386f60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x386f60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_386f64:
    // 0x386f64: 0xc0bb7e6  jal         func_2EDF98
label_386f68:
    if (ctx->pc == 0x386F68u) {
        ctx->pc = 0x386F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386F64u;
        // 0x386f68: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386F6Cu;
        goto label_386f6c;
    }
    ctx->pc = 0x386F64u;
    SET_GPR_U32(ctx, 31, 0x386F6Cu);
    ctx->pc = 0x386F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386F64u;
    // 0x386f68: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x386F64u, 0x386F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386F6Cu;
label_386f6c:
    // 0x386f6c: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x386f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_386f70:
    // 0x386f70: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x386f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_386f74:
    // 0x386f74: 0xc10480a  jal         func_412028
label_386f78:
    if (ctx->pc == 0x386F78u) {
        ctx->pc = 0x386F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386F74u;
        // 0x386f78: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386F7Cu;
        goto label_386f7c;
    }
    ctx->pc = 0x386F74u;
    SET_GPR_U32(ctx, 31, 0x386F7Cu);
    ctx->pc = 0x386F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386F74u;
    // 0x386f78: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x386F74u, 0x386F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386F7Cu;
label_386f7c:
    // 0x386f7c: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x386f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_386f80:
    // 0x386f80: 0x14430108  bne         $v0, $v1, . + 4 + (0x108 << 2)
label_386f84:
    if (ctx->pc == 0x386F84u) {
        ctx->pc = 0x386F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386F80u;
        // 0x386f84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386F88u;
        goto label_386f88;
    }
    ctx->pc = 0x386F80u;
    {
        const bool branch_taken_0x386f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x386F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386F80u;
        // 0x386f84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386f80) {
            ctx->pc = 0x3873A4u;
            goto label_3873a4;
        }
    }
    ctx->pc = 0x386F88u;
label_386f88:
    // 0x386f88: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x386f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_386f8c:
    // 0x386f8c: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
label_386f90:
    if (ctx->pc == 0x386F90u) {
        ctx->pc = 0x386F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386F8Cu;
        // 0x386f90: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386F94u;
        goto label_386f94;
    }
    ctx->pc = 0x386F8Cu;
    {
        const bool branch_taken_0x386f8c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x386F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386F8Cu;
        // 0x386f90: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386f8c) {
            ctx->pc = 0x386FB8u;
            goto label_386fb8;
        }
    }
    ctx->pc = 0x386F94u;
label_386f94:
    // 0x386f94: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x386f94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_386f98:
    // 0x386f98: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x386f98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_386f9c:
    // 0x386f9c: 0xc1035f6  jal         func_40D7D8
label_386fa0:
    if (ctx->pc == 0x386FA0u) {
        ctx->pc = 0x386FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386F9Cu;
        // 0x386fa0: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x386FA4u;
        goto label_386fa4;
    }
    ctx->pc = 0x386F9Cu;
    SET_GPR_U32(ctx, 31, 0x386FA4u);
    ctx->pc = 0x386FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386F9Cu;
    // 0x386fa0: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x386F9Cu, 0x386FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386FA4u;
label_386fa4:
    // 0x386fa4: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x386fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_386fa8:
    // 0x386fa8: 0xc103628  jal         func_40D8A0
label_386fac:
    if (ctx->pc == 0x386FACu) {
        ctx->pc = 0x386FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386FA8u;
        // 0x386fac: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386FB0u;
        goto label_386fb0;
    }
    ctx->pc = 0x386FA8u;
    SET_GPR_U32(ctx, 31, 0x386FB0u);
    ctx->pc = 0x386FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386FA8u;
    // 0x386fac: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x386FA8u, 0x386FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386FB0u;
label_386fb0:
    // 0x386fb0: 0x100000fc  b           . + 4 + (0xFC << 2)
label_386fb4:
    if (ctx->pc == 0x386FB4u) {
        ctx->pc = 0x386FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386FB0u;
        // 0x386fb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386FB8u;
        goto label_386fb8;
    }
    ctx->pc = 0x386FB0u;
    {
        const bool branch_taken_0x386fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386FB0u;
        // 0x386fb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386fb0) {
            ctx->pc = 0x3873A4u;
            goto label_3873a4;
        }
    }
    ctx->pc = 0x386FB8u;
label_386fb8:
    // 0x386fb8: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x386fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_386fbc:
    // 0x386fbc: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x386fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_386fc0:
    // 0x386fc0: 0x8c47ae40  lw          $a3, -0x51C0($v0)
    ctx->pc = 0x386fc0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946368)));
label_386fc4:
    // 0x386fc4: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x386fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_386fc8:
    // 0x386fc8: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x386fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_386fcc:
    // 0x386fcc: 0xc33018  mult        $a2, $a2, $v1
    ctx->pc = 0x386fccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_386fd0:
    // 0x386fd0: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x386fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_386fd4:
    // 0x386fd4: 0x8fb30024  lw          $s3, 0x24($sp)
    ctx->pc = 0x386fd4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_386fd8:
    // 0x386fd8: 0x872018  mult        $a0, $a0, $a3
    ctx->pc = 0x386fd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_386fdc:
    // 0x386fdc: 0x8cb1ae58  lw          $s1, -0x51A8($a1)
    ctx->pc = 0x386fdcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294946392)));
label_386fe0:
    // 0x386fe0: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x386fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
label_386fe4:
    // 0x386fe4: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x386fe4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_386fe8:
    // 0x386fe8: 0x2268821  addu        $s1, $s1, $a2
    ctx->pc = 0x386fe8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
label_386fec:
    // 0x386fec: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x386fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_386ff0:
    // 0x386ff0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_386ff4:
    if (ctx->pc == 0x386FF4u) {
        ctx->pc = 0x386FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386FF0u;
        // 0x386ff4: 0x2248821  addu        $s1, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386FF8u;
        goto label_386ff8;
    }
    ctx->pc = 0x386FF0u;
    {
        const bool branch_taken_0x386ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x386FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386FF0u;
        // 0x386ff4: 0x2248821  addu        $s1, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386ff0) {
            ctx->pc = 0x387000u;
            goto label_387000;
        }
    }
    ctx->pc = 0x386FF8u;
label_386ff8:
    // 0x386ff8: 0x10000006  b           . + 4 + (0x6 << 2)
label_386ffc:
    if (ctx->pc == 0x386FFCu) {
        ctx->pc = 0x386FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386FF8u;
        // 0x386ffc: 0x29403  sra         $s2, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387000u;
        goto label_387000;
    }
    ctx->pc = 0x386FF8u;
    {
        const bool branch_taken_0x386ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386FF8u;
        // 0x386ffc: 0x29403  sra         $s2, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386ff8) {
            ctx->pc = 0x387014u;
            goto label_387014;
        }
    }
    ctx->pc = 0x387000u;
label_387000:
    // 0x387000: 0x32620080  andi        $v0, $s3, 0x80
    ctx->pc = 0x387000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)128);
label_387004:
    // 0x387004: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_387008:
    if (ctx->pc == 0x387008u) {
        ctx->pc = 0x387008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387004u;
        // 0x387008: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38700Cu;
        goto label_38700c;
    }
    ctx->pc = 0x387004u;
    {
        const bool branch_taken_0x387004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x387004) {
            ctx->pc = 0x387008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x387004u;
            // 0x387008: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x387014u;
            goto label_387014;
        }
    }
    ctx->pc = 0x38700Cu;
label_38700c:
    // 0x38700c: 0x139083  sra         $s2, $s3, 2
    ctx->pc = 0x38700cu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 19), 2));
label_387010:
    // 0x387010: 0x32520001  andi        $s2, $s2, 0x1
    ctx->pc = 0x387010u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_387014:
    // 0x387014: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x387014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
label_387018:
    // 0x387018: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x387018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_38701c:
    // 0x38701c: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_387020:
    if (ctx->pc == 0x387020u) {
        ctx->pc = 0x387020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38701Cu;
        // 0x387020: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387024u;
        goto label_387024;
    }
    ctx->pc = 0x38701Cu;
    {
        const bool branch_taken_0x38701c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x387020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38701Cu;
        // 0x387020: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38701c) {
            ctx->pc = 0x387074u;
            goto label_387074;
        }
    }
    ctx->pc = 0x387024u;
label_387024:
    // 0x387024: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x387024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_387028:
    // 0x387028: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x387028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_38702c:
    // 0x38702c: 0x32630010  andi        $v1, $s3, 0x10
    ctx->pc = 0x38702cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16);
label_387030:
    // 0x387030: 0x822818  mult        $a1, $a0, $v0
    ctx->pc = 0x387030u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_387034:
    // 0x387034: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_387038:
    if (ctx->pc == 0x387038u) {
        ctx->pc = 0x387038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387034u;
        // 0x387038: 0xb18821  addu        $s1, $a1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38703Cu;
        goto label_38703c;
    }
    ctx->pc = 0x387034u;
    {
        const bool branch_taken_0x387034 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x387038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387034u;
        // 0x387038: 0xb18821  addu        $s1, $a1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387034) {
            ctx->pc = 0x387044u;
            goto label_387044;
        }
    }
    ctx->pc = 0x38703Cu;
label_38703c:
    // 0x38703c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x38703cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_387040:
    // 0x387040: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x387040u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_387044:
    // 0x387044: 0x32620008  andi        $v0, $s3, 0x8
    ctx->pc = 0x387044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_387048:
    // 0x387048: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_38704c:
    if (ctx->pc == 0x38704Cu) {
        ctx->pc = 0x38704Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387048u;
        // 0x38704c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387050u;
        goto label_387050;
    }
    ctx->pc = 0x387048u;
    {
        const bool branch_taken_0x387048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38704Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387048u;
        // 0x38704c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387048) {
            ctx->pc = 0x387054u;
            goto label_387054;
        }
    }
    ctx->pc = 0x387050u;
label_387050:
    // 0x387050: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x387050u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_387054:
    // 0x387054: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_387058:
    if (ctx->pc == 0x387058u) {
        ctx->pc = 0x387058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387054u;
        // 0x387058: 0x2441018  mult        $v0, $s2, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x38705Cu;
        goto label_38705c;
    }
    ctx->pc = 0x387054u;
    {
        const bool branch_taken_0x387054 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x387058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387054u;
        // 0x387058: 0x2441018  mult        $v0, $s2, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x387054) {
            ctx->pc = 0x387064u;
            goto label_387064;
        }
    }
    ctx->pc = 0x38705Cu;
label_38705c:
    // 0x38705c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x38705cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_387060:
    // 0x387060: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x387060u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_387064:
    // 0x387064: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x387064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_387068:
    // 0x387068: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x387068u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_38706c:
    // 0x38706c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x38706cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_387070:
    // 0x387070: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x387070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_387074:
    // 0x387074: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x387074u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_387078:
    // 0x387078: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x387078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_38707c:
    // 0x38707c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38707cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_387080:
    // 0x387080: 0x40f809  jalr        $v0
label_387084:
    if (ctx->pc == 0x387084u) {
        ctx->pc = 0x387084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387080u;
        // 0x387084: 0x34a5000b  ori         $a1, $a1, 0xB (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)11);
        ctx->in_delay_slot = false;
        ctx->pc = 0x387088u;
        goto label_387088;
    }
    ctx->pc = 0x387080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x387088u);
        ctx->pc = 0x387084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387080u;
        // 0x387084: 0x34a5000b  ori         $a1, $a1, 0xB (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)11);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x387080u, 0x387088u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x387088u;
label_387088:
    // 0x387088: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x387088u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38708c:
    // 0x38708c: 0x5600000c  bnel        $s0, $zero, . + 4 + (0xC << 2)
label_387090:
    if (ctx->pc == 0x387090u) {
        ctx->pc = 0x387090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38708Cu;
        // 0x387090: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387094u;
        goto label_387094;
    }
    ctx->pc = 0x38708Cu;
    {
        const bool branch_taken_0x38708c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x38708c) {
            ctx->pc = 0x387090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38708Cu;
            // 0x387090: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3870C0u;
            goto label_3870c0;
        }
    }
    ctx->pc = 0x387094u;
label_387094:
    // 0x387094: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x387094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_387098:
    // 0x387098: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x387098u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_38709c:
    // 0x38709c: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x38709cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
label_3870a0:
    // 0x3870a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3870a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3870a4:
    // 0x3870a4: 0xc1035f6  jal         func_40D7D8
label_3870a8:
    if (ctx->pc == 0x3870A8u) {
        ctx->pc = 0x3870A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3870A4u;
        // 0x3870a8: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3870ACu;
        goto label_3870ac;
    }
    ctx->pc = 0x3870A4u;
    SET_GPR_U32(ctx, 31, 0x3870ACu);
    ctx->pc = 0x3870A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3870A4u;
    // 0x3870a8: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x3870A4u, 0x3870ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3870ACu;
label_3870ac:
    // 0x3870ac: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x3870acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_3870b0:
    // 0x3870b0: 0xc103628  jal         func_40D8A0
label_3870b4:
    if (ctx->pc == 0x3870B4u) {
        ctx->pc = 0x3870B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3870B0u;
        // 0x3870b4: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3870B8u;
        goto label_3870b8;
    }
    ctx->pc = 0x3870B0u;
    SET_GPR_U32(ctx, 31, 0x3870B8u);
    ctx->pc = 0x3870B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3870B0u;
    // 0x3870b4: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x3870B0u, 0x3870B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3870B8u;
label_3870b8:
    // 0x3870b8: 0x100000ba  b           . + 4 + (0xBA << 2)
label_3870bc:
    if (ctx->pc == 0x3870BCu) {
        ctx->pc = 0x3870BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3870B8u;
        // 0x3870bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3870C0u;
        goto label_3870c0;
    }
    ctx->pc = 0x3870B8u;
    {
        const bool branch_taken_0x3870b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3870BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3870B8u;
        // 0x3870bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3870b8) {
            ctx->pc = 0x3873A4u;
            goto label_3873a4;
        }
    }
    ctx->pc = 0x3870C0u;
label_3870c0:
    // 0x3870c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3870c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3870c4:
    // 0x3870c4: 0xc0bb7e6  jal         func_2EDF98
label_3870c8:
    if (ctx->pc == 0x3870C8u) {
        ctx->pc = 0x3870C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3870C4u;
        // 0x3870c8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3870CCu;
        goto label_3870cc;
    }
    ctx->pc = 0x3870C4u;
    SET_GPR_U32(ctx, 31, 0x3870CCu);
    ctx->pc = 0x3870C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3870C4u;
    // 0x3870c8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3870C4u, 0x3870CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3870CCu;
label_3870cc:
    // 0x3870cc: 0x8ee3ae58  lw          $v1, -0x51A8($s7)
    ctx->pc = 0x3870ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294946392)));
label_3870d0:
    // 0x3870d0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x3870d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_3870d4:
    // 0x3870d4: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x3870d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
label_3870d8:
    // 0x3870d8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3870d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3870dc:
    // 0x3870dc: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x3870dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_3870e0:
    // 0x3870e0: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x3870e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_3870e4:
    // 0x3870e4: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x3870e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_3870e8:
    // 0x3870e8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3870e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_3870ec:
    // 0x3870ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3870ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3870f0:
    // 0x3870f0: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x3870f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
label_3870f4:
    // 0x3870f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3870f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3870f8:
    // 0x3870f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3870f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3870fc:
    // 0x3870fc: 0xc0e6894  jal         func_39A250
label_387100:
    if (ctx->pc == 0x387100u) {
        ctx->pc = 0x387100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3870FCu;
        // 0x387100: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387104u;
        goto label_387104;
    }
    ctx->pc = 0x3870FCu;
    SET_GPR_U32(ctx, 31, 0x387104u);
    ctx->pc = 0x387100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3870FCu;
    // 0x387100: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A250u, 0x3870FCu, 0x387104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387104u;
label_387104:
    // 0x387104: 0xae130008  sw          $s3, 0x8($s0)
    ctx->pc = 0x387104u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 19));
label_387108:
    // 0x387108: 0xae14000c  sw          $s4, 0xC($s0)
    ctx->pc = 0x387108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 20));
label_38710c:
    // 0x38710c: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x38710cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_387110:
    // 0x387110: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x387110u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_387114:
    // 0x387114: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x387114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
label_387118:
    // 0x387118: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x387118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_38711c:
    // 0x38711c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x38711cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_387120:
    // 0x387120: 0xe6010048  swc1        $f1, 0x48($s0)
    ctx->pc = 0x387120u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
label_387124:
    // 0x387124: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x387124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_387128:
    // 0x387128: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x387128u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_38712c:
    // 0x38712c: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x38712cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
label_387130:
    // 0x387130: 0xae120020  sw          $s2, 0x20($s0)
    ctx->pc = 0x387130u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 18));
label_387134:
    // 0x387134: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x387134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_387138:
    // 0x387138: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x387138u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38713c:
    // 0x38713c: 0x2602002c  addiu       $v0, $s0, 0x2C
    ctx->pc = 0x38713cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_387140:
    // 0x387140: 0x26080034  addiu       $t0, $s0, 0x34
    ctx->pc = 0x387140u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
label_387144:
    // 0x387144: 0x2603003c  addiu       $v1, $s0, 0x3C
    ctx->pc = 0x387144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
label_387148:
    // 0x387148: 0x27b200a8  addiu       $s2, $sp, 0xA8
    ctx->pc = 0x387148u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_38714c:
    // 0x38714c: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x38714cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_387150:
    // 0x387150: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x387150u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_387154:
    // 0x387154: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x387154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
label_387158:
    // 0x387158: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x387158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_38715c:
    // 0x38715c: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x38715cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
label_387160:
    // 0x387160: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x387160u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_387164:
    // 0x387164: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x387164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_387168:
    // 0x387168: 0xae080038  sw          $t0, 0x38($s0)
    ctx->pc = 0x387168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 8));
label_38716c:
    // 0x38716c: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x38716cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
label_387170:
    // 0x387170: 0xae080034  sw          $t0, 0x34($s0)
    ctx->pc = 0x387170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 8));
label_387174:
    // 0x387174: 0xc103322  jal         func_40CC88
label_387178:
    if (ctx->pc == 0x387178u) {
        ctx->pc = 0x387178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387174u;
        // 0x387178: 0xae03003c  sw          $v1, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38717Cu;
        goto label_38717c;
    }
    ctx->pc = 0x387174u;
    SET_GPR_U32(ctx, 31, 0x38717Cu);
    ctx->pc = 0x387178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387174u;
    // 0x387178: 0xae03003c  sw          $v1, 0x3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x387174u, 0x38717Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38717Cu;
label_38717c:
    // 0x38717c: 0x10400086  beqz        $v0, . + 4 + (0x86 << 2)
label_387180:
    if (ctx->pc == 0x387180u) {
        ctx->pc = 0x387180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38717Cu;
        // 0x387180: 0x8fa200a8  lw          $v0, 0xA8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387184u;
        goto label_387184;
    }
    ctx->pc = 0x38717Cu;
    {
        const bool branch_taken_0x38717c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x387180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38717Cu;
        // 0x387180: 0x8fa200a8  lw          $v0, 0xA8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38717c) {
            ctx->pc = 0x387398u;
            goto label_387398;
        }
    }
    ctx->pc = 0x387184u;
label_387184:
    // 0x387184: 0x3c11fffc  lui         $s1, 0xFFFC
    ctx->pc = 0x387184u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65532 << 16));
label_387188:
    // 0x387188: 0x3631b000  ori         $s1, $s1, 0xB000
    ctx->pc = 0x387188u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)45056);
label_38718c:
    // 0x38718c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x38718cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_387190:
    // 0x387190: 0x2c422003  sltiu       $v0, $v0, 0x2003
    ctx->pc = 0x387190u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
label_387194:
    // 0x387194: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_387198:
    if (ctx->pc == 0x387198u) {
        ctx->pc = 0x387198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387194u;
        // 0x387198: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38719Cu;
        goto label_38719c;
    }
    ctx->pc = 0x387194u;
    {
        const bool branch_taken_0x387194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x387198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387194u;
        // 0x387198: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387194) {
            ctx->pc = 0x3871C0u;
            goto label_3871c0;
        }
    }
    ctx->pc = 0x38719Cu;
label_38719c:
    // 0x38719c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x38719cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_3871a0:
    // 0x3871a0: 0xafb40070  sw          $s4, 0x70($sp)
    ctx->pc = 0x3871a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 20));
label_3871a4:
    // 0x3871a4: 0xc1035f6  jal         func_40D7D8
label_3871a8:
    if (ctx->pc == 0x3871A8u) {
        ctx->pc = 0x3871A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3871A4u;
        // 0x3871a8: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3871ACu;
        goto label_3871ac;
    }
    ctx->pc = 0x3871A4u;
    SET_GPR_U32(ctx, 31, 0x3871ACu);
    ctx->pc = 0x3871A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3871A4u;
    // 0x3871a8: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x3871A4u, 0x3871ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3871ACu;
label_3871ac:
    // 0x3871ac: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x3871acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
label_3871b0:
    // 0x3871b0: 0xc103628  jal         func_40D8A0
label_3871b4:
    if (ctx->pc == 0x3871B4u) {
        ctx->pc = 0x3871B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3871B0u;
        // 0x3871b4: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3871B8u;
        goto label_3871b8;
    }
    ctx->pc = 0x3871B0u;
    SET_GPR_U32(ctx, 31, 0x3871B8u);
    ctx->pc = 0x3871B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3871B0u;
    // 0x3871b4: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x3871B0u, 0x3871B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3871B8u;
label_3871b8:
    // 0x3871b8: 0x10000077  b           . + 4 + (0x77 << 2)
label_3871bc:
    if (ctx->pc == 0x3871BCu) {
        ctx->pc = 0x3871C0u;
        goto label_3871c0;
    }
    ctx->pc = 0x3871B8u;
    {
        const bool branch_taken_0x3871b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3871b8) {
            ctx->pc = 0x387398u;
            goto label_387398;
        }
    }
    ctx->pc = 0x3871C0u;
label_3871c0:
    // 0x3871c0: 0xc0e3bf0  jal         func_38EFC0
label_3871c4:
    if (ctx->pc == 0x3871C4u) {
        ctx->pc = 0x3871C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3871C0u;
        // 0x3871c4: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3871C8u;
        goto label_3871c8;
    }
    ctx->pc = 0x3871C0u;
    SET_GPR_U32(ctx, 31, 0x3871C8u);
    ctx->pc = 0x3871C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3871C0u;
    // 0x3871c4: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EFC0u, 0x3871C0u, 0x3871C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3871C8u;
label_3871c8:
    // 0x3871c8: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
label_3871cc:
    if (ctx->pc == 0x3871CCu) {
        ctx->pc = 0x3871CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3871C8u;
        // 0x3871cc: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3871D0u;
        goto label_3871d0;
    }
    ctx->pc = 0x3871C8u;
    {
        const bool branch_taken_0x3871c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3871CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3871C8u;
        // 0x3871cc: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3871c8) {
            ctx->pc = 0x387398u;
            goto label_387398;
        }
    }
    ctx->pc = 0x3871D0u;
label_3871d0:
    // 0x3871d0: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_3871d4:
    if (ctx->pc == 0x3871D4u) {
        ctx->pc = 0x3871D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3871D0u;
        // 0x3871d4: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3871D8u;
        goto label_3871d8;
    }
    ctx->pc = 0x3871D0u;
    {
        const bool branch_taken_0x3871d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3871D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3871D0u;
        // 0x3871d4: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3871d0) {
            ctx->pc = 0x387248u;
            goto label_387248;
        }
    }
    ctx->pc = 0x3871D8u;
label_3871d8:
    // 0x3871d8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3871d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3871dc:
    // 0x3871dc: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x3871dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3871e0:
    // 0x3871e0: 0xc103322  jal         func_40CC88
label_3871e4:
    if (ctx->pc == 0x3871E4u) {
        ctx->pc = 0x3871E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3871E0u;
        // 0x3871e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3871E8u;
        goto label_3871e8;
    }
    ctx->pc = 0x3871E0u;
    SET_GPR_U32(ctx, 31, 0x3871E8u);
    ctx->pc = 0x3871E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3871E0u;
    // 0x3871e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x3871E0u, 0x3871E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3871E8u;
label_3871e8:
    // 0x3871e8: 0x1040006b  beqz        $v0, . + 4 + (0x6B << 2)
label_3871ec:
    if (ctx->pc == 0x3871ECu) {
        ctx->pc = 0x3871ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3871E8u;
        // 0x3871ec: 0x8fa200a8  lw          $v0, 0xA8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3871F0u;
        goto label_3871f0;
    }
    ctx->pc = 0x3871E8u;
    {
        const bool branch_taken_0x3871e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3871ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3871E8u;
        // 0x3871ec: 0x8fa200a8  lw          $v0, 0xA8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3871e8) {
            ctx->pc = 0x387398u;
            goto label_387398;
        }
    }
    ctx->pc = 0x3871F0u;
label_3871f0:
    // 0x3871f0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3871f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3871f4:
    // 0x3871f4: 0x2c422003  sltiu       $v0, $v0, 0x2003
    ctx->pc = 0x3871f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
label_3871f8:
    // 0x3871f8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_3871fc:
    if (ctx->pc == 0x3871FCu) {
        ctx->pc = 0x3871FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3871F8u;
        // 0x3871fc: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387200u;
        goto label_387200;
    }
    ctx->pc = 0x3871F8u;
    {
        const bool branch_taken_0x3871f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3871FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3871F8u;
        // 0x3871fc: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3871f8) {
            ctx->pc = 0x387228u;
            goto label_387228;
        }
    }
    ctx->pc = 0x387200u;
label_387200:
    // 0x387200: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x387200u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_387204:
    // 0x387204: 0xafb40080  sw          $s4, 0x80($sp)
    ctx->pc = 0x387204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 20));
label_387208:
    // 0x387208: 0xc1035f6  jal         func_40D7D8
label_38720c:
    if (ctx->pc == 0x38720Cu) {
        ctx->pc = 0x38720Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387208u;
        // 0x38720c: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x387210u;
        goto label_387210;
    }
    ctx->pc = 0x387208u;
    SET_GPR_U32(ctx, 31, 0x387210u);
    ctx->pc = 0x38720Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387208u;
    // 0x38720c: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x387208u, 0x387210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387210u;
label_387210:
    // 0x387210: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x387210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
label_387214:
    // 0x387214: 0xc103628  jal         func_40D8A0
label_387218:
    if (ctx->pc == 0x387218u) {
        ctx->pc = 0x387218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387214u;
        // 0x387218: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38721Cu;
        goto label_38721c;
    }
    ctx->pc = 0x387214u;
    SET_GPR_U32(ctx, 31, 0x38721Cu);
    ctx->pc = 0x387218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387214u;
    // 0x387218: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x387214u, 0x38721Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38721Cu;
label_38721c:
    // 0x38721c: 0x1000005e  b           . + 4 + (0x5E << 2)
label_387220:
    if (ctx->pc == 0x387220u) {
        ctx->pc = 0x387224u;
        goto label_387224;
    }
    ctx->pc = 0x38721Cu;
    {
        const bool branch_taken_0x38721c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38721c) {
            ctx->pc = 0x387398u;
            goto label_387398;
        }
    }
    ctx->pc = 0x387224u;
label_387224:
    // 0x387224: 0x0  nop
    ctx->pc = 0x387224u;
    // NOP
label_387228:
    // 0x387228: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x387228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_38722c:
    // 0x38722c: 0x27a500ac  addiu       $a1, $sp, 0xAC
    ctx->pc = 0x38722cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_387230:
    // 0x387230: 0xc0e17fc  jal         func_385FF0
label_387234:
    if (ctx->pc == 0x387234u) {
        ctx->pc = 0x387234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387230u;
        // 0x387234: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387238u;
        goto label_387238;
    }
    ctx->pc = 0x387230u;
    SET_GPR_U32(ctx, 31, 0x387238u);
    ctx->pc = 0x387234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387230u;
    // 0x387234: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x385FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385FF0u, 0x387230u, 0x387238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387238u;
label_387238:
    // 0x387238: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_38723c:
    if (ctx->pc == 0x38723Cu) {
        ctx->pc = 0x38723Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387238u;
        // 0x38723c: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387240u;
        goto label_387240;
    }
    ctx->pc = 0x387238u;
    {
        const bool branch_taken_0x387238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38723Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387238u;
        // 0x38723c: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387238) {
            ctx->pc = 0x3872B0u;
            goto label_3872b0;
        }
    }
    ctx->pc = 0x387240u;
label_387240:
    // 0x387240: 0x10000055  b           . + 4 + (0x55 << 2)
label_387244:
    if (ctx->pc == 0x387244u) {
        ctx->pc = 0x387248u;
        goto label_387248;
    }
    ctx->pc = 0x387240u;
    {
        const bool branch_taken_0x387240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x387240) {
            ctx->pc = 0x387398u;
            goto label_387398;
        }
    }
    ctx->pc = 0x387248u;
label_387248:
    // 0x387248: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x387248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_38724c:
    // 0x38724c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x38724cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_387250:
    // 0x387250: 0xc103322  jal         func_40CC88
label_387254:
    if (ctx->pc == 0x387254u) {
        ctx->pc = 0x387254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387250u;
        // 0x387254: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387258u;
        goto label_387258;
    }
    ctx->pc = 0x387250u;
    SET_GPR_U32(ctx, 31, 0x387258u);
    ctx->pc = 0x387254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387250u;
    // 0x387254: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x387250u, 0x387258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387258u;
label_387258:
    // 0x387258: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
label_38725c:
    if (ctx->pc == 0x38725Cu) {
        ctx->pc = 0x38725Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387258u;
        // 0x38725c: 0x8fa200a8  lw          $v0, 0xA8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387260u;
        goto label_387260;
    }
    ctx->pc = 0x387258u;
    {
        const bool branch_taken_0x387258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38725Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387258u;
        // 0x38725c: 0x8fa200a8  lw          $v0, 0xA8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387258) {
            ctx->pc = 0x387398u;
            goto label_387398;
        }
    }
    ctx->pc = 0x387260u;
label_387260:
    // 0x387260: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x387260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_387264:
    // 0x387264: 0x2c422003  sltiu       $v0, $v0, 0x2003
    ctx->pc = 0x387264u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
label_387268:
    // 0x387268: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_38726c:
    if (ctx->pc == 0x38726Cu) {
        ctx->pc = 0x38726Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387268u;
        // 0x38726c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387270u;
        goto label_387270;
    }
    ctx->pc = 0x387268u;
    {
        const bool branch_taken_0x387268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38726Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387268u;
        // 0x38726c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387268) {
            ctx->pc = 0x387298u;
            goto label_387298;
        }
    }
    ctx->pc = 0x387270u;
label_387270:
    // 0x387270: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x387270u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_387274:
    // 0x387274: 0xafb40090  sw          $s4, 0x90($sp)
    ctx->pc = 0x387274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 20));
label_387278:
    // 0x387278: 0xc1035f6  jal         func_40D7D8
label_38727c:
    if (ctx->pc == 0x38727Cu) {
        ctx->pc = 0x38727Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387278u;
        // 0x38727c: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x387280u;
        goto label_387280;
    }
    ctx->pc = 0x387278u;
    SET_GPR_U32(ctx, 31, 0x387280u);
    ctx->pc = 0x38727Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387278u;
    // 0x38727c: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x387278u, 0x387280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387280u;
label_387280:
    // 0x387280: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x387280u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
label_387284:
    // 0x387284: 0xc103628  jal         func_40D8A0
label_387288:
    if (ctx->pc == 0x387288u) {
        ctx->pc = 0x387288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387284u;
        // 0x387288: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38728Cu;
        goto label_38728c;
    }
    ctx->pc = 0x387284u;
    SET_GPR_U32(ctx, 31, 0x38728Cu);
    ctx->pc = 0x387288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387284u;
    // 0x387288: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x387284u, 0x38728Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38728Cu;
label_38728c:
    // 0x38728c: 0x10000042  b           . + 4 + (0x42 << 2)
label_387290:
    if (ctx->pc == 0x387290u) {
        ctx->pc = 0x387294u;
        goto label_387294;
    }
    ctx->pc = 0x38728Cu;
    {
        const bool branch_taken_0x38728c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38728c) {
            ctx->pc = 0x387398u;
            goto label_387398;
        }
    }
    ctx->pc = 0x387294u;
label_387294:
    // 0x387294: 0x0  nop
    ctx->pc = 0x387294u;
    // NOP
label_387298:
    // 0x387298: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x387298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_38729c:
    // 0x38729c: 0x27a500ac  addiu       $a1, $sp, 0xAC
    ctx->pc = 0x38729cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_3872a0:
    // 0x3872a0: 0xc0e19fc  jal         func_3867F0
label_3872a4:
    if (ctx->pc == 0x3872A4u) {
        ctx->pc = 0x3872A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3872A0u;
        // 0x3872a4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3872A8u;
        goto label_3872a8;
    }
    ctx->pc = 0x3872A0u;
    SET_GPR_U32(ctx, 31, 0x3872A8u);
    ctx->pc = 0x3872A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3872A0u;
    // 0x3872a4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3867F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3867F0u, 0x3872A0u, 0x3872A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3872A8u;
label_3872a8:
    // 0x3872a8: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
label_3872ac:
    if (ctx->pc == 0x3872ACu) {
        ctx->pc = 0x3872B0u;
        goto label_3872b0;
    }
    ctx->pc = 0x3872A8u;
    {
        const bool branch_taken_0x3872a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3872a8) {
            ctx->pc = 0x387238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_387238;
        }
    }
    ctx->pc = 0x3872B0u;
label_3872b0:
    // 0x3872b0: 0xae160028  sw          $s6, 0x28($s0)
    ctx->pc = 0x3872b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 22));
label_3872b4:
    // 0x3872b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3872b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3872b8:
    // 0x3872b8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x3872b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_3872bc:
    // 0x3872bc: 0x6ba6002f  ldl         $a2, 0x2F($sp)
    ctx->pc = 0x3872bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_3872c0:
    // 0x3872c0: 0x6fa60028  ldr         $a2, 0x28($sp)
    ctx->pc = 0x3872c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_3872c4:
    // 0x3872c4: 0x6ba20037  ldl         $v0, 0x37($sp)
    ctx->pc = 0x3872c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_3872c8:
    // 0x3872c8: 0x6fa20030  ldr         $v0, 0x30($sp)
    ctx->pc = 0x3872c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_3872cc:
    // 0x3872cc: 0x6ba3003f  ldl         $v1, 0x3F($sp)
    ctx->pc = 0x3872ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_3872d0:
    // 0x3872d0: 0x6fa30038  ldr         $v1, 0x38($sp)
    ctx->pc = 0x3872d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_3872d4:
    // 0x3872d4: 0xb2060057  sdl         $a2, 0x57($s0)
    ctx->pc = 0x3872d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3872d8:
    // 0x3872d8: 0xb6060050  sdr         $a2, 0x50($s0)
    ctx->pc = 0x3872d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3872dc:
    // 0x3872dc: 0xb202005f  sdl         $v0, 0x5F($s0)
    ctx->pc = 0x3872dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3872e0:
    // 0x3872e0: 0xb6020058  sdr         $v0, 0x58($s0)
    ctx->pc = 0x3872e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3872e4:
    // 0x3872e4: 0xb2030067  sdl         $v1, 0x67($s0)
    ctx->pc = 0x3872e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3872e8:
    // 0x3872e8: 0xb6030060  sdr         $v1, 0x60($s0)
    ctx->pc = 0x3872e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3872ec:
    // 0x3872ec: 0xc0e6744  jal         func_399D10
label_3872f0:
    if (ctx->pc == 0x3872F0u) {
        ctx->pc = 0x3872F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3872ECu;
        // 0x3872f0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3872F4u;
        goto label_3872f4;
    }
    ctx->pc = 0x3872ECu;
    SET_GPR_U32(ctx, 31, 0x3872F4u);
    ctx->pc = 0x3872F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3872ECu;
    // 0x3872f0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399D10u, 0x3872ECu, 0x3872F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3872F4u;
label_3872f4:
    // 0x3872f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3872f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3872f8:
    // 0x3872f8: 0xc0e69da  jal         func_39A768
label_3872fc:
    if (ctx->pc == 0x3872FCu) {
        ctx->pc = 0x3872FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3872F8u;
        // 0x3872fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387300u;
        goto label_387300;
    }
    ctx->pc = 0x3872F8u;
    SET_GPR_U32(ctx, 31, 0x387300u);
    ctx->pc = 0x3872FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3872F8u;
    // 0x3872fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A768u, 0x3872F8u, 0x387300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387300u;
label_387300:
    // 0x387300: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x387300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_387304:
    // 0x387304: 0x58600010  blezl       $v1, . + 4 + (0x10 << 2)
label_387308:
    if (ctx->pc == 0x387308u) {
        ctx->pc = 0x387308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387304u;
        // 0x387308: 0x26f1ae58  addiu       $s1, $s7, -0x51A8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 4294946392));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38730Cu;
        goto label_38730c;
    }
    ctx->pc = 0x387304u;
    {
        const bool branch_taken_0x387304 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x387304) {
            ctx->pc = 0x387308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x387304u;
            // 0x387308: 0x26f1ae58  addiu       $s1, $s7, -0x51A8 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 4294946392));
            ctx->in_delay_slot = false;
            ctx->pc = 0x387348u;
            goto label_387348;
        }
    }
    ctx->pc = 0x38730Cu;
label_38730c:
    // 0x38730c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x38730cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_387310:
    // 0x387310: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x387310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_387314:
    // 0x387314: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x387314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_387318:
    // 0x387318: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x387318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_38731c:
    // 0x38731c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x38731cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_387320:
    // 0x387320: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
label_387324:
    if (ctx->pc == 0x387324u) {
        ctx->pc = 0x387324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387320u;
        // 0x387324: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387328u;
        goto label_387328;
    }
    ctx->pc = 0x387320u;
    {
        const bool branch_taken_0x387320 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x387320) {
            ctx->pc = 0x387324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x387320u;
            // 0x387324: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x387334u;
            goto label_387334;
        }
    }
    ctx->pc = 0x387328u;
label_387328:
    // 0x387328: 0xc0e39e0  jal         func_38E780
label_38732c:
    if (ctx->pc == 0x38732Cu) {
        ctx->pc = 0x387330u;
        goto label_387330;
    }
    ctx->pc = 0x387328u;
    SET_GPR_U32(ctx, 31, 0x387330u);
    ctx->pc = 0x38E780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E780u, 0x387328u, 0x387330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387330u;
label_387330:
    // 0x387330: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x387330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_387334:
    // 0x387334: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x387334u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_387338:
    // 0x387338: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x387338u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_38733c:
    // 0x38733c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_387340:
    if (ctx->pc == 0x387340u) {
        ctx->pc = 0x387340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38733Cu;
        // 0x387340: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387344u;
        goto label_387344;
    }
    ctx->pc = 0x38733Cu;
    {
        const bool branch_taken_0x38733c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x387340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38733Cu;
        // 0x387340: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38733c) {
            ctx->pc = 0x387310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_387310;
        }
    }
    ctx->pc = 0x387344u;
label_387344:
    // 0x387344: 0x26f1ae58  addiu       $s1, $s7, -0x51A8
    ctx->pc = 0x387344u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 4294946392));
label_387348:
    // 0x387348: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x387348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38734c:
    // 0x38734c: 0xc104c80  jal         func_413200
label_387350:
    if (ctx->pc == 0x387350u) {
        ctx->pc = 0x387350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38734Cu;
        // 0x387350: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387354u;
        goto label_387354;
    }
    ctx->pc = 0x38734Cu;
    SET_GPR_U32(ctx, 31, 0x387354u);
    ctx->pc = 0x387350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38734Cu;
    // 0x387350: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413200u, 0x38734Cu, 0x387354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387354u;
label_387354:
    // 0x387354: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x387354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_387358:
    // 0x387358: 0xaf80bd10  sw          $zero, -0x42F0($gp)
    ctx->pc = 0x387358u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950160), GPR_U32(ctx, 0));
label_38735c:
    // 0x38735c: 0xaf80bd14  sw          $zero, -0x42EC($gp)
    ctx->pc = 0x38735cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950164), GPR_U32(ctx, 0));
label_387360:
    // 0x387360: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x387360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_387364:
    // 0x387364: 0xc1049e2  jal         func_412788
label_387368:
    if (ctx->pc == 0x387368u) {
        ctx->pc = 0x387368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387364u;
        // 0x387368: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38736Cu;
        goto label_38736c;
    }
    ctx->pc = 0x387364u;
    SET_GPR_U32(ctx, 31, 0x38736Cu);
    ctx->pc = 0x387368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387364u;
    // 0x387368: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412788u, 0x387364u, 0x38736Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38736Cu;
label_38736c:
    // 0x38736c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_387370:
    if (ctx->pc == 0x387370u) {
        ctx->pc = 0x387370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38736Cu;
        // 0x387370: 0x8f85bd10  lw          $a1, -0x42F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387374u;
        goto label_387374;
    }
    ctx->pc = 0x38736Cu;
    {
        const bool branch_taken_0x38736c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x387370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38736Cu;
        // 0x387370: 0x8f85bd10  lw          $a1, -0x42F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38736c) {
            ctx->pc = 0x387398u;
            goto label_387398;
        }
    }
    ctx->pc = 0x387374u;
label_387374:
    // 0x387374: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_387378:
    if (ctx->pc == 0x387378u) {
        ctx->pc = 0x387378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387374u;
        // 0x387378: 0x8f87bd14  lw          $a3, -0x42EC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38737Cu;
        goto label_38737c;
    }
    ctx->pc = 0x387374u;
    {
        const bool branch_taken_0x387374 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x387378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387374u;
        // 0x387378: 0x8f87bd14  lw          $a3, -0x42EC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387374) {
            ctx->pc = 0x387388u;
            goto label_387388;
        }
    }
    ctx->pc = 0x38737Cu;
label_38737c:
    // 0x38737c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38737cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_387380:
    // 0x387380: 0xc104b0a  jal         func_412C28
label_387384:
    if (ctx->pc == 0x387384u) {
        ctx->pc = 0x387384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387380u;
        // 0x387384: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387388u;
        goto label_387388;
    }
    ctx->pc = 0x387380u;
    SET_GPR_U32(ctx, 31, 0x387388u);
    ctx->pc = 0x387384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387380u;
    // 0x387384: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412C28u, 0x387380u, 0x387388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387388u;
label_387388:
    // 0x387388: 0xc0e685c  jal         func_39A170
label_38738c:
    if (ctx->pc == 0x38738Cu) {
        ctx->pc = 0x38738Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387388u;
        // 0x38738c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387390u;
        goto label_387390;
    }
    ctx->pc = 0x387388u;
    SET_GPR_U32(ctx, 31, 0x387390u);
    ctx->pc = 0x38738Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387388u;
    // 0x38738c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A170u, 0x387388u, 0x387390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387390u;
label_387390:
    // 0x387390: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_387394:
    if (ctx->pc == 0x387394u) {
        ctx->pc = 0x387394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387390u;
        // 0x387394: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387398u;
        goto label_387398;
    }
    ctx->pc = 0x387390u;
    {
        const bool branch_taken_0x387390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x387394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387390u;
        // 0x387394: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387390) {
            ctx->pc = 0x3873A4u;
            goto label_3873a4;
        }
    }
    ctx->pc = 0x387398u;
label_387398:
    // 0x387398: 0xc0e653c  jal         func_3994F0
label_38739c:
    if (ctx->pc == 0x38739Cu) {
        ctx->pc = 0x38739Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387398u;
        // 0x38739c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3873A0u;
        goto label_3873a0;
    }
    ctx->pc = 0x387398u;
    SET_GPR_U32(ctx, 31, 0x3873A0u);
    ctx->pc = 0x38739Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387398u;
    // 0x38739c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3994F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3994F0u, 0x387398u, 0x3873A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3873A0u;
label_3873a0:
    // 0x3873a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3873a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3873a4:
    // 0x3873a4: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x3873a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_3873a8:
    // 0x3873a8: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x3873a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_3873ac:
    // 0x3873ac: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x3873acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_3873b0:
    // 0x3873b0: 0x7bb30100  lq          $s3, 0x100($sp)
    ctx->pc = 0x3873b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_3873b4:
    // 0x3873b4: 0x7bb400f0  lq          $s4, 0xF0($sp)
    ctx->pc = 0x3873b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_3873b8:
    // 0x3873b8: 0x7bb500e0  lq          $s5, 0xE0($sp)
    ctx->pc = 0x3873b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3873bc:
    // 0x3873bc: 0x7bb600d0  lq          $s6, 0xD0($sp)
    ctx->pc = 0x3873bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3873c0:
    // 0x3873c0: 0x7bb700c0  lq          $s7, 0xC0($sp)
    ctx->pc = 0x3873c0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3873c4:
    // 0x3873c4: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x3873c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_3873c8:
    // 0x3873c8: 0x3e00008  jr          $ra
label_3873cc:
    if (ctx->pc == 0x3873CCu) {
        ctx->pc = 0x3873CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3873C8u;
        // 0x3873cc: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3873D0u;
        goto label_fallthrough_0x3873c8;
    }
    ctx->pc = 0x3873C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3873CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3873C8u;
        // 0x3873cc: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3873C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3873c8:
    ctx->pc = 0x3873D0u;
}
