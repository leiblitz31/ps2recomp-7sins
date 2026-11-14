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

// Function: sub_00460F70
// Address: 0x460f70 - 0x461570
void sub_00460F70_0x460f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00460F70_0x460f70");
#endif

    switch (ctx->pc) {
        case 0x460f70u: goto label_460f70;
        case 0x460f74u: goto label_460f74;
        case 0x460f78u: goto label_460f78;
        case 0x460f7cu: goto label_460f7c;
        case 0x460f80u: goto label_460f80;
        case 0x460f84u: goto label_460f84;
        case 0x460f88u: goto label_460f88;
        case 0x460f8cu: goto label_460f8c;
        case 0x460f90u: goto label_460f90;
        case 0x460f94u: goto label_460f94;
        case 0x460f98u: goto label_460f98;
        case 0x460f9cu: goto label_460f9c;
        case 0x460fa0u: goto label_460fa0;
        case 0x460fa4u: goto label_460fa4;
        case 0x460fa8u: goto label_460fa8;
        case 0x460facu: goto label_460fac;
        case 0x460fb0u: goto label_460fb0;
        case 0x460fb4u: goto label_460fb4;
        case 0x460fb8u: goto label_460fb8;
        case 0x460fbcu: goto label_460fbc;
        case 0x460fc0u: goto label_460fc0;
        case 0x460fc4u: goto label_460fc4;
        case 0x460fc8u: goto label_460fc8;
        case 0x460fccu: goto label_460fcc;
        case 0x460fd0u: goto label_460fd0;
        case 0x460fd4u: goto label_460fd4;
        case 0x460fd8u: goto label_460fd8;
        case 0x460fdcu: goto label_460fdc;
        case 0x460fe0u: goto label_460fe0;
        case 0x460fe4u: goto label_460fe4;
        case 0x460fe8u: goto label_460fe8;
        case 0x460fecu: goto label_460fec;
        case 0x460ff0u: goto label_460ff0;
        case 0x460ff4u: goto label_460ff4;
        case 0x460ff8u: goto label_460ff8;
        case 0x460ffcu: goto label_460ffc;
        case 0x461000u: goto label_461000;
        case 0x461004u: goto label_461004;
        case 0x461008u: goto label_461008;
        case 0x46100cu: goto label_46100c;
        case 0x461010u: goto label_461010;
        case 0x461014u: goto label_461014;
        case 0x461018u: goto label_461018;
        case 0x46101cu: goto label_46101c;
        case 0x461020u: goto label_461020;
        case 0x461024u: goto label_461024;
        case 0x461028u: goto label_461028;
        case 0x46102cu: goto label_46102c;
        case 0x461030u: goto label_461030;
        case 0x461034u: goto label_461034;
        case 0x461038u: goto label_461038;
        case 0x46103cu: goto label_46103c;
        case 0x461040u: goto label_461040;
        case 0x461044u: goto label_461044;
        case 0x461048u: goto label_461048;
        case 0x46104cu: goto label_46104c;
        case 0x461050u: goto label_461050;
        case 0x461054u: goto label_461054;
        case 0x461058u: goto label_461058;
        case 0x46105cu: goto label_46105c;
        case 0x461060u: goto label_461060;
        case 0x461064u: goto label_461064;
        case 0x461068u: goto label_461068;
        case 0x46106cu: goto label_46106c;
        case 0x461070u: goto label_461070;
        case 0x461074u: goto label_461074;
        case 0x461078u: goto label_461078;
        case 0x46107cu: goto label_46107c;
        case 0x461080u: goto label_461080;
        case 0x461084u: goto label_461084;
        case 0x461088u: goto label_461088;
        case 0x46108cu: goto label_46108c;
        case 0x461090u: goto label_461090;
        case 0x461094u: goto label_461094;
        case 0x461098u: goto label_461098;
        case 0x46109cu: goto label_46109c;
        case 0x4610a0u: goto label_4610a0;
        case 0x4610a4u: goto label_4610a4;
        case 0x4610a8u: goto label_4610a8;
        case 0x4610acu: goto label_4610ac;
        case 0x4610b0u: goto label_4610b0;
        case 0x4610b4u: goto label_4610b4;
        case 0x4610b8u: goto label_4610b8;
        case 0x4610bcu: goto label_4610bc;
        case 0x4610c0u: goto label_4610c0;
        case 0x4610c4u: goto label_4610c4;
        case 0x4610c8u: goto label_4610c8;
        case 0x4610ccu: goto label_4610cc;
        case 0x4610d0u: goto label_4610d0;
        case 0x4610d4u: goto label_4610d4;
        case 0x4610d8u: goto label_4610d8;
        case 0x4610dcu: goto label_4610dc;
        case 0x4610e0u: goto label_4610e0;
        case 0x4610e4u: goto label_4610e4;
        case 0x4610e8u: goto label_4610e8;
        case 0x4610ecu: goto label_4610ec;
        case 0x4610f0u: goto label_4610f0;
        case 0x4610f4u: goto label_4610f4;
        case 0x4610f8u: goto label_4610f8;
        case 0x4610fcu: goto label_4610fc;
        case 0x461100u: goto label_461100;
        case 0x461104u: goto label_461104;
        case 0x461108u: goto label_461108;
        case 0x46110cu: goto label_46110c;
        case 0x461110u: goto label_461110;
        case 0x461114u: goto label_461114;
        case 0x461118u: goto label_461118;
        case 0x46111cu: goto label_46111c;
        case 0x461120u: goto label_461120;
        case 0x461124u: goto label_461124;
        case 0x461128u: goto label_461128;
        case 0x46112cu: goto label_46112c;
        case 0x461130u: goto label_461130;
        case 0x461134u: goto label_461134;
        case 0x461138u: goto label_461138;
        case 0x46113cu: goto label_46113c;
        case 0x461140u: goto label_461140;
        case 0x461144u: goto label_461144;
        case 0x461148u: goto label_461148;
        case 0x46114cu: goto label_46114c;
        case 0x461150u: goto label_461150;
        case 0x461154u: goto label_461154;
        case 0x461158u: goto label_461158;
        case 0x46115cu: goto label_46115c;
        case 0x461160u: goto label_461160;
        case 0x461164u: goto label_461164;
        case 0x461168u: goto label_461168;
        case 0x46116cu: goto label_46116c;
        case 0x461170u: goto label_461170;
        case 0x461174u: goto label_461174;
        case 0x461178u: goto label_461178;
        case 0x46117cu: goto label_46117c;
        case 0x461180u: goto label_461180;
        case 0x461184u: goto label_461184;
        case 0x461188u: goto label_461188;
        case 0x46118cu: goto label_46118c;
        case 0x461190u: goto label_461190;
        case 0x461194u: goto label_461194;
        case 0x461198u: goto label_461198;
        case 0x46119cu: goto label_46119c;
        case 0x4611a0u: goto label_4611a0;
        case 0x4611a4u: goto label_4611a4;
        case 0x4611a8u: goto label_4611a8;
        case 0x4611acu: goto label_4611ac;
        case 0x4611b0u: goto label_4611b0;
        case 0x4611b4u: goto label_4611b4;
        case 0x4611b8u: goto label_4611b8;
        case 0x4611bcu: goto label_4611bc;
        case 0x4611c0u: goto label_4611c0;
        case 0x4611c4u: goto label_4611c4;
        case 0x4611c8u: goto label_4611c8;
        case 0x4611ccu: goto label_4611cc;
        case 0x4611d0u: goto label_4611d0;
        case 0x4611d4u: goto label_4611d4;
        case 0x4611d8u: goto label_4611d8;
        case 0x4611dcu: goto label_4611dc;
        case 0x4611e0u: goto label_4611e0;
        case 0x4611e4u: goto label_4611e4;
        case 0x4611e8u: goto label_4611e8;
        case 0x4611ecu: goto label_4611ec;
        case 0x4611f0u: goto label_4611f0;
        case 0x4611f4u: goto label_4611f4;
        case 0x4611f8u: goto label_4611f8;
        case 0x4611fcu: goto label_4611fc;
        case 0x461200u: goto label_461200;
        case 0x461204u: goto label_461204;
        case 0x461208u: goto label_461208;
        case 0x46120cu: goto label_46120c;
        case 0x461210u: goto label_461210;
        case 0x461214u: goto label_461214;
        case 0x461218u: goto label_461218;
        case 0x46121cu: goto label_46121c;
        case 0x461220u: goto label_461220;
        case 0x461224u: goto label_461224;
        case 0x461228u: goto label_461228;
        case 0x46122cu: goto label_46122c;
        case 0x461230u: goto label_461230;
        case 0x461234u: goto label_461234;
        case 0x461238u: goto label_461238;
        case 0x46123cu: goto label_46123c;
        case 0x461240u: goto label_461240;
        case 0x461244u: goto label_461244;
        case 0x461248u: goto label_461248;
        case 0x46124cu: goto label_46124c;
        case 0x461250u: goto label_461250;
        case 0x461254u: goto label_461254;
        case 0x461258u: goto label_461258;
        case 0x46125cu: goto label_46125c;
        case 0x461260u: goto label_461260;
        case 0x461264u: goto label_461264;
        case 0x461268u: goto label_461268;
        case 0x46126cu: goto label_46126c;
        case 0x461270u: goto label_461270;
        case 0x461274u: goto label_461274;
        case 0x461278u: goto label_461278;
        case 0x46127cu: goto label_46127c;
        case 0x461280u: goto label_461280;
        case 0x461284u: goto label_461284;
        case 0x461288u: goto label_461288;
        case 0x46128cu: goto label_46128c;
        case 0x461290u: goto label_461290;
        case 0x461294u: goto label_461294;
        case 0x461298u: goto label_461298;
        case 0x46129cu: goto label_46129c;
        case 0x4612a0u: goto label_4612a0;
        case 0x4612a4u: goto label_4612a4;
        case 0x4612a8u: goto label_4612a8;
        case 0x4612acu: goto label_4612ac;
        case 0x4612b0u: goto label_4612b0;
        case 0x4612b4u: goto label_4612b4;
        case 0x4612b8u: goto label_4612b8;
        case 0x4612bcu: goto label_4612bc;
        case 0x4612c0u: goto label_4612c0;
        case 0x4612c4u: goto label_4612c4;
        case 0x4612c8u: goto label_4612c8;
        case 0x4612ccu: goto label_4612cc;
        case 0x4612d0u: goto label_4612d0;
        case 0x4612d4u: goto label_4612d4;
        case 0x4612d8u: goto label_4612d8;
        case 0x4612dcu: goto label_4612dc;
        case 0x4612e0u: goto label_4612e0;
        case 0x4612e4u: goto label_4612e4;
        case 0x4612e8u: goto label_4612e8;
        case 0x4612ecu: goto label_4612ec;
        case 0x4612f0u: goto label_4612f0;
        case 0x4612f4u: goto label_4612f4;
        case 0x4612f8u: goto label_4612f8;
        case 0x4612fcu: goto label_4612fc;
        case 0x461300u: goto label_461300;
        case 0x461304u: goto label_461304;
        case 0x461308u: goto label_461308;
        case 0x46130cu: goto label_46130c;
        case 0x461310u: goto label_461310;
        case 0x461314u: goto label_461314;
        case 0x461318u: goto label_461318;
        case 0x46131cu: goto label_46131c;
        case 0x461320u: goto label_461320;
        case 0x461324u: goto label_461324;
        case 0x461328u: goto label_461328;
        case 0x46132cu: goto label_46132c;
        case 0x461330u: goto label_461330;
        case 0x461334u: goto label_461334;
        case 0x461338u: goto label_461338;
        case 0x46133cu: goto label_46133c;
        case 0x461340u: goto label_461340;
        case 0x461344u: goto label_461344;
        case 0x461348u: goto label_461348;
        case 0x46134cu: goto label_46134c;
        case 0x461350u: goto label_461350;
        case 0x461354u: goto label_461354;
        case 0x461358u: goto label_461358;
        case 0x46135cu: goto label_46135c;
        case 0x461360u: goto label_461360;
        case 0x461364u: goto label_461364;
        case 0x461368u: goto label_461368;
        case 0x46136cu: goto label_46136c;
        case 0x461370u: goto label_461370;
        case 0x461374u: goto label_461374;
        case 0x461378u: goto label_461378;
        case 0x46137cu: goto label_46137c;
        case 0x461380u: goto label_461380;
        case 0x461384u: goto label_461384;
        case 0x461388u: goto label_461388;
        case 0x46138cu: goto label_46138c;
        case 0x461390u: goto label_461390;
        case 0x461394u: goto label_461394;
        case 0x461398u: goto label_461398;
        case 0x46139cu: goto label_46139c;
        case 0x4613a0u: goto label_4613a0;
        case 0x4613a4u: goto label_4613a4;
        case 0x4613a8u: goto label_4613a8;
        case 0x4613acu: goto label_4613ac;
        case 0x4613b0u: goto label_4613b0;
        case 0x4613b4u: goto label_4613b4;
        case 0x4613b8u: goto label_4613b8;
        case 0x4613bcu: goto label_4613bc;
        case 0x4613c0u: goto label_4613c0;
        case 0x4613c4u: goto label_4613c4;
        case 0x4613c8u: goto label_4613c8;
        case 0x4613ccu: goto label_4613cc;
        case 0x4613d0u: goto label_4613d0;
        case 0x4613d4u: goto label_4613d4;
        case 0x4613d8u: goto label_4613d8;
        case 0x4613dcu: goto label_4613dc;
        case 0x4613e0u: goto label_4613e0;
        case 0x4613e4u: goto label_4613e4;
        case 0x4613e8u: goto label_4613e8;
        case 0x4613ecu: goto label_4613ec;
        case 0x4613f0u: goto label_4613f0;
        case 0x4613f4u: goto label_4613f4;
        case 0x4613f8u: goto label_4613f8;
        case 0x4613fcu: goto label_4613fc;
        case 0x461400u: goto label_461400;
        case 0x461404u: goto label_461404;
        case 0x461408u: goto label_461408;
        case 0x46140cu: goto label_46140c;
        case 0x461410u: goto label_461410;
        case 0x461414u: goto label_461414;
        case 0x461418u: goto label_461418;
        case 0x46141cu: goto label_46141c;
        case 0x461420u: goto label_461420;
        case 0x461424u: goto label_461424;
        case 0x461428u: goto label_461428;
        case 0x46142cu: goto label_46142c;
        case 0x461430u: goto label_461430;
        case 0x461434u: goto label_461434;
        case 0x461438u: goto label_461438;
        case 0x46143cu: goto label_46143c;
        case 0x461440u: goto label_461440;
        case 0x461444u: goto label_461444;
        case 0x461448u: goto label_461448;
        case 0x46144cu: goto label_46144c;
        case 0x461450u: goto label_461450;
        case 0x461454u: goto label_461454;
        case 0x461458u: goto label_461458;
        case 0x46145cu: goto label_46145c;
        case 0x461460u: goto label_461460;
        case 0x461464u: goto label_461464;
        case 0x461468u: goto label_461468;
        case 0x46146cu: goto label_46146c;
        case 0x461470u: goto label_461470;
        case 0x461474u: goto label_461474;
        case 0x461478u: goto label_461478;
        case 0x46147cu: goto label_46147c;
        case 0x461480u: goto label_461480;
        case 0x461484u: goto label_461484;
        case 0x461488u: goto label_461488;
        case 0x46148cu: goto label_46148c;
        case 0x461490u: goto label_461490;
        case 0x461494u: goto label_461494;
        case 0x461498u: goto label_461498;
        case 0x46149cu: goto label_46149c;
        case 0x4614a0u: goto label_4614a0;
        case 0x4614a4u: goto label_4614a4;
        case 0x4614a8u: goto label_4614a8;
        case 0x4614acu: goto label_4614ac;
        case 0x4614b0u: goto label_4614b0;
        case 0x4614b4u: goto label_4614b4;
        case 0x4614b8u: goto label_4614b8;
        case 0x4614bcu: goto label_4614bc;
        case 0x4614c0u: goto label_4614c0;
        case 0x4614c4u: goto label_4614c4;
        case 0x4614c8u: goto label_4614c8;
        case 0x4614ccu: goto label_4614cc;
        case 0x4614d0u: goto label_4614d0;
        case 0x4614d4u: goto label_4614d4;
        case 0x4614d8u: goto label_4614d8;
        case 0x4614dcu: goto label_4614dc;
        case 0x4614e0u: goto label_4614e0;
        case 0x4614e4u: goto label_4614e4;
        case 0x4614e8u: goto label_4614e8;
        case 0x4614ecu: goto label_4614ec;
        case 0x4614f0u: goto label_4614f0;
        case 0x4614f4u: goto label_4614f4;
        case 0x4614f8u: goto label_4614f8;
        case 0x4614fcu: goto label_4614fc;
        case 0x461500u: goto label_461500;
        case 0x461504u: goto label_461504;
        case 0x461508u: goto label_461508;
        case 0x46150cu: goto label_46150c;
        case 0x461510u: goto label_461510;
        case 0x461514u: goto label_461514;
        case 0x461518u: goto label_461518;
        case 0x46151cu: goto label_46151c;
        case 0x461520u: goto label_461520;
        case 0x461524u: goto label_461524;
        case 0x461528u: goto label_461528;
        case 0x46152cu: goto label_46152c;
        case 0x461530u: goto label_461530;
        case 0x461534u: goto label_461534;
        case 0x461538u: goto label_461538;
        case 0x46153cu: goto label_46153c;
        case 0x461540u: goto label_461540;
        case 0x461544u: goto label_461544;
        case 0x461548u: goto label_461548;
        case 0x46154cu: goto label_46154c;
        case 0x461550u: goto label_461550;
        case 0x461554u: goto label_461554;
        case 0x461558u: goto label_461558;
        case 0x46155cu: goto label_46155c;
        case 0x461560u: goto label_461560;
        case 0x461564u: goto label_461564;
        case 0x461568u: goto label_461568;
        case 0x46156cu: goto label_46156c;
        default: break;
    }

    ctx->pc = 0x460f70u;

