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

// Function: sub_0031DBC0
// Address: 0x31dbc0 - 0x31e1a8
void sub_0031DBC0_0x31dbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031DBC0_0x31dbc0");
#endif

    switch (ctx->pc) {
        case 0x31dbc0u: goto label_31dbc0;
        case 0x31dbc4u: goto label_31dbc4;
        case 0x31dbc8u: goto label_31dbc8;
        case 0x31dbccu: goto label_31dbcc;
        case 0x31dbd0u: goto label_31dbd0;
        case 0x31dbd4u: goto label_31dbd4;
        case 0x31dbd8u: goto label_31dbd8;
        case 0x31dbdcu: goto label_31dbdc;
        case 0x31dbe0u: goto label_31dbe0;
        case 0x31dbe4u: goto label_31dbe4;
        case 0x31dbe8u: goto label_31dbe8;
        case 0x31dbecu: goto label_31dbec;
        case 0x31dbf0u: goto label_31dbf0;
        case 0x31dbf4u: goto label_31dbf4;
        case 0x31dbf8u: goto label_31dbf8;
        case 0x31dbfcu: goto label_31dbfc;
        case 0x31dc00u: goto label_31dc00;
        case 0x31dc04u: goto label_31dc04;
        case 0x31dc08u: goto label_31dc08;
        case 0x31dc0cu: goto label_31dc0c;
        case 0x31dc10u: goto label_31dc10;
        case 0x31dc14u: goto label_31dc14;
        case 0x31dc18u: goto label_31dc18;
        case 0x31dc1cu: goto label_31dc1c;
        case 0x31dc20u: goto label_31dc20;
        case 0x31dc24u: goto label_31dc24;
        case 0x31dc28u: goto label_31dc28;
        case 0x31dc2cu: goto label_31dc2c;
        case 0x31dc30u: goto label_31dc30;
        case 0x31dc34u: goto label_31dc34;
        case 0x31dc38u: goto label_31dc38;
        case 0x31dc3cu: goto label_31dc3c;
        case 0x31dc40u: goto label_31dc40;
        case 0x31dc44u: goto label_31dc44;
        case 0x31dc48u: goto label_31dc48;
        case 0x31dc4cu: goto label_31dc4c;
        case 0x31dc50u: goto label_31dc50;
        case 0x31dc54u: goto label_31dc54;
        case 0x31dc58u: goto label_31dc58;
        case 0x31dc5cu: goto label_31dc5c;
        case 0x31dc60u: goto label_31dc60;
        case 0x31dc64u: goto label_31dc64;
        case 0x31dc68u: goto label_31dc68;
        case 0x31dc6cu: goto label_31dc6c;
        case 0x31dc70u: goto label_31dc70;
        case 0x31dc74u: goto label_31dc74;
        case 0x31dc78u: goto label_31dc78;
        case 0x31dc7cu: goto label_31dc7c;
        case 0x31dc80u: goto label_31dc80;
        case 0x31dc84u: goto label_31dc84;
        case 0x31dc88u: goto label_31dc88;
        case 0x31dc8cu: goto label_31dc8c;
        case 0x31dc90u: goto label_31dc90;
        case 0x31dc94u: goto label_31dc94;
        case 0x31dc98u: goto label_31dc98;
        case 0x31dc9cu: goto label_31dc9c;
        case 0x31dca0u: goto label_31dca0;
        case 0x31dca4u: goto label_31dca4;
        case 0x31dca8u: goto label_31dca8;
        case 0x31dcacu: goto label_31dcac;
        case 0x31dcb0u: goto label_31dcb0;
        case 0x31dcb4u: goto label_31dcb4;
        case 0x31dcb8u: goto label_31dcb8;
        case 0x31dcbcu: goto label_31dcbc;
        case 0x31dcc0u: goto label_31dcc0;
        case 0x31dcc4u: goto label_31dcc4;
        case 0x31dcc8u: goto label_31dcc8;
        case 0x31dcccu: goto label_31dccc;
        case 0x31dcd0u: goto label_31dcd0;
        case 0x31dcd4u: goto label_31dcd4;
        case 0x31dcd8u: goto label_31dcd8;
        case 0x31dcdcu: goto label_31dcdc;
        case 0x31dce0u: goto label_31dce0;
        case 0x31dce4u: goto label_31dce4;
        case 0x31dce8u: goto label_31dce8;
        case 0x31dcecu: goto label_31dcec;
        case 0x31dcf0u: goto label_31dcf0;
        case 0x31dcf4u: goto label_31dcf4;
        case 0x31dcf8u: goto label_31dcf8;
        case 0x31dcfcu: goto label_31dcfc;
        case 0x31dd00u: goto label_31dd00;
        case 0x31dd04u: goto label_31dd04;
        case 0x31dd08u: goto label_31dd08;
        case 0x31dd0cu: goto label_31dd0c;
        case 0x31dd10u: goto label_31dd10;
        case 0x31dd14u: goto label_31dd14;
        case 0x31dd18u: goto label_31dd18;
        case 0x31dd1cu: goto label_31dd1c;
        case 0x31dd20u: goto label_31dd20;
        case 0x31dd24u: goto label_31dd24;
        case 0x31dd28u: goto label_31dd28;
        case 0x31dd2cu: goto label_31dd2c;
        case 0x31dd30u: goto label_31dd30;
        case 0x31dd34u: goto label_31dd34;
        case 0x31dd38u: goto label_31dd38;
        case 0x31dd3cu: goto label_31dd3c;
        case 0x31dd40u: goto label_31dd40;
        case 0x31dd44u: goto label_31dd44;
        case 0x31dd48u: goto label_31dd48;
        case 0x31dd4cu: goto label_31dd4c;
        case 0x31dd50u: goto label_31dd50;
        case 0x31dd54u: goto label_31dd54;
        case 0x31dd58u: goto label_31dd58;
        case 0x31dd5cu: goto label_31dd5c;
        case 0x31dd60u: goto label_31dd60;
        case 0x31dd64u: goto label_31dd64;
        case 0x31dd68u: goto label_31dd68;
        case 0x31dd6cu: goto label_31dd6c;
        case 0x31dd70u: goto label_31dd70;
        case 0x31dd74u: goto label_31dd74;
        case 0x31dd78u: goto label_31dd78;
        case 0x31dd7cu: goto label_31dd7c;
        case 0x31dd80u: goto label_31dd80;
        case 0x31dd84u: goto label_31dd84;
        case 0x31dd88u: goto label_31dd88;
        case 0x31dd8cu: goto label_31dd8c;
        case 0x31dd90u: goto label_31dd90;
        case 0x31dd94u: goto label_31dd94;
        case 0x31dd98u: goto label_31dd98;
        case 0x31dd9cu: goto label_31dd9c;
        case 0x31dda0u: goto label_31dda0;
        case 0x31dda4u: goto label_31dda4;
        case 0x31dda8u: goto label_31dda8;
        case 0x31ddacu: goto label_31ddac;
        case 0x31ddb0u: goto label_31ddb0;
        case 0x31ddb4u: goto label_31ddb4;
        case 0x31ddb8u: goto label_31ddb8;
        case 0x31ddbcu: goto label_31ddbc;
        case 0x31ddc0u: goto label_31ddc0;
        case 0x31ddc4u: goto label_31ddc4;
        case 0x31ddc8u: goto label_31ddc8;
        case 0x31ddccu: goto label_31ddcc;
        case 0x31ddd0u: goto label_31ddd0;
        case 0x31ddd4u: goto label_31ddd4;
        case 0x31ddd8u: goto label_31ddd8;
        case 0x31dddcu: goto label_31dddc;
        case 0x31dde0u: goto label_31dde0;
        case 0x31dde4u: goto label_31dde4;
        case 0x31dde8u: goto label_31dde8;
        case 0x31ddecu: goto label_31ddec;
        case 0x31ddf0u: goto label_31ddf0;
        case 0x31ddf4u: goto label_31ddf4;
        case 0x31ddf8u: goto label_31ddf8;
        case 0x31ddfcu: goto label_31ddfc;
        case 0x31de00u: goto label_31de00;
        case 0x31de04u: goto label_31de04;
        case 0x31de08u: goto label_31de08;
        case 0x31de0cu: goto label_31de0c;
        case 0x31de10u: goto label_31de10;
        case 0x31de14u: goto label_31de14;
        case 0x31de18u: goto label_31de18;
        case 0x31de1cu: goto label_31de1c;
        case 0x31de20u: goto label_31de20;
        case 0x31de24u: goto label_31de24;
        case 0x31de28u: goto label_31de28;
        case 0x31de2cu: goto label_31de2c;
        case 0x31de30u: goto label_31de30;
        case 0x31de34u: goto label_31de34;
        case 0x31de38u: goto label_31de38;
        case 0x31de3cu: goto label_31de3c;
        case 0x31de40u: goto label_31de40;
        case 0x31de44u: goto label_31de44;
        case 0x31de48u: goto label_31de48;
        case 0x31de4cu: goto label_31de4c;
        case 0x31de50u: goto label_31de50;
        case 0x31de54u: goto label_31de54;
        case 0x31de58u: goto label_31de58;
        case 0x31de5cu: goto label_31de5c;
        case 0x31de60u: goto label_31de60;
        case 0x31de64u: goto label_31de64;
        case 0x31de68u: goto label_31de68;
        case 0x31de6cu: goto label_31de6c;
        case 0x31de70u: goto label_31de70;
        case 0x31de74u: goto label_31de74;
        case 0x31de78u: goto label_31de78;
        case 0x31de7cu: goto label_31de7c;
        case 0x31de80u: goto label_31de80;
        case 0x31de84u: goto label_31de84;
        case 0x31de88u: goto label_31de88;
        case 0x31de8cu: goto label_31de8c;
        case 0x31de90u: goto label_31de90;
        case 0x31de94u: goto label_31de94;
        case 0x31de98u: goto label_31de98;
        case 0x31de9cu: goto label_31de9c;
        case 0x31dea0u: goto label_31dea0;
        case 0x31dea4u: goto label_31dea4;
        case 0x31dea8u: goto label_31dea8;
        case 0x31deacu: goto label_31deac;
        case 0x31deb0u: goto label_31deb0;
        case 0x31deb4u: goto label_31deb4;
        case 0x31deb8u: goto label_31deb8;
        case 0x31debcu: goto label_31debc;
        case 0x31dec0u: goto label_31dec0;
        case 0x31dec4u: goto label_31dec4;
        case 0x31dec8u: goto label_31dec8;
        case 0x31deccu: goto label_31decc;
        case 0x31ded0u: goto label_31ded0;
        case 0x31ded4u: goto label_31ded4;
        case 0x31ded8u: goto label_31ded8;
        case 0x31dedcu: goto label_31dedc;
        case 0x31dee0u: goto label_31dee0;
        case 0x31dee4u: goto label_31dee4;
        case 0x31dee8u: goto label_31dee8;
        case 0x31deecu: goto label_31deec;
        case 0x31def0u: goto label_31def0;
        case 0x31def4u: goto label_31def4;
        case 0x31def8u: goto label_31def8;
        case 0x31defcu: goto label_31defc;
        case 0x31df00u: goto label_31df00;
        case 0x31df04u: goto label_31df04;
        case 0x31df08u: goto label_31df08;
        case 0x31df0cu: goto label_31df0c;
        case 0x31df10u: goto label_31df10;
        case 0x31df14u: goto label_31df14;
        case 0x31df18u: goto label_31df18;
        case 0x31df1cu: goto label_31df1c;
        case 0x31df20u: goto label_31df20;
        case 0x31df24u: goto label_31df24;
        case 0x31df28u: goto label_31df28;
        case 0x31df2cu: goto label_31df2c;
        case 0x31df30u: goto label_31df30;
        case 0x31df34u: goto label_31df34;
        case 0x31df38u: goto label_31df38;
        case 0x31df3cu: goto label_31df3c;
        case 0x31df40u: goto label_31df40;
        case 0x31df44u: goto label_31df44;
        case 0x31df48u: goto label_31df48;
        case 0x31df4cu: goto label_31df4c;
        case 0x31df50u: goto label_31df50;
        case 0x31df54u: goto label_31df54;
        case 0x31df58u: goto label_31df58;
        case 0x31df5cu: goto label_31df5c;
        case 0x31df60u: goto label_31df60;
        case 0x31df64u: goto label_31df64;
        case 0x31df68u: goto label_31df68;
        case 0x31df6cu: goto label_31df6c;
        case 0x31df70u: goto label_31df70;
        case 0x31df74u: goto label_31df74;
        case 0x31df78u: goto label_31df78;
        case 0x31df7cu: goto label_31df7c;
        case 0x31df80u: goto label_31df80;
        case 0x31df84u: goto label_31df84;
        case 0x31df88u: goto label_31df88;
        case 0x31df8cu: goto label_31df8c;
        case 0x31df90u: goto label_31df90;
        case 0x31df94u: goto label_31df94;
        case 0x31df98u: goto label_31df98;
        case 0x31df9cu: goto label_31df9c;
        case 0x31dfa0u: goto label_31dfa0;
        case 0x31dfa4u: goto label_31dfa4;
        case 0x31dfa8u: goto label_31dfa8;
        case 0x31dfacu: goto label_31dfac;
        case 0x31dfb0u: goto label_31dfb0;
        case 0x31dfb4u: goto label_31dfb4;
        case 0x31dfb8u: goto label_31dfb8;
        case 0x31dfbcu: goto label_31dfbc;
        case 0x31dfc0u: goto label_31dfc0;
        case 0x31dfc4u: goto label_31dfc4;
        case 0x31dfc8u: goto label_31dfc8;
        case 0x31dfccu: goto label_31dfcc;
        case 0x31dfd0u: goto label_31dfd0;
        case 0x31dfd4u: goto label_31dfd4;
        case 0x31dfd8u: goto label_31dfd8;
        case 0x31dfdcu: goto label_31dfdc;
        case 0x31dfe0u: goto label_31dfe0;
        case 0x31dfe4u: goto label_31dfe4;
        case 0x31dfe8u: goto label_31dfe8;
        case 0x31dfecu: goto label_31dfec;
        case 0x31dff0u: goto label_31dff0;
        case 0x31dff4u: goto label_31dff4;
        case 0x31dff8u: goto label_31dff8;
        case 0x31dffcu: goto label_31dffc;
        case 0x31e000u: goto label_31e000;
        case 0x31e004u: goto label_31e004;
        case 0x31e008u: goto label_31e008;
        case 0x31e00cu: goto label_31e00c;
        case 0x31e010u: goto label_31e010;
        case 0x31e014u: goto label_31e014;
        case 0x31e018u: goto label_31e018;
        case 0x31e01cu: goto label_31e01c;
        case 0x31e020u: goto label_31e020;
        case 0x31e024u: goto label_31e024;
        case 0x31e028u: goto label_31e028;
        case 0x31e02cu: goto label_31e02c;
        case 0x31e030u: goto label_31e030;
        case 0x31e034u: goto label_31e034;
        case 0x31e038u: goto label_31e038;
        case 0x31e03cu: goto label_31e03c;
        case 0x31e040u: goto label_31e040;
        case 0x31e044u: goto label_31e044;
        case 0x31e048u: goto label_31e048;
        case 0x31e04cu: goto label_31e04c;
        case 0x31e050u: goto label_31e050;
        case 0x31e054u: goto label_31e054;
        case 0x31e058u: goto label_31e058;
        case 0x31e05cu: goto label_31e05c;
        case 0x31e060u: goto label_31e060;
        case 0x31e064u: goto label_31e064;
        case 0x31e068u: goto label_31e068;
        case 0x31e06cu: goto label_31e06c;
        case 0x31e070u: goto label_31e070;
        case 0x31e074u: goto label_31e074;
        case 0x31e078u: goto label_31e078;
        case 0x31e07cu: goto label_31e07c;
        case 0x31e080u: goto label_31e080;
        case 0x31e084u: goto label_31e084;
        case 0x31e088u: goto label_31e088;
        case 0x31e08cu: goto label_31e08c;
        case 0x31e090u: goto label_31e090;
        case 0x31e094u: goto label_31e094;
        case 0x31e098u: goto label_31e098;
        case 0x31e09cu: goto label_31e09c;
        case 0x31e0a0u: goto label_31e0a0;
        case 0x31e0a4u: goto label_31e0a4;
        case 0x31e0a8u: goto label_31e0a8;
        case 0x31e0acu: goto label_31e0ac;
        case 0x31e0b0u: goto label_31e0b0;
        case 0x31e0b4u: goto label_31e0b4;
        case 0x31e0b8u: goto label_31e0b8;
        case 0x31e0bcu: goto label_31e0bc;
        case 0x31e0c0u: goto label_31e0c0;
        case 0x31e0c4u: goto label_31e0c4;
        case 0x31e0c8u: goto label_31e0c8;
        case 0x31e0ccu: goto label_31e0cc;
        case 0x31e0d0u: goto label_31e0d0;
        case 0x31e0d4u: goto label_31e0d4;
        case 0x31e0d8u: goto label_31e0d8;
        case 0x31e0dcu: goto label_31e0dc;
        case 0x31e0e0u: goto label_31e0e0;
        case 0x31e0e4u: goto label_31e0e4;
        case 0x31e0e8u: goto label_31e0e8;
        case 0x31e0ecu: goto label_31e0ec;
        case 0x31e0f0u: goto label_31e0f0;
        case 0x31e0f4u: goto label_31e0f4;
        case 0x31e0f8u: goto label_31e0f8;
        case 0x31e0fcu: goto label_31e0fc;
        case 0x31e100u: goto label_31e100;
        case 0x31e104u: goto label_31e104;
        case 0x31e108u: goto label_31e108;
        case 0x31e10cu: goto label_31e10c;
        case 0x31e110u: goto label_31e110;
        case 0x31e114u: goto label_31e114;
        case 0x31e118u: goto label_31e118;
        case 0x31e11cu: goto label_31e11c;
        case 0x31e120u: goto label_31e120;
        case 0x31e124u: goto label_31e124;
        case 0x31e128u: goto label_31e128;
        case 0x31e12cu: goto label_31e12c;
        case 0x31e130u: goto label_31e130;
        case 0x31e134u: goto label_31e134;
        case 0x31e138u: goto label_31e138;
        case 0x31e13cu: goto label_31e13c;
        case 0x31e140u: goto label_31e140;
        case 0x31e144u: goto label_31e144;
        case 0x31e148u: goto label_31e148;
        case 0x31e14cu: goto label_31e14c;
        case 0x31e150u: goto label_31e150;
        case 0x31e154u: goto label_31e154;
        case 0x31e158u: goto label_31e158;
        case 0x31e15cu: goto label_31e15c;
        case 0x31e160u: goto label_31e160;
        case 0x31e164u: goto label_31e164;
        case 0x31e168u: goto label_31e168;
        case 0x31e16cu: goto label_31e16c;
        case 0x31e170u: goto label_31e170;
        case 0x31e174u: goto label_31e174;
        case 0x31e178u: goto label_31e178;
        case 0x31e17cu: goto label_31e17c;
        case 0x31e180u: goto label_31e180;
        case 0x31e184u: goto label_31e184;
        case 0x31e188u: goto label_31e188;
        case 0x31e18cu: goto label_31e18c;
        case 0x31e190u: goto label_31e190;
        case 0x31e194u: goto label_31e194;
        case 0x31e198u: goto label_31e198;
        case 0x31e19cu: goto label_31e19c;
        case 0x31e1a0u: goto label_31e1a0;
        case 0x31e1a4u: goto label_31e1a4;
        default: break;
    }

    ctx->pc = 0x31dbc0u;

