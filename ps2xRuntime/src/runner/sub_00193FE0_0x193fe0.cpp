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

// Function: sub_00193FE0
// Address: 0x193fe0 - 0x1943c0
void sub_00193FE0_0x193fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00193FE0_0x193fe0");
#endif

    switch (ctx->pc) {
        case 0x193fe0u: goto label_193fe0;
        case 0x193fe4u: goto label_193fe4;
        case 0x193fe8u: goto label_193fe8;
        case 0x193fecu: goto label_193fec;
        case 0x193ff0u: goto label_193ff0;
        case 0x193ff4u: goto label_193ff4;
        case 0x193ff8u: goto label_193ff8;
        case 0x193ffcu: goto label_193ffc;
        case 0x194000u: goto label_194000;
        case 0x194004u: goto label_194004;
        case 0x194008u: goto label_194008;
        case 0x19400cu: goto label_19400c;
        case 0x194010u: goto label_194010;
        case 0x194014u: goto label_194014;
        case 0x194018u: goto label_194018;
        case 0x19401cu: goto label_19401c;
        case 0x194020u: goto label_194020;
        case 0x194024u: goto label_194024;
        case 0x194028u: goto label_194028;
        case 0x19402cu: goto label_19402c;
        case 0x194030u: goto label_194030;
        case 0x194034u: goto label_194034;
        case 0x194038u: goto label_194038;
        case 0x19403cu: goto label_19403c;
        case 0x194040u: goto label_194040;
        case 0x194044u: goto label_194044;
        case 0x194048u: goto label_194048;
        case 0x19404cu: goto label_19404c;
        case 0x194050u: goto label_194050;
        case 0x194054u: goto label_194054;
        case 0x194058u: goto label_194058;
        case 0x19405cu: goto label_19405c;
        case 0x194060u: goto label_194060;
        case 0x194064u: goto label_194064;
        case 0x194068u: goto label_194068;
        case 0x19406cu: goto label_19406c;
        case 0x194070u: goto label_194070;
        case 0x194074u: goto label_194074;
        case 0x194078u: goto label_194078;
        case 0x19407cu: goto label_19407c;
        case 0x194080u: goto label_194080;
        case 0x194084u: goto label_194084;
        case 0x194088u: goto label_194088;
        case 0x19408cu: goto label_19408c;
        case 0x194090u: goto label_194090;
        case 0x194094u: goto label_194094;
        case 0x194098u: goto label_194098;
        case 0x19409cu: goto label_19409c;
        case 0x1940a0u: goto label_1940a0;
        case 0x1940a4u: goto label_1940a4;
        case 0x1940a8u: goto label_1940a8;
        case 0x1940acu: goto label_1940ac;
        case 0x1940b0u: goto label_1940b0;
        case 0x1940b4u: goto label_1940b4;
        case 0x1940b8u: goto label_1940b8;
        case 0x1940bcu: goto label_1940bc;
        case 0x1940c0u: goto label_1940c0;
        case 0x1940c4u: goto label_1940c4;
        case 0x1940c8u: goto label_1940c8;
        case 0x1940ccu: goto label_1940cc;
        case 0x1940d0u: goto label_1940d0;
        case 0x1940d4u: goto label_1940d4;
        case 0x1940d8u: goto label_1940d8;
        case 0x1940dcu: goto label_1940dc;
        case 0x1940e0u: goto label_1940e0;
        case 0x1940e4u: goto label_1940e4;
        case 0x1940e8u: goto label_1940e8;
        case 0x1940ecu: goto label_1940ec;
        case 0x1940f0u: goto label_1940f0;
        case 0x1940f4u: goto label_1940f4;
        case 0x1940f8u: goto label_1940f8;
        case 0x1940fcu: goto label_1940fc;
        case 0x194100u: goto label_194100;
        case 0x194104u: goto label_194104;
        case 0x194108u: goto label_194108;
        case 0x19410cu: goto label_19410c;
        case 0x194110u: goto label_194110;
        case 0x194114u: goto label_194114;
        case 0x194118u: goto label_194118;
        case 0x19411cu: goto label_19411c;
        case 0x194120u: goto label_194120;
        case 0x194124u: goto label_194124;
        case 0x194128u: goto label_194128;
        case 0x19412cu: goto label_19412c;
        case 0x194130u: goto label_194130;
        case 0x194134u: goto label_194134;
        case 0x194138u: goto label_194138;
        case 0x19413cu: goto label_19413c;
        case 0x194140u: goto label_194140;
        case 0x194144u: goto label_194144;
        case 0x194148u: goto label_194148;
        case 0x19414cu: goto label_19414c;
        case 0x194150u: goto label_194150;
        case 0x194154u: goto label_194154;
        case 0x194158u: goto label_194158;
        case 0x19415cu: goto label_19415c;
        case 0x194160u: goto label_194160;
        case 0x194164u: goto label_194164;
        case 0x194168u: goto label_194168;
        case 0x19416cu: goto label_19416c;
        case 0x194170u: goto label_194170;
        case 0x194174u: goto label_194174;
        case 0x194178u: goto label_194178;
        case 0x19417cu: goto label_19417c;
        case 0x194180u: goto label_194180;
        case 0x194184u: goto label_194184;
        case 0x194188u: goto label_194188;
        case 0x19418cu: goto label_19418c;
        case 0x194190u: goto label_194190;
        case 0x194194u: goto label_194194;
        case 0x194198u: goto label_194198;
        case 0x19419cu: goto label_19419c;
        case 0x1941a0u: goto label_1941a0;
        case 0x1941a4u: goto label_1941a4;
        case 0x1941a8u: goto label_1941a8;
        case 0x1941acu: goto label_1941ac;
        case 0x1941b0u: goto label_1941b0;
        case 0x1941b4u: goto label_1941b4;
        case 0x1941b8u: goto label_1941b8;
        case 0x1941bcu: goto label_1941bc;
        case 0x1941c0u: goto label_1941c0;
        case 0x1941c4u: goto label_1941c4;
        case 0x1941c8u: goto label_1941c8;
        case 0x1941ccu: goto label_1941cc;
        case 0x1941d0u: goto label_1941d0;
        case 0x1941d4u: goto label_1941d4;
        case 0x1941d8u: goto label_1941d8;
        case 0x1941dcu: goto label_1941dc;
        case 0x1941e0u: goto label_1941e0;
        case 0x1941e4u: goto label_1941e4;
        case 0x1941e8u: goto label_1941e8;
        case 0x1941ecu: goto label_1941ec;
        case 0x1941f0u: goto label_1941f0;
        case 0x1941f4u: goto label_1941f4;
        case 0x1941f8u: goto label_1941f8;
        case 0x1941fcu: goto label_1941fc;
        case 0x194200u: goto label_194200;
        case 0x194204u: goto label_194204;
        case 0x194208u: goto label_194208;
        case 0x19420cu: goto label_19420c;
        case 0x194210u: goto label_194210;
        case 0x194214u: goto label_194214;
        case 0x194218u: goto label_194218;
        case 0x19421cu: goto label_19421c;
        case 0x194220u: goto label_194220;
        case 0x194224u: goto label_194224;
        case 0x194228u: goto label_194228;
        case 0x19422cu: goto label_19422c;
        case 0x194230u: goto label_194230;
        case 0x194234u: goto label_194234;
        case 0x194238u: goto label_194238;
        case 0x19423cu: goto label_19423c;
        case 0x194240u: goto label_194240;
        case 0x194244u: goto label_194244;
        case 0x194248u: goto label_194248;
        case 0x19424cu: goto label_19424c;
        case 0x194250u: goto label_194250;
        case 0x194254u: goto label_194254;
        case 0x194258u: goto label_194258;
        case 0x19425cu: goto label_19425c;
        case 0x194260u: goto label_194260;
        case 0x194264u: goto label_194264;
        case 0x194268u: goto label_194268;
        case 0x19426cu: goto label_19426c;
        case 0x194270u: goto label_194270;
        case 0x194274u: goto label_194274;
        case 0x194278u: goto label_194278;
        case 0x19427cu: goto label_19427c;
        case 0x194280u: goto label_194280;
        case 0x194284u: goto label_194284;
        case 0x194288u: goto label_194288;
        case 0x19428cu: goto label_19428c;
        case 0x194290u: goto label_194290;
        case 0x194294u: goto label_194294;
        case 0x194298u: goto label_194298;
        case 0x19429cu: goto label_19429c;
        case 0x1942a0u: goto label_1942a0;
        case 0x1942a4u: goto label_1942a4;
        case 0x1942a8u: goto label_1942a8;
        case 0x1942acu: goto label_1942ac;
        case 0x1942b0u: goto label_1942b0;
        case 0x1942b4u: goto label_1942b4;
        case 0x1942b8u: goto label_1942b8;
        case 0x1942bcu: goto label_1942bc;
        case 0x1942c0u: goto label_1942c0;
        case 0x1942c4u: goto label_1942c4;
        case 0x1942c8u: goto label_1942c8;
        case 0x1942ccu: goto label_1942cc;
        case 0x1942d0u: goto label_1942d0;
        case 0x1942d4u: goto label_1942d4;
        case 0x1942d8u: goto label_1942d8;
        case 0x1942dcu: goto label_1942dc;
        case 0x1942e0u: goto label_1942e0;
        case 0x1942e4u: goto label_1942e4;
        case 0x1942e8u: goto label_1942e8;
        case 0x1942ecu: goto label_1942ec;
        case 0x1942f0u: goto label_1942f0;
        case 0x1942f4u: goto label_1942f4;
        case 0x1942f8u: goto label_1942f8;
        case 0x1942fcu: goto label_1942fc;
        case 0x194300u: goto label_194300;
        case 0x194304u: goto label_194304;
        case 0x194308u: goto label_194308;
        case 0x19430cu: goto label_19430c;
        case 0x194310u: goto label_194310;
        case 0x194314u: goto label_194314;
        case 0x194318u: goto label_194318;
        case 0x19431cu: goto label_19431c;
        case 0x194320u: goto label_194320;
        case 0x194324u: goto label_194324;
        case 0x194328u: goto label_194328;
        case 0x19432cu: goto label_19432c;
        case 0x194330u: goto label_194330;
        case 0x194334u: goto label_194334;
        case 0x194338u: goto label_194338;
        case 0x19433cu: goto label_19433c;
        case 0x194340u: goto label_194340;
        case 0x194344u: goto label_194344;
        case 0x194348u: goto label_194348;
        case 0x19434cu: goto label_19434c;
        case 0x194350u: goto label_194350;
        case 0x194354u: goto label_194354;
        case 0x194358u: goto label_194358;
        case 0x19435cu: goto label_19435c;
        case 0x194360u: goto label_194360;
        case 0x194364u: goto label_194364;
        case 0x194368u: goto label_194368;
        case 0x19436cu: goto label_19436c;
        case 0x194370u: goto label_194370;
        case 0x194374u: goto label_194374;
        case 0x194378u: goto label_194378;
        case 0x19437cu: goto label_19437c;
        case 0x194380u: goto label_194380;
        case 0x194384u: goto label_194384;
        case 0x194388u: goto label_194388;
        case 0x19438cu: goto label_19438c;
        case 0x194390u: goto label_194390;
        case 0x194394u: goto label_194394;
        case 0x194398u: goto label_194398;
        case 0x19439cu: goto label_19439c;
        case 0x1943a0u: goto label_1943a0;
        case 0x1943a4u: goto label_1943a4;
        case 0x1943a8u: goto label_1943a8;
        case 0x1943acu: goto label_1943ac;
        case 0x1943b0u: goto label_1943b0;
        case 0x1943b4u: goto label_1943b4;
        case 0x1943b8u: goto label_1943b8;
        case 0x1943bcu: goto label_1943bc;
        default: break;
    }

    ctx->pc = 0x193fe0u;

