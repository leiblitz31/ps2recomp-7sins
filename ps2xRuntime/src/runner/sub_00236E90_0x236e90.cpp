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

// Function: sub_00236E90
// Address: 0x236e90 - 0x237280
void sub_00236E90_0x236e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236E90_0x236e90");
#endif

    switch (ctx->pc) {
        case 0x236e90u: goto label_236e90;
        case 0x236e94u: goto label_236e94;
        case 0x236e98u: goto label_236e98;
        case 0x236e9cu: goto label_236e9c;
        case 0x236ea0u: goto label_236ea0;
        case 0x236ea4u: goto label_236ea4;
        case 0x236ea8u: goto label_236ea8;
        case 0x236eacu: goto label_236eac;
        case 0x236eb0u: goto label_236eb0;
        case 0x236eb4u: goto label_236eb4;
        case 0x236eb8u: goto label_236eb8;
        case 0x236ebcu: goto label_236ebc;
        case 0x236ec0u: goto label_236ec0;
        case 0x236ec4u: goto label_236ec4;
        case 0x236ec8u: goto label_236ec8;
        case 0x236eccu: goto label_236ecc;
        case 0x236ed0u: goto label_236ed0;
        case 0x236ed4u: goto label_236ed4;
        case 0x236ed8u: goto label_236ed8;
        case 0x236edcu: goto label_236edc;
        case 0x236ee0u: goto label_236ee0;
        case 0x236ee4u: goto label_236ee4;
        case 0x236ee8u: goto label_236ee8;
        case 0x236eecu: goto label_236eec;
        case 0x236ef0u: goto label_236ef0;
        case 0x236ef4u: goto label_236ef4;
        case 0x236ef8u: goto label_236ef8;
        case 0x236efcu: goto label_236efc;
        case 0x236f00u: goto label_236f00;
        case 0x236f04u: goto label_236f04;
        case 0x236f08u: goto label_236f08;
        case 0x236f0cu: goto label_236f0c;
        case 0x236f10u: goto label_236f10;
        case 0x236f14u: goto label_236f14;
        case 0x236f18u: goto label_236f18;
        case 0x236f1cu: goto label_236f1c;
        case 0x236f20u: goto label_236f20;
        case 0x236f24u: goto label_236f24;
        case 0x236f28u: goto label_236f28;
        case 0x236f2cu: goto label_236f2c;
        case 0x236f30u: goto label_236f30;
        case 0x236f34u: goto label_236f34;
        case 0x236f38u: goto label_236f38;
        case 0x236f3cu: goto label_236f3c;
        case 0x236f40u: goto label_236f40;
        case 0x236f44u: goto label_236f44;
        case 0x236f48u: goto label_236f48;
        case 0x236f4cu: goto label_236f4c;
        case 0x236f50u: goto label_236f50;
        case 0x236f54u: goto label_236f54;
        case 0x236f58u: goto label_236f58;
        case 0x236f5cu: goto label_236f5c;
        case 0x236f60u: goto label_236f60;
        case 0x236f64u: goto label_236f64;
        case 0x236f68u: goto label_236f68;
        case 0x236f6cu: goto label_236f6c;
        case 0x236f70u: goto label_236f70;
        case 0x236f74u: goto label_236f74;
        case 0x236f78u: goto label_236f78;
        case 0x236f7cu: goto label_236f7c;
        case 0x236f80u: goto label_236f80;
        case 0x236f84u: goto label_236f84;
        case 0x236f88u: goto label_236f88;
        case 0x236f8cu: goto label_236f8c;
        case 0x236f90u: goto label_236f90;
        case 0x236f94u: goto label_236f94;
        case 0x236f98u: goto label_236f98;
        case 0x236f9cu: goto label_236f9c;
        case 0x236fa0u: goto label_236fa0;
        case 0x236fa4u: goto label_236fa4;
        case 0x236fa8u: goto label_236fa8;
        case 0x236facu: goto label_236fac;
        case 0x236fb0u: goto label_236fb0;
        case 0x236fb4u: goto label_236fb4;
        case 0x236fb8u: goto label_236fb8;
        case 0x236fbcu: goto label_236fbc;
        case 0x236fc0u: goto label_236fc0;
        case 0x236fc4u: goto label_236fc4;
        case 0x236fc8u: goto label_236fc8;
        case 0x236fccu: goto label_236fcc;
        case 0x236fd0u: goto label_236fd0;
        case 0x236fd4u: goto label_236fd4;
        case 0x236fd8u: goto label_236fd8;
        case 0x236fdcu: goto label_236fdc;
        case 0x236fe0u: goto label_236fe0;
        case 0x236fe4u: goto label_236fe4;
        case 0x236fe8u: goto label_236fe8;
        case 0x236fecu: goto label_236fec;
        case 0x236ff0u: goto label_236ff0;
        case 0x236ff4u: goto label_236ff4;
        case 0x236ff8u: goto label_236ff8;
        case 0x236ffcu: goto label_236ffc;
        case 0x237000u: goto label_237000;
        case 0x237004u: goto label_237004;
        case 0x237008u: goto label_237008;
        case 0x23700cu: goto label_23700c;
        case 0x237010u: goto label_237010;
        case 0x237014u: goto label_237014;
        case 0x237018u: goto label_237018;
        case 0x23701cu: goto label_23701c;
        case 0x237020u: goto label_237020;
        case 0x237024u: goto label_237024;
        case 0x237028u: goto label_237028;
        case 0x23702cu: goto label_23702c;
        case 0x237030u: goto label_237030;
        case 0x237034u: goto label_237034;
        case 0x237038u: goto label_237038;
        case 0x23703cu: goto label_23703c;
        case 0x237040u: goto label_237040;
        case 0x237044u: goto label_237044;
        case 0x237048u: goto label_237048;
        case 0x23704cu: goto label_23704c;
        case 0x237050u: goto label_237050;
        case 0x237054u: goto label_237054;
        case 0x237058u: goto label_237058;
        case 0x23705cu: goto label_23705c;
        case 0x237060u: goto label_237060;
        case 0x237064u: goto label_237064;
        case 0x237068u: goto label_237068;
        case 0x23706cu: goto label_23706c;
        case 0x237070u: goto label_237070;
        case 0x237074u: goto label_237074;
        case 0x237078u: goto label_237078;
        case 0x23707cu: goto label_23707c;
        case 0x237080u: goto label_237080;
        case 0x237084u: goto label_237084;
        case 0x237088u: goto label_237088;
        case 0x23708cu: goto label_23708c;
        case 0x237090u: goto label_237090;
        case 0x237094u: goto label_237094;
        case 0x237098u: goto label_237098;
        case 0x23709cu: goto label_23709c;
        case 0x2370a0u: goto label_2370a0;
        case 0x2370a4u: goto label_2370a4;
        case 0x2370a8u: goto label_2370a8;
        case 0x2370acu: goto label_2370ac;
        case 0x2370b0u: goto label_2370b0;
        case 0x2370b4u: goto label_2370b4;
        case 0x2370b8u: goto label_2370b8;
        case 0x2370bcu: goto label_2370bc;
        case 0x2370c0u: goto label_2370c0;
        case 0x2370c4u: goto label_2370c4;
        case 0x2370c8u: goto label_2370c8;
        case 0x2370ccu: goto label_2370cc;
        case 0x2370d0u: goto label_2370d0;
        case 0x2370d4u: goto label_2370d4;
        case 0x2370d8u: goto label_2370d8;
        case 0x2370dcu: goto label_2370dc;
        case 0x2370e0u: goto label_2370e0;
        case 0x2370e4u: goto label_2370e4;
        case 0x2370e8u: goto label_2370e8;
        case 0x2370ecu: goto label_2370ec;
        case 0x2370f0u: goto label_2370f0;
        case 0x2370f4u: goto label_2370f4;
        case 0x2370f8u: goto label_2370f8;
        case 0x2370fcu: goto label_2370fc;
        case 0x237100u: goto label_237100;
        case 0x237104u: goto label_237104;
        case 0x237108u: goto label_237108;
        case 0x23710cu: goto label_23710c;
        case 0x237110u: goto label_237110;
        case 0x237114u: goto label_237114;
        case 0x237118u: goto label_237118;
        case 0x23711cu: goto label_23711c;
        case 0x237120u: goto label_237120;
        case 0x237124u: goto label_237124;
        case 0x237128u: goto label_237128;
        case 0x23712cu: goto label_23712c;
        case 0x237130u: goto label_237130;
        case 0x237134u: goto label_237134;
        case 0x237138u: goto label_237138;
        case 0x23713cu: goto label_23713c;
        case 0x237140u: goto label_237140;
        case 0x237144u: goto label_237144;
        case 0x237148u: goto label_237148;
        case 0x23714cu: goto label_23714c;
        case 0x237150u: goto label_237150;
        case 0x237154u: goto label_237154;
        case 0x237158u: goto label_237158;
        case 0x23715cu: goto label_23715c;
        case 0x237160u: goto label_237160;
        case 0x237164u: goto label_237164;
        case 0x237168u: goto label_237168;
        case 0x23716cu: goto label_23716c;
        case 0x237170u: goto label_237170;
        case 0x237174u: goto label_237174;
        case 0x237178u: goto label_237178;
        case 0x23717cu: goto label_23717c;
        case 0x237180u: goto label_237180;
        case 0x237184u: goto label_237184;
        case 0x237188u: goto label_237188;
        case 0x23718cu: goto label_23718c;
        case 0x237190u: goto label_237190;
        case 0x237194u: goto label_237194;
        case 0x237198u: goto label_237198;
        case 0x23719cu: goto label_23719c;
        case 0x2371a0u: goto label_2371a0;
        case 0x2371a4u: goto label_2371a4;
        case 0x2371a8u: goto label_2371a8;
        case 0x2371acu: goto label_2371ac;
        case 0x2371b0u: goto label_2371b0;
        case 0x2371b4u: goto label_2371b4;
        case 0x2371b8u: goto label_2371b8;
        case 0x2371bcu: goto label_2371bc;
        case 0x2371c0u: goto label_2371c0;
        case 0x2371c4u: goto label_2371c4;
        case 0x2371c8u: goto label_2371c8;
        case 0x2371ccu: goto label_2371cc;
        case 0x2371d0u: goto label_2371d0;
        case 0x2371d4u: goto label_2371d4;
        case 0x2371d8u: goto label_2371d8;
        case 0x2371dcu: goto label_2371dc;
        case 0x2371e0u: goto label_2371e0;
        case 0x2371e4u: goto label_2371e4;
        case 0x2371e8u: goto label_2371e8;
        case 0x2371ecu: goto label_2371ec;
        case 0x2371f0u: goto label_2371f0;
        case 0x2371f4u: goto label_2371f4;
        case 0x2371f8u: goto label_2371f8;
        case 0x2371fcu: goto label_2371fc;
        case 0x237200u: goto label_237200;
        case 0x237204u: goto label_237204;
        case 0x237208u: goto label_237208;
        case 0x23720cu: goto label_23720c;
        case 0x237210u: goto label_237210;
        case 0x237214u: goto label_237214;
        case 0x237218u: goto label_237218;
        case 0x23721cu: goto label_23721c;
        case 0x237220u: goto label_237220;
        case 0x237224u: goto label_237224;
        case 0x237228u: goto label_237228;
        case 0x23722cu: goto label_23722c;
        case 0x237230u: goto label_237230;
        case 0x237234u: goto label_237234;
        case 0x237238u: goto label_237238;
        case 0x23723cu: goto label_23723c;
        case 0x237240u: goto label_237240;
        case 0x237244u: goto label_237244;
        case 0x237248u: goto label_237248;
        case 0x23724cu: goto label_23724c;
        case 0x237250u: goto label_237250;
        case 0x237254u: goto label_237254;
        case 0x237258u: goto label_237258;
        case 0x23725cu: goto label_23725c;
        case 0x237260u: goto label_237260;
        case 0x237264u: goto label_237264;
        case 0x237268u: goto label_237268;
        case 0x23726cu: goto label_23726c;
        case 0x237270u: goto label_237270;
        case 0x237274u: goto label_237274;
        case 0x237278u: goto label_237278;
        case 0x23727cu: goto label_23727c;
        default: break;
    }

    ctx->pc = 0x236e90u;

