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

// Function: sub_002A1EC0
// Address: 0x2a1ec0 - 0x2a2250
void sub_002A1EC0_0x2a1ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A1EC0_0x2a1ec0");
#endif

    switch (ctx->pc) {
        case 0x2a1ec0u: goto label_2a1ec0;
        case 0x2a1ec4u: goto label_2a1ec4;
        case 0x2a1ec8u: goto label_2a1ec8;
        case 0x2a1eccu: goto label_2a1ecc;
        case 0x2a1ed0u: goto label_2a1ed0;
        case 0x2a1ed4u: goto label_2a1ed4;
        case 0x2a1ed8u: goto label_2a1ed8;
        case 0x2a1edcu: goto label_2a1edc;
        case 0x2a1ee0u: goto label_2a1ee0;
        case 0x2a1ee4u: goto label_2a1ee4;
        case 0x2a1ee8u: goto label_2a1ee8;
        case 0x2a1eecu: goto label_2a1eec;
        case 0x2a1ef0u: goto label_2a1ef0;
        case 0x2a1ef4u: goto label_2a1ef4;
        case 0x2a1ef8u: goto label_2a1ef8;
        case 0x2a1efcu: goto label_2a1efc;
        case 0x2a1f00u: goto label_2a1f00;
        case 0x2a1f04u: goto label_2a1f04;
        case 0x2a1f08u: goto label_2a1f08;
        case 0x2a1f0cu: goto label_2a1f0c;
        case 0x2a1f10u: goto label_2a1f10;
        case 0x2a1f14u: goto label_2a1f14;
        case 0x2a1f18u: goto label_2a1f18;
        case 0x2a1f1cu: goto label_2a1f1c;
        case 0x2a1f20u: goto label_2a1f20;
        case 0x2a1f24u: goto label_2a1f24;
        case 0x2a1f28u: goto label_2a1f28;
        case 0x2a1f2cu: goto label_2a1f2c;
        case 0x2a1f30u: goto label_2a1f30;
        case 0x2a1f34u: goto label_2a1f34;
        case 0x2a1f38u: goto label_2a1f38;
        case 0x2a1f3cu: goto label_2a1f3c;
        case 0x2a1f40u: goto label_2a1f40;
        case 0x2a1f44u: goto label_2a1f44;
        case 0x2a1f48u: goto label_2a1f48;
        case 0x2a1f4cu: goto label_2a1f4c;
        case 0x2a1f50u: goto label_2a1f50;
        case 0x2a1f54u: goto label_2a1f54;
        case 0x2a1f58u: goto label_2a1f58;
        case 0x2a1f5cu: goto label_2a1f5c;
        case 0x2a1f60u: goto label_2a1f60;
        case 0x2a1f64u: goto label_2a1f64;
        case 0x2a1f68u: goto label_2a1f68;
        case 0x2a1f6cu: goto label_2a1f6c;
        case 0x2a1f70u: goto label_2a1f70;
        case 0x2a1f74u: goto label_2a1f74;
        case 0x2a1f78u: goto label_2a1f78;
        case 0x2a1f7cu: goto label_2a1f7c;
        case 0x2a1f80u: goto label_2a1f80;
        case 0x2a1f84u: goto label_2a1f84;
        case 0x2a1f88u: goto label_2a1f88;
        case 0x2a1f8cu: goto label_2a1f8c;
        case 0x2a1f90u: goto label_2a1f90;
        case 0x2a1f94u: goto label_2a1f94;
        case 0x2a1f98u: goto label_2a1f98;
        case 0x2a1f9cu: goto label_2a1f9c;
        case 0x2a1fa0u: goto label_2a1fa0;
        case 0x2a1fa4u: goto label_2a1fa4;
        case 0x2a1fa8u: goto label_2a1fa8;
        case 0x2a1facu: goto label_2a1fac;
        case 0x2a1fb0u: goto label_2a1fb0;
        case 0x2a1fb4u: goto label_2a1fb4;
        case 0x2a1fb8u: goto label_2a1fb8;
        case 0x2a1fbcu: goto label_2a1fbc;
        case 0x2a1fc0u: goto label_2a1fc0;
        case 0x2a1fc4u: goto label_2a1fc4;
        case 0x2a1fc8u: goto label_2a1fc8;
        case 0x2a1fccu: goto label_2a1fcc;
        case 0x2a1fd0u: goto label_2a1fd0;
        case 0x2a1fd4u: goto label_2a1fd4;
        case 0x2a1fd8u: goto label_2a1fd8;
        case 0x2a1fdcu: goto label_2a1fdc;
        case 0x2a1fe0u: goto label_2a1fe0;
        case 0x2a1fe4u: goto label_2a1fe4;
        case 0x2a1fe8u: goto label_2a1fe8;
        case 0x2a1fecu: goto label_2a1fec;
        case 0x2a1ff0u: goto label_2a1ff0;
        case 0x2a1ff4u: goto label_2a1ff4;
        case 0x2a1ff8u: goto label_2a1ff8;
        case 0x2a1ffcu: goto label_2a1ffc;
        case 0x2a2000u: goto label_2a2000;
        case 0x2a2004u: goto label_2a2004;
        case 0x2a2008u: goto label_2a2008;
        case 0x2a200cu: goto label_2a200c;
        case 0x2a2010u: goto label_2a2010;
        case 0x2a2014u: goto label_2a2014;
        case 0x2a2018u: goto label_2a2018;
        case 0x2a201cu: goto label_2a201c;
        case 0x2a2020u: goto label_2a2020;
        case 0x2a2024u: goto label_2a2024;
        case 0x2a2028u: goto label_2a2028;
        case 0x2a202cu: goto label_2a202c;
        case 0x2a2030u: goto label_2a2030;
        case 0x2a2034u: goto label_2a2034;
        case 0x2a2038u: goto label_2a2038;
        case 0x2a203cu: goto label_2a203c;
        case 0x2a2040u: goto label_2a2040;
        case 0x2a2044u: goto label_2a2044;
        case 0x2a2048u: goto label_2a2048;
        case 0x2a204cu: goto label_2a204c;
        case 0x2a2050u: goto label_2a2050;
        case 0x2a2054u: goto label_2a2054;
        case 0x2a2058u: goto label_2a2058;
        case 0x2a205cu: goto label_2a205c;
        case 0x2a2060u: goto label_2a2060;
        case 0x2a2064u: goto label_2a2064;
        case 0x2a2068u: goto label_2a2068;
        case 0x2a206cu: goto label_2a206c;
        case 0x2a2070u: goto label_2a2070;
        case 0x2a2074u: goto label_2a2074;
        case 0x2a2078u: goto label_2a2078;
        case 0x2a207cu: goto label_2a207c;
        case 0x2a2080u: goto label_2a2080;
        case 0x2a2084u: goto label_2a2084;
        case 0x2a2088u: goto label_2a2088;
        case 0x2a208cu: goto label_2a208c;
        case 0x2a2090u: goto label_2a2090;
        case 0x2a2094u: goto label_2a2094;
        case 0x2a2098u: goto label_2a2098;
        case 0x2a209cu: goto label_2a209c;
        case 0x2a20a0u: goto label_2a20a0;
        case 0x2a20a4u: goto label_2a20a4;
        case 0x2a20a8u: goto label_2a20a8;
        case 0x2a20acu: goto label_2a20ac;
        case 0x2a20b0u: goto label_2a20b0;
        case 0x2a20b4u: goto label_2a20b4;
        case 0x2a20b8u: goto label_2a20b8;
        case 0x2a20bcu: goto label_2a20bc;
        case 0x2a20c0u: goto label_2a20c0;
        case 0x2a20c4u: goto label_2a20c4;
        case 0x2a20c8u: goto label_2a20c8;
        case 0x2a20ccu: goto label_2a20cc;
        case 0x2a20d0u: goto label_2a20d0;
        case 0x2a20d4u: goto label_2a20d4;
        case 0x2a20d8u: goto label_2a20d8;
        case 0x2a20dcu: goto label_2a20dc;
        case 0x2a20e0u: goto label_2a20e0;
        case 0x2a20e4u: goto label_2a20e4;
        case 0x2a20e8u: goto label_2a20e8;
        case 0x2a20ecu: goto label_2a20ec;
        case 0x2a20f0u: goto label_2a20f0;
        case 0x2a20f4u: goto label_2a20f4;
        case 0x2a20f8u: goto label_2a20f8;
        case 0x2a20fcu: goto label_2a20fc;
        case 0x2a2100u: goto label_2a2100;
        case 0x2a2104u: goto label_2a2104;
        case 0x2a2108u: goto label_2a2108;
        case 0x2a210cu: goto label_2a210c;
        case 0x2a2110u: goto label_2a2110;
        case 0x2a2114u: goto label_2a2114;
        case 0x2a2118u: goto label_2a2118;
        case 0x2a211cu: goto label_2a211c;
        case 0x2a2120u: goto label_2a2120;
        case 0x2a2124u: goto label_2a2124;
        case 0x2a2128u: goto label_2a2128;
        case 0x2a212cu: goto label_2a212c;
        case 0x2a2130u: goto label_2a2130;
        case 0x2a2134u: goto label_2a2134;
        case 0x2a2138u: goto label_2a2138;
        case 0x2a213cu: goto label_2a213c;
        case 0x2a2140u: goto label_2a2140;
        case 0x2a2144u: goto label_2a2144;
        case 0x2a2148u: goto label_2a2148;
        case 0x2a214cu: goto label_2a214c;
        case 0x2a2150u: goto label_2a2150;
        case 0x2a2154u: goto label_2a2154;
        case 0x2a2158u: goto label_2a2158;
        case 0x2a215cu: goto label_2a215c;
        case 0x2a2160u: goto label_2a2160;
        case 0x2a2164u: goto label_2a2164;
        case 0x2a2168u: goto label_2a2168;
        case 0x2a216cu: goto label_2a216c;
        case 0x2a2170u: goto label_2a2170;
        case 0x2a2174u: goto label_2a2174;
        case 0x2a2178u: goto label_2a2178;
        case 0x2a217cu: goto label_2a217c;
        case 0x2a2180u: goto label_2a2180;
        case 0x2a2184u: goto label_2a2184;
        case 0x2a2188u: goto label_2a2188;
        case 0x2a218cu: goto label_2a218c;
        case 0x2a2190u: goto label_2a2190;
        case 0x2a2194u: goto label_2a2194;
        case 0x2a2198u: goto label_2a2198;
        case 0x2a219cu: goto label_2a219c;
        case 0x2a21a0u: goto label_2a21a0;
        case 0x2a21a4u: goto label_2a21a4;
        case 0x2a21a8u: goto label_2a21a8;
        case 0x2a21acu: goto label_2a21ac;
        case 0x2a21b0u: goto label_2a21b0;
        case 0x2a21b4u: goto label_2a21b4;
        case 0x2a21b8u: goto label_2a21b8;
        case 0x2a21bcu: goto label_2a21bc;
        case 0x2a21c0u: goto label_2a21c0;
        case 0x2a21c4u: goto label_2a21c4;
        case 0x2a21c8u: goto label_2a21c8;
        case 0x2a21ccu: goto label_2a21cc;
        case 0x2a21d0u: goto label_2a21d0;
        case 0x2a21d4u: goto label_2a21d4;
        case 0x2a21d8u: goto label_2a21d8;
        case 0x2a21dcu: goto label_2a21dc;
        case 0x2a21e0u: goto label_2a21e0;
        case 0x2a21e4u: goto label_2a21e4;
        case 0x2a21e8u: goto label_2a21e8;
        case 0x2a21ecu: goto label_2a21ec;
        case 0x2a21f0u: goto label_2a21f0;
        case 0x2a21f4u: goto label_2a21f4;
        case 0x2a21f8u: goto label_2a21f8;
        case 0x2a21fcu: goto label_2a21fc;
        case 0x2a2200u: goto label_2a2200;
        case 0x2a2204u: goto label_2a2204;
        case 0x2a2208u: goto label_2a2208;
        case 0x2a220cu: goto label_2a220c;
        case 0x2a2210u: goto label_2a2210;
        case 0x2a2214u: goto label_2a2214;
        case 0x2a2218u: goto label_2a2218;
        case 0x2a221cu: goto label_2a221c;
        case 0x2a2220u: goto label_2a2220;
        case 0x2a2224u: goto label_2a2224;
        case 0x2a2228u: goto label_2a2228;
        case 0x2a222cu: goto label_2a222c;
        case 0x2a2230u: goto label_2a2230;
        case 0x2a2234u: goto label_2a2234;
        case 0x2a2238u: goto label_2a2238;
        case 0x2a223cu: goto label_2a223c;
        case 0x2a2240u: goto label_2a2240;
        case 0x2a2244u: goto label_2a2244;
        case 0x2a2248u: goto label_2a2248;
        case 0x2a224cu: goto label_2a224c;
        default: break;
    }

    ctx->pc = 0x2a1ec0u;

