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

// Function: sub_0044E020
// Address: 0x44e020 - 0x44e390
void sub_0044E020_0x44e020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044E020_0x44e020");
#endif

    switch (ctx->pc) {
        case 0x44e020u: goto label_44e020;
        case 0x44e024u: goto label_44e024;
        case 0x44e028u: goto label_44e028;
        case 0x44e02cu: goto label_44e02c;
        case 0x44e030u: goto label_44e030;
        case 0x44e034u: goto label_44e034;
        case 0x44e038u: goto label_44e038;
        case 0x44e03cu: goto label_44e03c;
        case 0x44e040u: goto label_44e040;
        case 0x44e044u: goto label_44e044;
        case 0x44e048u: goto label_44e048;
        case 0x44e04cu: goto label_44e04c;
        case 0x44e050u: goto label_44e050;
        case 0x44e054u: goto label_44e054;
        case 0x44e058u: goto label_44e058;
        case 0x44e05cu: goto label_44e05c;
        case 0x44e060u: goto label_44e060;
        case 0x44e064u: goto label_44e064;
        case 0x44e068u: goto label_44e068;
        case 0x44e06cu: goto label_44e06c;
        case 0x44e070u: goto label_44e070;
        case 0x44e074u: goto label_44e074;
        case 0x44e078u: goto label_44e078;
        case 0x44e07cu: goto label_44e07c;
        case 0x44e080u: goto label_44e080;
        case 0x44e084u: goto label_44e084;
        case 0x44e088u: goto label_44e088;
        case 0x44e08cu: goto label_44e08c;
        case 0x44e090u: goto label_44e090;
        case 0x44e094u: goto label_44e094;
        case 0x44e098u: goto label_44e098;
        case 0x44e09cu: goto label_44e09c;
        case 0x44e0a0u: goto label_44e0a0;
        case 0x44e0a4u: goto label_44e0a4;
        case 0x44e0a8u: goto label_44e0a8;
        case 0x44e0acu: goto label_44e0ac;
        case 0x44e0b0u: goto label_44e0b0;
        case 0x44e0b4u: goto label_44e0b4;
        case 0x44e0b8u: goto label_44e0b8;
        case 0x44e0bcu: goto label_44e0bc;
        case 0x44e0c0u: goto label_44e0c0;
        case 0x44e0c4u: goto label_44e0c4;
        case 0x44e0c8u: goto label_44e0c8;
        case 0x44e0ccu: goto label_44e0cc;
        case 0x44e0d0u: goto label_44e0d0;
        case 0x44e0d4u: goto label_44e0d4;
        case 0x44e0d8u: goto label_44e0d8;
        case 0x44e0dcu: goto label_44e0dc;
        case 0x44e0e0u: goto label_44e0e0;
        case 0x44e0e4u: goto label_44e0e4;
        case 0x44e0e8u: goto label_44e0e8;
        case 0x44e0ecu: goto label_44e0ec;
        case 0x44e0f0u: goto label_44e0f0;
        case 0x44e0f4u: goto label_44e0f4;
        case 0x44e0f8u: goto label_44e0f8;
        case 0x44e0fcu: goto label_44e0fc;
        case 0x44e100u: goto label_44e100;
        case 0x44e104u: goto label_44e104;
        case 0x44e108u: goto label_44e108;
        case 0x44e10cu: goto label_44e10c;
        case 0x44e110u: goto label_44e110;
        case 0x44e114u: goto label_44e114;
        case 0x44e118u: goto label_44e118;
        case 0x44e11cu: goto label_44e11c;
        case 0x44e120u: goto label_44e120;
        case 0x44e124u: goto label_44e124;
        case 0x44e128u: goto label_44e128;
        case 0x44e12cu: goto label_44e12c;
        case 0x44e130u: goto label_44e130;
        case 0x44e134u: goto label_44e134;
        case 0x44e138u: goto label_44e138;
        case 0x44e13cu: goto label_44e13c;
        case 0x44e140u: goto label_44e140;
        case 0x44e144u: goto label_44e144;
        case 0x44e148u: goto label_44e148;
        case 0x44e14cu: goto label_44e14c;
        case 0x44e150u: goto label_44e150;
        case 0x44e154u: goto label_44e154;
        case 0x44e158u: goto label_44e158;
        case 0x44e15cu: goto label_44e15c;
        case 0x44e160u: goto label_44e160;
        case 0x44e164u: goto label_44e164;
        case 0x44e168u: goto label_44e168;
        case 0x44e16cu: goto label_44e16c;
        case 0x44e170u: goto label_44e170;
        case 0x44e174u: goto label_44e174;
        case 0x44e178u: goto label_44e178;
        case 0x44e17cu: goto label_44e17c;
        case 0x44e180u: goto label_44e180;
        case 0x44e184u: goto label_44e184;
        case 0x44e188u: goto label_44e188;
        case 0x44e18cu: goto label_44e18c;
        case 0x44e190u: goto label_44e190;
        case 0x44e194u: goto label_44e194;
        case 0x44e198u: goto label_44e198;
        case 0x44e19cu: goto label_44e19c;
        case 0x44e1a0u: goto label_44e1a0;
        case 0x44e1a4u: goto label_44e1a4;
        case 0x44e1a8u: goto label_44e1a8;
        case 0x44e1acu: goto label_44e1ac;
        case 0x44e1b0u: goto label_44e1b0;
        case 0x44e1b4u: goto label_44e1b4;
        case 0x44e1b8u: goto label_44e1b8;
        case 0x44e1bcu: goto label_44e1bc;
        case 0x44e1c0u: goto label_44e1c0;
        case 0x44e1c4u: goto label_44e1c4;
        case 0x44e1c8u: goto label_44e1c8;
        case 0x44e1ccu: goto label_44e1cc;
        case 0x44e1d0u: goto label_44e1d0;
        case 0x44e1d4u: goto label_44e1d4;
        case 0x44e1d8u: goto label_44e1d8;
        case 0x44e1dcu: goto label_44e1dc;
        case 0x44e1e0u: goto label_44e1e0;
        case 0x44e1e4u: goto label_44e1e4;
        case 0x44e1e8u: goto label_44e1e8;
        case 0x44e1ecu: goto label_44e1ec;
        case 0x44e1f0u: goto label_44e1f0;
        case 0x44e1f4u: goto label_44e1f4;
        case 0x44e1f8u: goto label_44e1f8;
        case 0x44e1fcu: goto label_44e1fc;
        case 0x44e200u: goto label_44e200;
        case 0x44e204u: goto label_44e204;
        case 0x44e208u: goto label_44e208;
        case 0x44e20cu: goto label_44e20c;
        case 0x44e210u: goto label_44e210;
        case 0x44e214u: goto label_44e214;
        case 0x44e218u: goto label_44e218;
        case 0x44e21cu: goto label_44e21c;
        case 0x44e220u: goto label_44e220;
        case 0x44e224u: goto label_44e224;
        case 0x44e228u: goto label_44e228;
        case 0x44e22cu: goto label_44e22c;
        case 0x44e230u: goto label_44e230;
        case 0x44e234u: goto label_44e234;
        case 0x44e238u: goto label_44e238;
        case 0x44e23cu: goto label_44e23c;
        case 0x44e240u: goto label_44e240;
        case 0x44e244u: goto label_44e244;
        case 0x44e248u: goto label_44e248;
        case 0x44e24cu: goto label_44e24c;
        case 0x44e250u: goto label_44e250;
        case 0x44e254u: goto label_44e254;
        case 0x44e258u: goto label_44e258;
        case 0x44e25cu: goto label_44e25c;
        case 0x44e260u: goto label_44e260;
        case 0x44e264u: goto label_44e264;
        case 0x44e268u: goto label_44e268;
        case 0x44e26cu: goto label_44e26c;
        case 0x44e270u: goto label_44e270;
        case 0x44e274u: goto label_44e274;
        case 0x44e278u: goto label_44e278;
        case 0x44e27cu: goto label_44e27c;
        case 0x44e280u: goto label_44e280;
        case 0x44e284u: goto label_44e284;
        case 0x44e288u: goto label_44e288;
        case 0x44e28cu: goto label_44e28c;
        case 0x44e290u: goto label_44e290;
        case 0x44e294u: goto label_44e294;
        case 0x44e298u: goto label_44e298;
        case 0x44e29cu: goto label_44e29c;
        case 0x44e2a0u: goto label_44e2a0;
        case 0x44e2a4u: goto label_44e2a4;
        case 0x44e2a8u: goto label_44e2a8;
        case 0x44e2acu: goto label_44e2ac;
        case 0x44e2b0u: goto label_44e2b0;
        case 0x44e2b4u: goto label_44e2b4;
        case 0x44e2b8u: goto label_44e2b8;
        case 0x44e2bcu: goto label_44e2bc;
        case 0x44e2c0u: goto label_44e2c0;
        case 0x44e2c4u: goto label_44e2c4;
        case 0x44e2c8u: goto label_44e2c8;
        case 0x44e2ccu: goto label_44e2cc;
        case 0x44e2d0u: goto label_44e2d0;
        case 0x44e2d4u: goto label_44e2d4;
        case 0x44e2d8u: goto label_44e2d8;
        case 0x44e2dcu: goto label_44e2dc;
        case 0x44e2e0u: goto label_44e2e0;
        case 0x44e2e4u: goto label_44e2e4;
        case 0x44e2e8u: goto label_44e2e8;
        case 0x44e2ecu: goto label_44e2ec;
        case 0x44e2f0u: goto label_44e2f0;
        case 0x44e2f4u: goto label_44e2f4;
        case 0x44e2f8u: goto label_44e2f8;
        case 0x44e2fcu: goto label_44e2fc;
        case 0x44e300u: goto label_44e300;
        case 0x44e304u: goto label_44e304;
        case 0x44e308u: goto label_44e308;
        case 0x44e30cu: goto label_44e30c;
        case 0x44e310u: goto label_44e310;
        case 0x44e314u: goto label_44e314;
        case 0x44e318u: goto label_44e318;
        case 0x44e31cu: goto label_44e31c;
        case 0x44e320u: goto label_44e320;
        case 0x44e324u: goto label_44e324;
        case 0x44e328u: goto label_44e328;
        case 0x44e32cu: goto label_44e32c;
        case 0x44e330u: goto label_44e330;
        case 0x44e334u: goto label_44e334;
        case 0x44e338u: goto label_44e338;
        case 0x44e33cu: goto label_44e33c;
        case 0x44e340u: goto label_44e340;
        case 0x44e344u: goto label_44e344;
        case 0x44e348u: goto label_44e348;
        case 0x44e34cu: goto label_44e34c;
        case 0x44e350u: goto label_44e350;
        case 0x44e354u: goto label_44e354;
        case 0x44e358u: goto label_44e358;
        case 0x44e35cu: goto label_44e35c;
        case 0x44e360u: goto label_44e360;
        case 0x44e364u: goto label_44e364;
        case 0x44e368u: goto label_44e368;
        case 0x44e36cu: goto label_44e36c;
        case 0x44e370u: goto label_44e370;
        case 0x44e374u: goto label_44e374;
        case 0x44e378u: goto label_44e378;
        case 0x44e37cu: goto label_44e37c;
        case 0x44e380u: goto label_44e380;
        case 0x44e384u: goto label_44e384;
        case 0x44e388u: goto label_44e388;
        case 0x44e38cu: goto label_44e38c;
        default: break;
    }

    ctx->pc = 0x44e020u;