label_236e90:
    // 0x236e90: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x236e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_236e94:
    // 0x236e94: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x236e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_236e98:
    // 0x236e98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x236e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_236e9c:
    // 0x236e9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x236e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_236ea0:
    // 0x236ea0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x236ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_236ea4:
    // 0x236ea4: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x236ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
label_236ea8:
    // 0x236ea8: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x236ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
label_236eac:
    // 0x236eac: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x236eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_236eb0:
    // 0x236eb0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x236eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_236eb4:
    // 0x236eb4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x236eb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_236eb8:
    // 0x236eb8: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x236eb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_236ebc:
    // 0x236ebc: 0x320f809  jalr        $t9
label_236ec0:
    if (ctx->pc == 0x236EC0u) {
        ctx->pc = 0x236EC4u;
        goto label_236ec4;
    }
    ctx->pc = 0x236EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x236EC4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236EBCu, 0x236EC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x236EC4u;
label_236ec4:
    // 0x236ec4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x236ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_236ec8:
    // 0x236ec8: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
label_236ecc:
    if (ctx->pc == 0x236ECCu) {
        ctx->pc = 0x236ED0u;
        goto label_236ed0;
    }
    ctx->pc = 0x236EC8u;
    {
        const bool branch_taken_0x236ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x236ec8) {
            ctx->pc = 0x236EDCu;
            goto label_236edc;
        }
    }
    ctx->pc = 0x236ED0u;