label_2a1ec0:
    // 0x2a1ec0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x2a1ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_2a1ec4:
    // 0x2a1ec4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2a1ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2a1ec8:
    // 0x2a1ec8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a1ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2a1ecc:
    // 0x2a1ecc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a1eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2a1ed0:
    // 0x2a1ed0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a1ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2a1ed4:
    // 0x2a1ed4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a1ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a1ed8:
    // 0x2a1ed8: 0xafa40140  sw          $a0, 0x140($sp)
    ctx->pc = 0x2a1ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 4));
label_2a1edc:
    // 0x2a1edc: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x2a1edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_2a1ee0:
    // 0x2a1ee0: 0x9063019d  lbu         $v1, 0x19D($v1)
    ctx->pc = 0x2a1ee0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 413)));
label_2a1ee4:
    // 0x2a1ee4: 0x106000d0  beqz        $v1, . + 4 + (0xD0 << 2)
label_2a1ee8:
    if (ctx->pc == 0x2A1EE8u) {
        ctx->pc = 0x2A1EECu;
        goto label_2a1eec;
    }
    ctx->pc = 0x2A1EE4u;
    {
        const bool branch_taken_0x2a1ee4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1ee4) {
            ctx->pc = 0x2A2228u;
            goto label_2a2228;
        }
    }
    ctx->pc = 0x2A1EECu;
