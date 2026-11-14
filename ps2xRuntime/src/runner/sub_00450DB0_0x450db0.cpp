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

// Function: sub_00450DB0
// Address: 0x450db0 - 0x4512f0
void sub_00450DB0_0x450db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00450DB0_0x450db0");
#endif

    switch (ctx->pc) {
        case 0x450db0u: goto label_450db0;
        case 0x450db4u: goto label_450db4;
        case 0x450db8u: goto label_450db8;
        case 0x450dbcu: goto label_450dbc;
        case 0x450dc0u: goto label_450dc0;
        case 0x450dc4u: goto label_450dc4;
        case 0x450dc8u: goto label_450dc8;
        case 0x450dccu: goto label_450dcc;
        case 0x450dd0u: goto label_450dd0;
        case 0x450dd4u: goto label_450dd4;
        case 0x450dd8u: goto label_450dd8;
        case 0x450ddcu: goto label_450ddc;
        case 0x450de0u: goto label_450de0;
        case 0x450de4u: goto label_450de4;
        case 0x450de8u: goto label_450de8;
        case 0x450decu: goto label_450dec;
        case 0x450df0u: goto label_450df0;
        case 0x450df4u: goto label_450df4;
        case 0x450df8u: goto label_450df8;
        case 0x450dfcu: goto label_450dfc;
        case 0x450e00u: goto label_450e00;
        case 0x450e04u: goto label_450e04;
        case 0x450e08u: goto label_450e08;
        case 0x450e0cu: goto label_450e0c;
        case 0x450e10u: goto label_450e10;
        case 0x450e14u: goto label_450e14;
        case 0x450e18u: goto label_450e18;
        case 0x450e1cu: goto label_450e1c;
        case 0x450e20u: goto label_450e20;
        case 0x450e24u: goto label_450e24;
        case 0x450e28u: goto label_450e28;
        case 0x450e2cu: goto label_450e2c;
        case 0x450e30u: goto label_450e30;
        case 0x450e34u: goto label_450e34;
        case 0x450e38u: goto label_450e38;
        case 0x450e3cu: goto label_450e3c;
        case 0x450e40u: goto label_450e40;
        case 0x450e44u: goto label_450e44;
        case 0x450e48u: goto label_450e48;
        case 0x450e4cu: goto label_450e4c;
        case 0x450e50u: goto label_450e50;
        case 0x450e54u: goto label_450e54;
        case 0x450e58u: goto label_450e58;
        case 0x450e5cu: goto label_450e5c;
        case 0x450e60u: goto label_450e60;
        case 0x450e64u: goto label_450e64;
        case 0x450e68u: goto label_450e68;
        case 0x450e6cu: goto label_450e6c;
        case 0x450e70u: goto label_450e70;
        case 0x450e74u: goto label_450e74;
        case 0x450e78u: goto label_450e78;
        case 0x450e7cu: goto label_450e7c;
        case 0x450e80u: goto label_450e80;
        case 0x450e84u: goto label_450e84;
        case 0x450e88u: goto label_450e88;
        case 0x450e8cu: goto label_450e8c;
        case 0x450e90u: goto label_450e90;
        case 0x450e94u: goto label_450e94;
        case 0x450e98u: goto label_450e98;
        case 0x450e9cu: goto label_450e9c;
        case 0x450ea0u: goto label_450ea0;
        case 0x450ea4u: goto label_450ea4;
        case 0x450ea8u: goto label_450ea8;
        case 0x450eacu: goto label_450eac;
        case 0x450eb0u: goto label_450eb0;
        case 0x450eb4u: goto label_450eb4;
        case 0x450eb8u: goto label_450eb8;
        case 0x450ebcu: goto label_450ebc;
        case 0x450ec0u: goto label_450ec0;
        case 0x450ec4u: goto label_450ec4;
        case 0x450ec8u: goto label_450ec8;
        case 0x450eccu: goto label_450ecc;
        case 0x450ed0u: goto label_450ed0;
        case 0x450ed4u: goto label_450ed4;
        case 0x450ed8u: goto label_450ed8;
        case 0x450edcu: goto label_450edc;
        case 0x450ee0u: goto label_450ee0;
        case 0x450ee4u: goto label_450ee4;
        case 0x450ee8u: goto label_450ee8;
        case 0x450eecu: goto label_450eec;
        case 0x450ef0u: goto label_450ef0;
        case 0x450ef4u: goto label_450ef4;
        case 0x450ef8u: goto label_450ef8;
        case 0x450efcu: goto label_450efc;
        case 0x450f00u: goto label_450f00;
        case 0x450f04u: goto label_450f04;
        case 0x450f08u: goto label_450f08;
        case 0x450f0cu: goto label_450f0c;
        case 0x450f10u: goto label_450f10;
        case 0x450f14u: goto label_450f14;
        case 0x450f18u: goto label_450f18;
        case 0x450f1cu: goto label_450f1c;
        case 0x450f20u: goto label_450f20;
        case 0x450f24u: goto label_450f24;
        case 0x450f28u: goto label_450f28;
        case 0x450f2cu: goto label_450f2c;
        case 0x450f30u: goto label_450f30;
        case 0x450f34u: goto label_450f34;
        case 0x450f38u: goto label_450f38;
        case 0x450f3cu: goto label_450f3c;
        case 0x450f40u: goto label_450f40;
        case 0x450f44u: goto label_450f44;
        case 0x450f48u: goto label_450f48;
        case 0x450f4cu: goto label_450f4c;
        case 0x450f50u: goto label_450f50;
        case 0x450f54u: goto label_450f54;
        case 0x450f58u: goto label_450f58;
        case 0x450f5cu: goto label_450f5c;
        case 0x450f60u: goto label_450f60;
        case 0x450f64u: goto label_450f64;
        case 0x450f68u: goto label_450f68;
        case 0x450f6cu: goto label_450f6c;
        case 0x450f70u: goto label_450f70;
        case 0x450f74u: goto label_450f74;
        case 0x450f78u: goto label_450f78;
        case 0x450f7cu: goto label_450f7c;
        case 0x450f80u: goto label_450f80;
        case 0x450f84u: goto label_450f84;
        case 0x450f88u: goto label_450f88;
        case 0x450f8cu: goto label_450f8c;
        case 0x450f90u: goto label_450f90;
        case 0x450f94u: goto label_450f94;
        case 0x450f98u: goto label_450f98;
        case 0x450f9cu: goto label_450f9c;
        case 0x450fa0u: goto label_450fa0;
        case 0x450fa4u: goto label_450fa4;
        case 0x450fa8u: goto label_450fa8;
        case 0x450facu: goto label_450fac;
        case 0x450fb0u: goto label_450fb0;
        case 0x450fb4u: goto label_450fb4;
        case 0x450fb8u: goto label_450fb8;
        case 0x450fbcu: goto label_450fbc;
        case 0x450fc0u: goto label_450fc0;
        case 0x450fc4u: goto label_450fc4;
        case 0x450fc8u: goto label_450fc8;
        case 0x450fccu: goto label_450fcc;
        case 0x450fd0u: goto label_450fd0;
        case 0x450fd4u: goto label_450fd4;
        case 0x450fd8u: goto label_450fd8;
        case 0x450fdcu: goto label_450fdc;
        case 0x450fe0u: goto label_450fe0;
        case 0x450fe4u: goto label_450fe4;
        case 0x450fe8u: goto label_450fe8;
        case 0x450fecu: goto label_450fec;
        case 0x450ff0u: goto label_450ff0;
        case 0x450ff4u: goto label_450ff4;
        case 0x450ff8u: goto label_450ff8;
        case 0x450ffcu: goto label_450ffc;
        case 0x451000u: goto label_451000;
        case 0x451004u: goto label_451004;
        case 0x451008u: goto label_451008;
        case 0x45100cu: goto label_45100c;
        case 0x451010u: goto label_451010;
        case 0x451014u: goto label_451014;
        case 0x451018u: goto label_451018;
        case 0x45101cu: goto label_45101c;
        case 0x451020u: goto label_451020;
        case 0x451024u: goto label_451024;
        case 0x451028u: goto label_451028;
        case 0x45102cu: goto label_45102c;
        case 0x451030u: goto label_451030;
        case 0x451034u: goto label_451034;
        case 0x451038u: goto label_451038;
        case 0x45103cu: goto label_45103c;
        case 0x451040u: goto label_451040;
        case 0x451044u: goto label_451044;
        case 0x451048u: goto label_451048;
        case 0x45104cu: goto label_45104c;
        case 0x451050u: goto label_451050;
        case 0x451054u: goto label_451054;
        case 0x451058u: goto label_451058;
        case 0x45105cu: goto label_45105c;
        case 0x451060u: goto label_451060;
        case 0x451064u: goto label_451064;
        case 0x451068u: goto label_451068;
        case 0x45106cu: goto label_45106c;
        case 0x451070u: goto label_451070;
        case 0x451074u: goto label_451074;
        case 0x451078u: goto label_451078;
        case 0x45107cu: goto label_45107c;
        case 0x451080u: goto label_451080;
        case 0x451084u: goto label_451084;
        case 0x451088u: goto label_451088;
        case 0x45108cu: goto label_45108c;
        case 0x451090u: goto label_451090;
        case 0x451094u: goto label_451094;
        case 0x451098u: goto label_451098;
        case 0x45109cu: goto label_45109c;
        case 0x4510a0u: goto label_4510a0;
        case 0x4510a4u: goto label_4510a4;
        case 0x4510a8u: goto label_4510a8;
        case 0x4510acu: goto label_4510ac;
        case 0x4510b0u: goto label_4510b0;
        case 0x4510b4u: goto label_4510b4;
        case 0x4510b8u: goto label_4510b8;
        case 0x4510bcu: goto label_4510bc;
        case 0x4510c0u: goto label_4510c0;
        case 0x4510c4u: goto label_4510c4;
        case 0x4510c8u: goto label_4510c8;
        case 0x4510ccu: goto label_4510cc;
        case 0x4510d0u: goto label_4510d0;
        case 0x4510d4u: goto label_4510d4;
        case 0x4510d8u: goto label_4510d8;
        case 0x4510dcu: goto label_4510dc;
        case 0x4510e0u: goto label_4510e0;
        case 0x4510e4u: goto label_4510e4;
        case 0x4510e8u: goto label_4510e8;
        case 0x4510ecu: goto label_4510ec;
        case 0x4510f0u: goto label_4510f0;
        case 0x4510f4u: goto label_4510f4;
        case 0x4510f8u: goto label_4510f8;
        case 0x4510fcu: goto label_4510fc;
        case 0x451100u: goto label_451100;
        case 0x451104u: goto label_451104;
        case 0x451108u: goto label_451108;
        case 0x45110cu: goto label_45110c;
        case 0x451110u: goto label_451110;
        case 0x451114u: goto label_451114;
        case 0x451118u: goto label_451118;
        case 0x45111cu: goto label_45111c;
        case 0x451120u: goto label_451120;
        case 0x451124u: goto label_451124;
        case 0x451128u: goto label_451128;
        case 0x45112cu: goto label_45112c;
        case 0x451130u: goto label_451130;
        case 0x451134u: goto label_451134;
        case 0x451138u: goto label_451138;
        case 0x45113cu: goto label_45113c;
        case 0x451140u: goto label_451140;
        case 0x451144u: goto label_451144;
        case 0x451148u: goto label_451148;
        case 0x45114cu: goto label_45114c;
        case 0x451150u: goto label_451150;
        case 0x451154u: goto label_451154;
        case 0x451158u: goto label_451158;
        case 0x45115cu: goto label_45115c;
        case 0x451160u: goto label_451160;
        case 0x451164u: goto label_451164;
        case 0x451168u: goto label_451168;
        case 0x45116cu: goto label_45116c;
        case 0x451170u: goto label_451170;
        case 0x451174u: goto label_451174;
        case 0x451178u: goto label_451178;
        case 0x45117cu: goto label_45117c;
        case 0x451180u: goto label_451180;
        case 0x451184u: goto label_451184;
        case 0x451188u: goto label_451188;
        case 0x45118cu: goto label_45118c;
        case 0x451190u: goto label_451190;
        case 0x451194u: goto label_451194;
        case 0x451198u: goto label_451198;
        case 0x45119cu: goto label_45119c;
        case 0x4511a0u: goto label_4511a0;
        case 0x4511a4u: goto label_4511a4;
        case 0x4511a8u: goto label_4511a8;
        case 0x4511acu: goto label_4511ac;
        case 0x4511b0u: goto label_4511b0;
        case 0x4511b4u: goto label_4511b4;
        case 0x4511b8u: goto label_4511b8;
        case 0x4511bcu: goto label_4511bc;
        case 0x4511c0u: goto label_4511c0;
        case 0x4511c4u: goto label_4511c4;
        case 0x4511c8u: goto label_4511c8;
        case 0x4511ccu: goto label_4511cc;
        case 0x4511d0u: goto label_4511d0;
        case 0x4511d4u: goto label_4511d4;
        case 0x4511d8u: goto label_4511d8;
        case 0x4511dcu: goto label_4511dc;
        case 0x4511e0u: goto label_4511e0;
        case 0x4511e4u: goto label_4511e4;
        case 0x4511e8u: goto label_4511e8;
        case 0x4511ecu: goto label_4511ec;
        case 0x4511f0u: goto label_4511f0;
        case 0x4511f4u: goto label_4511f4;
        case 0x4511f8u: goto label_4511f8;
        case 0x4511fcu: goto label_4511fc;
        case 0x451200u: goto label_451200;
        case 0x451204u: goto label_451204;
        case 0x451208u: goto label_451208;
        case 0x45120cu: goto label_45120c;
        case 0x451210u: goto label_451210;
        case 0x451214u: goto label_451214;
        case 0x451218u: goto label_451218;
        case 0x45121cu: goto label_45121c;
        case 0x451220u: goto label_451220;
        case 0x451224u: goto label_451224;
        case 0x451228u: goto label_451228;
        case 0x45122cu: goto label_45122c;
        case 0x451230u: goto label_451230;
        case 0x451234u: goto label_451234;
        case 0x451238u: goto label_451238;
        case 0x45123cu: goto label_45123c;
        case 0x451240u: goto label_451240;
        case 0x451244u: goto label_451244;
        case 0x451248u: goto label_451248;
        case 0x45124cu: goto label_45124c;
        case 0x451250u: goto label_451250;
        case 0x451254u: goto label_451254;
        case 0x451258u: goto label_451258;
        case 0x45125cu: goto label_45125c;
        case 0x451260u: goto label_451260;
        case 0x451264u: goto label_451264;
        case 0x451268u: goto label_451268;
        case 0x45126cu: goto label_45126c;
        case 0x451270u: goto label_451270;
        case 0x451274u: goto label_451274;
        case 0x451278u: goto label_451278;
        case 0x45127cu: goto label_45127c;
        case 0x451280u: goto label_451280;
        case 0x451284u: goto label_451284;
        case 0x451288u: goto label_451288;
        case 0x45128cu: goto label_45128c;
        case 0x451290u: goto label_451290;
        case 0x451294u: goto label_451294;
        case 0x451298u: goto label_451298;
        case 0x45129cu: goto label_45129c;
        case 0x4512a0u: goto label_4512a0;
        case 0x4512a4u: goto label_4512a4;
        case 0x4512a8u: goto label_4512a8;
        case 0x4512acu: goto label_4512ac;
        case 0x4512b0u: goto label_4512b0;
        case 0x4512b4u: goto label_4512b4;
        case 0x4512b8u: goto label_4512b8;
        case 0x4512bcu: goto label_4512bc;
        case 0x4512c0u: goto label_4512c0;
        case 0x4512c4u: goto label_4512c4;
        case 0x4512c8u: goto label_4512c8;
        case 0x4512ccu: goto label_4512cc;
        case 0x4512d0u: goto label_4512d0;
        case 0x4512d4u: goto label_4512d4;
        case 0x4512d8u: goto label_4512d8;
        case 0x4512dcu: goto label_4512dc;
        case 0x4512e0u: goto label_4512e0;
        case 0x4512e4u: goto label_4512e4;
        case 0x4512e8u: goto label_4512e8;
        case 0x4512ecu: goto label_4512ec;
        default: break;
    }

    ctx->pc = 0x450db0u;

