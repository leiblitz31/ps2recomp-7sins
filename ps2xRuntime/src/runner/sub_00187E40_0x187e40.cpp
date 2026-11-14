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

// Function: sub_00187E40
// Address: 0x187e40 - 0x188450
void sub_00187E40_0x187e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187E40_0x187e40");
#endif

    switch (ctx->pc) {
        case 0x187e40u: goto label_187e40;
        case 0x187e44u: goto label_187e44;
        case 0x187e48u: goto label_187e48;
        case 0x187e4cu: goto label_187e4c;
        case 0x187e50u: goto label_187e50;
        case 0x187e54u: goto label_187e54;
        case 0x187e58u: goto label_187e58;
        case 0x187e5cu: goto label_187e5c;
        case 0x187e60u: goto label_187e60;
        case 0x187e64u: goto label_187e64;
        case 0x187e68u: goto label_187e68;
        case 0x187e6cu: goto label_187e6c;
        case 0x187e70u: goto label_187e70;
        case 0x187e74u: goto label_187e74;
        case 0x187e78u: goto label_187e78;
        case 0x187e7cu: goto label_187e7c;
        case 0x187e80u: goto label_187e80;
        case 0x187e84u: goto label_187e84;
        case 0x187e88u: goto label_187e88;
        case 0x187e8cu: goto label_187e8c;
        case 0x187e90u: goto label_187e90;
        case 0x187e94u: goto label_187e94;
        case 0x187e98u: goto label_187e98;
        case 0x187e9cu: goto label_187e9c;
        case 0x187ea0u: goto label_187ea0;
        case 0x187ea4u: goto label_187ea4;
        case 0x187ea8u: goto label_187ea8;
        case 0x187eacu: goto label_187eac;
        case 0x187eb0u: goto label_187eb0;
        case 0x187eb4u: goto label_187eb4;
        case 0x187eb8u: goto label_187eb8;
        case 0x187ebcu: goto label_187ebc;
        case 0x187ec0u: goto label_187ec0;
        case 0x187ec4u: goto label_187ec4;
        case 0x187ec8u: goto label_187ec8;
        case 0x187eccu: goto label_187ecc;
        case 0x187ed0u: goto label_187ed0;
        case 0x187ed4u: goto label_187ed4;
        case 0x187ed8u: goto label_187ed8;
        case 0x187edcu: goto label_187edc;
        case 0x187ee0u: goto label_187ee0;
        case 0x187ee4u: goto label_187ee4;
        case 0x187ee8u: goto label_187ee8;
        case 0x187eecu: goto label_187eec;
        case 0x187ef0u: goto label_187ef0;
        case 0x187ef4u: goto label_187ef4;
        case 0x187ef8u: goto label_187ef8;
        case 0x187efcu: goto label_187efc;
        case 0x187f00u: goto label_187f00;
        case 0x187f04u: goto label_187f04;
        case 0x187f08u: goto label_187f08;
        case 0x187f0cu: goto label_187f0c;
        case 0x187f10u: goto label_187f10;
        case 0x187f14u: goto label_187f14;
        case 0x187f18u: goto label_187f18;
        case 0x187f1cu: goto label_187f1c;
        case 0x187f20u: goto label_187f20;
        case 0x187f24u: goto label_187f24;
        case 0x187f28u: goto label_187f28;
        case 0x187f2cu: goto label_187f2c;
        case 0x187f30u: goto label_187f30;
        case 0x187f34u: goto label_187f34;
        case 0x187f38u: goto label_187f38;
        case 0x187f3cu: goto label_187f3c;
        case 0x187f40u: goto label_187f40;
        case 0x187f44u: goto label_187f44;
        case 0x187f48u: goto label_187f48;
        case 0x187f4cu: goto label_187f4c;
        case 0x187f50u: goto label_187f50;
        case 0x187f54u: goto label_187f54;
        case 0x187f58u: goto label_187f58;
        case 0x187f5cu: goto label_187f5c;
        case 0x187f60u: goto label_187f60;
        case 0x187f64u: goto label_187f64;
        case 0x187f68u: goto label_187f68;
        case 0x187f6cu: goto label_187f6c;
        case 0x187f70u: goto label_187f70;
        case 0x187f74u: goto label_187f74;
        case 0x187f78u: goto label_187f78;
        case 0x187f7cu: goto label_187f7c;
        case 0x187f80u: goto label_187f80;
        case 0x187f84u: goto label_187f84;
        case 0x187f88u: goto label_187f88;
        case 0x187f8cu: goto label_187f8c;
        case 0x187f90u: goto label_187f90;
        case 0x187f94u: goto label_187f94;
        case 0x187f98u: goto label_187f98;
        case 0x187f9cu: goto label_187f9c;
        case 0x187fa0u: goto label_187fa0;
        case 0x187fa4u: goto label_187fa4;
        case 0x187fa8u: goto label_187fa8;
        case 0x187facu: goto label_187fac;
        case 0x187fb0u: goto label_187fb0;
        case 0x187fb4u: goto label_187fb4;
        case 0x187fb8u: goto label_187fb8;
        case 0x187fbcu: goto label_187fbc;
        case 0x187fc0u: goto label_187fc0;
        case 0x187fc4u: goto label_187fc4;
        case 0x187fc8u: goto label_187fc8;
        case 0x187fccu: goto label_187fcc;
        case 0x187fd0u: goto label_187fd0;
        case 0x187fd4u: goto label_187fd4;
        case 0x187fd8u: goto label_187fd8;
        case 0x187fdcu: goto label_187fdc;
        case 0x187fe0u: goto label_187fe0;
        case 0x187fe4u: goto label_187fe4;
        case 0x187fe8u: goto label_187fe8;
        case 0x187fecu: goto label_187fec;
        case 0x187ff0u: goto label_187ff0;
        case 0x187ff4u: goto label_187ff4;
        case 0x187ff8u: goto label_187ff8;
        case 0x187ffcu: goto label_187ffc;
        case 0x188000u: goto label_188000;
        case 0x188004u: goto label_188004;
        case 0x188008u: goto label_188008;
        case 0x18800cu: goto label_18800c;
        case 0x188010u: goto label_188010;
        case 0x188014u: goto label_188014;
        case 0x188018u: goto label_188018;
        case 0x18801cu: goto label_18801c;
        case 0x188020u: goto label_188020;
        case 0x188024u: goto label_188024;
        case 0x188028u: goto label_188028;
        case 0x18802cu: goto label_18802c;
        case 0x188030u: goto label_188030;
        case 0x188034u: goto label_188034;
        case 0x188038u: goto label_188038;
        case 0x18803cu: goto label_18803c;
        case 0x188040u: goto label_188040;
        case 0x188044u: goto label_188044;
        case 0x188048u: goto label_188048;
        case 0x18804cu: goto label_18804c;
        case 0x188050u: goto label_188050;
        case 0x188054u: goto label_188054;
        case 0x188058u: goto label_188058;
        case 0x18805cu: goto label_18805c;
        case 0x188060u: goto label_188060;
        case 0x188064u: goto label_188064;
        case 0x188068u: goto label_188068;
        case 0x18806cu: goto label_18806c;
        case 0x188070u: goto label_188070;
        case 0x188074u: goto label_188074;
        case 0x188078u: goto label_188078;
        case 0x18807cu: goto label_18807c;
        case 0x188080u: goto label_188080;
        case 0x188084u: goto label_188084;
        case 0x188088u: goto label_188088;
        case 0x18808cu: goto label_18808c;
        case 0x188090u: goto label_188090;
        case 0x188094u: goto label_188094;
        case 0x188098u: goto label_188098;
        case 0x18809cu: goto label_18809c;
        case 0x1880a0u: goto label_1880a0;
        case 0x1880a4u: goto label_1880a4;
        case 0x1880a8u: goto label_1880a8;
        case 0x1880acu: goto label_1880ac;
        case 0x1880b0u: goto label_1880b0;
        case 0x1880b4u: goto label_1880b4;
        case 0x1880b8u: goto label_1880b8;
        case 0x1880bcu: goto label_1880bc;
        case 0x1880c0u: goto label_1880c0;
        case 0x1880c4u: goto label_1880c4;
        case 0x1880c8u: goto label_1880c8;
        case 0x1880ccu: goto label_1880cc;
        case 0x1880d0u: goto label_1880d0;
        case 0x1880d4u: goto label_1880d4;
        case 0x1880d8u: goto label_1880d8;
        case 0x1880dcu: goto label_1880dc;
        case 0x1880e0u: goto label_1880e0;
        case 0x1880e4u: goto label_1880e4;
        case 0x1880e8u: goto label_1880e8;
        case 0x1880ecu: goto label_1880ec;
        case 0x1880f0u: goto label_1880f0;
        case 0x1880f4u: goto label_1880f4;
        case 0x1880f8u: goto label_1880f8;
        case 0x1880fcu: goto label_1880fc;
        case 0x188100u: goto label_188100;
        case 0x188104u: goto label_188104;
        case 0x188108u: goto label_188108;
        case 0x18810cu: goto label_18810c;
        case 0x188110u: goto label_188110;
        case 0x188114u: goto label_188114;
        case 0x188118u: goto label_188118;
        case 0x18811cu: goto label_18811c;
        case 0x188120u: goto label_188120;
        case 0x188124u: goto label_188124;
        case 0x188128u: goto label_188128;
        case 0x18812cu: goto label_18812c;
        case 0x188130u: goto label_188130;
        case 0x188134u: goto label_188134;
        case 0x188138u: goto label_188138;
        case 0x18813cu: goto label_18813c;
        case 0x188140u: goto label_188140;
        case 0x188144u: goto label_188144;
        case 0x188148u: goto label_188148;
        case 0x18814cu: goto label_18814c;
        case 0x188150u: goto label_188150;
        case 0x188154u: goto label_188154;
        case 0x188158u: goto label_188158;
        case 0x18815cu: goto label_18815c;
        case 0x188160u: goto label_188160;
        case 0x188164u: goto label_188164;
        case 0x188168u: goto label_188168;
        case 0x18816cu: goto label_18816c;
        case 0x188170u: goto label_188170;
        case 0x188174u: goto label_188174;
        case 0x188178u: goto label_188178;
        case 0x18817cu: goto label_18817c;
        case 0x188180u: goto label_188180;
        case 0x188184u: goto label_188184;
        case 0x188188u: goto label_188188;
        case 0x18818cu: goto label_18818c;
        case 0x188190u: goto label_188190;
        case 0x188194u: goto label_188194;
        case 0x188198u: goto label_188198;
        case 0x18819cu: goto label_18819c;
        case 0x1881a0u: goto label_1881a0;
        case 0x1881a4u: goto label_1881a4;
        case 0x1881a8u: goto label_1881a8;
        case 0x1881acu: goto label_1881ac;
        case 0x1881b0u: goto label_1881b0;
        case 0x1881b4u: goto label_1881b4;
        case 0x1881b8u: goto label_1881b8;
        case 0x1881bcu: goto label_1881bc;
        case 0x1881c0u: goto label_1881c0;
        case 0x1881c4u: goto label_1881c4;
        case 0x1881c8u: goto label_1881c8;
        case 0x1881ccu: goto label_1881cc;
        case 0x1881d0u: goto label_1881d0;
        case 0x1881d4u: goto label_1881d4;
        case 0x1881d8u: goto label_1881d8;
        case 0x1881dcu: goto label_1881dc;
        case 0x1881e0u: goto label_1881e0;
        case 0x1881e4u: goto label_1881e4;
        case 0x1881e8u: goto label_1881e8;
        case 0x1881ecu: goto label_1881ec;
        case 0x1881f0u: goto label_1881f0;
        case 0x1881f4u: goto label_1881f4;
        case 0x1881f8u: goto label_1881f8;
        case 0x1881fcu: goto label_1881fc;
        case 0x188200u: goto label_188200;
        case 0x188204u: goto label_188204;
        case 0x188208u: goto label_188208;
        case 0x18820cu: goto label_18820c;
        case 0x188210u: goto label_188210;
        case 0x188214u: goto label_188214;
        case 0x188218u: goto label_188218;
        case 0x18821cu: goto label_18821c;
        case 0x188220u: goto label_188220;
        case 0x188224u: goto label_188224;
        case 0x188228u: goto label_188228;
        case 0x18822cu: goto label_18822c;
        case 0x188230u: goto label_188230;
        case 0x188234u: goto label_188234;
        case 0x188238u: goto label_188238;
        case 0x18823cu: goto label_18823c;
        case 0x188240u: goto label_188240;
        case 0x188244u: goto label_188244;
        case 0x188248u: goto label_188248;
        case 0x18824cu: goto label_18824c;
        case 0x188250u: goto label_188250;
        case 0x188254u: goto label_188254;
        case 0x188258u: goto label_188258;
        case 0x18825cu: goto label_18825c;
        case 0x188260u: goto label_188260;
        case 0x188264u: goto label_188264;
        case 0x188268u: goto label_188268;
        case 0x18826cu: goto label_18826c;
        case 0x188270u: goto label_188270;
        case 0x188274u: goto label_188274;
        case 0x188278u: goto label_188278;
        case 0x18827cu: goto label_18827c;
        case 0x188280u: goto label_188280;
        case 0x188284u: goto label_188284;
        case 0x188288u: goto label_188288;
        case 0x18828cu: goto label_18828c;
        case 0x188290u: goto label_188290;
        case 0x188294u: goto label_188294;
        case 0x188298u: goto label_188298;
        case 0x18829cu: goto label_18829c;
        case 0x1882a0u: goto label_1882a0;
        case 0x1882a4u: goto label_1882a4;
        case 0x1882a8u: goto label_1882a8;
        case 0x1882acu: goto label_1882ac;
        case 0x1882b0u: goto label_1882b0;
        case 0x1882b4u: goto label_1882b4;
        case 0x1882b8u: goto label_1882b8;
        case 0x1882bcu: goto label_1882bc;
        case 0x1882c0u: goto label_1882c0;
        case 0x1882c4u: goto label_1882c4;
        case 0x1882c8u: goto label_1882c8;
        case 0x1882ccu: goto label_1882cc;
        case 0x1882d0u: goto label_1882d0;
        case 0x1882d4u: goto label_1882d4;
        case 0x1882d8u: goto label_1882d8;
        case 0x1882dcu: goto label_1882dc;
        case 0x1882e0u: goto label_1882e0;
        case 0x1882e4u: goto label_1882e4;
        case 0x1882e8u: goto label_1882e8;
        case 0x1882ecu: goto label_1882ec;
        case 0x1882f0u: goto label_1882f0;
        case 0x1882f4u: goto label_1882f4;
        case 0x1882f8u: goto label_1882f8;
        case 0x1882fcu: goto label_1882fc;
        case 0x188300u: goto label_188300;
        case 0x188304u: goto label_188304;
        case 0x188308u: goto label_188308;
        case 0x18830cu: goto label_18830c;
        case 0x188310u: goto label_188310;
        case 0x188314u: goto label_188314;
        case 0x188318u: goto label_188318;
        case 0x18831cu: goto label_18831c;
        case 0x188320u: goto label_188320;
        case 0x188324u: goto label_188324;
        case 0x188328u: goto label_188328;
        case 0x18832cu: goto label_18832c;
        case 0x188330u: goto label_188330;
        case 0x188334u: goto label_188334;
        case 0x188338u: goto label_188338;
        case 0x18833cu: goto label_18833c;
        case 0x188340u: goto label_188340;
        case 0x188344u: goto label_188344;
        case 0x188348u: goto label_188348;
        case 0x18834cu: goto label_18834c;
        case 0x188350u: goto label_188350;
        case 0x188354u: goto label_188354;
        case 0x188358u: goto label_188358;
        case 0x18835cu: goto label_18835c;
        case 0x188360u: goto label_188360;
        case 0x188364u: goto label_188364;
        case 0x188368u: goto label_188368;
        case 0x18836cu: goto label_18836c;
        case 0x188370u: goto label_188370;
        case 0x188374u: goto label_188374;
        case 0x188378u: goto label_188378;
        case 0x18837cu: goto label_18837c;
        case 0x188380u: goto label_188380;
        case 0x188384u: goto label_188384;
        case 0x188388u: goto label_188388;
        case 0x18838cu: goto label_18838c;
        case 0x188390u: goto label_188390;
        case 0x188394u: goto label_188394;
        case 0x188398u: goto label_188398;
        case 0x18839cu: goto label_18839c;
        case 0x1883a0u: goto label_1883a0;
        case 0x1883a4u: goto label_1883a4;
        case 0x1883a8u: goto label_1883a8;
        case 0x1883acu: goto label_1883ac;
        case 0x1883b0u: goto label_1883b0;
        case 0x1883b4u: goto label_1883b4;
        case 0x1883b8u: goto label_1883b8;
        case 0x1883bcu: goto label_1883bc;
        case 0x1883c0u: goto label_1883c0;
        case 0x1883c4u: goto label_1883c4;
        case 0x1883c8u: goto label_1883c8;
        case 0x1883ccu: goto label_1883cc;
        case 0x1883d0u: goto label_1883d0;
        case 0x1883d4u: goto label_1883d4;
        case 0x1883d8u: goto label_1883d8;
        case 0x1883dcu: goto label_1883dc;
        case 0x1883e0u: goto label_1883e0;
        case 0x1883e4u: goto label_1883e4;
        case 0x1883e8u: goto label_1883e8;
        case 0x1883ecu: goto label_1883ec;
        case 0x1883f0u: goto label_1883f0;
        case 0x1883f4u: goto label_1883f4;
        case 0x1883f8u: goto label_1883f8;
        case 0x1883fcu: goto label_1883fc;
        case 0x188400u: goto label_188400;
        case 0x188404u: goto label_188404;
        case 0x188408u: goto label_188408;
        case 0x18840cu: goto label_18840c;
        case 0x188410u: goto label_188410;
        case 0x188414u: goto label_188414;
        case 0x188418u: goto label_188418;
        case 0x18841cu: goto label_18841c;
        case 0x188420u: goto label_188420;
        case 0x188424u: goto label_188424;
        case 0x188428u: goto label_188428;
        case 0x18842cu: goto label_18842c;
        case 0x188430u: goto label_188430;
        case 0x188434u: goto label_188434;
        case 0x188438u: goto label_188438;
        case 0x18843cu: goto label_18843c;
        case 0x188440u: goto label_188440;
        case 0x188444u: goto label_188444;
        case 0x188448u: goto label_188448;
        case 0x18844cu: goto label_18844c;
        default: break;
    }

    ctx->pc = 0x187e40u;

