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

// Function: sub_0013D880
// Address: 0x13d880 - 0x13e0d0
void sub_0013D880_0x13d880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D880_0x13d880");
#endif

    switch (ctx->pc) {
        case 0x13d880u: goto label_13d880;
        case 0x13d884u: goto label_13d884;
        case 0x13d888u: goto label_13d888;
        case 0x13d88cu: goto label_13d88c;
        case 0x13d890u: goto label_13d890;
        case 0x13d894u: goto label_13d894;
        case 0x13d898u: goto label_13d898;
        case 0x13d89cu: goto label_13d89c;
        case 0x13d8a0u: goto label_13d8a0;
        case 0x13d8a4u: goto label_13d8a4;
        case 0x13d8a8u: goto label_13d8a8;
        case 0x13d8acu: goto label_13d8ac;
        case 0x13d8b0u: goto label_13d8b0;
        case 0x13d8b4u: goto label_13d8b4;
        case 0x13d8b8u: goto label_13d8b8;
        case 0x13d8bcu: goto label_13d8bc;
        case 0x13d8c0u: goto label_13d8c0;
        case 0x13d8c4u: goto label_13d8c4;
        case 0x13d8c8u: goto label_13d8c8;
        case 0x13d8ccu: goto label_13d8cc;
        case 0x13d8d0u: goto label_13d8d0;
        case 0x13d8d4u: goto label_13d8d4;
        case 0x13d8d8u: goto label_13d8d8;
        case 0x13d8dcu: goto label_13d8dc;
        case 0x13d8e0u: goto label_13d8e0;
        case 0x13d8e4u: goto label_13d8e4;
        case 0x13d8e8u: goto label_13d8e8;
        case 0x13d8ecu: goto label_13d8ec;
        case 0x13d8f0u: goto label_13d8f0;
        case 0x13d8f4u: goto label_13d8f4;
        case 0x13d8f8u: goto label_13d8f8;
        case 0x13d8fcu: goto label_13d8fc;
        case 0x13d900u: goto label_13d900;
        case 0x13d904u: goto label_13d904;
        case 0x13d908u: goto label_13d908;
        case 0x13d90cu: goto label_13d90c;
        case 0x13d910u: goto label_13d910;
        case 0x13d914u: goto label_13d914;
        case 0x13d918u: goto label_13d918;
        case 0x13d91cu: goto label_13d91c;
        case 0x13d920u: goto label_13d920;
        case 0x13d924u: goto label_13d924;
        case 0x13d928u: goto label_13d928;
        case 0x13d92cu: goto label_13d92c;
        case 0x13d930u: goto label_13d930;
        case 0x13d934u: goto label_13d934;
        case 0x13d938u: goto label_13d938;
        case 0x13d93cu: goto label_13d93c;
        case 0x13d940u: goto label_13d940;
        case 0x13d944u: goto label_13d944;
        case 0x13d948u: goto label_13d948;
        case 0x13d94cu: goto label_13d94c;
        case 0x13d950u: goto label_13d950;
        case 0x13d954u: goto label_13d954;
        case 0x13d958u: goto label_13d958;
        case 0x13d95cu: goto label_13d95c;
        case 0x13d960u: goto label_13d960;
        case 0x13d964u: goto label_13d964;
        case 0x13d968u: goto label_13d968;
        case 0x13d96cu: goto label_13d96c;
        case 0x13d970u: goto label_13d970;
        case 0x13d974u: goto label_13d974;
        case 0x13d978u: goto label_13d978;
        case 0x13d97cu: goto label_13d97c;
        case 0x13d980u: goto label_13d980;
        case 0x13d984u: goto label_13d984;
        case 0x13d988u: goto label_13d988;
        case 0x13d98cu: goto label_13d98c;
        case 0x13d990u: goto label_13d990;
        case 0x13d994u: goto label_13d994;
        case 0x13d998u: goto label_13d998;
        case 0x13d99cu: goto label_13d99c;
        case 0x13d9a0u: goto label_13d9a0;
        case 0x13d9a4u: goto label_13d9a4;
        case 0x13d9a8u: goto label_13d9a8;
        case 0x13d9acu: goto label_13d9ac;
        case 0x13d9b0u: goto label_13d9b0;
        case 0x13d9b4u: goto label_13d9b4;
        case 0x13d9b8u: goto label_13d9b8;
        case 0x13d9bcu: goto label_13d9bc;
        case 0x13d9c0u: goto label_13d9c0;
        case 0x13d9c4u: goto label_13d9c4;
        case 0x13d9c8u: goto label_13d9c8;
        case 0x13d9ccu: goto label_13d9cc;
        case 0x13d9d0u: goto label_13d9d0;
        case 0x13d9d4u: goto label_13d9d4;
        case 0x13d9d8u: goto label_13d9d8;
        case 0x13d9dcu: goto label_13d9dc;
        case 0x13d9e0u: goto label_13d9e0;
        case 0x13d9e4u: goto label_13d9e4;
        case 0x13d9e8u: goto label_13d9e8;
        case 0x13d9ecu: goto label_13d9ec;
        case 0x13d9f0u: goto label_13d9f0;
        case 0x13d9f4u: goto label_13d9f4;
        case 0x13d9f8u: goto label_13d9f8;
        case 0x13d9fcu: goto label_13d9fc;
        case 0x13da00u: goto label_13da00;
        case 0x13da04u: goto label_13da04;
        case 0x13da08u: goto label_13da08;
        case 0x13da0cu: goto label_13da0c;
        case 0x13da10u: goto label_13da10;
        case 0x13da14u: goto label_13da14;
        case 0x13da18u: goto label_13da18;
        case 0x13da1cu: goto label_13da1c;
        case 0x13da20u: goto label_13da20;
        case 0x13da24u: goto label_13da24;
        case 0x13da28u: goto label_13da28;
        case 0x13da2cu: goto label_13da2c;
        case 0x13da30u: goto label_13da30;
        case 0x13da34u: goto label_13da34;
        case 0x13da38u: goto label_13da38;
        case 0x13da3cu: goto label_13da3c;
        case 0x13da40u: goto label_13da40;
        case 0x13da44u: goto label_13da44;
        case 0x13da48u: goto label_13da48;
        case 0x13da4cu: goto label_13da4c;
        case 0x13da50u: goto label_13da50;
        case 0x13da54u: goto label_13da54;
        case 0x13da58u: goto label_13da58;
        case 0x13da5cu: goto label_13da5c;
        case 0x13da60u: goto label_13da60;
        case 0x13da64u: goto label_13da64;
        case 0x13da68u: goto label_13da68;
        case 0x13da6cu: goto label_13da6c;
        case 0x13da70u: goto label_13da70;
        case 0x13da74u: goto label_13da74;
        case 0x13da78u: goto label_13da78;
        case 0x13da7cu: goto label_13da7c;
        case 0x13da80u: goto label_13da80;
        case 0x13da84u: goto label_13da84;
        case 0x13da88u: goto label_13da88;
        case 0x13da8cu: goto label_13da8c;
        case 0x13da90u: goto label_13da90;
        case 0x13da94u: goto label_13da94;
        case 0x13da98u: goto label_13da98;
        case 0x13da9cu: goto label_13da9c;
        case 0x13daa0u: goto label_13daa0;
        case 0x13daa4u: goto label_13daa4;
        case 0x13daa8u: goto label_13daa8;
        case 0x13daacu: goto label_13daac;
        case 0x13dab0u: goto label_13dab0;
        case 0x13dab4u: goto label_13dab4;
        case 0x13dab8u: goto label_13dab8;
        case 0x13dabcu: goto label_13dabc;
        case 0x13dac0u: goto label_13dac0;
        case 0x13dac4u: goto label_13dac4;
        case 0x13dac8u: goto label_13dac8;
        case 0x13daccu: goto label_13dacc;
        case 0x13dad0u: goto label_13dad0;
        case 0x13dad4u: goto label_13dad4;
        case 0x13dad8u: goto label_13dad8;
        case 0x13dadcu: goto label_13dadc;
        case 0x13dae0u: goto label_13dae0;
        case 0x13dae4u: goto label_13dae4;
        case 0x13dae8u: goto label_13dae8;
        case 0x13daecu: goto label_13daec;
        case 0x13daf0u: goto label_13daf0;
        case 0x13daf4u: goto label_13daf4;
        case 0x13daf8u: goto label_13daf8;
        case 0x13dafcu: goto label_13dafc;
        case 0x13db00u: goto label_13db00;
        case 0x13db04u: goto label_13db04;
        case 0x13db08u: goto label_13db08;
        case 0x13db0cu: goto label_13db0c;
        case 0x13db10u: goto label_13db10;
        case 0x13db14u: goto label_13db14;
        case 0x13db18u: goto label_13db18;
        case 0x13db1cu: goto label_13db1c;
        case 0x13db20u: goto label_13db20;
        case 0x13db24u: goto label_13db24;
        case 0x13db28u: goto label_13db28;
        case 0x13db2cu: goto label_13db2c;
        case 0x13db30u: goto label_13db30;
        case 0x13db34u: goto label_13db34;
        case 0x13db38u: goto label_13db38;
        case 0x13db3cu: goto label_13db3c;
        case 0x13db40u: goto label_13db40;
        case 0x13db44u: goto label_13db44;
        case 0x13db48u: goto label_13db48;
        case 0x13db4cu: goto label_13db4c;
        case 0x13db50u: goto label_13db50;
        case 0x13db54u: goto label_13db54;
        case 0x13db58u: goto label_13db58;
        case 0x13db5cu: goto label_13db5c;
        case 0x13db60u: goto label_13db60;
        case 0x13db64u: goto label_13db64;
        case 0x13db68u: goto label_13db68;
        case 0x13db6cu: goto label_13db6c;
        case 0x13db70u: goto label_13db70;
        case 0x13db74u: goto label_13db74;
        case 0x13db78u: goto label_13db78;
        case 0x13db7cu: goto label_13db7c;
        case 0x13db80u: goto label_13db80;
        case 0x13db84u: goto label_13db84;
        case 0x13db88u: goto label_13db88;
        case 0x13db8cu: goto label_13db8c;
        case 0x13db90u: goto label_13db90;
        case 0x13db94u: goto label_13db94;
        case 0x13db98u: goto label_13db98;
        case 0x13db9cu: goto label_13db9c;
        case 0x13dba0u: goto label_13dba0;
        case 0x13dba4u: goto label_13dba4;
        case 0x13dba8u: goto label_13dba8;
        case 0x13dbacu: goto label_13dbac;
        case 0x13dbb0u: goto label_13dbb0;
        case 0x13dbb4u: goto label_13dbb4;
        case 0x13dbb8u: goto label_13dbb8;
        case 0x13dbbcu: goto label_13dbbc;
        case 0x13dbc0u: goto label_13dbc0;
        case 0x13dbc4u: goto label_13dbc4;
        case 0x13dbc8u: goto label_13dbc8;
        case 0x13dbccu: goto label_13dbcc;
        case 0x13dbd0u: goto label_13dbd0;
        case 0x13dbd4u: goto label_13dbd4;
        case 0x13dbd8u: goto label_13dbd8;
        case 0x13dbdcu: goto label_13dbdc;
        case 0x13dbe0u: goto label_13dbe0;
        case 0x13dbe4u: goto label_13dbe4;
        case 0x13dbe8u: goto label_13dbe8;
        case 0x13dbecu: goto label_13dbec;
        case 0x13dbf0u: goto label_13dbf0;
        case 0x13dbf4u: goto label_13dbf4;
        case 0x13dbf8u: goto label_13dbf8;
        case 0x13dbfcu: goto label_13dbfc;
        case 0x13dc00u: goto label_13dc00;
        case 0x13dc04u: goto label_13dc04;
        case 0x13dc08u: goto label_13dc08;
        case 0x13dc0cu: goto label_13dc0c;
        case 0x13dc10u: goto label_13dc10;
        case 0x13dc14u: goto label_13dc14;
        case 0x13dc18u: goto label_13dc18;
        case 0x13dc1cu: goto label_13dc1c;
        case 0x13dc20u: goto label_13dc20;
        case 0x13dc24u: goto label_13dc24;
        case 0x13dc28u: goto label_13dc28;
        case 0x13dc2cu: goto label_13dc2c;
        case 0x13dc30u: goto label_13dc30;
        case 0x13dc34u: goto label_13dc34;
        case 0x13dc38u: goto label_13dc38;
        case 0x13dc3cu: goto label_13dc3c;
        case 0x13dc40u: goto label_13dc40;
        case 0x13dc44u: goto label_13dc44;
        case 0x13dc48u: goto label_13dc48;
        case 0x13dc4cu: goto label_13dc4c;
        case 0x13dc50u: goto label_13dc50;
        case 0x13dc54u: goto label_13dc54;
        case 0x13dc58u: goto label_13dc58;
        case 0x13dc5cu: goto label_13dc5c;
        case 0x13dc60u: goto label_13dc60;
        case 0x13dc64u: goto label_13dc64;
        case 0x13dc68u: goto label_13dc68;
        case 0x13dc6cu: goto label_13dc6c;
        case 0x13dc70u: goto label_13dc70;
        case 0x13dc74u: goto label_13dc74;
        case 0x13dc78u: goto label_13dc78;
        case 0x13dc7cu: goto label_13dc7c;
        case 0x13dc80u: goto label_13dc80;
        case 0x13dc84u: goto label_13dc84;
        case 0x13dc88u: goto label_13dc88;
        case 0x13dc8cu: goto label_13dc8c;
        case 0x13dc90u: goto label_13dc90;
        case 0x13dc94u: goto label_13dc94;
        case 0x13dc98u: goto label_13dc98;
        case 0x13dc9cu: goto label_13dc9c;
        case 0x13dca0u: goto label_13dca0;
        case 0x13dca4u: goto label_13dca4;
        case 0x13dca8u: goto label_13dca8;
        case 0x13dcacu: goto label_13dcac;
        case 0x13dcb0u: goto label_13dcb0;
        case 0x13dcb4u: goto label_13dcb4;
        case 0x13dcb8u: goto label_13dcb8;
        case 0x13dcbcu: goto label_13dcbc;
        case 0x13dcc0u: goto label_13dcc0;
        case 0x13dcc4u: goto label_13dcc4;
        case 0x13dcc8u: goto label_13dcc8;
        case 0x13dcccu: goto label_13dccc;
        case 0x13dcd0u: goto label_13dcd0;
        case 0x13dcd4u: goto label_13dcd4;
        case 0x13dcd8u: goto label_13dcd8;
        case 0x13dcdcu: goto label_13dcdc;
        case 0x13dce0u: goto label_13dce0;
        case 0x13dce4u: goto label_13dce4;
        case 0x13dce8u: goto label_13dce8;
        case 0x13dcecu: goto label_13dcec;
        case 0x13dcf0u: goto label_13dcf0;
        case 0x13dcf4u: goto label_13dcf4;
        case 0x13dcf8u: goto label_13dcf8;
        case 0x13dcfcu: goto label_13dcfc;
        case 0x13dd00u: goto label_13dd00;
        case 0x13dd04u: goto label_13dd04;
        case 0x13dd08u: goto label_13dd08;
        case 0x13dd0cu: goto label_13dd0c;
        case 0x13dd10u: goto label_13dd10;
        case 0x13dd14u: goto label_13dd14;
        case 0x13dd18u: goto label_13dd18;
        case 0x13dd1cu: goto label_13dd1c;
        case 0x13dd20u: goto label_13dd20;
        case 0x13dd24u: goto label_13dd24;
        case 0x13dd28u: goto label_13dd28;
        case 0x13dd2cu: goto label_13dd2c;
        case 0x13dd30u: goto label_13dd30;
        case 0x13dd34u: goto label_13dd34;
        case 0x13dd38u: goto label_13dd38;
        case 0x13dd3cu: goto label_13dd3c;
        case 0x13dd40u: goto label_13dd40;
        case 0x13dd44u: goto label_13dd44;
        case 0x13dd48u: goto label_13dd48;
        case 0x13dd4cu: goto label_13dd4c;
        case 0x13dd50u: goto label_13dd50;
        case 0x13dd54u: goto label_13dd54;
        case 0x13dd58u: goto label_13dd58;
        case 0x13dd5cu: goto label_13dd5c;
        case 0x13dd60u: goto label_13dd60;
        case 0x13dd64u: goto label_13dd64;
        case 0x13dd68u: goto label_13dd68;
        case 0x13dd6cu: goto label_13dd6c;
        case 0x13dd70u: goto label_13dd70;
        case 0x13dd74u: goto label_13dd74;
        case 0x13dd78u: goto label_13dd78;
        case 0x13dd7cu: goto label_13dd7c;
        case 0x13dd80u: goto label_13dd80;
        case 0x13dd84u: goto label_13dd84;
        case 0x13dd88u: goto label_13dd88;
        case 0x13dd8cu: goto label_13dd8c;
        case 0x13dd90u: goto label_13dd90;
        case 0x13dd94u: goto label_13dd94;
        case 0x13dd98u: goto label_13dd98;
        case 0x13dd9cu: goto label_13dd9c;
        case 0x13dda0u: goto label_13dda0;
        case 0x13dda4u: goto label_13dda4;
        case 0x13dda8u: goto label_13dda8;
        case 0x13ddacu: goto label_13ddac;
        case 0x13ddb0u: goto label_13ddb0;
        case 0x13ddb4u: goto label_13ddb4;
        case 0x13ddb8u: goto label_13ddb8;
        case 0x13ddbcu: goto label_13ddbc;
        case 0x13ddc0u: goto label_13ddc0;
        case 0x13ddc4u: goto label_13ddc4;
        case 0x13ddc8u: goto label_13ddc8;
        case 0x13ddccu: goto label_13ddcc;
        case 0x13ddd0u: goto label_13ddd0;
        case 0x13ddd4u: goto label_13ddd4;
        case 0x13ddd8u: goto label_13ddd8;
        case 0x13dddcu: goto label_13dddc;
        case 0x13dde0u: goto label_13dde0;
        case 0x13dde4u: goto label_13dde4;
        case 0x13dde8u: goto label_13dde8;
        case 0x13ddecu: goto label_13ddec;
        case 0x13ddf0u: goto label_13ddf0;
        case 0x13ddf4u: goto label_13ddf4;
        case 0x13ddf8u: goto label_13ddf8;
        case 0x13ddfcu: goto label_13ddfc;
        case 0x13de00u: goto label_13de00;
        case 0x13de04u: goto label_13de04;
        case 0x13de08u: goto label_13de08;
        case 0x13de0cu: goto label_13de0c;
        case 0x13de10u: goto label_13de10;
        case 0x13de14u: goto label_13de14;
        case 0x13de18u: goto label_13de18;
        case 0x13de1cu: goto label_13de1c;
        case 0x13de20u: goto label_13de20;
        case 0x13de24u: goto label_13de24;
        case 0x13de28u: goto label_13de28;
        case 0x13de2cu: goto label_13de2c;
        case 0x13de30u: goto label_13de30;
        case 0x13de34u: goto label_13de34;
        case 0x13de38u: goto label_13de38;
        case 0x13de3cu: goto label_13de3c;
        case 0x13de40u: goto label_13de40;
        case 0x13de44u: goto label_13de44;
        case 0x13de48u: goto label_13de48;
        case 0x13de4cu: goto label_13de4c;
        case 0x13de50u: goto label_13de50;
        case 0x13de54u: goto label_13de54;
        case 0x13de58u: goto label_13de58;
        case 0x13de5cu: goto label_13de5c;
        case 0x13de60u: goto label_13de60;
        case 0x13de64u: goto label_13de64;
        case 0x13de68u: goto label_13de68;
        case 0x13de6cu: goto label_13de6c;
        case 0x13de70u: goto label_13de70;
        case 0x13de74u: goto label_13de74;
        case 0x13de78u: goto label_13de78;
        case 0x13de7cu: goto label_13de7c;
        case 0x13de80u: goto label_13de80;
        case 0x13de84u: goto label_13de84;
        case 0x13de88u: goto label_13de88;
        case 0x13de8cu: goto label_13de8c;
        case 0x13de90u: goto label_13de90;
        case 0x13de94u: goto label_13de94;
        case 0x13de98u: goto label_13de98;
        case 0x13de9cu: goto label_13de9c;
        case 0x13dea0u: goto label_13dea0;
        case 0x13dea4u: goto label_13dea4;
        case 0x13dea8u: goto label_13dea8;
        case 0x13deacu: goto label_13deac;
        case 0x13deb0u: goto label_13deb0;
        case 0x13deb4u: goto label_13deb4;
        case 0x13deb8u: goto label_13deb8;
        case 0x13debcu: goto label_13debc;
        case 0x13dec0u: goto label_13dec0;
        case 0x13dec4u: goto label_13dec4;
        case 0x13dec8u: goto label_13dec8;
        case 0x13deccu: goto label_13decc;
        case 0x13ded0u: goto label_13ded0;
        case 0x13ded4u: goto label_13ded4;
        case 0x13ded8u: goto label_13ded8;
        case 0x13dedcu: goto label_13dedc;
        case 0x13dee0u: goto label_13dee0;
        case 0x13dee4u: goto label_13dee4;
        case 0x13dee8u: goto label_13dee8;
        case 0x13deecu: goto label_13deec;
        case 0x13def0u: goto label_13def0;
        case 0x13def4u: goto label_13def4;
        case 0x13def8u: goto label_13def8;
        case 0x13defcu: goto label_13defc;
        case 0x13df00u: goto label_13df00;
        case 0x13df04u: goto label_13df04;
        case 0x13df08u: goto label_13df08;
        case 0x13df0cu: goto label_13df0c;
        case 0x13df10u: goto label_13df10;
        case 0x13df14u: goto label_13df14;
        case 0x13df18u: goto label_13df18;
        case 0x13df1cu: goto label_13df1c;
        case 0x13df20u: goto label_13df20;
        case 0x13df24u: goto label_13df24;
        case 0x13df28u: goto label_13df28;
        case 0x13df2cu: goto label_13df2c;
        case 0x13df30u: goto label_13df30;
        case 0x13df34u: goto label_13df34;
        case 0x13df38u: goto label_13df38;
        case 0x13df3cu: goto label_13df3c;
        case 0x13df40u: goto label_13df40;
        case 0x13df44u: goto label_13df44;
        case 0x13df48u: goto label_13df48;
        case 0x13df4cu: goto label_13df4c;
        case 0x13df50u: goto label_13df50;
        case 0x13df54u: goto label_13df54;
        case 0x13df58u: goto label_13df58;
        case 0x13df5cu: goto label_13df5c;
        case 0x13df60u: goto label_13df60;
        case 0x13df64u: goto label_13df64;
        case 0x13df68u: goto label_13df68;
        case 0x13df6cu: goto label_13df6c;
        case 0x13df70u: goto label_13df70;
        case 0x13df74u: goto label_13df74;
        case 0x13df78u: goto label_13df78;
        case 0x13df7cu: goto label_13df7c;
        case 0x13df80u: goto label_13df80;
        case 0x13df84u: goto label_13df84;
        case 0x13df88u: goto label_13df88;
        case 0x13df8cu: goto label_13df8c;
        case 0x13df90u: goto label_13df90;
        case 0x13df94u: goto label_13df94;
        case 0x13df98u: goto label_13df98;
        case 0x13df9cu: goto label_13df9c;
        case 0x13dfa0u: goto label_13dfa0;
        case 0x13dfa4u: goto label_13dfa4;
        case 0x13dfa8u: goto label_13dfa8;
        case 0x13dfacu: goto label_13dfac;
        case 0x13dfb0u: goto label_13dfb0;
        case 0x13dfb4u: goto label_13dfb4;
        case 0x13dfb8u: goto label_13dfb8;
        case 0x13dfbcu: goto label_13dfbc;
        case 0x13dfc0u: goto label_13dfc0;
        case 0x13dfc4u: goto label_13dfc4;
        case 0x13dfc8u: goto label_13dfc8;
        case 0x13dfccu: goto label_13dfcc;
        case 0x13dfd0u: goto label_13dfd0;
        case 0x13dfd4u: goto label_13dfd4;
        case 0x13dfd8u: goto label_13dfd8;
        case 0x13dfdcu: goto label_13dfdc;
        case 0x13dfe0u: goto label_13dfe0;
        case 0x13dfe4u: goto label_13dfe4;
        case 0x13dfe8u: goto label_13dfe8;
        case 0x13dfecu: goto label_13dfec;
        case 0x13dff0u: goto label_13dff0;
        case 0x13dff4u: goto label_13dff4;
        case 0x13dff8u: goto label_13dff8;
        case 0x13dffcu: goto label_13dffc;
        case 0x13e000u: goto label_13e000;
        case 0x13e004u: goto label_13e004;
        case 0x13e008u: goto label_13e008;
        case 0x13e00cu: goto label_13e00c;
        case 0x13e010u: goto label_13e010;
        case 0x13e014u: goto label_13e014;
        case 0x13e018u: goto label_13e018;
        case 0x13e01cu: goto label_13e01c;
        case 0x13e020u: goto label_13e020;
        case 0x13e024u: goto label_13e024;
        case 0x13e028u: goto label_13e028;
        case 0x13e02cu: goto label_13e02c;
        case 0x13e030u: goto label_13e030;
        case 0x13e034u: goto label_13e034;
        case 0x13e038u: goto label_13e038;
        case 0x13e03cu: goto label_13e03c;
        case 0x13e040u: goto label_13e040;
        case 0x13e044u: goto label_13e044;
        case 0x13e048u: goto label_13e048;
        case 0x13e04cu: goto label_13e04c;
        case 0x13e050u: goto label_13e050;
        case 0x13e054u: goto label_13e054;
        case 0x13e058u: goto label_13e058;
        case 0x13e05cu: goto label_13e05c;
        case 0x13e060u: goto label_13e060;
        case 0x13e064u: goto label_13e064;
        case 0x13e068u: goto label_13e068;
        case 0x13e06cu: goto label_13e06c;
        case 0x13e070u: goto label_13e070;
        case 0x13e074u: goto label_13e074;
        case 0x13e078u: goto label_13e078;
        case 0x13e07cu: goto label_13e07c;
        case 0x13e080u: goto label_13e080;
        case 0x13e084u: goto label_13e084;
        case 0x13e088u: goto label_13e088;
        case 0x13e08cu: goto label_13e08c;
        case 0x13e090u: goto label_13e090;
        case 0x13e094u: goto label_13e094;
        case 0x13e098u: goto label_13e098;
        case 0x13e09cu: goto label_13e09c;
        case 0x13e0a0u: goto label_13e0a0;
        case 0x13e0a4u: goto label_13e0a4;
        case 0x13e0a8u: goto label_13e0a8;
        case 0x13e0acu: goto label_13e0ac;
        case 0x13e0b0u: goto label_13e0b0;
        case 0x13e0b4u: goto label_13e0b4;
        case 0x13e0b8u: goto label_13e0b8;
        case 0x13e0bcu: goto label_13e0bc;
        case 0x13e0c0u: goto label_13e0c0;
        case 0x13e0c4u: goto label_13e0c4;
        case 0x13e0c8u: goto label_13e0c8;
        case 0x13e0ccu: goto label_13e0cc;
        default: break;
    }

    ctx->pc = 0x13d880u;

