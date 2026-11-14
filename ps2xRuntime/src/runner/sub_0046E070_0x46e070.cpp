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

// Function: sub_0046E070
// Address: 0x46e070 - 0x46e380
void sub_0046E070_0x46e070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046E070_0x46e070");
#endif

    switch (ctx->pc) {
        case 0x46e070u: goto label_46e070;
        case 0x46e074u: goto label_46e074;
        case 0x46e078u: goto label_46e078;
        case 0x46e07cu: goto label_46e07c;
        case 0x46e080u: goto label_46e080;
        case 0x46e084u: goto label_46e084;
        case 0x46e088u: goto label_46e088;
        case 0x46e08cu: goto label_46e08c;
        case 0x46e090u: goto label_46e090;
        case 0x46e094u: goto label_46e094;
        case 0x46e098u: goto label_46e098;
        case 0x46e09cu: goto label_46e09c;
        case 0x46e0a0u: goto label_46e0a0;
        case 0x46e0a4u: goto label_46e0a4;
        case 0x46e0a8u: goto label_46e0a8;
        case 0x46e0acu: goto label_46e0ac;
        case 0x46e0b0u: goto label_46e0b0;
        case 0x46e0b4u: goto label_46e0b4;
        case 0x46e0b8u: goto label_46e0b8;
        case 0x46e0bcu: goto label_46e0bc;
        case 0x46e0c0u: goto label_46e0c0;
        case 0x46e0c4u: goto label_46e0c4;
        case 0x46e0c8u: goto label_46e0c8;
        case 0x46e0ccu: goto label_46e0cc;
        case 0x46e0d0u: goto label_46e0d0;
        case 0x46e0d4u: goto label_46e0d4;
        case 0x46e0d8u: goto label_46e0d8;
        case 0x46e0dcu: goto label_46e0dc;
        case 0x46e0e0u: goto label_46e0e0;
        case 0x46e0e4u: goto label_46e0e4;
        case 0x46e0e8u: goto label_46e0e8;
        case 0x46e0ecu: goto label_46e0ec;
        case 0x46e0f0u: goto label_46e0f0;
        case 0x46e0f4u: goto label_46e0f4;
        case 0x46e0f8u: goto label_46e0f8;
        case 0x46e0fcu: goto label_46e0fc;
        case 0x46e100u: goto label_46e100;
        case 0x46e104u: goto label_46e104;
        case 0x46e108u: goto label_46e108;
        case 0x46e10cu: goto label_46e10c;
        case 0x46e110u: goto label_46e110;
        case 0x46e114u: goto label_46e114;
        case 0x46e118u: goto label_46e118;
        case 0x46e11cu: goto label_46e11c;
        case 0x46e120u: goto label_46e120;
        case 0x46e124u: goto label_46e124;
        case 0x46e128u: goto label_46e128;
        case 0x46e12cu: goto label_46e12c;
        case 0x46e130u: goto label_46e130;
        case 0x46e134u: goto label_46e134;
        case 0x46e138u: goto label_46e138;
        case 0x46e13cu: goto label_46e13c;
        case 0x46e140u: goto label_46e140;
        case 0x46e144u: goto label_46e144;
        case 0x46e148u: goto label_46e148;
        case 0x46e14cu: goto label_46e14c;
        case 0x46e150u: goto label_46e150;
        case 0x46e154u: goto label_46e154;
        case 0x46e158u: goto label_46e158;
        case 0x46e15cu: goto label_46e15c;
        case 0x46e160u: goto label_46e160;
        case 0x46e164u: goto label_46e164;
        case 0x46e168u: goto label_46e168;
        case 0x46e16cu: goto label_46e16c;
        case 0x46e170u: goto label_46e170;
        case 0x46e174u: goto label_46e174;
        case 0x46e178u: goto label_46e178;
        case 0x46e17cu: goto label_46e17c;
        case 0x46e180u: goto label_46e180;
        case 0x46e184u: goto label_46e184;
        case 0x46e188u: goto label_46e188;
        case 0x46e18cu: goto label_46e18c;
        case 0x46e190u: goto label_46e190;
        case 0x46e194u: goto label_46e194;
        case 0x46e198u: goto label_46e198;
        case 0x46e19cu: goto label_46e19c;
        case 0x46e1a0u: goto label_46e1a0;
        case 0x46e1a4u: goto label_46e1a4;
        case 0x46e1a8u: goto label_46e1a8;
        case 0x46e1acu: goto label_46e1ac;
        case 0x46e1b0u: goto label_46e1b0;
        case 0x46e1b4u: goto label_46e1b4;
        case 0x46e1b8u: goto label_46e1b8;
        case 0x46e1bcu: goto label_46e1bc;
        case 0x46e1c0u: goto label_46e1c0;
        case 0x46e1c4u: goto label_46e1c4;
        case 0x46e1c8u: goto label_46e1c8;
        case 0x46e1ccu: goto label_46e1cc;
        case 0x46e1d0u: goto label_46e1d0;
        case 0x46e1d4u: goto label_46e1d4;
        case 0x46e1d8u: goto label_46e1d8;
        case 0x46e1dcu: goto label_46e1dc;
        case 0x46e1e0u: goto label_46e1e0;
        case 0x46e1e4u: goto label_46e1e4;
        case 0x46e1e8u: goto label_46e1e8;
        case 0x46e1ecu: goto label_46e1ec;
        case 0x46e1f0u: goto label_46e1f0;
        case 0x46e1f4u: goto label_46e1f4;
        case 0x46e1f8u: goto label_46e1f8;
        case 0x46e1fcu: goto label_46e1fc;
        case 0x46e200u: goto label_46e200;
        case 0x46e204u: goto label_46e204;
        case 0x46e208u: goto label_46e208;
        case 0x46e20cu: goto label_46e20c;
        case 0x46e210u: goto label_46e210;
        case 0x46e214u: goto label_46e214;
        case 0x46e218u: goto label_46e218;
        case 0x46e21cu: goto label_46e21c;
        case 0x46e220u: goto label_46e220;
        case 0x46e224u: goto label_46e224;
        case 0x46e228u: goto label_46e228;
        case 0x46e22cu: goto label_46e22c;
        case 0x46e230u: goto label_46e230;
        case 0x46e234u: goto label_46e234;
        case 0x46e238u: goto label_46e238;
        case 0x46e23cu: goto label_46e23c;
        case 0x46e240u: goto label_46e240;
        case 0x46e244u: goto label_46e244;
        case 0x46e248u: goto label_46e248;
        case 0x46e24cu: goto label_46e24c;
        case 0x46e250u: goto label_46e250;
        case 0x46e254u: goto label_46e254;
        case 0x46e258u: goto label_46e258;
        case 0x46e25cu: goto label_46e25c;
        case 0x46e260u: goto label_46e260;
        case 0x46e264u: goto label_46e264;
        case 0x46e268u: goto label_46e268;
        case 0x46e26cu: goto label_46e26c;
        case 0x46e270u: goto label_46e270;
        case 0x46e274u: goto label_46e274;
        case 0x46e278u: goto label_46e278;
        case 0x46e27cu: goto label_46e27c;
        case 0x46e280u: goto label_46e280;
        case 0x46e284u: goto label_46e284;
        case 0x46e288u: goto label_46e288;
        case 0x46e28cu: goto label_46e28c;
        case 0x46e290u: goto label_46e290;
        case 0x46e294u: goto label_46e294;
        case 0x46e298u: goto label_46e298;
        case 0x46e29cu: goto label_46e29c;
        case 0x46e2a0u: goto label_46e2a0;
        case 0x46e2a4u: goto label_46e2a4;
        case 0x46e2a8u: goto label_46e2a8;
        case 0x46e2acu: goto label_46e2ac;
        case 0x46e2b0u: goto label_46e2b0;
        case 0x46e2b4u: goto label_46e2b4;
        case 0x46e2b8u: goto label_46e2b8;
        case 0x46e2bcu: goto label_46e2bc;
        case 0x46e2c0u: goto label_46e2c0;
        case 0x46e2c4u: goto label_46e2c4;
        case 0x46e2c8u: goto label_46e2c8;
        case 0x46e2ccu: goto label_46e2cc;
        case 0x46e2d0u: goto label_46e2d0;
        case 0x46e2d4u: goto label_46e2d4;
        case 0x46e2d8u: goto label_46e2d8;
        case 0x46e2dcu: goto label_46e2dc;
        case 0x46e2e0u: goto label_46e2e0;
        case 0x46e2e4u: goto label_46e2e4;
        case 0x46e2e8u: goto label_46e2e8;
        case 0x46e2ecu: goto label_46e2ec;
        case 0x46e2f0u: goto label_46e2f0;
        case 0x46e2f4u: goto label_46e2f4;
        case 0x46e2f8u: goto label_46e2f8;
        case 0x46e2fcu: goto label_46e2fc;
        case 0x46e300u: goto label_46e300;
        case 0x46e304u: goto label_46e304;
        case 0x46e308u: goto label_46e308;
        case 0x46e30cu: goto label_46e30c;
        case 0x46e310u: goto label_46e310;
        case 0x46e314u: goto label_46e314;
        case 0x46e318u: goto label_46e318;
        case 0x46e31cu: goto label_46e31c;
        case 0x46e320u: goto label_46e320;
        case 0x46e324u: goto label_46e324;
        case 0x46e328u: goto label_46e328;
        case 0x46e32cu: goto label_46e32c;
        case 0x46e330u: goto label_46e330;
        case 0x46e334u: goto label_46e334;
        case 0x46e338u: goto label_46e338;
        case 0x46e33cu: goto label_46e33c;
        case 0x46e340u: goto label_46e340;
        case 0x46e344u: goto label_46e344;
        case 0x46e348u: goto label_46e348;
        case 0x46e34cu: goto label_46e34c;
        case 0x46e350u: goto label_46e350;
        case 0x46e354u: goto label_46e354;
        case 0x46e358u: goto label_46e358;
        case 0x46e35cu: goto label_46e35c;
        case 0x46e360u: goto label_46e360;
        case 0x46e364u: goto label_46e364;
        case 0x46e368u: goto label_46e368;
        case 0x46e36cu: goto label_46e36c;
        case 0x46e370u: goto label_46e370;
        case 0x46e374u: goto label_46e374;
        case 0x46e378u: goto label_46e378;
        case 0x46e37cu: goto label_46e37c;
        default: break;
    }

    ctx->pc = 0x46e070u;