label_236ed0:
    // 0x236ed0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x236ed0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_236ed4:
    // 0x236ed4: 0x10000048  b           . + 4 + (0x48 << 2)
label_236ed8:
    if (ctx->pc == 0x236ED8u) {
        ctx->pc = 0x236EDCu;
        goto label_236edc;
    }
    ctx->pc = 0x236ED4u;
    {
        const bool branch_taken_0x236ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x236ed4) {
            ctx->pc = 0x236FF8u;
            goto label_236ff8;
        }
    }
    ctx->pc = 0x236EDCu;
label_236edc:
    // 0x236edc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x236edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_236ee0:
    // 0x236ee0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x236ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_236ee4:
    // 0x236ee4: 0xc11a12c  jal         func_4684B0
label_236ee8:
    if (ctx->pc == 0x236EE8u) {
        ctx->pc = 0x236EECu;
        goto label_236eec;
    }
    ctx->pc = 0x236EE4u;
    SET_GPR_U32(ctx, 31, 0x236EECu);
    ctx->pc = 0x4684B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4684B0u, 0x236EE4u, 0x236EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236EECu;
label_236eec:
    // 0x236eec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x236eecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236ef0:
    // 0x236ef0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x236ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_236ef4:
    // 0x236ef4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x236ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_236ef8:
    // 0x236ef8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x236ef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_236efc:
    // 0x236efc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x236efcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_236f00:
    // 0x236f00: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x236f00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_236f04:
    // 0x236f04: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x236f04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_236f08:
    // 0x236f08: 0x320f809  jalr        $t9
label_236f0c:
    if (ctx->pc == 0x236F0Cu) {
        ctx->pc = 0x236F10u;
        goto label_236f10;
    }
    ctx->pc = 0x236F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x236F10u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236F08u, 0x236F10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x236F10u;