label_193fe0:
    // 0x193fe0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x193fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_193fe4:
    // 0x193fe4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x193fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_193fe8:
    // 0x193fe8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x193fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_193fec:
    // 0x193fec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x193fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_193ff0:
    // 0x193ff0: 0xafa40110  sw          $a0, 0x110($sp)
    ctx->pc = 0x193ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 4));
label_193ff4:
    // 0x193ff4: 0xafa50120  sw          $a1, 0x120($sp)
    ctx->pc = 0x193ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 5));
label_193ff8:
    // 0x193ff8: 0xe7ac0130  swc1        $f12, 0x130($sp)
    ctx->pc = 0x193ff8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_193ffc:
    // 0x193ffc: 0xe7ad0140  swc1        $f13, 0x140($sp)
    ctx->pc = 0x193ffcu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_194000:
    // 0x194000: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x194000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_194004:
    // 0x194004: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x194004u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_194008:
    // 0x194008: 0x24a55b90  addiu       $a1, $a1, 0x5B90
    ctx->pc = 0x194008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23440));
label_19400c:
    // 0x19400c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x19400cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_194010:
    // 0x194010: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x194010u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_194014:
    // 0x194014: 0x320f809  jalr        $t9
label_194018:
    if (ctx->pc == 0x194018u) {
        ctx->pc = 0x19401Cu;
        goto label_19401c;
    }
    ctx->pc = 0x194014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19401Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194014u, 0x19401Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19401Cu;
