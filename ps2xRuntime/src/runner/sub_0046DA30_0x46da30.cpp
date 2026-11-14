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

// Function: sub_0046DA30
// Address: 0x46da30 - 0x46e070
void sub_0046DA30_0x46da30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046DA30_0x46da30");
#endif

    switch (ctx->pc) {
        case 0x46da30u: goto label_46da30;
        case 0x46da34u: goto label_46da34;
        case 0x46da38u: goto label_46da38;
        case 0x46da3cu: goto label_46da3c;
        case 0x46da40u: goto label_46da40;
        case 0x46da44u: goto label_46da44;
        case 0x46da48u: goto label_46da48;
        case 0x46da4cu: goto label_46da4c;
        case 0x46da50u: goto label_46da50;
        case 0x46da54u: goto label_46da54;
        case 0x46da58u: goto label_46da58;
        case 0x46da5cu: goto label_46da5c;
        case 0x46da60u: goto label_46da60;
        case 0x46da64u: goto label_46da64;
        case 0x46da68u: goto label_46da68;
        case 0x46da6cu: goto label_46da6c;
        case 0x46da70u: goto label_46da70;
        case 0x46da74u: goto label_46da74;
        case 0x46da78u: goto label_46da78;
        case 0x46da7cu: goto label_46da7c;
        case 0x46da80u: goto label_46da80;
        case 0x46da84u: goto label_46da84;
        case 0x46da88u: goto label_46da88;
        case 0x46da8cu: goto label_46da8c;
        case 0x46da90u: goto label_46da90;
        case 0x46da94u: goto label_46da94;
        case 0x46da98u: goto label_46da98;
        case 0x46da9cu: goto label_46da9c;
        case 0x46daa0u: goto label_46daa0;
        case 0x46daa4u: goto label_46daa4;
        case 0x46daa8u: goto label_46daa8;
        case 0x46daacu: goto label_46daac;
        case 0x46dab0u: goto label_46dab0;
        case 0x46dab4u: goto label_46dab4;
        case 0x46dab8u: goto label_46dab8;
        case 0x46dabcu: goto label_46dabc;
        case 0x46dac0u: goto label_46dac0;
        case 0x46dac4u: goto label_46dac4;
        case 0x46dac8u: goto label_46dac8;
        case 0x46daccu: goto label_46dacc;
        case 0x46dad0u: goto label_46dad0;
        case 0x46dad4u: goto label_46dad4;
        case 0x46dad8u: goto label_46dad8;
        case 0x46dadcu: goto label_46dadc;
        case 0x46dae0u: goto label_46dae0;
        case 0x46dae4u: goto label_46dae4;
        case 0x46dae8u: goto label_46dae8;
        case 0x46daecu: goto label_46daec;
        case 0x46daf0u: goto label_46daf0;
        case 0x46daf4u: goto label_46daf4;
        case 0x46daf8u: goto label_46daf8;
        case 0x46dafcu: goto label_46dafc;
        case 0x46db00u: goto label_46db00;
        case 0x46db04u: goto label_46db04;
        case 0x46db08u: goto label_46db08;
        case 0x46db0cu: goto label_46db0c;
        case 0x46db10u: goto label_46db10;
        case 0x46db14u: goto label_46db14;
        case 0x46db18u: goto label_46db18;
        case 0x46db1cu: goto label_46db1c;
        case 0x46db20u: goto label_46db20;
        case 0x46db24u: goto label_46db24;
        case 0x46db28u: goto label_46db28;
        case 0x46db2cu: goto label_46db2c;
        case 0x46db30u: goto label_46db30;
        case 0x46db34u: goto label_46db34;
        case 0x46db38u: goto label_46db38;
        case 0x46db3cu: goto label_46db3c;
        case 0x46db40u: goto label_46db40;
        case 0x46db44u: goto label_46db44;
        case 0x46db48u: goto label_46db48;
        case 0x46db4cu: goto label_46db4c;
        case 0x46db50u: goto label_46db50;
        case 0x46db54u: goto label_46db54;
        case 0x46db58u: goto label_46db58;
        case 0x46db5cu: goto label_46db5c;
        case 0x46db60u: goto label_46db60;
        case 0x46db64u: goto label_46db64;
        case 0x46db68u: goto label_46db68;
        case 0x46db6cu: goto label_46db6c;
        case 0x46db70u: goto label_46db70;
        case 0x46db74u: goto label_46db74;
        case 0x46db78u: goto label_46db78;
        case 0x46db7cu: goto label_46db7c;
        case 0x46db80u: goto label_46db80;
        case 0x46db84u: goto label_46db84;
        case 0x46db88u: goto label_46db88;
        case 0x46db8cu: goto label_46db8c;
        case 0x46db90u: goto label_46db90;
        case 0x46db94u: goto label_46db94;
        case 0x46db98u: goto label_46db98;
        case 0x46db9cu: goto label_46db9c;
        case 0x46dba0u: goto label_46dba0;
        case 0x46dba4u: goto label_46dba4;
        case 0x46dba8u: goto label_46dba8;
        case 0x46dbacu: goto label_46dbac;
        case 0x46dbb0u: goto label_46dbb0;
        case 0x46dbb4u: goto label_46dbb4;
        case 0x46dbb8u: goto label_46dbb8;
        case 0x46dbbcu: goto label_46dbbc;
        case 0x46dbc0u: goto label_46dbc0;
        case 0x46dbc4u: goto label_46dbc4;
        case 0x46dbc8u: goto label_46dbc8;
        case 0x46dbccu: goto label_46dbcc;
        case 0x46dbd0u: goto label_46dbd0;
        case 0x46dbd4u: goto label_46dbd4;
        case 0x46dbd8u: goto label_46dbd8;
        case 0x46dbdcu: goto label_46dbdc;
        case 0x46dbe0u: goto label_46dbe0;
        case 0x46dbe4u: goto label_46dbe4;
        case 0x46dbe8u: goto label_46dbe8;
        case 0x46dbecu: goto label_46dbec;
        case 0x46dbf0u: goto label_46dbf0;
        case 0x46dbf4u: goto label_46dbf4;
        case 0x46dbf8u: goto label_46dbf8;
        case 0x46dbfcu: goto label_46dbfc;
        case 0x46dc00u: goto label_46dc00;
        case 0x46dc04u: goto label_46dc04;
        case 0x46dc08u: goto label_46dc08;
        case 0x46dc0cu: goto label_46dc0c;
        case 0x46dc10u: goto label_46dc10;
        case 0x46dc14u: goto label_46dc14;
        case 0x46dc18u: goto label_46dc18;
        case 0x46dc1cu: goto label_46dc1c;
        case 0x46dc20u: goto label_46dc20;
        case 0x46dc24u: goto label_46dc24;
        case 0x46dc28u: goto label_46dc28;
        case 0x46dc2cu: goto label_46dc2c;
        case 0x46dc30u: goto label_46dc30;
        case 0x46dc34u: goto label_46dc34;
        case 0x46dc38u: goto label_46dc38;
        case 0x46dc3cu: goto label_46dc3c;
        case 0x46dc40u: goto label_46dc40;
        case 0x46dc44u: goto label_46dc44;
        case 0x46dc48u: goto label_46dc48;
        case 0x46dc4cu: goto label_46dc4c;
        case 0x46dc50u: goto label_46dc50;
        case 0x46dc54u: goto label_46dc54;
        case 0x46dc58u: goto label_46dc58;
        case 0x46dc5cu: goto label_46dc5c;
        case 0x46dc60u: goto label_46dc60;
        case 0x46dc64u: goto label_46dc64;
        case 0x46dc68u: goto label_46dc68;
        case 0x46dc6cu: goto label_46dc6c;
        case 0x46dc70u: goto label_46dc70;
        case 0x46dc74u: goto label_46dc74;
        case 0x46dc78u: goto label_46dc78;
        case 0x46dc7cu: goto label_46dc7c;
        case 0x46dc80u: goto label_46dc80;
        case 0x46dc84u: goto label_46dc84;
        case 0x46dc88u: goto label_46dc88;
        case 0x46dc8cu: goto label_46dc8c;
        case 0x46dc90u: goto label_46dc90;
        case 0x46dc94u: goto label_46dc94;
        case 0x46dc98u: goto label_46dc98;
        case 0x46dc9cu: goto label_46dc9c;
        case 0x46dca0u: goto label_46dca0;
        case 0x46dca4u: goto label_46dca4;
        case 0x46dca8u: goto label_46dca8;
        case 0x46dcacu: goto label_46dcac;
        case 0x46dcb0u: goto label_46dcb0;
        case 0x46dcb4u: goto label_46dcb4;
        case 0x46dcb8u: goto label_46dcb8;
        case 0x46dcbcu: goto label_46dcbc;
        case 0x46dcc0u: goto label_46dcc0;
        case 0x46dcc4u: goto label_46dcc4;
        case 0x46dcc8u: goto label_46dcc8;
        case 0x46dcccu: goto label_46dccc;
        case 0x46dcd0u: goto label_46dcd0;
        case 0x46dcd4u: goto label_46dcd4;
        case 0x46dcd8u: goto label_46dcd8;
        case 0x46dcdcu: goto label_46dcdc;
        case 0x46dce0u: goto label_46dce0;
        case 0x46dce4u: goto label_46dce4;
        case 0x46dce8u: goto label_46dce8;
        case 0x46dcecu: goto label_46dcec;
        case 0x46dcf0u: goto label_46dcf0;
        case 0x46dcf4u: goto label_46dcf4;
        case 0x46dcf8u: goto label_46dcf8;
        case 0x46dcfcu: goto label_46dcfc;
        case 0x46dd00u: goto label_46dd00;
        case 0x46dd04u: goto label_46dd04;
        case 0x46dd08u: goto label_46dd08;
        case 0x46dd0cu: goto label_46dd0c;
        case 0x46dd10u: goto label_46dd10;
        case 0x46dd14u: goto label_46dd14;
        case 0x46dd18u: goto label_46dd18;
        case 0x46dd1cu: goto label_46dd1c;
        case 0x46dd20u: goto label_46dd20;
        case 0x46dd24u: goto label_46dd24;
        case 0x46dd28u: goto label_46dd28;
        case 0x46dd2cu: goto label_46dd2c;
        case 0x46dd30u: goto label_46dd30;
        case 0x46dd34u: goto label_46dd34;
        case 0x46dd38u: goto label_46dd38;
        case 0x46dd3cu: goto label_46dd3c;
        case 0x46dd40u: goto label_46dd40;
        case 0x46dd44u: goto label_46dd44;
        case 0x46dd48u: goto label_46dd48;
        case 0x46dd4cu: goto label_46dd4c;
        case 0x46dd50u: goto label_46dd50;
        case 0x46dd54u: goto label_46dd54;
        case 0x46dd58u: goto label_46dd58;
        case 0x46dd5cu: goto label_46dd5c;
        case 0x46dd60u: goto label_46dd60;
        case 0x46dd64u: goto label_46dd64;
        case 0x46dd68u: goto label_46dd68;
        case 0x46dd6cu: goto label_46dd6c;
        case 0x46dd70u: goto label_46dd70;
        case 0x46dd74u: goto label_46dd74;
        case 0x46dd78u: goto label_46dd78;
        case 0x46dd7cu: goto label_46dd7c;
        case 0x46dd80u: goto label_46dd80;
        case 0x46dd84u: goto label_46dd84;
        case 0x46dd88u: goto label_46dd88;
        case 0x46dd8cu: goto label_46dd8c;
        case 0x46dd90u: goto label_46dd90;
        case 0x46dd94u: goto label_46dd94;
        case 0x46dd98u: goto label_46dd98;
        case 0x46dd9cu: goto label_46dd9c;
        case 0x46dda0u: goto label_46dda0;
        case 0x46dda4u: goto label_46dda4;
        case 0x46dda8u: goto label_46dda8;
        case 0x46ddacu: goto label_46ddac;
        case 0x46ddb0u: goto label_46ddb0;
        case 0x46ddb4u: goto label_46ddb4;
        case 0x46ddb8u: goto label_46ddb8;
        case 0x46ddbcu: goto label_46ddbc;
        case 0x46ddc0u: goto label_46ddc0;
        case 0x46ddc4u: goto label_46ddc4;
        case 0x46ddc8u: goto label_46ddc8;
        case 0x46ddccu: goto label_46ddcc;
        case 0x46ddd0u: goto label_46ddd0;
        case 0x46ddd4u: goto label_46ddd4;
        case 0x46ddd8u: goto label_46ddd8;
        case 0x46dddcu: goto label_46dddc;
        case 0x46dde0u: goto label_46dde0;
        case 0x46dde4u: goto label_46dde4;
        case 0x46dde8u: goto label_46dde8;
        case 0x46ddecu: goto label_46ddec;
        case 0x46ddf0u: goto label_46ddf0;
        case 0x46ddf4u: goto label_46ddf4;
        case 0x46ddf8u: goto label_46ddf8;
        case 0x46ddfcu: goto label_46ddfc;
        case 0x46de00u: goto label_46de00;
        case 0x46de04u: goto label_46de04;
        case 0x46de08u: goto label_46de08;
        case 0x46de0cu: goto label_46de0c;
        case 0x46de10u: goto label_46de10;
        case 0x46de14u: goto label_46de14;
        case 0x46de18u: goto label_46de18;
        case 0x46de1cu: goto label_46de1c;
        case 0x46de20u: goto label_46de20;
        case 0x46de24u: goto label_46de24;
        case 0x46de28u: goto label_46de28;
        case 0x46de2cu: goto label_46de2c;
        case 0x46de30u: goto label_46de30;
        case 0x46de34u: goto label_46de34;
        case 0x46de38u: goto label_46de38;
        case 0x46de3cu: goto label_46de3c;
        case 0x46de40u: goto label_46de40;
        case 0x46de44u: goto label_46de44;
        case 0x46de48u: goto label_46de48;
        case 0x46de4cu: goto label_46de4c;
        case 0x46de50u: goto label_46de50;
        case 0x46de54u: goto label_46de54;
        case 0x46de58u: goto label_46de58;
        case 0x46de5cu: goto label_46de5c;
        case 0x46de60u: goto label_46de60;
        case 0x46de64u: goto label_46de64;
        case 0x46de68u: goto label_46de68;
        case 0x46de6cu: goto label_46de6c;
        case 0x46de70u: goto label_46de70;
        case 0x46de74u: goto label_46de74;
        case 0x46de78u: goto label_46de78;
        case 0x46de7cu: goto label_46de7c;
        case 0x46de80u: goto label_46de80;
        case 0x46de84u: goto label_46de84;
        case 0x46de88u: goto label_46de88;
        case 0x46de8cu: goto label_46de8c;
        case 0x46de90u: goto label_46de90;
        case 0x46de94u: goto label_46de94;
        case 0x46de98u: goto label_46de98;
        case 0x46de9cu: goto label_46de9c;
        case 0x46dea0u: goto label_46dea0;
        case 0x46dea4u: goto label_46dea4;
        case 0x46dea8u: goto label_46dea8;
        case 0x46deacu: goto label_46deac;
        case 0x46deb0u: goto label_46deb0;
        case 0x46deb4u: goto label_46deb4;
        case 0x46deb8u: goto label_46deb8;
        case 0x46debcu: goto label_46debc;
        case 0x46dec0u: goto label_46dec0;
        case 0x46dec4u: goto label_46dec4;
        case 0x46dec8u: goto label_46dec8;
        case 0x46deccu: goto label_46decc;
        case 0x46ded0u: goto label_46ded0;
        case 0x46ded4u: goto label_46ded4;
        case 0x46ded8u: goto label_46ded8;
        case 0x46dedcu: goto label_46dedc;
        case 0x46dee0u: goto label_46dee0;
        case 0x46dee4u: goto label_46dee4;
        case 0x46dee8u: goto label_46dee8;
        case 0x46deecu: goto label_46deec;
        case 0x46def0u: goto label_46def0;
        case 0x46def4u: goto label_46def4;
        case 0x46def8u: goto label_46def8;
        case 0x46defcu: goto label_46defc;
        case 0x46df00u: goto label_46df00;
        case 0x46df04u: goto label_46df04;
        case 0x46df08u: goto label_46df08;
        case 0x46df0cu: goto label_46df0c;
        case 0x46df10u: goto label_46df10;
        case 0x46df14u: goto label_46df14;
        case 0x46df18u: goto label_46df18;
        case 0x46df1cu: goto label_46df1c;
        case 0x46df20u: goto label_46df20;
        case 0x46df24u: goto label_46df24;
        case 0x46df28u: goto label_46df28;
        case 0x46df2cu: goto label_46df2c;
        case 0x46df30u: goto label_46df30;
        case 0x46df34u: goto label_46df34;
        case 0x46df38u: goto label_46df38;
        case 0x46df3cu: goto label_46df3c;
        case 0x46df40u: goto label_46df40;
        case 0x46df44u: goto label_46df44;
        case 0x46df48u: goto label_46df48;
        case 0x46df4cu: goto label_46df4c;
        case 0x46df50u: goto label_46df50;
        case 0x46df54u: goto label_46df54;
        case 0x46df58u: goto label_46df58;
        case 0x46df5cu: goto label_46df5c;
        case 0x46df60u: goto label_46df60;
        case 0x46df64u: goto label_46df64;
        case 0x46df68u: goto label_46df68;
        case 0x46df6cu: goto label_46df6c;
        case 0x46df70u: goto label_46df70;
        case 0x46df74u: goto label_46df74;
        case 0x46df78u: goto label_46df78;
        case 0x46df7cu: goto label_46df7c;
        case 0x46df80u: goto label_46df80;
        case 0x46df84u: goto label_46df84;
        case 0x46df88u: goto label_46df88;
        case 0x46df8cu: goto label_46df8c;
        case 0x46df90u: goto label_46df90;
        case 0x46df94u: goto label_46df94;
        case 0x46df98u: goto label_46df98;
        case 0x46df9cu: goto label_46df9c;
        case 0x46dfa0u: goto label_46dfa0;
        case 0x46dfa4u: goto label_46dfa4;
        case 0x46dfa8u: goto label_46dfa8;
        case 0x46dfacu: goto label_46dfac;
        case 0x46dfb0u: goto label_46dfb0;
        case 0x46dfb4u: goto label_46dfb4;
        case 0x46dfb8u: goto label_46dfb8;
        case 0x46dfbcu: goto label_46dfbc;
        case 0x46dfc0u: goto label_46dfc0;
        case 0x46dfc4u: goto label_46dfc4;
        case 0x46dfc8u: goto label_46dfc8;
        case 0x46dfccu: goto label_46dfcc;
        case 0x46dfd0u: goto label_46dfd0;
        case 0x46dfd4u: goto label_46dfd4;
        case 0x46dfd8u: goto label_46dfd8;
        case 0x46dfdcu: goto label_46dfdc;
        case 0x46dfe0u: goto label_46dfe0;
        case 0x46dfe4u: goto label_46dfe4;
        case 0x46dfe8u: goto label_46dfe8;
        case 0x46dfecu: goto label_46dfec;
        case 0x46dff0u: goto label_46dff0;
        case 0x46dff4u: goto label_46dff4;
        case 0x46dff8u: goto label_46dff8;
        case 0x46dffcu: goto label_46dffc;
        case 0x46e000u: goto label_46e000;
        case 0x46e004u: goto label_46e004;
        case 0x46e008u: goto label_46e008;
        case 0x46e00cu: goto label_46e00c;
        case 0x46e010u: goto label_46e010;
        case 0x46e014u: goto label_46e014;
        case 0x46e018u: goto label_46e018;
        case 0x46e01cu: goto label_46e01c;
        case 0x46e020u: goto label_46e020;
        case 0x46e024u: goto label_46e024;
        case 0x46e028u: goto label_46e028;
        case 0x46e02cu: goto label_46e02c;
        case 0x46e030u: goto label_46e030;
        case 0x46e034u: goto label_46e034;
        case 0x46e038u: goto label_46e038;
        case 0x46e03cu: goto label_46e03c;
        case 0x46e040u: goto label_46e040;
        case 0x46e044u: goto label_46e044;
        case 0x46e048u: goto label_46e048;
        case 0x46e04cu: goto label_46e04c;
        case 0x46e050u: goto label_46e050;
        case 0x46e054u: goto label_46e054;
        case 0x46e058u: goto label_46e058;
        case 0x46e05cu: goto label_46e05c;
        case 0x46e060u: goto label_46e060;
        case 0x46e064u: goto label_46e064;
        case 0x46e068u: goto label_46e068;
        case 0x46e06cu: goto label_46e06c;
        default: break;
    }

    ctx->pc = 0x46da30u;