label_44e020:
    // 0x44e020: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x44e020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_44e024:
    // 0x44e024: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x44e024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_44e028:
    // 0x44e028: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x44e028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_44e02c:
    // 0x44e02c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x44e02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44e030:
    // 0x44e030: 0xfc600008  sd          $zero, 0x8($v1)
    ctx->pc = 0x44e030u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 0));
label_44e034:
    // 0x44e034: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x44e034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44e038:
    // 0x44e038: 0x8c63001c  lw          $v1, 0x1C($v1)
    ctx->pc = 0x44e038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_44e03c:
    // 0x44e03c: 0x2c610012  sltiu       $at, $v1, 0x12
    ctx->pc = 0x44e03cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
label_44e040:
    // 0x44e040: 0x1020008e  beqz        $at, . + 4 + (0x8E << 2)
label_44e044:
    if (ctx->pc == 0x44E044u) {
        ctx->pc = 0x44E048u;
        goto label_44e048;
    }
    ctx->pc = 0x44E040u;
    {
        const bool branch_taken_0x44e040 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x44e040) {
            ctx->pc = 0x44E27Cu;
            goto label_44e27c;
        }
    }
    ctx->pc = 0x44E048u;
label_44e048:
    // 0x44e048: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x44e048u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_44e04c:
    // 0x44e04c: 0x24841880  addiu       $a0, $a0, 0x1880
    ctx->pc = 0x44e04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6272));