label_46e070:
    // 0x46e070: 0x27bdfdd0  addiu       $sp, $sp, -0x230
    ctx->pc = 0x46e070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966736));
label_46e074:
    // 0x46e074: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x46e074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_46e078:
    // 0x46e078: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x46e078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_46e07c:
    // 0x46e07c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x46e07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_46e080:
    // 0x46e080: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x46e080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_46e084:
    // 0x46e084: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x46e084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_46e088:
    // 0x46e088: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x46e088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_46e08c:
    // 0x46e08c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x46e08cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_46e090:
    // 0x46e090: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x46e090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_46e094:
    // 0x46e094: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x46e094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_46e098:
    // 0x46e098: 0xafa40210  sw          $a0, 0x210($sp)
    ctx->pc = 0x46e098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 4));
label_46e09c:
    // 0x46e09c: 0xafa50220  sw          $a1, 0x220($sp)
    ctx->pc = 0x46e09cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 5));
label_46e0a0:
    // 0x46e0a0: 0xa7a0020e  sh          $zero, 0x20E($sp)
    ctx->pc = 0x46e0a0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 526), (uint16_t)GPR_U32(ctx, 0));
label_46e0a4:
    // 0x46e0a4: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x46e0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_46e0a8:
    // 0x46e0a8: 0xc119d5c  jal         func_467570