label_46da30:
    // 0x46da30: 0x27bdf930  addiu       $sp, $sp, -0x6D0
    ctx->pc = 0x46da30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965552));
label_46da34:
    // 0x46da34: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x46da34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_46da38:
    // 0x46da38: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x46da38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_46da3c:
    // 0x46da3c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x46da3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_46da40:
    // 0x46da40: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x46da40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_46da44:
    // 0x46da44: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x46da44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_46da48:
    // 0x46da48: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x46da48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_46da4c:
    // 0x46da4c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x46da4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_46da50:
    // 0x46da50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x46da50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_46da54:
    // 0x46da54: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x46da54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_46da58:
    // 0x46da58: 0xafa406b0  sw          $a0, 0x6B0($sp)
    ctx->pc = 0x46da58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1712), GPR_U32(ctx, 4));
label_46da5c:
    // 0x46da5c: 0xafa506c0  sw          $a1, 0x6C0($sp)
    ctx->pc = 0x46da5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1728), GPR_U32(ctx, 5));
label_46da60:
    // 0x46da60: 0x27a406a0  addiu       $a0, $sp, 0x6A0
    ctx->pc = 0x46da60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1696));
label_46da64:
    // 0x46da64: 0xc0495d4  jal         func_125750
label_46da68:
    if (ctx->pc == 0x46DA68u) {
        ctx->pc = 0x46DA6Cu;
        goto label_46da6c;
    }
    ctx->pc = 0x46DA64u;
    SET_GPR_U32(ctx, 31, 0x46DA6Cu);
    ctx->pc = 0x125750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125750u, 0x46DA64u, 0x46DA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46DA6Cu;