label_450db0:
    // 0x450db0: 0x27bdfc90  addiu       $sp, $sp, -0x370
    ctx->pc = 0x450db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966416));
label_450db4:
    // 0x450db4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x450db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_450db8:
    // 0x450db8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x450db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_450dbc:
    // 0x450dbc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x450dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_450dc0:
    // 0x450dc0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x450dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_450dc4:
    // 0x450dc4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x450dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_450dc8:
    // 0x450dc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x450dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_450dcc:
    // 0x450dcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x450dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_450dd0:
    // 0x450dd0: 0xafa40350  sw          $a0, 0x350($sp)
    ctx->pc = 0x450dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 848), GPR_U32(ctx, 4));
label_450dd4:
    // 0x450dd4: 0xafa50360  sw          $a1, 0x360($sp)
    ctx->pc = 0x450dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 864), GPR_U32(ctx, 5));
label_450dd8:
    // 0x450dd8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x450dd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_450ddc:
    // 0x450ddc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x450ddcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_450de0:
    // 0x450de0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x450de0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_450de4:
    // 0x450de4: 0x27a40348  addiu       $a0, $sp, 0x348
    ctx->pc = 0x450de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 840));
label_450de8:
    // 0x450de8: 0xc114360  jal         func_450D80
label_450dec:
    if (ctx->pc == 0x450DECu) {
        ctx->pc = 0x450DF0u;
        goto label_450df0;
    }
    ctx->pc = 0x450DE8u;
    SET_GPR_U32(ctx, 31, 0x450DF0u);
    ctx->pc = 0x450D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x450D80u, 0x450DE8u, 0x450DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x450DF0u;