label_46e0ac:
    if (ctx->pc == 0x46E0ACu) {
        ctx->pc = 0x46E0B0u;
        goto label_46e0b0;
    }
    ctx->pc = 0x46E0A8u;
    SET_GPR_U32(ctx, 31, 0x46E0B0u);
    ctx->pc = 0x467570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467570u, 0x46E0A8u, 0x46E0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46E0B0u;
label_46e0b0:
    // 0x46e0b0: 0x8fa40210  lw          $a0, 0x210($sp)
    ctx->pc = 0x46e0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_46e0b4:
    // 0x46e0b4: 0xc0614e8  jal         func_1853A0
label_46e0b8:
    if (ctx->pc == 0x46E0B8u) {
        ctx->pc = 0x46E0BCu;
        goto label_46e0bc;
    }
    ctx->pc = 0x46E0B4u;
    SET_GPR_U32(ctx, 31, 0x46E0BCu);
    ctx->pc = 0x1853A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1853A0u, 0x46E0B4u, 0x46E0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46E0BCu;
label_46e0bc:
    // 0x46e0bc: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x46e0bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_46e0c0:
    // 0x46e0c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46e0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46e0c4:
    // 0x46e0c4: 0x16020019  bne         $s0, $v0, . + 4 + (0x19 << 2)
label_46e0c8:
    if (ctx->pc == 0x46E0C8u) {
        ctx->pc = 0x46E0CCu;
        goto label_46e0cc;
    }
    ctx->pc = 0x46E0C4u;
    {
        const bool branch_taken_0x46e0c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x46e0c4) {
            ctx->pc = 0x46E12Cu;
            goto label_46e12c;
        }
    }
    ctx->pc = 0x46E0CCu;
label_46e0cc:
    // 0x46e0cc: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x46e0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_46e0d0:
    // 0x46e0d0: 0x2785b300  addiu       $a1, $gp, -0x4D00
    ctx->pc = 0x46e0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947584));
label_46e0d4:
    // 0x46e0d4: 0xc040304  jal         func_100C10