label_13d880:
    // 0x13d880: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13d880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_13d884:
    // 0x13d884: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13d884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_13d888:
    // 0x13d888: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x13d888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_13d88c:
    // 0x13d88c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x13d88cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
label_13d890:
    // 0x13d890: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13d890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_13d894:
    // 0x13d894: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_13d898:
    if (ctx->pc == 0x13D898u) {
        ctx->pc = 0x13D89Cu;
        goto label_13d89c;
    }
    ctx->pc = 0x13D894u;
    {
        const bool branch_taken_0x13d894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d894) {
            ctx->pc = 0x13D8E0u;
            goto label_13d8e0;
        }
    }
    ctx->pc = 0x13D89Cu;
label_13d89c:
    // 0x13d89c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x13d89cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_13d8a0:
    // 0x13d8a0: 0x246337f0  addiu       $v1, $v1, 0x37F0
    ctx->pc = 0x13d8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14320));
label_13d8a4:
    // 0x13d8a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13d8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_13d8a8:
    // 0x13d8a8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x13d8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_13d8ac:
    // 0x13d8ac: 0xaf80ba7c  sw          $zero, -0x4584($gp)
    ctx->pc = 0x13d8acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949500), GPR_U32(ctx, 0));
label_13d8b0:
    // 0x13d8b0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x13d8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_13d8b4:
    // 0x13d8b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13d8b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13d8b8:
    // 0x13d8b8: 0xc08ec24  jal         func_23B090
