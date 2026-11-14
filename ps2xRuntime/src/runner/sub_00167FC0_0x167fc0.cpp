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

// Function: sub_00167FC0
// Address: 0x167fc0 - 0x1684a0
void sub_00167FC0_0x167fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00167FC0_0x167fc0");
#endif

    switch (ctx->pc) {
        case 0x167fc0u: goto label_167fc0;
        case 0x167fc4u: goto label_167fc4;
        case 0x167fc8u: goto label_167fc8;
        case 0x167fccu: goto label_167fcc;
        case 0x167fd0u: goto label_167fd0;
        case 0x167fd4u: goto label_167fd4;
        case 0x167fd8u: goto label_167fd8;
        case 0x167fdcu: goto label_167fdc;
        case 0x167fe0u: goto label_167fe0;
        case 0x167fe4u: goto label_167fe4;
        case 0x167fe8u: goto label_167fe8;
        case 0x167fecu: goto label_167fec;
        case 0x167ff0u: goto label_167ff0;
        case 0x167ff4u: goto label_167ff4;
        case 0x167ff8u: goto label_167ff8;
        case 0x167ffcu: goto label_167ffc;
        case 0x168000u: goto label_168000;
        case 0x168004u: goto label_168004;
        case 0x168008u: goto label_168008;
        case 0x16800cu: goto label_16800c;
        case 0x168010u: goto label_168010;
        case 0x168014u: goto label_168014;
        case 0x168018u: goto label_168018;
        case 0x16801cu: goto label_16801c;
        case 0x168020u: goto label_168020;
        case 0x168024u: goto label_168024;
        case 0x168028u: goto label_168028;
        case 0x16802cu: goto label_16802c;
        case 0x168030u: goto label_168030;
        case 0x168034u: goto label_168034;
        case 0x168038u: goto label_168038;
        case 0x16803cu: goto label_16803c;
        case 0x168040u: goto label_168040;
        case 0x168044u: goto label_168044;
        case 0x168048u: goto label_168048;
        case 0x16804cu: goto label_16804c;
        case 0x168050u: goto label_168050;
        case 0x168054u: goto label_168054;
        case 0x168058u: goto label_168058;
        case 0x16805cu: goto label_16805c;
        case 0x168060u: goto label_168060;
        case 0x168064u: goto label_168064;
        case 0x168068u: goto label_168068;
        case 0x16806cu: goto label_16806c;
        case 0x168070u: goto label_168070;
        case 0x168074u: goto label_168074;
        case 0x168078u: goto label_168078;
        case 0x16807cu: goto label_16807c;
        case 0x168080u: goto label_168080;
        case 0x168084u: goto label_168084;
        case 0x168088u: goto label_168088;
        case 0x16808cu: goto label_16808c;
        case 0x168090u: goto label_168090;
        case 0x168094u: goto label_168094;
        case 0x168098u: goto label_168098;
        case 0x16809cu: goto label_16809c;
        case 0x1680a0u: goto label_1680a0;
        case 0x1680a4u: goto label_1680a4;
        case 0x1680a8u: goto label_1680a8;
        case 0x1680acu: goto label_1680ac;
        case 0x1680b0u: goto label_1680b0;
        case 0x1680b4u: goto label_1680b4;
        case 0x1680b8u: goto label_1680b8;
        case 0x1680bcu: goto label_1680bc;
        case 0x1680c0u: goto label_1680c0;
        case 0x1680c4u: goto label_1680c4;
        case 0x1680c8u: goto label_1680c8;
        case 0x1680ccu: goto label_1680cc;
        case 0x1680d0u: goto label_1680d0;
        case 0x1680d4u: goto label_1680d4;
        case 0x1680d8u: goto label_1680d8;
        case 0x1680dcu: goto label_1680dc;
        case 0x1680e0u: goto label_1680e0;
        case 0x1680e4u: goto label_1680e4;
        case 0x1680e8u: goto label_1680e8;
        case 0x1680ecu: goto label_1680ec;
        case 0x1680f0u: goto label_1680f0;
        case 0x1680f4u: goto label_1680f4;
        case 0x1680f8u: goto label_1680f8;
        case 0x1680fcu: goto label_1680fc;
        case 0x168100u: goto label_168100;
        case 0x168104u: goto label_168104;
        case 0x168108u: goto label_168108;
        case 0x16810cu: goto label_16810c;
        case 0x168110u: goto label_168110;
        case 0x168114u: goto label_168114;
        case 0x168118u: goto label_168118;
        case 0x16811cu: goto label_16811c;
        case 0x168120u: goto label_168120;
        case 0x168124u: goto label_168124;
        case 0x168128u: goto label_168128;
        case 0x16812cu: goto label_16812c;
        case 0x168130u: goto label_168130;
        case 0x168134u: goto label_168134;
        case 0x168138u: goto label_168138;
        case 0x16813cu: goto label_16813c;
        case 0x168140u: goto label_168140;
        case 0x168144u: goto label_168144;
        case 0x168148u: goto label_168148;
        case 0x16814cu: goto label_16814c;
        case 0x168150u: goto label_168150;
        case 0x168154u: goto label_168154;
        case 0x168158u: goto label_168158;
        case 0x16815cu: goto label_16815c;
        case 0x168160u: goto label_168160;
        case 0x168164u: goto label_168164;
        case 0x168168u: goto label_168168;
        case 0x16816cu: goto label_16816c;
        case 0x168170u: goto label_168170;
        case 0x168174u: goto label_168174;
        case 0x168178u: goto label_168178;
        case 0x16817cu: goto label_16817c;
        case 0x168180u: goto label_168180;
        case 0x168184u: goto label_168184;
        case 0x168188u: goto label_168188;
        case 0x16818cu: goto label_16818c;
        case 0x168190u: goto label_168190;
        case 0x168194u: goto label_168194;
        case 0x168198u: goto label_168198;
        case 0x16819cu: goto label_16819c;
        case 0x1681a0u: goto label_1681a0;
        case 0x1681a4u: goto label_1681a4;
        case 0x1681a8u: goto label_1681a8;
        case 0x1681acu: goto label_1681ac;
        case 0x1681b0u: goto label_1681b0;
        case 0x1681b4u: goto label_1681b4;
        case 0x1681b8u: goto label_1681b8;
        case 0x1681bcu: goto label_1681bc;
        case 0x1681c0u: goto label_1681c0;
        case 0x1681c4u: goto label_1681c4;
        case 0x1681c8u: goto label_1681c8;
        case 0x1681ccu: goto label_1681cc;
        case 0x1681d0u: goto label_1681d0;
        case 0x1681d4u: goto label_1681d4;
        case 0x1681d8u: goto label_1681d8;
        case 0x1681dcu: goto label_1681dc;
        case 0x1681e0u: goto label_1681e0;
        case 0x1681e4u: goto label_1681e4;
        case 0x1681e8u: goto label_1681e8;
        case 0x1681ecu: goto label_1681ec;
        case 0x1681f0u: goto label_1681f0;
        case 0x1681f4u: goto label_1681f4;
        case 0x1681f8u: goto label_1681f8;
        case 0x1681fcu: goto label_1681fc;
        case 0x168200u: goto label_168200;
        case 0x168204u: goto label_168204;
        case 0x168208u: goto label_168208;
        case 0x16820cu: goto label_16820c;
        case 0x168210u: goto label_168210;
        case 0x168214u: goto label_168214;
        case 0x168218u: goto label_168218;
        case 0x16821cu: goto label_16821c;
        case 0x168220u: goto label_168220;
        case 0x168224u: goto label_168224;
        case 0x168228u: goto label_168228;
        case 0x16822cu: goto label_16822c;
        case 0x168230u: goto label_168230;
        case 0x168234u: goto label_168234;
        case 0x168238u: goto label_168238;
        case 0x16823cu: goto label_16823c;
        case 0x168240u: goto label_168240;
        case 0x168244u: goto label_168244;
        case 0x168248u: goto label_168248;
        case 0x16824cu: goto label_16824c;
        case 0x168250u: goto label_168250;
        case 0x168254u: goto label_168254;
        case 0x168258u: goto label_168258;
        case 0x16825cu: goto label_16825c;
        case 0x168260u: goto label_168260;
        case 0x168264u: goto label_168264;
        case 0x168268u: goto label_168268;
        case 0x16826cu: goto label_16826c;
        case 0x168270u: goto label_168270;
        case 0x168274u: goto label_168274;
        case 0x168278u: goto label_168278;
        case 0x16827cu: goto label_16827c;
        case 0x168280u: goto label_168280;
        case 0x168284u: goto label_168284;
        case 0x168288u: goto label_168288;
        case 0x16828cu: goto label_16828c;
        case 0x168290u: goto label_168290;
        case 0x168294u: goto label_168294;
        case 0x168298u: goto label_168298;
        case 0x16829cu: goto label_16829c;
        case 0x1682a0u: goto label_1682a0;
        case 0x1682a4u: goto label_1682a4;
        case 0x1682a8u: goto label_1682a8;
        case 0x1682acu: goto label_1682ac;
        case 0x1682b0u: goto label_1682b0;
        case 0x1682b4u: goto label_1682b4;
        case 0x1682b8u: goto label_1682b8;
        case 0x1682bcu: goto label_1682bc;
        case 0x1682c0u: goto label_1682c0;
        case 0x1682c4u: goto label_1682c4;
        case 0x1682c8u: goto label_1682c8;
        case 0x1682ccu: goto label_1682cc;
        case 0x1682d0u: goto label_1682d0;
        case 0x1682d4u: goto label_1682d4;
        case 0x1682d8u: goto label_1682d8;
        case 0x1682dcu: goto label_1682dc;
        case 0x1682e0u: goto label_1682e0;
        case 0x1682e4u: goto label_1682e4;
        case 0x1682e8u: goto label_1682e8;
        case 0x1682ecu: goto label_1682ec;
        case 0x1682f0u: goto label_1682f0;
        case 0x1682f4u: goto label_1682f4;
        case 0x1682f8u: goto label_1682f8;
        case 0x1682fcu: goto label_1682fc;
        case 0x168300u: goto label_168300;
        case 0x168304u: goto label_168304;
        case 0x168308u: goto label_168308;
        case 0x16830cu: goto label_16830c;
        case 0x168310u: goto label_168310;
        case 0x168314u: goto label_168314;
        case 0x168318u: goto label_168318;
        case 0x16831cu: goto label_16831c;
        case 0x168320u: goto label_168320;
        case 0x168324u: goto label_168324;
        case 0x168328u: goto label_168328;
        case 0x16832cu: goto label_16832c;
        case 0x168330u: goto label_168330;
        case 0x168334u: goto label_168334;
        case 0x168338u: goto label_168338;
        case 0x16833cu: goto label_16833c;
        case 0x168340u: goto label_168340;
        case 0x168344u: goto label_168344;
        case 0x168348u: goto label_168348;
        case 0x16834cu: goto label_16834c;
        case 0x168350u: goto label_168350;
        case 0x168354u: goto label_168354;
        case 0x168358u: goto label_168358;
        case 0x16835cu: goto label_16835c;
        case 0x168360u: goto label_168360;
        case 0x168364u: goto label_168364;
        case 0x168368u: goto label_168368;
        case 0x16836cu: goto label_16836c;
        case 0x168370u: goto label_168370;
        case 0x168374u: goto label_168374;
        case 0x168378u: goto label_168378;
        case 0x16837cu: goto label_16837c;
        case 0x168380u: goto label_168380;
        case 0x168384u: goto label_168384;
        case 0x168388u: goto label_168388;
        case 0x16838cu: goto label_16838c;
        case 0x168390u: goto label_168390;
        case 0x168394u: goto label_168394;
        case 0x168398u: goto label_168398;
        case 0x16839cu: goto label_16839c;
        case 0x1683a0u: goto label_1683a0;
        case 0x1683a4u: goto label_1683a4;
        case 0x1683a8u: goto label_1683a8;
        case 0x1683acu: goto label_1683ac;
        case 0x1683b0u: goto label_1683b0;
        case 0x1683b4u: goto label_1683b4;
        case 0x1683b8u: goto label_1683b8;
        case 0x1683bcu: goto label_1683bc;
        case 0x1683c0u: goto label_1683c0;
        case 0x1683c4u: goto label_1683c4;
        case 0x1683c8u: goto label_1683c8;
        case 0x1683ccu: goto label_1683cc;
        case 0x1683d0u: goto label_1683d0;
        case 0x1683d4u: goto label_1683d4;
        case 0x1683d8u: goto label_1683d8;
        case 0x1683dcu: goto label_1683dc;
        case 0x1683e0u: goto label_1683e0;
        case 0x1683e4u: goto label_1683e4;
        case 0x1683e8u: goto label_1683e8;
        case 0x1683ecu: goto label_1683ec;
        case 0x1683f0u: goto label_1683f0;
        case 0x1683f4u: goto label_1683f4;
        case 0x1683f8u: goto label_1683f8;
        case 0x1683fcu: goto label_1683fc;
        case 0x168400u: goto label_168400;
        case 0x168404u: goto label_168404;
        case 0x168408u: goto label_168408;
        case 0x16840cu: goto label_16840c;
        case 0x168410u: goto label_168410;
        case 0x168414u: goto label_168414;
        case 0x168418u: goto label_168418;
        case 0x16841cu: goto label_16841c;
        case 0x168420u: goto label_168420;
        case 0x168424u: goto label_168424;
        case 0x168428u: goto label_168428;
        case 0x16842cu: goto label_16842c;
        case 0x168430u: goto label_168430;
        case 0x168434u: goto label_168434;
        case 0x168438u: goto label_168438;
        case 0x16843cu: goto label_16843c;
        case 0x168440u: goto label_168440;
        case 0x168444u: goto label_168444;
        case 0x168448u: goto label_168448;
        case 0x16844cu: goto label_16844c;
        case 0x168450u: goto label_168450;
        case 0x168454u: goto label_168454;
        case 0x168458u: goto label_168458;
        case 0x16845cu: goto label_16845c;
        case 0x168460u: goto label_168460;
        case 0x168464u: goto label_168464;
        case 0x168468u: goto label_168468;
        case 0x16846cu: goto label_16846c;
        case 0x168470u: goto label_168470;
        case 0x168474u: goto label_168474;
        case 0x168478u: goto label_168478;
        case 0x16847cu: goto label_16847c;
        case 0x168480u: goto label_168480;
        case 0x168484u: goto label_168484;
        case 0x168488u: goto label_168488;
        case 0x16848cu: goto label_16848c;
        case 0x168490u: goto label_168490;
        case 0x168494u: goto label_168494;
        case 0x168498u: goto label_168498;
        case 0x16849cu: goto label_16849c;
        default: break;
    }

    ctx->pc = 0x167fc0u;