label_46e0d8:
    if (ctx->pc == 0x46E0D8u) {
        ctx->pc = 0x46E0DCu;
        goto label_46e0dc;
    }
    ctx->pc = 0x46E0D4u;
    SET_GPR_U32(ctx, 31, 0x46E0DCu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x46E0D4u, 0x46E0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46E0DCu;
label_46e0dc:
    // 0x46e0dc: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x46e0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_46e0e0:
    // 0x46e0e0: 0x8fa50220  lw          $a1, 0x220($sp)
    ctx->pc = 0x46e0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
label_46e0e4:
    // 0x46e0e4: 0x27a601f0  addiu       $a2, $sp, 0x1F0
    ctx->pc = 0x46e0e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_46e0e8:
    // 0x46e0e8: 0xc119dc4  jal         func_467710
label_46e0ec:
    if (ctx->pc == 0x46E0ECu) {
        ctx->pc = 0x46E0F0u;
        goto label_46e0f0;
    }
    ctx->pc = 0x46E0E8u;
    SET_GPR_U32(ctx, 31, 0x46E0F0u);
    ctx->pc = 0x467710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467710u, 0x46E0E8u, 0x46E0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46E0F0u;
label_46e0f0:
    // 0x46e0f0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x46e0f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46e0f4:
    // 0x46e0f4: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x46e0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_46e0f8:
    // 0x46e0f8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46e0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_46e0fc:
    // 0x46e0fc: 0xc0402d4  jal         func_100B50
label_46e100:
    if (ctx->pc == 0x46E100u) {
        ctx->pc = 0x46E104u;
        goto label_46e104;
    }
    ctx->pc = 0x46E0FCu;
    SET_GPR_U32(ctx, 31, 0x46E104u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x46E0FCu, 0x46E104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46E104u;
label_46e104:
    // 0x46e104: 0x16600021  bnez        $s3, . + 4 + (0x21 << 2)
label_46e108:
    if (ctx->pc == 0x46E108u) {
        ctx->pc = 0x46E10Cu;
        goto label_46e10c;
    }
    ctx->pc = 0x46E104u;
    {
        const bool branch_taken_0x46e104 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x46e104) {
            ctx->pc = 0x46E18Cu;
            goto label_46e18c;
        }
    }
    ctx->pc = 0x46E10Cu;
label_46e10c:
    // 0x46e10c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x46e10cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46e110:
    // 0x46e110: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x46e110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_46e114:
    // 0x46e114: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46e114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_46e118:
    // 0x46e118: 0xc119d90  jal         func_467640
label_46e11c:
    if (ctx->pc == 0x46E11Cu) {
        ctx->pc = 0x46E120u;
        goto label_46e120;
    }
    ctx->pc = 0x46E118u;
    SET_GPR_U32(ctx, 31, 0x46E120u);
    ctx->pc = 0x467640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467640u, 0x46E118u, 0x46E120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46E120u;
label_46e120:
    // 0x46e120: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x46e120u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_46e124:
    // 0x46e124: 0x1000008a  b           . + 4 + (0x8A << 2)
label_46e128:
    if (ctx->pc == 0x46E128u) {
        ctx->pc = 0x46E12Cu;
        goto label_46e12c;
    }
    ctx->pc = 0x46E124u;
    {
        const bool branch_taken_0x46e124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46e124) {
            ctx->pc = 0x46E350u;
            goto label_46e350;
        }
    }
    ctx->pc = 0x46E12Cu;
label_46e12c:
    // 0x46e12c: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x46e12cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_46e130:
    // 0x46e130: 0x2785b304  addiu       $a1, $gp, -0x4CFC
    ctx->pc = 0x46e130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947588));
label_46e134:
    // 0x46e134: 0xc040304  jal         func_100C10
label_46e138:
    if (ctx->pc == 0x46E138u) {
        ctx->pc = 0x46E13Cu;
        goto label_46e13c;
    }
    ctx->pc = 0x46E134u;
    SET_GPR_U32(ctx, 31, 0x46E13Cu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x46E134u, 0x46E13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46E13Cu;
label_46e13c:
    // 0x46e13c: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x46e13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_46e140:
    // 0x46e140: 0x8fa50220  lw          $a1, 0x220($sp)
    ctx->pc = 0x46e140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
label_46e144:
    // 0x46e144: 0x27a601e0  addiu       $a2, $sp, 0x1E0
    ctx->pc = 0x46e144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_46e148:
    // 0x46e148: 0xc119dc4  jal         func_467710
label_46e14c:
    if (ctx->pc == 0x46E14Cu) {
        ctx->pc = 0x46E150u;
        goto label_46e150;
    }
    ctx->pc = 0x46E148u;
    SET_GPR_U32(ctx, 31, 0x46E150u);
    ctx->pc = 0x467710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467710u, 0x46E148u, 0x46E150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46E150u;
label_46e150:
    // 0x46e150: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x46e150u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46e154:
    // 0x46e154: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x46e154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_46e158:
    // 0x46e158: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46e158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_46e15c:
    // 0x46e15c: 0xc0402d4  jal         func_100B50
label_46e160:
    if (ctx->pc == 0x46E160u) {
        ctx->pc = 0x46E164u;
        goto label_46e164;
    }
    ctx->pc = 0x46E15Cu;
    SET_GPR_U32(ctx, 31, 0x46E164u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x46E15Cu, 0x46E164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46E164u;
label_46e164:
    // 0x46e164: 0x16400009  bnez        $s2, . + 4 + (0x9 << 2)
label_46e168:
    if (ctx->pc == 0x46E168u) {
        ctx->pc = 0x46E16Cu;
        goto label_46e16c;
    }
    ctx->pc = 0x46E164u;
    {
        const bool branch_taken_0x46e164 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x46e164) {
            ctx->pc = 0x46E18Cu;
            goto label_46e18c;
        }
    }
    ctx->pc = 0x46E16Cu;
label_46e16c:
    // 0x46e16c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x46e16cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46e170:
    // 0x46e170: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x46e170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_46e174:
    // 0x46e174: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46e174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_46e178:
    // 0x46e178: 0xc119d90  jal         func_467640
label_46e17c:
    if (ctx->pc == 0x46E17Cu) {
        ctx->pc = 0x46E180u;
        goto label_46e180;
    }
    ctx->pc = 0x46E178u;
    SET_GPR_U32(ctx, 31, 0x46E180u);
    ctx->pc = 0x467640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467640u, 0x46E178u, 0x46E180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46E180u;
label_46e180:
    // 0x46e180: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x46e180u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_46e184:
    // 0x46e184: 0x10000072  b           . + 4 + (0x72 << 2)
label_46e188:
    if (ctx->pc == 0x46E188u) {
        ctx->pc = 0x46E18Cu;
        goto label_46e18c;
    }
    ctx->pc = 0x46E184u;
    {
        const bool branch_taken_0x46e184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46e184) {
            ctx->pc = 0x46E350u;
            goto label_46e350;
        }
    }
    ctx->pc = 0x46E18Cu;