label_13d8bc:
    if (ctx->pc == 0x13D8BCu) {
        ctx->pc = 0x13D8C0u;
        goto label_13d8c0;
    }
    ctx->pc = 0x13D8B8u;
    SET_GPR_U32(ctx, 31, 0x13D8C0u);
    ctx->pc = 0x23B090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B090u, 0x13D8B8u, 0x13D8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D8C0u;
label_13d8c0:
    // 0x13d8c0: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x13d8c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_13d8c4:
    // 0x13d8c4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x13d8c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_13d8c8:
    // 0x13d8c8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x13d8c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_13d8cc:
    // 0x13d8cc: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_13d8d0:
    if (ctx->pc == 0x13D8D0u) {
        ctx->pc = 0x13D8D4u;
        goto label_13d8d4;
    }
    ctx->pc = 0x13D8CCu;
    {
        const bool branch_taken_0x13d8cc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x13d8cc) {
            ctx->pc = 0x13D8E0u;
            goto label_13d8e0;
        }
    }
    ctx->pc = 0x13D8D4u;
label_13d8d4:
    // 0x13d8d4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x13d8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_13d8d8:
    // 0x13d8d8: 0xc0ba070  jal         func_2E81C0
label_13d8dc:
    if (ctx->pc == 0x13D8DCu) {
        ctx->pc = 0x13D8E0u;
        goto label_13d8e0;
    }
    ctx->pc = 0x13D8D8u;
    SET_GPR_U32(ctx, 31, 0x13D8E0u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x13D8D8u, 0x13D8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D8E0u;
label_13d8e0:
    // 0x13d8e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13d8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_13d8e4:
    // 0x13d8e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13d8e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13d8e8:
    // 0x13d8e8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x13d8e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_13d8ec:
    // 0x13d8ec: 0x3e00008  jr          $ra
label_13d8f0:
    if (ctx->pc == 0x13D8F0u) {
        ctx->pc = 0x13D8F4u;
        goto label_13d8f4;
    }
    ctx->pc = 0x13D8ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D8ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D8F4u;
label_13d8f4:
    // 0x13d8f4: 0x0  nop
    ctx->pc = 0x13d8f4u;
    // NOP
label_13d8f8:
    // 0x13d8f8: 0x0  nop
    ctx->pc = 0x13d8f8u;
    // NOP
label_13d8fc:
    // 0x13d8fc: 0x0  nop
    ctx->pc = 0x13d8fcu;
    // NOP
label_13d900:
    // 0x13d900: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x13d900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_13d904:
    // 0x13d904: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x13d904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_13d908:
    // 0x13d908: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x13d908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_13d90c:
    // 0x13d90c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x13d90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_13d910:
    // 0x13d910: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x13d910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_13d914:
    // 0x13d914: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x13d914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_13d918:
    // 0x13d918: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x13d918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_13d91c:
    // 0x13d91c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13d91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_13d920:
    // 0x13d920: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13d920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_13d924:
    // 0x13d924: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13d924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_13d928:
    // 0x13d928: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13d928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_13d92c:
    // 0x13d92c: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x13d92cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
label_13d930:
    // 0x13d930: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x13d930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_13d934:
    // 0x13d934: 0xc08ec3c  jal         func_23B0F0
label_13d938:
    if (ctx->pc == 0x13D938u) {
        ctx->pc = 0x13D93Cu;
        goto label_13d93c;
    }
    ctx->pc = 0x13D934u;
    SET_GPR_U32(ctx, 31, 0x13D93Cu);
    ctx->pc = 0x23B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B0F0u, 0x13D934u, 0x13D93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D93Cu;
label_13d93c:
    // 0x13d93c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x13d93cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13d940:
    // 0x13d940: 0x3c030014  lui         $v1, 0x14
    ctx->pc = 0x13d940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20 << 16));
label_13d944:
    // 0x13d944: 0x2463e740  addiu       $v1, $v1, -0x18C0
    ctx->pc = 0x13d944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960960));
label_13d948:
    // 0x13d948: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x13d948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_13d94c:
    // 0x13d94c: 0xac430064  sw          $v1, 0x64($v0)
    ctx->pc = 0x13d94cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
label_13d950:
    // 0x13d950: 0x3c030014  lui         $v1, 0x14
    ctx->pc = 0x13d950u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20 << 16));
label_13d954:
    // 0x13d954: 0x2463e7a0  addiu       $v1, $v1, -0x1860
    ctx->pc = 0x13d954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961056));
label_13d958:
    // 0x13d958: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x13d958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_13d95c:
    // 0x13d95c: 0xac430068  sw          $v1, 0x68($v0)
    ctx->pc = 0x13d95cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 3));
label_13d960:
    // 0x13d960: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x13d960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_13d964:
    // 0x13d964: 0xc119b68  jal         func_466DA0
label_13d968:
    if (ctx->pc == 0x13D968u) {
        ctx->pc = 0x13D96Cu;
        goto label_13d96c;
    }
    ctx->pc = 0x13D964u;
    SET_GPR_U32(ctx, 31, 0x13D96Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x13D964u, 0x13D96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D96Cu;
label_13d96c:
    // 0x13d96c: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x13d96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_13d970:
    // 0x13d970: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13d970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13d974:
    // 0x13d974: 0xc0400e0  jal         func_100380
label_13d978:
    if (ctx->pc == 0x13D978u) {
        ctx->pc = 0x13D97Cu;
        goto label_13d97c;
    }
    ctx->pc = 0x13D974u;
    SET_GPR_U32(ctx, 31, 0x13D97Cu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x13D974u, 0x13D97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D97Cu;
label_13d97c:
    // 0x13d97c: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x13d97cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
label_13d980:
    // 0x13d980: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x13d980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_13d984:
    // 0x13d984: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_13d988:
    if (ctx->pc == 0x13D988u) {
        ctx->pc = 0x13D98Cu;
        goto label_13d98c;
    }
    ctx->pc = 0x13D984u;
    {
        const bool branch_taken_0x13d984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d984) {
            ctx->pc = 0x13D99Cu;
            goto label_13d99c;
        }
    }
    ctx->pc = 0x13D98Cu;
label_13d98c:
    // 0x13d98c: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x13d98cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_13d990:
    // 0x13d990: 0xc04fc5c  jal         func_13F170
label_13d994:
    if (ctx->pc == 0x13D994u) {
        ctx->pc = 0x13D998u;
        goto label_13d998;
    }
    ctx->pc = 0x13D990u;
    SET_GPR_U32(ctx, 31, 0x13D998u);
    ctx->pc = 0x13F170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F170u, 0x13D990u, 0x13D998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D998u;
label_13d998:
    // 0x13d998: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x13d998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
label_13d99c:
    // 0x13d99c: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x13d99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_13d9a0:
    // 0x13d9a0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x13d9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_13d9a4:
    // 0x13d9a4: 0xac43005c  sw          $v1, 0x5C($v0)
    ctx->pc = 0x13d9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 3));