label_167fc0:
    // 0x167fc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x167fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_167fc4:
    // 0x167fc4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x167fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_167fc8:
    // 0x167fc8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x167fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
label_167fcc:
    // 0x167fcc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x167fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_167fd0:
    // 0x167fd0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x167fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_167fd4:
    // 0x167fd4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x167fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_167fd8:
    // 0x167fd8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x167fd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_167fdc:
    // 0x167fdc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x167fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_167fe0:
    // 0x167fe0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x167fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_167fe4:
    // 0x167fe4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x167fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_167fe8:
    // 0x167fe8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x167fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_167fec:
    // 0x167fec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x167fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_167ff0:
    // 0x167ff0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x167ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_167ff4:
    // 0x167ff4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x167ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_167ff8:
    // 0x167ff8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x167ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_167ffc:
    // 0x167ffc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x167ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_168000:
    // 0x168000: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x168000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_168004:
    // 0x168004: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x168004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_168008:
    // 0x168008: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x168008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_16800c:
    // 0x16800c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16800cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_168010:
    // 0x168010: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x168010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_168014:
    // 0x168014: 0x3e00008  jr          $ra
label_168018:
    if (ctx->pc == 0x168018u) {
        ctx->pc = 0x16801Cu;
        goto label_16801c;
    }
    ctx->pc = 0x168014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16801Cu;