label_19401c:
    // 0x19401c: 0x144000e2  bnez        $v0, . + 4 + (0xE2 << 2)
label_194020:
    if (ctx->pc == 0x194020u) {
        ctx->pc = 0x194024u;
        goto label_194024;
    }
    ctx->pc = 0x19401Cu;
    {
        const bool branch_taken_0x19401c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19401c) {
            ctx->pc = 0x1943A8u;
            goto label_1943a8;
        }
    }
    ctx->pc = 0x194024u;
label_194024:
    // 0x194024: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x194024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_194028:
    // 0x194028: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x194028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_19402c:
    // 0x19402c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x19402cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_194030:
    // 0x194030: 0x24a55bc0  addiu       $a1, $a1, 0x5BC0
    ctx->pc = 0x194030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23488));
label_194034:
    // 0x194034: 0x8c460028  lw          $a2, 0x28($v0)
    ctx->pc = 0x194034u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_194038:
    // 0x194038: 0xc0bc3e2  jal         func_2F0F88
label_19403c:
    if (ctx->pc == 0x19403Cu) {
        ctx->pc = 0x194040u;
        goto label_194040;
    }
    ctx->pc = 0x194038u;
    SET_GPR_U32(ctx, 31, 0x194040u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x194038u, 0x194040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194040u;
label_194040:
    // 0x194040: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x194040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_194044:
    // 0x194044: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x194044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_194048:
    // 0x194048: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x194048u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_19404c:
    // 0x19404c: 0x24a55be0  addiu       $a1, $a1, 0x5BE0
    ctx->pc = 0x19404cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23520));
label_194050:
    // 0x194050: 0x8c460028  lw          $a2, 0x28($v0)
    ctx->pc = 0x194050u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_194054:
    // 0x194054: 0xc0bc3e2  jal         func_2F0F88