label_236f10:
    // 0x236f10: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x236f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_236f14:
    // 0x236f14: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x236f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_236f18:
    // 0x236f18: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x236f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_236f1c:
    // 0x236f1c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x236f1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_236f20:
    // 0x236f20: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x236f20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_236f24:
    // 0x236f24: 0x320f809  jalr        $t9
label_236f28:
    if (ctx->pc == 0x236F28u) {
        ctx->pc = 0x236F2Cu;
        goto label_236f2c;
    }
    ctx->pc = 0x236F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x236F2Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236F24u, 0x236F2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x236F2Cu;
label_236f2c:
    // 0x236f2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x236f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_236f30:
    // 0x236f30: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x236f30u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_236f34:
    // 0x236f34: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x236f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_236f38:
    // 0x236f38: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x236f38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_236f3c:
    // 0x236f3c: 0xc040304  jal         func_100C10
label_236f40:
    if (ctx->pc == 0x236F40u) {
        ctx->pc = 0x236F44u;
        goto label_236f44;
    }
    ctx->pc = 0x236F3Cu;
    SET_GPR_U32(ctx, 31, 0x236F44u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x236F3Cu, 0x236F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236F44u;
label_236f44:
    // 0x236f44: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x236f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_236f48:
    // 0x236f48: 0x27859d40  addiu       $a1, $gp, -0x62C0
    ctx->pc = 0x236f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942016));
label_236f4c:
    // 0x236f4c: 0xc040304  jal         func_100C10