label_16801c:
    // 0x16801c: 0x0  nop
    ctx->pc = 0x16801cu;
    // NOP
label_168020:
    // 0x168020: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x168020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_168024:
    // 0x168024: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x168024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_168028:
    // 0x168028: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x168028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_16802c:
    // 0x16802c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16802cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_168030:
    // 0x168030: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x168030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
label_168034:
    // 0x168034: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x168034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_168038:
    // 0x168038: 0xc055b3c  jal         func_156CF0
label_16803c:
    if (ctx->pc == 0x16803Cu) {
        ctx->pc = 0x168040u;
        goto label_168040;
    }
    ctx->pc = 0x168038u;
    SET_GPR_U32(ctx, 31, 0x168040u);
    ctx->pc = 0x156CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156CF0u, 0x168038u, 0x168040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168040u;
label_168040:
    // 0x168040: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x168040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_168044:
    // 0x168044: 0x8c630060  lw          $v1, 0x60($v1)
    ctx->pc = 0x168044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_168048:
    // 0x168048: 0x1060005b  beqz        $v1, . + 4 + (0x5B << 2)
label_16804c:
    if (ctx->pc == 0x16804Cu) {
        ctx->pc = 0x168050u;
        goto label_168050;
    }
    ctx->pc = 0x168048u;
    {
        const bool branch_taken_0x168048 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x168048) {
            ctx->pc = 0x1681B8u;
            goto label_1681b8;
        }
    }
    ctx->pc = 0x168050u;
label_168050:
    // 0x168050: 0xc05548c  jal         func_155230
label_168054:
    if (ctx->pc == 0x168054u) {
        ctx->pc = 0x168058u;
        goto label_168058;
    }
    ctx->pc = 0x168050u;
    SET_GPR_U32(ctx, 31, 0x168058u);
    ctx->pc = 0x155230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155230u, 0x168050u, 0x168058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168058u;
label_168058:
    // 0x168058: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x168058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16805c:
    // 0x16805c: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x16805cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_168060:
    // 0x168060: 0xc0553d4  jal         func_154F50
label_168064:
    if (ctx->pc == 0x168064u) {
        ctx->pc = 0x168068u;
        goto label_168068;
    }
    ctx->pc = 0x168060u;
    SET_GPR_U32(ctx, 31, 0x168068u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x168060u, 0x168068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168068u;
label_168068:
    // 0x168068: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x168068u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16806c:
    // 0x16806c: 0x10110052  beq         $zero, $s1, . + 4 + (0x52 << 2)
label_168070:
    if (ctx->pc == 0x168070u) {
        ctx->pc = 0x168074u;
        goto label_168074;
    }
    ctx->pc = 0x16806Cu;
    {
        const bool branch_taken_0x16806c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 17));
        if (branch_taken_0x16806c) {
            ctx->pc = 0x1681B8u;
            goto label_1681b8;
        }
    }
    ctx->pc = 0x168074u;
label_168074:
    // 0x168074: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x168074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_168078:
    // 0x168078: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x168078u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16807c:
    // 0x16807c: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x16807cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_168080:
    // 0x168080: 0x320f809  jalr        $t9
label_168084:
    if (ctx->pc == 0x168084u) {
        ctx->pc = 0x168088u;
        goto label_168088;
    }
    ctx->pc = 0x168080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x168088u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168080u, 0x168088u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x168088u;
label_168088:
    // 0x168088: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x168088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_16808c:
    // 0x16808c: 0x1460004a  bnez        $v1, . + 4 + (0x4A << 2)
