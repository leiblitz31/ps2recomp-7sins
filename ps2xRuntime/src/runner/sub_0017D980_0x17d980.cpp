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

// Function: sub_0017D980
// Address: 0x17d980 - 0x17dfb0
void sub_0017D980_0x17d980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D980_0x17d980");
#endif

    switch (ctx->pc) {
        case 0x17d980u: goto label_17d980;
        case 0x17d984u: goto label_17d984;
        case 0x17d988u: goto label_17d988;
        case 0x17d98cu: goto label_17d98c;
        case 0x17d990u: goto label_17d990;
        case 0x17d994u: goto label_17d994;
        case 0x17d998u: goto label_17d998;
        case 0x17d99cu: goto label_17d99c;
        case 0x17d9a0u: goto label_17d9a0;
        case 0x17d9a4u: goto label_17d9a4;
        case 0x17d9a8u: goto label_17d9a8;
        case 0x17d9acu: goto label_17d9ac;
        case 0x17d9b0u: goto label_17d9b0;
        case 0x17d9b4u: goto label_17d9b4;
        case 0x17d9b8u: goto label_17d9b8;
        case 0x17d9bcu: goto label_17d9bc;
        case 0x17d9c0u: goto label_17d9c0;
        case 0x17d9c4u: goto label_17d9c4;
        case 0x17d9c8u: goto label_17d9c8;
        case 0x17d9ccu: goto label_17d9cc;
        case 0x17d9d0u: goto label_17d9d0;
        case 0x17d9d4u: goto label_17d9d4;
        case 0x17d9d8u: goto label_17d9d8;
        case 0x17d9dcu: goto label_17d9dc;
        case 0x17d9e0u: goto label_17d9e0;
        case 0x17d9e4u: goto label_17d9e4;
        case 0x17d9e8u: goto label_17d9e8;
        case 0x17d9ecu: goto label_17d9ec;
        case 0x17d9f0u: goto label_17d9f0;
        case 0x17d9f4u: goto label_17d9f4;
        case 0x17d9f8u: goto label_17d9f8;
        case 0x17d9fcu: goto label_17d9fc;
        case 0x17da00u: goto label_17da00;
        case 0x17da04u: goto label_17da04;
        case 0x17da08u: goto label_17da08;
        case 0x17da0cu: goto label_17da0c;
        case 0x17da10u: goto label_17da10;
        case 0x17da14u: goto label_17da14;
        case 0x17da18u: goto label_17da18;
        case 0x17da1cu: goto label_17da1c;
        case 0x17da20u: goto label_17da20;
        case 0x17da24u: goto label_17da24;
        case 0x17da28u: goto label_17da28;
        case 0x17da2cu: goto label_17da2c;
        case 0x17da30u: goto label_17da30;
        case 0x17da34u: goto label_17da34;
        case 0x17da38u: goto label_17da38;
        case 0x17da3cu: goto label_17da3c;
        case 0x17da40u: goto label_17da40;
        case 0x17da44u: goto label_17da44;
        case 0x17da48u: goto label_17da48;
        case 0x17da4cu: goto label_17da4c;
        case 0x17da50u: goto label_17da50;
        case 0x17da54u: goto label_17da54;
        case 0x17da58u: goto label_17da58;
        case 0x17da5cu: goto label_17da5c;
        case 0x17da60u: goto label_17da60;
        case 0x17da64u: goto label_17da64;
        case 0x17da68u: goto label_17da68;
        case 0x17da6cu: goto label_17da6c;
        case 0x17da70u: goto label_17da70;
        case 0x17da74u: goto label_17da74;
        case 0x17da78u: goto label_17da78;
        case 0x17da7cu: goto label_17da7c;
        case 0x17da80u: goto label_17da80;
        case 0x17da84u: goto label_17da84;
        case 0x17da88u: goto label_17da88;
        case 0x17da8cu: goto label_17da8c;
        case 0x17da90u: goto label_17da90;
        case 0x17da94u: goto label_17da94;
        case 0x17da98u: goto label_17da98;
        case 0x17da9cu: goto label_17da9c;
        case 0x17daa0u: goto label_17daa0;
        case 0x17daa4u: goto label_17daa4;
        case 0x17daa8u: goto label_17daa8;
        case 0x17daacu: goto label_17daac;
        case 0x17dab0u: goto label_17dab0;
        case 0x17dab4u: goto label_17dab4;
        case 0x17dab8u: goto label_17dab8;
        case 0x17dabcu: goto label_17dabc;
        case 0x17dac0u: goto label_17dac0;
        case 0x17dac4u: goto label_17dac4;
        case 0x17dac8u: goto label_17dac8;
        case 0x17daccu: goto label_17dacc;
        case 0x17dad0u: goto label_17dad0;
        case 0x17dad4u: goto label_17dad4;
        case 0x17dad8u: goto label_17dad8;
        case 0x17dadcu: goto label_17dadc;
        case 0x17dae0u: goto label_17dae0;
        case 0x17dae4u: goto label_17dae4;
        case 0x17dae8u: goto label_17dae8;
        case 0x17daecu: goto label_17daec;
        case 0x17daf0u: goto label_17daf0;
        case 0x17daf4u: goto label_17daf4;
        case 0x17daf8u: goto label_17daf8;
        case 0x17dafcu: goto label_17dafc;
        case 0x17db00u: goto label_17db00;
        case 0x17db04u: goto label_17db04;
        case 0x17db08u: goto label_17db08;
        case 0x17db0cu: goto label_17db0c;
        case 0x17db10u: goto label_17db10;
        case 0x17db14u: goto label_17db14;
        case 0x17db18u: goto label_17db18;
        case 0x17db1cu: goto label_17db1c;
        case 0x17db20u: goto label_17db20;
        case 0x17db24u: goto label_17db24;
        case 0x17db28u: goto label_17db28;
        case 0x17db2cu: goto label_17db2c;
        case 0x17db30u: goto label_17db30;
        case 0x17db34u: goto label_17db34;
        case 0x17db38u: goto label_17db38;
        case 0x17db3cu: goto label_17db3c;
        case 0x17db40u: goto label_17db40;
        case 0x17db44u: goto label_17db44;
        case 0x17db48u: goto label_17db48;
        case 0x17db4cu: goto label_17db4c;
        case 0x17db50u: goto label_17db50;
        case 0x17db54u: goto label_17db54;
        case 0x17db58u: goto label_17db58;
        case 0x17db5cu: goto label_17db5c;
        case 0x17db60u: goto label_17db60;
        case 0x17db64u: goto label_17db64;
        case 0x17db68u: goto label_17db68;
        case 0x17db6cu: goto label_17db6c;
        case 0x17db70u: goto label_17db70;
        case 0x17db74u: goto label_17db74;
        case 0x17db78u: goto label_17db78;
        case 0x17db7cu: goto label_17db7c;
        case 0x17db80u: goto label_17db80;
        case 0x17db84u: goto label_17db84;
        case 0x17db88u: goto label_17db88;
        case 0x17db8cu: goto label_17db8c;
        case 0x17db90u: goto label_17db90;
        case 0x17db94u: goto label_17db94;
        case 0x17db98u: goto label_17db98;
        case 0x17db9cu: goto label_17db9c;
        case 0x17dba0u: goto label_17dba0;
        case 0x17dba4u: goto label_17dba4;
        case 0x17dba8u: goto label_17dba8;
        case 0x17dbacu: goto label_17dbac;
        case 0x17dbb0u: goto label_17dbb0;
        case 0x17dbb4u: goto label_17dbb4;
        case 0x17dbb8u: goto label_17dbb8;
        case 0x17dbbcu: goto label_17dbbc;
        case 0x17dbc0u: goto label_17dbc0;
        case 0x17dbc4u: goto label_17dbc4;
        case 0x17dbc8u: goto label_17dbc8;
        case 0x17dbccu: goto label_17dbcc;
        case 0x17dbd0u: goto label_17dbd0;
        case 0x17dbd4u: goto label_17dbd4;
        case 0x17dbd8u: goto label_17dbd8;
        case 0x17dbdcu: goto label_17dbdc;
        case 0x17dbe0u: goto label_17dbe0;
        case 0x17dbe4u: goto label_17dbe4;
        case 0x17dbe8u: goto label_17dbe8;
        case 0x17dbecu: goto label_17dbec;
        case 0x17dbf0u: goto label_17dbf0;
        case 0x17dbf4u: goto label_17dbf4;
        case 0x17dbf8u: goto label_17dbf8;
        case 0x17dbfcu: goto label_17dbfc;
        case 0x17dc00u: goto label_17dc00;
        case 0x17dc04u: goto label_17dc04;
        case 0x17dc08u: goto label_17dc08;
        case 0x17dc0cu: goto label_17dc0c;
        case 0x17dc10u: goto label_17dc10;
        case 0x17dc14u: goto label_17dc14;
        case 0x17dc18u: goto label_17dc18;
        case 0x17dc1cu: goto label_17dc1c;
        case 0x17dc20u: goto label_17dc20;
        case 0x17dc24u: goto label_17dc24;
        case 0x17dc28u: goto label_17dc28;
        case 0x17dc2cu: goto label_17dc2c;
        case 0x17dc30u: goto label_17dc30;
        case 0x17dc34u: goto label_17dc34;
        case 0x17dc38u: goto label_17dc38;
        case 0x17dc3cu: goto label_17dc3c;
        case 0x17dc40u: goto label_17dc40;
        case 0x17dc44u: goto label_17dc44;
        case 0x17dc48u: goto label_17dc48;
        case 0x17dc4cu: goto label_17dc4c;
        case 0x17dc50u: goto label_17dc50;
        case 0x17dc54u: goto label_17dc54;
        case 0x17dc58u: goto label_17dc58;
        case 0x17dc5cu: goto label_17dc5c;
        case 0x17dc60u: goto label_17dc60;
        case 0x17dc64u: goto label_17dc64;
        case 0x17dc68u: goto label_17dc68;
        case 0x17dc6cu: goto label_17dc6c;
        case 0x17dc70u: goto label_17dc70;
        case 0x17dc74u: goto label_17dc74;
        case 0x17dc78u: goto label_17dc78;
        case 0x17dc7cu: goto label_17dc7c;
        case 0x17dc80u: goto label_17dc80;
        case 0x17dc84u: goto label_17dc84;
        case 0x17dc88u: goto label_17dc88;
        case 0x17dc8cu: goto label_17dc8c;
        case 0x17dc90u: goto label_17dc90;
        case 0x17dc94u: goto label_17dc94;
        case 0x17dc98u: goto label_17dc98;
        case 0x17dc9cu: goto label_17dc9c;
        case 0x17dca0u: goto label_17dca0;
        case 0x17dca4u: goto label_17dca4;
        case 0x17dca8u: goto label_17dca8;
        case 0x17dcacu: goto label_17dcac;
        case 0x17dcb0u: goto label_17dcb0;
        case 0x17dcb4u: goto label_17dcb4;
        case 0x17dcb8u: goto label_17dcb8;
        case 0x17dcbcu: goto label_17dcbc;
        case 0x17dcc0u: goto label_17dcc0;
        case 0x17dcc4u: goto label_17dcc4;
        case 0x17dcc8u: goto label_17dcc8;
        case 0x17dcccu: goto label_17dccc;
        case 0x17dcd0u: goto label_17dcd0;
        case 0x17dcd4u: goto label_17dcd4;
        case 0x17dcd8u: goto label_17dcd8;
        case 0x17dcdcu: goto label_17dcdc;
        case 0x17dce0u: goto label_17dce0;
        case 0x17dce4u: goto label_17dce4;
        case 0x17dce8u: goto label_17dce8;
        case 0x17dcecu: goto label_17dcec;
        case 0x17dcf0u: goto label_17dcf0;
        case 0x17dcf4u: goto label_17dcf4;
        case 0x17dcf8u: goto label_17dcf8;
        case 0x17dcfcu: goto label_17dcfc;
        case 0x17dd00u: goto label_17dd00;
        case 0x17dd04u: goto label_17dd04;
        case 0x17dd08u: goto label_17dd08;
        case 0x17dd0cu: goto label_17dd0c;
        case 0x17dd10u: goto label_17dd10;
        case 0x17dd14u: goto label_17dd14;
        case 0x17dd18u: goto label_17dd18;
        case 0x17dd1cu: goto label_17dd1c;
        case 0x17dd20u: goto label_17dd20;
        case 0x17dd24u: goto label_17dd24;
        case 0x17dd28u: goto label_17dd28;
        case 0x17dd2cu: goto label_17dd2c;
        case 0x17dd30u: goto label_17dd30;
        case 0x17dd34u: goto label_17dd34;
        case 0x17dd38u: goto label_17dd38;
        case 0x17dd3cu: goto label_17dd3c;
        case 0x17dd40u: goto label_17dd40;
        case 0x17dd44u: goto label_17dd44;
        case 0x17dd48u: goto label_17dd48;
        case 0x17dd4cu: goto label_17dd4c;
        case 0x17dd50u: goto label_17dd50;
        case 0x17dd54u: goto label_17dd54;
        case 0x17dd58u: goto label_17dd58;
        case 0x17dd5cu: goto label_17dd5c;
        case 0x17dd60u: goto label_17dd60;
        case 0x17dd64u: goto label_17dd64;
        case 0x17dd68u: goto label_17dd68;
        case 0x17dd6cu: goto label_17dd6c;
        case 0x17dd70u: goto label_17dd70;
        case 0x17dd74u: goto label_17dd74;
        case 0x17dd78u: goto label_17dd78;
        case 0x17dd7cu: goto label_17dd7c;
        case 0x17dd80u: goto label_17dd80;
        case 0x17dd84u: goto label_17dd84;
        case 0x17dd88u: goto label_17dd88;
        case 0x17dd8cu: goto label_17dd8c;
        case 0x17dd90u: goto label_17dd90;
        case 0x17dd94u: goto label_17dd94;
        case 0x17dd98u: goto label_17dd98;
        case 0x17dd9cu: goto label_17dd9c;
        case 0x17dda0u: goto label_17dda0;
        case 0x17dda4u: goto label_17dda4;
        case 0x17dda8u: goto label_17dda8;
        case 0x17ddacu: goto label_17ddac;
        case 0x17ddb0u: goto label_17ddb0;
        case 0x17ddb4u: goto label_17ddb4;
        case 0x17ddb8u: goto label_17ddb8;
        case 0x17ddbcu: goto label_17ddbc;
        case 0x17ddc0u: goto label_17ddc0;
        case 0x17ddc4u: goto label_17ddc4;
        case 0x17ddc8u: goto label_17ddc8;
        case 0x17ddccu: goto label_17ddcc;
        case 0x17ddd0u: goto label_17ddd0;
        case 0x17ddd4u: goto label_17ddd4;
        case 0x17ddd8u: goto label_17ddd8;
        case 0x17dddcu: goto label_17dddc;
        case 0x17dde0u: goto label_17dde0;
        case 0x17dde4u: goto label_17dde4;
        case 0x17dde8u: goto label_17dde8;
        case 0x17ddecu: goto label_17ddec;
        case 0x17ddf0u: goto label_17ddf0;
        case 0x17ddf4u: goto label_17ddf4;
        case 0x17ddf8u: goto label_17ddf8;
        case 0x17ddfcu: goto label_17ddfc;
        case 0x17de00u: goto label_17de00;
        case 0x17de04u: goto label_17de04;
        case 0x17de08u: goto label_17de08;
        case 0x17de0cu: goto label_17de0c;
        case 0x17de10u: goto label_17de10;
        case 0x17de14u: goto label_17de14;
        case 0x17de18u: goto label_17de18;
        case 0x17de1cu: goto label_17de1c;
        case 0x17de20u: goto label_17de20;
        case 0x17de24u: goto label_17de24;
        case 0x17de28u: goto label_17de28;
        case 0x17de2cu: goto label_17de2c;
        case 0x17de30u: goto label_17de30;
        case 0x17de34u: goto label_17de34;
        case 0x17de38u: goto label_17de38;
        case 0x17de3cu: goto label_17de3c;
        case 0x17de40u: goto label_17de40;
        case 0x17de44u: goto label_17de44;
        case 0x17de48u: goto label_17de48;
        case 0x17de4cu: goto label_17de4c;
        case 0x17de50u: goto label_17de50;
        case 0x17de54u: goto label_17de54;
        case 0x17de58u: goto label_17de58;
        case 0x17de5cu: goto label_17de5c;
        case 0x17de60u: goto label_17de60;
        case 0x17de64u: goto label_17de64;
        case 0x17de68u: goto label_17de68;
        case 0x17de6cu: goto label_17de6c;
        case 0x17de70u: goto label_17de70;
        case 0x17de74u: goto label_17de74;
        case 0x17de78u: goto label_17de78;
        case 0x17de7cu: goto label_17de7c;
        case 0x17de80u: goto label_17de80;
        case 0x17de84u: goto label_17de84;
        case 0x17de88u: goto label_17de88;
        case 0x17de8cu: goto label_17de8c;
        case 0x17de90u: goto label_17de90;
        case 0x17de94u: goto label_17de94;
        case 0x17de98u: goto label_17de98;
        case 0x17de9cu: goto label_17de9c;
        case 0x17dea0u: goto label_17dea0;
        case 0x17dea4u: goto label_17dea4;
        case 0x17dea8u: goto label_17dea8;
        case 0x17deacu: goto label_17deac;
        case 0x17deb0u: goto label_17deb0;
        case 0x17deb4u: goto label_17deb4;
        case 0x17deb8u: goto label_17deb8;
        case 0x17debcu: goto label_17debc;
        case 0x17dec0u: goto label_17dec0;
        case 0x17dec4u: goto label_17dec4;
        case 0x17dec8u: goto label_17dec8;
        case 0x17deccu: goto label_17decc;
        case 0x17ded0u: goto label_17ded0;
        case 0x17ded4u: goto label_17ded4;
        case 0x17ded8u: goto label_17ded8;
        case 0x17dedcu: goto label_17dedc;
        case 0x17dee0u: goto label_17dee0;
        case 0x17dee4u: goto label_17dee4;
        case 0x17dee8u: goto label_17dee8;
        case 0x17deecu: goto label_17deec;
        case 0x17def0u: goto label_17def0;
        case 0x17def4u: goto label_17def4;
        case 0x17def8u: goto label_17def8;
        case 0x17defcu: goto label_17defc;
        case 0x17df00u: goto label_17df00;
        case 0x17df04u: goto label_17df04;
        case 0x17df08u: goto label_17df08;
        case 0x17df0cu: goto label_17df0c;
        case 0x17df10u: goto label_17df10;
        case 0x17df14u: goto label_17df14;
        case 0x17df18u: goto label_17df18;
        case 0x17df1cu: goto label_17df1c;
        case 0x17df20u: goto label_17df20;
        case 0x17df24u: goto label_17df24;
        case 0x17df28u: goto label_17df28;
        case 0x17df2cu: goto label_17df2c;
        case 0x17df30u: goto label_17df30;
        case 0x17df34u: goto label_17df34;
        case 0x17df38u: goto label_17df38;
        case 0x17df3cu: goto label_17df3c;
        case 0x17df40u: goto label_17df40;
        case 0x17df44u: goto label_17df44;
        case 0x17df48u: goto label_17df48;
        case 0x17df4cu: goto label_17df4c;
        case 0x17df50u: goto label_17df50;
        case 0x17df54u: goto label_17df54;
        case 0x17df58u: goto label_17df58;
        case 0x17df5cu: goto label_17df5c;
        case 0x17df60u: goto label_17df60;
        case 0x17df64u: goto label_17df64;
        case 0x17df68u: goto label_17df68;
        case 0x17df6cu: goto label_17df6c;
        case 0x17df70u: goto label_17df70;
        case 0x17df74u: goto label_17df74;
        case 0x17df78u: goto label_17df78;
        case 0x17df7cu: goto label_17df7c;
        case 0x17df80u: goto label_17df80;
        case 0x17df84u: goto label_17df84;
        case 0x17df88u: goto label_17df88;
        case 0x17df8cu: goto label_17df8c;
        case 0x17df90u: goto label_17df90;
        case 0x17df94u: goto label_17df94;
        case 0x17df98u: goto label_17df98;
        case 0x17df9cu: goto label_17df9c;
        case 0x17dfa0u: goto label_17dfa0;
        case 0x17dfa4u: goto label_17dfa4;
        case 0x17dfa8u: goto label_17dfa8;
        case 0x17dfacu: goto label_17dfac;
        default: break;
    }

    ctx->pc = 0x17d980u;