label_46da6c:
    // 0x46da6c: 0x27a406a0  addiu       $a0, $sp, 0x6A0
    ctx->pc = 0x46da6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1696));
label_46da70:
    // 0x46da70: 0x8fa506c0  lw          $a1, 0x6C0($sp)
    ctx->pc = 0x46da70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1728)));
label_46da74:
    // 0x46da74: 0xc11b81c  jal         func_46E070
label_46da78:
    if (ctx->pc == 0x46DA78u) {
        ctx->pc = 0x46DA7Cu;
        goto label_46da7c;
    }
    ctx->pc = 0x46DA74u;
    SET_GPR_U32(ctx, 31, 0x46DA7Cu);
    ctx->pc = 0x46E070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46E070u, 0x46DA74u, 0x46DA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46DA7Cu;
label_46da7c:
    // 0x46da7c: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
label_46da80:
    if (ctx->pc == 0x46DA80u) {
        ctx->pc = 0x46DA84u;
        goto label_46da84;
    }
    ctx->pc = 0x46DA7Cu;
    {
        const bool branch_taken_0x46da7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46da7c) {
            ctx->pc = 0x46DB48u;
            goto label_46db48;
        }
    }
    ctx->pc = 0x46DA84u;
label_46da84:
    // 0x46da84: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x46da84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_46da88:
    // 0x46da88: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46da88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_46da8c:
    // 0x46da8c: 0x27a60690  addiu       $a2, $sp, 0x690
    ctx->pc = 0x46da8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1680));
label_46da90:
    // 0x46da90: 0xc115ee8  jal         func_457BA0
label_46da94:
    if (ctx->pc == 0x46DA94u) {
        ctx->pc = 0x46DA98u;
        goto label_46da98;
    }
    ctx->pc = 0x46DA90u;
    SET_GPR_U32(ctx, 31, 0x46DA98u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x46DA90u, 0x46DA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46DA98u;
label_46da98:
    // 0x46da98: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_46da9c:
    if (ctx->pc == 0x46DA9Cu) {
        ctx->pc = 0x46DAA0u;
        goto label_46daa0;
    }
    ctx->pc = 0x46DA98u;
    {
        const bool branch_taken_0x46da98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46da98) {
            ctx->pc = 0x46DB28u;
            goto label_46db28;
        }
    }
    ctx->pc = 0x46DAA0u;
label_46daa0:
    // 0x46daa0: 0x8fa20698  lw          $v0, 0x698($sp)
    ctx->pc = 0x46daa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1688)));
label_46daa4:
    // 0x46daa4: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_46daa8:
    if (ctx->pc == 0x46DAA8u) {
        ctx->pc = 0x46DAACu;
        goto label_46daac;
    }
    ctx->pc = 0x46DAA4u;
    {
        const bool branch_taken_0x46daa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46daa4) {
            ctx->pc = 0x46DB28u;
            goto label_46db28;
        }
    }
    ctx->pc = 0x46DAACu;
label_46daac:
    // 0x46daac: 0x27a40510  addiu       $a0, $sp, 0x510
    ctx->pc = 0x46daacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1296));
label_46dab0:
    // 0x46dab0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46dab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_46dab4:
    // 0x46dab4: 0x8fa60694  lw          $a2, 0x694($sp)
    ctx->pc = 0x46dab4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1684)));
label_46dab8:
    // 0x46dab8: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x46dab8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_46dabc:
    // 0x46dabc: 0x24e7f968  addiu       $a3, $a3, -0x698
    ctx->pc = 0x46dabcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965608));
label_46dac0:
    // 0x46dac0: 0x240800ad  addiu       $t0, $zero, 0xAD
    ctx->pc = 0x46dac0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 173));
label_46dac4:
    // 0x46dac4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x46dac4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46dac8:
    // 0x46dac8: 0xc113940  jal         func_44E500
label_46dacc:
    if (ctx->pc == 0x46DACCu) {
        ctx->pc = 0x46DAD0u;
        goto label_46dad0;
    }
    ctx->pc = 0x46DAC8u;
    SET_GPR_U32(ctx, 31, 0x46DAD0u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x46DAC8u, 0x46DAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46DAD0u;
label_46dad0:
    // 0x46dad0: 0x8fa406c0  lw          $a0, 0x6C0($sp)
    ctx->pc = 0x46dad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1728)));
label_46dad4:
    // 0x46dad4: 0xc041b38  jal         func_106CE0
label_46dad8:
    if (ctx->pc == 0x46DAD8u) {
        ctx->pc = 0x46DADCu;
        goto label_46dadc;
    }
    ctx->pc = 0x46DAD4u;
    SET_GPR_U32(ctx, 31, 0x46DADCu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x46DAD4u, 0x46DADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46DADCu;
label_46dadc:
    // 0x46dadc: 0x27a40510  addiu       $a0, $sp, 0x510
    ctx->pc = 0x46dadcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1296));
label_46dae0:
    // 0x46dae0: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x46dae0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_46dae4:
    // 0x46dae4: 0x24a5f980  addiu       $a1, $a1, -0x680
    ctx->pc = 0x46dae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965632));
label_46dae8:
    // 0x46dae8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x46dae8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46daec:
    // 0x46daec: 0xc115c24  jal         func_457090
label_46daf0:
    if (ctx->pc == 0x46DAF0u) {
        ctx->pc = 0x46DAF4u;
        goto label_46daf4;
    }
    ctx->pc = 0x46DAECu;
    SET_GPR_U32(ctx, 31, 0x46DAF4u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x46DAECu, 0x46DAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46DAF4u;
label_46daf4:
    // 0x46daf4: 0x27a40510  addiu       $a0, $sp, 0x510
    ctx->pc = 0x46daf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1296));
label_46daf8:
    // 0x46daf8: 0x8fa20698  lw          $v0, 0x698($sp)
    ctx->pc = 0x46daf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1688)));
label_46dafc:
    // 0x46dafc: 0x40f809  jalr        $v0
label_46db00:
    if (ctx->pc == 0x46DB00u) {
        ctx->pc = 0x46DB04u;
        goto label_46db04;
    }
    ctx->pc = 0x46DAFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46DB04u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46DAFCu, 0x46DB04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46DB04u;
label_46db04:
    // 0x46db04: 0x8fa20510  lw          $v0, 0x510($sp)
    ctx->pc = 0x46db04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1296)));
label_46db08:
    // 0x46db08: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_46db0c:
    if (ctx->pc == 0x46DB0Cu) {
        ctx->pc = 0x46DB10u;
        goto label_46db10;
    }
    ctx->pc = 0x46DB08u;
    {
        const bool branch_taken_0x46db08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46db08) {
            ctx->pc = 0x46DB18u;
            goto label_46db18;
        }
    }
    ctx->pc = 0x46DB10u;
label_46db10:
    // 0x46db10: 0xd  break       0
    ctx->pc = 0x46db10u;
    runtime->handleBreak(rdram, ctx);
label_46db14:
    // 0x46db14: 0x0  nop
    ctx->pc = 0x46db14u;
    // NOP
label_46db18:
    // 0x46db18: 0x27a40510  addiu       $a0, $sp, 0x510
    ctx->pc = 0x46db18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1296));
label_46db1c:
    // 0x46db1c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46db1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_46db20:
    // 0x46db20: 0xc11392c  jal         func_44E4B0
label_46db24:
    if (ctx->pc == 0x46DB24u) {
        ctx->pc = 0x46DB28u;
        goto label_46db28;
    }
    ctx->pc = 0x46DB20u;
    SET_GPR_U32(ctx, 31, 0x46DB28u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x46DB20u, 0x46DB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46DB28u;
label_46db28:
    // 0x46db28: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x46db28u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46db2c:
    // 0x46db2c: 0x27a406a0  addiu       $a0, $sp, 0x6A0
    ctx->pc = 0x46db2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1696));
label_46db30:
    // 0x46db30: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46db30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_46db34:
    // 0x46db34: 0xc0406a0  jal         func_101A80
label_46db38:
    if (ctx->pc == 0x46DB38u) {
        ctx->pc = 0x46DB3Cu;
        goto label_46db3c;
    }
    ctx->pc = 0x46DB34u;
    SET_GPR_U32(ctx, 31, 0x46DB3Cu);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x46DB34u, 0x46DB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46DB3Cu;
label_46db3c:
    // 0x46db3c: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x46db3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_46db40:
    // 0x46db40: 0x1000013d  b           . + 4 + (0x13D << 2)
label_46db44:
    if (ctx->pc == 0x46DB44u) {
        ctx->pc = 0x46DB48u;
        goto label_46db48;
    }
    ctx->pc = 0x46DB40u;
    {
        const bool branch_taken_0x46db40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46db40) {
            ctx->pc = 0x46E038u;
            goto label_46e038;
        }
    }
    ctx->pc = 0x46DB48u;