label_194058:
    if (ctx->pc == 0x194058u) {
        ctx->pc = 0x19405Cu;
        goto label_19405c;
    }
    ctx->pc = 0x194054u;
    SET_GPR_U32(ctx, 31, 0x19405Cu);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x194054u, 0x19405Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19405Cu;
label_19405c:
    // 0x19405c: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x19405cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_194060:
    // 0x194060: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x194060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_194064:
    // 0x194064: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x194064u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_194068:
    // 0x194068: 0x24a55c00  addiu       $a1, $a1, 0x5C00
    ctx->pc = 0x194068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23552));
label_19406c:
    // 0x19406c: 0x8c460028  lw          $a2, 0x28($v0)
    ctx->pc = 0x19406cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_194070:
    // 0x194070: 0xc0bc3e2  jal         func_2F0F88
label_194074:
    if (ctx->pc == 0x194074u) {
        ctx->pc = 0x194078u;
        goto label_194078;
    }
    ctx->pc = 0x194070u;
    SET_GPR_U32(ctx, 31, 0x194078u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x194070u, 0x194078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194078u;
label_194078:
    // 0x194078: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x194078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_19407c:
    // 0x19407c: 0xc0495d4  jal         func_125750
label_194080:
    if (ctx->pc == 0x194080u) {
        ctx->pc = 0x194084u;
        goto label_194084;
    }
    ctx->pc = 0x19407Cu;
    SET_GPR_U32(ctx, 31, 0x194084u);
    ctx->pc = 0x125750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125750u, 0x19407Cu, 0x194084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194084u;
label_194084:
    // 0x194084: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x194084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_194088:
    // 0x194088: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x194088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_19408c:
    // 0x19408c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19408cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_194090:
    // 0x194090: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
label_194094:
    if (ctx->pc == 0x194094u) {
        ctx->pc = 0x194098u;
        goto label_194098;
    }
    ctx->pc = 0x194090u;
    {
        const bool branch_taken_0x194090 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x194090) {
            ctx->pc = 0x194110u;
            goto label_194110;
        }
    }
    ctx->pc = 0x194098u;
label_194098:
    // 0x194098: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x194098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19409c:
    // 0x19409c: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_1940a0:
    if (ctx->pc == 0x1940A0u) {
        ctx->pc = 0x1940A4u;
        goto label_1940a4;
    }
    ctx->pc = 0x19409Cu;
    {
        const bool branch_taken_0x19409c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19409c) {
            ctx->pc = 0x1940E8u;
            goto label_1940e8;
        }
    }
    ctx->pc = 0x1940A4u;
label_1940a4:
    // 0x1940a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1940a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1940a8:
    // 0x1940a8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_1940ac:
    if (ctx->pc == 0x1940ACu) {
        ctx->pc = 0x1940B0u;
        goto label_1940b0;
    }
    ctx->pc = 0x1940A8u;
    {
        const bool branch_taken_0x1940a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1940a8) {
            ctx->pc = 0x1940C0u;
            goto label_1940c0;
        }
    }
    ctx->pc = 0x1940B0u;
label_1940b0:
    // 0x1940b0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1940b4:
    if (ctx->pc == 0x1940B4u) {
        ctx->pc = 0x1940B8u;
        goto label_1940b8;
    }
    ctx->pc = 0x1940B0u;
    {
        const bool branch_taken_0x1940b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1940b0) {
            ctx->pc = 0x1940C0u;
            goto label_1940c0;
        }
    }
    ctx->pc = 0x1940B8u;
label_1940b8:
    // 0x1940b8: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1940bc:
    if (ctx->pc == 0x1940BCu) {
        ctx->pc = 0x1940C0u;
        goto label_1940c0;
    }
    ctx->pc = 0x1940B8u;
    {
        const bool branch_taken_0x1940b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1940b8) {
            ctx->pc = 0x194130u;
            goto label_194130;
        }
    }
    ctx->pc = 0x1940C0u;
label_1940c0:
    // 0x1940c0: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x1940c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_1940c4:
    // 0x1940c4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1940c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1940c8:
    // 0x1940c8: 0xc08e57c  jal         func_2395F0
label_1940cc:
    if (ctx->pc == 0x1940CCu) {
        ctx->pc = 0x1940D0u;
        goto label_1940d0;
    }
    ctx->pc = 0x1940C8u;
    SET_GPR_U32(ctx, 31, 0x1940D0u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x1940C8u, 0x1940D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1940D0u;
label_1940d0:
    // 0x1940d0: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1940d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_1940d4:
    // 0x1940d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1940d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1940d8:
    // 0x1940d8: 0xc0477e8  jal         func_11DFA0
label_1940dc:
    if (ctx->pc == 0x1940DCu) {
        ctx->pc = 0x1940E0u;
        goto label_1940e0;
    }
    ctx->pc = 0x1940D8u;
    SET_GPR_U32(ctx, 31, 0x1940E0u);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x1940D8u, 0x1940E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1940E0u;
label_1940e0:
    // 0x1940e0: 0x10000013  b           . + 4 + (0x13 << 2)
label_1940e4:
    if (ctx->pc == 0x1940E4u) {
        ctx->pc = 0x1940E8u;
        goto label_1940e8;
    }
    ctx->pc = 0x1940E0u;
    {
        const bool branch_taken_0x1940e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1940e0) {
            ctx->pc = 0x194130u;
            goto label_194130;
        }
    }
    ctx->pc = 0x1940E8u;