label_13d9a8:
    // 0x13d9a8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x13d9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_13d9ac:
    // 0x13d9ac: 0x8c44005c  lw          $a0, 0x5C($v0)
    ctx->pc = 0x13d9acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_13d9b0:
    // 0x13d9b0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13d9b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13d9b4:
    // 0x13d9b4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x13d9b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_13d9b8:
    // 0x13d9b8: 0x320f809  jalr        $t9
label_13d9bc:
    if (ctx->pc == 0x13D9BCu) {
        ctx->pc = 0x13D9C0u;
        goto label_13d9c0;
    }
    ctx->pc = 0x13D9B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13D9C0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D9B8u, 0x13D9C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13D9C0u;
label_13d9c0:
    // 0x13d9c0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x13d9c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13d9c4:
    // 0x13d9c4: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x13d9c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_13d9c8:
    // 0x13d9c8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13d9c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_13d9cc:
    // 0x13d9cc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x13d9ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_13d9d0:
    // 0x13d9d0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x13d9d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_13d9d4:
    // 0x13d9d4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x13d9d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_13d9d8:
    // 0x13d9d8: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x13d9d8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13d9dc:
    // 0x13d9dc: 0x24040038  addiu       $a0, $zero, 0x38
    ctx->pc = 0x13d9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_13d9e0:
    // 0x13d9e0: 0xc119b68  jal         func_466DA0
label_13d9e4:
    if (ctx->pc == 0x13D9E4u) {
        ctx->pc = 0x13D9E8u;
        goto label_13d9e8;
    }
    ctx->pc = 0x13D9E0u;
    SET_GPR_U32(ctx, 31, 0x13D9E8u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x13D9E0u, 0x13D9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D9E8u;
label_13d9e8:
    // 0x13d9e8: 0x24040038  addiu       $a0, $zero, 0x38
    ctx->pc = 0x13d9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_13d9ec:
    // 0x13d9ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13d9ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13d9f0:
    // 0x13d9f0: 0xc0400e0  jal         func_100380
label_13d9f4:
    if (ctx->pc == 0x13D9F4u) {
        ctx->pc = 0x13D9F8u;
        goto label_13d9f8;
    }
    ctx->pc = 0x13D9F0u;
    SET_GPR_U32(ctx, 31, 0x13D9F8u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x13D9F0u, 0x13D9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D9F8u;
label_13d9f8:
    // 0x13d9f8: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x13d9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
label_13d9fc:
    // 0x13d9fc: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x13d9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_13da00:
    // 0x13da00: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_13da04:
    if (ctx->pc == 0x13DA04u) {
        ctx->pc = 0x13DA08u;
        goto label_13da08;
    }
    ctx->pc = 0x13DA00u;
    {
        const bool branch_taken_0x13da00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13da00) {
            ctx->pc = 0x13DA18u;
            goto label_13da18;
        }
    }
    ctx->pc = 0x13DA08u;
label_13da08:
    // 0x13da08: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x13da08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_13da0c:
    // 0x13da0c: 0xc0505d4  jal         func_141750
label_13da10:
    if (ctx->pc == 0x13DA10u) {
        ctx->pc = 0x13DA14u;
        goto label_13da14;
    }
    ctx->pc = 0x13DA0Cu;
    SET_GPR_U32(ctx, 31, 0x13DA14u);
    ctx->pc = 0x141750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141750u, 0x13DA0Cu, 0x13DA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DA14u;
label_13da14:
    // 0x13da14: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x13da14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
label_13da18:
    // 0x13da18: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x13da18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_13da1c:
    // 0x13da1c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x13da1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_13da20:
    // 0x13da20: 0xac430070  sw          $v1, 0x70($v0)
    ctx->pc = 0x13da20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 3));
label_13da24:
    // 0x13da24: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x13da24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_13da28:
    // 0x13da28: 0x8c440070  lw          $a0, 0x70($v0)
    ctx->pc = 0x13da28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_13da2c:
    // 0x13da2c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13da2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13da30:
    // 0x13da30: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x13da30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_13da34:
    // 0x13da34: 0x320f809  jalr        $t9
label_13da38:
    if (ctx->pc == 0x13DA38u) {
        ctx->pc = 0x13DA3Cu;
        goto label_13da3c;
    }
    ctx->pc = 0x13DA34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13DA3Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DA34u, 0x13DA3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13DA3Cu;
label_13da3c:
    // 0x13da3c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x13da3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13da40:
    // 0x13da40: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x13da40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_13da44:
    // 0x13da44: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13da44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_13da48:
    // 0x13da48: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x13da48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_13da4c:
    // 0x13da4c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x13da4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_13da50:
    // 0x13da50: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x13da50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_13da54:
    // 0x13da54: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x13da54u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13da58:
    // 0x13da58: 0x240400ac  addiu       $a0, $zero, 0xAC
    ctx->pc = 0x13da58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
label_13da5c:
    // 0x13da5c: 0xc119b68  jal         func_466DA0
label_13da60:
    if (ctx->pc == 0x13DA60u) {
        ctx->pc = 0x13DA64u;
        goto label_13da64;
    }
    ctx->pc = 0x13DA5Cu;
    SET_GPR_U32(ctx, 31, 0x13DA64u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x13DA5Cu, 0x13DA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DA64u;
label_13da64:
    // 0x13da64: 0x240400ac  addiu       $a0, $zero, 0xAC
    ctx->pc = 0x13da64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
label_13da68:
    // 0x13da68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13da68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13da6c:
    // 0x13da6c: 0xc0400e0  jal         func_100380
label_13da70:
    if (ctx->pc == 0x13DA70u) {
        ctx->pc = 0x13DA74u;
        goto label_13da74;
    }
    ctx->pc = 0x13DA6Cu;
    SET_GPR_U32(ctx, 31, 0x13DA74u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x13DA6Cu, 0x13DA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DA74u;
label_13da74:
    // 0x13da74: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x13da74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
label_13da78:
    // 0x13da78: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x13da78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_13da7c:
    // 0x13da7c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_13da80:
    if (ctx->pc == 0x13DA80u) {
        ctx->pc = 0x13DA84u;
        goto label_13da84;
    }
    ctx->pc = 0x13DA7Cu;
    {
        const bool branch_taken_0x13da7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13da7c) {
            ctx->pc = 0x13DA94u;
            goto label_13da94;
        }
    }
    ctx->pc = 0x13DA84u;
label_13da84:
    // 0x13da84: 0x8fa400a4  lw          $a0, 0xA4($sp)
    ctx->pc = 0x13da84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_13da88:
    // 0x13da88: 0xc04df60  jal         func_137D80
label_13da8c:
    if (ctx->pc == 0x13DA8Cu) {
        ctx->pc = 0x13DA90u;
        goto label_13da90;
    }
    ctx->pc = 0x13DA88u;
    SET_GPR_U32(ctx, 31, 0x13DA90u);
    ctx->pc = 0x137D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137D80u, 0x13DA88u, 0x13DA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DA90u;
label_13da90:
    // 0x13da90: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x13da90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
label_13da94:
    // 0x13da94: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x13da94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_13da98:
    // 0x13da98: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x13da98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_13da9c:
    // 0x13da9c: 0xac430074  sw          $v1, 0x74($v0)
    ctx->pc = 0x13da9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 3));
label_13daa0:
    // 0x13daa0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x13daa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_13daa4:
    // 0x13daa4: 0x8c440074  lw          $a0, 0x74($v0)
    ctx->pc = 0x13daa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_13daa8:
    // 0x13daa8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13daa8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13daac:
    // 0x13daac: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x13daacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_13dab0:
    // 0x13dab0: 0x320f809  jalr        $t9
label_13dab4:
    if (ctx->pc == 0x13DAB4u) {
        ctx->pc = 0x13DAB8u;
        goto label_13dab8;
    }
    ctx->pc = 0x13DAB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13DAB8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DAB0u, 0x13DAB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13DAB8u;
label_13dab8:
    // 0x13dab8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x13dab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13dabc:
    // 0x13dabc: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x13dabcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_13dac0:
    // 0x13dac0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13dac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_13dac4:
    // 0x13dac4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x13dac4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_13dac8:
    // 0x13dac8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x13dac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_13dacc:
    // 0x13dacc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x13daccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_13dad0:
    // 0x13dad0: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x13dad0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13dad4:
    // 0x13dad4: 0x24040044  addiu       $a0, $zero, 0x44
    ctx->pc = 0x13dad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_13dad8:
    // 0x13dad8: 0xc119b68  jal         func_466DA0
label_13dadc:
    if (ctx->pc == 0x13DADCu) {
        ctx->pc = 0x13DAE0u;
        goto label_13dae0;
    }
    ctx->pc = 0x13DAD8u;
    SET_GPR_U32(ctx, 31, 0x13DAE0u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x13DAD8u, 0x13DAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DAE0u;
label_13dae0:
    // 0x13dae0: 0x24040044  addiu       $a0, $zero, 0x44
    ctx->pc = 0x13dae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_13dae4:
    // 0x13dae4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13dae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13dae8:
    // 0x13dae8: 0xc0400e0  jal         func_100380
label_13daec:
    if (ctx->pc == 0x13DAECu) {
        ctx->pc = 0x13DAF0u;
        goto label_13daf0;
    }
    ctx->pc = 0x13DAE8u;
    SET_GPR_U32(ctx, 31, 0x13DAF0u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x13DAE8u, 0x13DAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DAF0u;
label_13daf0:
    // 0x13daf0: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x13daf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_13daf4:
    // 0x13daf4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x13daf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_13daf8:
    // 0x13daf8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_13dafc:
    if (ctx->pc == 0x13DAFCu) {
        ctx->pc = 0x13DB00u;
        goto label_13db00;
    }
    ctx->pc = 0x13DAF8u;
    {
        const bool branch_taken_0x13daf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13daf8) {
            ctx->pc = 0x13DB10u;
            goto label_13db10;
        }
    }
    ctx->pc = 0x13DB00u;
label_13db00:
    // 0x13db00: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x13db00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_13db04:
    // 0x13db04: 0xc04c8c8  jal         func_132320
label_13db08:
    if (ctx->pc == 0x13DB08u) {
        ctx->pc = 0x13DB0Cu;
        goto label_13db0c;
    }
    ctx->pc = 0x13DB04u;
    SET_GPR_U32(ctx, 31, 0x13DB0Cu);
    ctx->pc = 0x132320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132320u, 0x13DB04u, 0x13DB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DB0Cu;
label_13db0c:
    // 0x13db0c: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x13db0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_13db10:
    // 0x13db10: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x13db10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_13db14:
    // 0x13db14: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x13db14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_13db18:
    // 0x13db18: 0xac430078  sw          $v1, 0x78($v0)
    ctx->pc = 0x13db18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 3));