label_44e050:
    // 0x44e050: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x44e050u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_44e054:
    // 0x44e054: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x44e054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_44e058:
    // 0x44e058: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x44e058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_44e05c:
    // 0x44e05c: 0x600008  jr          $v1
label_44e060:
    if (ctx->pc == 0x44E060u) {
        ctx->pc = 0x44E064u;
        goto label_44e064;
    }
    ctx->pc = 0x44E05Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x44E064u: goto label_44e064;
            case 0x44E084u: goto label_44e084;
            case 0x44E0A4u: goto label_44e0a4;
            case 0x44E0C4u: goto label_44e0c4;
            case 0x44E0E4u: goto label_44e0e4;
            case 0x44E104u: goto label_44e104;
            case 0x44E124u: goto label_44e124;
            case 0x44E144u: goto label_44e144;
            case 0x44E164u: goto label_44e164;
            case 0x44E184u: goto label_44e184;
            case 0x44E1A4u: goto label_44e1a4;
            case 0x44E1C4u: goto label_44e1c4;
            case 0x44E1E4u: goto label_44e1e4;
            case 0x44E204u: goto label_44e204;
            case 0x44E224u: goto label_44e224;
            case 0x44E244u: goto label_44e244;
            case 0x44E264u: goto label_44e264;
            case 0x44E27Cu: goto label_44e27c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44E05Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x44E064u;
label_44e064:
    // 0x44e064: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44e064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44e068:
    // 0x44e068: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x44e068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_44e06c:
    // 0x44e06c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x44e06cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44e070:
    // 0x44e070: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x44e070u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_44e074:
    // 0x44e074: 0x320f809  jalr        $t9