label_2a1eec:
    // 0x2a1eec: 0x8f83bbb4  lw          $v1, -0x444C($gp)
    ctx->pc = 0x2a1eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_2a1ef0:
    // 0x2a1ef0: 0x90630028  lbu         $v1, 0x28($v1)
    ctx->pc = 0x2a1ef0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 40)));
label_2a1ef4:
    // 0x2a1ef4: 0x146000cc  bnez        $v1, . + 4 + (0xCC << 2)
label_2a1ef8:
    if (ctx->pc == 0x2A1EF8u) {
        ctx->pc = 0x2A1EFCu;
        goto label_2a1efc;
    }
    ctx->pc = 0x2A1EF4u;
    {
        const bool branch_taken_0x2a1ef4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a1ef4) {
            ctx->pc = 0x2A2228u;
            goto label_2a2228;
        }
    }
    ctx->pc = 0x2A1EFCu;
label_2a1efc:
    // 0x2a1efc: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x2a1efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_2a1f00:
    // 0x2a1f00: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x2a1f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_2a1f04:
    // 0x2a1f04: 0xc121d18  jal         func_487460
label_2a1f08:
    if (ctx->pc == 0x2A1F08u) {
        ctx->pc = 0x2A1F0Cu;
        goto label_2a1f0c;
    }
    ctx->pc = 0x2A1F04u;
    SET_GPR_U32(ctx, 31, 0x2A1F0Cu);
    ctx->pc = 0x487460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487460u, 0x2A1F04u, 0x2A1F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1F0Cu;