label_17d980:
    // 0x17d980: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17d980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_17d984:
    // 0x17d984: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17d984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_17d988:
    // 0x17d988: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x17d988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_17d98c:
    // 0x17d98c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x17d98cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_17d990:
    // 0x17d990: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x17d990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_17d994:
    // 0x17d994: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x17d994u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17d998:
    // 0x17d998: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x17d998u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_17d99c:
    // 0x17d99c: 0x320f809  jalr        $t9
label_17d9a0:
    if (ctx->pc == 0x17D9A0u) {
        ctx->pc = 0x17D9A4u;
        goto label_17d9a4;
    }
    ctx->pc = 0x17D99Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17D9A4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D99Cu, 0x17D9A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17D9A4u;
label_17d9a4:
    // 0x17d9a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17d9a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17d9a8:
    // 0x17d9a8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x17d9a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_17d9ac:
    // 0x17d9ac: 0x3e00008  jr          $ra
label_17d9b0:
    if (ctx->pc == 0x17D9B0u) {
        ctx->pc = 0x17D9B4u;
        goto label_17d9b4;
    }
    ctx->pc = 0x17D9ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D9ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D9B4u;
label_17d9b4:
    // 0x17d9b4: 0x0  nop
    ctx->pc = 0x17d9b4u;
    // NOP