label_46db48:
    // 0x46db48: 0xafa006ac  sw          $zero, 0x6AC($sp)
    ctx->pc = 0x46db48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1708), GPR_U32(ctx, 0));
label_46db4c:
    // 0x46db4c: 0x27a40680  addiu       $a0, $sp, 0x680
    ctx->pc = 0x46db4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1664));
label_46db50:
    // 0x46db50: 0xc0495d4  jal         func_125750
label_46db54:
    if (ctx->pc == 0x46DB54u) {
        ctx->pc = 0x46DB58u;
        goto label_46db58;
    }
    ctx->pc = 0x46DB50u;
    SET_GPR_U32(ctx, 31, 0x46DB58u);
    ctx->pc = 0x125750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125750u, 0x46DB50u, 0x46DB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46DB58u;
label_46db58:
    // 0x46db58: 0x27a40680  addiu       $a0, $sp, 0x680
    ctx->pc = 0x46db58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1664));
label_46db5c:
    // 0x46db5c: 0x27a506a0  addiu       $a1, $sp, 0x6A0
    ctx->pc = 0x46db5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1696));
label_46db60:
    // 0x46db60: 0x27a606ac  addiu       $a2, $sp, 0x6AC
    ctx->pc = 0x46db60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1708));
label_46db64:
    // 0x46db64: 0xc05e764  jal         func_179D90
label_46db68:
    if (ctx->pc == 0x46DB68u) {
        ctx->pc = 0x46DB6Cu;
        goto label_46db6c;
    }
    ctx->pc = 0x46DB64u;
    SET_GPR_U32(ctx, 31, 0x46DB6Cu);
    ctx->pc = 0x179D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179D90u, 0x46DB64u, 0x46DB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46DB6Cu;
label_46db6c:
    // 0x46db6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x46db6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46db70:
    // 0x46db70: 0x16000036  bnez        $s0, . + 4 + (0x36 << 2)
label_46db74:
    if (ctx->pc == 0x46DB74u) {
        ctx->pc = 0x46DB78u;
        goto label_46db78;
    }
    ctx->pc = 0x46DB70u;
    {
        const bool branch_taken_0x46db70 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x46db70) {
            ctx->pc = 0x46DC4Cu;
            goto label_46dc4c;
        }
    }
    ctx->pc = 0x46DB78u;
label_46db78:
    // 0x46db78: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x46db78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_46db7c:
    // 0x46db7c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46db7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_46db80:
    // 0x46db80: 0x27a60670  addiu       $a2, $sp, 0x670
    ctx->pc = 0x46db80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1648));
label_46db84:
    // 0x46db84: 0xc115ee8  jal         func_457BA0
label_46db88:
    if (ctx->pc == 0x46DB88u) {
        ctx->pc = 0x46DB8Cu;
        goto label_46db8c;
    }
    ctx->pc = 0x46DB84u;
    SET_GPR_U32(ctx, 31, 0x46DB8Cu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x46DB84u, 0x46DB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46DB8Cu;
label_46db8c:
    // 0x46db8c: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_46db90:
    if (ctx->pc == 0x46DB90u) {
        ctx->pc = 0x46DB94u;
        goto label_46db94;
    }
    ctx->pc = 0x46DB8Cu;
    {
        const bool branch_taken_0x46db8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46db8c) {
            ctx->pc = 0x46DC1Cu;
            goto label_46dc1c;
        }
    }
    ctx->pc = 0x46DB94u;
label_46db94:
    // 0x46db94: 0x8fa20678  lw          $v0, 0x678($sp)
    ctx->pc = 0x46db94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1656)));
label_46db98:
    // 0x46db98: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_46db9c:
    if (ctx->pc == 0x46DB9Cu) {
        ctx->pc = 0x46DBA0u;
        goto label_46dba0;
    }
    ctx->pc = 0x46DB98u;
    {
        const bool branch_taken_0x46db98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46db98) {
            ctx->pc = 0x46DC1Cu;
            goto label_46dc1c;
        }
    }
    ctx->pc = 0x46DBA0u;
label_46dba0:
    // 0x46dba0: 0x27a403f0  addiu       $a0, $sp, 0x3F0
    ctx->pc = 0x46dba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1008));
label_46dba4:
    // 0x46dba4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46dba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_46dba8:
    // 0x46dba8: 0x8fa60674  lw          $a2, 0x674($sp)
    ctx->pc = 0x46dba8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1652)));
label_46dbac:
    // 0x46dbac: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x46dbacu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_46dbb0:
    // 0x46dbb0: 0x24e7f968  addiu       $a3, $a3, -0x698
    ctx->pc = 0x46dbb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965608));
label_46dbb4:
    // 0x46dbb4: 0x240800b8  addiu       $t0, $zero, 0xB8
    ctx->pc = 0x46dbb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
label_46dbb8:
    // 0x46dbb8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x46dbb8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46dbbc:
    // 0x46dbbc: 0xc113940  jal         func_44E500
label_46dbc0:
    if (ctx->pc == 0x46DBC0u) {
        ctx->pc = 0x46DBC4u;
        goto label_46dbc4;
    }
    ctx->pc = 0x46DBBCu;
    SET_GPR_U32(ctx, 31, 0x46DBC4u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x46DBBCu, 0x46DBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46DBC4u;
label_46dbc4:
    // 0x46dbc4: 0x8fa406c0  lw          $a0, 0x6C0($sp)
    ctx->pc = 0x46dbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1728)));
label_46dbc8:
    // 0x46dbc8: 0xc041b38  jal         func_106CE0
label_46dbcc:
    if (ctx->pc == 0x46DBCCu) {
        ctx->pc = 0x46DBD0u;
        goto label_46dbd0;
    }
    ctx->pc = 0x46DBC8u;
    SET_GPR_U32(ctx, 31, 0x46DBD0u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x46DBC8u, 0x46DBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46DBD0u;
label_46dbd0:
    // 0x46dbd0: 0x27a403f0  addiu       $a0, $sp, 0x3F0
    ctx->pc = 0x46dbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1008));
label_46dbd4:
    // 0x46dbd4: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x46dbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_46dbd8:
    // 0x46dbd8: 0x24a5f9a0  addiu       $a1, $a1, -0x660
    ctx->pc = 0x46dbd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965664));
label_46dbdc:
    // 0x46dbdc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x46dbdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46dbe0:
    // 0x46dbe0: 0xc115c24  jal         func_457090
label_46dbe4:
    if (ctx->pc == 0x46DBE4u) {
        ctx->pc = 0x46DBE8u;
        goto label_46dbe8;
    }
    ctx->pc = 0x46DBE0u;
    SET_GPR_U32(ctx, 31, 0x46DBE8u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x46DBE0u, 0x46DBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46DBE8u;
label_46dbe8:
    // 0x46dbe8: 0x27a403f0  addiu       $a0, $sp, 0x3F0
    ctx->pc = 0x46dbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1008));
label_46dbec:
    // 0x46dbec: 0x8fa20678  lw          $v0, 0x678($sp)
    ctx->pc = 0x46dbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1656)));
label_46dbf0:
    // 0x46dbf0: 0x40f809  jalr        $v0
label_46dbf4:
    if (ctx->pc == 0x46DBF4u) {
        ctx->pc = 0x46DBF8u;
        goto label_46dbf8;
    }
    ctx->pc = 0x46DBF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46DBF8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46DBF0u, 0x46DBF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46DBF8u;
label_46dbf8:
    // 0x46dbf8: 0x8fa203f0  lw          $v0, 0x3F0($sp)
    ctx->pc = 0x46dbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1008)));
label_46dbfc:
    // 0x46dbfc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_46dc00:
    if (ctx->pc == 0x46DC00u) {
        ctx->pc = 0x46DC04u;
        goto label_46dc04;
    }
    ctx->pc = 0x46DBFCu;
    {
        const bool branch_taken_0x46dbfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46dbfc) {
            ctx->pc = 0x46DC0Cu;
            goto label_46dc0c;
        }
    }
    ctx->pc = 0x46DC04u;
label_46dc04:
    // 0x46dc04: 0xd  break       0
    ctx->pc = 0x46dc04u;
    runtime->handleBreak(rdram, ctx);
label_46dc08:
    // 0x46dc08: 0x0  nop
    ctx->pc = 0x46dc08u;
    // NOP
label_46dc0c:
    // 0x46dc0c: 0x27a403f0  addiu       $a0, $sp, 0x3F0
    ctx->pc = 0x46dc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1008));
label_46dc10:
    // 0x46dc10: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46dc10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_46dc14:
    // 0x46dc14: 0xc11392c  jal         func_44E4B0
label_46dc18:
    if (ctx->pc == 0x46DC18u) {
        ctx->pc = 0x46DC1Cu;
        goto label_46dc1c;
    }
    ctx->pc = 0x46DC14u;
    SET_GPR_U32(ctx, 31, 0x46DC1Cu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x46DC14u, 0x46DC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46DC1Cu;
label_46dc1c:
    // 0x46dc1c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x46dc1cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46dc20:
    // 0x46dc20: 0x27a40680  addiu       $a0, $sp, 0x680
    ctx->pc = 0x46dc20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1664));
label_46dc24:
    // 0x46dc24: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46dc24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_46dc28:
    // 0x46dc28: 0xc0406a0  jal         func_101A80
label_46dc2c:
    if (ctx->pc == 0x46DC2Cu) {
        ctx->pc = 0x46DC30u;
        goto label_46dc30;
    }
    ctx->pc = 0x46DC28u;
    SET_GPR_U32(ctx, 31, 0x46DC30u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x46DC28u, 0x46DC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46DC30u;
label_46dc30:
    // 0x46dc30: 0x27a406a0  addiu       $a0, $sp, 0x6A0
    ctx->pc = 0x46dc30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1696));
label_46dc34:
    // 0x46dc34: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46dc34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_46dc38:
    // 0x46dc38: 0xc0406a0  jal         func_101A80
label_46dc3c:
    if (ctx->pc == 0x46DC3Cu) {
        ctx->pc = 0x46DC40u;
        goto label_46dc40;
    }
    ctx->pc = 0x46DC38u;
    SET_GPR_U32(ctx, 31, 0x46DC40u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x46DC38u, 0x46DC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46DC40u;
label_46dc40:
    // 0x46dc40: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x46dc40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_46dc44:
    // 0x46dc44: 0x100000fc  b           . + 4 + (0xFC << 2)
label_46dc48:
    if (ctx->pc == 0x46DC48u) {
        ctx->pc = 0x46DC4Cu;
        goto label_46dc4c;
    }
    ctx->pc = 0x46DC44u;
    {
        const bool branch_taken_0x46dc44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46dc44) {
            ctx->pc = 0x46E038u;
            goto label_46e038;
        }
    }
    ctx->pc = 0x46DC4Cu;