label_460f70:
    // 0x460f70: 0x27bdf850  addiu       $sp, $sp, -0x7B0
    ctx->pc = 0x460f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965328));
label_460f74:
    // 0x460f74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x460f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_460f78:
    // 0x460f78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x460f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_460f7c:
    // 0x460f7c: 0xafa40780  sw          $a0, 0x780($sp)
    ctx->pc = 0x460f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1920), GPR_U32(ctx, 4));
label_460f80:
    // 0x460f80: 0xafa50790  sw          $a1, 0x790($sp)
    ctx->pc = 0x460f80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1936), GPR_U32(ctx, 5));
label_460f84:
    // 0x460f84: 0xafa607a0  sw          $a2, 0x7A0($sp)
    ctx->pc = 0x460f84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1952), GPR_U32(ctx, 6));
label_460f88:
    // 0x460f88: 0x8f83bfb0  lw          $v1, -0x4050($gp)
    ctx->pc = 0x460f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950832)));
label_460f8c:
    // 0x460f8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x460f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_460f90:
    // 0x460f90: 0x106200ea  beq         $v1, $v0, . + 4 + (0xEA << 2)
label_460f94:
    if (ctx->pc == 0x460F94u) {
        ctx->pc = 0x460F98u;
        goto label_460f98;
    }
    ctx->pc = 0x460F90u;
    {
        const bool branch_taken_0x460f90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x460f90) {
            ctx->pc = 0x46133Cu;
            goto label_46133c;
        }
    }
    ctx->pc = 0x460F98u;