label_450df0:
    // 0x450df0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x450df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_450df4:
    // 0x450df4: 0xafa20348  sw          $v0, 0x348($sp)
    ctx->pc = 0x450df4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 840), GPR_U32(ctx, 2));
label_450df8:
    // 0x450df8: 0x8fa20360  lw          $v0, 0x360($sp)
    ctx->pc = 0x450df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 864)));
label_450dfc:
    // 0x450dfc: 0xafa2034c  sw          $v0, 0x34C($sp)
    ctx->pc = 0x450dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 844), GPR_U32(ctx, 2));
label_450e00:
    // 0x450e00: 0x8fa20360  lw          $v0, 0x360($sp)
    ctx->pc = 0x450e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 864)));
label_450e04:
    // 0x450e04: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x450e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_450e08:
    // 0x450e08: 0xc11395c  jal         func_44E570
label_450e0c:
    if (ctx->pc == 0x450E0Cu) {
        ctx->pc = 0x450E10u;
        goto label_450e10;
    }
    ctx->pc = 0x450E08u;
    SET_GPR_U32(ctx, 31, 0x450E10u);
    ctx->pc = 0x44E570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E570u, 0x450E08u, 0x450E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x450E10u;
label_450e10:
    // 0x450e10: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x450e10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_450e14:
    // 0x450e14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x450e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_450e18:
    // 0x450e18: 0x16820118  bne         $s4, $v0, . + 4 + (0x118 << 2)
label_450e1c:
    if (ctx->pc == 0x450E1Cu) {
        ctx->pc = 0x450E20u;
        goto label_450e20;
    }
    ctx->pc = 0x450E18u;
    {
        const bool branch_taken_0x450e18 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x450e18) {
            ctx->pc = 0x45127Cu;
            goto label_45127c;
        }
    }
    ctx->pc = 0x450E20u;
label_450e20:
    // 0x450e20: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x450e20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_450e24:
    // 0x450e24: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x450e24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_450e28:
    // 0x450e28: 0xc11904c  jal         func_464130
label_450e2c:
    if (ctx->pc == 0x450E2Cu) {
        ctx->pc = 0x450E30u;
        goto label_450e30;
    }
    ctx->pc = 0x450E28u;
    SET_GPR_U32(ctx, 31, 0x450E30u);
    ctx->pc = 0x464130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464130u, 0x450E28u, 0x450E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x450E30u;
label_450e30:
    // 0x450e30: 0x8fa30360  lw          $v1, 0x360($sp)
    ctx->pc = 0x450e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 864)));
label_450e34:
    // 0x450e34: 0xdc630008  ld          $v1, 0x8($v1)
    ctx->pc = 0x450e34u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 8)));
label_450e38:
    // 0x450e38: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x450e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
label_450e3c:
    // 0x450e3c: 0x2983c  dsll32      $s3, $v0, 0
    ctx->pc = 0x450e3cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 0));
label_450e40:
    // 0x450e40: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x450e40u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
label_450e44:
    // 0x450e44: 0x8fa20360  lw          $v0, 0x360($sp)
    ctx->pc = 0x450e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 864)));
label_450e48:
    // 0x450e48: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x450e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_450e4c:
    // 0x450e4c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x450e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_450e50:
    // 0x450e50: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_450e54:
    if (ctx->pc == 0x450E54u) {
        ctx->pc = 0x450E58u;
        goto label_450e58;
    }
    ctx->pc = 0x450E50u;
    {
        const bool branch_taken_0x450e50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x450e50) {
            ctx->pc = 0x450E78u;
            goto label_450e78;
        }
    }
    ctx->pc = 0x450E58u;
label_450e58:
    // 0x450e58: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x450e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_450e5c:
    // 0x450e5c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_450e60:
    if (ctx->pc == 0x450E60u) {
        ctx->pc = 0x450E64u;
        goto label_450e64;
    }
    ctx->pc = 0x450E5Cu;
    {
        const bool branch_taken_0x450e5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x450e5c) {
            ctx->pc = 0x450E78u;
            goto label_450e78;
        }
    }
    ctx->pc = 0x450E64u;
label_450e64:
    // 0x450e64: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x450e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_450e68:
    // 0x450e68: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_450e6c:
    if (ctx->pc == 0x450E6Cu) {
        ctx->pc = 0x450E70u;
        goto label_450e70;
    }
    ctx->pc = 0x450E68u;
    {
        const bool branch_taken_0x450e68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x450e68) {
            ctx->pc = 0x450E78u;
            goto label_450e78;
        }
    }
    ctx->pc = 0x450E70u;
label_450e70:
    // 0x450e70: 0x10000060  b           . + 4 + (0x60 << 2)
label_450e74:
    if (ctx->pc == 0x450E74u) {
        ctx->pc = 0x450E78u;
        goto label_450e78;
    }
    ctx->pc = 0x450E70u;
    {
        const bool branch_taken_0x450e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x450e70) {
            ctx->pc = 0x450FF4u;
            goto label_450ff4;
        }
    }
    ctx->pc = 0x450E78u;
label_450e78:
    // 0x450e78: 0x8fa20360  lw          $v0, 0x360($sp)
    ctx->pc = 0x450e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 864)));