label_44e078:
    if (ctx->pc == 0x44E078u) {
        ctx->pc = 0x44E07Cu;
        goto label_44e07c;
    }
    ctx->pc = 0x44E074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44E07Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44E074u, 0x44E07Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44E07Cu;
label_44e07c:
    // 0x44e07c: 0x1000007f  b           . + 4 + (0x7F << 2)
label_44e080:
    if (ctx->pc == 0x44E080u) {
        ctx->pc = 0x44E084u;
        goto label_44e084;
    }
    ctx->pc = 0x44E07Cu;
    {
        const bool branch_taken_0x44e07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44e07c) {
            ctx->pc = 0x44E27Cu;
            goto label_44e27c;
        }
    }
    ctx->pc = 0x44E084u;
label_44e084:
    // 0x44e084: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44e084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44e088:
    // 0x44e088: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x44e088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_44e08c:
    // 0x44e08c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x44e08cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44e090:
    // 0x44e090: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x44e090u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_44e094:
    // 0x44e094: 0x320f809  jalr        $t9
label_44e098:
    if (ctx->pc == 0x44E098u) {
        ctx->pc = 0x44E09Cu;
        goto label_44e09c;
    }
    ctx->pc = 0x44E094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44E09Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44E094u, 0x44E09Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44E09Cu;
label_44e09c:
    // 0x44e09c: 0x10000077  b           . + 4 + (0x77 << 2)
label_44e0a0:
    if (ctx->pc == 0x44E0A0u) {
        ctx->pc = 0x44E0A4u;
        goto label_44e0a4;
    }
    ctx->pc = 0x44E09Cu;
    {
        const bool branch_taken_0x44e09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44e09c) {
            ctx->pc = 0x44E27Cu;
            goto label_44e27c;
        }
    }
    ctx->pc = 0x44E0A4u;
label_44e0a4:
    // 0x44e0a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44e0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44e0a8:
    // 0x44e0a8: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x44e0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_44e0ac:
    // 0x44e0ac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x44e0acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44e0b0:
    // 0x44e0b0: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x44e0b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_44e0b4:
    // 0x44e0b4: 0x320f809  jalr        $t9
label_44e0b8:
    if (ctx->pc == 0x44E0B8u) {
        ctx->pc = 0x44E0BCu;
        goto label_44e0bc;
    }
    ctx->pc = 0x44E0B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44E0BCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44E0B4u, 0x44E0BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44E0BCu;
label_44e0bc:
    // 0x44e0bc: 0x1000006f  b           . + 4 + (0x6F << 2)
label_44e0c0:
    if (ctx->pc == 0x44E0C0u) {
        ctx->pc = 0x44E0C4u;
        goto label_44e0c4;
    }
    ctx->pc = 0x44E0BCu;
    {
        const bool branch_taken_0x44e0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44e0bc) {
            ctx->pc = 0x44E27Cu;
            goto label_44e27c;
        }
    }
    ctx->pc = 0x44E0C4u;
label_44e0c4:
    // 0x44e0c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44e0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44e0c8:
    // 0x44e0c8: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x44e0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_44e0cc:
    // 0x44e0cc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x44e0ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44e0d0:
    // 0x44e0d0: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x44e0d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_44e0d4:
    // 0x44e0d4: 0x320f809  jalr        $t9
label_44e0d8:
    if (ctx->pc == 0x44E0D8u) {
        ctx->pc = 0x44E0DCu;
        goto label_44e0dc;
    }
    ctx->pc = 0x44E0D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44E0DCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44E0D4u, 0x44E0DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44E0DCu;
label_44e0dc:
    // 0x44e0dc: 0x10000067  b           . + 4 + (0x67 << 2)
label_44e0e0:
    if (ctx->pc == 0x44E0E0u) {
        ctx->pc = 0x44E0E4u;
        goto label_44e0e4;
    }
    ctx->pc = 0x44E0DCu;
    {
        const bool branch_taken_0x44e0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44e0dc) {
            ctx->pc = 0x44E27Cu;
            goto label_44e27c;
        }
    }
    ctx->pc = 0x44E0E4u;
label_44e0e4:
    // 0x44e0e4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44e0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44e0e8:
    // 0x44e0e8: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x44e0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_44e0ec:
    // 0x44e0ec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x44e0ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44e0f0:
    // 0x44e0f0: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x44e0f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_44e0f4:
    // 0x44e0f4: 0x320f809  jalr        $t9
label_44e0f8:
    if (ctx->pc == 0x44E0F8u) {
        ctx->pc = 0x44E0FCu;
        goto label_44e0fc;
    }
    ctx->pc = 0x44E0F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44E0FCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44E0F4u, 0x44E0FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44E0FCu;
label_44e0fc:
    // 0x44e0fc: 0x1000005f  b           . + 4 + (0x5F << 2)