label_13db1c:
    // 0x13db1c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x13db1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_13db20:
    // 0x13db20: 0x8c440078  lw          $a0, 0x78($v0)
    ctx->pc = 0x13db20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
label_13db24:
    // 0x13db24: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13db24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13db28:
    // 0x13db28: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x13db28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_13db2c:
    // 0x13db2c: 0x320f809  jalr        $t9
label_13db30:
    if (ctx->pc == 0x13DB30u) {
        ctx->pc = 0x13DB34u;
        goto label_13db34;
    }
    ctx->pc = 0x13DB2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13DB34u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DB2Cu, 0x13DB34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13DB34u;
label_13db34:
    // 0x13db34: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x13db34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13db38:
    // 0x13db38: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x13db38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_13db3c:
    // 0x13db3c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13db3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_13db40:
    // 0x13db40: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x13db40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_13db44:
    // 0x13db44: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x13db44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_13db48:
    // 0x13db48: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x13db48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_13db4c:
    // 0x13db4c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x13db4cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13db50:
    // 0x13db50: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x13db50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13db54:
    // 0x13db54: 0x10000087  b           . + 4 + (0x87 << 2)
label_13db58:
    if (ctx->pc == 0x13DB58u) {
        ctx->pc = 0x13DB5Cu;
        goto label_13db5c;
    }
    ctx->pc = 0x13DB54u;
    {
        const bool branch_taken_0x13db54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13db54) {
            ctx->pc = 0x13DD74u;
            goto label_13dd74;
        }
    }
    ctx->pc = 0x13DB5Cu;
label_13db5c:
    // 0x13db5c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x13db5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13db60:
    // 0x13db60: 0x2e41000b  sltiu       $at, $s2, 0xB
    ctx->pc = 0x13db60u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_13db64:
    // 0x13db64: 0x10200070  beqz        $at, . + 4 + (0x70 << 2)
label_13db68:
    if (ctx->pc == 0x13DB68u) {
        ctx->pc = 0x13DB6Cu;
        goto label_13db6c;
    }
    ctx->pc = 0x13DB64u;
    {
        const bool branch_taken_0x13db64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13db64) {
            ctx->pc = 0x13DD28u;
            goto label_13dd28;
        }
    }
    ctx->pc = 0x13DB6Cu;
label_13db6c:
    // 0x13db6c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x13db6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_13db70:
    // 0x13db70: 0x246380d0  addiu       $v1, $v1, -0x7F30
    ctx->pc = 0x13db70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934736));
label_13db74:
    // 0x13db74: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x13db74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_13db78:
    // 0x13db78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13db78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13db7c:
    // 0x13db7c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13db7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13db80:
    // 0x13db80: 0x400008  jr          $v0
label_13db84:
    if (ctx->pc == 0x13DB84u) {
        ctx->pc = 0x13DB88u;
        goto label_13db88;
    }
    ctx->pc = 0x13DB80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13DB88u: goto label_13db88;
            case 0x13DBCCu: goto label_13dbcc;
            case 0x13DC14u: goto label_13dc14;
            case 0x13DC20u: goto label_13dc20;
            case 0x13DC64u: goto label_13dc64;
            case 0x13DCA8u: goto label_13dca8;
            case 0x13DCECu: goto label_13dcec;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DB80u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x13DB88u;
label_13db88:
    // 0x13db88: 0x24040074  addiu       $a0, $zero, 0x74
    ctx->pc = 0x13db88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
label_13db8c:
    // 0x13db8c: 0xc119b68  jal         func_466DA0
label_13db90:
    if (ctx->pc == 0x13DB90u) {
        ctx->pc = 0x13DB94u;
        goto label_13db94;
    }
    ctx->pc = 0x13DB8Cu;
    SET_GPR_U32(ctx, 31, 0x13DB94u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x13DB8Cu, 0x13DB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DB94u;
label_13db94:
    // 0x13db94: 0x24040074  addiu       $a0, $zero, 0x74
    ctx->pc = 0x13db94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
label_13db98:
    // 0x13db98: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13db98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13db9c:
    // 0x13db9c: 0xc0400e0  jal         func_100380
label_13dba0:
    if (ctx->pc == 0x13DBA0u) {
        ctx->pc = 0x13DBA4u;
        goto label_13dba4;
    }
    ctx->pc = 0x13DB9Cu;
    SET_GPR_U32(ctx, 31, 0x13DBA4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x13DB9Cu, 0x13DBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DBA4u;
label_13dba4:
    // 0x13dba4: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x13dba4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13dba8:
    // 0x13dba8: 0x13c00005  beqz        $fp, . + 4 + (0x5 << 2)
label_13dbac:
    if (ctx->pc == 0x13DBACu) {
        ctx->pc = 0x13DBB0u;
        goto label_13dbb0;
    }
    ctx->pc = 0x13DBA8u;
    {
        const bool branch_taken_0x13dba8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x13dba8) {
            ctx->pc = 0x13DBC0u;
            goto label_13dbc0;
        }
    }
    ctx->pc = 0x13DBB0u;
label_13dbb0:
    // 0x13dbb0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x13dbb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_13dbb4:
    // 0x13dbb4: 0xc0acac4  jal         func_2B2B10
label_13dbb8:
    if (ctx->pc == 0x13DBB8u) {
        ctx->pc = 0x13DBBCu;
        goto label_13dbbc;
    }
    ctx->pc = 0x13DBB4u;
    SET_GPR_U32(ctx, 31, 0x13DBBCu);
    ctx->pc = 0x2B2B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2B10u, 0x13DBB4u, 0x13DBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DBBCu;
label_13dbbc:
    // 0x13dbbc: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x13dbbcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13dbc0:
    // 0x13dbc0: 0x3c0882d  daddu       $s1, $fp, $zero
    ctx->pc = 0x13dbc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_13dbc4:
    // 0x13dbc4: 0x10000058  b           . + 4 + (0x58 << 2)
label_13dbc8:
    if (ctx->pc == 0x13DBC8u) {
        ctx->pc = 0x13DBCCu;
        goto label_13dbcc;
    }
    ctx->pc = 0x13DBC4u;
    {
        const bool branch_taken_0x13dbc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13dbc4) {
            ctx->pc = 0x13DD28u;
            goto label_13dd28;
        }
    }
    ctx->pc = 0x13DBCCu;
label_13dbcc:
    // 0x13dbcc: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x13dbccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_13dbd0:
    // 0x13dbd0: 0xc119b68  jal         func_466DA0
label_13dbd4:
    if (ctx->pc == 0x13DBD4u) {
        ctx->pc = 0x13DBD8u;
        goto label_13dbd8;
    }
    ctx->pc = 0x13DBD0u;
    SET_GPR_U32(ctx, 31, 0x13DBD8u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x13DBD0u, 0x13DBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DBD8u;
label_13dbd8:
    // 0x13dbd8: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x13dbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_13dbdc:
    // 0x13dbdc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13dbdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13dbe0:
    // 0x13dbe0: 0xc0400e0  jal         func_100380
label_13dbe4:
    if (ctx->pc == 0x13DBE4u) {
        ctx->pc = 0x13DBE8u;
        goto label_13dbe8;
    }
    ctx->pc = 0x13DBE0u;
    SET_GPR_U32(ctx, 31, 0x13DBE8u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x13DBE0u, 0x13DBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DBE8u;
label_13dbe8:
    // 0x13dbe8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x13dbe8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13dbec:
    // 0x13dbec: 0x12e00006  beqz        $s7, . + 4 + (0x6 << 2)
label_13dbf0:
    if (ctx->pc == 0x13DBF0u) {
        ctx->pc = 0x13DBF4u;
        goto label_13dbf4;
    }
    ctx->pc = 0x13DBECu;
    {
        const bool branch_taken_0x13dbec = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x13dbec) {
            ctx->pc = 0x13DC08u;
            goto label_13dc08;
        }
    }
    ctx->pc = 0x13DBF4u;
label_13dbf4:
    // 0x13dbf4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x13dbf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_13dbf8:
    // 0x13dbf8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13dbf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13dbfc:
    // 0x13dbfc: 0xc052e14  jal         func_14B850
label_13dc00:
    if (ctx->pc == 0x13DC00u) {
        ctx->pc = 0x13DC04u;
        goto label_13dc04;
    }
    ctx->pc = 0x13DBFCu;
    SET_GPR_U32(ctx, 31, 0x13DC04u);
    ctx->pc = 0x14B850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B850u, 0x13DBFCu, 0x13DC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DC04u;
label_13dc04:
    // 0x13dc04: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x13dc04u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13dc08:
    // 0x13dc08: 0x2e0882d  daddu       $s1, $s7, $zero
    ctx->pc = 0x13dc08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_13dc0c:
    // 0x13dc0c: 0x10000046  b           . + 4 + (0x46 << 2)
label_13dc10:
    if (ctx->pc == 0x13DC10u) {
        ctx->pc = 0x13DC14u;
        goto label_13dc14;
    }
    ctx->pc = 0x13DC0Cu;
    {
        const bool branch_taken_0x13dc0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13dc0c) {
            ctx->pc = 0x13DD28u;
            goto label_13dd28;
        }
    }
    ctx->pc = 0x13DC14u;
label_13dc14:
    // 0x13dc14: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x13dc14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13dc18:
    // 0x13dc18: 0x10000043  b           . + 4 + (0x43 << 2)
label_13dc1c:
    if (ctx->pc == 0x13DC1Cu) {
        ctx->pc = 0x13DC20u;
        goto label_13dc20;
    }
    ctx->pc = 0x13DC18u;
    {
        const bool branch_taken_0x13dc18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13dc18) {
            ctx->pc = 0x13DD28u;
            goto label_13dd28;
        }
    }
    ctx->pc = 0x13DC20u;
label_13dc20:
    // 0x13dc20: 0x24040038  addiu       $a0, $zero, 0x38
    ctx->pc = 0x13dc20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_13dc24:
    // 0x13dc24: 0xc119b68  jal         func_466DA0
label_13dc28:
    if (ctx->pc == 0x13DC28u) {
        ctx->pc = 0x13DC2Cu;
        goto label_13dc2c;
    }
    ctx->pc = 0x13DC24u;
    SET_GPR_U32(ctx, 31, 0x13DC2Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x13DC24u, 0x13DC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DC2Cu;
label_13dc2c:
    // 0x13dc2c: 0x24040038  addiu       $a0, $zero, 0x38
    ctx->pc = 0x13dc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_13dc30:
    // 0x13dc30: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13dc30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13dc34:
    // 0x13dc34: 0xc0400e0  jal         func_100380
label_13dc38:
    if (ctx->pc == 0x13DC38u) {
        ctx->pc = 0x13DC3Cu;
        goto label_13dc3c;
    }
    ctx->pc = 0x13DC34u;
    SET_GPR_U32(ctx, 31, 0x13DC3Cu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x13DC34u, 0x13DC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DC3Cu;
label_13dc3c:
    // 0x13dc3c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x13dc3cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13dc40:
    // 0x13dc40: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
label_13dc44:
    if (ctx->pc == 0x13DC44u) {
        ctx->pc = 0x13DC48u;
        goto label_13dc48;
    }
    ctx->pc = 0x13DC40u;
    {
        const bool branch_taken_0x13dc40 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x13dc40) {
            ctx->pc = 0x13DC58u;
            goto label_13dc58;
        }
    }
    ctx->pc = 0x13DC48u;
label_13dc48:
    // 0x13dc48: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x13dc48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_13dc4c:
    // 0x13dc4c: 0xc063f18  jal         func_18FC60
label_13dc50:
    if (ctx->pc == 0x13DC50u) {
        ctx->pc = 0x13DC54u;
        goto label_13dc54;
    }
    ctx->pc = 0x13DC4Cu;
    SET_GPR_U32(ctx, 31, 0x13DC54u);
    ctx->pc = 0x18FC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FC60u, 0x13DC4Cu, 0x13DC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DC54u;
label_13dc54:
    // 0x13dc54: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x13dc54u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13dc58:
    // 0x13dc58: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x13dc58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_13dc5c:
    // 0x13dc5c: 0x10000032  b           . + 4 + (0x32 << 2)
label_13dc60:
    if (ctx->pc == 0x13DC60u) {
        ctx->pc = 0x13DC64u;
        goto label_13dc64;
    }
    ctx->pc = 0x13DC5Cu;
    {
        const bool branch_taken_0x13dc5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13dc5c) {
            ctx->pc = 0x13DD28u;
            goto label_13dd28;
        }
    }
    ctx->pc = 0x13DC64u;