label_31dbc0:
    // 0x31dbc0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x31dbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_31dbc4:
    // 0x31dbc4: 0x8f82a5c0  lw          $v0, -0x5A40($gp)
    ctx->pc = 0x31dbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944192)));
label_31dbc8:
    // 0x31dbc8: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x31dbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_31dbcc:
    // 0x31dbcc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x31dbccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_31dbd0:
    // 0x31dbd0: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x31dbd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_31dbd4:
    // 0x31dbd4: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x31dbd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_31dbd8:
    // 0x31dbd8: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x31dbd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_31dbdc:
    // 0x31dbdc: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x31dbdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_31dbe0:
    // 0x31dbe0: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x31dbe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_31dbe4:
    // 0x31dbe4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x31dbe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_31dbe8:
    // 0x31dbe8: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x31dbe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_31dbec:
    // 0x31dbec: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x31dbecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_31dbf0:
    // 0x31dbf0: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x31dbf0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_31dbf4:
    // 0x31dbf4: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x31dbf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_31dbf8:
    // 0x31dbf8: 0x8c970018  lw          $s7, 0x18($a0)
    ctx->pc = 0x31dbf8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_31dbfc:
    // 0x31dbfc: 0x8f83a5cc  lw          $v1, -0x5A34($gp)
    ctx->pc = 0x31dbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944204)));