label_46e18c:
    // 0x46e18c: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x46e18cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_46e190:
    // 0x46e190: 0xc119e50  jal         func_467940
label_46e194:
    if (ctx->pc == 0x46E194u) {
        ctx->pc = 0x46E198u;
        goto label_46e198;
    }
    ctx->pc = 0x46E190u;
    SET_GPR_U32(ctx, 31, 0x46E198u);
    ctx->pc = 0x467940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467940u, 0x46E190u, 0x46E198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46E198u;
label_46e198:
    // 0x46e198: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x46e198u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46e19c:
    // 0x46e19c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46e19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46e1a0:
    // 0x46e1a0: 0x12020019  beq         $s0, $v0, . + 4 + (0x19 << 2)
label_46e1a4:
    if (ctx->pc == 0x46E1A4u) {
        ctx->pc = 0x46E1A8u;
        goto label_46e1a8;
    }
    ctx->pc = 0x46E1A0u;
    {
        const bool branch_taken_0x46e1a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x46e1a0) {
            ctx->pc = 0x46E208u;
            goto label_46e208;
        }
    }
    ctx->pc = 0x46E1A8u;
label_46e1a8:
    // 0x46e1a8: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x46e1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_46e1ac:
    // 0x46e1ac: 0x27a5020e  addiu       $a1, $sp, 0x20E
    ctx->pc = 0x46e1acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 526));
label_46e1b0:
    // 0x46e1b0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x46e1b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46e1b4:
    // 0x46e1b4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x46e1b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46e1b8:
    // 0x46e1b8: 0xc119ea4  jal         func_467A90
label_46e1bc:
    if (ctx->pc == 0x46E1BCu) {
        ctx->pc = 0x46E1C0u;
        goto label_46e1c0;
    }
    ctx->pc = 0x46E1B8u;
    SET_GPR_U32(ctx, 31, 0x46E1C0u);
    ctx->pc = 0x467A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467A90u, 0x46E1B8u, 0x46E1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46E1C0u;
label_46e1c0:
    // 0x46e1c0: 0x97a2020e  lhu         $v0, 0x20E($sp)
    ctx->pc = 0x46e1c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 526)));
label_46e1c4:
    // 0x46e1c4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x46e1c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_46e1c8:
    // 0x46e1c8: 0x3402fffe  ori         $v0, $zero, 0xFFFE
    ctx->pc = 0x46e1c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
label_46e1cc:
    // 0x46e1cc: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_46e1d0:
    if (ctx->pc == 0x46E1D0u) {
        ctx->pc = 0x46E1D4u;
        goto label_46e1d4;
    }
    ctx->pc = 0x46E1CCu;
    {
        const bool branch_taken_0x46e1cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x46e1cc) {
            ctx->pc = 0x46E1E8u;
            goto label_46e1e8;
        }
    }
    ctx->pc = 0x46E1D4u;
label_46e1d4:
    // 0x46e1d4: 0x97a2020e  lhu         $v0, 0x20E($sp)
    ctx->pc = 0x46e1d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 526)));
label_46e1d8:
    // 0x46e1d8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x46e1d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_46e1dc:
    // 0x46e1dc: 0x3402feff  ori         $v0, $zero, 0xFEFF
    ctx->pc = 0x46e1dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65279);