label_13dc64:
    // 0x13dc64: 0x24040038  addiu       $a0, $zero, 0x38
    ctx->pc = 0x13dc64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_13dc68:
    // 0x13dc68: 0xc119b68  jal         func_466DA0
label_13dc6c:
    if (ctx->pc == 0x13DC6Cu) {
        ctx->pc = 0x13DC70u;
        goto label_13dc70;
    }
    ctx->pc = 0x13DC68u;
    SET_GPR_U32(ctx, 31, 0x13DC70u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x13DC68u, 0x13DC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DC70u;
label_13dc70:
    // 0x13dc70: 0x24040038  addiu       $a0, $zero, 0x38
    ctx->pc = 0x13dc70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_13dc74:
    // 0x13dc74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13dc74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13dc78:
    // 0x13dc78: 0xc0400e0  jal         func_100380
label_13dc7c:
    if (ctx->pc == 0x13DC7Cu) {
        ctx->pc = 0x13DC80u;
        goto label_13dc80;
    }
    ctx->pc = 0x13DC78u;
    SET_GPR_U32(ctx, 31, 0x13DC80u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x13DC78u, 0x13DC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DC80u;
label_13dc80:
    // 0x13dc80: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x13dc80u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13dc84:
    // 0x13dc84: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
label_13dc88:
    if (ctx->pc == 0x13DC88u) {
        ctx->pc = 0x13DC8Cu;
        goto label_13dc8c;
    }
    ctx->pc = 0x13DC84u;
    {
        const bool branch_taken_0x13dc84 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x13dc84) {
            ctx->pc = 0x13DC9Cu;
            goto label_13dc9c;
        }
    }
    ctx->pc = 0x13DC8Cu;
label_13dc8c:
    // 0x13dc8c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x13dc8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_13dc90:
    // 0x13dc90: 0xc063dd8  jal         func_18F760
label_13dc94:
    if (ctx->pc == 0x13DC94u) {
        ctx->pc = 0x13DC98u;
        goto label_13dc98;
    }
    ctx->pc = 0x13DC90u;
    SET_GPR_U32(ctx, 31, 0x13DC98u);
    ctx->pc = 0x18F760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F760u, 0x13DC90u, 0x13DC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DC98u;
label_13dc98:
    // 0x13dc98: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x13dc98u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13dc9c:
    // 0x13dc9c: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x13dc9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_13dca0:
    // 0x13dca0: 0x10000021  b           . + 4 + (0x21 << 2)
label_13dca4:
    if (ctx->pc == 0x13DCA4u) {
        ctx->pc = 0x13DCA8u;
        goto label_13dca8;
    }
    ctx->pc = 0x13DCA0u;
    {
        const bool branch_taken_0x13dca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13dca0) {
            ctx->pc = 0x13DD28u;
            goto label_13dd28;
        }
    }
    ctx->pc = 0x13DCA8u;
label_13dca8:
    // 0x13dca8: 0x24040038  addiu       $a0, $zero, 0x38
    ctx->pc = 0x13dca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_13dcac:
    // 0x13dcac: 0xc119b68  jal         func_466DA0
label_13dcb0:
    if (ctx->pc == 0x13DCB0u) {
        ctx->pc = 0x13DCB4u;
        goto label_13dcb4;
    }
    ctx->pc = 0x13DCACu;
    SET_GPR_U32(ctx, 31, 0x13DCB4u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x13DCACu, 0x13DCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DCB4u;
label_13dcb4:
    // 0x13dcb4: 0x24040038  addiu       $a0, $zero, 0x38
    ctx->pc = 0x13dcb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_13dcb8:
    // 0x13dcb8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13dcb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13dcbc:
    // 0x13dcbc: 0xc0400e0  jal         func_100380
label_13dcc0:
    if (ctx->pc == 0x13DCC0u) {
        ctx->pc = 0x13DCC4u;
        goto label_13dcc4;
    }
    ctx->pc = 0x13DCBCu;
    SET_GPR_U32(ctx, 31, 0x13DCC4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x13DCBCu, 0x13DCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DCC4u;
label_13dcc4:
    // 0x13dcc4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x13dcc4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13dcc8:
    // 0x13dcc8: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
label_13dccc:
    if (ctx->pc == 0x13DCCCu) {
        ctx->pc = 0x13DCD0u;
        goto label_13dcd0;
    }
    ctx->pc = 0x13DCC8u;
    {
        const bool branch_taken_0x13dcc8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x13dcc8) {
            ctx->pc = 0x13DCE0u;
            goto label_13dce0;
        }
    }
    ctx->pc = 0x13DCD0u;
label_13dcd0:
    // 0x13dcd0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x13dcd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_13dcd4:
    // 0x13dcd4: 0xc064508  jal         func_191420
label_13dcd8:
    if (ctx->pc == 0x13DCD8u) {
        ctx->pc = 0x13DCDCu;
        goto label_13dcdc;
    }
    ctx->pc = 0x13DCD4u;
    SET_GPR_U32(ctx, 31, 0x13DCDCu);
    ctx->pc = 0x191420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191420u, 0x13DCD4u, 0x13DCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DCDCu;
label_13dcdc:
    // 0x13dcdc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x13dcdcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13dce0:
    // 0x13dce0: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x13dce0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_13dce4:
    // 0x13dce4: 0x10000010  b           . + 4 + (0x10 << 2)
label_13dce8:
    if (ctx->pc == 0x13DCE8u) {
        ctx->pc = 0x13DCECu;
        goto label_13dcec;
    }
    ctx->pc = 0x13DCE4u;
    {
        const bool branch_taken_0x13dce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13dce4) {
            ctx->pc = 0x13DD28u;
            goto label_13dd28;
        }
    }
    ctx->pc = 0x13DCECu;
label_13dcec:
    // 0x13dcec: 0x24040038  addiu       $a0, $zero, 0x38
    ctx->pc = 0x13dcecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_13dcf0:
    // 0x13dcf0: 0xc119b68  jal         func_466DA0
label_13dcf4:
    if (ctx->pc == 0x13DCF4u) {
        ctx->pc = 0x13DCF8u;
        goto label_13dcf8;
    }
    ctx->pc = 0x13DCF0u;
    SET_GPR_U32(ctx, 31, 0x13DCF8u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x13DCF0u, 0x13DCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DCF8u;
label_13dcf8:
    // 0x13dcf8: 0x24040038  addiu       $a0, $zero, 0x38
    ctx->pc = 0x13dcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_13dcfc:
    // 0x13dcfc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13dcfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13dd00:
    // 0x13dd00: 0xc0400e0  jal         func_100380
label_13dd04:
    if (ctx->pc == 0x13DD04u) {
        ctx->pc = 0x13DD08u;
        goto label_13dd08;
    }
    ctx->pc = 0x13DD00u;
    SET_GPR_U32(ctx, 31, 0x13DD08u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x13DD00u, 0x13DD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DD08u;
label_13dd08:
    // 0x13dd08: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x13dd08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13dd0c:
    // 0x13dd0c: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
label_13dd10:
    if (ctx->pc == 0x13DD10u) {
        ctx->pc = 0x13DD14u;
        goto label_13dd14;
    }
    ctx->pc = 0x13DD0Cu;
    {
        const bool branch_taken_0x13dd0c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x13dd0c) {
            ctx->pc = 0x13DD24u;
            goto label_13dd24;
        }
    }
    ctx->pc = 0x13DD14u;
label_13dd14:
    // 0x13dd14: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13dd14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_13dd18:
    // 0x13dd18: 0xc06455c  jal         func_191570
label_13dd1c:
    if (ctx->pc == 0x13DD1Cu) {
        ctx->pc = 0x13DD20u;
        goto label_13dd20;
    }
    ctx->pc = 0x13DD18u;
    SET_GPR_U32(ctx, 31, 0x13DD20u);
    ctx->pc = 0x191570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191570u, 0x13DD18u, 0x13DD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DD20u;
label_13dd20:
    // 0x13dd20: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x13dd20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13dd24:
    // 0x13dd24: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x13dd24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_13dd28:
    // 0x13dd28: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x13dd28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_13dd2c:
    // 0x13dd2c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x13dd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_13dd30:
    // 0x13dd30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13dd30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13dd34:
    // 0x13dd34: 0xac510028  sw          $s1, 0x28($v0)
    ctx->pc = 0x13dd34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 17));
label_13dd38:
    // 0x13dd38: 0x1011000d  beq         $zero, $s1, . + 4 + (0xD << 2)
label_13dd3c:
    if (ctx->pc == 0x13DD3Cu) {
        ctx->pc = 0x13DD40u;
        goto label_13dd40;
    }
    ctx->pc = 0x13DD38u;
    {
        const bool branch_taken_0x13dd38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 17));
        if (branch_taken_0x13dd38) {
            ctx->pc = 0x13DD70u;
            goto label_13dd70;
        }
    }
    ctx->pc = 0x13DD40u;
label_13dd40:
    // 0x13dd40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13dd40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13dd44:
    // 0x13dd44: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13dd44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13dd48:
    // 0x13dd48: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x13dd48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_13dd4c:
    // 0x13dd4c: 0x320f809  jalr        $t9
label_13dd50:
    if (ctx->pc == 0x13DD50u) {
        ctx->pc = 0x13DD54u;
        goto label_13dd54;
    }
    ctx->pc = 0x13DD4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13DD54u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DD4Cu, 0x13DD54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13DD54u;
label_13dd54:
    // 0x13dd54: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x13dd54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13dd58:
    // 0x13dd58: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x13dd58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_13dd5c:
    // 0x13dd5c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13dd5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_13dd60:
    // 0x13dd60: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x13dd60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_13dd64:
    // 0x13dd64: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x13dd64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_13dd68:
    // 0x13dd68: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x13dd68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_13dd6c:
    // 0x13dd6c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x13dd6cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13dd70:
    // 0x13dd70: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x13dd70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_13dd74:
    // 0x13dd74: 0x2e42000b  sltiu       $v0, $s2, 0xB
    ctx->pc = 0x13dd74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_13dd78:
    // 0x13dd78: 0x1440ff78  bnez        $v0, . + 4 + (-0x88 << 2)
label_13dd7c:
    if (ctx->pc == 0x13DD7Cu) {
        ctx->pc = 0x13DD80u;
        goto label_13dd80;
    }
    ctx->pc = 0x13DD78u;
    {
        const bool branch_taken_0x13dd78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13dd78) {
            ctx->pc = 0x13DB5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13db5c;
        }
    }
    ctx->pc = 0x13DD80u;