label_450e7c:
    // 0x450e7c: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x450e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_450e80:
    // 0x450e80: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x450e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_450e84:
    // 0x450e84: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_450e88:
    if (ctx->pc == 0x450E88u) {
        ctx->pc = 0x450E8Cu;
        goto label_450e8c;
    }
    ctx->pc = 0x450E84u;
    {
        const bool branch_taken_0x450e84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x450e84) {
            ctx->pc = 0x450EACu;
            goto label_450eac;
        }
    }
    ctx->pc = 0x450E8Cu;
label_450e8c:
    // 0x450e8c: 0x8fa20360  lw          $v0, 0x360($sp)
    ctx->pc = 0x450e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 864)));
label_450e90:
    // 0x450e90: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x450e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_450e94:
    // 0x450e94: 0x8c510028  lw          $s1, 0x28($v0)
    ctx->pc = 0x450e94u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_450e98:
    // 0x450e98: 0x8fa20360  lw          $v0, 0x360($sp)
    ctx->pc = 0x450e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 864)));
label_450e9c:
    // 0x450e9c: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x450e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_450ea0:
    // 0x450ea0: 0x2450002c  addiu       $s0, $v0, 0x2C
    ctx->pc = 0x450ea0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
label_450ea4:
    // 0x450ea4: 0x10000019  b           . + 4 + (0x19 << 2)
label_450ea8:
    if (ctx->pc == 0x450EA8u) {
        ctx->pc = 0x450EACu;
        goto label_450eac;
    }
    ctx->pc = 0x450EA4u;
    {
        const bool branch_taken_0x450ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x450ea4) {
            ctx->pc = 0x450F0Cu;
            goto label_450f0c;
        }
    }
    ctx->pc = 0x450EACu;
label_450eac:
    // 0x450eac: 0x8fa20360  lw          $v0, 0x360($sp)
    ctx->pc = 0x450eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 864)));
label_450eb0:
    // 0x450eb0: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x450eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_450eb4:
    // 0x450eb4: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x450eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_450eb8:
    // 0x450eb8: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_450ebc:
    if (ctx->pc == 0x450EBCu) {
        ctx->pc = 0x450EC0u;
        goto label_450ec0;
    }
    ctx->pc = 0x450EB8u;
    {
        const bool branch_taken_0x450eb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x450eb8) {
            ctx->pc = 0x450EE0u;
            goto label_450ee0;
        }
    }
    ctx->pc = 0x450EC0u;
label_450ec0:
    // 0x450ec0: 0x8fa20360  lw          $v0, 0x360($sp)
    ctx->pc = 0x450ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 864)));
label_450ec4:
    // 0x450ec4: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x450ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_450ec8:
    // 0x450ec8: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x450ec8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_450ecc:
    // 0x450ecc: 0x8fa20360  lw          $v0, 0x360($sp)
    ctx->pc = 0x450eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 864)));
label_450ed0:
    // 0x450ed0: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x450ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_450ed4:
    // 0x450ed4: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x450ed4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_450ed8:
    // 0x450ed8: 0x1000000c  b           . + 4 + (0xC << 2)
label_450edc:
    if (ctx->pc == 0x450EDCu) {
        ctx->pc = 0x450EE0u;
        goto label_450ee0;
    }
    ctx->pc = 0x450ED8u;
    {
        const bool branch_taken_0x450ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x450ed8) {
            ctx->pc = 0x450F0Cu;
            goto label_450f0c;
        }
    }
    ctx->pc = 0x450EE0u;
label_450ee0:
    // 0x450ee0: 0x8fa20360  lw          $v0, 0x360($sp)
    ctx->pc = 0x450ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 864)));
label_450ee4:
    // 0x450ee4: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x450ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_450ee8:
    // 0x450ee8: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x450ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_450eec:
    // 0x450eec: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_450ef0:
    if (ctx->pc == 0x450EF0u) {
        ctx->pc = 0x450EF4u;
        goto label_450ef4;
    }
    ctx->pc = 0x450EECu;
    {
        const bool branch_taken_0x450eec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x450eec) {
            ctx->pc = 0x450F0Cu;
            goto label_450f0c;
        }
    }
    ctx->pc = 0x450EF4u;
label_450ef4:
    // 0x450ef4: 0x8fa20360  lw          $v0, 0x360($sp)
    ctx->pc = 0x450ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 864)));
label_450ef8:
    // 0x450ef8: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x450ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_450efc:
    // 0x450efc: 0x8c510024  lw          $s1, 0x24($v0)
    ctx->pc = 0x450efcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_450f00:
    // 0x450f00: 0x8fa20360  lw          $v0, 0x360($sp)
    ctx->pc = 0x450f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 864)));
label_450f04:
    // 0x450f04: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x450f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_450f08:
    // 0x450f08: 0x24500028  addiu       $s0, $v0, 0x28
    ctx->pc = 0x450f08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_450f0c:
    // 0x450f0c: 0x1220002e  beqz        $s1, . + 4 + (0x2E << 2)
label_450f10:
    if (ctx->pc == 0x450F10u) {
        ctx->pc = 0x450F14u;
        goto label_450f14;
    }
    ctx->pc = 0x450F0Cu;
    {
        const bool branch_taken_0x450f0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x450f0c) {
            ctx->pc = 0x450FC8u;
            goto label_450fc8;
        }
    }
    ctx->pc = 0x450F14u;
label_450f14:
    // 0x450f14: 0x271102b  sltu        $v0, $s3, $s1
    ctx->pc = 0x450f14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_450f18:
    // 0x450f18: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_450f1c:
    if (ctx->pc == 0x450F1Cu) {
        ctx->pc = 0x450F20u;
        goto label_450f20;
    }
    ctx->pc = 0x450F18u;
    {
        const bool branch_taken_0x450f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x450f18) {
            ctx->pc = 0x450F38u;
            goto label_450f38;
        }
    }
    ctx->pc = 0x450F20u;
label_450f20:
    // 0x450f20: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x450f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_450f24:
    // 0x450f24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x450f24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_450f28:
    // 0x450f28: 0x0  nop
    ctx->pc = 0x450f28u;
    // NOP
label_450f2c:
    // 0x450f2c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x450f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_450f30:
    // 0x450f30: 0x10000029  b           . + 4 + (0x29 << 2)
label_450f34:
    if (ctx->pc == 0x450F34u) {
        ctx->pc = 0x450F38u;
        goto label_450f38;
    }
    ctx->pc = 0x450F30u;
    {
        const bool branch_taken_0x450f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x450f30) {
            ctx->pc = 0x450FD8u;
            goto label_450fd8;
        }
    }
    ctx->pc = 0x450F38u;
label_450f38:
    // 0x450f38: 0x6600006  bltz        $s3, . + 4 + (0x6 << 2)
label_450f3c:
    if (ctx->pc == 0x450F3Cu) {
        ctx->pc = 0x450F40u;
        goto label_450f40;
    }
    ctx->pc = 0x450F38u;
    {
        const bool branch_taken_0x450f38 = (GPR_S32(ctx, 19) < 0);
        if (branch_taken_0x450f38) {
            ctx->pc = 0x450F54u;
            goto label_450f54;
        }
    }
    ctx->pc = 0x450F40u;
label_450f40:
    // 0x450f40: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x450f40u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_450f44:
    // 0x450f44: 0x0  nop
    ctx->pc = 0x450f44u;
    // NOP
label_450f48:
    // 0x450f48: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x450f48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_450f4c:
    // 0x450f4c: 0x10000008  b           . + 4 + (0x8 << 2)