label_187e40:
    // 0x187e40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x187e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_187e44:
    // 0x187e44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x187e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_187e48:
    // 0x187e48: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x187e48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_187e4c:
    // 0x187e4c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x187e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_187e50:
    // 0x187e50: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x187e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_187e54:
    // 0x187e54: 0xc0557e8  jal         func_155FA0
label_187e58:
    if (ctx->pc == 0x187E58u) {
        ctx->pc = 0x187E5Cu;
        goto label_187e5c;
    }
    ctx->pc = 0x187E54u;
    SET_GPR_U32(ctx, 31, 0x187E5Cu);
    ctx->pc = 0x155FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155FA0u, 0x187E54u, 0x187E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187E5Cu;
label_187e5c:
    // 0x187e5c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x187e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_187e60:
    // 0x187e60: 0x24633ff0  addiu       $v1, $v1, 0x3FF0
    ctx->pc = 0x187e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16368));
label_187e64:
    // 0x187e64: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x187e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_187e68:
    // 0x187e68: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x187e68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_187e6c:
    // 0x187e6c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x187e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_187e70:
    // 0x187e70: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x187e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_187e74:
    // 0x187e74: 0xac430050  sw          $v1, 0x50($v0)
    ctx->pc = 0x187e74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 3));
label_187e78:
    // 0x187e78: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x187e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_187e7c:
    // 0x187e7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x187e7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_187e80:
    // 0x187e80: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x187e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_187e84:
    // 0x187e84: 0x3e00008  jr          $ra