label_460f98:
    // 0x460f98: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_460f9c:
    if (ctx->pc == 0x460F9Cu) {
        ctx->pc = 0x460FA0u;
        goto label_460fa0;
    }
    ctx->pc = 0x460F98u;
    {
        const bool branch_taken_0x460f98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x460f98) {
            ctx->pc = 0x460FA8u;
            goto label_460fa8;
        }
    }
    ctx->pc = 0x460FA0u;
label_460fa0:
    // 0x460fa0: 0x1000016c  b           . + 4 + (0x16C << 2)
label_460fa4:
    if (ctx->pc == 0x460FA4u) {
        ctx->pc = 0x460FA8u;
        goto label_460fa8;
    }
    ctx->pc = 0x460FA0u;
    {
        const bool branch_taken_0x460fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x460fa0) {
            ctx->pc = 0x461554u;
            goto label_461554;
        }
    }
    ctx->pc = 0x460FA8u;
label_460fa8:
    // 0x460fa8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x460fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_460fac:
    // 0x460fac: 0x244252c0  addiu       $v0, $v0, 0x52C0
    ctx->pc = 0x460facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21184));
label_460fb0:
    // 0x460fb0: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x460fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_460fb4:
    // 0x460fb4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x460fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_460fb8:
    // 0x460fb8: 0x244252c0  addiu       $v0, $v0, 0x52C0
    ctx->pc = 0x460fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21184));
label_460fbc:
    // 0x460fbc: 0x401027  not         $v0, $v0
    ctx->pc = 0x460fbcu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
label_460fc0:
    // 0x460fc0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x460fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_460fc4:
    // 0x460fc4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x460fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_460fc8:
    // 0x460fc8: 0x28420040  slti        $v0, $v0, 0x40
    ctx->pc = 0x460fc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
label_460fcc:
    // 0x460fcc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x460fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_460fd0:
    // 0x460fd0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x460fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_460fd4:
    // 0x460fd4: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_460fd8:
    if (ctx->pc == 0x460FD8u) {
        ctx->pc = 0x460FDCu;
        goto label_460fdc;
    }
    ctx->pc = 0x460FD4u;
    {
        const bool branch_taken_0x460fd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x460fd4) {
            ctx->pc = 0x461084u;
            goto label_461084;
        }
    }
    ctx->pc = 0x460FDCu;
label_460fdc:
    // 0x460fdc: 0x8f82b204  lw          $v0, -0x4DFC($gp)
    ctx->pc = 0x460fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947332)));
label_460fe0:
    // 0x460fe0: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_460fe4:
    if (ctx->pc == 0x460FE4u) {
        ctx->pc = 0x460FE8u;
        goto label_460fe8;
    }
    ctx->pc = 0x460FE0u;
    {
        const bool branch_taken_0x460fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x460fe0) {
            ctx->pc = 0x461084u;
            goto label_461084;
        }
    }
    ctx->pc = 0x460FE8u;
label_460fe8:
    // 0x460fe8: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x460fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_460fec:
    // 0x460fec: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x460fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_460ff0:
    // 0x460ff0: 0x27a60770  addiu       $a2, $sp, 0x770
    ctx->pc = 0x460ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1904));
label_460ff4:
    // 0x460ff4: 0xc115ee8  jal         func_457BA0
label_460ff8:
    if (ctx->pc == 0x460FF8u) {
        ctx->pc = 0x460FFCu;
        goto label_460ffc;
    }
    ctx->pc = 0x460FF4u;
    SET_GPR_U32(ctx, 31, 0x460FFCu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x460FF4u, 0x460FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x460FFCu;
label_460ffc:
    // 0x460ffc: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_461000:
    if (ctx->pc == 0x461000u) {
        ctx->pc = 0x461004u;
        goto label_461004;
    }
    ctx->pc = 0x460FFCu;
    {
        const bool branch_taken_0x460ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x460ffc) {
            ctx->pc = 0x461084u;
            goto label_461084;
        }
    }
    ctx->pc = 0x461004u;
label_461004:
    // 0x461004: 0x8fa20778  lw          $v0, 0x778($sp)
    ctx->pc = 0x461004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1912)));
label_461008:
    // 0x461008: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_46100c:
    if (ctx->pc == 0x46100Cu) {
        ctx->pc = 0x461010u;
        goto label_461010;
    }
    ctx->pc = 0x461008u;
    {
        const bool branch_taken_0x461008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x461008) {
            ctx->pc = 0x461084u;
            goto label_461084;
        }
    }
    ctx->pc = 0x461010u;
label_461010:
    // 0x461010: 0x27a405c0  addiu       $a0, $sp, 0x5C0
    ctx->pc = 0x461010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1472));
label_461014:
    // 0x461014: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x461014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_461018:
    // 0x461018: 0x8fa60774  lw          $a2, 0x774($sp)
    ctx->pc = 0x461018u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1908)));
label_46101c:
    // 0x46101c: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x46101cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_461020:
    // 0x461020: 0x24e7ed20  addiu       $a3, $a3, -0x12E0
    ctx->pc = 0x461020u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962464));
label_461024:
    // 0x461024: 0x2408060e  addiu       $t0, $zero, 0x60E
    ctx->pc = 0x461024u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1550));
label_461028:
    // 0x461028: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x461028u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_46102c:
    // 0x46102c: 0x2529f040  addiu       $t1, $t1, -0xFC0
    ctx->pc = 0x46102cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294963264));
label_461030:
    // 0x461030: 0xc113940  jal         func_44E500
label_461034:
    if (ctx->pc == 0x461034u) {
        ctx->pc = 0x461038u;
        goto label_461038;
    }
    ctx->pc = 0x461030u;
    SET_GPR_U32(ctx, 31, 0x461038u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x461030u, 0x461038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461038u;
label_461038:
    // 0x461038: 0x27a405c0  addiu       $a0, $sp, 0x5C0
    ctx->pc = 0x461038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1472));
label_46103c:
    // 0x46103c: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x46103cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_461040:
    // 0x461040: 0x24a5f070  addiu       $a1, $a1, -0xF90
    ctx->pc = 0x461040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963312));
label_461044:
    // 0x461044: 0xc115c24  jal         func_457090
label_461048:
    if (ctx->pc == 0x461048u) {
        ctx->pc = 0x46104Cu;
        goto label_46104c;
    }
    ctx->pc = 0x461044u;
    SET_GPR_U32(ctx, 31, 0x46104Cu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x461044u, 0x46104Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46104Cu;
label_46104c:
    // 0x46104c: 0x27a405c0  addiu       $a0, $sp, 0x5C0
    ctx->pc = 0x46104cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1472));
label_461050:
    // 0x461050: 0x8fa20778  lw          $v0, 0x778($sp)
    ctx->pc = 0x461050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1912)));
label_461054:
    // 0x461054: 0x40f809  jalr        $v0
label_461058:
    if (ctx->pc == 0x461058u) {
        ctx->pc = 0x46105Cu;
        goto label_46105c;
    }
    ctx->pc = 0x461054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46105Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x461054u, 0x46105Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46105Cu;
label_46105c:
    // 0x46105c: 0xaf82b204  sw          $v0, -0x4DFC($gp)
    ctx->pc = 0x46105cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947332), GPR_U32(ctx, 2));
label_461060:
    // 0x461060: 0x8fa205c0  lw          $v0, 0x5C0($sp)
    ctx->pc = 0x461060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1472)));