label_168090:
    if (ctx->pc == 0x168090u) {
        ctx->pc = 0x168094u;
        goto label_168094;
    }
    ctx->pc = 0x16808Cu;
    {
        const bool branch_taken_0x16808c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16808c) {
            ctx->pc = 0x1681B8u;
            goto label_1681b8;
        }
    }
    ctx->pc = 0x168094u;
label_168094:
    // 0x168094: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x168094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_168098:
    // 0x168098: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x168098u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_16809c:
    // 0x16809c: 0x24a53fe0  addiu       $a1, $a1, 0x3FE0
    ctx->pc = 0x16809cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16352));
label_1680a0:
    // 0x1680a0: 0xc08e57c  jal         func_2395F0
label_1680a4:
    if (ctx->pc == 0x1680A4u) {
        ctx->pc = 0x1680A8u;
        goto label_1680a8;
    }
    ctx->pc = 0x1680A0u;
    SET_GPR_U32(ctx, 31, 0x1680A8u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x1680A0u, 0x1680A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1680A8u;
label_1680a8:
    // 0x1680a8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1680a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1680ac:
    // 0x1680ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1680acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1680b0:
    // 0x1680b0: 0xc0406d0  jal         func_101B40
label_1680b4:
    if (ctx->pc == 0x1680B4u) {
        ctx->pc = 0x1680B8u;
        goto label_1680b8;
    }
    ctx->pc = 0x1680B0u;
    SET_GPR_U32(ctx, 31, 0x1680B8u);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x1680B0u, 0x1680B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1680B8u;
label_1680b8:
    // 0x1680b8: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x1680b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_1680bc:
    // 0x1680bc: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1680bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1680c0:
    // 0x1680c0: 0x24a53ff0  addiu       $a1, $a1, 0x3FF0
    ctx->pc = 0x1680c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16368));
label_1680c4:
    // 0x1680c4: 0xc08e57c  jal         func_2395F0
label_1680c8:
    if (ctx->pc == 0x1680C8u) {
        ctx->pc = 0x1680CCu;
        goto label_1680cc;
    }
    ctx->pc = 0x1680C4u;
    SET_GPR_U32(ctx, 31, 0x1680CCu);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x1680C4u, 0x1680CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1680CCu;
label_1680cc:
    // 0x1680cc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1680ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1680d0:
    // 0x1680d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1680d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1680d4:
    // 0x1680d4: 0xc0406d0  jal         func_101B40
label_1680d8:
    if (ctx->pc == 0x1680D8u) {
        ctx->pc = 0x1680DCu;
        goto label_1680dc;
    }
    ctx->pc = 0x1680D4u;
    SET_GPR_U32(ctx, 31, 0x1680DCu);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x1680D4u, 0x1680DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1680DCu;
label_1680dc:
    // 0x1680dc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1680dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1680e0:
    // 0x1680e0: 0x34500303  ori         $s0, $v0, 0x303
    ctx->pc = 0x1680e0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)771);
label_1680e4:
    // 0x1680e4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1680e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1680e8:
    // 0x1680e8: 0x8c430060  lw          $v1, 0x60($v0)
    ctx->pc = 0x1680e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1680ec:
    // 0x1680ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1680ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1680f0:
    // 0x1680f0: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
label_1680f4:
    if (ctx->pc == 0x1680F4u) {
        ctx->pc = 0x1680F8u;
        goto label_1680f8;
    }
    ctx->pc = 0x1680F0u;
    {
        const bool branch_taken_0x1680f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1680f0) {
            ctx->pc = 0x168140u;
            goto label_168140;
        }
    }
    ctx->pc = 0x1680F8u;
label_1680f8:
    // 0x1680f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1680f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1680fc:
    // 0x1680fc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_168100:
    if (ctx->pc == 0x168100u) {
        ctx->pc = 0x168104u;
        goto label_168104;
    }
    ctx->pc = 0x1680FCu;
    {
        const bool branch_taken_0x1680fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1680fc) {
            ctx->pc = 0x16810Cu;
            goto label_16810c;
        }
    }
    ctx->pc = 0x168104u;
label_168104:
    // 0x168104: 0x10000019  b           . + 4 + (0x19 << 2)
label_168108:
    if (ctx->pc == 0x168108u) {
        ctx->pc = 0x16810Cu;
        goto label_16810c;
    }
    ctx->pc = 0x168104u;
    {
        const bool branch_taken_0x168104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168104) {
            ctx->pc = 0x16816Cu;
            goto label_16816c;
        }
    }
    ctx->pc = 0x16810Cu;
label_16810c:
    // 0x16810c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x16810cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_168110:
    // 0x168110: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x168110u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_168114:
    // 0x168114: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x168114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_168118:
    // 0x168118: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x168118u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_16811c:
    // 0x16811c: 0x24a53ff0  addiu       $a1, $a1, 0x3FF0
    ctx->pc = 0x16811cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16368));
label_168120:
    // 0x168120: 0xc08e57c  jal         func_2395F0
label_168124:
    if (ctx->pc == 0x168124u) {
        ctx->pc = 0x168128u;
        goto label_168128;
    }
    ctx->pc = 0x168120u;
    SET_GPR_U32(ctx, 31, 0x168128u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x168120u, 0x168128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168128u;
label_168128:
    // 0x168128: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x168128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_16812c:
    // 0x16812c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16812cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_168130:
    // 0x168130: 0xc0477e8  jal         func_11DFA0
label_168134:
    if (ctx->pc == 0x168134u) {
        ctx->pc = 0x168138u;
        goto label_168138;
    }
    ctx->pc = 0x168130u;
    SET_GPR_U32(ctx, 31, 0x168138u);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x168130u, 0x168138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168138u;
label_168138:
    // 0x168138: 0x1000000c  b           . + 4 + (0xC << 2)
label_16813c:
    if (ctx->pc == 0x16813Cu) {
        ctx->pc = 0x168140u;
        goto label_168140;
    }
    ctx->pc = 0x168138u;
    {
        const bool branch_taken_0x168138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168138) {
            ctx->pc = 0x16816Cu;
            goto label_16816c;
        }
    }
    ctx->pc = 0x168140u;
label_168140:
    // 0x168140: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x168140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_168144:
    // 0x168144: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x168144u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_168148:
    // 0x168148: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x168148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_16814c:
    // 0x16814c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x16814cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_168150:
    // 0x168150: 0x24a54000  addiu       $a1, $a1, 0x4000
    ctx->pc = 0x168150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16384));
label_168154:
    // 0x168154: 0xc08e57c  jal         func_2395F0
label_168158:
    if (ctx->pc == 0x168158u) {
        ctx->pc = 0x16815Cu;
        goto label_16815c;
    }
    ctx->pc = 0x168154u;
    SET_GPR_U32(ctx, 31, 0x16815Cu);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x168154u, 0x16815Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16815Cu;