label_44e100:
    if (ctx->pc == 0x44E100u) {
        ctx->pc = 0x44E104u;
        goto label_44e104;
    }
    ctx->pc = 0x44E0FCu;
    {
        const bool branch_taken_0x44e0fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44e0fc) {
            ctx->pc = 0x44E27Cu;
            goto label_44e27c;
        }
    }
    ctx->pc = 0x44E104u;
label_44e104:
    // 0x44e104: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44e104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44e108:
    // 0x44e108: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x44e108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_44e10c:
    // 0x44e10c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x44e10cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44e110:
    // 0x44e110: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x44e110u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_44e114:
    // 0x44e114: 0x320f809  jalr        $t9
label_44e118:
    if (ctx->pc == 0x44E118u) {
        ctx->pc = 0x44E11Cu;
        goto label_44e11c;
    }
    ctx->pc = 0x44E114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44E11Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44E114u, 0x44E11Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44E11Cu;
label_44e11c:
    // 0x44e11c: 0x10000057  b           . + 4 + (0x57 << 2)
label_44e120:
    if (ctx->pc == 0x44E120u) {
        ctx->pc = 0x44E124u;
        goto label_44e124;
    }
    ctx->pc = 0x44E11Cu;
    {
        const bool branch_taken_0x44e11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44e11c) {
            ctx->pc = 0x44E27Cu;
            goto label_44e27c;
        }
    }
    ctx->pc = 0x44E124u;
label_44e124:
    // 0x44e124: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44e124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44e128:
    // 0x44e128: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x44e128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_44e12c:
    // 0x44e12c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x44e12cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44e130:
    // 0x44e130: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x44e130u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_44e134:
    // 0x44e134: 0x320f809  jalr        $t9
label_44e138:
    if (ctx->pc == 0x44E138u) {
        ctx->pc = 0x44E13Cu;
        goto label_44e13c;
    }
    ctx->pc = 0x44E134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44E13Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44E134u, 0x44E13Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44E13Cu;
label_44e13c:
    // 0x44e13c: 0x1000004f  b           . + 4 + (0x4F << 2)
label_44e140:
    if (ctx->pc == 0x44E140u) {
        ctx->pc = 0x44E144u;
        goto label_44e144;
    }
    ctx->pc = 0x44E13Cu;
    {
        const bool branch_taken_0x44e13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44e13c) {
            ctx->pc = 0x44E27Cu;
            goto label_44e27c;
        }
    }
    ctx->pc = 0x44E144u;
label_44e144:
    // 0x44e144: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44e144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44e148:
    // 0x44e148: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x44e148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_44e14c:
    // 0x44e14c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x44e14cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44e150:
    // 0x44e150: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x44e150u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_44e154:
    // 0x44e154: 0x320f809  jalr        $t9
label_44e158:
    if (ctx->pc == 0x44E158u) {
        ctx->pc = 0x44E15Cu;
        goto label_44e15c;
    }
    ctx->pc = 0x44E154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44E15Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44E154u, 0x44E15Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44E15Cu;
label_44e15c:
    // 0x44e15c: 0x10000047  b           . + 4 + (0x47 << 2)
label_44e160:
    if (ctx->pc == 0x44E160u) {
        ctx->pc = 0x44E164u;
        goto label_44e164;
    }
    ctx->pc = 0x44E15Cu;
    {
        const bool branch_taken_0x44e15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44e15c) {
            ctx->pc = 0x44E27Cu;
            goto label_44e27c;
        }
    }
    ctx->pc = 0x44E164u;
label_44e164:
    // 0x44e164: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44e164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44e168:
    // 0x44e168: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x44e168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_44e16c:
    // 0x44e16c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x44e16cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44e170:
    // 0x44e170: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x44e170u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_44e174:
    // 0x44e174: 0x320f809  jalr        $t9
label_44e178:
    if (ctx->pc == 0x44E178u) {
        ctx->pc = 0x44E17Cu;
        goto label_44e17c;
    }
    ctx->pc = 0x44E174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44E17Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44E174u, 0x44E17Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44E17Cu;
label_44e17c:
    // 0x44e17c: 0x1000003f  b           . + 4 + (0x3F << 2)
label_44e180:
    if (ctx->pc == 0x44E180u) {
        ctx->pc = 0x44E184u;
        goto label_44e184;
    }
    ctx->pc = 0x44E17Cu;
    {
        const bool branch_taken_0x44e17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44e17c) {
            ctx->pc = 0x44E27Cu;
            goto label_44e27c;
        }
    }
    ctx->pc = 0x44E184u;
label_44e184:
    // 0x44e184: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44e184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44e188:
    // 0x44e188: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x44e188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_44e18c:
    // 0x44e18c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x44e18cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44e190:
    // 0x44e190: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x44e190u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_44e194:
    // 0x44e194: 0x320f809  jalr        $t9
label_44e198:
    if (ctx->pc == 0x44E198u) {
        ctx->pc = 0x44E19Cu;
        goto label_44e19c;
    }
    ctx->pc = 0x44E194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44E19Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44E194u, 0x44E19Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44E19Cu;