label_46dc4c:
    // 0x46dc4c: 0x27a40680  addiu       $a0, $sp, 0x680
    ctx->pc = 0x46dc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1664));
label_46dc50:
    // 0x46dc50: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x46dc50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_46dc54:
    // 0x46dc54: 0x24a51a90  addiu       $a1, $a1, 0x1A90
    ctx->pc = 0x46dc54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6800));
label_46dc58:
    // 0x46dc58: 0xc08cacc  jal         func_232B30
label_46dc5c:
    if (ctx->pc == 0x46DC5Cu) {
        ctx->pc = 0x46DC60u;
        goto label_46dc60;
    }
    ctx->pc = 0x46DC58u;
    SET_GPR_U32(ctx, 31, 0x46DC60u);
    ctx->pc = 0x232B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232B30u, 0x46DC58u, 0x46DC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46DC60u;
label_46dc60:
    // 0x46dc60: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
label_46dc64:
    if (ctx->pc == 0x46DC64u) {
        ctx->pc = 0x46DC68u;
        goto label_46dc68;
    }
    ctx->pc = 0x46DC60u;
    {
        const bool branch_taken_0x46dc60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46dc60) {
            ctx->pc = 0x46DDA4u;
            goto label_46dda4;
        }
    }
    ctx->pc = 0x46DC68u;
label_46dc68:
    // 0x46dc68: 0x27a40680  addiu       $a0, $sp, 0x680
    ctx->pc = 0x46dc68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1664));
label_46dc6c:
    // 0x46dc6c: 0x27a506a0  addiu       $a1, $sp, 0x6A0
    ctx->pc = 0x46dc6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1696));
label_46dc70:
    // 0x46dc70: 0x27a606ac  addiu       $a2, $sp, 0x6AC
    ctx->pc = 0x46dc70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1708));
label_46dc74:
    // 0x46dc74: 0xc05e764  jal         func_179D90
label_46dc78:
    if (ctx->pc == 0x46DC78u) {
        ctx->pc = 0x46DC7Cu;
        goto label_46dc7c;
    }
    ctx->pc = 0x46DC74u;
    SET_GPR_U32(ctx, 31, 0x46DC7Cu);
    ctx->pc = 0x179D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179D90u, 0x46DC74u, 0x46DC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46DC7Cu;
label_46dc7c:
    // 0x46dc7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x46dc7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46dc80:
    // 0x46dc80: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_46dc84:
    if (ctx->pc == 0x46DC84u) {
        ctx->pc = 0x46DC88u;
        goto label_46dc88;
    }
    ctx->pc = 0x46DC80u;
    {
        const bool branch_taken_0x46dc80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x46dc80) {
            ctx->pc = 0x46DCD0u;
            goto label_46dcd0;
        }
    }
    ctx->pc = 0x46DC88u;
label_46dc88:
    // 0x46dc88: 0x27a40630  addiu       $a0, $sp, 0x630
    ctx->pc = 0x46dc88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1584));
label_46dc8c:
    // 0x46dc8c: 0x27a50680  addiu       $a1, $sp, 0x680
    ctx->pc = 0x46dc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1664));
label_46dc90:
    // 0x46dc90: 0xc1194c4  jal         func_465310
label_46dc94:
    if (ctx->pc == 0x46DC94u) {
        ctx->pc = 0x46DC98u;
        goto label_46dc98;
    }
    ctx->pc = 0x46DC90u;
    SET_GPR_U32(ctx, 31, 0x46DC98u);
    ctx->pc = 0x465310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465310u, 0x46DC90u, 0x46DC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46DC98u;
label_46dc98:
    // 0x46dc98: 0x27a40630  addiu       $a0, $sp, 0x630
    ctx->pc = 0x46dc98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1584));
label_46dc9c:
    // 0x46dc9c: 0xc041b38  jal         func_106CE0
label_46dca0:
    if (ctx->pc == 0x46DCA0u) {
        ctx->pc = 0x46DCA4u;
        goto label_46dca4;
    }
    ctx->pc = 0x46DC9Cu;
    SET_GPR_U32(ctx, 31, 0x46DCA4u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x46DC9Cu, 0x46DCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46DCA4u;
label_46dca4:
    // 0x46dca4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x46dca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46dca8:
    // 0x46dca8: 0xc0ba89e  jal         func_2EA278
label_46dcac:
    if (ctx->pc == 0x46DCACu) {
        ctx->pc = 0x46DCB0u;
        goto label_46dcb0;
    }
    ctx->pc = 0x46DCA8u;
    SET_GPR_U32(ctx, 31, 0x46DCB0u);
    ctx->pc = 0x2EA278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA278u, 0x46DCA8u, 0x46DCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46DCB0u;
label_46dcb0:
    // 0x46dcb0: 0x8fa306b0  lw          $v1, 0x6B0($sp)
    ctx->pc = 0x46dcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1712)));
label_46dcb4:
    // 0x46dcb4: 0xac62003c  sw          $v0, 0x3C($v1)
    ctx->pc = 0x46dcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 2));
label_46dcb8:
    // 0x46dcb8: 0x27a40630  addiu       $a0, $sp, 0x630
    ctx->pc = 0x46dcb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1584));
label_46dcbc:
    // 0x46dcbc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46dcbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_46dcc0:
    // 0x46dcc0: 0xc0402d4  jal         func_100B50
label_46dcc4:
    if (ctx->pc == 0x46DCC4u) {
        ctx->pc = 0x46DCC8u;
        goto label_46dcc8;
    }
    ctx->pc = 0x46DCC0u;
    SET_GPR_U32(ctx, 31, 0x46DCC8u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x46DCC0u, 0x46DCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46DCC8u;
label_46dcc8:
    // 0x46dcc8: 0x1000006b  b           . + 4 + (0x6B << 2)
label_46dccc:
    if (ctx->pc == 0x46DCCCu) {
        ctx->pc = 0x46DCD0u;
        goto label_46dcd0;
    }
    ctx->pc = 0x46DCC8u;
    {
        const bool branch_taken_0x46dcc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46dcc8) {
            ctx->pc = 0x46DE78u;
            goto label_46de78;
        }
    }
    ctx->pc = 0x46DCD0u;
label_46dcd0:
    // 0x46dcd0: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x46dcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_46dcd4:
    // 0x46dcd4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46dcd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_46dcd8:
    // 0x46dcd8: 0x27a60660  addiu       $a2, $sp, 0x660
    ctx->pc = 0x46dcd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1632));
label_46dcdc:
    // 0x46dcdc: 0xc115ee8  jal         func_457BA0
label_46dce0:
    if (ctx->pc == 0x46DCE0u) {
        ctx->pc = 0x46DCE4u;
        goto label_46dce4;
    }
    ctx->pc = 0x46DCDCu;
    SET_GPR_U32(ctx, 31, 0x46DCE4u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x46DCDCu, 0x46DCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46DCE4u;
label_46dce4:
    // 0x46dce4: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_46dce8:
    if (ctx->pc == 0x46DCE8u) {
        ctx->pc = 0x46DCECu;
        goto label_46dcec;
    }
    ctx->pc = 0x46DCE4u;
    {
        const bool branch_taken_0x46dce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46dce4) {
            ctx->pc = 0x46DD74u;
            goto label_46dd74;
        }
    }
    ctx->pc = 0x46DCECu;
label_46dcec:
    // 0x46dcec: 0x8fa20668  lw          $v0, 0x668($sp)
    ctx->pc = 0x46dcecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1640)));
label_46dcf0:
    // 0x46dcf0: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_46dcf4:
    if (ctx->pc == 0x46DCF4u) {
        ctx->pc = 0x46DCF8u;
        goto label_46dcf8;
    }
    ctx->pc = 0x46DCF0u;
    {
        const bool branch_taken_0x46dcf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46dcf0) {
            ctx->pc = 0x46DD74u;
            goto label_46dd74;
        }
    }
    ctx->pc = 0x46DCF8u;
label_46dcf8:
    // 0x46dcf8: 0x27a402d0  addiu       $a0, $sp, 0x2D0
    ctx->pc = 0x46dcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
label_46dcfc:
    // 0x46dcfc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46dcfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_46dd00:
    // 0x46dd00: 0x8fa60664  lw          $a2, 0x664($sp)
    ctx->pc = 0x46dd00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1636)));
label_46dd04:
    // 0x46dd04: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x46dd04u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_46dd08:
    // 0x46dd08: 0x24e7f968  addiu       $a3, $a3, -0x698
    ctx->pc = 0x46dd08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965608));
label_46dd0c:
    // 0x46dd0c: 0x240800c6  addiu       $t0, $zero, 0xC6
    ctx->pc = 0x46dd0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 198));
label_46dd10:
    // 0x46dd10: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x46dd10u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46dd14:
    // 0x46dd14: 0xc113940  jal         func_44E500
label_46dd18:
    if (ctx->pc == 0x46DD18u) {
        ctx->pc = 0x46DD1Cu;
        goto label_46dd1c;
    }
    ctx->pc = 0x46DD14u;
    SET_GPR_U32(ctx, 31, 0x46DD1Cu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x46DD14u, 0x46DD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46DD1Cu;
label_46dd1c:
    // 0x46dd1c: 0x8fa406c0  lw          $a0, 0x6C0($sp)
    ctx->pc = 0x46dd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1728)));
label_46dd20:
    // 0x46dd20: 0xc041b38  jal         func_106CE0
label_46dd24:
    if (ctx->pc == 0x46DD24u) {
        ctx->pc = 0x46DD28u;
        goto label_46dd28;
    }
    ctx->pc = 0x46DD20u;
    SET_GPR_U32(ctx, 31, 0x46DD28u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x46DD20u, 0x46DD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46DD28u;
label_46dd28:
    // 0x46dd28: 0x27a402d0  addiu       $a0, $sp, 0x2D0
    ctx->pc = 0x46dd28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
label_46dd2c:
    // 0x46dd2c: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x46dd2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_46dd30:
    // 0x46dd30: 0x24a5f9d0  addiu       $a1, $a1, -0x630
    ctx->pc = 0x46dd30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965712));