label_17d9b8:
    // 0x17d9b8: 0x0  nop
    ctx->pc = 0x17d9b8u;
    // NOP
label_17d9bc:
    // 0x17d9bc: 0x0  nop
    ctx->pc = 0x17d9bcu;
    // NOP
label_17d9c0:
    // 0x17d9c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17d9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_17d9c4:
    // 0x17d9c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17d9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_17d9c8:
    // 0x17d9c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17d9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17d9cc:
    // 0x17d9cc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x17d9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_17d9d0:
    // 0x17d9d0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x17d9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_17d9d4:
    // 0x17d9d4: 0x90630074  lbu         $v1, 0x74($v1)
    ctx->pc = 0x17d9d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 116)));
label_17d9d8:
    // 0x17d9d8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x17d9d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_17d9dc:
    // 0x17d9dc: 0x14600031  bnez        $v1, . + 4 + (0x31 << 2)
label_17d9e0:
    if (ctx->pc == 0x17D9E0u) {
        ctx->pc = 0x17D9E4u;
        goto label_17d9e4;
    }
    ctx->pc = 0x17D9DCu;
    {
        const bool branch_taken_0x17d9dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17d9dc) {
            ctx->pc = 0x17DAA4u;
            goto label_17daa4;
        }
    }
    ctx->pc = 0x17D9E4u;
label_17d9e4:
    // 0x17d9e4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x17d9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_17d9e8:
    // 0x17d9e8: 0xc055a84  jal         func_156A10
label_17d9ec:
    if (ctx->pc == 0x17D9ECu) {
        ctx->pc = 0x17D9F0u;
        goto label_17d9f0;
    }
    ctx->pc = 0x17D9E8u;
    SET_GPR_U32(ctx, 31, 0x17D9F0u);
    ctx->pc = 0x156A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156A10u, 0x17D9E8u, 0x17D9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D9F0u;
label_17d9f0:
    // 0x17d9f0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17d9f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17d9f4:
    // 0x17d9f4: 0x10000022  b           . + 4 + (0x22 << 2)
label_17d9f8:
    if (ctx->pc == 0x17D9F8u) {
        ctx->pc = 0x17D9FCu;
        goto label_17d9fc;
    }
    ctx->pc = 0x17D9F4u;
    {
        const bool branch_taken_0x17d9f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d9f4) {
            ctx->pc = 0x17DA80u;
            goto label_17da80;
        }
    }
    ctx->pc = 0x17D9FCu;
label_17d9fc:
    // 0x17d9fc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x17d9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_17da00:
    // 0x17da00: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x17da00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_17da04:
    // 0x17da04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17da04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17da08:
    // 0x17da08: 0xc05612c  jal         func_1584B0