label_46e1e0:
    // 0x46e1e0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_46e1e4:
    if (ctx->pc == 0x46E1E4u) {
        ctx->pc = 0x46E1E8u;
        goto label_46e1e8;
    }
    ctx->pc = 0x46E1E0u;
    {
        const bool branch_taken_0x46e1e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x46e1e0) {
            ctx->pc = 0x46E1F4u;
            goto label_46e1f4;
        }
    }
    ctx->pc = 0x46E1E8u;
label_46e1e8:
    // 0x46e1e8: 0x2308823  subu        $s1, $s1, $s0
    ctx->pc = 0x46e1e8u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_46e1ec:
    // 0x46e1ec: 0x10000006  b           . + 4 + (0x6 << 2)
label_46e1f0:
    if (ctx->pc == 0x46E1F0u) {
        ctx->pc = 0x46E1F4u;
        goto label_46e1f4;
    }
    ctx->pc = 0x46E1ECu;
    {
        const bool branch_taken_0x46e1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46e1ec) {
            ctx->pc = 0x46E208u;
            goto label_46e208;
        }
    }
    ctx->pc = 0x46E1F4u;
label_46e1f4:
    // 0x46e1f4: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x46e1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_46e1f8:
    // 0x46e1f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x46e1f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46e1fc:
    // 0x46e1fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x46e1fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46e200:
    // 0x46e200: 0xc119eb8  jal         func_467AE0
label_46e204:
    if (ctx->pc == 0x46E204u) {
        ctx->pc = 0x46E208u;
        goto label_46e208;
    }
    ctx->pc = 0x46E200u;
    SET_GPR_U32(ctx, 31, 0x46E208u);
    ctx->pc = 0x467AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467AE0u, 0x46E200u, 0x46E208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46E208u;
label_46e208:
    // 0x46e208: 0x230001b  divu        $zero, $s1, $s0
    ctx->pc = 0x46e208u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,17); } }
label_46e20c:
    // 0x46e20c: 0x1012  mflo        $v0
    ctx->pc = 0x46e20cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_46e210:
    // 0x46e210: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x46e210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_46e214:
    // 0x46e214: 0x8fa40210  lw          $a0, 0x210($sp)
    ctx->pc = 0x46e214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_46e218:
    // 0x46e218: 0xc11939c  jal         func_464E70
label_46e21c:
    if (ctx->pc == 0x46E21Cu) {
        ctx->pc = 0x46E220u;
        goto label_46e220;
    }
    ctx->pc = 0x46E218u;
    SET_GPR_U32(ctx, 31, 0x46E220u);
    ctx->pc = 0x464E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464E70u, 0x46E218u, 0x46E220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46E220u;
label_46e220:
    // 0x46e220: 0x8fa40210  lw          $a0, 0x210($sp)
    ctx->pc = 0x46e220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_46e224:
    // 0x46e224: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x46e224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46e228:
    // 0x46e228: 0xc0614dc  jal         func_185370
label_46e22c:
    if (ctx->pc == 0x46E22Cu) {
        ctx->pc = 0x46E230u;
        goto label_46e230;
    }
    ctx->pc = 0x46E228u;
    SET_GPR_U32(ctx, 31, 0x46E230u);
    ctx->pc = 0x185370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185370u, 0x46E228u, 0x46E230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46E230u;
label_46e230:
    // 0x46e230: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x46e230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_46e234:
    // 0x46e234: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x46e234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46e238:
    // 0x46e238: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x46e238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46e23c:
    // 0x46e23c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x46e23cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46e240:
    // 0x46e240: 0xc119ea4  jal         func_467A90
label_46e244:
    if (ctx->pc == 0x46E244u) {
        ctx->pc = 0x46E248u;
        goto label_46e248;
    }
    ctx->pc = 0x46E240u;
    SET_GPR_U32(ctx, 31, 0x46E248u);
    ctx->pc = 0x467A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467A90u, 0x46E240u, 0x46E248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46E248u;
label_46e248:
    // 0x46e248: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x46e248u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46e24c:
    // 0x46e24c: 0x2f0001b  divu        $zero, $s7, $s0
    ctx->pc = 0x46e24cu;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 23) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 23) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,23); } }
label_46e250:
    // 0x46e250: 0x2812  mflo        $a1
    ctx->pc = 0x46e250u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_46e254:
    // 0x46e254: 0x8fa40210  lw          $a0, 0x210($sp)
    ctx->pc = 0x46e254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_46e258:
    // 0x46e258: 0xc061d64  jal         func_187590
label_46e25c:
    if (ctx->pc == 0x46E25Cu) {
        ctx->pc = 0x46E260u;
        goto label_46e260;
    }
    ctx->pc = 0x46E258u;
    SET_GPR_U32(ctx, 31, 0x46E260u);
    ctx->pc = 0x187590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187590u, 0x46E258u, 0x46E260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46E260u;
label_46e260:
    // 0x46e260: 0x97a2020e  lhu         $v0, 0x20E($sp)
    ctx->pc = 0x46e260u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 526)));