label_46dd34:
    // 0x46dd34: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x46dd34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46dd38:
    // 0x46dd38: 0xc115c24  jal         func_457090
label_46dd3c:
    if (ctx->pc == 0x46DD3Cu) {
        ctx->pc = 0x46DD40u;
        goto label_46dd40;
    }
    ctx->pc = 0x46DD38u;
    SET_GPR_U32(ctx, 31, 0x46DD40u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x46DD38u, 0x46DD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46DD40u;
label_46dd40:
    // 0x46dd40: 0x27a402d0  addiu       $a0, $sp, 0x2D0
    ctx->pc = 0x46dd40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
label_46dd44:
    // 0x46dd44: 0x8fa20668  lw          $v0, 0x668($sp)
    ctx->pc = 0x46dd44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1640)));
label_46dd48:
    // 0x46dd48: 0x40f809  jalr        $v0
label_46dd4c:
    if (ctx->pc == 0x46DD4Cu) {
        ctx->pc = 0x46DD50u;
        goto label_46dd50;
    }
    ctx->pc = 0x46DD48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46DD50u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46DD48u, 0x46DD50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46DD50u;
label_46dd50:
    // 0x46dd50: 0x8fa202d0  lw          $v0, 0x2D0($sp)
    ctx->pc = 0x46dd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
label_46dd54:
    // 0x46dd54: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_46dd58:
    if (ctx->pc == 0x46DD58u) {
        ctx->pc = 0x46DD5Cu;
        goto label_46dd5c;
    }
    ctx->pc = 0x46DD54u;
    {
        const bool branch_taken_0x46dd54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46dd54) {
            ctx->pc = 0x46DD64u;
            goto label_46dd64;
        }
    }
    ctx->pc = 0x46DD5Cu;
label_46dd5c:
    // 0x46dd5c: 0xd  break       0
    ctx->pc = 0x46dd5cu;
    runtime->handleBreak(rdram, ctx);
label_46dd60:
    // 0x46dd60: 0x0  nop
    ctx->pc = 0x46dd60u;
    // NOP
label_46dd64:
    // 0x46dd64: 0x27a402d0  addiu       $a0, $sp, 0x2D0
    ctx->pc = 0x46dd64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
label_46dd68:
    // 0x46dd68: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46dd68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_46dd6c:
    // 0x46dd6c: 0xc11392c  jal         func_44E4B0
label_46dd70:
    if (ctx->pc == 0x46DD70u) {
        ctx->pc = 0x46DD74u;
        goto label_46dd74;
    }
    ctx->pc = 0x46DD6Cu;
    SET_GPR_U32(ctx, 31, 0x46DD74u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x46DD6Cu, 0x46DD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46DD74u;
label_46dd74:
    // 0x46dd74: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x46dd74u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46dd78:
    // 0x46dd78: 0x27a40680  addiu       $a0, $sp, 0x680
    ctx->pc = 0x46dd78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1664));
label_46dd7c:
    // 0x46dd7c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46dd7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_46dd80:
    // 0x46dd80: 0xc0406a0  jal         func_101A80
label_46dd84:
    if (ctx->pc == 0x46DD84u) {
        ctx->pc = 0x46DD88u;
        goto label_46dd88;
    }
    ctx->pc = 0x46DD80u;
    SET_GPR_U32(ctx, 31, 0x46DD88u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x46DD80u, 0x46DD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46DD88u;
label_46dd88:
    // 0x46dd88: 0x27a406a0  addiu       $a0, $sp, 0x6A0
    ctx->pc = 0x46dd88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1696));
label_46dd8c:
    // 0x46dd8c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46dd8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_46dd90:
    // 0x46dd90: 0xc0406a0  jal         func_101A80
label_46dd94:
    if (ctx->pc == 0x46DD94u) {
        ctx->pc = 0x46DD98u;
        goto label_46dd98;
    }
    ctx->pc = 0x46DD90u;
    SET_GPR_U32(ctx, 31, 0x46DD98u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x46DD90u, 0x46DD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46DD98u;
label_46dd98:
    // 0x46dd98: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x46dd98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_46dd9c:
    // 0x46dd9c: 0x100000a6  b           . + 4 + (0xA6 << 2)
label_46dda0:
    if (ctx->pc == 0x46DDA0u) {
        ctx->pc = 0x46DDA4u;
        goto label_46dda4;
    }
    ctx->pc = 0x46DD9Cu;
    {
        const bool branch_taken_0x46dd9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46dd9c) {
            ctx->pc = 0x46E038u;
            goto label_46e038;
        }
    }
    ctx->pc = 0x46DDA4u;
label_46dda4:
    // 0x46dda4: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x46dda4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_46dda8:
    // 0x46dda8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46dda8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_46ddac:
    // 0x46ddac: 0x27a60650  addiu       $a2, $sp, 0x650
    ctx->pc = 0x46ddacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1616));
label_46ddb0:
    // 0x46ddb0: 0xc115ee8  jal         func_457BA0
label_46ddb4:
    if (ctx->pc == 0x46DDB4u) {
        ctx->pc = 0x46DDB8u;
        goto label_46ddb8;
    }
    ctx->pc = 0x46DDB0u;
    SET_GPR_U32(ctx, 31, 0x46DDB8u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x46DDB0u, 0x46DDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46DDB8u;
label_46ddb8:
    // 0x46ddb8: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_46ddbc:
    if (ctx->pc == 0x46DDBCu) {
        ctx->pc = 0x46DDC0u;
        goto label_46ddc0;
    }
    ctx->pc = 0x46DDB8u;
    {
        const bool branch_taken_0x46ddb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46ddb8) {
            ctx->pc = 0x46DE48u;
            goto label_46de48;
        }
    }
    ctx->pc = 0x46DDC0u;
label_46ddc0:
    // 0x46ddc0: 0x8fa20658  lw          $v0, 0x658($sp)
    ctx->pc = 0x46ddc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1624)));
label_46ddc4:
    // 0x46ddc4: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_46ddc8:
    if (ctx->pc == 0x46DDC8u) {
        ctx->pc = 0x46DDCCu;
        goto label_46ddcc;
    }
    ctx->pc = 0x46DDC4u;
    {
        const bool branch_taken_0x46ddc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46ddc4) {
            ctx->pc = 0x46DE48u;
            goto label_46de48;
        }
    }
    ctx->pc = 0x46DDCCu;
label_46ddcc:
    // 0x46ddcc: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x46ddccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_46ddd0:
    // 0x46ddd0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46ddd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_46ddd4:
    // 0x46ddd4: 0x8fa60654  lw          $a2, 0x654($sp)
    ctx->pc = 0x46ddd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1620)));
label_46ddd8:
    // 0x46ddd8: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x46ddd8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_46dddc:
    // 0x46dddc: 0x24e7f968  addiu       $a3, $a3, -0x698
    ctx->pc = 0x46dddcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965608));
label_46dde0:
    // 0x46dde0: 0x240800cc  addiu       $t0, $zero, 0xCC
    ctx->pc = 0x46dde0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
label_46dde4:
    // 0x46dde4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x46dde4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46dde8:
    // 0x46dde8: 0xc113940  jal         func_44E500
label_46ddec:
    if (ctx->pc == 0x46DDECu) {
        ctx->pc = 0x46DDF0u;
        goto label_46ddf0;
    }
    ctx->pc = 0x46DDE8u;
    SET_GPR_U32(ctx, 31, 0x46DDF0u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x46DDE8u, 0x46DDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46DDF0u;
label_46ddf0:
    // 0x46ddf0: 0x8fa406c0  lw          $a0, 0x6C0($sp)
    ctx->pc = 0x46ddf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1728)));
label_46ddf4:
    // 0x46ddf4: 0xc041b38  jal         func_106CE0
label_46ddf8:
    if (ctx->pc == 0x46DDF8u) {
        ctx->pc = 0x46DDFCu;
        goto label_46ddfc;
    }
    ctx->pc = 0x46DDF4u;
    SET_GPR_U32(ctx, 31, 0x46DDFCu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x46DDF4u, 0x46DDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46DDFCu;
label_46ddfc:
    // 0x46ddfc: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x46ddfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_46de00:
    // 0x46de00: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x46de00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_46de04:
    // 0x46de04: 0x24a5fa00  addiu       $a1, $a1, -0x600
    ctx->pc = 0x46de04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965760));
label_46de08:
    // 0x46de08: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x46de08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46de0c:
    // 0x46de0c: 0xc115c24  jal         func_457090
label_46de10:
    if (ctx->pc == 0x46DE10u) {
        ctx->pc = 0x46DE14u;
        goto label_46de14;
    }
    ctx->pc = 0x46DE0Cu;
    SET_GPR_U32(ctx, 31, 0x46DE14u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x46DE0Cu, 0x46DE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46DE14u;
label_46de14:
    // 0x46de14: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x46de14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_46de18:
    // 0x46de18: 0x8fa20658  lw          $v0, 0x658($sp)
    ctx->pc = 0x46de18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1624)));
label_46de1c:
    // 0x46de1c: 0x40f809  jalr        $v0
label_46de20:
    if (ctx->pc == 0x46DE20u) {
        ctx->pc = 0x46DE24u;
        goto label_46de24;
    }
    ctx->pc = 0x46DE1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46DE24u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46DE1Cu, 0x46DE24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46DE24u;
label_46de24:
    // 0x46de24: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x46de24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_46de28:
    // 0x46de28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_46de2c:
    if (ctx->pc == 0x46DE2Cu) {
        ctx->pc = 0x46DE30u;
        goto label_46de30;
    }
    ctx->pc = 0x46DE28u;
    {
        const bool branch_taken_0x46de28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46de28) {
            ctx->pc = 0x46DE38u;
            goto label_46de38;
        }
    }
    ctx->pc = 0x46DE30u;
label_46de30:
    // 0x46de30: 0xd  break       0
    ctx->pc = 0x46de30u;
    runtime->handleBreak(rdram, ctx);
label_46de34:
    // 0x46de34: 0x0  nop
    ctx->pc = 0x46de34u;
    // NOP
label_46de38:
    // 0x46de38: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x46de38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_46de3c:
    // 0x46de3c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46de3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_46de40:
    // 0x46de40: 0xc11392c  jal         func_44E4B0