label_16815c:
    // 0x16815c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x16815cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_168160:
    // 0x168160: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x168160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_168164:
    // 0x168164: 0xc0477e8  jal         func_11DFA0
label_168168:
    if (ctx->pc == 0x168168u) {
        ctx->pc = 0x16816Cu;
        goto label_16816c;
    }
    ctx->pc = 0x168164u;
    SET_GPR_U32(ctx, 31, 0x16816Cu);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x168164u, 0x16816Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16816Cu;
label_16816c:
    // 0x16816c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16816cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_168170:
    // 0x168170: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x168170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_168174:
    // 0x168174: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x168174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_168178:
    // 0x168178: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x168178u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16817c:
    // 0x16817c: 0x3c080017  lui         $t0, 0x17
    ctx->pc = 0x16817cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)23 << 16));
label_168180:
    // 0x168180: 0x25088630  addiu       $t0, $t0, -0x79D0
    ctx->pc = 0x168180u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294936112));
label_168184:
    // 0x168184: 0x8fa90050  lw          $t1, 0x50($sp)
    ctx->pc = 0x168184u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_168188:
    // 0x168188: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x168188u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16818c:
    // 0x16818c: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x16818cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_168190:
    // 0x168190: 0x320f809  jalr        $t9
label_168194:
    if (ctx->pc == 0x168194u) {
        ctx->pc = 0x168198u;
        goto label_168198;
    }
    ctx->pc = 0x168190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x168198u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168190u, 0x168198u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x168198u;
label_168198:
    // 0x168198: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x168198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_16819c:
    // 0x16819c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x16819cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1681a0:
    // 0x1681a0: 0xc0406a0  jal         func_101A80
label_1681a4:
    if (ctx->pc == 0x1681A4u) {
        ctx->pc = 0x1681A8u;
        goto label_1681a8;
    }
    ctx->pc = 0x1681A0u;
    SET_GPR_U32(ctx, 31, 0x1681A8u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x1681A0u, 0x1681A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1681A8u;
label_1681a8:
    // 0x1681a8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1681a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1681ac:
    // 0x1681ac: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1681acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1681b0:
    // 0x1681b0: 0xc0406a0  jal         func_101A80
label_1681b4:
    if (ctx->pc == 0x1681B4u) {
        ctx->pc = 0x1681B8u;
        goto label_1681b8;
    }
    ctx->pc = 0x1681B0u;
    SET_GPR_U32(ctx, 31, 0x1681B8u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x1681B0u, 0x1681B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1681B8u;
label_1681b8:
    // 0x1681b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1681b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1681bc:
    // 0x1681bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1681bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1681c0:
    // 0x1681c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1681c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1681c4:
    // 0x1681c4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1681c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1681c8:
    // 0x1681c8: 0x3e00008  jr          $ra
label_1681cc:
    if (ctx->pc == 0x1681CCu) {
        ctx->pc = 0x1681D0u;
        goto label_1681d0;
    }
    ctx->pc = 0x1681C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1681C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1681D0u;
label_1681d0:
    // 0x1681d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1681d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1681d4:
    // 0x1681d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1681d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1681d8:
    // 0x1681d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1681d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1681dc:
    // 0x1681dc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1681dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1681e0:
    // 0x1681e0: 0xc055a84  jal         func_156A10
label_1681e4:
    if (ctx->pc == 0x1681E4u) {
        ctx->pc = 0x1681E8u;
        goto label_1681e8;
    }
    ctx->pc = 0x1681E0u;
    SET_GPR_U32(ctx, 31, 0x1681E8u);
    ctx->pc = 0x156A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156A10u, 0x1681E0u, 0x1681E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1681E8u;
label_1681e8:
    // 0x1681e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1681e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1681ec:
    // 0x1681ec: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1681ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1681f0:
    // 0x1681f0: 0x3e00008  jr          $ra
label_1681f4:
    if (ctx->pc == 0x1681F4u) {
        ctx->pc = 0x1681F8u;
        goto label_1681f8;
    }
    ctx->pc = 0x1681F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1681F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1681F8u;
label_1681f8:
    // 0x1681f8: 0x0  nop
    ctx->pc = 0x1681f8u;
    // NOP
label_1681fc:
    // 0x1681fc: 0x0  nop
    ctx->pc = 0x1681fcu;
    // NOP
label_168200:
    // 0x168200: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x168200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_168204:
    // 0x168204: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x168204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_168208:
    // 0x168208: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x168208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_16820c:
    // 0x16820c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16820cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_168210:
    // 0x168210: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x168210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_168214:
    // 0x168214: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x168214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
label_168218:
    // 0x168218: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x168218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
label_16821c:
    // 0x16821c: 0xa3a60080  sb          $a2, 0x80($sp)
    ctx->pc = 0x16821cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 128), (uint8_t)GPR_U32(ctx, 6));
label_168220:
    // 0x168220: 0x93a30080  lbu         $v1, 0x80($sp)
    ctx->pc = 0x168220u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 128)));
label_168224:
    // 0x168224: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x168224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_168228:
    // 0x168228: 0x10600095  beqz        $v1, . + 4 + (0x95 << 2)
label_16822c:
    if (ctx->pc == 0x16822Cu) {
        ctx->pc = 0x168230u;
        goto label_168230;
    }
    ctx->pc = 0x168228u;
    {
        const bool branch_taken_0x168228 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x168228) {
            ctx->pc = 0x168480u;
            goto label_168480;
        }
    }
    ctx->pc = 0x168230u;
label_168230:
    // 0x168230: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x168230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_168234:
    // 0x168234: 0x24030073  addiu       $v1, $zero, 0x73
    ctx->pc = 0x168234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_168238:
    // 0x168238: 0x10830048  beq         $a0, $v1, . + 4 + (0x48 << 2)
label_16823c:
    if (ctx->pc == 0x16823Cu) {
        ctx->pc = 0x168240u;
        goto label_168240;
    }
    ctx->pc = 0x168238u;
    {
        const bool branch_taken_0x168238 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x168238) {
            ctx->pc = 0x16835Cu;
            goto label_16835c;
        }
    }
    ctx->pc = 0x168240u;
label_168240:
    // 0x168240: 0x2403006e  addiu       $v1, $zero, 0x6E
    ctx->pc = 0x168240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
label_168244:
    // 0x168244: 0x1083002b  beq         $a0, $v1, . + 4 + (0x2B << 2)