label_13dd80:
    // 0x13dd80: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13dd80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13dd84:
    // 0x13dd84: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x13dd84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_13dd88:
    // 0x13dd88: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x13dd88u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_13dd8c:
    // 0x13dd8c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x13dd8cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_13dd90:
    // 0x13dd90: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x13dd90u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_13dd94:
    // 0x13dd94: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x13dd94u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_13dd98:
    // 0x13dd98: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13dd98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_13dd9c:
    // 0x13dd9c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13dd9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_13dda0:
    // 0x13dda0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13dda0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13dda4:
    // 0x13dda4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13dda4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13dda8:
    // 0x13dda8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13dda8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_13ddac:
    // 0x13ddac: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x13ddacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_13ddb0:
    // 0x13ddb0: 0x3e00008  jr          $ra
label_13ddb4:
    if (ctx->pc == 0x13DDB4u) {
        ctx->pc = 0x13DDB8u;
        goto label_13ddb8;
    }
    ctx->pc = 0x13DDB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DDB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13DDB8u;
label_13ddb8:
    // 0x13ddb8: 0x0  nop
    ctx->pc = 0x13ddb8u;
    // NOP
label_13ddbc:
    // 0x13ddbc: 0x0  nop
    ctx->pc = 0x13ddbcu;
    // NOP
label_13ddc0:
    // 0x13ddc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13ddc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_13ddc4:
    // 0x13ddc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13ddc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_13ddc8:
    // 0x13ddc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13ddc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_13ddcc:
    // 0x13ddcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13ddccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_13ddd0:
    // 0x13ddd0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x13ddd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_13ddd4:
    // 0x13ddd4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x13ddd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_13ddd8:
    // 0x13ddd8: 0xc08ec48  jal         func_23B120
label_13dddc:
    if (ctx->pc == 0x13DDDCu) {
        ctx->pc = 0x13DDE0u;
        goto label_13dde0;
    }
    ctx->pc = 0x13DDD8u;
    SET_GPR_U32(ctx, 31, 0x13DDE0u);
    ctx->pc = 0x23B120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B120u, 0x13DDD8u, 0x13DDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DDE0u;
label_13dde0:
    // 0x13dde0: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x13dde0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13dde4:
    // 0x13dde4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x13dde4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_13dde8:
    // 0x13dde8: 0xc04fbb4  jal         func_13EED0
label_13ddec:
    if (ctx->pc == 0x13DDECu) {
        ctx->pc = 0x13DDF0u;
        goto label_13ddf0;
    }
    ctx->pc = 0x13DDE8u;
    SET_GPR_U32(ctx, 31, 0x13DDF0u);
    ctx->pc = 0x13EED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EED0u, 0x13DDE8u, 0x13DDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DDF0u;
label_13ddf0:
    // 0x13ddf0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x13ddf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_13ddf4:
    // 0x13ddf4: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x13ddf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_13ddf8:
    // 0x13ddf8: 0xc04f884  jal         func_13E210
label_13ddfc:
    if (ctx->pc == 0x13DDFCu) {
        ctx->pc = 0x13DE00u;
        goto label_13de00;
    }
    ctx->pc = 0x13DDF8u;
    SET_GPR_U32(ctx, 31, 0x13DE00u);
    ctx->pc = 0x13E210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E210u, 0x13DDF8u, 0x13DE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DE00u;
label_13de00:
    // 0x13de00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13de00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13de04:
    // 0x13de04: 0xc0412dc  jal         func_104B70
label_13de08:
    if (ctx->pc == 0x13DE08u) {
        ctx->pc = 0x13DE0Cu;
        goto label_13de0c;
    }
    ctx->pc = 0x13DE04u;
    SET_GPR_U32(ctx, 31, 0x13DE0Cu);
    ctx->pc = 0x104B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104B70u, 0x13DE04u, 0x13DE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DE0Cu;
label_13de0c:
    // 0x13de0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13de0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13de10:
    // 0x13de10: 0xc090590  jal         func_241640
label_13de14:
    if (ctx->pc == 0x13DE14u) {
        ctx->pc = 0x13DE18u;
        goto label_13de18;
    }
    ctx->pc = 0x13DE10u;
    SET_GPR_U32(ctx, 31, 0x13DE18u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x13DE10u, 0x13DE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DE18u;
label_13de18:
    // 0x13de18: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x13de18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_13de1c:
    // 0x13de1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13de1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13de20:
    // 0x13de20: 0x24650064  addiu       $a1, $v1, 0x64
    ctx->pc = 0x13de20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
label_13de24:
    // 0x13de24: 0xc0917d4  jal         func_245F50
label_13de28:
    if (ctx->pc == 0x13DE28u) {
        ctx->pc = 0x13DE2Cu;
        goto label_13de2c;
    }
    ctx->pc = 0x13DE24u;
    SET_GPR_U32(ctx, 31, 0x13DE2Cu);
    ctx->pc = 0x245F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245F50u, 0x13DE24u, 0x13DE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DE2Cu;
label_13de2c:
    // 0x13de2c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x13de2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_13de30:
    // 0x13de30: 0x8c44005c  lw          $a0, 0x5C($v0)
    ctx->pc = 0x13de30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_13de34:
    // 0x13de34: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13de34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13de38:
    // 0x13de38: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x13de38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_13de3c:
    // 0x13de3c: 0x320f809  jalr        $t9
label_13de40:
    if (ctx->pc == 0x13DE40u) {
        ctx->pc = 0x13DE44u;
        goto label_13de44;
    }
    ctx->pc = 0x13DE3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13DE44u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DE3Cu, 0x13DE44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13DE44u;
label_13de44:
    // 0x13de44: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x13de44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13de48:
    // 0x13de48: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x13de48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_13de4c:
    // 0x13de4c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13de4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_13de50:
    // 0x13de50: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x13de50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_13de54:
    // 0x13de54: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x13de54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_13de58:
    // 0x13de58: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x13de58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_13de5c:
    // 0x13de5c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x13de5cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13de60:
    // 0x13de60: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x13de60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_13de64:
    // 0x13de64: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x13de64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_13de68:
    // 0x13de68: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_13de6c:
    if (ctx->pc == 0x13DE6Cu) {
        ctx->pc = 0x13DE70u;
        goto label_13de70;
    }
    ctx->pc = 0x13DE68u;
    {
        const bool branch_taken_0x13de68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13de68) {
            ctx->pc = 0x13DE98u;
            goto label_13de98;
        }
    }
    ctx->pc = 0x13DE70u;
label_13de70:
    // 0x13de70: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x13de70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_13de74:
    // 0x13de74: 0x8c44005c  lw          $a0, 0x5C($v0)
    ctx->pc = 0x13de74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_13de78:
    // 0x13de78: 0xc04f874  jal         func_13E1D0
label_13de7c:
    if (ctx->pc == 0x13DE7Cu) {
        ctx->pc = 0x13DE80u;
        goto label_13de80;
    }
    ctx->pc = 0x13DE78u;
    SET_GPR_U32(ctx, 31, 0x13DE80u);
    ctx->pc = 0x13E1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E1D0u, 0x13DE78u, 0x13DE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DE80u;
label_13de80:
    // 0x13de80: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x13de80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_13de84:
    // 0x13de84: 0x8c44005c  lw          $a0, 0x5C($v0)
    ctx->pc = 0x13de84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_13de88:
    // 0x13de88: 0xc119c5c  jal         func_467170
label_13de8c:
    if (ctx->pc == 0x13DE8Cu) {
        ctx->pc = 0x13DE90u;
        goto label_13de90;
    }
    ctx->pc = 0x13DE88u;
    SET_GPR_U32(ctx, 31, 0x13DE90u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x13DE88u, 0x13DE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DE90u;
label_13de90:
    // 0x13de90: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x13de90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_13de94:
    // 0x13de94: 0xac40005c  sw          $zero, 0x5C($v0)
    ctx->pc = 0x13de94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 0));
label_13de98:
    // 0x13de98: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x13de98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_13de9c:
    // 0x13de9c: 0x8c440070  lw          $a0, 0x70($v0)
    ctx->pc = 0x13de9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_13dea0:
    // 0x13dea0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13dea0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13dea4:
    // 0x13dea4: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x13dea4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_13dea8:
    // 0x13dea8: 0x320f809  jalr        $t9
label_13deac:
    if (ctx->pc == 0x13DEACu) {
        ctx->pc = 0x13DEB0u;
        goto label_13deb0;
    }
    ctx->pc = 0x13DEA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13DEB0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DEA8u, 0x13DEB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13DEB0u;
label_13deb0:
    // 0x13deb0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x13deb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13deb4:
    // 0x13deb4: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x13deb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_13deb8:
    // 0x13deb8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13deb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_13debc:
    // 0x13debc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x13debcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_13dec0:
    // 0x13dec0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x13dec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_13dec4:
    // 0x13dec4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x13dec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_13dec8:
    // 0x13dec8: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x13dec8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13decc:
    // 0x13decc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x13deccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_13ded0:
    // 0x13ded0: 0x8c420070  lw          $v0, 0x70($v0)
    ctx->pc = 0x13ded0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_13ded4:
    // 0x13ded4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_13ded8:
    if (ctx->pc == 0x13DED8u) {
        ctx->pc = 0x13DEDCu;
        goto label_13dedc;
    }
    ctx->pc = 0x13DED4u;
    {
        const bool branch_taken_0x13ded4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ded4) {
            ctx->pc = 0x13DF04u;
            goto label_13df04;
        }
    }
    ctx->pc = 0x13DEDCu;
label_13dedc:
    // 0x13dedc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x13dedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_13dee0:
    // 0x13dee0: 0x8c440070  lw          $a0, 0x70($v0)
    ctx->pc = 0x13dee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_13dee4:
    // 0x13dee4: 0xc04f864  jal         func_13E190
label_13dee8:
    if (ctx->pc == 0x13DEE8u) {
        ctx->pc = 0x13DEECu;
        goto label_13deec;
    }
    ctx->pc = 0x13DEE4u;
    SET_GPR_U32(ctx, 31, 0x13DEECu);
    ctx->pc = 0x13E190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E190u, 0x13DEE4u, 0x13DEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DEECu;
label_13deec:
    // 0x13deec: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x13deecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_13def0:
    // 0x13def0: 0x8c440070  lw          $a0, 0x70($v0)
    ctx->pc = 0x13def0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_13def4:
    // 0x13def4: 0xc119c5c  jal         func_467170
label_13def8:
    if (ctx->pc == 0x13DEF8u) {
        ctx->pc = 0x13DEFCu;
        goto label_13defc;
    }
    ctx->pc = 0x13DEF4u;
    SET_GPR_U32(ctx, 31, 0x13DEFCu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x13DEF4u, 0x13DEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DEFCu;
label_13defc:
    // 0x13defc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x13defcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_13df00:
    // 0x13df00: 0xac400070  sw          $zero, 0x70($v0)
    ctx->pc = 0x13df00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 0));
label_13df04:
    // 0x13df04: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x13df04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_13df08:
    // 0x13df08: 0x8c440074  lw          $a0, 0x74($v0)
    ctx->pc = 0x13df08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_13df0c:
    // 0x13df0c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13df0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13df10:
    // 0x13df10: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x13df10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_13df14:
    // 0x13df14: 0x320f809  jalr        $t9
label_13df18:
    if (ctx->pc == 0x13DF18u) {
        ctx->pc = 0x13DF1Cu;
        goto label_13df1c;
    }
    ctx->pc = 0x13DF14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13DF1Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DF14u, 0x13DF1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13DF1Cu;