label_2a1f0c:
    // 0x2a1f0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a1f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a1f10:
    // 0x2a1f10: 0x2785a3c0  addiu       $a1, $gp, -0x5C40
    ctx->pc = 0x2a1f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943680));
label_2a1f14:
    // 0x2a1f14: 0xc124fec  jal         func_493FB0
label_2a1f18:
    if (ctx->pc == 0x2A1F18u) {
        ctx->pc = 0x2A1F1Cu;
        goto label_2a1f1c;
    }
    ctx->pc = 0x2A1F14u;
    SET_GPR_U32(ctx, 31, 0x2A1F1Cu);
    ctx->pc = 0x493FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x493FB0u, 0x2A1F14u, 0x2A1F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1F1Cu;
label_2a1f1c:
    // 0x2a1f1c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2a1f1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a1f20:
    // 0x2a1f20: 0x26430040  addiu       $v1, $s2, 0x40
    ctx->pc = 0x2a1f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_2a1f24:
    // 0x2a1f24: 0x27a20130  addiu       $v0, $sp, 0x130
    ctx->pc = 0x2a1f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_2a1f28:
    // 0x2a1f28: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2a1f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a1f2c:
    // 0x2a1f2c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2a1f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a1f30:
    // 0x2a1f30: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2a1f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a1f34:
    // 0x2a1f34: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2a1f34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2a1f38:
    // 0x2a1f38: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2a1f38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_2a1f3c:
    // 0x2a1f3c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2a1f3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2a1f40:
    // 0x2a1f40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a1f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a1f44:
    // 0x2a1f44: 0xc106784  jal         func_419E10