label_31dc00:
    // 0x31dc00: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x31dc00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_31dc04:
    // 0x31dc04: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x31dc04u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_31dc08:
    // 0x31dc08: 0x12600155  beqz        $s3, . + 4 + (0x155 << 2)
label_31dc0c:
    if (ctx->pc == 0x31DC0Cu) {
        ctx->pc = 0x31DC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DC08u;
        // 0x31dc0c: 0x83a021  addu        $s4, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DC10u;
        goto label_31dc10;
    }
    ctx->pc = 0x31DC08u;
    {
        const bool branch_taken_0x31dc08 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DC08u;
        // 0x31dc0c: 0x83a021  addu        $s4, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dc08) {
            ctx->pc = 0x31E160u;
            goto label_31e160;
        }
    }
    ctx->pc = 0x31DC10u;
label_31dc10:
    // 0x31dc10: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x31dc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_31dc14:
    // 0x31dc14: 0x10400152  beqz        $v0, . + 4 + (0x152 << 2)
label_31dc18:
    if (ctx->pc == 0x31DC18u) {
        ctx->pc = 0x31DC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DC14u;
        // 0x31dc18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DC1Cu;
        goto label_31dc1c;
    }
    ctx->pc = 0x31DC14u;
    {
        const bool branch_taken_0x31dc14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DC14u;
        // 0x31dc18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dc14) {
            ctx->pc = 0x31E160u;
            goto label_31e160;
        }
    }
    ctx->pc = 0x31DC1Cu;
label_31dc1c:
    // 0x31dc1c: 0x8ee2005c  lw          $v0, 0x5C($s7)
    ctx->pc = 0x31dc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 92)));
label_31dc20:
    // 0x31dc20: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x31dc20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_31dc24:
    // 0x31dc24: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x31dc24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_31dc28:
    // 0x31dc28: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x31dc28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
label_31dc2c:
    // 0x31dc2c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x31dc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_31dc30:
    // 0x31dc30: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x31dc30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_31dc34:
    // 0x31dc34: 0x8ee60030  lw          $a2, 0x30($s7)
    ctx->pc = 0x31dc34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 48)));
label_31dc38:
    // 0x31dc38: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x31dc38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
label_31dc3c:
    // 0x31dc3c: 0x8ef20034  lw          $s2, 0x34($s7)
    ctx->pc = 0x31dc3cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 52)));
label_31dc40:
    // 0x31dc40: 0x10600147  beqz        $v1, . + 4 + (0x147 << 2)
label_31dc44:
    if (ctx->pc == 0x31DC44u) {
        ctx->pc = 0x31DC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DC40u;
        // 0x31dc44: 0xafb20010  sw          $s2, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DC48u;
        goto label_31dc48;
    }
    ctx->pc = 0x31DC40u;
    {
        const bool branch_taken_0x31dc40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DC40u;
        // 0x31dc44: 0xafb20010  sw          $s2, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dc40) {
            ctx->pc = 0x31E160u;
            goto label_31e160;
        }
    }
    ctx->pc = 0x31DC48u;
label_31dc48:
    // 0x31dc48: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x31dc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_31dc4c:
    // 0x31dc4c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x31dc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_31dc50:
    // 0x31dc50: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x31dc50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_31dc54:
    // 0x31dc54: 0x24a60001  addiu       $a2, $a1, 0x1
    ctx->pc = 0x31dc54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_31dc58:
    // 0x31dc58: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x31dc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_31dc5c:
    // 0x31dc5c: 0xafa60014  sw          $a2, 0x14($sp)
    ctx->pc = 0x31dc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 6));