label_168248:
    if (ctx->pc == 0x168248u) {
        ctx->pc = 0x16824Cu;
        goto label_16824c;
    }
    ctx->pc = 0x168244u;
    {
        const bool branch_taken_0x168244 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x168244) {
            ctx->pc = 0x1682F4u;
            goto label_1682f4;
        }
    }
    ctx->pc = 0x16824Cu;
label_16824c:
    // 0x16824c: 0x2403006a  addiu       $v1, $zero, 0x6A
    ctx->pc = 0x16824cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
label_168250:
    // 0x168250: 0x10830028  beq         $a0, $v1, . + 4 + (0x28 << 2)
label_168254:
    if (ctx->pc == 0x168254u) {
        ctx->pc = 0x168258u;
        goto label_168258;
    }
    ctx->pc = 0x168250u;
    {
        const bool branch_taken_0x168250 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x168250) {
            ctx->pc = 0x1682F4u;
            goto label_1682f4;
        }
    }
    ctx->pc = 0x168258u;
label_168258:
    // 0x168258: 0x2403006d  addiu       $v1, $zero, 0x6D
    ctx->pc = 0x168258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
label_16825c:
    // 0x16825c: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
label_168260:
    if (ctx->pc == 0x168260u) {
        ctx->pc = 0x168264u;
        goto label_168264;
    }
    ctx->pc = 0x16825Cu;
    {
        const bool branch_taken_0x16825c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16825c) {
            ctx->pc = 0x168278u;
            goto label_168278;
        }
    }
    ctx->pc = 0x168264u;
label_168264:
    // 0x168264: 0x24030069  addiu       $v1, $zero, 0x69
    ctx->pc = 0x168264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
label_168268:
    // 0x168268: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_16826c:
    if (ctx->pc == 0x16826Cu) {
        ctx->pc = 0x168270u;
        goto label_168270;
    }
    ctx->pc = 0x168268u;
    {
        const bool branch_taken_0x168268 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x168268) {
            ctx->pc = 0x168278u;
            goto label_168278;
        }
    }
    ctx->pc = 0x168270u;
label_168270:
    // 0x168270: 0x10000083  b           . + 4 + (0x83 << 2)
label_168274:
    if (ctx->pc == 0x168274u) {
        ctx->pc = 0x168278u;
        goto label_168278;
    }
    ctx->pc = 0x168270u;
    {
        const bool branch_taken_0x168270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168270) {
            ctx->pc = 0x168480u;
            goto label_168480;
        }
    }
    ctx->pc = 0x168278u;
label_168278:
    // 0x168278: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x168278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_16827c:
    // 0x16827c: 0x8c630050  lw          $v1, 0x50($v1)
    ctx->pc = 0x16827cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
label_168280:
    // 0x168280: 0x1860007f  blez        $v1, . + 4 + (0x7F << 2)
label_168284:
    if (ctx->pc == 0x168284u) {
        ctx->pc = 0x168288u;
        goto label_168288;
    }
    ctx->pc = 0x168280u;
    {
        const bool branch_taken_0x168280 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x168280) {
            ctx->pc = 0x168480u;
            goto label_168480;
        }
    }
    ctx->pc = 0x168288u;
label_168288:
    // 0x168288: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x168288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_16828c:
    // 0x16828c: 0x90630064  lbu         $v1, 0x64($v1)
    ctx->pc = 0x16828cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 100)));
label_168290:
    // 0x168290: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x168290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_168294:
    // 0x168294: 0x1460007a  bnez        $v1, . + 4 + (0x7A << 2)
label_168298:
    if (ctx->pc == 0x168298u) {
        ctx->pc = 0x16829Cu;
        goto label_16829c;
    }
    ctx->pc = 0x168294u;
    {
        const bool branch_taken_0x168294 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x168294) {
            ctx->pc = 0x168480u;
            goto label_168480;
        }
    }
    ctx->pc = 0x16829Cu;
label_16829c:
    // 0x16829c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16829cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1682a0:
    // 0x1682a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1682a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1682a4:
    // 0x1682a4: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1682a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_1682a8:
    // 0x1682a8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1682a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1682ac:
    // 0x1682ac: 0x24a54030  addiu       $a1, $a1, 0x4030
    ctx->pc = 0x1682acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16432));
label_1682b0:
    // 0x1682b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1682b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1682b4:
    // 0x1682b4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1682b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1682b8:
    // 0x1682b8: 0xc08f558  jal         func_23D560
label_1682bc:
    if (ctx->pc == 0x1682BCu) {
        ctx->pc = 0x1682C0u;
        goto label_1682c0;
    }
    ctx->pc = 0x1682B8u;
    SET_GPR_U32(ctx, 31, 0x1682C0u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x1682B8u, 0x1682C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1682C0u;
label_1682c0:
    // 0x1682c0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1682c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1682c4:
    // 0x1682c4: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x1682c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_1682c8:
    // 0x1682c8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1682c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1682cc:
    // 0x1682cc: 0xac430054  sw          $v1, 0x54($v0)
    ctx->pc = 0x1682ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 3));
label_1682d0:
    // 0x1682d0: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1682d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1682d4:
    // 0x1682d4: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x1682d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
label_1682d8:
    // 0x1682d8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1682d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1682dc:
    // 0x1682dc: 0xac620050  sw          $v0, 0x50($v1)
    ctx->pc = 0x1682dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 2));
label_1682e0:
    // 0x1682e0: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1682e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1682e4:
    // 0x1682e4: 0xc05a128  jal         func_1684A0
label_1682e8:
    if (ctx->pc == 0x1682E8u) {
        ctx->pc = 0x1682ECu;
        goto label_1682ec;
    }
    ctx->pc = 0x1682E4u;
    SET_GPR_U32(ctx, 31, 0x1682ECu);
    ctx->pc = 0x1684A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1684A0u, 0x1682E4u, 0x1682ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1682ECu;
label_1682ec:
    // 0x1682ec: 0x10000064  b           . + 4 + (0x64 << 2)
label_1682f0:
    if (ctx->pc == 0x1682F0u) {
        ctx->pc = 0x1682F4u;
        goto label_1682f4;
    }
    ctx->pc = 0x1682ECu;
    {
        const bool branch_taken_0x1682ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1682ec) {
            ctx->pc = 0x168480u;
            goto label_168480;
        }
    }
    ctx->pc = 0x1682F4u;
label_1682f4:
    // 0x1682f4: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1682f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1682f8:
    // 0x1682f8: 0x8c630050  lw          $v1, 0x50($v1)
    ctx->pc = 0x1682f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
label_1682fc:
    // 0x1682fc: 0x1c600060  bgtz        $v1, . + 4 + (0x60 << 2)