label_187e88:
    if (ctx->pc == 0x187E88u) {
        ctx->pc = 0x187E8Cu;
        goto label_187e8c;
    }
    ctx->pc = 0x187E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187E84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187E8Cu;
label_187e8c:
    // 0x187e8c: 0x0  nop
    ctx->pc = 0x187e8cu;
    // NOP
label_187e90:
    // 0x187e90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x187e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_187e94:
    // 0x187e94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x187e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_187e98:
    // 0x187e98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x187e98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_187e9c:
    // 0x187e9c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x187e9cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
label_187ea0:
    // 0x187ea0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x187ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_187ea4:
    // 0x187ea4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_187ea8:
    if (ctx->pc == 0x187EA8u) {
        ctx->pc = 0x187EACu;
        goto label_187eac;
    }
    ctx->pc = 0x187EA4u;
    {
        const bool branch_taken_0x187ea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187ea4) {
            ctx->pc = 0x187EECu;
            goto label_187eec;
        }
    }
    ctx->pc = 0x187EACu;
label_187eac:
    // 0x187eac: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x187eacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_187eb0:
    // 0x187eb0: 0x24633ff0  addiu       $v1, $v1, 0x3FF0
    ctx->pc = 0x187eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16368));
label_187eb4:
    // 0x187eb4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x187eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_187eb8:
    // 0x187eb8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x187eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_187ebc:
    // 0x187ebc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x187ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_187ec0:
    // 0x187ec0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x187ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_187ec4:
    // 0x187ec4: 0xc055950  jal         func_156540
label_187ec8:
    if (ctx->pc == 0x187EC8u) {
        ctx->pc = 0x187ECCu;
        goto label_187ecc;
    }
    ctx->pc = 0x187EC4u;
    SET_GPR_U32(ctx, 31, 0x187ECCu);
    ctx->pc = 0x156540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156540u, 0x187EC4u, 0x187ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187ECCu;
label_187ecc:
    // 0x187ecc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x187eccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_187ed0:
    // 0x187ed0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x187ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_187ed4:
    // 0x187ed4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x187ed4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_187ed8:
    // 0x187ed8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_187edc:
    if (ctx->pc == 0x187EDCu) {
        ctx->pc = 0x187EE0u;
        goto label_187ee0;
    }
    ctx->pc = 0x187ED8u;
    {
        const bool branch_taken_0x187ed8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x187ed8) {
            ctx->pc = 0x187EECu;
            goto label_187eec;
        }
    }
    ctx->pc = 0x187EE0u;
label_187ee0:
    // 0x187ee0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x187ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_187ee4:
    // 0x187ee4: 0xc0ba070  jal         func_2E81C0