label_2a1f48:
    if (ctx->pc == 0x2A1F48u) {
        ctx->pc = 0x2A1F4Cu;
        goto label_2a1f4c;
    }
    ctx->pc = 0x2A1F44u;
    SET_GPR_U32(ctx, 31, 0x2A1F4Cu);
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x2A1F44u, 0x2A1F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1F4Cu;
label_2a1f4c:
    // 0x2a1f4c: 0x24430030  addiu       $v1, $v0, 0x30
    ctx->pc = 0x2a1f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_2a1f50:
    // 0x2a1f50: 0x27a20120  addiu       $v0, $sp, 0x120
    ctx->pc = 0x2a1f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_2a1f54:
    // 0x2a1f54: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2a1f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a1f58:
    // 0x2a1f58: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2a1f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a1f5c:
    // 0x2a1f5c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2a1f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a1f60:
    // 0x2a1f60: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2a1f60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2a1f64:
    // 0x2a1f64: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2a1f64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_2a1f68:
    // 0x2a1f68: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2a1f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2a1f6c:
    // 0x2a1f6c: 0xc7a10124  lwc1        $f1, 0x124($sp)
    ctx->pc = 0x2a1f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a1f70:
    // 0x2a1f70: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x2a1f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a1f74:
    // 0x2a1f74: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a1f74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2a1f78:
    // 0x2a1f78: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x2a1f78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_2a1f7c:
    // 0x2a1f7c: 0xc7a10120  lwc1        $f1, 0x120($sp)
    ctx->pc = 0x2a1f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a1f80:
    // 0x2a1f80: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2a1f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_2a1f84:
    // 0x2a1f84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a1f84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a1f88:
    // 0x2a1f88: 0x0  nop
    ctx->pc = 0x2a1f88u;
    // NOP
label_2a1f8c:
    // 0x2a1f8c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a1f8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2a1f90:
    // 0x2a1f90: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x2a1f90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_2a1f94:
    // 0x2a1f94: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a1f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2a1f98:
    // 0x2a1f98: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a1f98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a1f9c:
    // 0x2a1f9c: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x2a1f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a1fa0:
    // 0x2a1fa0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a1fa0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2a1fa4:
    // 0x2a1fa4: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x2a1fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_2a1fa8:
    // 0x2a1fa8: 0xc7a10128  lwc1        $f1, 0x128($sp)
    ctx->pc = 0x2a1fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a1fac:
    // 0x2a1fac: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2a1facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_2a1fb0:
    // 0x2a1fb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a1fb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a1fb4:
    // 0x2a1fb4: 0x0  nop
    ctx->pc = 0x2a1fb4u;
    // NOP
label_2a1fb8:
    // 0x2a1fb8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a1fb8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2a1fbc:
    // 0x2a1fbc: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x2a1fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_2a1fc0:
    // 0x2a1fc0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2a1fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2a1fc4:
    // 0x2a1fc4: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x2a1fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_2a1fc8:
    // 0x2a1fc8: 0xc041d58  jal         func_107560