label_168300:
    if (ctx->pc == 0x168300u) {
        ctx->pc = 0x168304u;
        goto label_168304;
    }
    ctx->pc = 0x1682FCu;
    {
        const bool branch_taken_0x1682fc = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1682fc) {
            ctx->pc = 0x168480u;
            goto label_168480;
        }
    }
    ctx->pc = 0x168304u;
label_168304:
    // 0x168304: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x168304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_168308:
    // 0x168308: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x168308u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16830c:
    // 0x16830c: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x16830cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_168310:
    // 0x168310: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x168310u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_168314:
    // 0x168314: 0x24a54030  addiu       $a1, $a1, 0x4030
    ctx->pc = 0x168314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16432));
label_168318:
    // 0x168318: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x168318u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16831c:
    // 0x16831c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x16831cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_168320:
    // 0x168320: 0xc08f558  jal         func_23D560
label_168324:
    if (ctx->pc == 0x168324u) {
        ctx->pc = 0x168328u;
        goto label_168328;
    }
    ctx->pc = 0x168320u;
    SET_GPR_U32(ctx, 31, 0x168328u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x168320u, 0x168328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168328u;
label_168328:
    // 0x168328: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x168328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_16832c:
    // 0x16832c: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x16832cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_168330:
    // 0x168330: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x168330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_168334:
    // 0x168334: 0xac430054  sw          $v1, 0x54($v0)
    ctx->pc = 0x168334u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 3));
label_168338:
    // 0x168338: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x168338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_16833c:
    // 0x16833c: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x16833cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
label_168340:
    // 0x168340: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x168340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_168344:
    // 0x168344: 0xac620050  sw          $v0, 0x50($v1)
    ctx->pc = 0x168344u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 2));
label_168348:
    // 0x168348: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x168348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_16834c:
    // 0x16834c: 0xc05a128  jal         func_1684A0
label_168350:
    if (ctx->pc == 0x168350u) {
        ctx->pc = 0x168354u;
        goto label_168354;
    }
    ctx->pc = 0x16834Cu;
    SET_GPR_U32(ctx, 31, 0x168354u);
    ctx->pc = 0x1684A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1684A0u, 0x16834Cu, 0x168354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168354u;
label_168354:
    // 0x168354: 0x1000004a  b           . + 4 + (0x4A << 2)
label_168358:
    if (ctx->pc == 0x168358u) {
        ctx->pc = 0x16835Cu;
        goto label_16835c;
    }
    ctx->pc = 0x168354u;
    {
        const bool branch_taken_0x168354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168354) {
            ctx->pc = 0x168480u;
            goto label_168480;
        }
    }
    ctx->pc = 0x16835Cu;
label_16835c:
    // 0x16835c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16835cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_168360:
    // 0x168360: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x168360u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_168364:
    // 0x168364: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x168364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_168368:
    // 0x168368: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x168368u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_16836c:
    // 0x16836c: 0x24a54050  addiu       $a1, $a1, 0x4050
    ctx->pc = 0x16836cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16464));
label_168370:
    // 0x168370: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x168370u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_168374:
    // 0x168374: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x168374u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_168378:
    // 0x168378: 0xc08f558  jal         func_23D560
label_16837c:
    if (ctx->pc == 0x16837Cu) {
        ctx->pc = 0x168380u;
        goto label_168380;
    }
    ctx->pc = 0x168378u;
    SET_GPR_U32(ctx, 31, 0x168380u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x168378u, 0x168380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168380u;
label_168380:
    // 0x168380: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x168380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_168384:
    // 0x168384: 0x8c640050  lw          $a0, 0x50($v1)
    ctx->pc = 0x168384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
label_168388:
    // 0x168388: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x168388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16838c:
    // 0x16838c: 0x10830039  beq         $a0, $v1, . + 4 + (0x39 << 2)
label_168390:
    if (ctx->pc == 0x168390u) {
        ctx->pc = 0x168394u;
        goto label_168394;
    }
    ctx->pc = 0x16838Cu;
    {
        const bool branch_taken_0x16838c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16838c) {
            ctx->pc = 0x168474u;
            goto label_168474;
        }
    }
    ctx->pc = 0x168394u;
label_168394:
    // 0x168394: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_168398:
    if (ctx->pc == 0x168398u) {
        ctx->pc = 0x16839Cu;
        goto label_16839c;
    }
    ctx->pc = 0x168394u;
    {
        const bool branch_taken_0x168394 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x168394) {
            ctx->pc = 0x1683A4u;
            goto label_1683a4;
        }
    }
    ctx->pc = 0x16839Cu;
label_16839c:
    // 0x16839c: 0x10000038  b           . + 4 + (0x38 << 2)
label_1683a0:
    if (ctx->pc == 0x1683A0u) {
        ctx->pc = 0x1683A4u;
        goto label_1683a4;
    }
    ctx->pc = 0x16839Cu;
    {
        const bool branch_taken_0x16839c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16839c) {
            ctx->pc = 0x168480u;
            goto label_168480;
        }
    }
    ctx->pc = 0x1683A4u;
label_1683a4:
    // 0x1683a4: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x1683a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_1683a8:
    // 0x1683a8: 0xc047eb8  jal         func_11FAE0
label_1683ac:
    if (ctx->pc == 0x1683ACu) {
        ctx->pc = 0x1683B0u;
        goto label_1683b0;
    }
    ctx->pc = 0x1683A8u;
    SET_GPR_U32(ctx, 31, 0x1683B0u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x1683A8u, 0x1683B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1683B0u;
label_1683b0:
    // 0x1683b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1683b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1683b4:
    // 0x1683b4: 0xc047eb0  jal         func_11FAC0
label_1683b8:
    if (ctx->pc == 0x1683B8u) {
        ctx->pc = 0x1683BCu;
        goto label_1683bc;
    }
    ctx->pc = 0x1683B4u;
    SET_GPR_U32(ctx, 31, 0x1683BCu);
    ctx->pc = 0x11FAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAC0u, 0x1683B4u, 0x1683BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1683BCu;
label_1683bc:
    // 0x1683bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1683bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1683c0:
    // 0x1683c0: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x1683c0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1683c4:
    // 0x1683c4: 0x16400027  bnez        $s2, . + 4 + (0x27 << 2)
label_1683c8:
    if (ctx->pc == 0x1683C8u) {
        ctx->pc = 0x1683CCu;
        goto label_1683cc;
    }
    ctx->pc = 0x1683C4u;
    {
        const bool branch_taken_0x1683c4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1683c4) {
            ctx->pc = 0x168464u;
            goto label_168464;
        }
    }
    ctx->pc = 0x1683CCu;