label_187ee8:
    if (ctx->pc == 0x187EE8u) {
        ctx->pc = 0x187EECu;
        goto label_187eec;
    }
    ctx->pc = 0x187EE4u;
    SET_GPR_U32(ctx, 31, 0x187EECu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x187EE4u, 0x187EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187EECu;
label_187eec:
    // 0x187eec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x187eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_187ef0:
    // 0x187ef0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x187ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_187ef4:
    // 0x187ef4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x187ef4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_187ef8:
    // 0x187ef8: 0x3e00008  jr          $ra
label_187efc:
    if (ctx->pc == 0x187EFCu) {
        ctx->pc = 0x187F00u;
        goto label_187f00;
    }
    ctx->pc = 0x187EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187EF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187F00u;
label_187f00:
    // 0x187f00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x187f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_187f04:
    // 0x187f04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x187f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_187f08:
    // 0x187f08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x187f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_187f0c:
    // 0x187f0c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x187f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_187f10:
    // 0x187f10: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x187f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_187f14:
    // 0x187f14: 0xc055974  jal         func_1565D0
label_187f18:
    if (ctx->pc == 0x187F18u) {
        ctx->pc = 0x187F1Cu;
        goto label_187f1c;
    }
    ctx->pc = 0x187F14u;
    SET_GPR_U32(ctx, 31, 0x187F1Cu);
    ctx->pc = 0x1565D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1565D0u, 0x187F14u, 0x187F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187F1Cu;
label_187f1c:
    // 0x187f1c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x187f1cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_187f20:
    // 0x187f20: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x187f20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_187f24:
    // 0x187f24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x187f24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_187f28:
    // 0x187f28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x187f28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_187f2c:
    // 0x187f2c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x187f2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_187f30:
    // 0x187f30: 0x3e00008  jr          $ra
label_187f34:
    if (ctx->pc == 0x187F34u) {
        ctx->pc = 0x187F38u;
        goto label_187f38;
    }
    ctx->pc = 0x187F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187F30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187F38u;
label_187f38:
    // 0x187f38: 0x0  nop
    ctx->pc = 0x187f38u;
    // NOP
label_187f3c:
    // 0x187f3c: 0x0  nop
    ctx->pc = 0x187f3cu;
    // NOP
label_187f40:
    // 0x187f40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x187f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_187f44:
    // 0x187f44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x187f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_187f48:
    // 0x187f48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x187f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_187f4c:
    // 0x187f4c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x187f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_187f50:
    // 0x187f50: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x187f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_187f54:
    // 0x187f54: 0xc0559ac  jal         func_1566B0
label_187f58:
    if (ctx->pc == 0x187F58u) {
        ctx->pc = 0x187F5Cu;
        goto label_187f5c;
    }
    ctx->pc = 0x187F54u;
    SET_GPR_U32(ctx, 31, 0x187F5Cu);
    ctx->pc = 0x1566B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1566B0u, 0x187F54u, 0x187F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187F5Cu;
label_187f5c:
    // 0x187f5c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x187f5cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_187f60:
    // 0x187f60: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x187f60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_187f64:
    // 0x187f64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x187f64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_187f68:
    // 0x187f68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x187f68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_187f6c:
    // 0x187f6c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x187f6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_187f70:
    // 0x187f70: 0x3e00008  jr          $ra
label_187f74:
    if (ctx->pc == 0x187F74u) {
        ctx->pc = 0x187F78u;
        goto label_187f78;
    }
    ctx->pc = 0x187F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187F70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187F78u;
label_187f78:
    // 0x187f78: 0x0  nop
    ctx->pc = 0x187f78u;
    // NOP
label_187f7c:
    // 0x187f7c: 0x0  nop
    ctx->pc = 0x187f7cu;
    // NOP
label_187f80:
    // 0x187f80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x187f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_187f84:
    // 0x187f84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x187f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_187f88:
    // 0x187f88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x187f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_187f8c:
    // 0x187f8c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x187f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_187f90:
    // 0x187f90: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x187f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_187f94:
    // 0x187f94: 0xc0559dc  jal         func_156770
label_187f98:
    if (ctx->pc == 0x187F98u) {
        ctx->pc = 0x187F9Cu;
        goto label_187f9c;
    }
    ctx->pc = 0x187F94u;
    SET_GPR_U32(ctx, 31, 0x187F9Cu);
    ctx->pc = 0x156770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156770u, 0x187F94u, 0x187F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187F9Cu;
label_187f9c:
    // 0x187f9c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x187f9cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_187fa0:
    // 0x187fa0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x187fa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_187fa4:
    // 0x187fa4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x187fa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_187fa8:
    // 0x187fa8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x187fa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_187fac:
    // 0x187fac: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x187facu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_187fb0:
    // 0x187fb0: 0x3e00008  jr          $ra
label_187fb4:
    if (ctx->pc == 0x187FB4u) {
        ctx->pc = 0x187FB8u;
        goto label_187fb8;
    }
    ctx->pc = 0x187FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187FB8u;
label_187fb8:
    // 0x187fb8: 0x0  nop
    ctx->pc = 0x187fb8u;
    // NOP
label_187fbc:
    // 0x187fbc: 0x0  nop
    ctx->pc = 0x187fbcu;
    // NOP
label_187fc0:
    // 0x187fc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x187fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_187fc4:
    // 0x187fc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x187fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_187fc8:
    // 0x187fc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x187fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_187fcc:
    // 0x187fcc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x187fccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_187fd0:
    // 0x187fd0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x187fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_187fd4:
    // 0x187fd4: 0xc0559ec  jal         func_1567B0
label_187fd8:
    if (ctx->pc == 0x187FD8u) {
        ctx->pc = 0x187FDCu;
        goto label_187fdc;
    }
    ctx->pc = 0x187FD4u;
    SET_GPR_U32(ctx, 31, 0x187FDCu);
    ctx->pc = 0x1567B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1567B0u, 0x187FD4u, 0x187FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187FDCu;
label_187fdc:
    // 0x187fdc: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x187fdcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_187fe0:
    // 0x187fe0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x187fe0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_187fe4:
    // 0x187fe4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x187fe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_187fe8:
    // 0x187fe8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x187fe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_187fec:
    // 0x187fec: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x187fecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_187ff0:
    // 0x187ff0: 0x3e00008  jr          $ra
label_187ff4:
    if (ctx->pc == 0x187FF4u) {
        ctx->pc = 0x187FF8u;
        goto label_187ff8;
    }
    ctx->pc = 0x187FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187FF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187FF8u;
label_187ff8:
    // 0x187ff8: 0x0  nop
    ctx->pc = 0x187ff8u;
    // NOP
label_187ffc:
    // 0x187ffc: 0x0  nop
    ctx->pc = 0x187ffcu;
    // NOP
label_188000:
    // 0x188000: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x188000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_188004:
    // 0x188004: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x188004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_188008:
    // 0x188008: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x188008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_18800c:
    // 0x18800c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x18800cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_188010:
    // 0x188010: 0xa3a50030  sb          $a1, 0x30($sp)
    ctx->pc = 0x188010u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 5));
label_188014:
    // 0x188014: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x188014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_188018:
    // 0x188018: 0x93a50030  lbu         $a1, 0x30($sp)
    ctx->pc = 0x188018u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
label_18801c:
    // 0x18801c: 0xc055a78  jal         func_1569E0
label_188020:
    if (ctx->pc == 0x188020u) {
        ctx->pc = 0x188024u;
        goto label_188024;
    }
    ctx->pc = 0x18801Cu;
    SET_GPR_U32(ctx, 31, 0x188024u);
    ctx->pc = 0x1569E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1569E0u, 0x18801Cu, 0x188024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188024u;
label_188024:
    // 0x188024: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x188024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_188028:
    // 0x188028: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x188028u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18802c:
    // 0x18802c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x18802cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_188030:
    // 0x188030: 0x320f809  jalr        $t9
label_188034:
    if (ctx->pc == 0x188034u) {
        ctx->pc = 0x188038u;
        goto label_188038;
    }
    ctx->pc = 0x188030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x188038u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188030u, 0x188038u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x188038u;
label_188038:
    // 0x188038: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x188038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_18803c:
    // 0x18803c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x18803cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_188040:
    // 0x188040: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x188040u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_188044:
    // 0x188044: 0x320f809  jalr        $t9
label_188048:
    if (ctx->pc == 0x188048u) {
        ctx->pc = 0x18804Cu;
        goto label_18804c;
    }
    ctx->pc = 0x188044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x18804Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188044u, 0x18804Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18804Cu;
label_18804c:
    // 0x18804c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x18804cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_188050:
    // 0x188050: 0x8c640050  lw          $a0, 0x50($v1)
    ctx->pc = 0x188050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
label_188054:
    // 0x188054: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x188054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_188058:
    // 0x188058: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
label_18805c:
    if (ctx->pc == 0x18805Cu) {
        ctx->pc = 0x188060u;
        goto label_188060;
    }
    ctx->pc = 0x188058u;
    {
        const bool branch_taken_0x188058 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x188058) {
            ctx->pc = 0x1880C0u;
            goto label_1880c0;
        }
    }
    ctx->pc = 0x188060u;