label_236f50:
    if (ctx->pc == 0x236F50u) {
        ctx->pc = 0x236F54u;
        goto label_236f54;
    }
    ctx->pc = 0x236F4Cu;
    SET_GPR_U32(ctx, 31, 0x236F54u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x236F4Cu, 0x236F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236F54u;
label_236f54:
    // 0x236f54: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x236f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_236f58:
    // 0x236f58: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x236f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_236f5c:
    // 0x236f5c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x236f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_236f60:
    // 0x236f60: 0xc119d74  jal         func_4675D0
label_236f64:
    if (ctx->pc == 0x236F64u) {
        ctx->pc = 0x236F68u;
        goto label_236f68;
    }
    ctx->pc = 0x236F60u;
    SET_GPR_U32(ctx, 31, 0x236F68u);
    ctx->pc = 0x4675D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4675D0u, 0x236F60u, 0x236F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236F68u;
label_236f68:
    // 0x236f68: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x236f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_236f6c:
    // 0x236f6c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x236f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_236f70:
    // 0x236f70: 0xc0402d4  jal         func_100B50
label_236f74:
    if (ctx->pc == 0x236F74u) {
        ctx->pc = 0x236F78u;
        goto label_236f78;
    }
    ctx->pc = 0x236F70u;
    SET_GPR_U32(ctx, 31, 0x236F78u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x236F70u, 0x236F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236F78u;
label_236f78:
    // 0x236f78: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x236f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_236f7c:
    // 0x236f7c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x236f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_236f80:
    // 0x236f80: 0xc0402d4  jal         func_100B50
label_236f84:
    if (ctx->pc == 0x236F84u) {
        ctx->pc = 0x236F88u;
        goto label_236f88;
    }
    ctx->pc = 0x236F80u;
    SET_GPR_U32(ctx, 31, 0x236F88u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x236F80u, 0x236F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236F88u;
label_236f88:
    // 0x236f88: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x236f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_236f8c:
    // 0x236f8c: 0xc119db4  jal         func_4676D0
label_236f90:
    if (ctx->pc == 0x236F90u) {
        ctx->pc = 0x236F94u;
        goto label_236f94;
    }
    ctx->pc = 0x236F8Cu;
    SET_GPR_U32(ctx, 31, 0x236F94u);
    ctx->pc = 0x4676D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4676D0u, 0x236F8Cu, 0x236F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236F94u;
label_236f94:
    // 0x236f94: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_236f98:
    if (ctx->pc == 0x236F98u) {
        ctx->pc = 0x236F9Cu;
        goto label_236f9c;
    }
    ctx->pc = 0x236F94u;
    {
        const bool branch_taken_0x236f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x236f94) {
            ctx->pc = 0x236FE0u;
            goto label_236fe0;
        }
    }
    ctx->pc = 0x236F9Cu;
label_236f9c:
    // 0x236f9c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x236f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_236fa0:
    // 0x236fa0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x236fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_236fa4:
    // 0x236fa4: 0xc049394  jal         func_124E50
label_236fa8:
    if (ctx->pc == 0x236FA8u) {
        ctx->pc = 0x236FACu;
        goto label_236fac;
    }
    ctx->pc = 0x236FA4u;
    SET_GPR_U32(ctx, 31, 0x236FACu);
    ctx->pc = 0x124E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E50u, 0x236FA4u, 0x236FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236FACu;
label_236fac:
    // 0x236fac: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x236facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_236fb0:
    // 0x236fb0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x236fb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236fb4:
    // 0x236fb4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x236fb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_236fb8:
    // 0x236fb8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x236fb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_236fbc:
    // 0x236fbc: 0xc119e90  jal         func_467A40
label_236fc0:
    if (ctx->pc == 0x236FC0u) {
        ctx->pc = 0x236FC4u;
        goto label_236fc4;
    }
    ctx->pc = 0x236FBCu;
    SET_GPR_U32(ctx, 31, 0x236FC4u);
    ctx->pc = 0x467A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467A40u, 0x236FBCu, 0x236FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236FC4u;
label_236fc4:
    // 0x236fc4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x236fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_236fc8:
    // 0x236fc8: 0x10430002  beq         $v0, $v1, . + 4 + (0x2 << 2)
label_236fcc:
    if (ctx->pc == 0x236FCCu) {
        ctx->pc = 0x236FD0u;
        goto label_236fd0;
    }
    ctx->pc = 0x236FC8u;
    {
        const bool branch_taken_0x236fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x236fc8) {
            ctx->pc = 0x236FD4u;
            goto label_236fd4;
        }
    }
    ctx->pc = 0x236FD0u;
label_236fd0:
    // 0x236fd0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x236fd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_236fd4:
    // 0x236fd4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x236fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_236fd8:
    // 0x236fd8: 0xc119e7c  jal         func_4679F0
label_236fdc:
    if (ctx->pc == 0x236FDCu) {
        ctx->pc = 0x236FE0u;
        goto label_236fe0;
    }
    ctx->pc = 0x236FD8u;
    SET_GPR_U32(ctx, 31, 0x236FE0u);
    ctx->pc = 0x4679F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4679F0u, 0x236FD8u, 0x236FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236FE0u;
label_236fe0:
    // 0x236fe0: 0x321100ff  andi        $s1, $s0, 0xFF
    ctx->pc = 0x236fe0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_236fe4:
    // 0x236fe4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x236fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_236fe8:
    // 0x236fe8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x236fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_236fec:
    // 0x236fec: 0xc119d90  jal         func_467640
label_236ff0:
    if (ctx->pc == 0x236FF0u) {
        ctx->pc = 0x236FF4u;
        goto label_236ff4;
    }
    ctx->pc = 0x236FECu;
    SET_GPR_U32(ctx, 31, 0x236FF4u);
    ctx->pc = 0x467640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467640u, 0x236FECu, 0x236FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236FF4u;
label_236ff4:
    // 0x236ff4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x236ff4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_236ff8:
    // 0x236ff8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x236ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_236ffc:
    // 0x236ffc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x236ffcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_237000:
    // 0x237000: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x237000u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_237004:
    // 0x237004: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x237004u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_237008:
    // 0x237008: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x237008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_23700c:
    // 0x23700c: 0x3e00008  jr          $ra
label_237010:
    if (ctx->pc == 0x237010u) {
        ctx->pc = 0x237014u;
        goto label_237014;
    }
    ctx->pc = 0x23700Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23700Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237014u;
label_237014:
    // 0x237014: 0x0  nop
    ctx->pc = 0x237014u;
    // NOP
label_237018:
    // 0x237018: 0x0  nop
    ctx->pc = 0x237018u;
    // NOP
label_23701c:
    // 0x23701c: 0x0  nop
    ctx->pc = 0x23701cu;
    // NOP
label_237020:
    // 0x237020: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x237020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_237024:
    // 0x237024: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x237024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_237028:
    // 0x237028: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x237028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_23702c:
    // 0x23702c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x23702cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_237030:
    // 0x237030: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x237030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_237034:
    // 0x237034: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x237034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_237038:
    // 0x237038: 0xc08dae4  jal         func_236B90
label_23703c:
    if (ctx->pc == 0x23703Cu) {
        ctx->pc = 0x237040u;
        goto label_237040;
    }
    ctx->pc = 0x237038u;
    SET_GPR_U32(ctx, 31, 0x237040u);
    ctx->pc = 0x236B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236B90u, 0x237038u, 0x237040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237040u;
label_237040:
    // 0x237040: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x237040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_237044:
    // 0x237044: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x237044u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_237048:
    // 0x237048: 0x3e00008  jr          $ra
label_23704c:
    if (ctx->pc == 0x23704Cu) {
        ctx->pc = 0x237050u;
        goto label_237050;
    }
    ctx->pc = 0x237048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237050u;
label_237050:
    // 0x237050: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x237050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_237054:
    // 0x237054: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x237054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_237058:
    // 0x237058: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x237058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_23705c:
    // 0x23705c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x23705cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_237060:
    // 0x237060: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x237060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_237064:
    // 0x237064: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x237064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_237068:
    // 0x237068: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x237068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_23706c:
    // 0x23706c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23706cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_237070:
    // 0x237070: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x237070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_237074:
    // 0x237074: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x237074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
label_237078:
    // 0x237078: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x237078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
label_23707c:
    // 0x23707c: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x23707cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_237080:
    // 0x237080: 0xc042330  jal         func_108CC0
label_237084:
    if (ctx->pc == 0x237084u) {
        ctx->pc = 0x237088u;
        goto label_237088;
    }
    ctx->pc = 0x237080u;
    SET_GPR_U32(ctx, 31, 0x237088u);
    ctx->pc = 0x108CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108CC0u, 0x237080u, 0x237088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237088u;
label_237088:
    // 0x237088: 0x1002000a  beq         $zero, $v0, . + 4 + (0xA << 2)
label_23708c:
    if (ctx->pc == 0x23708Cu) {
        ctx->pc = 0x237090u;
        goto label_237090;
    }
    ctx->pc = 0x237088u;
    {
        const bool branch_taken_0x237088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x237088) {
            ctx->pc = 0x2370B4u;
            goto label_2370b4;
        }
    }
    ctx->pc = 0x237090u;