label_461064:
    // 0x461064: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_461068:
    if (ctx->pc == 0x461068u) {
        ctx->pc = 0x46106Cu;
        goto label_46106c;
    }
    ctx->pc = 0x461064u;
    {
        const bool branch_taken_0x461064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x461064) {
            ctx->pc = 0x461074u;
            goto label_461074;
        }
    }
    ctx->pc = 0x46106Cu;
label_46106c:
    // 0x46106c: 0xd  break       0
    ctx->pc = 0x46106cu;
    runtime->handleBreak(rdram, ctx);
label_461070:
    // 0x461070: 0x0  nop
    ctx->pc = 0x461070u;
    // NOP
label_461074:
    // 0x461074: 0x27a405c0  addiu       $a0, $sp, 0x5C0
    ctx->pc = 0x461074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1472));
label_461078:
    // 0x461078: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x461078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_46107c:
    // 0x46107c: 0xc11392c  jal         func_44E4B0
label_461080:
    if (ctx->pc == 0x461080u) {
        ctx->pc = 0x461084u;
        goto label_461084;
    }
    ctx->pc = 0x46107Cu;
    SET_GPR_U32(ctx, 31, 0x461084u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x46107Cu, 0x461084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461084u;
label_461084:
    // 0x461084: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x461084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_461088:
    // 0x461088: 0x8c424e00  lw          $v0, 0x4E00($v0)
    ctx->pc = 0x461088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19968)));
label_46108c:
    // 0x46108c: 0x401027  not         $v0, $v0
    ctx->pc = 0x46108cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
label_461090:
    // 0x461090: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x461090u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_461094:
    // 0x461094: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x461094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_461098:
    // 0x461098: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_46109c:
    if (ctx->pc == 0x46109Cu) {
        ctx->pc = 0x4610A0u;
        goto label_4610a0;
    }
    ctx->pc = 0x461098u;
    {
        const bool branch_taken_0x461098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x461098) {
            ctx->pc = 0x461148u;
            goto label_461148;
        }
    }
    ctx->pc = 0x4610A0u;
label_4610a0:
    // 0x4610a0: 0x8f82b208  lw          $v0, -0x4DF8($gp)
    ctx->pc = 0x4610a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947336)));
label_4610a4:
    // 0x4610a4: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_4610a8:
    if (ctx->pc == 0x4610A8u) {
        ctx->pc = 0x4610ACu;
        goto label_4610ac;
    }
    ctx->pc = 0x4610A4u;
    {
        const bool branch_taken_0x4610a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4610a4) {
            ctx->pc = 0x461148u;
            goto label_461148;
        }
    }
    ctx->pc = 0x4610ACu;
label_4610ac:
    // 0x4610ac: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x4610acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_4610b0:
    // 0x4610b0: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4610b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4610b4:
    // 0x4610b4: 0x27a60760  addiu       $a2, $sp, 0x760
    ctx->pc = 0x4610b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1888));
label_4610b8:
    // 0x4610b8: 0xc115ee8  jal         func_457BA0
label_4610bc:
    if (ctx->pc == 0x4610BCu) {
        ctx->pc = 0x4610C0u;
        goto label_4610c0;
    }
    ctx->pc = 0x4610B8u;
    SET_GPR_U32(ctx, 31, 0x4610C0u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x4610B8u, 0x4610C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4610C0u;
label_4610c0:
    // 0x4610c0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_4610c4:
    if (ctx->pc == 0x4610C4u) {
        ctx->pc = 0x4610C8u;
        goto label_4610c8;
    }
    ctx->pc = 0x4610C0u;
    {
        const bool branch_taken_0x4610c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4610c0) {
            ctx->pc = 0x461148u;
            goto label_461148;
        }
    }
    ctx->pc = 0x4610C8u;
label_4610c8:
    // 0x4610c8: 0x8fa20768  lw          $v0, 0x768($sp)
    ctx->pc = 0x4610c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1896)));
label_4610cc:
    // 0x4610cc: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_4610d0:
    if (ctx->pc == 0x4610D0u) {
        ctx->pc = 0x4610D4u;
        goto label_4610d4;
    }
    ctx->pc = 0x4610CCu;
    {
        const bool branch_taken_0x4610cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4610cc) {
            ctx->pc = 0x461148u;
            goto label_461148;
        }
    }
    ctx->pc = 0x4610D4u;
label_4610d4:
    // 0x4610d4: 0x27a404a0  addiu       $a0, $sp, 0x4A0
    ctx->pc = 0x4610d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
label_4610d8:
    // 0x4610d8: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4610d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4610dc:
    // 0x4610dc: 0x8fa60764  lw          $a2, 0x764($sp)
    ctx->pc = 0x4610dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1892)));
label_4610e0:
    // 0x4610e0: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x4610e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_4610e4:
    // 0x4610e4: 0x24e7ed20  addiu       $a3, $a3, -0x12E0
    ctx->pc = 0x4610e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962464));
label_4610e8:
    // 0x4610e8: 0x24080610  addiu       $t0, $zero, 0x610
    ctx->pc = 0x4610e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1552));
label_4610ec:
    // 0x4610ec: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x4610ecu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_4610f0:
    // 0x4610f0: 0x2529f0a0  addiu       $t1, $t1, -0xF60
    ctx->pc = 0x4610f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294963360));
label_4610f4:
    // 0x4610f4: 0xc113940  jal         func_44E500
label_4610f8:
    if (ctx->pc == 0x4610F8u) {
        ctx->pc = 0x4610FCu;
        goto label_4610fc;
    }
    ctx->pc = 0x4610F4u;
    SET_GPR_U32(ctx, 31, 0x4610FCu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x4610F4u, 0x4610FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4610FCu;
label_4610fc:
    // 0x4610fc: 0x27a404a0  addiu       $a0, $sp, 0x4A0
    ctx->pc = 0x4610fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
label_461100:
    // 0x461100: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x461100u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_461104:
    // 0x461104: 0x24a5f0d0  addiu       $a1, $a1, -0xF30
    ctx->pc = 0x461104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963408));
label_461108:
    // 0x461108: 0xc115c24  jal         func_457090
label_46110c:
    if (ctx->pc == 0x46110Cu) {
        ctx->pc = 0x461110u;
        goto label_461110;
    }
    ctx->pc = 0x461108u;
    SET_GPR_U32(ctx, 31, 0x461110u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x461108u, 0x461110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461110u;
label_461110:
    // 0x461110: 0x27a404a0  addiu       $a0, $sp, 0x4A0
    ctx->pc = 0x461110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
label_461114:
    // 0x461114: 0x8fa20768  lw          $v0, 0x768($sp)
    ctx->pc = 0x461114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1896)));
label_461118:
    // 0x461118: 0x40f809  jalr        $v0
label_46111c:
    if (ctx->pc == 0x46111Cu) {
        ctx->pc = 0x461120u;
        goto label_461120;
    }
    ctx->pc = 0x461118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x461120u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x461118u, 0x461120u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x461120u;
label_461120:
    // 0x461120: 0xaf82b208  sw          $v0, -0x4DF8($gp)
    ctx->pc = 0x461120u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947336), GPR_U32(ctx, 2));
label_461124:
    // 0x461124: 0x8fa204a0  lw          $v0, 0x4A0($sp)
    ctx->pc = 0x461124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1184)));
label_461128:
    // 0x461128: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_46112c:
    if (ctx->pc == 0x46112Cu) {
        ctx->pc = 0x461130u;
        goto label_461130;
    }
    ctx->pc = 0x461128u;
    {
        const bool branch_taken_0x461128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x461128) {
            ctx->pc = 0x461138u;
            goto label_461138;
        }
    }
    ctx->pc = 0x461130u;
label_461130:
    // 0x461130: 0xd  break       0
    ctx->pc = 0x461130u;
    runtime->handleBreak(rdram, ctx);
label_461134:
    // 0x461134: 0x0  nop
    ctx->pc = 0x461134u;
    // NOP
label_461138:
    // 0x461138: 0x27a404a0  addiu       $a0, $sp, 0x4A0
    ctx->pc = 0x461138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
label_46113c:
    // 0x46113c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46113cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_461140:
    // 0x461140: 0xc11392c  jal         func_44E4B0
label_461144:
    if (ctx->pc == 0x461144u) {
        ctx->pc = 0x461148u;
        goto label_461148;
    }
    ctx->pc = 0x461140u;
    SET_GPR_U32(ctx, 31, 0x461148u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x461140u, 0x461148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461148u;
label_461148:
    // 0x461148: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x461148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_46114c:
    // 0x46114c: 0x8c424e04  lw          $v0, 0x4E04($v0)
    ctx->pc = 0x46114cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19972)));
label_461150:
    // 0x461150: 0x401027  not         $v0, $v0
    ctx->pc = 0x461150u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
label_461154:
    // 0x461154: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x461154u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_461158:
    // 0x461158: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x461158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_46115c:
    // 0x46115c: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_461160:
    if (ctx->pc == 0x461160u) {
        ctx->pc = 0x461164u;
        goto label_461164;
    }
    ctx->pc = 0x46115Cu;
    {
        const bool branch_taken_0x46115c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46115c) {
            ctx->pc = 0x46120Cu;
            goto label_46120c;
        }
    }
    ctx->pc = 0x461164u;