label_1940e8:
    // 0x1940e8: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x1940e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_1940ec:
    // 0x1940ec: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1940ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1940f0:
    // 0x1940f0: 0xc08e57c  jal         func_2395F0
label_1940f4:
    if (ctx->pc == 0x1940F4u) {
        ctx->pc = 0x1940F8u;
        goto label_1940f8;
    }
    ctx->pc = 0x1940F0u;
    SET_GPR_U32(ctx, 31, 0x1940F8u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x1940F0u, 0x1940F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1940F8u;
label_1940f8:
    // 0x1940f8: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1940f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_1940fc:
    // 0x1940fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1940fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_194100:
    // 0x194100: 0xc0477e8  jal         func_11DFA0
label_194104:
    if (ctx->pc == 0x194104u) {
        ctx->pc = 0x194108u;
        goto label_194108;
    }
    ctx->pc = 0x194100u;
    SET_GPR_U32(ctx, 31, 0x194108u);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x194100u, 0x194108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194108u;
label_194108:
    // 0x194108: 0x10000009  b           . + 4 + (0x9 << 2)
label_19410c:
    if (ctx->pc == 0x19410Cu) {
        ctx->pc = 0x194110u;
        goto label_194110;
    }
    ctx->pc = 0x194108u;
    {
        const bool branch_taken_0x194108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194108) {
            ctx->pc = 0x194130u;
            goto label_194130;
        }
    }
    ctx->pc = 0x194110u;
label_194110:
    // 0x194110: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x194110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_194114:
    // 0x194114: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x194114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_194118:
    // 0x194118: 0xc08e57c  jal         func_2395F0
label_19411c:
    if (ctx->pc == 0x19411Cu) {
        ctx->pc = 0x194120u;
        goto label_194120;
    }
    ctx->pc = 0x194118u;
    SET_GPR_U32(ctx, 31, 0x194120u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x194118u, 0x194120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194120u;
label_194120:
    // 0x194120: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x194120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_194124:
    // 0x194124: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x194124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_194128:
    // 0x194128: 0xc0477e8  jal         func_11DFA0
label_19412c:
    if (ctx->pc == 0x19412Cu) {
        ctx->pc = 0x194130u;
        goto label_194130;
    }
    ctx->pc = 0x194128u;
    SET_GPR_U32(ctx, 31, 0x194130u);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x194128u, 0x194130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194130u;
label_194130:
    // 0x194130: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x194130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_194134:
    // 0x194134: 0x27859250  addiu       $a1, $gp, -0x6DB0
    ctx->pc = 0x194134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939216));
label_194138:
    // 0x194138: 0xc040304  jal         func_100C10
label_19413c:
    if (ctx->pc == 0x19413Cu) {
        ctx->pc = 0x194140u;
        goto label_194140;
    }
    ctx->pc = 0x194138u;
    SET_GPR_U32(ctx, 31, 0x194140u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x194138u, 0x194140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194140u;
label_194140:
    // 0x194140: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x194140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_194144:
    // 0x194144: 0x27a500c8  addiu       $a1, $sp, 0xC8
    ctx->pc = 0x194144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_194148:
    // 0x194148: 0xc119568  jal         func_4655A0
label_19414c:
    if (ctx->pc == 0x19414Cu) {
        ctx->pc = 0x194150u;
        goto label_194150;
    }
    ctx->pc = 0x194148u;
    SET_GPR_U32(ctx, 31, 0x194150u);
    ctx->pc = 0x4655A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4655A0u, 0x194148u, 0x194150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194150u;
label_194150:
    // 0x194150: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x194150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_194154:
    // 0x194154: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x194154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_194158:
    // 0x194158: 0xc0402d4  jal         func_100B50
label_19415c:
    if (ctx->pc == 0x19415Cu) {
        ctx->pc = 0x194160u;
        goto label_194160;
    }
    ctx->pc = 0x194158u;
    SET_GPR_U32(ctx, 31, 0x194160u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x194158u, 0x194160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194160u;
label_194160:
    // 0x194160: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x194160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_194164:
    // 0x194164: 0xc440008c  lwc1        $f0, 0x8C($v0)
    ctx->pc = 0x194164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_194168:
    // 0x194168: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x194168u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_19416c:
    // 0x19416c: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x19416cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_194170:
    // 0x194170: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x194170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_194174:
    // 0x194174: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x194174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_194178:
    // 0x194178: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x194178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_19417c:
    // 0x19417c: 0xc08e63c  jal         func_2398F0
label_194180:
    if (ctx->pc == 0x194180u) {
        ctx->pc = 0x194184u;
        goto label_194184;
    }
    ctx->pc = 0x19417Cu;
    SET_GPR_U32(ctx, 31, 0x194184u);
    ctx->pc = 0x2398F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2398F0u, 0x19417Cu, 0x194184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194184u;
label_194184:
    // 0x194184: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x194184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_194188:
    // 0x194188: 0x27859260  addiu       $a1, $gp, -0x6DA0
    ctx->pc = 0x194188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939232));