label_17da0c:
    if (ctx->pc == 0x17DA0Cu) {
        ctx->pc = 0x17DA10u;
        goto label_17da10;
    }
    ctx->pc = 0x17DA08u;
    SET_GPR_U32(ctx, 31, 0x17DA10u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17DA08u, 0x17DA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DA10u;
label_17da10:
    // 0x17da10: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17da10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17da14:
    // 0x17da14: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x17da14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_17da18:
    // 0x17da18: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x17da18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_17da1c:
    // 0x17da1c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x17da1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17da20:
    // 0x17da20: 0xc08c8dc  jal         func_232370
label_17da24:
    if (ctx->pc == 0x17DA24u) {
        ctx->pc = 0x17DA28u;
        goto label_17da28;
    }
    ctx->pc = 0x17DA20u;
    SET_GPR_U32(ctx, 31, 0x17DA28u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x17DA20u, 0x17DA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DA28u;
label_17da28:
    // 0x17da28: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x17da28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_17da2c:
    // 0x17da2c: 0x244400b4  addiu       $a0, $v0, 0xB4
    ctx->pc = 0x17da2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
label_17da30:
    // 0x17da30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17da30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17da34:
    // 0x17da34: 0xc05f5e0  jal         func_17D780
label_17da38:
    if (ctx->pc == 0x17DA38u) {
        ctx->pc = 0x17DA3Cu;
        goto label_17da3c;
    }
    ctx->pc = 0x17DA34u;
    SET_GPR_U32(ctx, 31, 0x17DA3Cu);
    ctx->pc = 0x17D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D780u, 0x17DA34u, 0x17DA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DA3Cu;
label_17da3c:
    // 0x17da3c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x17da3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_17da40:
    // 0x17da40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17da40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17da44:
    // 0x17da44: 0x8c650034  lw          $a1, 0x34($v1)
    ctx->pc = 0x17da44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_17da48:
    // 0x17da48: 0xc0844d0  jal         func_211340
label_17da4c:
    if (ctx->pc == 0x17DA4Cu) {
        ctx->pc = 0x17DA50u;
        goto label_17da50;
    }
    ctx->pc = 0x17DA48u;
    SET_GPR_U32(ctx, 31, 0x17DA50u);
    ctx->pc = 0x211340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211340u, 0x17DA48u, 0x17DA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DA50u;
label_17da50:
    // 0x17da50: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x17da50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_17da54:
    // 0x17da54: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x17da54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_17da58:
    // 0x17da58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17da58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17da5c:
    // 0x17da5c: 0xc05612c  jal         func_1584B0
label_17da60:
    if (ctx->pc == 0x17DA60u) {
        ctx->pc = 0x17DA64u;
        goto label_17da64;
    }
    ctx->pc = 0x17DA5Cu;
    SET_GPR_U32(ctx, 31, 0x17DA64u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17DA5Cu, 0x17DA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DA64u;
label_17da64:
    // 0x17da64: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17da64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17da68:
    // 0x17da68: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x17da68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_17da6c:
    // 0x17da6c: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x17da6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_17da70:
    // 0x17da70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17da70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17da74:
    // 0x17da74: 0xc08c8dc  jal         func_232370
label_17da78:
    if (ctx->pc == 0x17DA78u) {
        ctx->pc = 0x17DA7Cu;
        goto label_17da7c;
    }
    ctx->pc = 0x17DA74u;
    SET_GPR_U32(ctx, 31, 0x17DA7Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x17DA74u, 0x17DA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DA7Cu;
label_17da7c:
    // 0x17da7c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17da7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_17da80:
    // 0x17da80: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x17da80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_17da84:
    // 0x17da84: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
label_17da88:
    if (ctx->pc == 0x17DA88u) {
        ctx->pc = 0x17DA8Cu;
        goto label_17da8c;
    }
    ctx->pc = 0x17DA84u;
    {
        const bool branch_taken_0x17da84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17da84) {
            ctx->pc = 0x17D9FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17d9fc;
        }
    }
    ctx->pc = 0x17DA8Cu;
label_17da8c:
    // 0x17da8c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x17da8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_17da90:
    // 0x17da90: 0x8c4400b0  lw          $a0, 0xB0($v0)
    ctx->pc = 0x17da90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
label_17da94:
    // 0x17da94: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x17da94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17da98:
    // 0x17da98: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x17da98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_17da9c:
    // 0x17da9c: 0x320f809  jalr        $t9
label_17daa0:
    if (ctx->pc == 0x17DAA0u) {
        ctx->pc = 0x17DAA4u;
        goto label_17daa4;
    }
    ctx->pc = 0x17DA9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17DAA4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17DA9Cu, 0x17DAA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17DAA4u;
label_17daa4:
    // 0x17daa4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17daa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17daa8:
    // 0x17daa8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17daa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17daac:
    // 0x17daac: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x17daacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_17dab0:
    // 0x17dab0: 0x3e00008  jr          $ra
label_17dab4:
    if (ctx->pc == 0x17DAB4u) {
        ctx->pc = 0x17DAB8u;
        goto label_17dab8;
    }
    ctx->pc = 0x17DAB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17DAB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17DAB8u;
label_17dab8:
    // 0x17dab8: 0x0  nop
    ctx->pc = 0x17dab8u;
    // NOP
label_17dabc:
    // 0x17dabc: 0x0  nop
    ctx->pc = 0x17dabcu;
    // NOP
label_17dac0:
    // 0x17dac0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x17dac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_17dac4:
    // 0x17dac4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x17dac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_17dac8:
    // 0x17dac8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x17dac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_17dacc:
    // 0x17dacc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x17daccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_17dad0:
    // 0x17dad0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x17dad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_17dad4:
    // 0x17dad4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x17dad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_17dad8:
    // 0x17dad8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x17dad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_17dadc:
    // 0x17dadc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17dadcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_17dae0:
    // 0x17dae0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x17dae0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_17dae4:
    // 0x17dae4: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x17dae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
label_17dae8:
    // 0x17dae8: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x17dae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_17daec:
    // 0x17daec: 0xc055b3c  jal         func_156CF0
label_17daf0:
    if (ctx->pc == 0x17DAF0u) {
        ctx->pc = 0x17DAF4u;
        goto label_17daf4;
    }
    ctx->pc = 0x17DAECu;
    SET_GPR_U32(ctx, 31, 0x17DAF4u);
    ctx->pc = 0x156CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156CF0u, 0x17DAECu, 0x17DAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DAF4u;
label_17daf4:
    // 0x17daf4: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x17daf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_17daf8:
    // 0x17daf8: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x17daf8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17dafc:
    // 0x17dafc: 0x10110050  beq         $zero, $s1, . + 4 + (0x50 << 2)
label_17db00:
    if (ctx->pc == 0x17DB00u) {
        ctx->pc = 0x17DB04u;
        goto label_17db04;
    }
    ctx->pc = 0x17DAFCu;
    {
        const bool branch_taken_0x17dafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 17));
        if (branch_taken_0x17dafc) {
            ctx->pc = 0x17DC40u;
            goto label_17dc40;
        }
    }
    ctx->pc = 0x17DB04u;
label_17db04:
    // 0x17db04: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x17db04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_17db08:
    // 0x17db08: 0x90420074  lbu         $v0, 0x74($v0)
    ctx->pc = 0x17db08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 116)));
label_17db0c:
    // 0x17db0c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x17db0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_17db10:
    // 0x17db10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17db10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17db14:
    // 0x17db14: 0x14620030  bne         $v1, $v0, . + 4 + (0x30 << 2)
label_17db18:
    if (ctx->pc == 0x17DB18u) {
        ctx->pc = 0x17DB1Cu;
        goto label_17db1c;
    }
    ctx->pc = 0x17DB14u;
    {
        const bool branch_taken_0x17db14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17db14) {
            ctx->pc = 0x17DBD8u;
            goto label_17dbd8;
        }
    }
    ctx->pc = 0x17DB1Cu;
label_17db1c:
    // 0x17db1c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x17db1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_17db20:
    // 0x17db20: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17db20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17db24:
    // 0x17db24: 0xc05f7f0  jal         func_17DFC0
label_17db28:
    if (ctx->pc == 0x17DB28u) {
        ctx->pc = 0x17DB2Cu;
        goto label_17db2c;
    }
    ctx->pc = 0x17DB24u;
    SET_GPR_U32(ctx, 31, 0x17DB2Cu);
    ctx->pc = 0x17DFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17DFC0u, 0x17DB24u, 0x17DB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DB2Cu;
label_17db2c:
    // 0x17db2c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x17db2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_17db30:
    // 0x17db30: 0xa0400074  sb          $zero, 0x74($v0)
    ctx->pc = 0x17db30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 116), (uint8_t)GPR_U32(ctx, 0));
label_17db34:
    // 0x17db34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17db34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17db38:
    // 0x17db38: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x17db38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_17db3c:
    // 0x17db3c: 0xc085538  jal         func_2154E0
label_17db40:
    if (ctx->pc == 0x17DB40u) {
        ctx->pc = 0x17DB44u;
        goto label_17db44;
    }
    ctx->pc = 0x17DB3Cu;
    SET_GPR_U32(ctx, 31, 0x17DB44u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x17DB3Cu, 0x17DB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DB44u;
label_17db44:
    // 0x17db44: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x17db44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17db48:
    // 0x17db48: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x17db48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_17db4c:
    // 0x17db4c: 0xc096950  jal         func_25A540
label_17db50:
    if (ctx->pc == 0x17DB50u) {
        ctx->pc = 0x17DB54u;
        goto label_17db54;
    }
    ctx->pc = 0x17DB4Cu;
    SET_GPR_U32(ctx, 31, 0x17DB54u);
    ctx->pc = 0x25A540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A540u, 0x17DB4Cu, 0x17DB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DB54u;
label_17db54:
    // 0x17db54: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x17db54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_17db58:
    // 0x17db58: 0xac620084  sw          $v0, 0x84($v1)
    ctx->pc = 0x17db58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 2));
label_17db5c:
    // 0x17db5c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17db5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17db60:
    // 0x17db60: 0x10000018  b           . + 4 + (0x18 << 2)
label_17db64:
    if (ctx->pc == 0x17DB64u) {
        ctx->pc = 0x17DB68u;
        goto label_17db68;
    }
    ctx->pc = 0x17DB60u;
    {
        const bool branch_taken_0x17db60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17db60) {
            ctx->pc = 0x17DBC4u;
            goto label_17dbc4;
        }
    }
    ctx->pc = 0x17DB68u;
label_17db68:
    // 0x17db68: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x17db68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_17db6c:
    // 0x17db6c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x17db6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_17db70:
    // 0x17db70: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17db70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_17db74:
    // 0x17db74: 0x8c740088  lw          $s4, 0x88($v1)
    ctx->pc = 0x17db74u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_17db78:
    // 0x17db78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17db78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17db7c:
    // 0x17db7c: 0x12830008  beq         $s4, $v1, . + 4 + (0x8 << 2)