label_46e264:
    // 0x46e264: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x46e264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_46e268:
    // 0x46e268: 0x3402fffe  ori         $v0, $zero, 0xFFFE
    ctx->pc = 0x46e268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
label_46e26c:
    // 0x46e26c: 0x14620032  bne         $v1, $v0, . + 4 + (0x32 << 2)
label_46e270:
    if (ctx->pc == 0x46E270u) {
        ctx->pc = 0x46E274u;
        goto label_46e274;
    }
    ctx->pc = 0x46E26Cu;
    {
        const bool branch_taken_0x46e26c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x46e26c) {
            ctx->pc = 0x46E338u;
            goto label_46e338;
        }
    }
    ctx->pc = 0x46E274u;
label_46e274:
    // 0x46e274: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x46e274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_46e278:
    // 0x46e278: 0x2405fffd  addiu       $a1, $zero, -0x3
    ctx->pc = 0x46e278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_46e27c:
    // 0x46e27c: 0x27a60200  addiu       $a2, $sp, 0x200
    ctx->pc = 0x46e27cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_46e280:
    // 0x46e280: 0xc115ee8  jal         func_457BA0
label_46e284:
    if (ctx->pc == 0x46E284u) {
        ctx->pc = 0x46E288u;
        goto label_46e288;
    }
    ctx->pc = 0x46E280u;
    SET_GPR_U32(ctx, 31, 0x46E288u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x46E280u, 0x46E288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46E288u;
label_46e288:
    // 0x46e288: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_46e28c:
    if (ctx->pc == 0x46E28Cu) {
        ctx->pc = 0x46E290u;
        goto label_46e290;
    }
    ctx->pc = 0x46E288u;
    {
        const bool branch_taken_0x46e288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46e288) {
            ctx->pc = 0x46E32Cu;
            goto label_46e32c;
        }
    }
    ctx->pc = 0x46E290u;
label_46e290:
    // 0x46e290: 0x8fa20208  lw          $v0, 0x208($sp)
    ctx->pc = 0x46e290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
label_46e294:
    // 0x46e294: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_46e298:
    if (ctx->pc == 0x46E298u) {
        ctx->pc = 0x46E29Cu;
        goto label_46e29c;
    }
    ctx->pc = 0x46E294u;
    {
        const bool branch_taken_0x46e294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46e294) {
            ctx->pc = 0x46E32Cu;
            goto label_46e32c;
        }
    }
    ctx->pc = 0x46E29Cu;
label_46e29c:
    // 0x46e29c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x46e29cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_46e2a0:
    // 0x46e2a0: 0x2405fffd  addiu       $a1, $zero, -0x3
    ctx->pc = 0x46e2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_46e2a4:
    // 0x46e2a4: 0x8fa60204  lw          $a2, 0x204($sp)
    ctx->pc = 0x46e2a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
label_46e2a8:
    // 0x46e2a8: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x46e2a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_46e2ac:
    // 0x46e2ac: 0x24e7fa80  addiu       $a3, $a3, -0x580
    ctx->pc = 0x46e2acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965888));
label_46e2b0:
    // 0x46e2b0: 0x2408005f  addiu       $t0, $zero, 0x5F
    ctx->pc = 0x46e2b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
label_46e2b4:
    // 0x46e2b4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x46e2b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46e2b8:
    // 0x46e2b8: 0xc113940  jal         func_44E500
label_46e2bc:
    if (ctx->pc == 0x46E2BCu) {
        ctx->pc = 0x46E2C0u;
        goto label_46e2c0;
    }
    ctx->pc = 0x46E2B8u;
    SET_GPR_U32(ctx, 31, 0x46E2C0u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x46E2B8u, 0x46E2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46E2C0u;
label_46e2c0:
    // 0x46e2c0: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x46e2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_46e2c4:
    // 0x46e2c4: 0x8fa50220  lw          $a1, 0x220($sp)
    ctx->pc = 0x46e2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
label_46e2c8:
    // 0x46e2c8: 0xc042844  jal         func_10A110
label_46e2cc:
    if (ctx->pc == 0x46E2CCu) {
        ctx->pc = 0x46E2D0u;
        goto label_46e2d0;
    }
    ctx->pc = 0x46E2C8u;
    SET_GPR_U32(ctx, 31, 0x46E2D0u);
    ctx->pc = 0x10A110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A110u, 0x46E2C8u, 0x46E2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46E2D0u;
label_46e2d0:
    // 0x46e2d0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x46e2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_46e2d4:
    // 0x46e2d4: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x46e2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_46e2d8:
    // 0x46e2d8: 0x24a5fa90  addiu       $a1, $a1, -0x570
    ctx->pc = 0x46e2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965904));
label_46e2dc:
    // 0x46e2dc: 0x27a601d0  addiu       $a2, $sp, 0x1D0
    ctx->pc = 0x46e2dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_46e2e0:
    // 0x46e2e0: 0xc115c24  jal         func_457090