label_13df1c:
    // 0x13df1c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x13df1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13df20:
    // 0x13df20: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x13df20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_13df24:
    // 0x13df24: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13df24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_13df28:
    // 0x13df28: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x13df28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_13df2c:
    // 0x13df2c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x13df2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_13df30:
    // 0x13df30: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x13df30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_13df34:
    // 0x13df34: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x13df34u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13df38:
    // 0x13df38: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x13df38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_13df3c:
    // 0x13df3c: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x13df3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_13df40:
    // 0x13df40: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_13df44:
    if (ctx->pc == 0x13DF44u) {
        ctx->pc = 0x13DF48u;
        goto label_13df48;
    }
    ctx->pc = 0x13DF40u;
    {
        const bool branch_taken_0x13df40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13df40) {
            ctx->pc = 0x13DF70u;
            goto label_13df70;
        }
    }
    ctx->pc = 0x13DF48u;
label_13df48:
    // 0x13df48: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x13df48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_13df4c:
    // 0x13df4c: 0x8c440074  lw          $a0, 0x74($v0)
    ctx->pc = 0x13df4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_13df50:
    // 0x13df50: 0xc04f854  jal         func_13E150
label_13df54:
    if (ctx->pc == 0x13DF54u) {
        ctx->pc = 0x13DF58u;
        goto label_13df58;
    }
    ctx->pc = 0x13DF50u;
    SET_GPR_U32(ctx, 31, 0x13DF58u);
    ctx->pc = 0x13E150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E150u, 0x13DF50u, 0x13DF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DF58u;
label_13df58:
    // 0x13df58: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x13df58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_13df5c:
    // 0x13df5c: 0x8c440074  lw          $a0, 0x74($v0)
    ctx->pc = 0x13df5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_13df60:
    // 0x13df60: 0xc119c5c  jal         func_467170
label_13df64:
    if (ctx->pc == 0x13DF64u) {
        ctx->pc = 0x13DF68u;
        goto label_13df68;
    }
    ctx->pc = 0x13DF60u;
    SET_GPR_U32(ctx, 31, 0x13DF68u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x13DF60u, 0x13DF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DF68u;
label_13df68:
    // 0x13df68: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x13df68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_13df6c:
    // 0x13df6c: 0xac400074  sw          $zero, 0x74($v0)
    ctx->pc = 0x13df6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 0));
label_13df70:
    // 0x13df70: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x13df70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_13df74:
    // 0x13df74: 0x8c440078  lw          $a0, 0x78($v0)
    ctx->pc = 0x13df74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
label_13df78:
    // 0x13df78: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13df78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13df7c:
    // 0x13df7c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x13df7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_13df80:
    // 0x13df80: 0x320f809  jalr        $t9
label_13df84:
    if (ctx->pc == 0x13DF84u) {
        ctx->pc = 0x13DF88u;
        goto label_13df88;
    }
    ctx->pc = 0x13DF80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13DF88u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DF80u, 0x13DF88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13DF88u;
label_13df88:
    // 0x13df88: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x13df88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13df8c:
    // 0x13df8c: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x13df8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_13df90:
    // 0x13df90: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13df90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_13df94:
    // 0x13df94: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x13df94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_13df98:
    // 0x13df98: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x13df98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_13df9c:
    // 0x13df9c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x13df9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_13dfa0:
    // 0x13dfa0: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x13dfa0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13dfa4:
    // 0x13dfa4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x13dfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_13dfa8:
    // 0x13dfa8: 0x8c420078  lw          $v0, 0x78($v0)
    ctx->pc = 0x13dfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
label_13dfac:
    // 0x13dfac: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_13dfb0:
    if (ctx->pc == 0x13DFB0u) {
        ctx->pc = 0x13DFB4u;
        goto label_13dfb4;
    }
    ctx->pc = 0x13DFACu;
    {
        const bool branch_taken_0x13dfac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13dfac) {
            ctx->pc = 0x13DFDCu;
            goto label_13dfdc;
        }
    }
    ctx->pc = 0x13DFB4u;
label_13dfb4:
    // 0x13dfb4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x13dfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_13dfb8:
    // 0x13dfb8: 0x8c440078  lw          $a0, 0x78($v0)
    ctx->pc = 0x13dfb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
label_13dfbc:
    // 0x13dfbc: 0xc04f844  jal         func_13E110
label_13dfc0:
    if (ctx->pc == 0x13DFC0u) {
        ctx->pc = 0x13DFC4u;
        goto label_13dfc4;
    }
    ctx->pc = 0x13DFBCu;
    SET_GPR_U32(ctx, 31, 0x13DFC4u);
    ctx->pc = 0x13E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E110u, 0x13DFBCu, 0x13DFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DFC4u;
label_13dfc4:
    // 0x13dfc4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x13dfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_13dfc8:
    // 0x13dfc8: 0x8c440078  lw          $a0, 0x78($v0)
    ctx->pc = 0x13dfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
label_13dfcc:
    // 0x13dfcc: 0xc119c5c  jal         func_467170
label_13dfd0:
    if (ctx->pc == 0x13DFD0u) {
        ctx->pc = 0x13DFD4u;
        goto label_13dfd4;
    }
    ctx->pc = 0x13DFCCu;
    SET_GPR_U32(ctx, 31, 0x13DFD4u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x13DFCCu, 0x13DFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DFD4u;
label_13dfd4:
    // 0x13dfd4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x13dfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_13dfd8:
    // 0x13dfd8: 0xac400078  sw          $zero, 0x78($v0)
    ctx->pc = 0x13dfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 0));
label_13dfdc:
    // 0x13dfdc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x13dfdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13dfe0:
    // 0x13dfe0: 0x1000002d  b           . + 4 + (0x2D << 2)
label_13dfe4:
    if (ctx->pc == 0x13DFE4u) {
        ctx->pc = 0x13DFE8u;
        goto label_13dfe8;
    }
    ctx->pc = 0x13DFE0u;
    {
        const bool branch_taken_0x13dfe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13dfe0) {
            ctx->pc = 0x13E098u;
            goto label_13e098;
        }
    }
    ctx->pc = 0x13DFE8u;
label_13dfe8:
    // 0x13dfe8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x13dfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_13dfec:
    // 0x13dfec: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x13dfecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_13dff0:
    // 0x13dff0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13dff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13dff4:
    // 0x13dff4: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x13dff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_13dff8:
    // 0x13dff8: 0x10020026  beq         $zero, $v0, . + 4 + (0x26 << 2)
label_13dffc:
    if (ctx->pc == 0x13DFFCu) {
        ctx->pc = 0x13E000u;
        goto label_13e000;
    }
    ctx->pc = 0x13DFF8u;
    {
        const bool branch_taken_0x13dff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x13dff8) {
            ctx->pc = 0x13E094u;
            goto label_13e094;
        }
    }
    ctx->pc = 0x13E000u;
label_13e000:
    // 0x13e000: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x13e000u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_13e004:
    // 0x13e004: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x13e004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_13e008:
    // 0x13e008: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13e008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13e00c:
    // 0x13e00c: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x13e00cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_13e010:
    // 0x13e010: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13e010u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13e014:
    // 0x13e014: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x13e014u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_13e018:
    // 0x13e018: 0x320f809  jalr        $t9
label_13e01c:
    if (ctx->pc == 0x13E01Cu) {
        ctx->pc = 0x13E020u;
        goto label_13e020;
    }
    ctx->pc = 0x13E018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13E020u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E018u, 0x13E020u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13E020u;
label_13e020:
    // 0x13e020: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x13e020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13e024:
    // 0x13e024: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x13e024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_13e028:
    // 0x13e028: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13e028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_13e02c:
    // 0x13e02c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x13e02cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_13e030:
    // 0x13e030: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x13e030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_13e034:
    // 0x13e034: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x13e034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_13e038:
    // 0x13e038: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x13e038u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13e03c:
    // 0x13e03c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x13e03cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_13e040:
    // 0x13e040: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x13e040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_13e044:
    // 0x13e044: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13e044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13e048:
    // 0x13e048: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x13e048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_13e04c:
    // 0x13e04c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_13e050:
    if (ctx->pc == 0x13E050u) {
        ctx->pc = 0x13E054u;
        goto label_13e054;
    }
    ctx->pc = 0x13E04Cu;
    {
        const bool branch_taken_0x13e04c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e04c) {
            ctx->pc = 0x13E094u;
            goto label_13e094;
        }
    }
    ctx->pc = 0x13E054u;
label_13e054:
    // 0x13e054: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x13e054u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_13e058:
    // 0x13e058: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x13e058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_13e05c:
    // 0x13e05c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13e05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13e060:
    // 0x13e060: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x13e060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_13e064:
    // 0x13e064: 0xc04f834  jal         func_13E0D0
label_13e068:
    if (ctx->pc == 0x13E068u) {
        ctx->pc = 0x13E06Cu;
        goto label_13e06c;
    }
    ctx->pc = 0x13E064u;
    SET_GPR_U32(ctx, 31, 0x13E06Cu);
    ctx->pc = 0x13E0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E0D0u, 0x13E064u, 0x13E06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E06Cu;
label_13e06c:
    // 0x13e06c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x13e06cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_13e070:
    // 0x13e070: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x13e070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_13e074:
    // 0x13e074: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13e074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13e078:
    // 0x13e078: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x13e078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_13e07c:
    // 0x13e07c: 0xc119c5c  jal         func_467170
label_13e080:
    if (ctx->pc == 0x13E080u) {
        ctx->pc = 0x13E084u;
        goto label_13e084;
    }
    ctx->pc = 0x13E07Cu;
    SET_GPR_U32(ctx, 31, 0x13E084u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x13E07Cu, 0x13E084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E084u;
label_13e084:
    // 0x13e084: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x13e084u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_13e088:
    // 0x13e088: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x13e088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_13e08c:
    // 0x13e08c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13e08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13e090:
    // 0x13e090: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x13e090u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
label_13e094:
    // 0x13e094: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x13e094u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_13e098:
    // 0x13e098: 0x2e22000b  sltiu       $v0, $s1, 0xB
    ctx->pc = 0x13e098u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_13e09c:
    // 0x13e09c: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
label_13e0a0:
    if (ctx->pc == 0x13E0A0u) {
        ctx->pc = 0x13E0A4u;
        goto label_13e0a4;
    }
    ctx->pc = 0x13E09Cu;
    {
        const bool branch_taken_0x13e09c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e09c) {
            ctx->pc = 0x13DFE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13dfe8;
        }
    }
    ctx->pc = 0x13E0A4u;
label_13e0a4:
    // 0x13e0a4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x13e0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_13e0a8:
    // 0x13e0a8: 0xac400060  sw          $zero, 0x60($v0)
    ctx->pc = 0x13e0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
label_13e0ac:
    // 0x13e0ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13e0acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13e0b0:
    // 0x13e0b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13e0b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_13e0b4:
    // 0x13e0b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13e0b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13e0b8:
    // 0x13e0b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13e0b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_13e0bc:
    // 0x13e0bc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x13e0bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_13e0c0:
    // 0x13e0c0: 0x3e00008  jr          $ra
label_13e0c4:
    if (ctx->pc == 0x13E0C4u) {
        ctx->pc = 0x13E0C8u;
        goto label_13e0c8;
    }
    ctx->pc = 0x13E0C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E0C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E0C8u;
label_13e0c8:
    // 0x13e0c8: 0x0  nop
    ctx->pc = 0x13e0c8u;
    // NOP
label_13e0cc:
    // 0x13e0cc: 0x0  nop
    ctx->pc = 0x13e0ccu;
    // NOP
    ctx->pc = 0x13e0d0u;
}