label_31dc60:
    // 0x31dc60: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x31dc60u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_31dc64:
    // 0x31dc64: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31dc64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_31dc68:
    // 0x31dc68: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x31dc68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31dc6c:
    // 0x31dc6c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x31dc6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31dc70:
    // 0x31dc70: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x31dc70u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31dc74:
    // 0x31dc74: 0x0  nop
    ctx->pc = 0x31dc74u;
    // NOP
label_31dc78:
    // 0x31dc78: 0x45030130  bc1tl       . + 4 + (0x130 << 2)
label_31dc7c:
    if (ctx->pc == 0x31DC7Cu) {
        ctx->pc = 0x31DC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DC78u;
        // 0x31dc7c: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DC80u;
        goto label_31dc80;
    }
    ctx->pc = 0x31DC78u;
    {
        const bool branch_taken_0x31dc78 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31dc78) {
            ctx->pc = 0x31DC7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31DC78u;
            // 0x31dc7c: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31E13Cu;
            goto label_31e13c;
        }
    }
    ctx->pc = 0x31DC80u;
label_31dc80:
    // 0x31dc80: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x31dc80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_31dc84:
    // 0x31dc84: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x31dc84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_31dc88:
    // 0x31dc88: 0x46000d01  sub.s       $f20, $f1, $f0
    ctx->pc = 0x31dc88u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_31dc8c:
    // 0x31dc8c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x31dc8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_31dc90:
    // 0x31dc90: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x31dc90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_31dc94:
    // 0x31dc94: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x31dc94u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_31dc98:
    // 0x31dc98: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x31dc98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_31dc9c:
    // 0x31dc9c: 0x8e320020  lw          $s2, 0x20($s1)
    ctx->pc = 0x31dc9cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_31dca0:
    // 0x31dca0: 0x8e360024  lw          $s6, 0x24($s1)
    ctx->pc = 0x31dca0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_31dca4:
    // 0x31dca4: 0x8e3e0028  lw          $fp, 0x28($s1)
    ctx->pc = 0x31dca4u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_31dca8:
    // 0x31dca8: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x31dca8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_31dcac:
    // 0x31dcac: 0xc0e33ee  jal         func_38CFB8
label_31dcb0:
    if (ctx->pc == 0x31DCB0u) {
        ctx->pc = 0x31DCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DCACu;
        // 0x31dcb0: 0x7faf0020  sq          $t7, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DCB4u;
        goto label_31dcb4;
    }
    ctx->pc = 0x31DCACu;
    SET_GPR_U32(ctx, 31, 0x31DCB4u);
    ctx->pc = 0x31DCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DCACu;
    // 0x31dcb0: 0x7faf0020  sq          $t7, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CFB8u, 0x31DCACu, 0x31DCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DCB4u;
label_31dcb4:
    // 0x31dcb4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x31dcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_31dcb8:
    // 0x31dcb8: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x31dcb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_31dcbc:
    // 0x31dcbc: 0x10600037  beqz        $v1, . + 4 + (0x37 << 2)
label_31dcc0:
    if (ctx->pc == 0x31DCC0u) {
        ctx->pc = 0x31DCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DCBCu;
        // 0x31dcc0: 0x7baf0020  lq          $t7, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DCC4u;
        goto label_31dcc4;
    }
    ctx->pc = 0x31DCBCu;
    {
        const bool branch_taken_0x31dcbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DCBCu;
        // 0x31dcc0: 0x7baf0020  lq          $t7, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dcbc) {
            ctx->pc = 0x31DD9Cu;
            goto label_31dd9c;
        }
    }
    ctx->pc = 0x31DCC4u;
label_31dcc4:
    // 0x31dcc4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x31dcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31dcc8:
    // 0x31dcc8: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x31dcc8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31dccc:
    // 0x31dccc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x31dcccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31dcd0:
    // 0x31dcd0: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_31dcd4:
    if (ctx->pc == 0x31DCD4u) {
        ctx->pc = 0x31DCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DCD0u;
        // 0x31dcd4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DCD8u;
        goto label_31dcd8;
    }
    ctx->pc = 0x31DCD0u;
    {
        const bool branch_taken_0x31dcd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DCD0u;
        // 0x31dcd4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dcd0) {
            ctx->pc = 0x31DD9Cu;
            goto label_31dd9c;
        }
    }
    ctx->pc = 0x31DCD8u;
label_31dcd8:
    // 0x31dcd8: 0x8e270010  lw          $a3, 0x10($s1)
    ctx->pc = 0x31dcd8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_31dcdc:
    // 0x31dcdc: 0x2409000c  addiu       $t1, $zero, 0xC
    ctx->pc = 0x31dcdcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_31dce0:
    // 0x31dce0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31dce0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31dce4:
    // 0x31dce4: 0xe82021  addu        $a0, $a3, $t0
    ctx->pc = 0x31dce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_31dce8:
    // 0x31dce8: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x31dce8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_31dcec:
    // 0x31dcec: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x31dcecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_31dcf0:
    // 0x31dcf0: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_31dcf4:
    if (ctx->pc == 0x31DCF4u) {
        ctx->pc = 0x31DCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DCF0u;
        // 0x31dcf4: 0x3062007f  andi        $v0, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DCF8u;
        goto label_31dcf8;
    }
    ctx->pc = 0x31DCF0u;
    {
        const bool branch_taken_0x31dcf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DCF0u;
        // 0x31dcf4: 0x3062007f  andi        $v0, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dcf0) {
            ctx->pc = 0x31DD84u;
            goto label_31dd84;
        }
    }
    ctx->pc = 0x31DCF8u;
label_31dcf8:
    // 0x31dcf8: 0x250b0001  addiu       $t3, $t0, 0x1
    ctx->pc = 0x31dcf8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_31dcfc:
    // 0x31dcfc: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_31dd00:
    if (ctx->pc == 0x31DD00u) {
        ctx->pc = 0x31DD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DCFCu;
        // 0x31dd00: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DD04u;
        goto label_31dd04;
    }
    ctx->pc = 0x31DCFCu;
    {
        const bool branch_taken_0x31dcfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DCFCu;
        // 0x31dd00: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dcfc) {
            ctx->pc = 0x31DD8Cu;
            goto label_31dd8c;
        }
    }
    ctx->pc = 0x31DD04u;
label_31dd04:
    // 0x31dd04: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x31dd04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_31dd08:
    // 0x31dd08: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x31dd08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31dd0c:
    // 0x31dd0c: 0xd22021  addu        $a0, $a2, $s2
    ctx->pc = 0x31dd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
label_31dd10:
    // 0x31dd10: 0x400013  mtlo        $v0
    ctx->pc = 0x31dd10u;
    ctx->lo = GPR_U64(ctx, 2);
label_31dd14:
    // 0x31dd14: 0x71891800  madd        $v1, $t4, $t1
    ctx->pc = 0x31dd14u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 9); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_31dd18:
    // 0x31dd18: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x31dd18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31dd1c:
    // 0x31dd1c: 0x25420001  addiu       $v0, $t2, 0x1
    ctx->pc = 0x31dd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_31dd20:
    // 0x31dd20: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x31dd20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31dd24:
    // 0x31dd24: 0x304a00ff  andi        $t2, $v0, 0xFF
    ctx->pc = 0x31dd24u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_31dd28:
    // 0x31dd28: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x31dd28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_31dd2c:
    // 0x31dd2c: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x31dd2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_31dd30:
    // 0x31dd30: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x31dd30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_31dd34:
    // 0x31dd34: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x31dd34u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_31dd38:
    // 0x31dd38: 0x24c6000c  addiu       $a2, $a2, 0xC
    ctx->pc = 0x31dd38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
label_31dd3c:
    // 0x31dd3c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x31dd3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_31dd40:
    // 0x31dd40: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x31dd40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_31dd44:
    // 0x31dd44: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x31dd44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31dd48:
    // 0x31dd48: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x31dd48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_31dd4c:
    // 0x31dd4c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x31dd4cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_31dd50:
    // 0x31dd50: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x31dd50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_31dd54:
    // 0x31dd54: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x31dd54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31dd58:
    // 0x31dd58: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x31dd58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_31dd5c:
    // 0x31dd5c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x31dd5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_31dd60:
    // 0x31dd60: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x31dd60u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_31dd64:
    // 0x31dd64: 0xe4630008  swc1        $f3, 0x8($v1)
    ctx->pc = 0x31dd64u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_31dd68:
    // 0x31dd68: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x31dd68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_31dd6c:
    // 0x31dd6c: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x31dd6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