label_461164:
    // 0x461164: 0x8f82b20c  lw          $v0, -0x4DF4($gp)
    ctx->pc = 0x461164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947340)));
label_461168:
    // 0x461168: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_46116c:
    if (ctx->pc == 0x46116Cu) {
        ctx->pc = 0x461170u;
        goto label_461170;
    }
    ctx->pc = 0x461168u;
    {
        const bool branch_taken_0x461168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x461168) {
            ctx->pc = 0x46120Cu;
            goto label_46120c;
        }
    }
    ctx->pc = 0x461170u;
label_461170:
    // 0x461170: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x461170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_461174:
    // 0x461174: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x461174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_461178:
    // 0x461178: 0x27a60750  addiu       $a2, $sp, 0x750
    ctx->pc = 0x461178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1872));
label_46117c:
    // 0x46117c: 0xc115ee8  jal         func_457BA0
label_461180:
    if (ctx->pc == 0x461180u) {
        ctx->pc = 0x461184u;
        goto label_461184;
    }
    ctx->pc = 0x46117Cu;
    SET_GPR_U32(ctx, 31, 0x461184u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x46117Cu, 0x461184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461184u;
label_461184:
    // 0x461184: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_461188:
    if (ctx->pc == 0x461188u) {
        ctx->pc = 0x46118Cu;
        goto label_46118c;
    }
    ctx->pc = 0x461184u;
    {
        const bool branch_taken_0x461184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x461184) {
            ctx->pc = 0x46120Cu;
            goto label_46120c;
        }
    }
    ctx->pc = 0x46118Cu;
label_46118c:
    // 0x46118c: 0x8fa20758  lw          $v0, 0x758($sp)
    ctx->pc = 0x46118cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1880)));
label_461190:
    // 0x461190: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_461194:
    if (ctx->pc == 0x461194u) {
        ctx->pc = 0x461198u;
        goto label_461198;
    }
    ctx->pc = 0x461190u;
    {
        const bool branch_taken_0x461190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x461190) {
            ctx->pc = 0x46120Cu;
            goto label_46120c;
        }
    }
    ctx->pc = 0x461198u;
label_461198:
    // 0x461198: 0x27a40380  addiu       $a0, $sp, 0x380
    ctx->pc = 0x461198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
label_46119c:
    // 0x46119c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x46119cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4611a0:
    // 0x4611a0: 0x8fa60754  lw          $a2, 0x754($sp)
    ctx->pc = 0x4611a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1876)));
label_4611a4:
    // 0x4611a4: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x4611a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_4611a8:
    // 0x4611a8: 0x24e7ed20  addiu       $a3, $a3, -0x12E0
    ctx->pc = 0x4611a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962464));
label_4611ac:
    // 0x4611ac: 0x24080611  addiu       $t0, $zero, 0x611
    ctx->pc = 0x4611acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1553));
label_4611b0:
    // 0x4611b0: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x4611b0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_4611b4:
    // 0x4611b4: 0x2529f0e0  addiu       $t1, $t1, -0xF20
    ctx->pc = 0x4611b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294963424));
label_4611b8:
    // 0x4611b8: 0xc113940  jal         func_44E500
label_4611bc:
    if (ctx->pc == 0x4611BCu) {
        ctx->pc = 0x4611C0u;
        goto label_4611c0;
    }
    ctx->pc = 0x4611B8u;
    SET_GPR_U32(ctx, 31, 0x4611C0u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x4611B8u, 0x4611C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4611C0u;
label_4611c0:
    // 0x4611c0: 0x27a40380  addiu       $a0, $sp, 0x380
    ctx->pc = 0x4611c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
label_4611c4:
    // 0x4611c4: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x4611c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_4611c8:
    // 0x4611c8: 0x24a5f110  addiu       $a1, $a1, -0xEF0
    ctx->pc = 0x4611c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963472));
label_4611cc:
    // 0x4611cc: 0xc115c24  jal         func_457090
label_4611d0:
    if (ctx->pc == 0x4611D0u) {
        ctx->pc = 0x4611D4u;
        goto label_4611d4;
    }
    ctx->pc = 0x4611CCu;
    SET_GPR_U32(ctx, 31, 0x4611D4u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4611CCu, 0x4611D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4611D4u;
label_4611d4:
    // 0x4611d4: 0x27a40380  addiu       $a0, $sp, 0x380
    ctx->pc = 0x4611d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
label_4611d8:
    // 0x4611d8: 0x8fa20758  lw          $v0, 0x758($sp)
    ctx->pc = 0x4611d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1880)));
label_4611dc:
    // 0x4611dc: 0x40f809  jalr        $v0
label_4611e0:
    if (ctx->pc == 0x4611E0u) {
        ctx->pc = 0x4611E4u;
        goto label_4611e4;
    }
    ctx->pc = 0x4611DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4611E4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4611DCu, 0x4611E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4611E4u;
label_4611e4:
    // 0x4611e4: 0xaf82b20c  sw          $v0, -0x4DF4($gp)
    ctx->pc = 0x4611e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947340), GPR_U32(ctx, 2));
label_4611e8:
    // 0x4611e8: 0x8fa20380  lw          $v0, 0x380($sp)
    ctx->pc = 0x4611e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 896)));
label_4611ec:
    // 0x4611ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4611f0:
    if (ctx->pc == 0x4611F0u) {
        ctx->pc = 0x4611F4u;
        goto label_4611f4;
    }
    ctx->pc = 0x4611ECu;
    {
        const bool branch_taken_0x4611ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4611ec) {
            ctx->pc = 0x4611FCu;
            goto label_4611fc;
        }
    }
    ctx->pc = 0x4611F4u;
label_4611f4:
    // 0x4611f4: 0xd  break       0
    ctx->pc = 0x4611f4u;
    runtime->handleBreak(rdram, ctx);
label_4611f8:
    // 0x4611f8: 0x0  nop
    ctx->pc = 0x4611f8u;
    // NOP
label_4611fc:
    // 0x4611fc: 0x27a40380  addiu       $a0, $sp, 0x380
    ctx->pc = 0x4611fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
label_461200:
    // 0x461200: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x461200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_461204:
    // 0x461204: 0xc11392c  jal         func_44E4B0
label_461208:
    if (ctx->pc == 0x461208u) {
        ctx->pc = 0x46120Cu;
        goto label_46120c;
    }
    ctx->pc = 0x461204u;
    SET_GPR_U32(ctx, 31, 0x46120Cu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x461204u, 0x46120Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46120Cu;
label_46120c:
    // 0x46120c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x46120cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_461210:
    // 0x461210: 0x8c424e20  lw          $v0, 0x4E20($v0)
    ctx->pc = 0x461210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20000)));
label_461214:
    // 0x461214: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_461218:
    if (ctx->pc == 0x461218u) {
        ctx->pc = 0x46121Cu;
        goto label_46121c;
    }
    ctx->pc = 0x461214u;
    {
        const bool branch_taken_0x461214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x461214) {
            ctx->pc = 0x4612C4u;
            goto label_4612c4;
        }
    }
    ctx->pc = 0x46121Cu;
label_46121c:
    // 0x46121c: 0x8f82b210  lw          $v0, -0x4DF0($gp)
    ctx->pc = 0x46121cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947344)));
label_461220:
    // 0x461220: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_461224:
    if (ctx->pc == 0x461224u) {
        ctx->pc = 0x461228u;
        goto label_461228;
    }
    ctx->pc = 0x461220u;
    {
        const bool branch_taken_0x461220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x461220) {
            ctx->pc = 0x4612C4u;
            goto label_4612c4;
        }
    }
    ctx->pc = 0x461228u;
label_461228:
    // 0x461228: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x461228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_46122c:
    // 0x46122c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x46122cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_461230:
    // 0x461230: 0x27a60740  addiu       $a2, $sp, 0x740
    ctx->pc = 0x461230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1856));
label_461234:
    // 0x461234: 0xc115ee8  jal         func_457BA0
label_461238:
    if (ctx->pc == 0x461238u) {
        ctx->pc = 0x46123Cu;
        goto label_46123c;
    }
    ctx->pc = 0x461234u;
    SET_GPR_U32(ctx, 31, 0x46123Cu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x461234u, 0x46123Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46123Cu;
label_46123c:
    // 0x46123c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_461240:
    if (ctx->pc == 0x461240u) {
        ctx->pc = 0x461244u;
        goto label_461244;
    }
    ctx->pc = 0x46123Cu;
    {
        const bool branch_taken_0x46123c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46123c) {
            ctx->pc = 0x4612C4u;
            goto label_4612c4;
        }
    }
    ctx->pc = 0x461244u;
label_461244:
    // 0x461244: 0x8fa20748  lw          $v0, 0x748($sp)
    ctx->pc = 0x461244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1864)));