label_17db80:
    if (ctx->pc == 0x17DB80u) {
        ctx->pc = 0x17DB84u;
        goto label_17db84;
    }
    ctx->pc = 0x17DB7Cu;
    {
        const bool branch_taken_0x17db7c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x17db7c) {
            ctx->pc = 0x17DBA0u;
            goto label_17dba0;
        }
    }
    ctx->pc = 0x17DB84u;
label_17db84:
    // 0x17db84: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x17db84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_17db88:
    // 0x17db88: 0x12830005  beq         $s4, $v1, . + 4 + (0x5 << 2)
label_17db8c:
    if (ctx->pc == 0x17DB8Cu) {
        ctx->pc = 0x17DB90u;
        goto label_17db90;
    }
    ctx->pc = 0x17DB88u;
    {
        const bool branch_taken_0x17db88 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x17db88) {
            ctx->pc = 0x17DBA0u;
            goto label_17dba0;
        }
    }
    ctx->pc = 0x17DB90u;
label_17db90:
    // 0x17db90: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
label_17db94:
    if (ctx->pc == 0x17DB94u) {
        ctx->pc = 0x17DB98u;
        goto label_17db98;
    }
    ctx->pc = 0x17DB90u;
    {
        const bool branch_taken_0x17db90 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x17db90) {
            ctx->pc = 0x17DBA0u;
            goto label_17dba0;
        }
    }
    ctx->pc = 0x17DB98u;
label_17db98:
    // 0x17db98: 0x10000009  b           . + 4 + (0x9 << 2)
label_17db9c:
    if (ctx->pc == 0x17DB9Cu) {
        ctx->pc = 0x17DBA0u;
        goto label_17dba0;
    }
    ctx->pc = 0x17DB98u;
    {
        const bool branch_taken_0x17db98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17db98) {
            ctx->pc = 0x17DBC0u;
            goto label_17dbc0;
        }
    }
    ctx->pc = 0x17DBA0u;
label_17dba0:
    // 0x17dba0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x17dba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_17dba4:
    // 0x17dba4: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x17dba4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_17dba8:
    // 0x17dba8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x17dba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_17dbac:
    // 0x17dbac: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x17dbacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_17dbb0:
    // 0x17dbb0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17dbb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17dbb4:
    // 0x17dbb4: 0xc05f1a8  jal         func_17C6A0
label_17dbb8:
    if (ctx->pc == 0x17DBB8u) {
        ctx->pc = 0x17DBBCu;
        goto label_17dbbc;
    }
    ctx->pc = 0x17DBB4u;
    SET_GPR_U32(ctx, 31, 0x17DBBCu);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x17DBB4u, 0x17DBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DBBCu;
label_17dbbc:
    // 0x17dbbc: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x17dbbcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_17dbc0:
    // 0x17dbc0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17dbc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_17dbc4:
    // 0x17dbc4: 0x2e030003  sltiu       $v1, $s0, 0x3
    ctx->pc = 0x17dbc4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_17dbc8:
    // 0x17dbc8: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
label_17dbcc:
    if (ctx->pc == 0x17DBCCu) {
        ctx->pc = 0x17DBD0u;
        goto label_17dbd0;
    }
    ctx->pc = 0x17DBC8u;
    {
        const bool branch_taken_0x17dbc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17dbc8) {
            ctx->pc = 0x17DB68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17db68;
        }
    }
    ctx->pc = 0x17DBD0u;
label_17dbd0:
    // 0x17dbd0: 0x10000032  b           . + 4 + (0x32 << 2)
label_17dbd4:
    if (ctx->pc == 0x17DBD4u) {
        ctx->pc = 0x17DBD8u;
        goto label_17dbd8;
    }
    ctx->pc = 0x17DBD0u;
    {
        const bool branch_taken_0x17dbd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17dbd0) {
            ctx->pc = 0x17DC9Cu;
            goto label_17dc9c;
        }
    }
    ctx->pc = 0x17DBD8u;
label_17dbd8:
    // 0x17dbd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17dbd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17dbdc:
    // 0x17dbdc: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x17dbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_17dbe0:
    // 0x17dbe0: 0xc085538  jal         func_2154E0
label_17dbe4:
    if (ctx->pc == 0x17DBE4u) {
        ctx->pc = 0x17DBE8u;
        goto label_17dbe8;
    }
    ctx->pc = 0x17DBE0u;
    SET_GPR_U32(ctx, 31, 0x17DBE8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x17DBE0u, 0x17DBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DBE8u;
label_17dbe8:
    // 0x17dbe8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x17dbe8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17dbec:
    // 0x17dbec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17dbecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_17dbf0:
    // 0x17dbf0: 0xc040aa8  jal         func_102AA0
label_17dbf4:
    if (ctx->pc == 0x17DBF4u) {
        ctx->pc = 0x17DBF8u;
        goto label_17dbf8;
    }
    ctx->pc = 0x17DBF0u;
    SET_GPR_U32(ctx, 31, 0x17DBF8u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x17DBF0u, 0x17DBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DBF8u;
label_17dbf8:
    // 0x17dbf8: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x17dbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_17dbfc:
    // 0x17dbfc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17dbfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17dc00:
    // 0x17dc00: 0xc05f32c  jal         func_17CCB0
label_17dc04:
    if (ctx->pc == 0x17DC04u) {
        ctx->pc = 0x17DC08u;
        goto label_17dc08;
    }
    ctx->pc = 0x17DC00u;
    SET_GPR_U32(ctx, 31, 0x17DC08u);
    ctx->pc = 0x17CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CCB0u, 0x17DC00u, 0x17DC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DC08u;
label_17dc08:
    // 0x17dc08: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17dc08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_17dc0c:
    // 0x17dc0c: 0xc040aa8  jal         func_102AA0
label_17dc10:
    if (ctx->pc == 0x17DC10u) {
        ctx->pc = 0x17DC14u;
        goto label_17dc14;
    }
    ctx->pc = 0x17DC0Cu;
    SET_GPR_U32(ctx, 31, 0x17DC14u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x17DC0Cu, 0x17DC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DC14u;
label_17dc14:
    // 0x17dc14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17dc14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17dc18:
    // 0x17dc18: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x17dc18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_17dc1c:
    // 0x17dc1c: 0xc040a90  jal         func_102A40
label_17dc20:
    if (ctx->pc == 0x17DC20u) {
        ctx->pc = 0x17DC24u;
        goto label_17dc24;
    }
    ctx->pc = 0x17DC1Cu;
    SET_GPR_U32(ctx, 31, 0x17DC24u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x17DC1Cu, 0x17DC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DC24u;
label_17dc24:
    // 0x17dc24: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17dc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17dc28:
    // 0x17dc28: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x17dc28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17dc2c:
    // 0x17dc2c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x17dc2cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_17dc30:
    // 0x17dc30: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x17dc30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_17dc34:
    // 0x17dc34: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x17dc34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_17dc38:
    // 0x17dc38: 0xc05f8e8  jal         func_17E3A0
label_17dc3c:
    if (ctx->pc == 0x17DC3Cu) {
        ctx->pc = 0x17DC40u;
        goto label_17dc40;
    }
    ctx->pc = 0x17DC38u;
    SET_GPR_U32(ctx, 31, 0x17DC40u);
    ctx->pc = 0x17E3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E3A0u, 0x17DC38u, 0x17DC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DC40u;
label_17dc40:
    // 0x17dc40: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x17dc40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17dc44:
    // 0x17dc44: 0x1000000c  b           . + 4 + (0xC << 2)
label_17dc48:
    if (ctx->pc == 0x17DC48u) {
        ctx->pc = 0x17DC4Cu;
        goto label_17dc4c;
    }
    ctx->pc = 0x17DC44u;
    {
        const bool branch_taken_0x17dc44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17dc44) {
            ctx->pc = 0x17DC78u;
            goto label_17dc78;
        }
    }
    ctx->pc = 0x17DC4Cu;
label_17dc4c:
    // 0x17dc4c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x17dc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_17dc50:
    // 0x17dc50: 0x244400b4  addiu       $a0, $v0, 0xB4
    ctx->pc = 0x17dc50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
label_17dc54:
    // 0x17dc54: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17dc54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_17dc58:
    // 0x17dc58: 0xc05f5e0  jal         func_17D780
label_17dc5c:
    if (ctx->pc == 0x17DC5Cu) {
        ctx->pc = 0x17DC60u;
        goto label_17dc60;
    }
    ctx->pc = 0x17DC58u;
    SET_GPR_U32(ctx, 31, 0x17DC60u);
    ctx->pc = 0x17D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D780u, 0x17DC58u, 0x17DC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DC60u;
label_17dc60:
    // 0x17dc60: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x17dc60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_17dc64:
    // 0x17dc64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17dc64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17dc68:
    // 0x17dc68: 0xc46c0010  lwc1        $f12, 0x10($v1)
    ctx->pc = 0x17dc68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_17dc6c:
    // 0x17dc6c: 0xc084440  jal         func_211100
label_17dc70:
    if (ctx->pc == 0x17DC70u) {
        ctx->pc = 0x17DC74u;
        goto label_17dc74;
    }
    ctx->pc = 0x17DC6Cu;
    SET_GPR_U32(ctx, 31, 0x17DC74u);
    ctx->pc = 0x211100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211100u, 0x17DC6Cu, 0x17DC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DC74u;
label_17dc74:
    // 0x17dc74: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x17dc74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_17dc78:
    // 0x17dc78: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x17dc78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
label_17dc7c:
    // 0x17dc7c: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_17dc80:
    if (ctx->pc == 0x17DC80u) {
        ctx->pc = 0x17DC84u;
        goto label_17dc84;
    }
    ctx->pc = 0x17DC7Cu;
    {
        const bool branch_taken_0x17dc7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17dc7c) {
            ctx->pc = 0x17DC4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17dc4c;
        }
    }
    ctx->pc = 0x17DC84u;
label_17dc84:
    // 0x17dc84: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x17dc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_17dc88:
    // 0x17dc88: 0x8c4400b0  lw          $a0, 0xB0($v0)
    ctx->pc = 0x17dc88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
label_17dc8c:
    // 0x17dc8c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x17dc8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17dc90:
    // 0x17dc90: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x17dc90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_17dc94:
    // 0x17dc94: 0x320f809  jalr        $t9
label_17dc98:
    if (ctx->pc == 0x17DC98u) {
        ctx->pc = 0x17DC9Cu;
        goto label_17dc9c;
    }
    ctx->pc = 0x17DC94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17DC9Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17DC94u, 0x17DC9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17DC9Cu;
label_17dc9c:
    // 0x17dc9c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x17dc9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_17dca0:
    // 0x17dca0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x17dca0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_17dca4:
    // 0x17dca4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x17dca4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_17dca8:
    // 0x17dca8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x17dca8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_17dcac:
    // 0x17dcac: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x17dcacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17dcb0:
    // 0x17dcb0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17dcb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17dcb4:
    // 0x17dcb4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17dcb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17dcb8:
    // 0x17dcb8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x17dcb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_17dcbc:
    // 0x17dcbc: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x17dcbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_17dcc0:
    // 0x17dcc0: 0x3e00008  jr          $ra
label_17dcc4:
    if (ctx->pc == 0x17DCC4u) {
        ctx->pc = 0x17DCC8u;
        goto label_17dcc8;
    }
    ctx->pc = 0x17DCC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17DCC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17DCC8u;
label_17dcc8:
    // 0x17dcc8: 0x0  nop
    ctx->pc = 0x17dcc8u;
    // NOP
label_17dccc:
    // 0x17dccc: 0x0  nop
    ctx->pc = 0x17dcccu;
    // NOP
label_17dcd0:
    // 0x17dcd0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x17dcd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_17dcd4:
    // 0x17dcd4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x17dcd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_17dcd8:
    // 0x17dcd8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17dcd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_17dcdc:
    // 0x17dcdc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17dcdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_17dce0:
    // 0x17dce0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17dce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_17dce4:
    // 0x17dce4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17dce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17dce8:
    // 0x17dce8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17dce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17dcec:
    // 0x17dcec: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x17dcecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
label_17dcf0:
    // 0x17dcf0: 0xa3a50070  sb          $a1, 0x70($sp)
    ctx->pc = 0x17dcf0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 112), (uint8_t)GPR_U32(ctx, 5));