label_450f50:
    if (ctx->pc == 0x450F50u) {
        ctx->pc = 0x450F54u;
        goto label_450f54;
    }
    ctx->pc = 0x450F4Cu;
    {
        const bool branch_taken_0x450f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x450f4c) {
            ctx->pc = 0x450F70u;
            goto label_450f70;
        }
    }
    ctx->pc = 0x450F54u;
label_450f54:
    // 0x450f54: 0x131842  srl         $v1, $s3, 1
    ctx->pc = 0x450f54u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
label_450f58:
    // 0x450f58: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x450f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_450f5c:
    // 0x450f5c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x450f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_450f60:
    // 0x450f60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x450f60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_450f64:
    // 0x450f64: 0x0  nop
    ctx->pc = 0x450f64u;
    // NOP
label_450f68:
    // 0x450f68: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x450f68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_450f6c:
    // 0x450f6c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x450f6cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_450f70:
    // 0x450f70: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
label_450f74:
    if (ctx->pc == 0x450F74u) {
        ctx->pc = 0x450F78u;
        goto label_450f78;
    }
    ctx->pc = 0x450F70u;
    {
        const bool branch_taken_0x450f70 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x450f70) {
            ctx->pc = 0x450F8Cu;
            goto label_450f8c;
        }
    }
    ctx->pc = 0x450F78u;
label_450f78:
    // 0x450f78: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x450f78u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_450f7c:
    // 0x450f7c: 0x0  nop
    ctx->pc = 0x450f7cu;
    // NOP
label_450f80:
    // 0x450f80: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x450f80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_450f84:
    // 0x450f84: 0x10000008  b           . + 4 + (0x8 << 2)
label_450f88:
    if (ctx->pc == 0x450F88u) {
        ctx->pc = 0x450F8Cu;
        goto label_450f8c;
    }
    ctx->pc = 0x450F84u;
    {
        const bool branch_taken_0x450f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x450f84) {
            ctx->pc = 0x450FA8u;
            goto label_450fa8;
        }
    }
    ctx->pc = 0x450F8Cu;
label_450f8c:
    // 0x450f8c: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x450f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_450f90:
    // 0x450f90: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x450f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_450f94:
    // 0x450f94: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x450f94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_450f98:
    // 0x450f98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x450f98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_450f9c:
    // 0x450f9c: 0x0  nop
    ctx->pc = 0x450f9cu;
    // NOP
label_450fa0:
    // 0x450fa0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x450fa0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_450fa4:
    // 0x450fa4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x450fa4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_450fa8:
    // 0x450fa8: 0x0  nop
    ctx->pc = 0x450fa8u;
    // NOP
label_450fac:
    // 0x450fac: 0x0  nop
    ctx->pc = 0x450facu;
    // NOP
label_450fb0:
    // 0x450fb0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x450fb0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_450fb4:
    // 0x450fb4: 0x0  nop
    ctx->pc = 0x450fb4u;
    // NOP
label_450fb8:
    // 0x450fb8: 0x0  nop
    ctx->pc = 0x450fb8u;
    // NOP
label_450fbc:
    // 0x450fbc: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x450fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_450fc0:
    // 0x450fc0: 0x10000005  b           . + 4 + (0x5 << 2)
label_450fc4:
    if (ctx->pc == 0x450FC4u) {
        ctx->pc = 0x450FC8u;
        goto label_450fc8;
    }
    ctx->pc = 0x450FC0u;
    {
        const bool branch_taken_0x450fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x450fc0) {
            ctx->pc = 0x450FD8u;
            goto label_450fd8;
        }
    }
    ctx->pc = 0x450FC8u;
label_450fc8:
    // 0x450fc8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x450fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_450fcc:
    // 0x450fcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x450fccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_450fd0:
    // 0x450fd0: 0x0  nop
    ctx->pc = 0x450fd0u;
    // NOP
label_450fd4:
    // 0x450fd4: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x450fd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_450fd8:
    // 0x450fd8: 0x27a40348  addiu       $a0, $sp, 0x348
    ctx->pc = 0x450fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 840));
label_450fdc:
    // 0x450fdc: 0x8f82bf24  lw          $v0, -0x40DC($gp)
    ctx->pc = 0x450fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950692)));
label_450fe0:
    // 0x450fe0: 0x40f809  jalr        $v0
label_450fe4:
    if (ctx->pc == 0x450FE4u) {
        ctx->pc = 0x450FE8u;
        goto label_450fe8;
    }
    ctx->pc = 0x450FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x450FE8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x450FE0u, 0x450FE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x450FE8u;
label_450fe8:
    // 0x450fe8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x450fe8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_450fec:
    // 0x450fec: 0x1000002f  b           . + 4 + (0x2F << 2)
label_450ff0:
    if (ctx->pc == 0x450FF0u) {
        ctx->pc = 0x450FF4u;
        goto label_450ff4;
    }
    ctx->pc = 0x450FECu;
    {
        const bool branch_taken_0x450fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x450fec) {
            ctx->pc = 0x4510ACu;
            goto label_4510ac;
        }
    }
    ctx->pc = 0x450FF4u;
label_450ff4:
    // 0x450ff4: 0x16a0002a  bnez        $s5, . + 4 + (0x2A << 2)
label_450ff8:
    if (ctx->pc == 0x450FF8u) {
        ctx->pc = 0x450FFCu;
        goto label_450ffc;
    }
    ctx->pc = 0x450FF4u;
    {
        const bool branch_taken_0x450ff4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x450ff4) {
            ctx->pc = 0x4510A0u;
            goto label_4510a0;
        }
    }
    ctx->pc = 0x450FFCu;
label_450ffc:
    // 0x450ffc: 0x8f82afd4  lw          $v0, -0x502C($gp)
    ctx->pc = 0x450ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946772)));
label_451000:
    // 0x451000: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_451004:
    if (ctx->pc == 0x451004u) {
        ctx->pc = 0x451008u;
        goto label_451008;
    }
    ctx->pc = 0x451000u;
    {
        const bool branch_taken_0x451000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x451000) {
            ctx->pc = 0x4510A0u;
            goto label_4510a0;
        }
    }
    ctx->pc = 0x451008u;
label_451008:
    // 0x451008: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x451008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_45100c:
    // 0x45100c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x45100cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_451010:
    // 0x451010: 0x27a60338  addiu       $a2, $sp, 0x338
    ctx->pc = 0x451010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 824));
label_451014:
    // 0x451014: 0xc115ee8  jal         func_457BA0
label_451018:
    if (ctx->pc == 0x451018u) {
        ctx->pc = 0x45101Cu;
        goto label_45101c;
    }
    ctx->pc = 0x451014u;
    SET_GPR_U32(ctx, 31, 0x45101Cu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x451014u, 0x45101Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45101Cu;
label_45101c:
    // 0x45101c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_451020:
    if (ctx->pc == 0x451020u) {
        ctx->pc = 0x451024u;
        goto label_451024;
    }
    ctx->pc = 0x45101Cu;
    {
        const bool branch_taken_0x45101c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45101c) {
            ctx->pc = 0x4510A0u;
            goto label_4510a0;
        }
    }
    ctx->pc = 0x451024u;
label_451024:
    // 0x451024: 0x8fa20340  lw          $v0, 0x340($sp)
    ctx->pc = 0x451024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
label_451028:
    // 0x451028: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_45102c:
    if (ctx->pc == 0x45102Cu) {
        ctx->pc = 0x451030u;
        goto label_451030;
    }
    ctx->pc = 0x451028u;
    {
        const bool branch_taken_0x451028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x451028) {
            ctx->pc = 0x4510A0u;
            goto label_4510a0;
        }
    }
    ctx->pc = 0x451030u;
label_451030:
    // 0x451030: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x451030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_451034:
    // 0x451034: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x451034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_451038:
    // 0x451038: 0x8fa6033c  lw          $a2, 0x33C($sp)
    ctx->pc = 0x451038u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 828)));