label_461248:
    // 0x461248: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_46124c:
    if (ctx->pc == 0x46124Cu) {
        ctx->pc = 0x461250u;
        goto label_461250;
    }
    ctx->pc = 0x461248u;
    {
        const bool branch_taken_0x461248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x461248) {
            ctx->pc = 0x4612C4u;
            goto label_4612c4;
        }
    }
    ctx->pc = 0x461250u;
label_461250:
    // 0x461250: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x461250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_461254:
    // 0x461254: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x461254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_461258:
    // 0x461258: 0x8fa60744  lw          $a2, 0x744($sp)
    ctx->pc = 0x461258u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1860)));
label_46125c:
    // 0x46125c: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x46125cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_461260:
    // 0x461260: 0x24e7ed20  addiu       $a3, $a3, -0x12E0
    ctx->pc = 0x461260u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962464));
label_461264:
    // 0x461264: 0x24080612  addiu       $t0, $zero, 0x612
    ctx->pc = 0x461264u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1554));
label_461268:
    // 0x461268: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x461268u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_46126c:
    // 0x46126c: 0x2529f120  addiu       $t1, $t1, -0xEE0
    ctx->pc = 0x46126cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294963488));
label_461270:
    // 0x461270: 0xc113940  jal         func_44E500
label_461274:
    if (ctx->pc == 0x461274u) {
        ctx->pc = 0x461278u;
        goto label_461278;
    }
    ctx->pc = 0x461270u;
    SET_GPR_U32(ctx, 31, 0x461278u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x461270u, 0x461278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461278u;
label_461278:
    // 0x461278: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x461278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_46127c:
    // 0x46127c: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x46127cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_461280:
    // 0x461280: 0x24a5ee40  addiu       $a1, $a1, -0x11C0
    ctx->pc = 0x461280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962752));
label_461284:
    // 0x461284: 0xc115c24  jal         func_457090
label_461288:
    if (ctx->pc == 0x461288u) {
        ctx->pc = 0x46128Cu;
        goto label_46128c;
    }
    ctx->pc = 0x461284u;
    SET_GPR_U32(ctx, 31, 0x46128Cu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x461284u, 0x46128Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46128Cu;
label_46128c:
    // 0x46128c: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x46128cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_461290:
    // 0x461290: 0x8fa20748  lw          $v0, 0x748($sp)
    ctx->pc = 0x461290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1864)));
label_461294:
    // 0x461294: 0x40f809  jalr        $v0
label_461298:
    if (ctx->pc == 0x461298u) {
        ctx->pc = 0x46129Cu;
        goto label_46129c;
    }
    ctx->pc = 0x461294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46129Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x461294u, 0x46129Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46129Cu;
label_46129c:
    // 0x46129c: 0xaf82b210  sw          $v0, -0x4DF0($gp)
    ctx->pc = 0x46129cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947344), GPR_U32(ctx, 2));
label_4612a0:
    // 0x4612a0: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x4612a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_4612a4:
    // 0x4612a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4612a8:
    if (ctx->pc == 0x4612A8u) {
        ctx->pc = 0x4612ACu;
        goto label_4612ac;
    }
    ctx->pc = 0x4612A4u;
    {
        const bool branch_taken_0x4612a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4612a4) {
            ctx->pc = 0x4612B4u;
            goto label_4612b4;
        }
    }
    ctx->pc = 0x4612ACu;
label_4612ac:
    // 0x4612ac: 0xd  break       0
    ctx->pc = 0x4612acu;
    runtime->handleBreak(rdram, ctx);
label_4612b0:
    // 0x4612b0: 0x0  nop
    ctx->pc = 0x4612b0u;
    // NOP
label_4612b4:
    // 0x4612b4: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x4612b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_4612b8:
    // 0x4612b8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4612b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4612bc:
    // 0x4612bc: 0xc11392c  jal         func_44E4B0
label_4612c0:
    if (ctx->pc == 0x4612C0u) {
        ctx->pc = 0x4612C4u;
        goto label_4612c4;
    }
    ctx->pc = 0x4612BCu;
    SET_GPR_U32(ctx, 31, 0x4612C4u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x4612BCu, 0x4612C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4612C4u;
label_4612c4:
    // 0x4612c4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4612c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_4612c8:
    // 0x4612c8: 0x8c424e20  lw          $v0, 0x4E20($v0)
    ctx->pc = 0x4612c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20000)));
label_4612cc:
    // 0x4612cc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4612ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_4612d0:
    // 0x4612d0: 0x27a406e0  addiu       $a0, $sp, 0x6E0
    ctx->pc = 0x4612d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1760));
label_4612d4:
    // 0x4612d4: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x4612d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_4612d8:
    // 0x4612d8: 0x24a5f140  addiu       $a1, $a1, -0xEC0
    ctx->pc = 0x4612d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963520));
label_4612dc:
    // 0x4612dc: 0x2786bfb8  addiu       $a2, $gp, -0x4048
    ctx->pc = 0x4612dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294950840));
label_4612e0:
    // 0x4612e0: 0x3c070062  lui         $a3, 0x62
    ctx->pc = 0x4612e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)98 << 16));
label_4612e4:
    // 0x4612e4: 0x24e74de8  addiu       $a3, $a3, 0x4DE8
    ctx->pc = 0x4612e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19944));
label_4612e8:
    // 0x4612e8: 0x3c080062  lui         $t0, 0x62
    ctx->pc = 0x4612e8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
label_4612ec:
    // 0x4612ec: 0x25084e3c  addiu       $t0, $t0, 0x4E3C
    ctx->pc = 0x4612ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 20028));
label_4612f0:
    // 0x4612f0: 0xc0bc3e2  jal         func_2F0F88
label_4612f4:
    if (ctx->pc == 0x4612F4u) {
        ctx->pc = 0x4612F8u;
        goto label_4612f8;
    }
    ctx->pc = 0x4612F0u;
    SET_GPR_U32(ctx, 31, 0x4612F8u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x4612F0u, 0x4612F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4612F8u;
label_4612f8:
    // 0x4612f8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4612f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_4612fc:
    // 0x4612fc: 0x8c444e00  lw          $a0, 0x4E00($v0)
    ctx->pc = 0x4612fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19968)));
label_461300:
    // 0x461300: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x461300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_461304:
    // 0x461304: 0x8c454e04  lw          $a1, 0x4E04($v0)
    ctx->pc = 0x461304u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19972)));
label_461308:
    // 0x461308: 0x27a606e0  addiu       $a2, $sp, 0x6E0
    ctx->pc = 0x461308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1760));
label_46130c:
    // 0x46130c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x46130cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_461310:
    // 0x461310: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x461310u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_461314:
    // 0x461314: 0x3c090062  lui         $t1, 0x62
    ctx->pc = 0x461314u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)98 << 16));
label_461318:
    // 0x461318: 0x252952c0  addiu       $t1, $t1, 0x52C0
    ctx->pc = 0x461318u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 21184));
label_46131c:
    // 0x46131c: 0xc0c3d52  jal         func_30F548
label_461320:
    if (ctx->pc == 0x461320u) {
        ctx->pc = 0x461324u;
        goto label_461324;
    }
    ctx->pc = 0x46131Cu;
    SET_GPR_U32(ctx, 31, 0x461324u);
    ctx->pc = 0x30F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F548u, 0x46131Cu, 0x461324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461324u;
label_461324:
    // 0x461324: 0xaf82bfb4  sw          $v0, -0x404C($gp)
    ctx->pc = 0x461324u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950836), GPR_U32(ctx, 2));
label_461328:
    // 0x461328: 0x8f82bfb0  lw          $v0, -0x4050($gp)
    ctx->pc = 0x461328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950832)));
label_46132c:
    // 0x46132c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x46132cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_461330:
    // 0x461330: 0xaf82bfb0  sw          $v0, -0x4050($gp)
    ctx->pc = 0x461330u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950832), GPR_U32(ctx, 2));
label_461334:
    // 0x461334: 0x10000087  b           . + 4 + (0x87 << 2)
label_461338:
    if (ctx->pc == 0x461338u) {
        ctx->pc = 0x46133Cu;
        goto label_46133c;
    }
    ctx->pc = 0x461334u;
    {
        const bool branch_taken_0x461334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x461334) {
            ctx->pc = 0x461554u;
            goto label_461554;
        }
    }
    ctx->pc = 0x46133Cu;
label_46133c:
    // 0x46133c: 0x8fa307a0  lw          $v1, 0x7A0($sp)
    ctx->pc = 0x46133cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1952)));
label_461340:
    // 0x461340: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x461340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_461344:
    // 0x461344: 0x14620083  bne         $v1, $v0, . + 4 + (0x83 << 2)
label_461348:
    if (ctx->pc == 0x461348u) {
        ctx->pc = 0x46134Cu;
        goto label_46134c;
    }
    ctx->pc = 0x461344u;
    {
        const bool branch_taken_0x461344 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x461344) {
            ctx->pc = 0x461554u;
            goto label_461554;
        }
    }
    ctx->pc = 0x46134Cu;
label_46134c:
    // 0x46134c: 0x8fa20780  lw          $v0, 0x780($sp)
    ctx->pc = 0x46134cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1920)));