label_17dcf4:
    // 0x17dcf4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x17dcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_17dcf8:
    // 0x17dcf8: 0x93a50070  lbu         $a1, 0x70($sp)
    ctx->pc = 0x17dcf8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
label_17dcfc:
    // 0x17dcfc: 0xc055a78  jal         func_1569E0
label_17dd00:
    if (ctx->pc == 0x17DD00u) {
        ctx->pc = 0x17DD04u;
        goto label_17dd04;
    }
    ctx->pc = 0x17DCFCu;
    SET_GPR_U32(ctx, 31, 0x17DD04u);
    ctx->pc = 0x1569E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1569E0u, 0x17DCFCu, 0x17DD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DD04u;
label_17dd04:
    // 0x17dd04: 0x93a20070  lbu         $v0, 0x70($sp)
    ctx->pc = 0x17dd04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
label_17dd08:
    // 0x17dd08: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x17dd08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_17dd0c:
    // 0x17dd0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17dd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17dd10:
    // 0x17dd10: 0x14620055  bne         $v1, $v0, . + 4 + (0x55 << 2)
label_17dd14:
    if (ctx->pc == 0x17DD14u) {
        ctx->pc = 0x17DD18u;
        goto label_17dd18;
    }
    ctx->pc = 0x17DD10u;
    {
        const bool branch_taken_0x17dd10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17dd10) {
            ctx->pc = 0x17DE68u;
            goto label_17de68;
        }
    }
    ctx->pc = 0x17DD18u;
label_17dd18:
    // 0x17dd18: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x17dd18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17dd1c:
    // 0x17dd1c: 0x10000017  b           . + 4 + (0x17 << 2)
label_17dd20:
    if (ctx->pc == 0x17DD20u) {
        ctx->pc = 0x17DD24u;
        goto label_17dd24;
    }
    ctx->pc = 0x17DD1Cu;
    {
        const bool branch_taken_0x17dd1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17dd1c) {
            ctx->pc = 0x17DD7Cu;
            goto label_17dd7c;
        }
    }
    ctx->pc = 0x17DD24u;
label_17dd24:
    // 0x17dd24: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x17dd24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_17dd28:
    // 0x17dd28: 0x26450017  addiu       $a1, $s2, 0x17
    ctx->pc = 0x17dd28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 23));
label_17dd2c:
    // 0x17dd2c: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x17dd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_17dd30:
    // 0x17dd30: 0xc05612c  jal         func_1584B0
label_17dd34:
    if (ctx->pc == 0x17DD34u) {
        ctx->pc = 0x17DD38u;
        goto label_17dd38;
    }
    ctx->pc = 0x17DD30u;
    SET_GPR_U32(ctx, 31, 0x17DD38u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17DD30u, 0x17DD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DD38u;
label_17dd38:
    // 0x17dd38: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17dd38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17dd3c:
    // 0x17dd3c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x17dd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_17dd40:
    // 0x17dd40: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x17dd40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_17dd44:
    // 0x17dd44: 0xc08c910  jal         func_232440
label_17dd48:
    if (ctx->pc == 0x17DD48u) {
        ctx->pc = 0x17DD4Cu;
        goto label_17dd4c;
    }
    ctx->pc = 0x17DD44u;
    SET_GPR_U32(ctx, 31, 0x17DD4Cu);
    ctx->pc = 0x232440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232440u, 0x17DD44u, 0x17DD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DD4Cu;
label_17dd4c:
    // 0x17dd4c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x17dd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_17dd50:
    // 0x17dd50: 0x26450017  addiu       $a1, $s2, 0x17
    ctx->pc = 0x17dd50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 23));
label_17dd54:
    // 0x17dd54: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x17dd54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_17dd58:
    // 0x17dd58: 0xc05612c  jal         func_1584B0
label_17dd5c:
    if (ctx->pc == 0x17DD5Cu) {
        ctx->pc = 0x17DD60u;
        goto label_17dd60;
    }
    ctx->pc = 0x17DD58u;
    SET_GPR_U32(ctx, 31, 0x17DD60u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17DD58u, 0x17DD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DD60u;
label_17dd60:
    // 0x17dd60: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17dd60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17dd64:
    // 0x17dd64: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x17dd64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_17dd68:
    // 0x17dd68: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x17dd68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_17dd6c:
    // 0x17dd6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17dd6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17dd70:
    // 0x17dd70: 0xc08c8dc  jal         func_232370
label_17dd74:
    if (ctx->pc == 0x17DD74u) {
        ctx->pc = 0x17DD78u;
        goto label_17dd78;
    }
    ctx->pc = 0x17DD70u;
    SET_GPR_U32(ctx, 31, 0x17DD78u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x17DD70u, 0x17DD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DD78u;
label_17dd78:
    // 0x17dd78: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x17dd78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_17dd7c:
    // 0x17dd7c: 0x2e420013  sltiu       $v0, $s2, 0x13
    ctx->pc = 0x17dd7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
label_17dd80:
    // 0x17dd80: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_17dd84:
    if (ctx->pc == 0x17DD84u) {
        ctx->pc = 0x17DD88u;
        goto label_17dd88;
    }
    ctx->pc = 0x17DD80u;
    {
        const bool branch_taken_0x17dd80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17dd80) {
            ctx->pc = 0x17DD24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17dd24;
        }
    }
    ctx->pc = 0x17DD88u;
label_17dd88:
    // 0x17dd88: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17dd88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17dd8c:
    // 0x17dd8c: 0x10000031  b           . + 4 + (0x31 << 2)
label_17dd90:
    if (ctx->pc == 0x17DD90u) {
        ctx->pc = 0x17DD94u;
        goto label_17dd94;
    }
    ctx->pc = 0x17DD8Cu;
    {
        const bool branch_taken_0x17dd8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17dd8c) {
            ctx->pc = 0x17DE54u;
            goto label_17de54;
        }
    }
    ctx->pc = 0x17DD94u;