label_237090:
    // 0x237090: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x237090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_237094:
    // 0x237094: 0xc042330  jal         func_108CC0
label_237098:
    if (ctx->pc == 0x237098u) {
        ctx->pc = 0x23709Cu;
        goto label_23709c;
    }
    ctx->pc = 0x237094u;
    SET_GPR_U32(ctx, 31, 0x23709Cu);
    ctx->pc = 0x108CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108CC0u, 0x237094u, 0x23709Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23709Cu;
label_23709c:
    // 0x23709c: 0x3c150012  lui         $s5, 0x12
    ctx->pc = 0x23709cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)18 << 16));
label_2370a0:
    // 0x2370a0: 0x26b53cd0  addiu       $s5, $s5, 0x3CD0
    ctx->pc = 0x2370a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 15568));
label_2370a4:
    // 0x2370a4: 0x2a0f809  jalr        $s5
label_2370a8:
    if (ctx->pc == 0x2370A8u) {
        ctx->pc = 0x2370ACu;
        goto label_2370ac;
    }
    ctx->pc = 0x2370A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x2370ACu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2370A4u, 0x2370ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2370ACu;
label_2370ac:
    // 0x2370ac: 0x14020007  bne         $zero, $v0, . + 4 + (0x7 << 2)
label_2370b0:
    if (ctx->pc == 0x2370B0u) {
        ctx->pc = 0x2370B4u;
        goto label_2370b4;
    }
    ctx->pc = 0x2370ACu;
    {
        const bool branch_taken_0x2370ac = (GPR_U64(ctx, 0) != GPR_U64(ctx, 2));
        if (branch_taken_0x2370ac) {
            ctx->pc = 0x2370CCu;
            goto label_2370cc;
        }
    }
    ctx->pc = 0x2370B4u;
label_2370b4:
    // 0x2370b4: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x2370b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2370b8:
    // 0x2370b8: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x2370b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_2370bc:
    // 0x2370bc: 0xc08db20  jal         func_236C80
label_2370c0:
    if (ctx->pc == 0x2370C0u) {
        ctx->pc = 0x2370C4u;
        goto label_2370c4;
    }
    ctx->pc = 0x2370BCu;
    SET_GPR_U32(ctx, 31, 0x2370C4u);
    ctx->pc = 0x236C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C80u, 0x2370BCu, 0x2370C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2370C4u;
label_2370c4:
    // 0x2370c4: 0x10000063  b           . + 4 + (0x63 << 2)
label_2370c8:
    if (ctx->pc == 0x2370C8u) {
        ctx->pc = 0x2370CCu;
        goto label_2370cc;
    }
    ctx->pc = 0x2370C4u;
    {
        const bool branch_taken_0x2370c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2370c4) {
            ctx->pc = 0x237254u;
            goto label_237254;
        }
    }
    ctx->pc = 0x2370CCu;
label_2370cc:
    // 0x2370cc: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x2370ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_2370d0:
    // 0x2370d0: 0xc042330  jal         func_108CC0
label_2370d4:
    if (ctx->pc == 0x2370D4u) {
        ctx->pc = 0x2370D8u;
        goto label_2370d8;
    }
    ctx->pc = 0x2370D0u;
    SET_GPR_U32(ctx, 31, 0x2370D8u);
    ctx->pc = 0x108CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108CC0u, 0x2370D0u, 0x2370D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2370D8u;
label_2370d8:
    // 0x2370d8: 0x3c140012  lui         $s4, 0x12
    ctx->pc = 0x2370d8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)18 << 16));
label_2370dc:
    // 0x2370dc: 0x26943cd0  addiu       $s4, $s4, 0x3CD0
    ctx->pc = 0x2370dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 15568));
label_2370e0:
    // 0x2370e0: 0x280f809  jalr        $s4
label_2370e4:
    if (ctx->pc == 0x2370E4u) {
        ctx->pc = 0x2370E8u;
        goto label_2370e8;
    }
    ctx->pc = 0x2370E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x2370E8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2370E0u, 0x2370E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2370E8u;
label_2370e8:
    // 0x2370e8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2370e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2370ec:
    // 0x2370ec: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x2370ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_2370f0:
    // 0x2370f0: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x2370f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_2370f4:
    // 0x2370f4: 0xc08d954  jal         func_236550
label_2370f8:
    if (ctx->pc == 0x2370F8u) {
        ctx->pc = 0x2370FCu;
        goto label_2370fc;
    }
    ctx->pc = 0x2370F4u;
    SET_GPR_U32(ctx, 31, 0x2370FCu);
    ctx->pc = 0x236550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236550u, 0x2370F4u, 0x2370FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2370FCu;
label_2370fc:
    // 0x2370fc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2370fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_237100:
    // 0x237100: 0x240082a  slt         $at, $s2, $zero
    ctx->pc = 0x237100u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_237104:
    // 0x237104: 0x1420004f  bnez        $at, . + 4 + (0x4F << 2)