label_19418c:
    // 0x19418c: 0xc040304  jal         func_100C10
label_194190:
    if (ctx->pc == 0x194190u) {
        ctx->pc = 0x194194u;
        goto label_194194;
    }
    ctx->pc = 0x19418Cu;
    SET_GPR_U32(ctx, 31, 0x194194u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x19418Cu, 0x194194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194194u;
label_194194:
    // 0x194194: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x194194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_194198:
    // 0x194198: 0x27a500b8  addiu       $a1, $sp, 0xB8
    ctx->pc = 0x194198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_19419c:
    // 0x19419c: 0xc119568  jal         func_4655A0
label_1941a0:
    if (ctx->pc == 0x1941A0u) {
        ctx->pc = 0x1941A4u;
        goto label_1941a4;
    }
    ctx->pc = 0x19419Cu;
    SET_GPR_U32(ctx, 31, 0x1941A4u);
    ctx->pc = 0x4655A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4655A0u, 0x19419Cu, 0x1941A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1941A4u;
label_1941a4:
    // 0x1941a4: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x1941a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1941a8:
    // 0x1941a8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1941a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1941ac:
    // 0x1941ac: 0xc0402d4  jal         func_100B50
label_1941b0:
    if (ctx->pc == 0x1941B0u) {
        ctx->pc = 0x1941B4u;
        goto label_1941b4;
    }
    ctx->pc = 0x1941ACu;
    SET_GPR_U32(ctx, 31, 0x1941B4u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1941ACu, 0x1941B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1941B4u;
label_1941b4:
    // 0x1941b4: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1941b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1941b8:
    // 0x1941b8: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x1941b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1941bc:
    // 0x1941bc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1941bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1941c0:
    // 0x1941c0: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x1941c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_1941c4:
    // 0x1941c4: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x1941c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_1941c8:
    // 0x1941c8: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x1941c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_1941cc:
    // 0x1941cc: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x1941ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1941d0:
    // 0x1941d0: 0xc08e63c  jal         func_2398F0
label_1941d4:
    if (ctx->pc == 0x1941D4u) {
        ctx->pc = 0x1941D8u;
        goto label_1941d8;
    }
    ctx->pc = 0x1941D0u;
    SET_GPR_U32(ctx, 31, 0x1941D8u);
    ctx->pc = 0x2398F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2398F0u, 0x1941D0u, 0x1941D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1941D8u;
label_1941d8:
    // 0x1941d8: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1941d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1941dc:
    // 0x1941dc: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1941dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_1941e0:
    // 0x1941e0: 0xc064f24  jal         func_193C90
label_1941e4:
    if (ctx->pc == 0x1941E4u) {
        ctx->pc = 0x1941E8u;
        goto label_1941e8;
    }
    ctx->pc = 0x1941E0u;
    SET_GPR_U32(ctx, 31, 0x1941E8u);
    ctx->pc = 0x193C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193C90u, 0x1941E0u, 0x1941E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1941E8u;
label_1941e8:
    // 0x1941e8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1941e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1941ec:
    // 0x1941ec: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1941ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1941f0:
    // 0x1941f0: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x1941f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_1941f4:
    // 0x1941f4: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x1941f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_1941f8:
    // 0x1941f8: 0x27859268  addiu       $a1, $gp, -0x6D98
    ctx->pc = 0x1941f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939240));
label_1941fc:
    // 0x1941fc: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x1941fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_194200:
    // 0x194200: 0xc055fb0  jal         func_157EC0
label_194204:
    if (ctx->pc == 0x194204u) {
        ctx->pc = 0x194208u;
        goto label_194208;
    }
    ctx->pc = 0x194200u;
    SET_GPR_U32(ctx, 31, 0x194208u);
    ctx->pc = 0x157EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157EC0u, 0x194200u, 0x194208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194208u;
label_194208:
    // 0x194208: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x194208u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19420c:
    // 0x19420c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x19420cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_194210:
    // 0x194210: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x194210u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_194214:
    // 0x194214: 0x24a55c18  addiu       $a1, $a1, 0x5C18
    ctx->pc = 0x194214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23576));
label_194218:
    // 0x194218: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x194218u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19421c:
    // 0x19421c: 0xc0bc3e2  jal         func_2F0F88