label_17dd94:
    // 0x17dd94: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x17dd94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_17dd98:
    // 0x17dd98: 0x26050009  addiu       $a1, $s0, 0x9
    ctx->pc = 0x17dd98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
label_17dd9c:
    // 0x17dd9c: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x17dd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_17dda0:
    // 0x17dda0: 0xc05612c  jal         func_1584B0
label_17dda4:
    if (ctx->pc == 0x17DDA4u) {
        ctx->pc = 0x17DDA8u;
        goto label_17dda8;
    }
    ctx->pc = 0x17DDA0u;
    SET_GPR_U32(ctx, 31, 0x17DDA8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17DDA0u, 0x17DDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DDA8u;
label_17dda8:
    // 0x17dda8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17dda8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17ddac:
    // 0x17ddac: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x17ddacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_17ddb0:
    // 0x17ddb0: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x17ddb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_17ddb4:
    // 0x17ddb4: 0xc08c910  jal         func_232440
label_17ddb8:
    if (ctx->pc == 0x17DDB8u) {
        ctx->pc = 0x17DDBCu;
        goto label_17ddbc;
    }
    ctx->pc = 0x17DDB4u;
    SET_GPR_U32(ctx, 31, 0x17DDBCu);
    ctx->pc = 0x232440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232440u, 0x17DDB4u, 0x17DDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DDBCu;
label_17ddbc:
    // 0x17ddbc: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x17ddbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_17ddc0:
    // 0x17ddc0: 0x26050009  addiu       $a1, $s0, 0x9
    ctx->pc = 0x17ddc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
label_17ddc4:
    // 0x17ddc4: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x17ddc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_17ddc8:
    // 0x17ddc8: 0xc05612c  jal         func_1584B0
label_17ddcc:
    if (ctx->pc == 0x17DDCCu) {
        ctx->pc = 0x17DDD0u;
        goto label_17ddd0;
    }
    ctx->pc = 0x17DDC8u;
    SET_GPR_U32(ctx, 31, 0x17DDD0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17DDC8u, 0x17DDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DDD0u;
label_17ddd0:
    // 0x17ddd0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17ddd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17ddd4:
    // 0x17ddd4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x17ddd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_17ddd8:
    // 0x17ddd8: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x17ddd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_17dddc:
    // 0x17dddc: 0xc08c7c8  jal         func_231F20
label_17dde0:
    if (ctx->pc == 0x17DDE0u) {
        ctx->pc = 0x17DDE4u;
        goto label_17dde4;
    }
    ctx->pc = 0x17DDDCu;
    SET_GPR_U32(ctx, 31, 0x17DDE4u);
    ctx->pc = 0x231F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231F20u, 0x17DDDCu, 0x17DDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DDE4u;
label_17dde4:
    // 0x17dde4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x17dde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_17dde8:
    // 0x17dde8: 0x26050009  addiu       $a1, $s0, 0x9
    ctx->pc = 0x17dde8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
label_17ddec:
    // 0x17ddec: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x17ddecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_17ddf0:
    // 0x17ddf0: 0xc05612c  jal         func_1584B0
label_17ddf4:
    if (ctx->pc == 0x17DDF4u) {
        ctx->pc = 0x17DDF8u;
        goto label_17ddf8;
    }
    ctx->pc = 0x17DDF0u;
    SET_GPR_U32(ctx, 31, 0x17DDF8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17DDF0u, 0x17DDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DDF8u;
label_17ddf8:
    // 0x17ddf8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17ddf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17ddfc:
    // 0x17ddfc: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x17ddfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_17de00:
    // 0x17de00: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17de00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_17de04:
    // 0x17de04: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x17de04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_17de08:
    // 0x17de08: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x17de08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_17de0c:
    // 0x17de0c: 0xc08c434  jal         func_2310D0
label_17de10:
    if (ctx->pc == 0x17DE10u) {
        ctx->pc = 0x17DE14u;
        goto label_17de14;
    }
    ctx->pc = 0x17DE0Cu;
    SET_GPR_U32(ctx, 31, 0x17DE14u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x17DE0Cu, 0x17DE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DE14u;
label_17de14:
    // 0x17de14: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x17de14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_17de18:
    // 0x17de18: 0x26050009  addiu       $a1, $s0, 0x9
    ctx->pc = 0x17de18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
label_17de1c:
    // 0x17de1c: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x17de1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_17de20:
    // 0x17de20: 0xc05612c  jal         func_1584B0
label_17de24:
    if (ctx->pc == 0x17DE24u) {
        ctx->pc = 0x17DE28u;
        goto label_17de28;
    }
    ctx->pc = 0x17DE20u;
    SET_GPR_U32(ctx, 31, 0x17DE28u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17DE20u, 0x17DE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DE28u;
label_17de28:
    // 0x17de28: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17de28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17de2c:
    // 0x17de2c: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x17de2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_17de30:
    // 0x17de30: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x17de30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_17de34:
    // 0x17de34: 0x8c420098  lw          $v0, 0x98($v0)
    ctx->pc = 0x17de34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
label_17de38:
    // 0x17de38: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17de38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_17de3c:
    // 0x17de3c: 0x50302a  slt         $a2, $v0, $s0
    ctx->pc = 0x17de3cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_17de40:
    // 0x17de40: 0x38c60001  xori        $a2, $a2, 0x1
    ctx->pc = 0x17de40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
label_17de44:
    // 0x17de44: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x17de44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_17de48:
    // 0x17de48: 0xc08c8dc  jal         func_232370
label_17de4c:
    if (ctx->pc == 0x17DE4Cu) {
        ctx->pc = 0x17DE50u;
        goto label_17de50;
    }
    ctx->pc = 0x17DE48u;
    SET_GPR_U32(ctx, 31, 0x17DE50u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x17DE48u, 0x17DE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DE50u;
label_17de50:
    // 0x17de50: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17de50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_17de54:
    // 0x17de54: 0x2e020007  sltiu       $v0, $s0, 0x7
    ctx->pc = 0x17de54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_17de58:
    // 0x17de58: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
label_17de5c:
    if (ctx->pc == 0x17DE5Cu) {
        ctx->pc = 0x17DE60u;
        goto label_17de60;
    }
    ctx->pc = 0x17DE58u;
    {
        const bool branch_taken_0x17de58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17de58) {
            ctx->pc = 0x17DD94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17dd94;
        }
    }
    ctx->pc = 0x17DE60u;
label_17de60:
    // 0x17de60: 0x10000040  b           . + 4 + (0x40 << 2)
label_17de64:
    if (ctx->pc == 0x17DE64u) {
        ctx->pc = 0x17DE68u;
        goto label_17de68;
    }
    ctx->pc = 0x17DE60u;
    {
        const bool branch_taken_0x17de60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17de60) {
            ctx->pc = 0x17DF64u;
            goto label_17df64;
        }
    }
    ctx->pc = 0x17DE68u;
label_17de68:
    // 0x17de68: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x17de68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17de6c:
    // 0x17de6c: 0x1000000a  b           . + 4 + (0xA << 2)
label_17de70:
    if (ctx->pc == 0x17DE70u) {
        ctx->pc = 0x17DE74u;
        goto label_17de74;
    }
    ctx->pc = 0x17DE6Cu;
    {
        const bool branch_taken_0x17de6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17de6c) {
            ctx->pc = 0x17DE98u;
            goto label_17de98;
        }
    }
    ctx->pc = 0x17DE74u;
label_17de74:
    // 0x17de74: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x17de74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_17de78:
    // 0x17de78: 0x244400b4  addiu       $a0, $v0, 0xB4
    ctx->pc = 0x17de78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
label_17de7c:
    // 0x17de7c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x17de7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_17de80:
    // 0x17de80: 0xc05f5e0  jal         func_17D780
label_17de84:
    if (ctx->pc == 0x17DE84u) {
        ctx->pc = 0x17DE88u;
        goto label_17de88;
    }
    ctx->pc = 0x17DE80u;
    SET_GPR_U32(ctx, 31, 0x17DE88u);
    ctx->pc = 0x17D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D780u, 0x17DE80u, 0x17DE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DE88u;
label_17de88:
    // 0x17de88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17de88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17de8c:
    // 0x17de8c: 0xc0843f0  jal         func_210FC0
label_17de90:
    if (ctx->pc == 0x17DE90u) {
        ctx->pc = 0x17DE94u;
        goto label_17de94;
    }
    ctx->pc = 0x17DE8Cu;
    SET_GPR_U32(ctx, 31, 0x17DE94u);
    ctx->pc = 0x210FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210FC0u, 0x17DE8Cu, 0x17DE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DE94u;
label_17de94:
    // 0x17de94: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x17de94u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_17de98:
    // 0x17de98: 0x2a820003  slti        $v0, $s4, 0x3
    ctx->pc = 0x17de98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
label_17de9c:
    // 0x17de9c: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_17dea0:
    if (ctx->pc == 0x17DEA0u) {
        ctx->pc = 0x17DEA4u;
        goto label_17dea4;
    }
    ctx->pc = 0x17DE9Cu;
    {
        const bool branch_taken_0x17de9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17de9c) {
            ctx->pc = 0x17DE74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17de74;
        }
    }
    ctx->pc = 0x17DEA4u;
label_17dea4:
    // 0x17dea4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17dea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17dea8:
    // 0x17dea8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x17dea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_17deac:
    // 0x17deac: 0xa0430074  sb          $v1, 0x74($v0)
    ctx->pc = 0x17deacu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 116), (uint8_t)GPR_U32(ctx, 3));