label_188060:
    // 0x188060: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x188060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_188064:
    // 0x188064: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_188068:
    if (ctx->pc == 0x188068u) {
        ctx->pc = 0x18806Cu;
        goto label_18806c;
    }
    ctx->pc = 0x188064u;
    {
        const bool branch_taken_0x188064 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x188064) {
            ctx->pc = 0x188074u;
            goto label_188074;
        }
    }
    ctx->pc = 0x18806Cu;
label_18806c:
    // 0x18806c: 0x10000054  b           . + 4 + (0x54 << 2)
label_188070:
    if (ctx->pc == 0x188070u) {
        ctx->pc = 0x188074u;
        goto label_188074;
    }
    ctx->pc = 0x18806Cu;
    {
        const bool branch_taken_0x18806c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18806c) {
            ctx->pc = 0x1881C0u;
            goto label_1881c0;
        }
    }
    ctx->pc = 0x188074u;
label_188074:
    // 0x188074: 0x93a30030  lbu         $v1, 0x30($sp)
    ctx->pc = 0x188074u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
label_188078:
    // 0x188078: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x188078u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_18807c:
    // 0x18807c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18807cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_188080:
    // 0x188080: 0x1483004f  bne         $a0, $v1, . + 4 + (0x4F << 2)
label_188084:
    if (ctx->pc == 0x188084u) {
        ctx->pc = 0x188088u;
        goto label_188088;
    }
    ctx->pc = 0x188080u;
    {
        const bool branch_taken_0x188080 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x188080) {
            ctx->pc = 0x1881C0u;
            goto label_1881c0;
        }
    }
    ctx->pc = 0x188088u;
label_188088:
    // 0x188088: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x188088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_18808c:
    // 0x18808c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x18808cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_188090:
    // 0x188090: 0x24a55190  addiu       $a1, $a1, 0x5190
    ctx->pc = 0x188090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20880));
label_188094:
    // 0x188094: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x188094u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_188098:
    // 0x188098: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x188098u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_18809c:
    // 0x18809c: 0x320f809  jalr        $t9
label_1880a0:
    if (ctx->pc == 0x1880A0u) {
        ctx->pc = 0x1880A4u;
        goto label_1880a4;
    }
    ctx->pc = 0x18809Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1880A4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18809Cu, 0x1880A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1880A4u;
label_1880a4:
    // 0x1880a4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1880a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1880a8:
    // 0x1880a8: 0xc062114  jal         func_188450
label_1880ac:
    if (ctx->pc == 0x1880ACu) {
        ctx->pc = 0x1880B0u;
        goto label_1880b0;
    }
    ctx->pc = 0x1880A8u;
    SET_GPR_U32(ctx, 31, 0x1880B0u);
    ctx->pc = 0x188450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188450u, 0x1880A8u, 0x1880B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1880B0u;
label_1880b0:
    // 0x1880b0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1880b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1880b4:
    // 0x1880b4: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x1880b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
label_1880b8:
    // 0x1880b8: 0x10000041  b           . + 4 + (0x41 << 2)
label_1880bc:
    if (ctx->pc == 0x1880BCu) {
        ctx->pc = 0x1880C0u;
        goto label_1880c0;
    }
    ctx->pc = 0x1880B8u;
    {
        const bool branch_taken_0x1880b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1880b8) {
            ctx->pc = 0x1881C0u;
            goto label_1881c0;
        }
    }
    ctx->pc = 0x1880C0u;
label_1880c0:
    // 0x1880c0: 0x93a30030  lbu         $v1, 0x30($sp)
    ctx->pc = 0x1880c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
label_1880c4:
    // 0x1880c4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1880c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1880c8:
    // 0x1880c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1880c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1880cc:
    // 0x1880cc: 0x1483003c  bne         $a0, $v1, . + 4 + (0x3C << 2)
label_1880d0:
    if (ctx->pc == 0x1880D0u) {
        ctx->pc = 0x1880D4u;
        goto label_1880d4;
    }
    ctx->pc = 0x1880CCu;
    {
        const bool branch_taken_0x1880cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1880cc) {
            ctx->pc = 0x1881C0u;
            goto label_1881c0;
        }
    }
    ctx->pc = 0x1880D4u;
label_1880d4:
    // 0x1880d4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1880d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1880d8:
    // 0x1880d8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1880d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1880dc:
    // 0x1880dc: 0x24a551b0  addiu       $a1, $a1, 0x51B0
    ctx->pc = 0x1880dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20912));
label_1880e0:
    // 0x1880e0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1880e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1880e4:
    // 0x1880e4: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x1880e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_1880e8:
    // 0x1880e8: 0x320f809  jalr        $t9
label_1880ec:
    if (ctx->pc == 0x1880ECu) {
        ctx->pc = 0x1880F0u;
        goto label_1880f0;
    }
    ctx->pc = 0x1880E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1880F0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1880E8u, 0x1880F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1880F0u;
label_1880f0:
    // 0x1880f0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1880f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1880f4:
    // 0x1880f4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1880f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1880f8:
    // 0x1880f8: 0x24a551d0  addiu       $a1, $a1, 0x51D0
    ctx->pc = 0x1880f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20944));
label_1880fc:
    // 0x1880fc: 0xc05621c  jal         func_158870
label_188100:
    if (ctx->pc == 0x188100u) {
        ctx->pc = 0x188104u;
        goto label_188104;
    }
    ctx->pc = 0x1880FCu;
    SET_GPR_U32(ctx, 31, 0x188104u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x1880FCu, 0x188104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188104u;
label_188104:
    // 0x188104: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x188104u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_188108:
    // 0x188108: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
label_18810c:
    if (ctx->pc == 0x18810Cu) {
        ctx->pc = 0x188110u;
        goto label_188110;
    }
    ctx->pc = 0x188108u;
    {
        const bool branch_taken_0x188108 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x188108) {
            ctx->pc = 0x1881C0u;
            goto label_1881c0;
        }
    }
    ctx->pc = 0x188110u;
label_188110:
    // 0x188110: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x188110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_188114:
    // 0x188114: 0x90420028  lbu         $v0, 0x28($v0)
    ctx->pc = 0x188114u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
label_188118:
    // 0x188118: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_18811c:
    if (ctx->pc == 0x18811Cu) {
        ctx->pc = 0x188120u;
        goto label_188120;
    }
    ctx->pc = 0x188118u;
    {
        const bool branch_taken_0x188118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x188118) {
            ctx->pc = 0x18813Cu;
            goto label_18813c;
        }
    }
    ctx->pc = 0x188120u;
label_188120:
    // 0x188120: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x188120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_188124:
    // 0x188124: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x188124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_188128:
    // 0x188128: 0xc08d95c  jal         func_236570
label_18812c:
    if (ctx->pc == 0x18812Cu) {
        ctx->pc = 0x188130u;
        goto label_188130;
    }
    ctx->pc = 0x188128u;
    SET_GPR_U32(ctx, 31, 0x188130u);
    ctx->pc = 0x236570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236570u, 0x188128u, 0x188130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188130u;
label_188130:
    // 0x188130: 0x28410000  slti        $at, $v0, 0x0
    ctx->pc = 0x188130u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_188134:
    // 0x188134: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
label_188138:
    if (ctx->pc == 0x188138u) {
        ctx->pc = 0x18813Cu;
        goto label_18813c;
    }
    ctx->pc = 0x188134u;
    {
        const bool branch_taken_0x188134 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x188134) {
            ctx->pc = 0x18816Cu;
            goto label_18816c;
        }
    }
    ctx->pc = 0x18813Cu;
label_18813c:
    // 0x18813c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x18813cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_188140:
    // 0x188140: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x188140u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_188144:
    // 0x188144: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x188144u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_188148:
    // 0x188148: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x188148u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_18814c:
    // 0x18814c: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x18814cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_188150:
    // 0x188150: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x188150u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_188154:
    // 0x188154: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x188154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_188158:
    // 0x188158: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x188158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18815c:
    // 0x18815c: 0xc08c4d0  jal         func_231340