label_194220:
    if (ctx->pc == 0x194220u) {
        ctx->pc = 0x194224u;
        goto label_194224;
    }
    ctx->pc = 0x19421Cu;
    SET_GPR_U32(ctx, 31, 0x194224u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x19421Cu, 0x194224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194224u;
label_194224:
    // 0x194224: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x194224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_194228:
    // 0x194228: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x194228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_19422c:
    // 0x19422c: 0xc05621c  jal         func_158870
label_194230:
    if (ctx->pc == 0x194230u) {
        ctx->pc = 0x194234u;
        goto label_194234;
    }
    ctx->pc = 0x19422Cu;
    SET_GPR_U32(ctx, 31, 0x194234u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x19422Cu, 0x194234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194234u;
label_194234:
    // 0x194234: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x194234u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_194238:
    // 0x194238: 0x1200004f  beqz        $s0, . + 4 + (0x4F << 2)
label_19423c:
    if (ctx->pc == 0x19423Cu) {
        ctx->pc = 0x194240u;
        goto label_194240;
    }
    ctx->pc = 0x194238u;
    {
        const bool branch_taken_0x194238 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x194238) {
            ctx->pc = 0x194378u;
            goto label_194378;
        }
    }
    ctx->pc = 0x194240u;
label_194240:
    // 0x194240: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x194240u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_194244:
    // 0x194244: 0x0  nop
    ctx->pc = 0x194244u;
    // NOP
label_194248:
    // 0x194248: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x194248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
label_19424c:
    // 0x19424c: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x19424cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_194250:
    // 0x194250: 0xc0552dc  jal         func_154B70
label_194254:
    if (ctx->pc == 0x194254u) {
        ctx->pc = 0x194258u;
        goto label_194258;
    }
    ctx->pc = 0x194250u;
    SET_GPR_U32(ctx, 31, 0x194258u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x194250u, 0x194258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194258u;
label_194258:
    // 0x194258: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x194258u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19425c:
    // 0x19425c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x19425cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_194260:
    // 0x194260: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x194260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_194264:
    // 0x194264: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x194264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_194268:
    // 0x194268: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x194268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19426c:
    // 0x19426c: 0x27a7010c  addiu       $a3, $sp, 0x10C
    ctx->pc = 0x19426cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
label_194270:
    // 0x194270: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x194270u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_194274:
    // 0x194274: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x194274u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_194278:
    // 0x194278: 0xc08b9fc  jal         func_22E7F0
label_19427c:
    if (ctx->pc == 0x19427Cu) {
        ctx->pc = 0x194280u;
        goto label_194280;
    }
    ctx->pc = 0x194278u;
    SET_GPR_U32(ctx, 31, 0x194280u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x194278u, 0x194280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194280u;
label_194280:
    // 0x194280: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x194280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_194284:
    // 0x194284: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x194284u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_194288:
    // 0x194288: 0x0  nop
    ctx->pc = 0x194288u;
    // NOP
label_19428c:
    // 0x19428c: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x19428cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
label_194290:
    // 0x194290: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x194290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_194294:
    // 0x194294: 0xc0552dc  jal         func_154B70
label_194298:
    if (ctx->pc == 0x194298u) {
        ctx->pc = 0x19429Cu;
        goto label_19429c;
    }
    ctx->pc = 0x194294u;
    SET_GPR_U32(ctx, 31, 0x19429Cu);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x194294u, 0x19429Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19429Cu;
label_19429c:
    // 0x19429c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19429cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1942a0:
    // 0x1942a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1942a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1942a4:
    // 0x1942a4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1942a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1942a8:
    // 0x1942a8: 0x27a7010c  addiu       $a3, $sp, 0x10C
    ctx->pc = 0x1942a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
label_1942ac:
    // 0x1942ac: 0xc7ac0130  lwc1        $f12, 0x130($sp)
    ctx->pc = 0x1942acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1942b0:
    // 0x1942b0: 0xc7ad0140  lwc1        $f13, 0x140($sp)
    ctx->pc = 0x1942b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1942b4:
    // 0x1942b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1942b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1942b8:
    // 0x1942b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1942b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1942bc:
    // 0x1942bc: 0xc08b9fc  jal         func_22E7F0
label_1942c0:
    if (ctx->pc == 0x1942C0u) {
        ctx->pc = 0x1942C4u;
        goto label_1942c4;
    }
    ctx->pc = 0x1942BCu;
    SET_GPR_U32(ctx, 31, 0x1942C4u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1942BCu, 0x1942C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1942C4u;
label_1942c4:
    // 0x1942c4: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1942c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_1942c8:
    // 0x1942c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1942c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1942cc:
    // 0x1942cc: 0x0  nop
    ctx->pc = 0x1942ccu;
    // NOP
label_1942d0:
    // 0x1942d0: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x1942d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_1942d4:
    // 0x1942d4: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1942d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_1942d8:
    // 0x1942d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1942d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1942dc:
    // 0x1942dc: 0x0  nop
    ctx->pc = 0x1942dcu;
    // NOP
label_1942e0:
    // 0x1942e0: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x1942e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_1942e4:
    // 0x1942e4: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x1942e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_1942e8:
    // 0x1942e8: 0xc0552dc  jal         func_154B70
label_1942ec:
    if (ctx->pc == 0x1942ECu) {
        ctx->pc = 0x1942F0u;
        goto label_1942f0;
    }
    ctx->pc = 0x1942E8u;
    SET_GPR_U32(ctx, 31, 0x1942F0u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x1942E8u, 0x1942F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1942F0u;
label_1942f0:
    // 0x1942f0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1942f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1942f4:
    // 0x1942f4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1942f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1942f8:
    // 0x1942f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1942f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1942fc:
    // 0x1942fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1942fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_194300:
    // 0x194300: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x194300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_194304:
    // 0x194304: 0x27a700d8  addiu       $a3, $sp, 0xD8
    ctx->pc = 0x194304u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_194308:
    // 0x194308: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x194308u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19430c:
    // 0x19430c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x19430cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_194310:
    // 0x194310: 0xc08b9fc  jal         func_22E7F0
label_194314:
    if (ctx->pc == 0x194314u) {
        ctx->pc = 0x194318u;
        goto label_194318;
    }
    ctx->pc = 0x194310u;
    SET_GPR_U32(ctx, 31, 0x194318u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x194310u, 0x194318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194318u;
label_194318:
    // 0x194318: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x194318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19431c:
    // 0x19431c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19431cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_194320:
    // 0x194320: 0x0  nop
    ctx->pc = 0x194320u;
    // NOP
label_194324:
    // 0x194324: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x194324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_194328:
    // 0x194328: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x194328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19432c:
    // 0x19432c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19432cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_194330:
    // 0x194330: 0x0  nop
    ctx->pc = 0x194330u;
    // NOP
label_194334:
    // 0x194334: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x194334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_194338:
    // 0x194338: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x194338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_19433c:
    // 0x19433c: 0xc0552dc  jal         func_154B70
label_194340:
    if (ctx->pc == 0x194340u) {
        ctx->pc = 0x194344u;
        goto label_194344;
    }
    ctx->pc = 0x19433Cu;
    SET_GPR_U32(ctx, 31, 0x194344u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x19433Cu, 0x194344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194344u;
label_194344:
    // 0x194344: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x194344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_194348:
    // 0x194348: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x194348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19434c:
    // 0x19434c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19434cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_194350:
    // 0x194350: 0x27a700d8  addiu       $a3, $sp, 0xD8
    ctx->pc = 0x194350u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_194354:
    // 0x194354: 0xc7ac0130  lwc1        $f12, 0x130($sp)
    ctx->pc = 0x194354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_194358:
    // 0x194358: 0xc7ad0140  lwc1        $f13, 0x140($sp)
    ctx->pc = 0x194358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_19435c:
    // 0x19435c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19435cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_194360:
    // 0x194360: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x194360u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_194364:
    // 0x194364: 0xc08b9fc  jal         func_22E7F0
label_194368:
    if (ctx->pc == 0x194368u) {
        ctx->pc = 0x19436Cu;
        goto label_19436c;
    }
    ctx->pc = 0x194364u;
    SET_GPR_U32(ctx, 31, 0x19436Cu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x194364u, 0x19436Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19436Cu;
label_19436c:
    // 0x19436c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x19436cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_194370:
    // 0x194370: 0x1000ffa6  b           . + 4 + (-0x5A << 2)
label_194374:
    if (ctx->pc == 0x194374u) {
        ctx->pc = 0x194378u;
        goto label_194378;
    }
    ctx->pc = 0x194370u;
    {
        const bool branch_taken_0x194370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194370) {
            ctx->pc = 0x19420Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19420c;
        }
    }
    ctx->pc = 0x194378u;
label_194378:
    // 0x194378: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x194378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_19437c:
    // 0x19437c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x19437cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_194380:
    // 0x194380: 0xc0406a0  jal         func_101A80
label_194384:
    if (ctx->pc == 0x194384u) {
        ctx->pc = 0x194388u;
        goto label_194388;
    }
    ctx->pc = 0x194380u;
    SET_GPR_U32(ctx, 31, 0x194388u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x194380u, 0x194388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194388u;
label_194388:
    // 0x194388: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x194388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_19438c:
    // 0x19438c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x19438cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_194390:
    // 0x194390: 0xc0406a0  jal         func_101A80
label_194394:
    if (ctx->pc == 0x194394u) {
        ctx->pc = 0x194398u;
        goto label_194398;
    }
    ctx->pc = 0x194390u;
    SET_GPR_U32(ctx, 31, 0x194398u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x194390u, 0x194398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194398u;
label_194398:
    // 0x194398: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x194398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_19439c:
    // 0x19439c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x19439cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1943a0:
    // 0x1943a0: 0xc0406a0  jal         func_101A80
label_1943a4:
    if (ctx->pc == 0x1943A4u) {
        ctx->pc = 0x1943A8u;
        goto label_1943a8;
    }
    ctx->pc = 0x1943A0u;
    SET_GPR_U32(ctx, 31, 0x1943A8u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x1943A0u, 0x1943A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1943A8u;
label_1943a8:
    // 0x1943a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1943a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1943ac:
    // 0x1943ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1943acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1943b0:
    // 0x1943b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1943b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1943b4:
    // 0x1943b4: 0x27bd0150  addiu       $sp, $sp, 0x150
    ctx->pc = 0x1943b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_1943b8:
    // 0x1943b8: 0x3e00008  jr          $ra
label_1943bc:
    if (ctx->pc == 0x1943BCu) {
        ctx->pc = 0x1943C0u;
        goto label_fallthrough_0x1943b8;
    }
    ctx->pc = 0x1943B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1943B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1943b8:
    ctx->pc = 0x1943C0u;
}