label_44e19c:
    // 0x44e19c: 0x10000037  b           . + 4 + (0x37 << 2)
label_44e1a0:
    if (ctx->pc == 0x44E1A0u) {
        ctx->pc = 0x44E1A4u;
        goto label_44e1a4;
    }
    ctx->pc = 0x44E19Cu;
    {
        const bool branch_taken_0x44e19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44e19c) {
            ctx->pc = 0x44E27Cu;
            goto label_44e27c;
        }
    }
    ctx->pc = 0x44E1A4u;
label_44e1a4:
    // 0x44e1a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44e1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44e1a8:
    // 0x44e1a8: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x44e1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_44e1ac:
    // 0x44e1ac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x44e1acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44e1b0:
    // 0x44e1b0: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x44e1b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_44e1b4:
    // 0x44e1b4: 0x320f809  jalr        $t9
label_44e1b8:
    if (ctx->pc == 0x44E1B8u) {
        ctx->pc = 0x44E1BCu;
        goto label_44e1bc;
    }
    ctx->pc = 0x44E1B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44E1BCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44E1B4u, 0x44E1BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44E1BCu;
label_44e1bc:
    // 0x44e1bc: 0x1000002f  b           . + 4 + (0x2F << 2)
label_44e1c0:
    if (ctx->pc == 0x44E1C0u) {
        ctx->pc = 0x44E1C4u;
        goto label_44e1c4;
    }
    ctx->pc = 0x44E1BCu;
    {
        const bool branch_taken_0x44e1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44e1bc) {
            ctx->pc = 0x44E27Cu;
            goto label_44e27c;
        }
    }
    ctx->pc = 0x44E1C4u;
label_44e1c4:
    // 0x44e1c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44e1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44e1c8:
    // 0x44e1c8: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x44e1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_44e1cc:
    // 0x44e1cc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x44e1ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44e1d0:
    // 0x44e1d0: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x44e1d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_44e1d4:
    // 0x44e1d4: 0x320f809  jalr        $t9
label_44e1d8:
    if (ctx->pc == 0x44E1D8u) {
        ctx->pc = 0x44E1DCu;
        goto label_44e1dc;
    }
    ctx->pc = 0x44E1D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44E1DCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44E1D4u, 0x44E1DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44E1DCu;
label_44e1dc:
    // 0x44e1dc: 0x10000027  b           . + 4 + (0x27 << 2)
label_44e1e0:
    if (ctx->pc == 0x44E1E0u) {
        ctx->pc = 0x44E1E4u;
        goto label_44e1e4;
    }
    ctx->pc = 0x44E1DCu;
    {
        const bool branch_taken_0x44e1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44e1dc) {
            ctx->pc = 0x44E27Cu;
            goto label_44e27c;
        }
    }
    ctx->pc = 0x44E1E4u;
label_44e1e4:
    // 0x44e1e4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44e1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44e1e8:
    // 0x44e1e8: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x44e1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_44e1ec:
    // 0x44e1ec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x44e1ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44e1f0:
    // 0x44e1f0: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x44e1f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_44e1f4:
    // 0x44e1f4: 0x320f809  jalr        $t9
label_44e1f8:
    if (ctx->pc == 0x44E1F8u) {
        ctx->pc = 0x44E1FCu;
        goto label_44e1fc;
    }
    ctx->pc = 0x44E1F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44E1FCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44E1F4u, 0x44E1FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44E1FCu;
label_44e1fc:
    // 0x44e1fc: 0x1000001f  b           . + 4 + (0x1F << 2)
label_44e200:
    if (ctx->pc == 0x44E200u) {
        ctx->pc = 0x44E204u;
        goto label_44e204;
    }
    ctx->pc = 0x44E1FCu;
    {
        const bool branch_taken_0x44e1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44e1fc) {
            ctx->pc = 0x44E27Cu;
            goto label_44e27c;
        }
    }
    ctx->pc = 0x44E204u;
label_44e204:
    // 0x44e204: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44e204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44e208:
    // 0x44e208: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x44e208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_44e20c:
    // 0x44e20c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x44e20cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44e210:
    // 0x44e210: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x44e210u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_44e214:
    // 0x44e214: 0x320f809  jalr        $t9
label_44e218:
    if (ctx->pc == 0x44E218u) {
        ctx->pc = 0x44E21Cu;
        goto label_44e21c;
    }
    ctx->pc = 0x44E214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44E21Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44E214u, 0x44E21Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44E21Cu;
label_44e21c:
    // 0x44e21c: 0x10000017  b           . + 4 + (0x17 << 2)
label_44e220:
    if (ctx->pc == 0x44E220u) {
        ctx->pc = 0x44E224u;
        goto label_44e224;
    }
    ctx->pc = 0x44E21Cu;
    {
        const bool branch_taken_0x44e21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44e21c) {
            ctx->pc = 0x44E27Cu;
            goto label_44e27c;
        }
    }
    ctx->pc = 0x44E224u;