label_237108:
    if (ctx->pc == 0x237108u) {
        ctx->pc = 0x23710Cu;
        goto label_23710c;
    }
    ctx->pc = 0x237104u;
    {
        const bool branch_taken_0x237104 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x237104) {
            ctx->pc = 0x237244u;
            goto label_237244;
        }
    }
    ctx->pc = 0x23710Cu;
label_23710c:
    // 0x23710c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23710cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_237110:
    // 0x237110: 0xc08dca0  jal         func_237280
label_237114:
    if (ctx->pc == 0x237114u) {
        ctx->pc = 0x237118u;
        goto label_237118;
    }
    ctx->pc = 0x237110u;
    SET_GPR_U32(ctx, 31, 0x237118u);
    ctx->pc = 0x237280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237280u, 0x237110u, 0x237118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237118u;
label_237118:
    // 0x237118: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x237118u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_23711c:
    // 0x23711c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x23711cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_237120:
    // 0x237120: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x237120u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_237124:
    // 0x237124: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x237124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_237128:
    // 0x237128: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x237128u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_23712c:
    // 0x23712c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x23712cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_237130:
    // 0x237130: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
label_237134:
    if (ctx->pc == 0x237134u) {
        ctx->pc = 0x237138u;
        goto label_237138;
    }
    ctx->pc = 0x237130u;
    {
        const bool branch_taken_0x237130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x237130) {
            ctx->pc = 0x237244u;
            goto label_237244;
        }
    }
    ctx->pc = 0x237138u;
label_237138:
    // 0x237138: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x237138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_23713c:
    // 0x23713c: 0xc119b68  jal         func_466DA0
label_237140:
    if (ctx->pc == 0x237140u) {
        ctx->pc = 0x237144u;
        goto label_237144;
    }
    ctx->pc = 0x23713Cu;
    SET_GPR_U32(ctx, 31, 0x237144u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x23713Cu, 0x237144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237144u;
label_237144:
    // 0x237144: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x237144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_237148:
    // 0x237148: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x237148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23714c:
    // 0x23714c: 0xc0400e0  jal         func_100380
label_237150:
    if (ctx->pc == 0x237150u) {
        ctx->pc = 0x237154u;
        goto label_237154;
    }
    ctx->pc = 0x23714Cu;
    SET_GPR_U32(ctx, 31, 0x237154u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x23714Cu, 0x237154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237154u;
label_237154:
    // 0x237154: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x237154u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_237158:
    // 0x237158: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_23715c:
    if (ctx->pc == 0x23715Cu) {
        ctx->pc = 0x237160u;
        goto label_237160;
    }
    ctx->pc = 0x237158u;
    {
        const bool branch_taken_0x237158 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x237158) {
            ctx->pc = 0x237170u;
            goto label_237170;
        }
    }
    ctx->pc = 0x237160u;
label_237160:
    // 0x237160: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x237160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_237164:
    // 0x237164: 0xc119f38  jal         func_467CE0
label_237168:
    if (ctx->pc == 0x237168u) {
        ctx->pc = 0x23716Cu;
        goto label_23716c;
    }
    ctx->pc = 0x237164u;
    SET_GPR_U32(ctx, 31, 0x23716Cu);
    ctx->pc = 0x467CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467CE0u, 0x237164u, 0x23716Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23716Cu;
label_23716c:
    // 0x23716c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x23716cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_237170:
    // 0x237170: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x237170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_237174:
    // 0x237174: 0xac510004  sw          $s1, 0x4($v0)
    ctx->pc = 0x237174u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 17));
label_237178:
    // 0x237178: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x237178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_23717c:
    // 0x23717c: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x23717cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_237180:
    // 0x237180: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x237180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_237184:
    // 0x237184: 0xc119f5c  jal         func_467D70
label_237188:
    if (ctx->pc == 0x237188u) {
        ctx->pc = 0x23718Cu;
        goto label_23718c;
    }
    ctx->pc = 0x237184u;
    SET_GPR_U32(ctx, 31, 0x23718Cu);
    ctx->pc = 0x467D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467D70u, 0x237184u, 0x23718Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23718Cu;
label_23718c:
    // 0x23718c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23718cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_237190:
    // 0x237190: 0x14430028  bne         $v0, $v1, . + 4 + (0x28 << 2)
label_237194:
    if (ctx->pc == 0x237194u) {
        ctx->pc = 0x237198u;
        goto label_237198;
    }
    ctx->pc = 0x237190u;
    {
        const bool branch_taken_0x237190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x237190) {
            ctx->pc = 0x237234u;
            goto label_237234;
        }
    }
    ctx->pc = 0x237198u;
label_237198:
    // 0x237198: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x237198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_23719c:
    // 0x23719c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x23719cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2371a0:
    // 0x2371a0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2371a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2371a4:
    // 0x2371a4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2371a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2371a8:
    // 0x2371a8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2371a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2371ac:
    // 0x2371ac: 0x320f809  jalr        $t9
label_2371b0:
    if (ctx->pc == 0x2371B0u) {
        ctx->pc = 0x2371B4u;
        goto label_2371b4;
    }
    ctx->pc = 0x2371ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2371B4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2371ACu, 0x2371B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2371B4u;