label_461350:
    // 0x461350: 0x3842000d  xori        $v0, $v0, 0xD
    ctx->pc = 0x461350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)13);
label_461354:
    // 0x461354: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x461354u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_461358:
    // 0x461358: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x461358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_46135c:
    // 0x46135c: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_461360:
    if (ctx->pc == 0x461360u) {
        ctx->pc = 0x461364u;
        goto label_461364;
    }
    ctx->pc = 0x46135Cu;
    {
        const bool branch_taken_0x46135c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46135c) {
            ctx->pc = 0x46140Cu;
            goto label_46140c;
        }
    }
    ctx->pc = 0x461364u;
label_461364:
    // 0x461364: 0x8f82b214  lw          $v0, -0x4DEC($gp)
    ctx->pc = 0x461364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947348)));
label_461368:
    // 0x461368: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_46136c:
    if (ctx->pc == 0x46136Cu) {
        ctx->pc = 0x461370u;
        goto label_461370;
    }
    ctx->pc = 0x461368u;
    {
        const bool branch_taken_0x461368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x461368) {
            ctx->pc = 0x46140Cu;
            goto label_46140c;
        }
    }
    ctx->pc = 0x461370u;
label_461370:
    // 0x461370: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x461370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_461374:
    // 0x461374: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x461374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_461378:
    // 0x461378: 0x27a60730  addiu       $a2, $sp, 0x730
    ctx->pc = 0x461378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1840));
label_46137c:
    // 0x46137c: 0xc115ee8  jal         func_457BA0
label_461380:
    if (ctx->pc == 0x461380u) {
        ctx->pc = 0x461384u;
        goto label_461384;
    }
    ctx->pc = 0x46137Cu;
    SET_GPR_U32(ctx, 31, 0x461384u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x46137Cu, 0x461384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461384u;
label_461384:
    // 0x461384: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_461388:
    if (ctx->pc == 0x461388u) {
        ctx->pc = 0x46138Cu;
        goto label_46138c;
    }
    ctx->pc = 0x461384u;
    {
        const bool branch_taken_0x461384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x461384) {
            ctx->pc = 0x46140Cu;
            goto label_46140c;
        }
    }
    ctx->pc = 0x46138Cu;
label_46138c:
    // 0x46138c: 0x8fa20738  lw          $v0, 0x738($sp)
    ctx->pc = 0x46138cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1848)));
label_461390:
    // 0x461390: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_461394:
    if (ctx->pc == 0x461394u) {
        ctx->pc = 0x461398u;
        goto label_461398;
    }
    ctx->pc = 0x461390u;
    {
        const bool branch_taken_0x461390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x461390) {
            ctx->pc = 0x46140Cu;
            goto label_46140c;
        }
    }
    ctx->pc = 0x461398u;
label_461398:
    // 0x461398: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x461398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_46139c:
    // 0x46139c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x46139cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4613a0:
    // 0x4613a0: 0x8fa60734  lw          $a2, 0x734($sp)
    ctx->pc = 0x4613a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1844)));
label_4613a4:
    // 0x4613a4: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x4613a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_4613a8:
    // 0x4613a8: 0x24e7ed20  addiu       $a3, $a3, -0x12E0
    ctx->pc = 0x4613a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962464));
label_4613ac:
    // 0x4613ac: 0x24080622  addiu       $t0, $zero, 0x622
    ctx->pc = 0x4613acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1570));
label_4613b0:
    // 0x4613b0: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x4613b0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_4613b4:
    // 0x4613b4: 0x2529f150  addiu       $t1, $t1, -0xEB0
    ctx->pc = 0x4613b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294963536));
label_4613b8:
    // 0x4613b8: 0xc113940  jal         func_44E500
label_4613bc:
    if (ctx->pc == 0x4613BCu) {
        ctx->pc = 0x4613C0u;
        goto label_4613c0;
    }
    ctx->pc = 0x4613B8u;
    SET_GPR_U32(ctx, 31, 0x4613C0u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x4613B8u, 0x4613C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4613C0u;
label_4613c0:
    // 0x4613c0: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x4613c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_4613c4:
    // 0x4613c4: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x4613c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_4613c8:
    // 0x4613c8: 0x24a5efb0  addiu       $a1, $a1, -0x1050
    ctx->pc = 0x4613c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963120));
label_4613cc:
    // 0x4613cc: 0xc115c24  jal         func_457090
label_4613d0:
    if (ctx->pc == 0x4613D0u) {
        ctx->pc = 0x4613D4u;
        goto label_4613d4;
    }
    ctx->pc = 0x4613CCu;
    SET_GPR_U32(ctx, 31, 0x4613D4u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4613CCu, 0x4613D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4613D4u;
label_4613d4:
    // 0x4613d4: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x4613d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_4613d8:
    // 0x4613d8: 0x8fa20738  lw          $v0, 0x738($sp)
    ctx->pc = 0x4613d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1848)));
label_4613dc:
    // 0x4613dc: 0x40f809  jalr        $v0
label_4613e0:
    if (ctx->pc == 0x4613E0u) {
        ctx->pc = 0x4613E4u;
        goto label_4613e4;
    }
    ctx->pc = 0x4613DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4613E4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4613DCu, 0x4613E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4613E4u;
label_4613e4:
    // 0x4613e4: 0xaf82b214  sw          $v0, -0x4DEC($gp)
    ctx->pc = 0x4613e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947348), GPR_U32(ctx, 2));
label_4613e8:
    // 0x4613e8: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x4613e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_4613ec:
    // 0x4613ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4613f0:
    if (ctx->pc == 0x4613F0u) {
        ctx->pc = 0x4613F4u;
        goto label_4613f4;
    }
    ctx->pc = 0x4613ECu;
    {
        const bool branch_taken_0x4613ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4613ec) {
            ctx->pc = 0x4613FCu;
            goto label_4613fc;
        }
    }
    ctx->pc = 0x4613F4u;
label_4613f4:
    // 0x4613f4: 0xd  break       0
    ctx->pc = 0x4613f4u;
    runtime->handleBreak(rdram, ctx);
label_4613f8:
    // 0x4613f8: 0x0  nop
    ctx->pc = 0x4613f8u;
    // NOP
label_4613fc:
    // 0x4613fc: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x4613fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_461400:
    // 0x461400: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x461400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_461404:
    // 0x461404: 0xc11392c  jal         func_44E4B0
label_461408:
    if (ctx->pc == 0x461408u) {
        ctx->pc = 0x46140Cu;
        goto label_46140c;
    }
    ctx->pc = 0x461404u;
    SET_GPR_U32(ctx, 31, 0x46140Cu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x461404u, 0x46140Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46140Cu;
label_46140c:
    // 0x46140c: 0x8fa20790  lw          $v0, 0x790($sp)
    ctx->pc = 0x46140cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1936)));
label_461410:
    // 0x461410: 0x441000a  bgez        $v0, . + 4 + (0xA << 2)
label_461414:
    if (ctx->pc == 0x461414u) {
        ctx->pc = 0x461418u;
        goto label_461418;
    }
    ctx->pc = 0x461410u;
    {
        const bool branch_taken_0x461410 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x461410) {
            ctx->pc = 0x46143Cu;
            goto label_46143c;
        }
    }
    ctx->pc = 0x461418u;
label_461418:
    // 0x461418: 0x8fa20790  lw          $v0, 0x790($sp)
    ctx->pc = 0x461418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1936)));
label_46141c:
    // 0x46141c: 0xaf82bfb4  sw          $v0, -0x404C($gp)
    ctx->pc = 0x46141cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950836), GPR_U32(ctx, 2));
label_461420:
    // 0x461420: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x461420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_461424:
    // 0x461424: 0x8f85bfb4  lw          $a1, -0x404C($gp)
    ctx->pc = 0x461424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950836)));
label_461428:
    // 0x461428: 0xc1181ac  jal         func_4606B0
label_46142c:
    if (ctx->pc == 0x46142Cu) {
        ctx->pc = 0x461430u;
        goto label_461430;
    }
    ctx->pc = 0x461428u;
    SET_GPR_U32(ctx, 31, 0x461430u);
    ctx->pc = 0x4606B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4606B0u, 0x461428u, 0x461430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461430u;
label_461430:
    // 0x461430: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x461430u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_461434:
    // 0x461434: 0x10000048  b           . + 4 + (0x48 << 2)
label_461438:
    if (ctx->pc == 0x461438u) {
        ctx->pc = 0x46143Cu;
        goto label_46143c;
    }
    ctx->pc = 0x461434u;
    {
        const bool branch_taken_0x461434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x461434) {
            ctx->pc = 0x461558u;
            goto label_461558;
        }
    }
    ctx->pc = 0x46143Cu;
label_46143c:
    // 0x46143c: 0x8fb00790  lw          $s0, 0x790($sp)
    ctx->pc = 0x46143cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1936)));
label_461440:
    // 0x461440: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x461440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_461444:
    // 0x461444: 0x8c424e20  lw          $v0, 0x4E20($v0)
    ctx->pc = 0x461444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20000)));