label_44e224:
    // 0x44e224: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44e224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44e228:
    // 0x44e228: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x44e228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_44e22c:
    // 0x44e22c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x44e22cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44e230:
    // 0x44e230: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x44e230u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_44e234:
    // 0x44e234: 0x320f809  jalr        $t9
label_44e238:
    if (ctx->pc == 0x44E238u) {
        ctx->pc = 0x44E23Cu;
        goto label_44e23c;
    }
    ctx->pc = 0x44E234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44E23Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44E234u, 0x44E23Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44E23Cu;
label_44e23c:
    // 0x44e23c: 0x1000000f  b           . + 4 + (0xF << 2)
label_44e240:
    if (ctx->pc == 0x44E240u) {
        ctx->pc = 0x44E244u;
        goto label_44e244;
    }
    ctx->pc = 0x44E23Cu;
    {
        const bool branch_taken_0x44e23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44e23c) {
            ctx->pc = 0x44E27Cu;
            goto label_44e27c;
        }
    }
    ctx->pc = 0x44E244u;
label_44e244:
    // 0x44e244: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44e244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44e248:
    // 0x44e248: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x44e248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_44e24c:
    // 0x44e24c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x44e24cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44e250:
    // 0x44e250: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x44e250u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_44e254:
    // 0x44e254: 0x320f809  jalr        $t9
label_44e258:
    if (ctx->pc == 0x44E258u) {
        ctx->pc = 0x44E25Cu;
        goto label_44e25c;
    }
    ctx->pc = 0x44E254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44E25Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44E254u, 0x44E25Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44E25Cu;
label_44e25c:
    // 0x44e25c: 0x10000007  b           . + 4 + (0x7 << 2)
label_44e260:
    if (ctx->pc == 0x44E260u) {
        ctx->pc = 0x44E264u;
        goto label_44e264;
    }
    ctx->pc = 0x44E25Cu;
    {
        const bool branch_taken_0x44e25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44e25c) {
            ctx->pc = 0x44E27Cu;
            goto label_44e27c;
        }
    }
    ctx->pc = 0x44E264u;
label_44e264:
    // 0x44e264: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44e264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44e268:
    // 0x44e268: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x44e268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_44e26c:
    // 0x44e26c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x44e26cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44e270:
    // 0x44e270: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x44e270u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_44e274:
    // 0x44e274: 0x320f809  jalr        $t9
label_44e278:
    if (ctx->pc == 0x44E278u) {
        ctx->pc = 0x44E27Cu;
        goto label_44e27c;
    }
    ctx->pc = 0x44E274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44E27Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44E274u, 0x44E27Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44E27Cu;
label_44e27c:
    // 0x44e27c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x44e27cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_44e280:
    // 0x44e280: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x44e280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_44e284:
    // 0x44e284: 0x3e00008  jr          $ra
label_44e288:
    if (ctx->pc == 0x44E288u) {
        ctx->pc = 0x44E28Cu;
        goto label_44e28c;
    }
    ctx->pc = 0x44E284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44E284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44E28Cu;
label_44e28c:
    // 0x44e28c: 0x0  nop
    ctx->pc = 0x44e28cu;
    // NOP
label_44e290:
    // 0x44e290: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x44e290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_44e294:
    // 0x44e294: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x44e294u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_44e298:
    // 0x44e298: 0x3e00008  jr          $ra
label_44e29c:
    if (ctx->pc == 0x44E29Cu) {
        ctx->pc = 0x44E2A0u;
        goto label_44e2a0;
    }
    ctx->pc = 0x44E298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44E298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44E2A0u;
label_44e2a0:
    // 0x44e2a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x44e2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_44e2a4:
    // 0x44e2a4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x44e2a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_44e2a8:
    // 0x44e2a8: 0x3e00008  jr          $ra
label_44e2ac:
    if (ctx->pc == 0x44E2ACu) {
        ctx->pc = 0x44E2B0u;
        goto label_44e2b0;
    }
    ctx->pc = 0x44E2A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44E2A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44E2B0u;
label_44e2b0:
    // 0x44e2b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x44e2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_44e2b4:
    // 0x44e2b4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x44e2b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_44e2b8:
    // 0x44e2b8: 0x3e00008  jr          $ra
label_44e2bc:
    if (ctx->pc == 0x44E2BCu) {
        ctx->pc = 0x44E2C0u;
        goto label_44e2c0;
    }
    ctx->pc = 0x44E2B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44E2B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44E2C0u;
label_44e2c0:
    // 0x44e2c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x44e2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_44e2c4:
    // 0x44e2c4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x44e2c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_44e2c8:
    // 0x44e2c8: 0x3e00008  jr          $ra
label_44e2cc:
    if (ctx->pc == 0x44E2CCu) {
        ctx->pc = 0x44E2D0u;
        goto label_44e2d0;
    }
    ctx->pc = 0x44E2C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44E2C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44E2D0u;