label_2371b4:
    // 0x2371b4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2371b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2371b8:
    // 0x2371b8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2371b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2371bc:
    // 0x2371bc: 0xc049394  jal         func_124E50
label_2371c0:
    if (ctx->pc == 0x2371C0u) {
        ctx->pc = 0x2371C4u;
        goto label_2371c4;
    }
    ctx->pc = 0x2371BCu;
    SET_GPR_U32(ctx, 31, 0x2371C4u);
    ctx->pc = 0x124E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E50u, 0x2371BCu, 0x2371C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2371C4u;
label_2371c4:
    // 0x2371c4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2371c4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2371c8:
    // 0x2371c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2371c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2371cc:
    // 0x2371cc: 0xc0497a4  jal         func_125E90
label_2371d0:
    if (ctx->pc == 0x2371D0u) {
        ctx->pc = 0x2371D4u;
        goto label_2371d4;
    }
    ctx->pc = 0x2371CCu;
    SET_GPR_U32(ctx, 31, 0x2371D4u);
    ctx->pc = 0x125E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125E90u, 0x2371CCu, 0x2371D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2371D4u;
label_2371d4:
    // 0x2371d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2371d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2371d8:
    // 0x2371d8: 0xc049394  jal         func_124E50
label_2371dc:
    if (ctx->pc == 0x2371DCu) {
        ctx->pc = 0x2371E0u;
        goto label_2371e0;
    }
    ctx->pc = 0x2371D8u;
    SET_GPR_U32(ctx, 31, 0x2371E0u);
    ctx->pc = 0x124E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E50u, 0x2371D8u, 0x2371E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2371E0u;
label_2371e0:
    // 0x2371e0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x2371e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_2371e4:
    // 0x2371e4: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2371e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2371e8:
    // 0x2371e8: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x2371e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2371ec:
    // 0x2371ec: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2371ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2371f0:
    // 0x2371f0: 0xc0bb778  jal         func_2EDDE0
label_2371f4:
    if (ctx->pc == 0x2371F4u) {
        ctx->pc = 0x2371F8u;
        goto label_2371f8;
    }
    ctx->pc = 0x2371F0u;
    SET_GPR_U32(ctx, 31, 0x2371F8u);
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x2371F0u, 0x2371F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2371F8u;
label_2371f8:
    // 0x2371f8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2371f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2371fc:
    // 0x2371fc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2371fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_237200:
    // 0x237200: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x237200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_237204:
    // 0x237204: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x237204u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_237208:
    // 0x237208: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x237208u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23720c:
    // 0x23720c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x23720cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_237210:
    // 0x237210: 0x320f809  jalr        $t9
label_237214:
    if (ctx->pc == 0x237214u) {
        ctx->pc = 0x237218u;
        goto label_237218;
    }
    ctx->pc = 0x237210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x237218u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237210u, 0x237218u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x237218u;
label_237218:
    // 0x237218: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x237218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_23721c:
    // 0x23721c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x23721cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_237220:
    // 0x237220: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x237220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_237224:
    // 0x237224: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x237224u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_237228:
    // 0x237228: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x237228u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_23722c:
    // 0x23722c: 0x320f809  jalr        $t9
label_237230:
    if (ctx->pc == 0x237230u) {
        ctx->pc = 0x237234u;
        goto label_237234;
    }
    ctx->pc = 0x23722Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x237234u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23722Cu, 0x237234u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x237234u;
label_237234:
    // 0x237234: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x237234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_237238:
    // 0x237238: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x237238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_23723c:
    // 0x23723c: 0x10000005  b           . + 4 + (0x5 << 2)
label_237240:
    if (ctx->pc == 0x237240u) {
        ctx->pc = 0x237244u;
        goto label_237244;
    }
    ctx->pc = 0x23723Cu;
    {
        const bool branch_taken_0x23723c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23723c) {
            ctx->pc = 0x237254u;
            goto label_237254;
        }
    }
    ctx->pc = 0x237244u;
label_237244:
    // 0x237244: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x237244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_237248:
    // 0x237248: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x237248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_23724c:
    // 0x23724c: 0xc08db20  jal         func_236C80
label_237250:
    if (ctx->pc == 0x237250u) {
        ctx->pc = 0x237254u;
        goto label_237254;
    }
    ctx->pc = 0x23724Cu;
    SET_GPR_U32(ctx, 31, 0x237254u);
    ctx->pc = 0x236C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C80u, 0x23724Cu, 0x237254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237254u;
label_237254:
    // 0x237254: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x237254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_237258:
    // 0x237258: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x237258u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_23725c:
    // 0x23725c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x23725cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_237260:
    // 0x237260: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x237260u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_237264:
    // 0x237264: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x237264u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_237268:
    // 0x237268: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x237268u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23726c:
    // 0x23726c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23726cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_237270:
    // 0x237270: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x237270u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_237274:
    // 0x237274: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x237274u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_237278:
    // 0x237278: 0x3e00008  jr          $ra
label_23727c:
    if (ctx->pc == 0x23727Cu) {
        ctx->pc = 0x237280u;
        goto label_fallthrough_0x237278;
    }
    ctx->pc = 0x237278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x237278:
    ctx->pc = 0x237280u;
}