label_188160:
    if (ctx->pc == 0x188160u) {
        ctx->pc = 0x188164u;
        goto label_188164;
    }
    ctx->pc = 0x18815Cu;
    SET_GPR_U32(ctx, 31, 0x188164u);
    ctx->pc = 0x231340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231340u, 0x18815Cu, 0x188164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188164u;
label_188164:
    // 0x188164: 0x10000016  b           . + 4 + (0x16 << 2)
label_188168:
    if (ctx->pc == 0x188168u) {
        ctx->pc = 0x18816Cu;
        goto label_18816c;
    }
    ctx->pc = 0x188164u;
    {
        const bool branch_taken_0x188164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188164) {
            ctx->pc = 0x1881C0u;
            goto label_1881c0;
        }
    }
    ctx->pc = 0x18816Cu;
label_18816c:
    // 0x18816c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x18816cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_188170:
    // 0x188170: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x188170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_188174:
    // 0x188174: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x188174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_188178:
    // 0x188178: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x188178u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
label_18817c:
    // 0x18817c: 0x24c651e0  addiu       $a2, $a2, 0x51E0
    ctx->pc = 0x18817cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20960));
label_188180:
    // 0x188180: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x188180u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_188184:
    // 0x188184: 0xc08c800  jal         func_232000
label_188188:
    if (ctx->pc == 0x188188u) {
        ctx->pc = 0x18818Cu;
        goto label_18818c;
    }
    ctx->pc = 0x188184u;
    SET_GPR_U32(ctx, 31, 0x18818Cu);
    ctx->pc = 0x232000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232000u, 0x188184u, 0x18818Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18818Cu;
label_18818c:
    // 0x18818c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x18818cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_188190:
    // 0x188190: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x188190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_188194:
    // 0x188194: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x188194u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_188198:
    // 0x188198: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x188198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_18819c:
    // 0x18819c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x18819cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1881a0:
    // 0x1881a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1881a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1881a4:
    // 0x1881a4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1881a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1881a8:
    // 0x1881a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1881a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1881ac:
    // 0x1881ac: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1881acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_1881b0:
    // 0x1881b0: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x1881b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1881b4:
    // 0x1881b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1881b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1881b8:
    // 0x1881b8: 0xc08c4d0  jal         func_231340
label_1881bc:
    if (ctx->pc == 0x1881BCu) {
        ctx->pc = 0x1881C0u;
        goto label_1881c0;
    }
    ctx->pc = 0x1881B8u;
    SET_GPR_U32(ctx, 31, 0x1881C0u);
    ctx->pc = 0x231340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231340u, 0x1881B8u, 0x1881C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1881C0u;
label_1881c0:
    // 0x1881c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1881c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1881c4:
    // 0x1881c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1881c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1881c8:
    // 0x1881c8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1881c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1881cc:
    // 0x1881cc: 0x3e00008  jr          $ra
label_1881d0:
    if (ctx->pc == 0x1881D0u) {
        ctx->pc = 0x1881D4u;
        goto label_1881d4;
    }
    ctx->pc = 0x1881CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1881CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1881D4u;
label_1881d4:
    // 0x1881d4: 0x0  nop
    ctx->pc = 0x1881d4u;
    // NOP
label_1881d8:
    // 0x1881d8: 0x0  nop
    ctx->pc = 0x1881d8u;
    // NOP
label_1881dc:
    // 0x1881dc: 0x0  nop
    ctx->pc = 0x1881dcu;
    // NOP
label_1881e0:
    // 0x1881e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1881e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1881e4:
    // 0x1881e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1881e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1881e8:
    // 0x1881e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1881e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1881ec:
    // 0x1881ec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1881ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1881f0:
    // 0x1881f0: 0xc055a84  jal         func_156A10
label_1881f4:
    if (ctx->pc == 0x1881F4u) {
        ctx->pc = 0x1881F8u;
        goto label_1881f8;
    }
    ctx->pc = 0x1881F0u;
    SET_GPR_U32(ctx, 31, 0x1881F8u);
    ctx->pc = 0x156A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156A10u, 0x1881F0u, 0x1881F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1881F8u;
label_1881f8:
    // 0x1881f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1881f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1881fc:
    // 0x1881fc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1881fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_188200:
    // 0x188200: 0x3e00008  jr          $ra
label_188204:
    if (ctx->pc == 0x188204u) {
        ctx->pc = 0x188208u;
        goto label_188208;
    }
    ctx->pc = 0x188200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188208u;
label_188208:
    // 0x188208: 0x0  nop
    ctx->pc = 0x188208u;
    // NOP
label_18820c:
    // 0x18820c: 0x0  nop
    ctx->pc = 0x18820cu;
    // NOP
label_188210:
    // 0x188210: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x188210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_188214:
    // 0x188214: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x188214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_188218:
    // 0x188218: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x188218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_18821c:
    // 0x18821c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x18821cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_188220:
    // 0x188220: 0xc055b3c  jal         func_156CF0
label_188224:
    if (ctx->pc == 0x188224u) {
        ctx->pc = 0x188228u;
        goto label_188228;
    }
    ctx->pc = 0x188220u;
    SET_GPR_U32(ctx, 31, 0x188228u);
    ctx->pc = 0x156CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156CF0u, 0x188220u, 0x188228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188228u;
label_188228:
    // 0x188228: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x188228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18822c:
    // 0x18822c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x18822cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_188230:
    // 0x188230: 0x3e00008  jr          $ra
label_188234:
    if (ctx->pc == 0x188234u) {
        ctx->pc = 0x188238u;
        goto label_188238;
    }
    ctx->pc = 0x188230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188238u;
label_188238:
    // 0x188238: 0x0  nop
    ctx->pc = 0x188238u;
    // NOP
label_18823c:
    // 0x18823c: 0x0  nop
    ctx->pc = 0x18823cu;
    // NOP
label_188240:
    // 0x188240: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x188240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_188244:
    // 0x188244: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x188244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_188248:
    // 0x188248: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x188248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_18824c:
    // 0x18824c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18824cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_188250:
    // 0x188250: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x188250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_188254:
    // 0x188254: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x188254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
label_188258:
    // 0x188258: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x188258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
label_18825c:
    // 0x18825c: 0xa3a60070  sb          $a2, 0x70($sp)
    ctx->pc = 0x18825cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 112), (uint8_t)GPR_U32(ctx, 6));
label_188260:
    // 0x188260: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x188260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_188264:
    // 0x188264: 0x8c640050  lw          $a0, 0x50($v1)
    ctx->pc = 0x188264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
label_188268:
    // 0x188268: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x188268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_18826c:
    // 0x18826c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_188270:
    if (ctx->pc == 0x188270u) {
        ctx->pc = 0x188274u;
        goto label_188274;
    }
    ctx->pc = 0x18826Cu;
    {
        const bool branch_taken_0x18826c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x18826c) {
            ctx->pc = 0x18827Cu;
            goto label_18827c;
        }
    }
    ctx->pc = 0x188274u;
label_188274:
    // 0x188274: 0x1000006c  b           . + 4 + (0x6C << 2)
label_188278:
    if (ctx->pc == 0x188278u) {
        ctx->pc = 0x18827Cu;
        goto label_18827c;
    }
    ctx->pc = 0x188274u;
    {
        const bool branch_taken_0x188274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188274) {
            ctx->pc = 0x188428u;
            goto label_188428;
        }
    }
    ctx->pc = 0x18827Cu;
label_18827c:
    // 0x18827c: 0x93a30070  lbu         $v1, 0x70($sp)
    ctx->pc = 0x18827cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
label_188280:
    // 0x188280: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x188280u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_188284:
    // 0x188284: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x188284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_188288:
    // 0x188288: 0x14830067  bne         $a0, $v1, . + 4 + (0x67 << 2)