label_45103c:
    // 0x45103c: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x45103cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_451040:
    // 0x451040: 0x24e7d990  addiu       $a3, $a3, -0x2670
    ctx->pc = 0x451040u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957456));
label_451044:
    // 0x451044: 0x24080185  addiu       $t0, $zero, 0x185
    ctx->pc = 0x451044u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 389));
label_451048:
    // 0x451048: 0x2789afb8  addiu       $t1, $gp, -0x5048
    ctx->pc = 0x451048u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946744));
label_45104c:
    // 0x45104c: 0xc113940  jal         func_44E500
label_451050:
    if (ctx->pc == 0x451050u) {
        ctx->pc = 0x451054u;
        goto label_451054;
    }
    ctx->pc = 0x45104Cu;
    SET_GPR_U32(ctx, 31, 0x451054u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x45104Cu, 0x451054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451054u;
label_451054:
    // 0x451054: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x451054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_451058:
    // 0x451058: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x451058u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_45105c:
    // 0x45105c: 0x24a5db40  addiu       $a1, $a1, -0x24C0
    ctx->pc = 0x45105cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957888));
label_451060:
    // 0x451060: 0xc115c24  jal         func_457090
label_451064:
    if (ctx->pc == 0x451064u) {
        ctx->pc = 0x451068u;
        goto label_451068;
    }
    ctx->pc = 0x451060u;
    SET_GPR_U32(ctx, 31, 0x451068u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x451060u, 0x451068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451068u;
label_451068:
    // 0x451068: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x451068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_45106c:
    // 0x45106c: 0x8fa20340  lw          $v0, 0x340($sp)
    ctx->pc = 0x45106cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
label_451070:
    // 0x451070: 0x40f809  jalr        $v0
label_451074:
    if (ctx->pc == 0x451074u) {
        ctx->pc = 0x451078u;
        goto label_451078;
    }
    ctx->pc = 0x451070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x451078u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x451070u, 0x451078u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x451078u;
label_451078:
    // 0x451078: 0xaf82afd4  sw          $v0, -0x502C($gp)
    ctx->pc = 0x451078u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946772), GPR_U32(ctx, 2));
label_45107c:
    // 0x45107c: 0x8fa20200  lw          $v0, 0x200($sp)
    ctx->pc = 0x45107cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
label_451080:
    // 0x451080: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_451084:
    if (ctx->pc == 0x451084u) {
        ctx->pc = 0x451088u;
        goto label_451088;
    }
    ctx->pc = 0x451080u;
    {
        const bool branch_taken_0x451080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x451080) {
            ctx->pc = 0x451090u;
            goto label_451090;
        }
    }
    ctx->pc = 0x451088u;
label_451088:
    // 0x451088: 0xd  break       0
    ctx->pc = 0x451088u;
    runtime->handleBreak(rdram, ctx);
label_45108c:
    // 0x45108c: 0x0  nop
    ctx->pc = 0x45108cu;
    // NOP
label_451090:
    // 0x451090: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x451090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_451094:
    // 0x451094: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x451094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_451098:
    // 0x451098: 0xc11392c  jal         func_44E4B0
label_45109c:
    if (ctx->pc == 0x45109Cu) {
        ctx->pc = 0x4510A0u;
        goto label_4510a0;
    }
    ctx->pc = 0x451098u;
    SET_GPR_U32(ctx, 31, 0x4510A0u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x451098u, 0x4510A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4510A0u;
label_4510a0:
    // 0x4510a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4510a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4510a4:
    // 0x4510a4: 0x10000087  b           . + 4 + (0x87 << 2)
label_4510a8:
    if (ctx->pc == 0x4510A8u) {
        ctx->pc = 0x4510ACu;
        goto label_4510ac;
    }
    ctx->pc = 0x4510A4u;
    {
        const bool branch_taken_0x4510a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4510a4) {
            ctx->pc = 0x4512C4u;
            goto label_4512c4;
        }
    }
    ctx->pc = 0x4510ACu;
label_4510ac:
    // 0x4510ac: 0x271102b  sltu        $v0, $s3, $s1
    ctx->pc = 0x4510acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4510b0:
    // 0x4510b0: 0x14400083  bnez        $v0, . + 4 + (0x83 << 2)
label_4510b4:
    if (ctx->pc == 0x4510B4u) {
        ctx->pc = 0x4510B8u;
        goto label_4510b8;
    }
    ctx->pc = 0x4510B0u;
    {
        const bool branch_taken_0x4510b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4510b0) {
            ctx->pc = 0x4512C0u;
            goto label_4512c0;
        }
    }
    ctx->pc = 0x4510B8u;
label_4510b8:
    // 0x4510b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4510b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4510bc:
    // 0x4510bc: 0x8fa20360  lw          $v0, 0x360($sp)
    ctx->pc = 0x4510bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 864)));
label_4510c0:
    // 0x4510c0: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x4510c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_4510c4:
    // 0x4510c4: 0x8fa20360  lw          $v0, 0x360($sp)
    ctx->pc = 0x4510c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 864)));
label_4510c8:
    // 0x4510c8: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x4510c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_4510cc:
    // 0x4510cc: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x4510ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_4510d0:
    // 0x4510d0: 0x14620053  bne         $v1, $v0, . + 4 + (0x53 << 2)
label_4510d4:
    if (ctx->pc == 0x4510D4u) {
        ctx->pc = 0x4510D8u;
        goto label_4510d8;
    }
    ctx->pc = 0x4510D0u;
    {
        const bool branch_taken_0x4510d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4510d0) {
            ctx->pc = 0x451220u;
            goto label_451220;
        }
    }
    ctx->pc = 0x4510D8u;
label_4510d8:
    // 0x4510d8: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x4510d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_4510dc:
    // 0x4510dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4510dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4510e0:
    // 0x4510e0: 0xc1135f0  jal         func_44D7C0
label_4510e4:
    if (ctx->pc == 0x4510E4u) {
        ctx->pc = 0x4510E8u;
        goto label_4510e8;
    }
    ctx->pc = 0x4510E0u;
    SET_GPR_U32(ctx, 31, 0x4510E8u);
    ctx->pc = 0x44D7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44D7C0u, 0x4510E0u, 0x4510E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4510E8u;
label_4510e8:
    // 0x4510e8: 0x27a40330  addiu       $a0, $sp, 0x330
    ctx->pc = 0x4510e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
label_4510ec:
    // 0x4510ec: 0xc114360  jal         func_450D80
label_4510f0:
    if (ctx->pc == 0x4510F0u) {
        ctx->pc = 0x4510F4u;
        goto label_4510f4;
    }
    ctx->pc = 0x4510ECu;
    SET_GPR_U32(ctx, 31, 0x4510F4u);
    ctx->pc = 0x450D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x450D80u, 0x4510ECu, 0x4510F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4510F4u;
label_4510f4:
    // 0x4510f4: 0xafa00330  sw          $zero, 0x330($sp)
    ctx->pc = 0x4510f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 816), GPR_U32(ctx, 0));
label_4510f8:
    // 0x4510f8: 0x27a201d0  addiu       $v0, $sp, 0x1D0
    ctx->pc = 0x4510f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_4510fc:
    // 0x4510fc: 0xafa20334  sw          $v0, 0x334($sp)
    ctx->pc = 0x4510fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 820), GPR_U32(ctx, 2));
label_451100:
    // 0x451100: 0x8fa20334  lw          $v0, 0x334($sp)
    ctx->pc = 0x451100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 820)));
label_451104:
    // 0x451104: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x451104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_451108:
    // 0x451108: 0x8fa20360  lw          $v0, 0x360($sp)
    ctx->pc = 0x451108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 864)));