label_2a1fcc:
    if (ctx->pc == 0x2A1FCCu) {
        ctx->pc = 0x2A1FD0u;
        goto label_2a1fd0;
    }
    ctx->pc = 0x2A1FC8u;
    SET_GPR_U32(ctx, 31, 0x2A1FD0u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2A1FC8u, 0x2A1FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1FD0u;
label_2a1fd0:
    // 0x2a1fd0: 0xc7a10120  lwc1        $f1, 0x120($sp)
    ctx->pc = 0x2a1fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a1fd4:
    // 0x2a1fd4: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2a1fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_2a1fd8:
    // 0x2a1fd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a1fd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a1fdc:
    // 0x2a1fdc: 0x0  nop
    ctx->pc = 0x2a1fdcu;
    // NOP
label_2a1fe0:
    // 0x2a1fe0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a1fe0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2a1fe4:
    // 0x2a1fe4: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x2a1fe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_2a1fe8:
    // 0x2a1fe8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a1fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2a1fec:
    // 0x2a1fec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a1fecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a1ff0:
    // 0x2a1ff0: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x2a1ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a1ff4:
    // 0x2a1ff4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a1ff4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2a1ff8:
    // 0x2a1ff8: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x2a1ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_2a1ffc:
    // 0x2a1ffc: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2a1ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_2a2000:
    // 0x2a2000: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a2000u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a2004:
    // 0x2a2004: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x2a2004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a2008:
    // 0x2a2008: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a2008u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2a200c:
    // 0x2a200c: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x2a200cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_2a2010:
    // 0x2a2010: 0x27a40074  addiu       $a0, $sp, 0x74
    ctx->pc = 0x2a2010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
label_2a2014:
    // 0x2a2014: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x2a2014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_2a2018:
    // 0x2a2018: 0xc041d58  jal         func_107560
label_2a201c:
    if (ctx->pc == 0x2A201Cu) {
        ctx->pc = 0x2A2020u;
        goto label_2a2020;
    }
    ctx->pc = 0x2A2018u;
    SET_GPR_U32(ctx, 31, 0x2A2020u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2A2018u, 0x2A2020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2020u;
label_2a2020:
    // 0x2a2020: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2a2020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_2a2024:
    // 0x2a2024: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a2024u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a2028:
    // 0x2a2028: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x2a2028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a202c:
    // 0x2a202c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a202cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2a2030:
    // 0x2a2030: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x2a2030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_2a2034:
    // 0x2a2034: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a2034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2a2038:
    // 0x2a2038: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a2038u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a203c:
    // 0x2a203c: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x2a203cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a2040:
    // 0x2a2040: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a2040u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2a2044:
    // 0x2a2044: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x2a2044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_2a2048:
    // 0x2a2048: 0xc7a10128  lwc1        $f1, 0x128($sp)
    ctx->pc = 0x2a2048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a204c:
    // 0x2a204c: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2a204cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_2a2050:
    // 0x2a2050: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a2050u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a2054:
    // 0x2a2054: 0x0  nop
    ctx->pc = 0x2a2054u;
    // NOP
label_2a2058:
    // 0x2a2058: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a2058u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2a205c:
    // 0x2a205c: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x2a205cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_2a2060:
    // 0x2a2060: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x2a2060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_2a2064:
    // 0x2a2064: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x2a2064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2a2068:
    // 0x2a2068: 0xc041d58  jal         func_107560
label_2a206c:
    if (ctx->pc == 0x2A206Cu) {
        ctx->pc = 0x2A2070u;
        goto label_2a2070;
    }
    ctx->pc = 0x2A2068u;
    SET_GPR_U32(ctx, 31, 0x2A2070u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2A2068u, 0x2A2070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2070u;
label_2a2070:
    // 0x2a2070: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2a2070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_2a2074:
    // 0x2a2074: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a2074u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a2078:
    // 0x2a2078: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x2a2078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a207c:
    // 0x2a207c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a207cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2a2080:
    // 0x2a2080: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x2a2080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_2a2084:
    // 0x2a2084: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a2084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2a2088:
    // 0x2a2088: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a2088u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a208c:
    // 0x2a208c: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x2a208cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a2090:
    // 0x2a2090: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a2090u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2a2094:
    // 0x2a2094: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x2a2094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_2a2098:
    // 0x2a2098: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2a2098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_2a209c:
    // 0x2a209c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a209cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a20a0:
    // 0x2a20a0: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x2a20a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a20a4:
    // 0x2a20a4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a20a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2a20a8:
    // 0x2a20a8: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x2a20a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_2a20ac:
    // 0x2a20ac: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x2a20acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_2a20b0:
    // 0x2a20b0: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x2a20b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2a20b4:
    // 0x2a20b4: 0xc041d58  jal         func_107560
label_2a20b8:
    if (ctx->pc == 0x2A20B8u) {
        ctx->pc = 0x2A20BCu;
        goto label_2a20bc;
    }
    ctx->pc = 0x2A20B4u;
    SET_GPR_U32(ctx, 31, 0x2A20BCu);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2A20B4u, 0x2A20BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A20BCu;
label_2a20bc:
    // 0x2a20bc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2a20bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a20c0:
    // 0x2a20c0: 0x1000000f  b           . + 4 + (0xF << 2)
label_2a20c4:
    if (ctx->pc == 0x2A20C4u) {
        ctx->pc = 0x2A20C8u;
        goto label_2a20c8;
    }
    ctx->pc = 0x2A20C0u;
    {
        const bool branch_taken_0x2a20c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a20c0) {
            ctx->pc = 0x2A2100u;
            goto label_2a2100;
        }
    }
    ctx->pc = 0x2A20C8u;
label_2a20c8:
    // 0x2a20c8: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x2a20c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_2a20cc:
    // 0x2a20cc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2a20ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2a20d0:
    // 0x2a20d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a20d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2a20d4:
    // 0x2a20d4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2a20d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_2a20d8:
    // 0x2a20d8: 0x2450005c  addiu       $s0, $v0, 0x5C
    ctx->pc = 0x2a20d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
label_2a20dc:
    // 0x2a20dc: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2a20dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a20e0:
    // 0x2a20e0: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x2a20e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_2a20e4:
    // 0x2a20e4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2a20e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a20e8:
    // 0x2a20e8: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x2a20e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_2a20ec:
    // 0x2a20ec: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2a20ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a20f0:
    // 0x2a20f0: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x2a20f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
label_2a20f4:
    // 0x2a20f4: 0x240200b4  addiu       $v0, $zero, 0xB4
    ctx->pc = 0x2a20f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_2a20f8:
    // 0x2a20f8: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x2a20f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
label_2a20fc:
    // 0x2a20fc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2a20fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2a2100:
    // 0x2a2100: 0x2e220004  sltiu       $v0, $s1, 0x4
    ctx->pc = 0x2a2100u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_2a2104:
    // 0x2a2104: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_2a2108:
    if (ctx->pc == 0x2A2108u) {
        ctx->pc = 0x2A210Cu;
        goto label_2a210c;
    }
    ctx->pc = 0x2A2104u;
    {
        const bool branch_taken_0x2a2104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a2104) {
            ctx->pc = 0x2A20C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a20c8;
        }
    }
    ctx->pc = 0x2A210Cu;
label_2a210c:
    // 0x2a210c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a210cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a2110:
    // 0x2a2110: 0x0  nop
    ctx->pc = 0x2a2110u;
    // NOP
label_2a2114:
    // 0x2a2114: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2a2114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_2a2118:
    // 0x2a2118: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a2118u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a211c:
    // 0x2a211c: 0x0  nop
    ctx->pc = 0x2a211cu;
    // NOP
label_2a2120:
    // 0x2a2120: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2a2120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_2a2124:
    // 0x2a2124: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a2124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2a2128:
    // 0x2a2128: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a2128u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a212c:
    // 0x2a212c: 0x0  nop
    ctx->pc = 0x2a212cu;
    // NOP
label_2a2130:
    // 0x2a2130: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x2a2130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_2a2134:
    // 0x2a2134: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a2134u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a2138:
    // 0x2a2138: 0x0  nop
    ctx->pc = 0x2a2138u;
    // NOP
label_2a213c:
    // 0x2a213c: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2a213cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_2a2140:
    // 0x2a2140: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a2140u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a2144:
    // 0x2a2144: 0x0  nop
    ctx->pc = 0x2a2144u;
    // NOP
label_2a2148:
    // 0x2a2148: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x2a2148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_2a214c:
    // 0x2a214c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a214cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2a2150:
    // 0x2a2150: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a2150u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a2154:
    // 0x2a2154: 0x0  nop
    ctx->pc = 0x2a2154u;
    // NOP
label_2a2158:
    // 0x2a2158: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x2a2158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_2a215c:
    // 0x2a215c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a215cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2a2160:
    // 0x2a2160: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a2160u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a2164:
    // 0x2a2164: 0x0  nop
    ctx->pc = 0x2a2164u;
    // NOP
label_2a2168:
    // 0x2a2168: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x2a2168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_2a216c:
    // 0x2a216c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a216cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2a2170:
    // 0x2a2170: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a2170u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a2174:
    // 0x2a2174: 0x0  nop
    ctx->pc = 0x2a2174u;
    // NOP
label_2a2178:
    // 0x2a2178: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2a2178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_2a217c:
    // 0x2a217c: 0xc12242c  jal         func_4890B0
label_2a2180:
    if (ctx->pc == 0x2A2180u) {
        ctx->pc = 0x2A2184u;
        goto label_2a2184;
    }
    ctx->pc = 0x2A217Cu;
    SET_GPR_U32(ctx, 31, 0x2A2184u);
    ctx->pc = 0x4890B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890B0u, 0x2A217Cu, 0x2A2184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2184u;
label_2a2184:
    // 0x2a2184: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2a2184u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a2188:
    // 0x2a2188: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2a2188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2a218c:
    // 0x2a218c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2a218cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2a2190:
    // 0x2a2190: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2a2190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_2a2194:
    // 0x2a2194: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x2a2194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_2a2198:
    // 0x2a2198: 0x40f809  jalr        $v0
label_2a219c:
    if (ctx->pc == 0x2A219Cu) {
        ctx->pc = 0x2A21A0u;
        goto label_2a21a0;
    }
    ctx->pc = 0x2A2198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A21A0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2198u, 0x2A21A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A21A0u;
label_2a21a0:
    // 0x2a21a0: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x2a21a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2a21a4:
    // 0x2a21a4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2a21a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2a21a8:
    // 0x2a21a8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2a21a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_2a21ac:
    // 0x2a21ac: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x2a21acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_2a21b0:
    // 0x2a21b0: 0x40f809  jalr        $v0
label_2a21b4:
    if (ctx->pc == 0x2A21B4u) {
        ctx->pc = 0x2A21B8u;
        goto label_2a21b8;
    }
    ctx->pc = 0x2A21B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A21B8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A21B0u, 0x2A21B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A21B8u;
label_2a21b8:
    // 0x2a21b8: 0x8f84bb84  lw          $a0, -0x447C($gp)
    ctx->pc = 0x2a21b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949764)));