label_18828c:
    if (ctx->pc == 0x18828Cu) {
        ctx->pc = 0x188290u;
        goto label_188290;
    }
    ctx->pc = 0x188288u;
    {
        const bool branch_taken_0x188288 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x188288) {
            ctx->pc = 0x188428u;
            goto label_188428;
        }
    }
    ctx->pc = 0x188290u;
label_188290:
    // 0x188290: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x188290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_188294:
    // 0x188294: 0x24030071  addiu       $v1, $zero, 0x71
    ctx->pc = 0x188294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
label_188298:
    // 0x188298: 0x1083002a  beq         $a0, $v1, . + 4 + (0x2A << 2)
label_18829c:
    if (ctx->pc == 0x18829Cu) {
        ctx->pc = 0x1882A0u;
        goto label_1882a0;
    }
    ctx->pc = 0x188298u;
    {
        const bool branch_taken_0x188298 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x188298) {
            ctx->pc = 0x188344u;
            goto label_188344;
        }
    }
    ctx->pc = 0x1882A0u;
label_1882a0:
    // 0x1882a0: 0x24030073  addiu       $v1, $zero, 0x73
    ctx->pc = 0x1882a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_1882a4:
    // 0x1882a4: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
label_1882a8:
    if (ctx->pc == 0x1882A8u) {
        ctx->pc = 0x1882ACu;
        goto label_1882ac;
    }
    ctx->pc = 0x1882A4u;
    {
        const bool branch_taken_0x1882a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1882a4) {
            ctx->pc = 0x18830Cu;
            goto label_18830c;
        }
    }
    ctx->pc = 0x1882ACu;
label_1882ac:
    // 0x1882ac: 0x2403006e  addiu       $v1, $zero, 0x6E
    ctx->pc = 0x1882acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
label_1882b0:
    // 0x1882b0: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
label_1882b4:
    if (ctx->pc == 0x1882B4u) {
        ctx->pc = 0x1882B8u;
        goto label_1882b8;
    }
    ctx->pc = 0x1882B0u;
    {
        const bool branch_taken_0x1882b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1882b0) {
            ctx->pc = 0x1882F8u;
            goto label_1882f8;
        }
    }
    ctx->pc = 0x1882B8u;
label_1882b8:
    // 0x1882b8: 0x2403006a  addiu       $v1, $zero, 0x6A
    ctx->pc = 0x1882b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
label_1882bc:
    // 0x1882bc: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
label_1882c0:
    if (ctx->pc == 0x1882C0u) {
        ctx->pc = 0x1882C4u;
        goto label_1882c4;
    }
    ctx->pc = 0x1882BCu;
    {
        const bool branch_taken_0x1882bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1882bc) {
            ctx->pc = 0x1882F8u;
            goto label_1882f8;
        }
    }
    ctx->pc = 0x1882C4u;
label_1882c4:
    // 0x1882c4: 0x2403006d  addiu       $v1, $zero, 0x6D
    ctx->pc = 0x1882c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
label_1882c8:
    // 0x1882c8: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
label_1882cc:
    if (ctx->pc == 0x1882CCu) {
        ctx->pc = 0x1882D0u;
        goto label_1882d0;
    }
    ctx->pc = 0x1882C8u;
    {
        const bool branch_taken_0x1882c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1882c8) {
            ctx->pc = 0x1882E4u;
            goto label_1882e4;
        }
    }
    ctx->pc = 0x1882D0u;
label_1882d0:
    // 0x1882d0: 0x24030069  addiu       $v1, $zero, 0x69
    ctx->pc = 0x1882d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
label_1882d4:
    // 0x1882d4: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_1882d8:
    if (ctx->pc == 0x1882D8u) {
        ctx->pc = 0x1882DCu;
        goto label_1882dc;
    }
    ctx->pc = 0x1882D4u;
    {
        const bool branch_taken_0x1882d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1882d4) {
            ctx->pc = 0x1882E4u;
            goto label_1882e4;
        }
    }
    ctx->pc = 0x1882DCu;
label_1882dc:
    // 0x1882dc: 0x10000052  b           . + 4 + (0x52 << 2)
label_1882e0:
    if (ctx->pc == 0x1882E0u) {
        ctx->pc = 0x1882E4u;
        goto label_1882e4;
    }
    ctx->pc = 0x1882DCu;
    {
        const bool branch_taken_0x1882dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1882dc) {
            ctx->pc = 0x188428u;
            goto label_188428;
        }
    }
    ctx->pc = 0x1882E4u;
label_1882e4:
    // 0x1882e4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1882e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1882e8:
    // 0x1882e8: 0xc062220  jal         func_188880
label_1882ec:
    if (ctx->pc == 0x1882ECu) {
        ctx->pc = 0x1882F0u;
        goto label_1882f0;
    }
    ctx->pc = 0x1882E8u;
    SET_GPR_U32(ctx, 31, 0x1882F0u);
    ctx->pc = 0x188880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188880u, 0x1882E8u, 0x1882F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1882F0u;
label_1882f0:
    // 0x1882f0: 0x1000004d  b           . + 4 + (0x4D << 2)
label_1882f4:
    if (ctx->pc == 0x1882F4u) {
        ctx->pc = 0x1882F8u;
        goto label_1882f8;
    }
    ctx->pc = 0x1882F0u;
    {
        const bool branch_taken_0x1882f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1882f0) {
            ctx->pc = 0x188428u;
            goto label_188428;
        }
    }
    ctx->pc = 0x1882F8u;
label_1882f8:
    // 0x1882f8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1882f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1882fc:
    // 0x1882fc: 0xc06223c  jal         func_1888F0
label_188300:
    if (ctx->pc == 0x188300u) {
        ctx->pc = 0x188304u;
        goto label_188304;
    }
    ctx->pc = 0x1882FCu;
    SET_GPR_U32(ctx, 31, 0x188304u);
    ctx->pc = 0x1888F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1888F0u, 0x1882FCu, 0x188304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188304u;
label_188304:
    // 0x188304: 0x10000048  b           . + 4 + (0x48 << 2)
label_188308:
    if (ctx->pc == 0x188308u) {
        ctx->pc = 0x18830Cu;
        goto label_18830c;
    }
    ctx->pc = 0x188304u;
    {
        const bool branch_taken_0x188304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188304) {
            ctx->pc = 0x188428u;
            goto label_188428;
        }
    }
    ctx->pc = 0x18830Cu;
label_18830c:
    // 0x18830c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18830cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_188310:
    // 0x188310: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x188310u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_188314:
    // 0x188314: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x188314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_188318:
    // 0x188318: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x188318u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_18831c:
    // 0x18831c: 0x24a551f0  addiu       $a1, $a1, 0x51F0
    ctx->pc = 0x18831cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20976));
label_188320:
    // 0x188320: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x188320u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_188324:
    // 0x188324: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x188324u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_188328:
    // 0x188328: 0xc08f558  jal         func_23D560
label_18832c:
    if (ctx->pc == 0x18832Cu) {
        ctx->pc = 0x188330u;
        goto label_188330;
    }
    ctx->pc = 0x188328u;
    SET_GPR_U32(ctx, 31, 0x188330u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x188328u, 0x188330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188330u;
label_188330:
    // 0x188330: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x188330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_188334:
    // 0x188334: 0xc062260  jal         func_188980
label_188338:
    if (ctx->pc == 0x188338u) {
        ctx->pc = 0x18833Cu;
        goto label_18833c;
    }
    ctx->pc = 0x188334u;
    SET_GPR_U32(ctx, 31, 0x18833Cu);
    ctx->pc = 0x188980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188980u, 0x188334u, 0x18833Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18833Cu;
label_18833c:
    // 0x18833c: 0x1000003a  b           . + 4 + (0x3A << 2)
label_188340:
    if (ctx->pc == 0x188340u) {
        ctx->pc = 0x188344u;
        goto label_188344;
    }
    ctx->pc = 0x18833Cu;
    {
        const bool branch_taken_0x18833c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18833c) {
            ctx->pc = 0x188428u;
            goto label_188428;
        }
    }
    ctx->pc = 0x188344u;