label_45110c:
    // 0x45110c: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x45110cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_451110:
    // 0x451110: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x451110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_451114:
    // 0x451114: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x451114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_451118:
    // 0x451118: 0xc0bc5c6  jal         func_2F1718
label_45111c:
    if (ctx->pc == 0x45111Cu) {
        ctx->pc = 0x451120u;
        goto label_451120;
    }
    ctx->pc = 0x451118u;
    SET_GPR_U32(ctx, 31, 0x451120u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x451118u, 0x451120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451120u;
label_451120:
    // 0x451120: 0x8fa20360  lw          $v0, 0x360($sp)
    ctx->pc = 0x451120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 864)));
label_451124:
    // 0x451124: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x451124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_451128:
    // 0x451128: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x451128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_45112c:
    // 0x45112c: 0x8fa20334  lw          $v0, 0x334($sp)
    ctx->pc = 0x45112cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 820)));
label_451130:
    // 0x451130: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x451130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_451134:
    // 0x451134: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x451134u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
label_451138:
    // 0x451138: 0x27a40330  addiu       $a0, $sp, 0x330
    ctx->pc = 0x451138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
label_45113c:
    // 0x45113c: 0x8f82bf24  lw          $v0, -0x40DC($gp)
    ctx->pc = 0x45113cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950692)));
label_451140:
    // 0x451140: 0x40f809  jalr        $v0
label_451144:
    if (ctx->pc == 0x451144u) {
        ctx->pc = 0x451148u;
        goto label_451148;
    }
    ctx->pc = 0x451140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x451148u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x451140u, 0x451148u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x451148u;
label_451148:
    // 0x451148: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x451148u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45114c:
    // 0x45114c: 0x3a420001  xori        $v0, $s2, 0x1
    ctx->pc = 0x45114cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)1);
label_451150:
    // 0x451150: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x451150u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_451154:
    // 0x451154: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x451154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_451158:
    // 0x451158: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_45115c:
    if (ctx->pc == 0x45115Cu) {
        ctx->pc = 0x451160u;
        goto label_451160;
    }
    ctx->pc = 0x451158u;
    {
        const bool branch_taken_0x451158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x451158) {
            ctx->pc = 0x451208u;
            goto label_451208;
        }
    }
    ctx->pc = 0x451160u;
label_451160:
    // 0x451160: 0x8f82afd8  lw          $v0, -0x5028($gp)
    ctx->pc = 0x451160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946776)));
label_451164:
    // 0x451164: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_451168:
    if (ctx->pc == 0x451168u) {
        ctx->pc = 0x45116Cu;
        goto label_45116c;
    }
    ctx->pc = 0x451164u;
    {
        const bool branch_taken_0x451164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x451164) {
            ctx->pc = 0x451208u;
            goto label_451208;
        }
    }
    ctx->pc = 0x45116Cu;
label_45116c:
    // 0x45116c: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x45116cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_451170:
    // 0x451170: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x451170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_451174:
    // 0x451174: 0x27a60320  addiu       $a2, $sp, 0x320
    ctx->pc = 0x451174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
label_451178:
    // 0x451178: 0xc115ee8  jal         func_457BA0
label_45117c:
    if (ctx->pc == 0x45117Cu) {
        ctx->pc = 0x451180u;
        goto label_451180;
    }
    ctx->pc = 0x451178u;
    SET_GPR_U32(ctx, 31, 0x451180u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x451178u, 0x451180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451180u;
label_451180:
    // 0x451180: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_451184:
    if (ctx->pc == 0x451184u) {
        ctx->pc = 0x451188u;
        goto label_451188;
    }
    ctx->pc = 0x451180u;
    {
        const bool branch_taken_0x451180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x451180) {
            ctx->pc = 0x451208u;
            goto label_451208;
        }
    }
    ctx->pc = 0x451188u;
label_451188:
    // 0x451188: 0x8fa20328  lw          $v0, 0x328($sp)
    ctx->pc = 0x451188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 808)));
label_45118c:
    // 0x45118c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_451190:
    if (ctx->pc == 0x451190u) {
        ctx->pc = 0x451194u;
        goto label_451194;
    }
    ctx->pc = 0x45118Cu;
    {
        const bool branch_taken_0x45118c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45118c) {
            ctx->pc = 0x451208u;
            goto label_451208;
        }
    }
    ctx->pc = 0x451194u;
label_451194:
    // 0x451194: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x451194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_451198:
    // 0x451198: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x451198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_45119c:
    // 0x45119c: 0x8fa60324  lw          $a2, 0x324($sp)
    ctx->pc = 0x45119cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 804)));
label_4511a0:
    // 0x4511a0: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x4511a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_4511a4:
    // 0x4511a4: 0x24e7d990  addiu       $a3, $a3, -0x2670
    ctx->pc = 0x4511a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957456));
label_4511a8:
    // 0x4511a8: 0x240801a0  addiu       $t0, $zero, 0x1A0
    ctx->pc = 0x4511a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
label_4511ac:
    // 0x4511ac: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x4511acu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_4511b0:
    // 0x4511b0: 0x2529dba0  addiu       $t1, $t1, -0x2460
    ctx->pc = 0x4511b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294957984));
label_4511b4:
    // 0x4511b4: 0xc113940  jal         func_44E500
label_4511b8:
    if (ctx->pc == 0x4511B8u) {
        ctx->pc = 0x4511BCu;
        goto label_4511bc;
    }
    ctx->pc = 0x4511B4u;
    SET_GPR_U32(ctx, 31, 0x4511BCu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x4511B4u, 0x4511BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4511BCu;
label_4511bc:
    // 0x4511bc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x4511bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4511c0:
    // 0x4511c0: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x4511c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_4511c4:
    // 0x4511c4: 0x24a5dbc0  addiu       $a1, $a1, -0x2440
    ctx->pc = 0x4511c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958016));
label_4511c8:
    // 0x4511c8: 0xc115c24  jal         func_457090
label_4511cc:
    if (ctx->pc == 0x4511CCu) {
        ctx->pc = 0x4511D0u;
        goto label_4511d0;
    }
    ctx->pc = 0x4511C8u;
    SET_GPR_U32(ctx, 31, 0x4511D0u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4511C8u, 0x4511D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4511D0u;
label_4511d0:
    // 0x4511d0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x4511d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4511d4:
    // 0x4511d4: 0x8fa20328  lw          $v0, 0x328($sp)
    ctx->pc = 0x4511d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 808)));
label_4511d8:
    // 0x4511d8: 0x40f809  jalr        $v0
label_4511dc:
    if (ctx->pc == 0x4511DCu) {
        ctx->pc = 0x4511E0u;
        goto label_4511e0;
    }
    ctx->pc = 0x4511D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4511E0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4511D8u, 0x4511E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4511E0u;
label_4511e0:
    // 0x4511e0: 0xaf82afd8  sw          $v0, -0x5028($gp)
    ctx->pc = 0x4511e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946776), GPR_U32(ctx, 2));
label_4511e4:
    // 0x4511e4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x4511e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_4511e8:
    // 0x4511e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4511ec:
    if (ctx->pc == 0x4511ECu) {
        ctx->pc = 0x4511F0u;
        goto label_4511f0;
    }
    ctx->pc = 0x4511E8u;
    {
        const bool branch_taken_0x4511e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4511e8) {
            ctx->pc = 0x4511F8u;
            goto label_4511f8;
        }
    }
    ctx->pc = 0x4511F0u;
label_4511f0:
    // 0x4511f0: 0xd  break       0
    ctx->pc = 0x4511f0u;
    runtime->handleBreak(rdram, ctx);
label_4511f4:
    // 0x4511f4: 0x0  nop
    ctx->pc = 0x4511f4u;
    // NOP