label_2a21bc:
    // 0x2a21bc: 0xc08a784  jal         func_229E10
label_2a21c0:
    if (ctx->pc == 0x2A21C0u) {
        ctx->pc = 0x2A21C4u;
        goto label_2a21c4;
    }
    ctx->pc = 0x2A21BCu;
    SET_GPR_U32(ctx, 31, 0x2A21C4u);
    ctx->pc = 0x229E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229E10u, 0x2A21BCu, 0x2A21C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A21C4u;
label_2a21c4:
    // 0x2a21c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a21c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a21c8:
    // 0x2a21c8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2a21c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a21cc:
    // 0x2a21cc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2a21ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_2a21d0:
    // 0x2a21d0: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x2a21d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_2a21d4:
    // 0x2a21d4: 0x40f809  jalr        $v0
label_2a21d8:
    if (ctx->pc == 0x2A21D8u) {
        ctx->pc = 0x2A21DCu;
        goto label_2a21dc;
    }
    ctx->pc = 0x2A21D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A21DCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A21D4u, 0x2A21DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A21DCu;
label_2a21dc:
    // 0x2a21dc: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2a21dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2a21e0:
    // 0x2a21e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a21e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a21e4:
    // 0x2a21e4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2a21e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_2a21e8:
    // 0x2a21e8: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x2a21e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_2a21ec:
    // 0x2a21ec: 0x40f809  jalr        $v0