label_188344:
    // 0x188344: 0xc05548c  jal         func_155230
label_188348:
    if (ctx->pc == 0x188348u) {
        ctx->pc = 0x18834Cu;
        goto label_18834c;
    }
    ctx->pc = 0x188344u;
    SET_GPR_U32(ctx, 31, 0x18834Cu);
    ctx->pc = 0x155230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155230u, 0x188344u, 0x18834Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18834Cu;
label_18834c:
    // 0x18834c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18834cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_188350:
    // 0x188350: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x188350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_188354:
    // 0x188354: 0xc0553d4  jal         func_154F50
label_188358:
    if (ctx->pc == 0x188358u) {
        ctx->pc = 0x18835Cu;
        goto label_18835c;
    }
    ctx->pc = 0x188354u;
    SET_GPR_U32(ctx, 31, 0x18835Cu);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x188354u, 0x18835Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18835Cu;
label_18835c:
    // 0x18835c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18835cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_188360:
    // 0x188360: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_188364:
    if (ctx->pc == 0x188364u) {
        ctx->pc = 0x188368u;
        goto label_188368;
    }
    ctx->pc = 0x188360u;
    {
        const bool branch_taken_0x188360 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x188360) {
            ctx->pc = 0x188380u;
            goto label_188380;
        }
    }
    ctx->pc = 0x188368u;
label_188368:
    // 0x188368: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x188368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18836c:
    // 0x18836c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18836cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_188370:
    // 0x188370: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x188370u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_188374:
    // 0x188374: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x188374u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_188378:
    // 0x188378: 0x320f809  jalr        $t9
label_18837c:
    if (ctx->pc == 0x18837Cu) {
        ctx->pc = 0x188380u;
        goto label_188380;
    }
    ctx->pc = 0x188378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x188380u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188378u, 0x188380u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x188380u;
label_188380:
    // 0x188380: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x188380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_188384:
    // 0x188384: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x188384u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_188388:
    // 0x188388: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x188388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_18838c:
    // 0x18838c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x18838cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_188390:
    // 0x188390: 0x24a55210  addiu       $a1, $a1, 0x5210
    ctx->pc = 0x188390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21008));
label_188394:
    // 0x188394: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x188394u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_188398:
    // 0x188398: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x188398u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18839c:
    // 0x18839c: 0xc08f558  jal         func_23D560
label_1883a0:
    if (ctx->pc == 0x1883A0u) {
        ctx->pc = 0x1883A4u;
        goto label_1883a4;
    }
    ctx->pc = 0x18839Cu;
    SET_GPR_U32(ctx, 31, 0x1883A4u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x18839Cu, 0x1883A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1883A4u;
label_1883a4:
    // 0x1883a4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1883a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1883a8:
    // 0x1883a8: 0xc088560  jal         func_221580
label_1883ac:
    if (ctx->pc == 0x1883ACu) {
        ctx->pc = 0x1883B0u;
        goto label_1883b0;
    }
    ctx->pc = 0x1883A8u;
    SET_GPR_U32(ctx, 31, 0x1883B0u);
    ctx->pc = 0x221580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221580u, 0x1883A8u, 0x1883B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1883B0u;
label_1883b0:
    // 0x1883b0: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x1883b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_1883b4:
    // 0x1883b4: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x1883b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_1883b8:
    // 0x1883b8: 0x24050566  addiu       $a1, $zero, 0x566
    ctx->pc = 0x1883b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1382));
label_1883bc:
    // 0x1883bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1883bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1883c0:
    // 0x1883c0: 0xc040ab0  jal         func_102AC0
label_1883c4:
    if (ctx->pc == 0x1883C4u) {
        ctx->pc = 0x1883C8u;
        goto label_1883c8;
    }
    ctx->pc = 0x1883C0u;
    SET_GPR_U32(ctx, 31, 0x1883C8u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x1883C0u, 0x1883C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1883C8u;
label_1883c8:
    // 0x1883c8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1883c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1883cc:
    // 0x1883cc: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x1883ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1883d0:
    // 0x1883d0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1883d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1883d4:
    // 0x1883d4: 0x16220007  bne         $s1, $v0, . + 4 + (0x7 << 2)
label_1883d8:
    if (ctx->pc == 0x1883D8u) {
        ctx->pc = 0x1883DCu;
        goto label_1883dc;
    }
    ctx->pc = 0x1883D4u;
    {
        const bool branch_taken_0x1883d4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1883d4) {
            ctx->pc = 0x1883F4u;
            goto label_1883f4;
        }
    }
    ctx->pc = 0x1883DCu;
label_1883dc:
    // 0x1883dc: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x1883dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1883e0:
    // 0x1883e0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1883e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1883e4:
    // 0x1883e4: 0xc08ef28  jal         func_23BCA0
label_1883e8:
    if (ctx->pc == 0x1883E8u) {
        ctx->pc = 0x1883ECu;
        goto label_1883ec;
    }
    ctx->pc = 0x1883E4u;
    SET_GPR_U32(ctx, 31, 0x1883ECu);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x1883E4u, 0x1883ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1883ECu;
label_1883ec:
    // 0x1883ec: 0x1000000a  b           . + 4 + (0xA << 2)
label_1883f0:
    if (ctx->pc == 0x1883F0u) {
        ctx->pc = 0x1883F4u;
        goto label_1883f4;
    }
    ctx->pc = 0x1883ECu;
    {
        const bool branch_taken_0x1883ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1883ec) {
            ctx->pc = 0x188418u;
            goto label_188418;
        }
    }
    ctx->pc = 0x1883F4u;
label_1883f4:
    // 0x1883f4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1883f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1883f8:
    // 0x1883f8: 0x2405054c  addiu       $a1, $zero, 0x54C
    ctx->pc = 0x1883f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1356));
label_1883fc:
    // 0x1883fc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1883fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_188400:
    // 0x188400: 0xc040924  jal         func_102490
label_188404:
    if (ctx->pc == 0x188404u) {
        ctx->pc = 0x188408u;
        goto label_188408;
    }
    ctx->pc = 0x188400u;
    SET_GPR_U32(ctx, 31, 0x188408u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x188400u, 0x188408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188408u;
label_188408:
    // 0x188408: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x188408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_18840c:
    // 0x18840c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x18840cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_188410:
    // 0x188410: 0xc08ef28  jal         func_23BCA0
label_188414:
    if (ctx->pc == 0x188414u) {
        ctx->pc = 0x188418u;
        goto label_188418;
    }
    ctx->pc = 0x188410u;
    SET_GPR_U32(ctx, 31, 0x188418u);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x188410u, 0x188418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188418u;
label_188418:
    // 0x188418: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x188418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_18841c:
    // 0x18841c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x18841cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_188420:
    // 0x188420: 0xc0887b4  jal         func_221ED0
label_188424:
    if (ctx->pc == 0x188424u) {
        ctx->pc = 0x188428u;
        goto label_188428;
    }
    ctx->pc = 0x188420u;
    SET_GPR_U32(ctx, 31, 0x188428u);
    ctx->pc = 0x221ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221ED0u, 0x188420u, 0x188428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188428u;
label_188428:
    // 0x188428: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x188428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_18842c:
    // 0x18842c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18842cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_188430:
    // 0x188430: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x188430u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_188434:
    // 0x188434: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x188434u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_188438:
    // 0x188438: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x188438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_18843c:
    // 0x18843c: 0x3e00008  jr          $ra
label_188440:
    if (ctx->pc == 0x188440u) {
        ctx->pc = 0x188444u;
        goto label_188444;
    }
    ctx->pc = 0x18843Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18843Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188444u;
label_188444:
    // 0x188444: 0x0  nop
    ctx->pc = 0x188444u;
    // NOP
label_188448:
    // 0x188448: 0x0  nop
    ctx->pc = 0x188448u;
    // NOP
label_18844c:
    // 0x18844c: 0x0  nop
    ctx->pc = 0x18844cu;
    // NOP
    ctx->pc = 0x188450u;
}