label_31dd70:
    // 0x31dd70: 0x142102b  sltu        $v0, $t2, $v0
    ctx->pc = 0x31dd70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_31dd74:
    // 0x31dd74: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_31dd78:
    if (ctx->pc == 0x31DD78u) {
        ctx->pc = 0x31DD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DD74u;
        // 0x31dd78: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DD7Cu;
        goto label_31dd7c;
    }
    ctx->pc = 0x31DD74u;
    {
        const bool branch_taken_0x31dd74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31DD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DD74u;
        // 0x31dd78: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dd74) {
            ctx->pc = 0x31DD18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31dd18;
        }
    }
    ctx->pc = 0x31DD7Cu;
label_31dd7c:
    // 0x31dd7c: 0x10000003  b           . + 4 + (0x3 << 2)
label_31dd80:
    if (ctx->pc == 0x31DD80u) {
        ctx->pc = 0x31DD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DD7Cu;
        // 0x31dd80: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DD84u;
        goto label_31dd84;
    }
    ctx->pc = 0x31DD7Cu;
    {
        const bool branch_taken_0x31dd7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DD7Cu;
        // 0x31dd80: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dd7c) {
            ctx->pc = 0x31DD8Cu;
            goto label_31dd8c;
        }
    }
    ctx->pc = 0x31DD84u;
label_31dd84:
    // 0x31dd84: 0x250b0001  addiu       $t3, $t0, 0x1
    ctx->pc = 0x31dd84u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_31dd88:
    // 0x31dd88: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x31dd88u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_31dd8c:
    // 0x31dd8c: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x31dd8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_31dd90:
    // 0x31dd90: 0x105102b  sltu        $v0, $t0, $a1
    ctx->pc = 0x31dd90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_31dd94:
    // 0x31dd94: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
label_31dd98:
    if (ctx->pc == 0x31DD98u) {
        ctx->pc = 0x31DD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DD94u;
        // 0x31dd98: 0xe82021  addu        $a0, $a3, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DD9Cu;
        goto label_31dd9c;
    }
    ctx->pc = 0x31DD94u;
    {
        const bool branch_taken_0x31dd94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31DD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DD94u;
        // 0x31dd98: 0xe82021  addu        $a0, $a3, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dd94) {
            ctx->pc = 0x31DCE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31dce8;
        }
    }
    ctx->pc = 0x31DD9Cu;
label_31dd9c:
    // 0x31dd9c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x31dd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_31dda0:
    // 0x31dda0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x31dda0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_31dda4:
    // 0x31dda4: 0x50400038  beql        $v0, $zero, . + 4 + (0x38 << 2)
label_31dda8:
    if (ctx->pc == 0x31DDA8u) {
        ctx->pc = 0x31DDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DDA4u;
        // 0x31dda8: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DDACu;
        goto label_31ddac;
    }
    ctx->pc = 0x31DDA4u;
    {
        const bool branch_taken_0x31dda4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31dda4) {
            ctx->pc = 0x31DDA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31DDA4u;
            // 0x31dda8: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31DE88u;
            goto label_31de88;
        }
    }
    ctx->pc = 0x31DDACu;
label_31ddac:
    // 0x31ddac: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x31ddacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31ddb0:
    // 0x31ddb0: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x31ddb0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31ddb4:
    // 0x31ddb4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x31ddb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31ddb8:
    // 0x31ddb8: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_31ddbc:
    if (ctx->pc == 0x31DDBCu) {
        ctx->pc = 0x31DDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DDB8u;
        // 0x31ddbc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DDC0u;
        goto label_31ddc0;
    }
    ctx->pc = 0x31DDB8u;
    {
        const bool branch_taken_0x31ddb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DDB8u;
        // 0x31ddbc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ddb8) {
            ctx->pc = 0x31DE84u;
            goto label_31de84;
        }
    }
    ctx->pc = 0x31DDC0u;
label_31ddc0:
    // 0x31ddc0: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x31ddc0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_31ddc4:
    // 0x31ddc4: 0x2409000c  addiu       $t1, $zero, 0xC
    ctx->pc = 0x31ddc4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_31ddc8:
    // 0x31ddc8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31ddc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31ddcc:
    // 0x31ddcc: 0xe82021  addu        $a0, $a3, $t0
    ctx->pc = 0x31ddccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_31ddd0:
    // 0x31ddd0: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x31ddd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_31ddd4:
    // 0x31ddd4: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x31ddd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_31ddd8:
    // 0x31ddd8: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_31dddc:
    if (ctx->pc == 0x31DDDCu) {
        ctx->pc = 0x31DDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DDD8u;
        // 0x31dddc: 0x3062007f  andi        $v0, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DDE0u;
        goto label_31dde0;
    }
    ctx->pc = 0x31DDD8u;
    {
        const bool branch_taken_0x31ddd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DDD8u;
        // 0x31dddc: 0x3062007f  andi        $v0, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ddd8) {
            ctx->pc = 0x31DE6Cu;
            goto label_31de6c;
        }
    }
    ctx->pc = 0x31DDE0u;
label_31dde0:
    // 0x31dde0: 0x250b0001  addiu       $t3, $t0, 0x1
    ctx->pc = 0x31dde0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_31dde4:
    // 0x31dde4: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_31dde8:
    if (ctx->pc == 0x31DDE8u) {
        ctx->pc = 0x31DDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DDE4u;
        // 0x31dde8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DDECu;
        goto label_31ddec;
    }
    ctx->pc = 0x31DDE4u;
    {
        const bool branch_taken_0x31dde4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DDE4u;
        // 0x31dde8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dde4) {
            ctx->pc = 0x31DE74u;
            goto label_31de74;
        }
    }
    ctx->pc = 0x31DDECu;
label_31ddec:
    // 0x31ddec: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x31ddecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_31ddf0:
    // 0x31ddf0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x31ddf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31ddf4:
    // 0x31ddf4: 0xd62021  addu        $a0, $a2, $s6
    ctx->pc = 0x31ddf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 22)));
label_31ddf8:
    // 0x31ddf8: 0x400013  mtlo        $v0
    ctx->pc = 0x31ddf8u;
    ctx->lo = GPR_U64(ctx, 2);
label_31ddfc:
    // 0x31ddfc: 0x71891800  madd        $v1, $t4, $t1
    ctx->pc = 0x31ddfcu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 9); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_31de00:
    // 0x31de00: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x31de00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31de04:
    // 0x31de04: 0x25420001  addiu       $v0, $t2, 0x1
    ctx->pc = 0x31de04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_31de08:
    // 0x31de08: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x31de08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31de0c:
    // 0x31de0c: 0x304a00ff  andi        $t2, $v0, 0xFF
    ctx->pc = 0x31de0cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_31de10:
    // 0x31de10: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x31de10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_31de14:
    // 0x31de14: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x31de14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_31de18:
    // 0x31de18: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x31de18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_31de1c:
    // 0x31de1c: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x31de1cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_31de20:
    // 0x31de20: 0x24c6000c  addiu       $a2, $a2, 0xC
    ctx->pc = 0x31de20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
label_31de24:
    // 0x31de24: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x31de24u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_31de28:
    // 0x31de28: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x31de28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_31de2c:
    // 0x31de2c: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x31de2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31de30:
    // 0x31de30: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x31de30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_31de34:
    // 0x31de34: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x31de34u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_31de38:
    // 0x31de38: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x31de38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_31de3c:
    // 0x31de3c: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x31de3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31de40:
    // 0x31de40: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x31de40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_31de44:
    // 0x31de44: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x31de44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_31de48:
    // 0x31de48: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x31de48u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_31de4c:
    // 0x31de4c: 0xe4630008  swc1        $f3, 0x8($v1)
    ctx->pc = 0x31de4cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_31de50:
    // 0x31de50: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x31de50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_31de54:
    // 0x31de54: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x31de54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