label_461448:
    // 0x461448: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x461448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46144c:
    // 0x46144c: 0x8fa20790  lw          $v0, 0x790($sp)
    ctx->pc = 0x46144cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1936)));
label_461450:
    // 0x461450: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x461450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_461454:
    // 0x461454: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x461454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_461458:
    // 0x461458: 0x8c424e20  lw          $v0, 0x4E20($v0)
    ctx->pc = 0x461458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20000)));
label_46145c:
    // 0x46145c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x46145cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_461460:
    // 0x461460: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x461460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_461464:
    // 0x461464: 0x8c424e20  lw          $v0, 0x4E20($v0)
    ctx->pc = 0x461464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20000)));
label_461468:
    // 0x461468: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x461468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46146c:
    // 0x46146c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x46146cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_461470:
    // 0x461470: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x461470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_461474:
    // 0x461474: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x461474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_461478:
    // 0x461478: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_46147c:
    if (ctx->pc == 0x46147Cu) {
        ctx->pc = 0x461480u;
        goto label_461480;
    }
    ctx->pc = 0x461478u;
    {
        const bool branch_taken_0x461478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x461478) {
            ctx->pc = 0x461528u;
            goto label_461528;
        }
    }
    ctx->pc = 0x461480u;
label_461480:
    // 0x461480: 0x8f82b218  lw          $v0, -0x4DE8($gp)
    ctx->pc = 0x461480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947352)));
label_461484:
    // 0x461484: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_461488:
    if (ctx->pc == 0x461488u) {
        ctx->pc = 0x46148Cu;
        goto label_46148c;
    }
    ctx->pc = 0x461484u;
    {
        const bool branch_taken_0x461484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x461484) {
            ctx->pc = 0x461528u;
            goto label_461528;
        }
    }
    ctx->pc = 0x46148Cu;
label_46148c:
    // 0x46148c: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x46148cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_461490:
    // 0x461490: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x461490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_461494:
    // 0x461494: 0x27a60720  addiu       $a2, $sp, 0x720
    ctx->pc = 0x461494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1824));
label_461498:
    // 0x461498: 0xc115ee8  jal         func_457BA0
label_46149c:
    if (ctx->pc == 0x46149Cu) {
        ctx->pc = 0x4614A0u;
        goto label_4614a0;
    }
    ctx->pc = 0x461498u;
    SET_GPR_U32(ctx, 31, 0x4614A0u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x461498u, 0x4614A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4614A0u;
label_4614a0:
    // 0x4614a0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_4614a4:
    if (ctx->pc == 0x4614A4u) {
        ctx->pc = 0x4614A8u;
        goto label_4614a8;
    }
    ctx->pc = 0x4614A0u;
    {
        const bool branch_taken_0x4614a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4614a0) {
            ctx->pc = 0x461528u;
            goto label_461528;
        }
    }
    ctx->pc = 0x4614A8u;
label_4614a8:
    // 0x4614a8: 0x8fa20728  lw          $v0, 0x728($sp)
    ctx->pc = 0x4614a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1832)));
label_4614ac:
    // 0x4614ac: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_4614b0:
    if (ctx->pc == 0x4614B0u) {
        ctx->pc = 0x4614B4u;
        goto label_4614b4;
    }
    ctx->pc = 0x4614ACu;
    {
        const bool branch_taken_0x4614ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4614ac) {
            ctx->pc = 0x461528u;
            goto label_461528;
        }
    }
    ctx->pc = 0x4614B4u;
label_4614b4:
    // 0x4614b4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x4614b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4614b8:
    // 0x4614b8: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4614b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4614bc:
    // 0x4614bc: 0x8fa60724  lw          $a2, 0x724($sp)
    ctx->pc = 0x4614bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1828)));
label_4614c0:
    // 0x4614c0: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x4614c0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_4614c4:
    // 0x4614c4: 0x24e7ed20  addiu       $a3, $a3, -0x12E0
    ctx->pc = 0x4614c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962464));
label_4614c8:
    // 0x4614c8: 0x2408062e  addiu       $t0, $zero, 0x62E
    ctx->pc = 0x4614c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1582));
label_4614cc:
    // 0x4614cc: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x4614ccu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_4614d0:
    // 0x4614d0: 0x2529f170  addiu       $t1, $t1, -0xE90
    ctx->pc = 0x4614d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294963568));
label_4614d4:
    // 0x4614d4: 0xc113940  jal         func_44E500
label_4614d8:
    if (ctx->pc == 0x4614D8u) {
        ctx->pc = 0x4614DCu;
        goto label_4614dc;
    }
    ctx->pc = 0x4614D4u;
    SET_GPR_U32(ctx, 31, 0x4614DCu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x4614D4u, 0x4614DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4614DCu;
label_4614dc:
    // 0x4614dc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x4614dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4614e0:
    // 0x4614e0: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x4614e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_4614e4:
    // 0x4614e4: 0x24a5f190  addiu       $a1, $a1, -0xE70
    ctx->pc = 0x4614e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963600));
label_4614e8:
    // 0x4614e8: 0xc115c24  jal         func_457090
label_4614ec:
    if (ctx->pc == 0x4614ECu) {
        ctx->pc = 0x4614F0u;
        goto label_4614f0;
    }
    ctx->pc = 0x4614E8u;
    SET_GPR_U32(ctx, 31, 0x4614F0u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4614E8u, 0x4614F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4614F0u;
label_4614f0:
    // 0x4614f0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x4614f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4614f4:
    // 0x4614f4: 0x8fa20728  lw          $v0, 0x728($sp)
    ctx->pc = 0x4614f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1832)));
label_4614f8:
    // 0x4614f8: 0x40f809  jalr        $v0
label_4614fc:
    if (ctx->pc == 0x4614FCu) {
        ctx->pc = 0x461500u;
        goto label_461500;
    }
    ctx->pc = 0x4614F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x461500u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4614F8u, 0x461500u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x461500u;
label_461500:
    // 0x461500: 0xaf82b218  sw          $v0, -0x4DE8($gp)
    ctx->pc = 0x461500u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947352), GPR_U32(ctx, 2));
label_461504:
    // 0x461504: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x461504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_461508:
    // 0x461508: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_46150c:
    if (ctx->pc == 0x46150Cu) {
        ctx->pc = 0x461510u;
        goto label_461510;
    }
    ctx->pc = 0x461508u;
    {
        const bool branch_taken_0x461508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x461508) {
            ctx->pc = 0x461518u;
            goto label_461518;
        }
    }
    ctx->pc = 0x461510u;
label_461510:
    // 0x461510: 0xd  break       0
    ctx->pc = 0x461510u;
    runtime->handleBreak(rdram, ctx);
label_461514:
    // 0x461514: 0x0  nop
    ctx->pc = 0x461514u;
    // NOP
label_461518:
    // 0x461518: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x461518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_46151c:
    // 0x46151c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46151cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_461520:
    // 0x461520: 0xc11392c  jal         func_44E4B0
label_461524:
    if (ctx->pc == 0x461524u) {
        ctx->pc = 0x461528u;
        goto label_461528;
    }
    ctx->pc = 0x461520u;
    SET_GPR_U32(ctx, 31, 0x461528u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x461520u, 0x461528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461528u;
label_461528:
    // 0x461528: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x461528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_46152c:
    // 0x46152c: 0x8c424e20  lw          $v0, 0x4E20($v0)
    ctx->pc = 0x46152cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20000)));
label_461530:
    // 0x461530: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x461530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_461534:
    // 0x461534: 0x2443fffe  addiu       $v1, $v0, -0x2
    ctx->pc = 0x461534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_461538:
    // 0x461538: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x461538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_46153c:
    // 0x46153c: 0x8c424e20  lw          $v0, 0x4E20($v0)
    ctx->pc = 0x46153cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20000)));
label_461540:
    // 0x461540: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x461540u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_461544:
    // 0x461544: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x461544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_461548:
    // 0x461548: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x461548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46154c:
    // 0x46154c: 0xc1181ac  jal         func_4606B0
label_461550:
    if (ctx->pc == 0x461550u) {
        ctx->pc = 0x461554u;
        goto label_461554;
    }
    ctx->pc = 0x46154Cu;
    SET_GPR_U32(ctx, 31, 0x461554u);
    ctx->pc = 0x4606B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4606B0u, 0x46154Cu, 0x461554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461554u;
label_461554:
    // 0x461554: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x461554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_461558:
    // 0x461558: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x461558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_46155c:
    // 0x46155c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x46155cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_461560:
    // 0x461560: 0x27bd07b0  addiu       $sp, $sp, 0x7B0
    ctx->pc = 0x461560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1968));
label_461564:
    // 0x461564: 0x3e00008  jr          $ra
label_461568:
    if (ctx->pc == 0x461568u) {
        ctx->pc = 0x46156Cu;
        goto label_46156c;
    }
    ctx->pc = 0x461564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x461564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46156Cu;
label_46156c:
    // 0x46156c: 0x0  nop
    ctx->pc = 0x46156cu;
    // NOP
    ctx->pc = 0x461570u;
}