label_17deb0:
    // 0x17deb0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x17deb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17deb4:
    // 0x17deb4: 0x1000000c  b           . + 4 + (0xC << 2)
label_17deb8:
    if (ctx->pc == 0x17DEB8u) {
        ctx->pc = 0x17DEBCu;
        goto label_17debc;
    }
    ctx->pc = 0x17DEB4u;
    {
        const bool branch_taken_0x17deb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17deb4) {
            ctx->pc = 0x17DEE8u;
            goto label_17dee8;
        }
    }
    ctx->pc = 0x17DEBCu;
label_17debc:
    // 0x17debc: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x17debcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_17dec0:
    // 0x17dec0: 0x26650009  addiu       $a1, $s3, 0x9
    ctx->pc = 0x17dec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 9));
label_17dec4:
    // 0x17dec4: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x17dec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_17dec8:
    // 0x17dec8: 0xc05612c  jal         func_1584B0
label_17decc:
    if (ctx->pc == 0x17DECCu) {
        ctx->pc = 0x17DED0u;
        goto label_17ded0;
    }
    ctx->pc = 0x17DEC8u;
    SET_GPR_U32(ctx, 31, 0x17DED0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17DEC8u, 0x17DED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DED0u;
label_17ded0:
    // 0x17ded0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17ded0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17ded4:
    // 0x17ded4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x17ded4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_17ded8:
    // 0x17ded8: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x17ded8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_17dedc:
    // 0x17dedc: 0xc08c910  jal         func_232440
label_17dee0:
    if (ctx->pc == 0x17DEE0u) {
        ctx->pc = 0x17DEE4u;
        goto label_17dee4;
    }
    ctx->pc = 0x17DEDCu;
    SET_GPR_U32(ctx, 31, 0x17DEE4u);
    ctx->pc = 0x232440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232440u, 0x17DEDCu, 0x17DEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DEE4u;
label_17dee4:
    // 0x17dee4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x17dee4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_17dee8:
    // 0x17dee8: 0x2e620007  sltiu       $v0, $s3, 0x7
    ctx->pc = 0x17dee8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_17deec:
    // 0x17deec: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_17def0:
    if (ctx->pc == 0x17DEF0u) {
        ctx->pc = 0x17DEF4u;
        goto label_17def4;
    }
    ctx->pc = 0x17DEECu;
    {
        const bool branch_taken_0x17deec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17deec) {
            ctx->pc = 0x17DEBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17debc;
        }
    }
    ctx->pc = 0x17DEF4u;
label_17def4:
    // 0x17def4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x17def4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17def8:
    // 0x17def8: 0x10000017  b           . + 4 + (0x17 << 2)
label_17defc:
    if (ctx->pc == 0x17DEFCu) {
        ctx->pc = 0x17DF00u;
        goto label_17df00;
    }
    ctx->pc = 0x17DEF8u;
    {
        const bool branch_taken_0x17def8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17def8) {
            ctx->pc = 0x17DF58u;
            goto label_17df58;
        }
    }
    ctx->pc = 0x17DF00u;
label_17df00:
    // 0x17df00: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x17df00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_17df04:
    // 0x17df04: 0x26250017  addiu       $a1, $s1, 0x17
    ctx->pc = 0x17df04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 23));
label_17df08:
    // 0x17df08: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x17df08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_17df0c:
    // 0x17df0c: 0xc05612c  jal         func_1584B0
label_17df10:
    if (ctx->pc == 0x17DF10u) {
        ctx->pc = 0x17DF14u;
        goto label_17df14;
    }
    ctx->pc = 0x17DF0Cu;
    SET_GPR_U32(ctx, 31, 0x17DF14u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17DF0Cu, 0x17DF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DF14u;
label_17df14:
    // 0x17df14: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17df14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17df18:
    // 0x17df18: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x17df18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_17df1c:
    // 0x17df1c: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x17df1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_17df20:
    // 0x17df20: 0xc08c910  jal         func_232440
label_17df24:
    if (ctx->pc == 0x17DF24u) {
        ctx->pc = 0x17DF28u;
        goto label_17df28;
    }
    ctx->pc = 0x17DF20u;
    SET_GPR_U32(ctx, 31, 0x17DF28u);
    ctx->pc = 0x232440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232440u, 0x17DF20u, 0x17DF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DF28u;
label_17df28:
    // 0x17df28: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x17df28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_17df2c:
    // 0x17df2c: 0x26250017  addiu       $a1, $s1, 0x17
    ctx->pc = 0x17df2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 23));
label_17df30:
    // 0x17df30: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x17df30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_17df34:
    // 0x17df34: 0xc05612c  jal         func_1584B0
label_17df38:
    if (ctx->pc == 0x17DF38u) {
        ctx->pc = 0x17DF3Cu;
        goto label_17df3c;
    }
    ctx->pc = 0x17DF34u;
    SET_GPR_U32(ctx, 31, 0x17DF3Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17DF34u, 0x17DF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DF3Cu;
label_17df3c:
    // 0x17df3c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17df3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17df40:
    // 0x17df40: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x17df40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_17df44:
    // 0x17df44: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x17df44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_17df48:
    // 0x17df48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17df48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17df4c:
    // 0x17df4c: 0xc08c8dc  jal         func_232370
label_17df50:
    if (ctx->pc == 0x17DF50u) {
        ctx->pc = 0x17DF54u;
        goto label_17df54;
    }
    ctx->pc = 0x17DF4Cu;
    SET_GPR_U32(ctx, 31, 0x17DF54u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x17DF4Cu, 0x17DF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DF54u;
label_17df54:
    // 0x17df54: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x17df54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_17df58:
    // 0x17df58: 0x2e220013  sltiu       $v0, $s1, 0x13
    ctx->pc = 0x17df58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
label_17df5c:
    // 0x17df5c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_17df60:
    if (ctx->pc == 0x17DF60u) {
        ctx->pc = 0x17DF64u;
        goto label_17df64;
    }
    ctx->pc = 0x17DF5Cu;
    {
        const bool branch_taken_0x17df5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17df5c) {
            ctx->pc = 0x17DF00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17df00;
        }
    }
    ctx->pc = 0x17DF64u;
label_17df64:
    // 0x17df64: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x17df64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_17df68:
    // 0x17df68: 0x8c4400b0  lw          $a0, 0xB0($v0)
    ctx->pc = 0x17df68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
label_17df6c:
    // 0x17df6c: 0x93a50070  lbu         $a1, 0x70($sp)
    ctx->pc = 0x17df6cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
label_17df70:
    // 0x17df70: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x17df70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17df74:
    // 0x17df74: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x17df74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_17df78:
    // 0x17df78: 0x320f809  jalr        $t9
label_17df7c:
    if (ctx->pc == 0x17DF7Cu) {
        ctx->pc = 0x17DF80u;
        goto label_17df80;
    }
    ctx->pc = 0x17DF78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17DF80u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17DF78u, 0x17DF80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17DF80u;
label_17df80:
    // 0x17df80: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x17df80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_17df84:
    // 0x17df84: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17df84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_17df88:
    // 0x17df88: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17df88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17df8c:
    // 0x17df8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17df8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17df90:
    // 0x17df90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17df90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17df94:
    // 0x17df94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17df94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17df98:
    // 0x17df98: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x17df98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_17df9c:
    // 0x17df9c: 0x3e00008  jr          $ra
label_17dfa0:
    if (ctx->pc == 0x17DFA0u) {
        ctx->pc = 0x17DFA4u;
        goto label_17dfa4;
    }
    ctx->pc = 0x17DF9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17DF9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17DFA4u;
label_17dfa4:
    // 0x17dfa4: 0x0  nop
    ctx->pc = 0x17dfa4u;
    // NOP
label_17dfa8:
    // 0x17dfa8: 0x0  nop
    ctx->pc = 0x17dfa8u;
    // NOP
label_17dfac:
    // 0x17dfac: 0x0  nop
    ctx->pc = 0x17dfacu;
    // NOP
    ctx->pc = 0x17dfb0u;
}