label_31de58:
    // 0x31de58: 0x142102b  sltu        $v0, $t2, $v0
    ctx->pc = 0x31de58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_31de5c:
    // 0x31de5c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_31de60:
    if (ctx->pc == 0x31DE60u) {
        ctx->pc = 0x31DE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DE5Cu;
        // 0x31de60: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DE64u;
        goto label_31de64;
    }
    ctx->pc = 0x31DE5Cu;
    {
        const bool branch_taken_0x31de5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31DE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DE5Cu;
        // 0x31de60: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31de5c) {
            ctx->pc = 0x31DE00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31de00;
        }
    }
    ctx->pc = 0x31DE64u;
label_31de64:
    // 0x31de64: 0x10000003  b           . + 4 + (0x3 << 2)
label_31de68:
    if (ctx->pc == 0x31DE68u) {
        ctx->pc = 0x31DE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DE64u;
        // 0x31de68: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DE6Cu;
        goto label_31de6c;
    }
    ctx->pc = 0x31DE64u;
    {
        const bool branch_taken_0x31de64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DE64u;
        // 0x31de68: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31de64) {
            ctx->pc = 0x31DE74u;
            goto label_31de74;
        }
    }
    ctx->pc = 0x31DE6Cu;
label_31de6c:
    // 0x31de6c: 0x250b0001  addiu       $t3, $t0, 0x1
    ctx->pc = 0x31de6cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_31de70:
    // 0x31de70: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x31de70u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_31de74:
    // 0x31de74: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x31de74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_31de78:
    // 0x31de78: 0x105102b  sltu        $v0, $t0, $a1
    ctx->pc = 0x31de78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_31de7c:
    // 0x31de7c: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
label_31de80:
    if (ctx->pc == 0x31DE80u) {
        ctx->pc = 0x31DE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DE7Cu;
        // 0x31de80: 0xe82021  addu        $a0, $a3, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DE84u;
        goto label_31de84;
    }
    ctx->pc = 0x31DE7Cu;
    {
        const bool branch_taken_0x31de7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31DE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DE7Cu;
        // 0x31de80: 0xe82021  addu        $a0, $a3, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31de7c) {
            ctx->pc = 0x31DDD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31ddd0;
        }
    }
    ctx->pc = 0x31DE84u;
label_31de84:
    // 0x31de84: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x31de84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_31de88:
    // 0x31de88: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x31de88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_31de8c:
    // 0x31de8c: 0x10400075  beqz        $v0, . + 4 + (0x75 << 2)
label_31de90:
    if (ctx->pc == 0x31DE90u) {
        ctx->pc = 0x31DE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DE8Cu;
        // 0x31de90: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DE94u;
        goto label_31de94;
    }
    ctx->pc = 0x31DE8Cu;
    {
        const bool branch_taken_0x31de8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DE8Cu;
        // 0x31de90: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31de8c) {
            ctx->pc = 0x31E064u;
            goto label_31e064;
        }
    }
    ctx->pc = 0x31DE94u;
label_31de94:
    // 0x31de94: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x31de94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31de98:
    // 0x31de98: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x31de98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31de9c:
    // 0x31de9c: 0x10400071  beqz        $v0, . + 4 + (0x71 << 2)
label_31dea0:
    if (ctx->pc == 0x31DEA0u) {
        ctx->pc = 0x31DEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DE9Cu;
        // 0x31dea0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DEA4u;
        goto label_31dea4;
    }
    ctx->pc = 0x31DE9Cu;
    {
        const bool branch_taken_0x31de9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DE9Cu;
        // 0x31dea0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31de9c) {
            ctx->pc = 0x31E064u;
            goto label_31e064;
        }
    }
    ctx->pc = 0x31DEA4u;
label_31dea4:
    // 0x31dea4: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x31dea4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31dea8:
    // 0x31dea8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x31dea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_31deac:
    // 0x31deac: 0x0  nop
    ctx->pc = 0x31deacu;
    // NOP
label_31deb0:
    // 0x31deb0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x31deb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_31deb4:
    // 0x31deb4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x31deb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_31deb8:
    // 0x31deb8: 0x30430080  andi        $v1, $v0, 0x80
    ctx->pc = 0x31deb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_31debc:
    // 0x31debc: 0x10600062  beqz        $v1, . + 4 + (0x62 << 2)
label_31dec0:
    if (ctx->pc == 0x31DEC0u) {
        ctx->pc = 0x31DEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DEBCu;
        // 0x31dec0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DEC4u;
        goto label_31dec4;
    }
    ctx->pc = 0x31DEBCu;
    {
        const bool branch_taken_0x31debc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DEBCu;
        // 0x31dec0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31debc) {
            ctx->pc = 0x31E048u;
            goto label_31e048;
        }
    }
    ctx->pc = 0x31DEC4u;
label_31dec4:
    // 0x31dec4: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x31dec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
label_31dec8:
    // 0x31dec8: 0x10400062  beqz        $v0, . + 4 + (0x62 << 2)
label_31decc:
    if (ctx->pc == 0x31DECCu) {
        ctx->pc = 0x31DECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DEC8u;
        // 0x31decc: 0x250b0001  addiu       $t3, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DED0u;
        goto label_31ded0;
    }
    ctx->pc = 0x31DEC8u;
    {
        const bool branch_taken_0x31dec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DEC8u;
        // 0x31decc: 0x250b0001  addiu       $t3, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dec8) {
            ctx->pc = 0x31E054u;
            goto label_31e054;
        }
    }
    ctx->pc = 0x31DED0u;
label_31ded0:
    // 0x31ded0: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x31ded0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_31ded4:
    // 0x31ded4: 0xc1080  sll         $v0, $t4, 2
    ctx->pc = 0x31ded4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
label_31ded8:
    // 0x31ded8: 0x2a0682d  daddu       $t5, $s5, $zero
    ctx->pc = 0x31ded8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_31dedc:
    // 0x31dedc: 0x1de4821  addu        $t1, $t6, $fp
    ctx->pc = 0x31dedcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 30)));
label_31dee0:
    // 0x31dee0: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x31dee0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_31dee4:
    // 0x31dee4: 0x0  nop
    ctx->pc = 0x31dee4u;
    // NOP
label_31dee8:
    // 0x31dee8: 0x91240003  lbu         $a0, 0x3($t1)
    ctx->pc = 0x31dee8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 3)));
label_31deec:
    // 0x31deec: 0x25420001  addiu       $v0, $t2, 0x1
    ctx->pc = 0x31deecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_31def0:
    // 0x31def0: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x31def0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_31def4:
    // 0x31def4: 0x304a00ff  andi        $t2, $v0, 0xFF
    ctx->pc = 0x31def4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_31def8:
    // 0x31def8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x31def8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31defc:
    // 0x31defc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31defcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_31df00:
    // 0x31df00: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x31df00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_31df04:
    // 0x31df04: 0x1a31821  addu        $v1, $t5, $v1
    ctx->pc = 0x31df04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
label_31df08:
    // 0x31df08: 0x90e40003  lbu         $a0, 0x3($a3)
    ctx->pc = 0x31df08u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
label_31df0c:
    // 0x31df0c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x31df0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31df10:
    // 0x31df10: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x31df10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
label_31df14:
    // 0x31df14: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x31df14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_31df18:
    // 0x31df18: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x31df18u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_31df1c:
    // 0x31df1c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x31df1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_31df20:
    // 0x31df20: 0x90e30002  lbu         $v1, 0x2($a3)
    ctx->pc = 0x31df20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
label_31df24:
    // 0x31df24: 0x90e50001  lbu         $a1, 0x1($a3)
    ctx->pc = 0x31df24u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
label_31df28:
    // 0x31df28: 0x25ce0004  addiu       $t6, $t6, 0x4
    ctx->pc = 0x31df28u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
label_31df2c:
    // 0x31df2c: 0x90e60000  lbu         $a2, 0x0($a3)
    ctx->pc = 0x31df2cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_31df30:
    // 0x31df30: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31df30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
label_31df34:
    // 0x31df34: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x31df34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_31df38:
    // 0x31df38: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x31df38u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_31df3c:
    // 0x31df3c: 0xa0e40003  sb          $a0, 0x3($a3)
    ctx->pc = 0x31df3cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 4));
label_31df40:
    // 0x31df40: 0x91220002  lbu         $v0, 0x2($t1)
    ctx->pc = 0x31df40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
label_31df44:
    // 0x31df44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31df44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31df48:
    // 0x31df48: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31df48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_31df4c:
    // 0x31df4c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x31df4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_31df50:
    // 0x31df50: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31df50u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