label_1683cc:
    // 0x1683cc: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x1683ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_1683d0:
    // 0x1683d0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1683d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1683d4:
    // 0x1683d4: 0x24a54070  addiu       $a1, $a1, 0x4070
    ctx->pc = 0x1683d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16496));
label_1683d8:
    // 0x1683d8: 0xc08e57c  jal         func_2395F0
label_1683dc:
    if (ctx->pc == 0x1683DCu) {
        ctx->pc = 0x1683E0u;
        goto label_1683e0;
    }
    ctx->pc = 0x1683D8u;
    SET_GPR_U32(ctx, 31, 0x1683E0u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x1683D8u, 0x1683E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1683E0u;
label_1683e0:
    // 0x1683e0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1683e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1683e4:
    // 0x1683e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1683e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1683e8:
    // 0x1683e8: 0xc0406d0  jal         func_101B40
label_1683ec:
    if (ctx->pc == 0x1683ECu) {
        ctx->pc = 0x1683F0u;
        goto label_1683f0;
    }
    ctx->pc = 0x1683E8u;
    SET_GPR_U32(ctx, 31, 0x1683F0u);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x1683E8u, 0x1683F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1683F0u;
label_1683f0:
    // 0x1683f0: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x1683f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_1683f4:
    // 0x1683f4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1683f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1683f8:
    // 0x1683f8: 0x24a54080  addiu       $a1, $a1, 0x4080
    ctx->pc = 0x1683f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16512));
label_1683fc:
    // 0x1683fc: 0xc08e57c  jal         func_2395F0
label_168400:
    if (ctx->pc == 0x168400u) {
        ctx->pc = 0x168404u;
        goto label_168404;
    }
    ctx->pc = 0x1683FCu;
    SET_GPR_U32(ctx, 31, 0x168404u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x1683FCu, 0x168404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168404u;
label_168404:
    // 0x168404: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x168404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_168408:
    // 0x168408: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x168408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16840c:
    // 0x16840c: 0xc0406d0  jal         func_101B40
label_168410:
    if (ctx->pc == 0x168410u) {
        ctx->pc = 0x168414u;
        goto label_168414;
    }
    ctx->pc = 0x16840Cu;
    SET_GPR_U32(ctx, 31, 0x168414u);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x16840Cu, 0x168414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168414u;
label_168414:
    // 0x168414: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x168414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_168418:
    // 0x168418: 0x34510301  ori         $s1, $v0, 0x301
    ctx->pc = 0x168418u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)769);
label_16841c:
    // 0x16841c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x16841cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_168420:
    // 0x168420: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x168420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_168424:
    // 0x168424: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x168424u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_168428:
    // 0x168428: 0x3c070017  lui         $a3, 0x17
    ctx->pc = 0x168428u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)23 << 16));
label_16842c:
    // 0x16842c: 0x24e78630  addiu       $a3, $a3, -0x79D0
    ctx->pc = 0x16842cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294936112));
label_168430:
    // 0x168430: 0x8fa80060  lw          $t0, 0x60($sp)
    ctx->pc = 0x168430u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_168434:
    // 0x168434: 0xc08d218  jal         func_234860
label_168438:
    if (ctx->pc == 0x168438u) {
        ctx->pc = 0x16843Cu;
        goto label_16843c;
    }
    ctx->pc = 0x168434u;
    SET_GPR_U32(ctx, 31, 0x16843Cu);
    ctx->pc = 0x234860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234860u, 0x168434u, 0x16843Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16843Cu;
label_16843c:
    // 0x16843c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x16843cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_168440:
    // 0x168440: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x168440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_168444:
    // 0x168444: 0xc0406a0  jal         func_101A80
label_168448:
    if (ctx->pc == 0x168448u) {
        ctx->pc = 0x16844Cu;
        goto label_16844c;
    }
    ctx->pc = 0x168444u;
    SET_GPR_U32(ctx, 31, 0x16844Cu);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x168444u, 0x16844Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16844Cu;
label_16844c:
    // 0x16844c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x16844cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_168450:
    // 0x168450: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x168450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_168454:
    // 0x168454: 0xc0406a0  jal         func_101A80
label_168458:
    if (ctx->pc == 0x168458u) {
        ctx->pc = 0x16845Cu;
        goto label_16845c;
    }
    ctx->pc = 0x168454u;
    SET_GPR_U32(ctx, 31, 0x16845Cu);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x168454u, 0x16845Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16845Cu;
label_16845c:
    // 0x16845c: 0x10000008  b           . + 4 + (0x8 << 2)
label_168460:
    if (ctx->pc == 0x168460u) {
        ctx->pc = 0x168464u;
        goto label_168464;
    }
    ctx->pc = 0x16845Cu;
    {
        const bool branch_taken_0x16845c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16845c) {
            ctx->pc = 0x168480u;
            goto label_168480;
        }
    }
    ctx->pc = 0x168464u;
label_168464:
    // 0x168464: 0xc05a1bc  jal         func_1686F0
label_168468:
    if (ctx->pc == 0x168468u) {
        ctx->pc = 0x16846Cu;
        goto label_16846c;
    }
    ctx->pc = 0x168464u;
    SET_GPR_U32(ctx, 31, 0x16846Cu);
    ctx->pc = 0x1686F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1686F0u, 0x168464u, 0x16846Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16846Cu;
label_16846c:
    // 0x16846c: 0x10000004  b           . + 4 + (0x4 << 2)
label_168470:
    if (ctx->pc == 0x168470u) {
        ctx->pc = 0x168474u;
        goto label_168474;
    }
    ctx->pc = 0x16846Cu;
    {
        const bool branch_taken_0x16846c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16846c) {
            ctx->pc = 0x168480u;
            goto label_168480;
        }
    }
    ctx->pc = 0x168474u;
label_168474:
    // 0x168474: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x168474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_168478:
    // 0x168478: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x168478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_16847c:
    // 0x16847c: 0xac640060  sw          $a0, 0x60($v1)
    ctx->pc = 0x16847cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 4));
label_168480:
    // 0x168480: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x168480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_168484:
    // 0x168484: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x168484u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_168488:
    // 0x168488: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x168488u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16848c:
    // 0x16848c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16848cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_168490:
    // 0x168490: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x168490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_168494:
    // 0x168494: 0x3e00008  jr          $ra
label_168498:
    if (ctx->pc == 0x168498u) {
        ctx->pc = 0x16849Cu;
        goto label_16849c;
    }
    ctx->pc = 0x168494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16849Cu;
label_16849c:
    // 0x16849c: 0x0  nop
    ctx->pc = 0x16849cu;
    // NOP
    ctx->pc = 0x1684a0u;
}