label_2a21f0:
    if (ctx->pc == 0x2A21F0u) {
        ctx->pc = 0x2A21F4u;
        goto label_2a21f4;
    }
    ctx->pc = 0x2A21ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A21F4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A21ECu, 0x2A21F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A21F4u;
label_2a21f4:
    // 0x2a21f4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2a21f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2a21f8:
    // 0x2a21f8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2a21f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2a21fc:
    // 0x2a21fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a21fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a2200:
    // 0x2a2200: 0x24070019  addiu       $a3, $zero, 0x19
    ctx->pc = 0x2a2200u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_2a2204:
    // 0x2a2204: 0xc1111fe  jal         func_4447F8
label_2a2208:
    if (ctx->pc == 0x2A2208u) {
        ctx->pc = 0x2A220Cu;
        goto label_2a220c;
    }
    ctx->pc = 0x2A2204u;
    SET_GPR_U32(ctx, 31, 0x2A220Cu);
    ctx->pc = 0x4447F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4447F8u, 0x2A2204u, 0x2A220Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A220Cu;
label_2a220c:
    // 0x2a220c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2a2210:
    if (ctx->pc == 0x2A2210u) {
        ctx->pc = 0x2A2214u;
        goto label_2a2214;
    }
    ctx->pc = 0x2A220Cu;
    {
        const bool branch_taken_0x2a220c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a220c) {
            ctx->pc = 0x2A2228u;
            goto label_2a2228;
        }
    }
    ctx->pc = 0x2A2214u;
label_2a2214:
    // 0x2a2214: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2a2214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2a2218:
    // 0x2a2218: 0xc1110a8  jal         func_4442A0
label_2a221c:
    if (ctx->pc == 0x2A221Cu) {
        ctx->pc = 0x2A2220u;
        goto label_2a2220;
    }
    ctx->pc = 0x2A2218u;
    SET_GPR_U32(ctx, 31, 0x2A2220u);
    ctx->pc = 0x4442A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4442A0u, 0x2A2218u, 0x2A2220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2220u;
label_2a2220:
    // 0x2a2220: 0xc111228  jal         func_4448A0
label_2a2224:
    if (ctx->pc == 0x2A2224u) {
        ctx->pc = 0x2A2228u;
        goto label_2a2228;
    }
    ctx->pc = 0x2A2220u;
    SET_GPR_U32(ctx, 31, 0x2A2228u);
    ctx->pc = 0x4448A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4448A0u, 0x2A2220u, 0x2A2228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2228u;
label_2a2228:
    // 0x2a2228: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2a2228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2a222c:
    // 0x2a222c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a222cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2a2230:
    // 0x2a2230: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a2230u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2a2234:
    // 0x2a2234: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a2234u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a2238:
    // 0x2a2238: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a2238u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a223c:
    // 0x2a223c: 0x27bd0150  addiu       $sp, $sp, 0x150
    ctx->pc = 0x2a223cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_2a2240:
    // 0x2a2240: 0x3e00008  jr          $ra
label_2a2244:
    if (ctx->pc == 0x2A2244u) {
        ctx->pc = 0x2A2248u;
        goto label_2a2248;
    }
    ctx->pc = 0x2A2240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A2248u;
label_2a2248:
    // 0x2a2248: 0x0  nop
    ctx->pc = 0x2a2248u;
    // NOP
label_2a224c:
    // 0x2a224c: 0x0  nop
    ctx->pc = 0x2a224cu;
    // NOP
    ctx->pc = 0x2a2250u;
}