label_44e2d0:
    // 0x44e2d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x44e2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_44e2d4:
    // 0x44e2d4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x44e2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_44e2d8:
    // 0x44e2d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x44e2d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_44e2dc:
    // 0x44e2dc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x44e2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_44e2e0:
    // 0x44e2e0: 0xe460002c  swc1        $f0, 0x2C($v1)
    ctx->pc = 0x44e2e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 44), bits); }
label_44e2e4:
    // 0x44e2e4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x44e2e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_44e2e8:
    // 0x44e2e8: 0x3e00008  jr          $ra
label_44e2ec:
    if (ctx->pc == 0x44E2ECu) {
        ctx->pc = 0x44E2F0u;
        goto label_44e2f0;
    }
    ctx->pc = 0x44E2E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44E2E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44E2F0u;
label_44e2f0:
    // 0x44e2f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x44e2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_44e2f4:
    // 0x44e2f4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x44e2f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_44e2f8:
    // 0x44e2f8: 0x3e00008  jr          $ra
label_44e2fc:
    if (ctx->pc == 0x44E2FCu) {
        ctx->pc = 0x44E300u;
        goto label_44e300;
    }
    ctx->pc = 0x44E2F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44E2F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44E300u;
label_44e300:
    // 0x44e300: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x44e300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_44e304:
    // 0x44e304: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x44e304u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_44e308:
    // 0x44e308: 0x3e00008  jr          $ra
label_44e30c:
    if (ctx->pc == 0x44E30Cu) {
        ctx->pc = 0x44E310u;
        goto label_44e310;
    }
    ctx->pc = 0x44E308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44E308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44E310u;
label_44e310:
    // 0x44e310: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x44e310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_44e314:
    // 0x44e314: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x44e314u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_44e318:
    // 0x44e318: 0x3e00008  jr          $ra
label_44e31c:
    if (ctx->pc == 0x44E31Cu) {
        ctx->pc = 0x44E320u;
        goto label_44e320;
    }
    ctx->pc = 0x44E318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44E318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44E320u;
label_44e320:
    // 0x44e320: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x44e320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_44e324:
    // 0x44e324: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x44e324u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_44e328:
    // 0x44e328: 0x3e00008  jr          $ra
label_44e32c:
    if (ctx->pc == 0x44E32Cu) {
        ctx->pc = 0x44E330u;
        goto label_44e330;
    }
    ctx->pc = 0x44E328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44E328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44E330u;
label_44e330:
    // 0x44e330: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x44e330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_44e334:
    // 0x44e334: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x44e334u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_44e338:
    // 0x44e338: 0x3e00008  jr          $ra
label_44e33c:
    if (ctx->pc == 0x44E33Cu) {
        ctx->pc = 0x44E340u;
        goto label_44e340;
    }
    ctx->pc = 0x44E338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44E338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44E340u;
label_44e340:
    // 0x44e340: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x44e340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_44e344:
    // 0x44e344: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x44e344u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_44e348:
    // 0x44e348: 0x3e00008  jr          $ra
label_44e34c:
    if (ctx->pc == 0x44E34Cu) {
        ctx->pc = 0x44E350u;
        goto label_44e350;
    }
    ctx->pc = 0x44E348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44E348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44E350u;
label_44e350:
    // 0x44e350: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x44e350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_44e354:
    // 0x44e354: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x44e354u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_44e358:
    // 0x44e358: 0x3e00008  jr          $ra
label_44e35c:
    if (ctx->pc == 0x44E35Cu) {
        ctx->pc = 0x44E360u;
        goto label_44e360;
    }
    ctx->pc = 0x44E358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44E358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44E360u;
label_44e360:
    // 0x44e360: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x44e360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_44e364:
    // 0x44e364: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x44e364u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_44e368:
    // 0x44e368: 0x3e00008  jr          $ra
label_44e36c:
    if (ctx->pc == 0x44E36Cu) {
        ctx->pc = 0x44E370u;
        goto label_44e370;
    }
    ctx->pc = 0x44E368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44E368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44E370u;
label_44e370:
    // 0x44e370: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x44e370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_44e374:
    // 0x44e374: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x44e374u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_44e378:
    // 0x44e378: 0x3e00008  jr          $ra
label_44e37c:
    if (ctx->pc == 0x44E37Cu) {
        ctx->pc = 0x44E380u;
        goto label_44e380;
    }
    ctx->pc = 0x44E378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44E378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44E380u;
label_44e380:
    // 0x44e380: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x44e380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_44e384:
    // 0x44e384: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x44e384u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_44e388:
    // 0x44e388: 0x3e00008  jr          $ra
label_44e38c:
    if (ctx->pc == 0x44E38Cu) {
        ctx->pc = 0x44E390u;
        goto label_fallthrough_0x44e388;
    }
    ctx->pc = 0x44E388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44E388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x44e388:
    ctx->pc = 0x44E390u;
}