label_46e2e4:
    if (ctx->pc == 0x46E2E4u) {
        ctx->pc = 0x46E2E8u;
        goto label_46e2e8;
    }
    ctx->pc = 0x46E2E0u;
    SET_GPR_U32(ctx, 31, 0x46E2E8u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x46E2E0u, 0x46E2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46E2E8u;
label_46e2e8:
    // 0x46e2e8: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x46e2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_46e2ec:
    // 0x46e2ec: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46e2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_46e2f0:
    // 0x46e2f0: 0xc0402d4  jal         func_100B50
label_46e2f4:
    if (ctx->pc == 0x46E2F4u) {
        ctx->pc = 0x46E2F8u;
        goto label_46e2f8;
    }
    ctx->pc = 0x46E2F0u;
    SET_GPR_U32(ctx, 31, 0x46E2F8u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x46E2F0u, 0x46E2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46E2F8u;
label_46e2f8:
    // 0x46e2f8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x46e2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_46e2fc:
    // 0x46e2fc: 0x8fa20208  lw          $v0, 0x208($sp)
    ctx->pc = 0x46e2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
label_46e300:
    // 0x46e300: 0x40f809  jalr        $v0
label_46e304:
    if (ctx->pc == 0x46E304u) {
        ctx->pc = 0x46E308u;
        goto label_46e308;
    }
    ctx->pc = 0x46E300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46E308u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46E300u, 0x46E308u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46E308u;
label_46e308:
    // 0x46e308: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x46e308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_46e30c:
    // 0x46e30c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_46e310:
    if (ctx->pc == 0x46E310u) {
        ctx->pc = 0x46E314u;
        goto label_46e314;
    }
    ctx->pc = 0x46E30Cu;
    {
        const bool branch_taken_0x46e30c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46e30c) {
            ctx->pc = 0x46E31Cu;
            goto label_46e31c;
        }
    }
    ctx->pc = 0x46E314u;
label_46e314:
    // 0x46e314: 0xd  break       0
    ctx->pc = 0x46e314u;
    runtime->handleBreak(rdram, ctx);
label_46e318:
    // 0x46e318: 0x0  nop
    ctx->pc = 0x46e318u;
    // NOP
label_46e31c:
    // 0x46e31c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x46e31cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_46e320:
    // 0x46e320: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46e320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_46e324:
    // 0x46e324: 0xc11392c  jal         func_44E4B0
label_46e328:
    if (ctx->pc == 0x46E328u) {
        ctx->pc = 0x46E32Cu;
        goto label_46e32c;
    }
    ctx->pc = 0x46E324u;
    SET_GPR_U32(ctx, 31, 0x46E32Cu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x46E324u, 0x46E32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46E32Cu;
label_46e32c:
    // 0x46e32c: 0x8fa40210  lw          $a0, 0x210($sp)
    ctx->pc = 0x46e32cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_46e330:
    // 0x46e330: 0xc119338  jal         func_464CE0
label_46e334:
    if (ctx->pc == 0x46E334u) {
        ctx->pc = 0x46E338u;
        goto label_46e338;
    }
    ctx->pc = 0x46E330u;
    SET_GPR_U32(ctx, 31, 0x46E338u);
    ctx->pc = 0x464CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464CE0u, 0x46E330u, 0x46E338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46E338u;
label_46e338:
    // 0x46e338: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x46e338u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46e33c:
    // 0x46e33c: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x46e33cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_46e340:
    // 0x46e340: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46e340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_46e344:
    // 0x46e344: 0xc119d90  jal         func_467640
label_46e348:
    if (ctx->pc == 0x46E348u) {
        ctx->pc = 0x46E34Cu;
        goto label_46e34c;
    }
    ctx->pc = 0x46E344u;
    SET_GPR_U32(ctx, 31, 0x46E34Cu);
    ctx->pc = 0x467640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467640u, 0x46E344u, 0x46E34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46E34Cu;
label_46e34c:
    // 0x46e34c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x46e34cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_46e350:
    // 0x46e350: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x46e350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_46e354:
    // 0x46e354: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x46e354u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_46e358:
    // 0x46e358: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x46e358u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_46e35c:
    // 0x46e35c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x46e35cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_46e360:
    // 0x46e360: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x46e360u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_46e364:
    // 0x46e364: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x46e364u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_46e368:
    // 0x46e368: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x46e368u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_46e36c:
    // 0x46e36c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x46e36cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_46e370:
    // 0x46e370: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x46e370u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_46e374:
    // 0x46e374: 0x27bd0230  addiu       $sp, $sp, 0x230
    ctx->pc = 0x46e374u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_46e378:
    // 0x46e378: 0x3e00008  jr          $ra
label_46e37c:
    if (ctx->pc == 0x46E37Cu) {
        ctx->pc = 0x46E380u;
        goto label_fallthrough_0x46e378;
    }
    ctx->pc = 0x46E378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46E378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x46e378:
    ctx->pc = 0x46E380u;
}