label_46de44:
    if (ctx->pc == 0x46DE44u) {
        ctx->pc = 0x46DE48u;
        goto label_46de48;
    }
    ctx->pc = 0x46DE40u;
    SET_GPR_U32(ctx, 31, 0x46DE48u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x46DE40u, 0x46DE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46DE48u;
label_46de48:
    // 0x46de48: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x46de48u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46de4c:
    // 0x46de4c: 0x27a40680  addiu       $a0, $sp, 0x680
    ctx->pc = 0x46de4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1664));
label_46de50:
    // 0x46de50: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46de50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_46de54:
    // 0x46de54: 0xc0406a0  jal         func_101A80
label_46de58:
    if (ctx->pc == 0x46DE58u) {
        ctx->pc = 0x46DE5Cu;
        goto label_46de5c;
    }
    ctx->pc = 0x46DE54u;
    SET_GPR_U32(ctx, 31, 0x46DE5Cu);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x46DE54u, 0x46DE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46DE5Cu;
label_46de5c:
    // 0x46de5c: 0x27a406a0  addiu       $a0, $sp, 0x6A0
    ctx->pc = 0x46de5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1696));
label_46de60:
    // 0x46de60: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46de60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_46de64:
    // 0x46de64: 0xc0406a0  jal         func_101A80
label_46de68:
    if (ctx->pc == 0x46DE68u) {
        ctx->pc = 0x46DE6Cu;
        goto label_46de6c;
    }
    ctx->pc = 0x46DE64u;
    SET_GPR_U32(ctx, 31, 0x46DE6Cu);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x46DE64u, 0x46DE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46DE6Cu;
label_46de6c:
    // 0x46de6c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x46de6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_46de70:
    // 0x46de70: 0x10000071  b           . + 4 + (0x71 << 2)
label_46de74:
    if (ctx->pc == 0x46DE74u) {
        ctx->pc = 0x46DE78u;
        goto label_46de78;
    }
    ctx->pc = 0x46DE70u;
    {
        const bool branch_taken_0x46de70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46de70) {
            ctx->pc = 0x46E038u;
            goto label_46e038;
        }
    }
    ctx->pc = 0x46DE78u;
label_46de78:
    // 0x46de78: 0x27a406a0  addiu       $a0, $sp, 0x6A0
    ctx->pc = 0x46de78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1696));
label_46de7c:
    // 0x46de7c: 0xc04ddfc  jal         func_1377F0
label_46de80:
    if (ctx->pc == 0x46DE80u) {
        ctx->pc = 0x46DE84u;
        goto label_46de84;
    }
    ctx->pc = 0x46DE7Cu;
    SET_GPR_U32(ctx, 31, 0x46DE84u);
    ctx->pc = 0x1377F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1377F0u, 0x46DE7Cu, 0x46DE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46DE84u;
label_46de84:
    // 0x46de84: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x46de84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46de88:
    // 0x46de88: 0x8fa206ac  lw          $v0, 0x6AC($sp)
    ctx->pc = 0x46de88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1708)));
label_46de8c:
    // 0x46de8c: 0x51082b  sltu        $at, $v0, $s1
    ctx->pc = 0x46de8cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_46de90:
    // 0x46de90: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_46de94:
    if (ctx->pc == 0x46DE94u) {
        ctx->pc = 0x46DE98u;
        goto label_46de98;
    }
    ctx->pc = 0x46DE90u;
    {
        const bool branch_taken_0x46de90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x46de90) {
            ctx->pc = 0x46DEC8u;
            goto label_46dec8;
        }
    }
    ctx->pc = 0x46DE98u;
label_46de98:
    // 0x46de98: 0x27a406a0  addiu       $a0, $sp, 0x6A0
    ctx->pc = 0x46de98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1696));
label_46de9c:
    // 0x46de9c: 0x8fa506ac  lw          $a1, 0x6AC($sp)
    ctx->pc = 0x46de9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1708)));
label_46dea0:
    // 0x46dea0: 0xc05e064  jal         func_178190
label_46dea4:
    if (ctx->pc == 0x46DEA4u) {
        ctx->pc = 0x46DEA8u;
        goto label_46dea8;
    }
    ctx->pc = 0x46DEA0u;
    SET_GPR_U32(ctx, 31, 0x46DEA8u);
    ctx->pc = 0x178190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178190u, 0x46DEA0u, 0x46DEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46DEA8u;
label_46dea8:
    // 0x46dea8: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x46dea8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_46deac:
    // 0x46deac: 0xc11b56c  jal         func_46D5B0
label_46deb0:
    if (ctx->pc == 0x46DEB0u) {
        ctx->pc = 0x46DEB4u;
        goto label_46deb4;
    }
    ctx->pc = 0x46DEACu;
    SET_GPR_U32(ctx, 31, 0x46DEB4u);
    ctx->pc = 0x46D5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D5B0u, 0x46DEACu, 0x46DEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46DEB4u;
label_46deb4:
    // 0x46deb4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_46deb8:
    if (ctx->pc == 0x46DEB8u) {
        ctx->pc = 0x46DEBCu;
        goto label_46debc;
    }
    ctx->pc = 0x46DEB4u;
    {
        const bool branch_taken_0x46deb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46deb4) {
            ctx->pc = 0x46DEC8u;
            goto label_46dec8;
        }
    }
    ctx->pc = 0x46DEBCu;
label_46debc:
    // 0x46debc: 0x8fa206ac  lw          $v0, 0x6AC($sp)
    ctx->pc = 0x46debcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1708)));
label_46dec0:
    // 0x46dec0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x46dec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_46dec4:
    // 0x46dec4: 0xafa206ac  sw          $v0, 0x6AC($sp)
    ctx->pc = 0x46dec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1708), GPR_U32(ctx, 2));
label_46dec8:
    // 0x46dec8: 0x8fa206ac  lw          $v0, 0x6AC($sp)
    ctx->pc = 0x46dec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1708)));
label_46decc:
    // 0x46decc: 0x51082b  sltu        $at, $v0, $s1
    ctx->pc = 0x46deccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_46ded0:
    // 0x46ded0: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_46ded4:
    if (ctx->pc == 0x46DED4u) {
        ctx->pc = 0x46DED8u;
        goto label_46ded8;
    }
    ctx->pc = 0x46DED0u;
    {
        const bool branch_taken_0x46ded0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x46ded0) {
            ctx->pc = 0x46DF08u;
            goto label_46df08;
        }
    }
    ctx->pc = 0x46DED8u;
label_46ded8:
    // 0x46ded8: 0x27a406a0  addiu       $a0, $sp, 0x6A0
    ctx->pc = 0x46ded8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1696));
label_46dedc:
    // 0x46dedc: 0x8fa506ac  lw          $a1, 0x6AC($sp)
    ctx->pc = 0x46dedcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1708)));
label_46dee0:
    // 0x46dee0: 0xc05e064  jal         func_178190
label_46dee4:
    if (ctx->pc == 0x46DEE4u) {
        ctx->pc = 0x46DEE8u;
        goto label_46dee8;
    }
    ctx->pc = 0x46DEE0u;
    SET_GPR_U32(ctx, 31, 0x46DEE8u);
    ctx->pc = 0x178190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178190u, 0x46DEE0u, 0x46DEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46DEE8u;
label_46dee8:
    // 0x46dee8: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x46dee8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_46deec:
    // 0x46deec: 0xc11b56c  jal         func_46D5B0
label_46def0:
    if (ctx->pc == 0x46DEF0u) {
        ctx->pc = 0x46DEF4u;
        goto label_46def4;
    }
    ctx->pc = 0x46DEECu;
    SET_GPR_U32(ctx, 31, 0x46DEF4u);
    ctx->pc = 0x46D5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D5B0u, 0x46DEECu, 0x46DEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46DEF4u;
label_46def4:
    // 0x46def4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_46def8:
    if (ctx->pc == 0x46DEF8u) {
        ctx->pc = 0x46DEFCu;
        goto label_46defc;
    }
    ctx->pc = 0x46DEF4u;
    {
        const bool branch_taken_0x46def4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46def4) {
            ctx->pc = 0x46DF08u;
            goto label_46df08;
        }
    }
    ctx->pc = 0x46DEFCu;
label_46defc:
    // 0x46defc: 0x8fa206ac  lw          $v0, 0x6AC($sp)
    ctx->pc = 0x46defcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1708)));
label_46df00:
    // 0x46df00: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x46df00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_46df04:
    // 0x46df04: 0xafa206ac  sw          $v0, 0x6AC($sp)
    ctx->pc = 0x46df04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1708), GPR_U32(ctx, 2));
label_46df08:
    // 0x46df08: 0x8fa206b0  lw          $v0, 0x6B0($sp)
    ctx->pc = 0x46df08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1712)));
label_46df0c:
    // 0x46df0c: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x46df0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_46df10:
    // 0x46df10: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x46df10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_46df14:
    // 0x46df14: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
label_46df18:
    if (ctx->pc == 0x46DF18u) {
        ctx->pc = 0x46DF1Cu;
        goto label_46df1c;
    }
    ctx->pc = 0x46DF14u;
    {
        const bool branch_taken_0x46df14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x46df14) {
            ctx->pc = 0x46DF64u;
            goto label_46df64;
        }
    }
    ctx->pc = 0x46DF1Cu;
label_46df1c:
    // 0x46df1c: 0x8fa406b0  lw          $a0, 0x6B0($sp)
    ctx->pc = 0x46df1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1712)));
label_46df20:
    // 0x46df20: 0x8fa506c0  lw          $a1, 0x6C0($sp)
    ctx->pc = 0x46df20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1728)));
label_46df24:
    // 0x46df24: 0x27a606a0  addiu       $a2, $sp, 0x6A0
    ctx->pc = 0x46df24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1696));
label_46df28:
    // 0x46df28: 0x27a706ac  addiu       $a3, $sp, 0x6AC
    ctx->pc = 0x46df28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1708));
label_46df2c:
    // 0x46df2c: 0xc11b8e0  jal         func_46E380
label_46df30:
    if (ctx->pc == 0x46DF30u) {
        ctx->pc = 0x46DF34u;
        goto label_46df34;
    }
    ctx->pc = 0x46DF2Cu;
    SET_GPR_U32(ctx, 31, 0x46DF34u);
    ctx->pc = 0x46E380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46E380u, 0x46DF2Cu, 0x46DF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46DF34u;
label_46df34:
    // 0x46df34: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x46df34u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_46df38:
    // 0x46df38: 0x27a40680  addiu       $a0, $sp, 0x680
    ctx->pc = 0x46df38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1664));