label_31df54:
    // 0x31df54: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x31df54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_31df58:
    // 0x31df58: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x31df58u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_31df5c:
    // 0x31df5c: 0xa0e30002  sb          $v1, 0x2($a3)
    ctx->pc = 0x31df5cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 3));
label_31df60:
    // 0x31df60: 0x91220001  lbu         $v0, 0x1($t1)
    ctx->pc = 0x31df60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
label_31df64:
    // 0x31df64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31df64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31df68:
    // 0x31df68: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31df68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_31df6c:
    // 0x31df6c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x31df6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_31df70:
    // 0x31df70: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31df70u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
label_31df74:
    // 0x31df74: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x31df74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_31df78:
    // 0x31df78: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x31df78u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_31df7c:
    // 0x31df7c: 0xa0e50001  sb          $a1, 0x1($a3)
    ctx->pc = 0x31df7cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 5));
label_31df80:
    // 0x31df80: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x31df80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_31df84:
    // 0x31df84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31df84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31df88:
    // 0x31df88: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31df88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_31df8c:
    // 0x31df8c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x31df8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_31df90:
    // 0x31df90: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31df90u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_31df94:
    // 0x31df94: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x31df94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_31df98:
    // 0x31df98: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x31df98u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_31df9c:
    // 0x31df9c: 0xa0e60000  sb          $a2, 0x0($a3)
    ctx->pc = 0x31df9cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 6));
label_31dfa0:
    // 0x31dfa0: 0x91220003  lbu         $v0, 0x3($t1)
    ctx->pc = 0x31dfa0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 3)));
label_31dfa4:
    // 0x31dfa4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31dfa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31dfa8:
    // 0x31dfa8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31dfa8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_31dfac:
    // 0x31dfac: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x31dfacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_31dfb0:
    // 0x31dfb0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31dfb0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_31dfb4:
    // 0x31dfb4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x31dfb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_31dfb8:
    // 0x31dfb8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x31dfb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_31dfbc:
    // 0x31dfbc: 0xa0e40003  sb          $a0, 0x3($a3)
    ctx->pc = 0x31dfbcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 4));
label_31dfc0:
    // 0x31dfc0: 0x91220002  lbu         $v0, 0x2($t1)
    ctx->pc = 0x31dfc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
label_31dfc4:
    // 0x31dfc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31dfc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31dfc8:
    // 0x31dfc8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31dfc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_31dfcc:
    // 0x31dfcc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x31dfccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_31dfd0:
    // 0x31dfd0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31dfd0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_31dfd4:
    // 0x31dfd4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x31dfd4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_31dfd8:
    // 0x31dfd8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x31dfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_31dfdc:
    // 0x31dfdc: 0xa0e30002  sb          $v1, 0x2($a3)
    ctx->pc = 0x31dfdcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 3));
label_31dfe0:
    // 0x31dfe0: 0x91220001  lbu         $v0, 0x1($t1)
    ctx->pc = 0x31dfe0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
label_31dfe4:
    // 0x31dfe4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31dfe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31dfe8:
    // 0x31dfe8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31dfe8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_31dfec:
    // 0x31dfec: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x31dfecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_31dff0:
    // 0x31dff0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31dff0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_31dff4:
    // 0x31dff4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x31dff4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_31dff8:
    // 0x31dff8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x31dff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_31dffc:
    // 0x31dffc: 0xa0e50001  sb          $a1, 0x1($a3)
    ctx->pc = 0x31dffcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 5));
label_31e000:
    // 0x31e000: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x31e000u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_31e004:
    // 0x31e004: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x31e004u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_31e008:
    // 0x31e008: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31e008u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31e00c:
    // 0x31e00c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31e00cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_31e010:
    // 0x31e010: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x31e010u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_31e014:
    // 0x31e014: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31e014u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_31e018:
    // 0x31e018: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x31e018u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_31e01c:
    // 0x31e01c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x31e01cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_31e020:
    // 0x31e020: 0xa0e60000  sb          $a2, 0x0($a3)
    ctx->pc = 0x31e020u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 6));
label_31e024:
    // 0x31e024: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x31e024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_31e028:
    // 0x31e028: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x31e028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_31e02c:
    // 0x31e02c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x31e02cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_31e030:
    // 0x31e030: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x31e030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
label_31e034:
    // 0x31e034: 0x143182b  sltu        $v1, $t2, $v1
    ctx->pc = 0x31e034u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_31e038:
    // 0x31e038: 0x1460ffab  bnez        $v1, . + 4 + (-0x55 << 2)
label_31e03c:
    if (ctx->pc == 0x31E03Cu) {
        ctx->pc = 0x31E03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E038u;
        // 0x31e03c: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E040u;
        goto label_31e040;
    }
    ctx->pc = 0x31E038u;
    {
        const bool branch_taken_0x31e038 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E038u;
        // 0x31e03c: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e038) {
            ctx->pc = 0x31DEE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31dee8;
        }
    }
    ctx->pc = 0x31E040u;
label_31e040:
    // 0x31e040: 0x10000004  b           . + 4 + (0x4 << 2)
label_31e044:
    if (ctx->pc == 0x31E044u) {
        ctx->pc = 0x31E044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E040u;
        // 0x31e044: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E048u;
        goto label_31e048;
    }
    ctx->pc = 0x31E040u;
    {
        const bool branch_taken_0x31e040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E040u;
        // 0x31e044: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e040) {
            ctx->pc = 0x31E054u;
            goto label_31e054;
        }
    }
    ctx->pc = 0x31E048u;
label_31e048:
    // 0x31e048: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x31e048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
label_31e04c:
    // 0x31e04c: 0x250b0001  addiu       $t3, $t0, 0x1
    ctx->pc = 0x31e04cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_31e050:
    // 0x31e050: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x31e050u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_31e054:
    // 0x31e054: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x31e054u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_31e058:
    // 0x31e058: 0x105102b  sltu        $v0, $t0, $a1
    ctx->pc = 0x31e058u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_31e05c:
    // 0x31e05c: 0x5440ff94  bnel        $v0, $zero, . + 4 + (-0x6C << 2)
label_31e060:
    if (ctx->pc == 0x31E060u) {
        ctx->pc = 0x31E060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E05Cu;
        // 0x31e060: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E064u;
        goto label_31e064;
    }
    ctx->pc = 0x31E05Cu;
    {
        const bool branch_taken_0x31e05c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31e05c) {
            ctx->pc = 0x31E060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31E05Cu;
            // 0x31e060: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31DEB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31deb0;
        }
    }
    ctx->pc = 0x31E064u;
label_31e064:
    // 0x31e064: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x31e064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_31e068:
    // 0x31e068: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x31e068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_31e06c:
    // 0x31e06c: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
label_31e070:
    if (ctx->pc == 0x31E070u) {
        ctx->pc = 0x31E070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E06Cu;
        // 0x31e070: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E074u;
        goto label_31e074;
    }
    ctx->pc = 0x31E06Cu;
    {
        const bool branch_taken_0x31e06c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E06Cu;
        // 0x31e070: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e06c) {
            ctx->pc = 0x31E130u;
            goto label_31e130;
        }
    }
    ctx->pc = 0x31E074u;
label_31e074:
    // 0x31e074: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x31e074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31e078:
    // 0x31e078: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x31e078u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31e07c:
    // 0x31e07c: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_31e080:
    if (ctx->pc == 0x31E080u) {
        ctx->pc = 0x31E080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E07Cu;
        // 0x31e080: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E084u;
        goto label_31e084;
    }
    ctx->pc = 0x31E07Cu;
    {
        const bool branch_taken_0x31e07c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E07Cu;
        // 0x31e080: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e07c) {
            ctx->pc = 0x31E130u;
            goto label_31e130;
        }
    }
    ctx->pc = 0x31E084u;
label_31e084:
    // 0x31e084: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x31e084u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_31e088:
    // 0x31e088: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31e088u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31e08c:
    // 0x31e08c: 0xe82021  addu        $a0, $a3, $t0
    ctx->pc = 0x31e08cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_31e090:
    // 0x31e090: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x31e090u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_31e094:
    // 0x31e094: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x31e094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_31e098:
    // 0x31e098: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_31e09c:
    if (ctx->pc == 0x31E09Cu) {
        ctx->pc = 0x31E09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E098u;
        // 0x31e09c: 0x3062007f  andi        $v0, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E0A0u;
        goto label_31e0a0;
    }
    ctx->pc = 0x31E098u;
    {
        const bool branch_taken_0x31e098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E098u;
        // 0x31e09c: 0x3062007f  andi        $v0, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e098) {
            ctx->pc = 0x31E118u;
            goto label_31e118;
        }
    }
    ctx->pc = 0x31E0A0u;