label_4511f8:
    // 0x4511f8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x4511f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4511fc:
    // 0x4511fc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4511fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_451200:
    // 0x451200: 0xc11392c  jal         func_44E4B0
label_451204:
    if (ctx->pc == 0x451204u) {
        ctx->pc = 0x451208u;
        goto label_451208;
    }
    ctx->pc = 0x451200u;
    SET_GPR_U32(ctx, 31, 0x451208u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x451200u, 0x451208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451208u;
label_451208:
    // 0x451208: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x451208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_45120c:
    // 0x45120c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x45120cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_451210:
    // 0x451210: 0xc113610  jal         func_44D840
label_451214:
    if (ctx->pc == 0x451214u) {
        ctx->pc = 0x451218u;
        goto label_451218;
    }
    ctx->pc = 0x451210u;
    SET_GPR_U32(ctx, 31, 0x451218u);
    ctx->pc = 0x44D840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44D840u, 0x451210u, 0x451218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451218u;
label_451218:
    // 0x451218: 0x10000008  b           . + 4 + (0x8 << 2)
label_45121c:
    if (ctx->pc == 0x45121Cu) {
        ctx->pc = 0x451220u;
        goto label_451220;
    }
    ctx->pc = 0x451218u;
    {
        const bool branch_taken_0x451218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x451218) {
            ctx->pc = 0x45123Cu;
            goto label_45123c;
        }
    }
    ctx->pc = 0x451220u;
label_451220:
    // 0x451220: 0x8fa20360  lw          $v0, 0x360($sp)
    ctx->pc = 0x451220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 864)));
label_451224:
    // 0x451224: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x451224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_451228:
    // 0x451228: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x451228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_45122c:
    // 0x45122c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_451230:
    if (ctx->pc == 0x451230u) {
        ctx->pc = 0x451234u;
        goto label_451234;
    }
    ctx->pc = 0x45122Cu;
    {
        const bool branch_taken_0x45122c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x45122c) {
            ctx->pc = 0x45123Cu;
            goto label_45123c;
        }
    }
    ctx->pc = 0x451234u;
label_451234:
    // 0x451234: 0x8fa20350  lw          $v0, 0x350($sp)
    ctx->pc = 0x451234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 848)));
label_451238:
    // 0x451238: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x451238u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
label_45123c:
    // 0x45123c: 0x8fa2034c  lw          $v0, 0x34C($sp)
    ctx->pc = 0x45123cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 844)));
label_451240:
    // 0x451240: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x451240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_451244:
    // 0x451244: 0xc1138e4  jal         func_44E390
label_451248:
    if (ctx->pc == 0x451248u) {
        ctx->pc = 0x45124Cu;
        goto label_45124c;
    }
    ctx->pc = 0x451244u;
    SET_GPR_U32(ctx, 31, 0x45124Cu);
    ctx->pc = 0x44E390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E390u, 0x451244u, 0x45124Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45124Cu;
label_45124c:
    // 0x45124c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x45124cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_451250:
    // 0x451250: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x451250u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_451254:
    // 0x451254: 0x24a5dc10  addiu       $a1, $a1, -0x23F0
    ctx->pc = 0x451254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958096));
label_451258:
    // 0x451258: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x451258u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45125c:
    // 0x45125c: 0xc0bc3e2  jal         func_2F0F88
label_451260:
    if (ctx->pc == 0x451260u) {
        ctx->pc = 0x451264u;
        goto label_451264;
    }
    ctx->pc = 0x45125Cu;
    SET_GPR_U32(ctx, 31, 0x451264u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x45125Cu, 0x451264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451264u;
label_451264:
    // 0x451264: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x451264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_451268:
    // 0x451268: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x451268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45126c:
    // 0x45126c: 0xc115ae4  jal         func_456B90
label_451270:
    if (ctx->pc == 0x451270u) {
        ctx->pc = 0x451274u;
        goto label_451274;
    }
    ctx->pc = 0x45126Cu;
    SET_GPR_U32(ctx, 31, 0x451274u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x45126Cu, 0x451274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451274u;
label_451274:
    // 0x451274: 0x10000012  b           . + 4 + (0x12 << 2)
label_451278:
    if (ctx->pc == 0x451278u) {
        ctx->pc = 0x45127Cu;
        goto label_45127c;
    }
    ctx->pc = 0x451274u;
    {
        const bool branch_taken_0x451274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x451274) {
            ctx->pc = 0x4512C0u;
            goto label_4512c0;
        }
    }
    ctx->pc = 0x45127Cu;
label_45127c:
    // 0x45127c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x45127cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_451280:
    // 0x451280: 0x1682000f  bne         $s4, $v0, . + 4 + (0xF << 2)
label_451284:
    if (ctx->pc == 0x451284u) {
        ctx->pc = 0x451288u;
        goto label_451288;
    }
    ctx->pc = 0x451280u;
    {
        const bool branch_taken_0x451280 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x451280) {
            ctx->pc = 0x4512C0u;
            goto label_4512c0;
        }
    }
    ctx->pc = 0x451288u;
label_451288:
    // 0x451288: 0x27a40348  addiu       $a0, $sp, 0x348
    ctx->pc = 0x451288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 840));
label_45128c:
    // 0x45128c: 0x8f82bf24  lw          $v0, -0x40DC($gp)
    ctx->pc = 0x45128cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950692)));
label_451290:
    // 0x451290: 0x40f809  jalr        $v0
label_451294:
    if (ctx->pc == 0x451294u) {
        ctx->pc = 0x451298u;
        goto label_451298;
    }
    ctx->pc = 0x451290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x451298u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x451290u, 0x451298u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x451298u;
label_451298:
    // 0x451298: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x451298u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45129c:
    // 0x45129c: 0x8fa20348  lw          $v0, 0x348($sp)
    ctx->pc = 0x45129cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 840)));
label_4512a0:
    // 0x4512a0: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x4512a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_4512a4:
    // 0x4512a4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x4512a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4512a8:
    // 0x4512a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4512a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4512ac:
    // 0x4512ac: 0x16420004  bne         $s2, $v0, . + 4 + (0x4 << 2)
label_4512b0:
    if (ctx->pc == 0x4512B0u) {
        ctx->pc = 0x4512B4u;
        goto label_4512b4;
    }
    ctx->pc = 0x4512ACu;
    {
        const bool branch_taken_0x4512ac = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x4512ac) {
            ctx->pc = 0x4512C0u;
            goto label_4512c0;
        }
    }
    ctx->pc = 0x4512B4u;
label_4512b4:
    // 0x4512b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4512b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4512b8:
    // 0x4512b8: 0x8fa2034c  lw          $v0, 0x34C($sp)
    ctx->pc = 0x4512b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 844)));
label_4512bc:
    // 0x4512bc: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x4512bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_4512c0:
    // 0x4512c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4512c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4512c4:
    // 0x4512c4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x4512c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_4512c8:
    // 0x4512c8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4512c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4512cc:
    // 0x4512cc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4512ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4512d0:
    // 0x4512d0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4512d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4512d4:
    // 0x4512d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4512d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4512d8:
    // 0x4512d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4512d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4512dc:
    // 0x4512dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4512dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4512e0:
    // 0x4512e0: 0x27bd0370  addiu       $sp, $sp, 0x370
    ctx->pc = 0x4512e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
label_4512e4:
    // 0x4512e4: 0x3e00008  jr          $ra
label_4512e8:
    if (ctx->pc == 0x4512E8u) {
        ctx->pc = 0x4512ECu;
        goto label_4512ec;
    }
    ctx->pc = 0x4512E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4512E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4512ECu;
label_4512ec:
    // 0x4512ec: 0x0  nop
    ctx->pc = 0x4512ecu;
    // NOP
    ctx->pc = 0x4512f0u;
}