label_46df3c:
    // 0x46df3c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46df3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_46df40:
    // 0x46df40: 0xc0406a0  jal         func_101A80
label_46df44:
    if (ctx->pc == 0x46DF44u) {
        ctx->pc = 0x46DF48u;
        goto label_46df48;
    }
    ctx->pc = 0x46DF40u;
    SET_GPR_U32(ctx, 31, 0x46DF48u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x46DF40u, 0x46DF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46DF48u;
label_46df48:
    // 0x46df48: 0x27a406a0  addiu       $a0, $sp, 0x6A0
    ctx->pc = 0x46df48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1696));
label_46df4c:
    // 0x46df4c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46df4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_46df50:
    // 0x46df50: 0xc0406a0  jal         func_101A80
label_46df54:
    if (ctx->pc == 0x46DF54u) {
        ctx->pc = 0x46DF58u;
        goto label_46df58;
    }
    ctx->pc = 0x46DF50u;
    SET_GPR_U32(ctx, 31, 0x46DF58u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x46DF50u, 0x46DF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46DF58u;
label_46df58:
    // 0x46df58: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x46df58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_46df5c:
    // 0x46df5c: 0x10000036  b           . + 4 + (0x36 << 2)
label_46df60:
    if (ctx->pc == 0x46DF60u) {
        ctx->pc = 0x46DF64u;
        goto label_46df64;
    }
    ctx->pc = 0x46DF5Cu;
    {
        const bool branch_taken_0x46df5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46df5c) {
            ctx->pc = 0x46E038u;
            goto label_46e038;
        }
    }
    ctx->pc = 0x46DF64u;
label_46df64:
    // 0x46df64: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x46df64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_46df68:
    // 0x46df68: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46df68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_46df6c:
    // 0x46df6c: 0x27a60640  addiu       $a2, $sp, 0x640
    ctx->pc = 0x46df6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1600));
label_46df70:
    // 0x46df70: 0xc115ee8  jal         func_457BA0
label_46df74:
    if (ctx->pc == 0x46DF74u) {
        ctx->pc = 0x46DF78u;
        goto label_46df78;
    }
    ctx->pc = 0x46DF70u;
    SET_GPR_U32(ctx, 31, 0x46DF78u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x46DF70u, 0x46DF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46DF78u;
label_46df78:
    // 0x46df78: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_46df7c:
    if (ctx->pc == 0x46DF7Cu) {
        ctx->pc = 0x46DF80u;
        goto label_46df80;
    }
    ctx->pc = 0x46DF78u;
    {
        const bool branch_taken_0x46df78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46df78) {
            ctx->pc = 0x46E010u;
            goto label_46e010;
        }
    }
    ctx->pc = 0x46DF80u;
label_46df80:
    // 0x46df80: 0x8fa20648  lw          $v0, 0x648($sp)
    ctx->pc = 0x46df80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1608)));
label_46df84:
    // 0x46df84: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_46df88:
    if (ctx->pc == 0x46DF88u) {
        ctx->pc = 0x46DF8Cu;
        goto label_46df8c;
    }
    ctx->pc = 0x46DF84u;
    {
        const bool branch_taken_0x46df84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46df84) {
            ctx->pc = 0x46E010u;
            goto label_46e010;
        }
    }
    ctx->pc = 0x46DF8Cu;
label_46df8c:
    // 0x46df8c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x46df8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_46df90:
    // 0x46df90: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46df90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_46df94:
    // 0x46df94: 0x8fa60644  lw          $a2, 0x644($sp)
    ctx->pc = 0x46df94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1604)));
label_46df98:
    // 0x46df98: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x46df98u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_46df9c:
    // 0x46df9c: 0x24e7f968  addiu       $a3, $a3, -0x698
    ctx->pc = 0x46df9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965608));
label_46dfa0:
    // 0x46dfa0: 0x240800de  addiu       $t0, $zero, 0xDE
    ctx->pc = 0x46dfa0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 222));
label_46dfa4:
    // 0x46dfa4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x46dfa4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46dfa8:
    // 0x46dfa8: 0xc113940  jal         func_44E500
label_46dfac:
    if (ctx->pc == 0x46DFACu) {
        ctx->pc = 0x46DFB0u;
        goto label_46dfb0;
    }
    ctx->pc = 0x46DFA8u;
    SET_GPR_U32(ctx, 31, 0x46DFB0u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x46DFA8u, 0x46DFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46DFB0u;
label_46dfb0:
    // 0x46dfb0: 0x8fa406c0  lw          $a0, 0x6C0($sp)
    ctx->pc = 0x46dfb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1728)));
label_46dfb4:
    // 0x46dfb4: 0xc041b38  jal         func_106CE0
label_46dfb8:
    if (ctx->pc == 0x46DFB8u) {
        ctx->pc = 0x46DFBCu;
        goto label_46dfbc;
    }
    ctx->pc = 0x46DFB4u;
    SET_GPR_U32(ctx, 31, 0x46DFBCu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x46DFB4u, 0x46DFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46DFBCu;
label_46dfbc:
    // 0x46dfbc: 0x8fa306b0  lw          $v1, 0x6B0($sp)
    ctx->pc = 0x46dfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1712)));
label_46dfc0:
    // 0x46dfc0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x46dfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_46dfc4:
    // 0x46dfc4: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x46dfc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_46dfc8:
    // 0x46dfc8: 0x24a5fa50  addiu       $a1, $a1, -0x5B0
    ctx->pc = 0x46dfc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965840));
label_46dfcc:
    // 0x46dfcc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x46dfccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46dfd0:
    // 0x46dfd0: 0x8c67003c  lw          $a3, 0x3C($v1)
    ctx->pc = 0x46dfd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_46dfd4:
    // 0x46dfd4: 0xc115c24  jal         func_457090
label_46dfd8:
    if (ctx->pc == 0x46DFD8u) {
        ctx->pc = 0x46DFDCu;
        goto label_46dfdc;
    }
    ctx->pc = 0x46DFD4u;
    SET_GPR_U32(ctx, 31, 0x46DFDCu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x46DFD4u, 0x46DFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46DFDCu;
label_46dfdc:
    // 0x46dfdc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x46dfdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_46dfe0:
    // 0x46dfe0: 0x8fa20648  lw          $v0, 0x648($sp)
    ctx->pc = 0x46dfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1608)));
label_46dfe4:
    // 0x46dfe4: 0x40f809  jalr        $v0
label_46dfe8:
    if (ctx->pc == 0x46DFE8u) {
        ctx->pc = 0x46DFECu;
        goto label_46dfec;
    }
    ctx->pc = 0x46DFE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46DFECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46DFE4u, 0x46DFECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46DFECu;
label_46dfec:
    // 0x46dfec: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x46dfecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_46dff0:
    // 0x46dff0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_46dff4:
    if (ctx->pc == 0x46DFF4u) {
        ctx->pc = 0x46DFF8u;
        goto label_46dff8;
    }
    ctx->pc = 0x46DFF0u;
    {
        const bool branch_taken_0x46dff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46dff0) {
            ctx->pc = 0x46E000u;
            goto label_46e000;
        }
    }
    ctx->pc = 0x46DFF8u;
label_46dff8:
    // 0x46dff8: 0xd  break       0
    ctx->pc = 0x46dff8u;
    runtime->handleBreak(rdram, ctx);
label_46dffc:
    // 0x46dffc: 0x0  nop
    ctx->pc = 0x46dffcu;
    // NOP
label_46e000:
    // 0x46e000: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x46e000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_46e004:
    // 0x46e004: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46e004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_46e008:
    // 0x46e008: 0xc11392c  jal         func_44E4B0
label_46e00c:
    if (ctx->pc == 0x46E00Cu) {
        ctx->pc = 0x46E010u;
        goto label_46e010;
    }
    ctx->pc = 0x46E008u;
    SET_GPR_U32(ctx, 31, 0x46E010u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x46E008u, 0x46E010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46E010u;
label_46e010:
    // 0x46e010: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x46e010u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46e014:
    // 0x46e014: 0x27a40680  addiu       $a0, $sp, 0x680
    ctx->pc = 0x46e014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1664));
label_46e018:
    // 0x46e018: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46e018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_46e01c:
    // 0x46e01c: 0xc0406a0  jal         func_101A80
label_46e020:
    if (ctx->pc == 0x46E020u) {
        ctx->pc = 0x46E024u;
        goto label_46e024;
    }
    ctx->pc = 0x46E01Cu;
    SET_GPR_U32(ctx, 31, 0x46E024u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x46E01Cu, 0x46E024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46E024u;
label_46e024:
    // 0x46e024: 0x27a406a0  addiu       $a0, $sp, 0x6A0
    ctx->pc = 0x46e024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1696));
label_46e028:
    // 0x46e028: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46e028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_46e02c:
    // 0x46e02c: 0xc0406a0  jal         func_101A80
label_46e030:
    if (ctx->pc == 0x46E030u) {
        ctx->pc = 0x46E034u;
        goto label_46e034;
    }
    ctx->pc = 0x46E02Cu;
    SET_GPR_U32(ctx, 31, 0x46E034u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x46E02Cu, 0x46E034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46E034u;
label_46e034:
    // 0x46e034: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x46e034u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46e038:
    // 0x46e038: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x46e038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_46e03c:
    // 0x46e03c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x46e03cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_46e040:
    // 0x46e040: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x46e040u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_46e044:
    // 0x46e044: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x46e044u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_46e048:
    // 0x46e048: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x46e048u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_46e04c:
    // 0x46e04c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x46e04cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_46e050:
    // 0x46e050: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x46e050u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_46e054:
    // 0x46e054: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x46e054u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_46e058:
    // 0x46e058: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x46e058u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_46e05c:
    // 0x46e05c: 0x27bd06d0  addiu       $sp, $sp, 0x6D0
    ctx->pc = 0x46e05cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1744));
label_46e060:
    // 0x46e060: 0x3e00008  jr          $ra
label_46e064:
    if (ctx->pc == 0x46E064u) {
        ctx->pc = 0x46E068u;
        goto label_46e068;
    }
    ctx->pc = 0x46E060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46E060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46E068u;
label_46e068:
    // 0x46e068: 0x0  nop
    ctx->pc = 0x46e068u;
    // NOP
label_46e06c:
    // 0x46e06c: 0x0  nop
    ctx->pc = 0x46e06cu;
    // NOP
    ctx->pc = 0x46e070u;
}