label_31e0a0:
    // 0x31e0a0: 0x250b0001  addiu       $t3, $t0, 0x1
    ctx->pc = 0x31e0a0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_31e0a4:
    // 0x31e0a4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_31e0a8:
    if (ctx->pc == 0x31E0A8u) {
        ctx->pc = 0x31E0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E0A4u;
        // 0x31e0a8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E0ACu;
        goto label_31e0ac;
    }
    ctx->pc = 0x31E0A4u;
    {
        const bool branch_taken_0x31e0a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E0A4u;
        // 0x31e0a8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e0a4) {
            ctx->pc = 0x31E120u;
            goto label_31e120;
        }
    }
    ctx->pc = 0x31E0ACu;
label_31e0ac:
    // 0x31e0ac: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x31e0acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31e0b0:
    // 0x31e0b0: 0xc10c0  sll         $v0, $t4, 3
    ctx->pc = 0x31e0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
label_31e0b4:
    // 0x31e0b4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x31e0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_31e0b8:
    // 0x31e0b8: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x31e0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_31e0bc:
    // 0x31e0bc: 0xcf2021  addu        $a0, $a2, $t7
    ctx->pc = 0x31e0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 15)));
label_31e0c0:
    // 0x31e0c0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x31e0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31e0c4:
    // 0x31e0c4: 0x25420001  addiu       $v0, $t2, 0x1
    ctx->pc = 0x31e0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_31e0c8:
    // 0x31e0c8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x31e0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31e0cc:
    // 0x31e0cc: 0x304a00ff  andi        $t2, $v0, 0xFF
    ctx->pc = 0x31e0ccu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_31e0d0:
    // 0x31e0d0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x31e0d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_31e0d4:
    // 0x31e0d4: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x31e0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_31e0d8:
    // 0x31e0d8: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x31e0d8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_31e0dc:
    // 0x31e0dc: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x31e0dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_31e0e0:
    // 0x31e0e0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x31e0e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_31e0e4:
    // 0x31e0e4: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x31e0e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_31e0e8:
    // 0x31e0e8: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x31e0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31e0ec:
    // 0x31e0ec: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x31e0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_31e0f0:
    // 0x31e0f0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x31e0f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_31e0f4:
    // 0x31e0f4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x31e0f4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_31e0f8:
    // 0x31e0f8: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x31e0f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_31e0fc:
    // 0x31e0fc: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x31e0fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_31e100:
    // 0x31e100: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x31e100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
label_31e104:
    // 0x31e104: 0x142102b  sltu        $v0, $t2, $v0
    ctx->pc = 0x31e104u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_31e108:
    // 0x31e108: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_31e10c:
    if (ctx->pc == 0x31E10Cu) {
        ctx->pc = 0x31E10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E108u;
        // 0x31e10c: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E110u;
        goto label_31e110;
    }
    ctx->pc = 0x31E108u;
    {
        const bool branch_taken_0x31e108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E108u;
        // 0x31e10c: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e108) {
            ctx->pc = 0x31E0C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31e0c0;
        }
    }
    ctx->pc = 0x31E110u;
label_31e110:
    // 0x31e110: 0x10000003  b           . + 4 + (0x3 << 2)
label_31e114:
    if (ctx->pc == 0x31E114u) {
        ctx->pc = 0x31E114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E110u;
        // 0x31e114: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E118u;
        goto label_31e118;
    }
    ctx->pc = 0x31E110u;
    {
        const bool branch_taken_0x31e110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E110u;
        // 0x31e114: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e110) {
            ctx->pc = 0x31E120u;
            goto label_31e120;
        }
    }
    ctx->pc = 0x31E118u;
label_31e118:
    // 0x31e118: 0x250b0001  addiu       $t3, $t0, 0x1
    ctx->pc = 0x31e118u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_31e11c:
    // 0x31e11c: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x31e11cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_31e120:
    // 0x31e120: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x31e120u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_31e124:
    // 0x31e124: 0x105102b  sltu        $v0, $t0, $a1
    ctx->pc = 0x31e124u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_31e128:
    // 0x31e128: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
label_31e12c:
    if (ctx->pc == 0x31E12Cu) {
        ctx->pc = 0x31E12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E128u;
        // 0x31e12c: 0xe82021  addu        $a0, $a3, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E130u;
        goto label_31e130;
    }
    ctx->pc = 0x31E128u;
    {
        const bool branch_taken_0x31e128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E128u;
        // 0x31e12c: 0xe82021  addu        $a0, $a3, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e128) {
            ctx->pc = 0x31E090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31e090;
        }
    }
    ctx->pc = 0x31E130u;
label_31e130:
    // 0x31e130: 0xc0e2d08  jal         func_38B420
label_31e134:
    if (ctx->pc == 0x31E134u) {
        ctx->pc = 0x31E134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E130u;
        // 0x31e134: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E138u;
        goto label_31e138;
    }
    ctx->pc = 0x31E130u;
    SET_GPR_U32(ctx, 31, 0x31E138u);
    ctx->pc = 0x31E134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E130u;
    // 0x31e134: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B420u, 0x31E130u, 0x31E138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E138u;
label_31e138:
    // 0x31e138: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x31e138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_31e13c:
    // 0x31e13c: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x31e13cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_31e140:
    // 0x31e140: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x31e140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_31e144:
    // 0x31e144: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x31e144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_31e148:
    // 0x31e148: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x31e148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_31e14c:
    // 0x31e14c: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x31e14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
label_31e150:
    // 0x31e150: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x31e150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31e154:
    // 0x31e154: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x31e154u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_31e158:
    // 0x31e158: 0x1460febb  bnez        $v1, . + 4 + (-0x145 << 2)
label_31e15c:
    if (ctx->pc == 0x31E15Cu) {
        ctx->pc = 0x31E15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E158u;
        // 0x31e15c: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E160u;
        goto label_31e160;
    }
    ctx->pc = 0x31E158u;
    {
        const bool branch_taken_0x31e158 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E158u;
        // 0x31e15c: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e158) {
            ctx->pc = 0x31DC48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31dc48;
        }
    }
    ctx->pc = 0x31E160u;
label_31e160:
    // 0x31e160: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x31e160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_31e164:
    // 0x31e164: 0x40f809  jalr        $v0
label_31e168:
    if (ctx->pc == 0x31E168u) {
        ctx->pc = 0x31E168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E164u;
        // 0x31e168: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E16Cu;
        goto label_31e16c;
    }
    ctx->pc = 0x31E164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31E16Cu);
        ctx->pc = 0x31E168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E164u;
        // 0x31e168: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E164u, 0x31E16Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31E16Cu;
label_31e16c:
    // 0x31e16c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x31e16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_31e170:
    // 0x31e170: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x31e170u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_31e174:
    // 0x31e174: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x31e174u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_31e178:
    // 0x31e178: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x31e178u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_31e17c:
    // 0x31e17c: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x31e17cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_31e180:
    // 0x31e180: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x31e180u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_31e184:
    // 0x31e184: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x31e184u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_31e188:
    // 0x31e188: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x31e188u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_31e18c:
    // 0x31e18c: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x31e18cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_31e190:
    // 0x31e190: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x31e190u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_31e194:
    // 0x31e194: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x31e194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_31e198:
    // 0x31e198: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x31e198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_31e19c:
    // 0x31e19c: 0x3e00008  jr          $ra
label_31e1a0:
    if (ctx->pc == 0x31E1A0u) {
        ctx->pc = 0x31E1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E19Cu;
        // 0x31e1a0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E1A4u;
        goto label_31e1a4;
    }
    ctx->pc = 0x31E19Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E19Cu;
        // 0x31e1a0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E19Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E1A4u;
label_31e1a4:
    // 0x31e1a4: 0x0  nop
    ctx->pc = 0x31e1a4u;
    // NOP
    ctx->pc = 0x31e1a8u;
}
