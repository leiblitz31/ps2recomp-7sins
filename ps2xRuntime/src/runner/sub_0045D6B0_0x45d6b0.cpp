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

// Function: sub_0045D6B0
// Address: 0x45d6b0 - 0x45e0d0
void sub_0045D6B0_0x45d6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045D6B0_0x45d6b0");
#endif

    switch (ctx->pc) {
        case 0x45d6b0u: goto label_45d6b0;
        case 0x45d6b4u: goto label_45d6b4;
        case 0x45d6b8u: goto label_45d6b8;
        case 0x45d6bcu: goto label_45d6bc;
        case 0x45d6c0u: goto label_45d6c0;
        case 0x45d6c4u: goto label_45d6c4;
        case 0x45d6c8u: goto label_45d6c8;
        case 0x45d6ccu: goto label_45d6cc;
        case 0x45d6d0u: goto label_45d6d0;
        case 0x45d6d4u: goto label_45d6d4;
        case 0x45d6d8u: goto label_45d6d8;
        case 0x45d6dcu: goto label_45d6dc;
        case 0x45d6e0u: goto label_45d6e0;
        case 0x45d6e4u: goto label_45d6e4;
        case 0x45d6e8u: goto label_45d6e8;
        case 0x45d6ecu: goto label_45d6ec;
        case 0x45d6f0u: goto label_45d6f0;
        case 0x45d6f4u: goto label_45d6f4;
        case 0x45d6f8u: goto label_45d6f8;
        case 0x45d6fcu: goto label_45d6fc;
        case 0x45d700u: goto label_45d700;
        case 0x45d704u: goto label_45d704;
        case 0x45d708u: goto label_45d708;
        case 0x45d70cu: goto label_45d70c;
        case 0x45d710u: goto label_45d710;
        case 0x45d714u: goto label_45d714;
        case 0x45d718u: goto label_45d718;
        case 0x45d71cu: goto label_45d71c;
        case 0x45d720u: goto label_45d720;
        case 0x45d724u: goto label_45d724;
        case 0x45d728u: goto label_45d728;
        case 0x45d72cu: goto label_45d72c;
        case 0x45d730u: goto label_45d730;
        case 0x45d734u: goto label_45d734;
        case 0x45d738u: goto label_45d738;
        case 0x45d73cu: goto label_45d73c;
        case 0x45d740u: goto label_45d740;
        case 0x45d744u: goto label_45d744;
        case 0x45d748u: goto label_45d748;
        case 0x45d74cu: goto label_45d74c;
        case 0x45d750u: goto label_45d750;
        case 0x45d754u: goto label_45d754;
        case 0x45d758u: goto label_45d758;
        case 0x45d75cu: goto label_45d75c;
        case 0x45d760u: goto label_45d760;
        case 0x45d764u: goto label_45d764;
        case 0x45d768u: goto label_45d768;
        case 0x45d76cu: goto label_45d76c;
        case 0x45d770u: goto label_45d770;
        case 0x45d774u: goto label_45d774;
        case 0x45d778u: goto label_45d778;
        case 0x45d77cu: goto label_45d77c;
        case 0x45d780u: goto label_45d780;
        case 0x45d784u: goto label_45d784;
        case 0x45d788u: goto label_45d788;
        case 0x45d78cu: goto label_45d78c;
        case 0x45d790u: goto label_45d790;
        case 0x45d794u: goto label_45d794;
        case 0x45d798u: goto label_45d798;
        case 0x45d79cu: goto label_45d79c;
        case 0x45d7a0u: goto label_45d7a0;
        case 0x45d7a4u: goto label_45d7a4;
        case 0x45d7a8u: goto label_45d7a8;
        case 0x45d7acu: goto label_45d7ac;
        case 0x45d7b0u: goto label_45d7b0;
        case 0x45d7b4u: goto label_45d7b4;
        case 0x45d7b8u: goto label_45d7b8;
        case 0x45d7bcu: goto label_45d7bc;
        case 0x45d7c0u: goto label_45d7c0;
        case 0x45d7c4u: goto label_45d7c4;
        case 0x45d7c8u: goto label_45d7c8;
        case 0x45d7ccu: goto label_45d7cc;
        case 0x45d7d0u: goto label_45d7d0;
        case 0x45d7d4u: goto label_45d7d4;
        case 0x45d7d8u: goto label_45d7d8;
        case 0x45d7dcu: goto label_45d7dc;
        case 0x45d7e0u: goto label_45d7e0;
        case 0x45d7e4u: goto label_45d7e4;
        case 0x45d7e8u: goto label_45d7e8;
        case 0x45d7ecu: goto label_45d7ec;
        case 0x45d7f0u: goto label_45d7f0;
        case 0x45d7f4u: goto label_45d7f4;
        case 0x45d7f8u: goto label_45d7f8;
        case 0x45d7fcu: goto label_45d7fc;
        case 0x45d800u: goto label_45d800;
        case 0x45d804u: goto label_45d804;
        case 0x45d808u: goto label_45d808;
        case 0x45d80cu: goto label_45d80c;
        case 0x45d810u: goto label_45d810;
        case 0x45d814u: goto label_45d814;
        case 0x45d818u: goto label_45d818;
        case 0x45d81cu: goto label_45d81c;
        case 0x45d820u: goto label_45d820;
        case 0x45d824u: goto label_45d824;
        case 0x45d828u: goto label_45d828;
        case 0x45d82cu: goto label_45d82c;
        case 0x45d830u: goto label_45d830;
        case 0x45d834u: goto label_45d834;
        case 0x45d838u: goto label_45d838;
        case 0x45d83cu: goto label_45d83c;
        case 0x45d840u: goto label_45d840;
        case 0x45d844u: goto label_45d844;
        case 0x45d848u: goto label_45d848;
        case 0x45d84cu: goto label_45d84c;
        case 0x45d850u: goto label_45d850;
        case 0x45d854u: goto label_45d854;
        case 0x45d858u: goto label_45d858;
        case 0x45d85cu: goto label_45d85c;
        case 0x45d860u: goto label_45d860;
        case 0x45d864u: goto label_45d864;
        case 0x45d868u: goto label_45d868;
        case 0x45d86cu: goto label_45d86c;
        case 0x45d870u: goto label_45d870;
        case 0x45d874u: goto label_45d874;
        case 0x45d878u: goto label_45d878;
        case 0x45d87cu: goto label_45d87c;
        case 0x45d880u: goto label_45d880;
        case 0x45d884u: goto label_45d884;
        case 0x45d888u: goto label_45d888;
        case 0x45d88cu: goto label_45d88c;
        case 0x45d890u: goto label_45d890;
        case 0x45d894u: goto label_45d894;
        case 0x45d898u: goto label_45d898;
        case 0x45d89cu: goto label_45d89c;
        case 0x45d8a0u: goto label_45d8a0;
        case 0x45d8a4u: goto label_45d8a4;
        case 0x45d8a8u: goto label_45d8a8;
        case 0x45d8acu: goto label_45d8ac;
        case 0x45d8b0u: goto label_45d8b0;
        case 0x45d8b4u: goto label_45d8b4;
        case 0x45d8b8u: goto label_45d8b8;
        case 0x45d8bcu: goto label_45d8bc;
        case 0x45d8c0u: goto label_45d8c0;
        case 0x45d8c4u: goto label_45d8c4;
        case 0x45d8c8u: goto label_45d8c8;
        case 0x45d8ccu: goto label_45d8cc;
        case 0x45d8d0u: goto label_45d8d0;
        case 0x45d8d4u: goto label_45d8d4;
        case 0x45d8d8u: goto label_45d8d8;
        case 0x45d8dcu: goto label_45d8dc;
        case 0x45d8e0u: goto label_45d8e0;
        case 0x45d8e4u: goto label_45d8e4;
        case 0x45d8e8u: goto label_45d8e8;
        case 0x45d8ecu: goto label_45d8ec;
        case 0x45d8f0u: goto label_45d8f0;
        case 0x45d8f4u: goto label_45d8f4;
        case 0x45d8f8u: goto label_45d8f8;
        case 0x45d8fcu: goto label_45d8fc;
        case 0x45d900u: goto label_45d900;
        case 0x45d904u: goto label_45d904;
        case 0x45d908u: goto label_45d908;
        case 0x45d90cu: goto label_45d90c;
        case 0x45d910u: goto label_45d910;
        case 0x45d914u: goto label_45d914;
        case 0x45d918u: goto label_45d918;
        case 0x45d91cu: goto label_45d91c;
        case 0x45d920u: goto label_45d920;
        case 0x45d924u: goto label_45d924;
        case 0x45d928u: goto label_45d928;
        case 0x45d92cu: goto label_45d92c;
        case 0x45d930u: goto label_45d930;
        case 0x45d934u: goto label_45d934;
        case 0x45d938u: goto label_45d938;
        case 0x45d93cu: goto label_45d93c;
        case 0x45d940u: goto label_45d940;
        case 0x45d944u: goto label_45d944;
        case 0x45d948u: goto label_45d948;
        case 0x45d94cu: goto label_45d94c;
        case 0x45d950u: goto label_45d950;
        case 0x45d954u: goto label_45d954;
        case 0x45d958u: goto label_45d958;
        case 0x45d95cu: goto label_45d95c;
        case 0x45d960u: goto label_45d960;
        case 0x45d964u: goto label_45d964;
        case 0x45d968u: goto label_45d968;
        case 0x45d96cu: goto label_45d96c;
        case 0x45d970u: goto label_45d970;
        case 0x45d974u: goto label_45d974;
        case 0x45d978u: goto label_45d978;
        case 0x45d97cu: goto label_45d97c;
        case 0x45d980u: goto label_45d980;
        case 0x45d984u: goto label_45d984;
        case 0x45d988u: goto label_45d988;
        case 0x45d98cu: goto label_45d98c;
        case 0x45d990u: goto label_45d990;
        case 0x45d994u: goto label_45d994;
        case 0x45d998u: goto label_45d998;
        case 0x45d99cu: goto label_45d99c;
        case 0x45d9a0u: goto label_45d9a0;
        case 0x45d9a4u: goto label_45d9a4;
        case 0x45d9a8u: goto label_45d9a8;
        case 0x45d9acu: goto label_45d9ac;
        case 0x45d9b0u: goto label_45d9b0;
        case 0x45d9b4u: goto label_45d9b4;
        case 0x45d9b8u: goto label_45d9b8;
        case 0x45d9bcu: goto label_45d9bc;
        case 0x45d9c0u: goto label_45d9c0;
        case 0x45d9c4u: goto label_45d9c4;
        case 0x45d9c8u: goto label_45d9c8;
        case 0x45d9ccu: goto label_45d9cc;
        case 0x45d9d0u: goto label_45d9d0;
        case 0x45d9d4u: goto label_45d9d4;
        case 0x45d9d8u: goto label_45d9d8;
        case 0x45d9dcu: goto label_45d9dc;
        case 0x45d9e0u: goto label_45d9e0;
        case 0x45d9e4u: goto label_45d9e4;
        case 0x45d9e8u: goto label_45d9e8;
        case 0x45d9ecu: goto label_45d9ec;
        case 0x45d9f0u: goto label_45d9f0;
        case 0x45d9f4u: goto label_45d9f4;
        case 0x45d9f8u: goto label_45d9f8;
        case 0x45d9fcu: goto label_45d9fc;
        case 0x45da00u: goto label_45da00;
        case 0x45da04u: goto label_45da04;
        case 0x45da08u: goto label_45da08;
        case 0x45da0cu: goto label_45da0c;
        case 0x45da10u: goto label_45da10;
        case 0x45da14u: goto label_45da14;
        case 0x45da18u: goto label_45da18;
        case 0x45da1cu: goto label_45da1c;
        case 0x45da20u: goto label_45da20;
        case 0x45da24u: goto label_45da24;
        case 0x45da28u: goto label_45da28;
        case 0x45da2cu: goto label_45da2c;
        case 0x45da30u: goto label_45da30;
        case 0x45da34u: goto label_45da34;
        case 0x45da38u: goto label_45da38;
        case 0x45da3cu: goto label_45da3c;
        case 0x45da40u: goto label_45da40;
        case 0x45da44u: goto label_45da44;
        case 0x45da48u: goto label_45da48;
        case 0x45da4cu: goto label_45da4c;
        case 0x45da50u: goto label_45da50;
        case 0x45da54u: goto label_45da54;
        case 0x45da58u: goto label_45da58;
        case 0x45da5cu: goto label_45da5c;
        case 0x45da60u: goto label_45da60;
        case 0x45da64u: goto label_45da64;
        case 0x45da68u: goto label_45da68;
        case 0x45da6cu: goto label_45da6c;
        case 0x45da70u: goto label_45da70;
        case 0x45da74u: goto label_45da74;
        case 0x45da78u: goto label_45da78;
        case 0x45da7cu: goto label_45da7c;
        case 0x45da80u: goto label_45da80;
        case 0x45da84u: goto label_45da84;
        case 0x45da88u: goto label_45da88;
        case 0x45da8cu: goto label_45da8c;
        case 0x45da90u: goto label_45da90;
        case 0x45da94u: goto label_45da94;
        case 0x45da98u: goto label_45da98;
        case 0x45da9cu: goto label_45da9c;
        case 0x45daa0u: goto label_45daa0;
        case 0x45daa4u: goto label_45daa4;
        case 0x45daa8u: goto label_45daa8;
        case 0x45daacu: goto label_45daac;
        case 0x45dab0u: goto label_45dab0;
        case 0x45dab4u: goto label_45dab4;
        case 0x45dab8u: goto label_45dab8;
        case 0x45dabcu: goto label_45dabc;
        case 0x45dac0u: goto label_45dac0;
        case 0x45dac4u: goto label_45dac4;
        case 0x45dac8u: goto label_45dac8;
        case 0x45daccu: goto label_45dacc;
        case 0x45dad0u: goto label_45dad0;
        case 0x45dad4u: goto label_45dad4;
        case 0x45dad8u: goto label_45dad8;
        case 0x45dadcu: goto label_45dadc;
        case 0x45dae0u: goto label_45dae0;
        case 0x45dae4u: goto label_45dae4;
        case 0x45dae8u: goto label_45dae8;
        case 0x45daecu: goto label_45daec;
        case 0x45daf0u: goto label_45daf0;
        case 0x45daf4u: goto label_45daf4;
        case 0x45daf8u: goto label_45daf8;
        case 0x45dafcu: goto label_45dafc;
        case 0x45db00u: goto label_45db00;
        case 0x45db04u: goto label_45db04;
        case 0x45db08u: goto label_45db08;
        case 0x45db0cu: goto label_45db0c;
        case 0x45db10u: goto label_45db10;
        case 0x45db14u: goto label_45db14;
        case 0x45db18u: goto label_45db18;
        case 0x45db1cu: goto label_45db1c;
        case 0x45db20u: goto label_45db20;
        case 0x45db24u: goto label_45db24;
        case 0x45db28u: goto label_45db28;
        case 0x45db2cu: goto label_45db2c;
        case 0x45db30u: goto label_45db30;
        case 0x45db34u: goto label_45db34;
        case 0x45db38u: goto label_45db38;
        case 0x45db3cu: goto label_45db3c;
        case 0x45db40u: goto label_45db40;
        case 0x45db44u: goto label_45db44;
        case 0x45db48u: goto label_45db48;
        case 0x45db4cu: goto label_45db4c;
        case 0x45db50u: goto label_45db50;
        case 0x45db54u: goto label_45db54;
        case 0x45db58u: goto label_45db58;
        case 0x45db5cu: goto label_45db5c;
        case 0x45db60u: goto label_45db60;
        case 0x45db64u: goto label_45db64;
        case 0x45db68u: goto label_45db68;
        case 0x45db6cu: goto label_45db6c;
        case 0x45db70u: goto label_45db70;
        case 0x45db74u: goto label_45db74;
        case 0x45db78u: goto label_45db78;
        case 0x45db7cu: goto label_45db7c;
        case 0x45db80u: goto label_45db80;
        case 0x45db84u: goto label_45db84;
        case 0x45db88u: goto label_45db88;
        case 0x45db8cu: goto label_45db8c;
        case 0x45db90u: goto label_45db90;
        case 0x45db94u: goto label_45db94;
        case 0x45db98u: goto label_45db98;
        case 0x45db9cu: goto label_45db9c;
        case 0x45dba0u: goto label_45dba0;
        case 0x45dba4u: goto label_45dba4;
        case 0x45dba8u: goto label_45dba8;
        case 0x45dbacu: goto label_45dbac;
        case 0x45dbb0u: goto label_45dbb0;
        case 0x45dbb4u: goto label_45dbb4;
        case 0x45dbb8u: goto label_45dbb8;
        case 0x45dbbcu: goto label_45dbbc;
        case 0x45dbc0u: goto label_45dbc0;
        case 0x45dbc4u: goto label_45dbc4;
        case 0x45dbc8u: goto label_45dbc8;
        case 0x45dbccu: goto label_45dbcc;
        case 0x45dbd0u: goto label_45dbd0;
        case 0x45dbd4u: goto label_45dbd4;
        case 0x45dbd8u: goto label_45dbd8;
        case 0x45dbdcu: goto label_45dbdc;
        case 0x45dbe0u: goto label_45dbe0;
        case 0x45dbe4u: goto label_45dbe4;
        case 0x45dbe8u: goto label_45dbe8;
        case 0x45dbecu: goto label_45dbec;
        case 0x45dbf0u: goto label_45dbf0;
        case 0x45dbf4u: goto label_45dbf4;
        case 0x45dbf8u: goto label_45dbf8;
        case 0x45dbfcu: goto label_45dbfc;
        case 0x45dc00u: goto label_45dc00;
        case 0x45dc04u: goto label_45dc04;
        case 0x45dc08u: goto label_45dc08;
        case 0x45dc0cu: goto label_45dc0c;
        case 0x45dc10u: goto label_45dc10;
        case 0x45dc14u: goto label_45dc14;
        case 0x45dc18u: goto label_45dc18;
        case 0x45dc1cu: goto label_45dc1c;
        case 0x45dc20u: goto label_45dc20;
        case 0x45dc24u: goto label_45dc24;
        case 0x45dc28u: goto label_45dc28;
        case 0x45dc2cu: goto label_45dc2c;
        case 0x45dc30u: goto label_45dc30;
        case 0x45dc34u: goto label_45dc34;
        case 0x45dc38u: goto label_45dc38;
        case 0x45dc3cu: goto label_45dc3c;
        case 0x45dc40u: goto label_45dc40;
        case 0x45dc44u: goto label_45dc44;
        case 0x45dc48u: goto label_45dc48;
        case 0x45dc4cu: goto label_45dc4c;
        case 0x45dc50u: goto label_45dc50;
        case 0x45dc54u: goto label_45dc54;
        case 0x45dc58u: goto label_45dc58;
        case 0x45dc5cu: goto label_45dc5c;
        case 0x45dc60u: goto label_45dc60;
        case 0x45dc64u: goto label_45dc64;
        case 0x45dc68u: goto label_45dc68;
        case 0x45dc6cu: goto label_45dc6c;
        case 0x45dc70u: goto label_45dc70;
        case 0x45dc74u: goto label_45dc74;
        case 0x45dc78u: goto label_45dc78;
        case 0x45dc7cu: goto label_45dc7c;
        case 0x45dc80u: goto label_45dc80;
        case 0x45dc84u: goto label_45dc84;
        case 0x45dc88u: goto label_45dc88;
        case 0x45dc8cu: goto label_45dc8c;
        case 0x45dc90u: goto label_45dc90;
        case 0x45dc94u: goto label_45dc94;
        case 0x45dc98u: goto label_45dc98;
        case 0x45dc9cu: goto label_45dc9c;
        case 0x45dca0u: goto label_45dca0;
        case 0x45dca4u: goto label_45dca4;
        case 0x45dca8u: goto label_45dca8;
        case 0x45dcacu: goto label_45dcac;
        case 0x45dcb0u: goto label_45dcb0;
        case 0x45dcb4u: goto label_45dcb4;
        case 0x45dcb8u: goto label_45dcb8;
        case 0x45dcbcu: goto label_45dcbc;
        case 0x45dcc0u: goto label_45dcc0;
        case 0x45dcc4u: goto label_45dcc4;
        case 0x45dcc8u: goto label_45dcc8;
        case 0x45dcccu: goto label_45dccc;
        case 0x45dcd0u: goto label_45dcd0;
        case 0x45dcd4u: goto label_45dcd4;
        case 0x45dcd8u: goto label_45dcd8;
        case 0x45dcdcu: goto label_45dcdc;
        case 0x45dce0u: goto label_45dce0;
        case 0x45dce4u: goto label_45dce4;
        case 0x45dce8u: goto label_45dce8;
        case 0x45dcecu: goto label_45dcec;
        case 0x45dcf0u: goto label_45dcf0;
        case 0x45dcf4u: goto label_45dcf4;
        case 0x45dcf8u: goto label_45dcf8;
        case 0x45dcfcu: goto label_45dcfc;
        case 0x45dd00u: goto label_45dd00;
        case 0x45dd04u: goto label_45dd04;
        case 0x45dd08u: goto label_45dd08;
        case 0x45dd0cu: goto label_45dd0c;
        case 0x45dd10u: goto label_45dd10;
        case 0x45dd14u: goto label_45dd14;
        case 0x45dd18u: goto label_45dd18;
        case 0x45dd1cu: goto label_45dd1c;
        case 0x45dd20u: goto label_45dd20;
        case 0x45dd24u: goto label_45dd24;
        case 0x45dd28u: goto label_45dd28;
        case 0x45dd2cu: goto label_45dd2c;
        case 0x45dd30u: goto label_45dd30;
        case 0x45dd34u: goto label_45dd34;
        case 0x45dd38u: goto label_45dd38;
        case 0x45dd3cu: goto label_45dd3c;
        case 0x45dd40u: goto label_45dd40;
        case 0x45dd44u: goto label_45dd44;
        case 0x45dd48u: goto label_45dd48;
        case 0x45dd4cu: goto label_45dd4c;
        case 0x45dd50u: goto label_45dd50;
        case 0x45dd54u: goto label_45dd54;
        case 0x45dd58u: goto label_45dd58;
        case 0x45dd5cu: goto label_45dd5c;
        case 0x45dd60u: goto label_45dd60;
        case 0x45dd64u: goto label_45dd64;
        case 0x45dd68u: goto label_45dd68;
        case 0x45dd6cu: goto label_45dd6c;
        case 0x45dd70u: goto label_45dd70;
        case 0x45dd74u: goto label_45dd74;
        case 0x45dd78u: goto label_45dd78;
        case 0x45dd7cu: goto label_45dd7c;
        case 0x45dd80u: goto label_45dd80;
        case 0x45dd84u: goto label_45dd84;
        case 0x45dd88u: goto label_45dd88;
        case 0x45dd8cu: goto label_45dd8c;
        case 0x45dd90u: goto label_45dd90;
        case 0x45dd94u: goto label_45dd94;
        case 0x45dd98u: goto label_45dd98;
        case 0x45dd9cu: goto label_45dd9c;
        case 0x45dda0u: goto label_45dda0;
        case 0x45dda4u: goto label_45dda4;
        case 0x45dda8u: goto label_45dda8;
        case 0x45ddacu: goto label_45ddac;
        case 0x45ddb0u: goto label_45ddb0;
        case 0x45ddb4u: goto label_45ddb4;
        case 0x45ddb8u: goto label_45ddb8;
        case 0x45ddbcu: goto label_45ddbc;
        case 0x45ddc0u: goto label_45ddc0;
        case 0x45ddc4u: goto label_45ddc4;
        case 0x45ddc8u: goto label_45ddc8;
        case 0x45ddccu: goto label_45ddcc;
        case 0x45ddd0u: goto label_45ddd0;
        case 0x45ddd4u: goto label_45ddd4;
        case 0x45ddd8u: goto label_45ddd8;
        case 0x45dddcu: goto label_45dddc;
        case 0x45dde0u: goto label_45dde0;
        case 0x45dde4u: goto label_45dde4;
        case 0x45dde8u: goto label_45dde8;
        case 0x45ddecu: goto label_45ddec;
        case 0x45ddf0u: goto label_45ddf0;
        case 0x45ddf4u: goto label_45ddf4;
        case 0x45ddf8u: goto label_45ddf8;
        case 0x45ddfcu: goto label_45ddfc;
        case 0x45de00u: goto label_45de00;
        case 0x45de04u: goto label_45de04;
        case 0x45de08u: goto label_45de08;
        case 0x45de0cu: goto label_45de0c;
        case 0x45de10u: goto label_45de10;
        case 0x45de14u: goto label_45de14;
        case 0x45de18u: goto label_45de18;
        case 0x45de1cu: goto label_45de1c;
        case 0x45de20u: goto label_45de20;
        case 0x45de24u: goto label_45de24;
        case 0x45de28u: goto label_45de28;
        case 0x45de2cu: goto label_45de2c;
        case 0x45de30u: goto label_45de30;
        case 0x45de34u: goto label_45de34;
        case 0x45de38u: goto label_45de38;
        case 0x45de3cu: goto label_45de3c;
        case 0x45de40u: goto label_45de40;
        case 0x45de44u: goto label_45de44;
        case 0x45de48u: goto label_45de48;
        case 0x45de4cu: goto label_45de4c;
        case 0x45de50u: goto label_45de50;
        case 0x45de54u: goto label_45de54;
        case 0x45de58u: goto label_45de58;
        case 0x45de5cu: goto label_45de5c;
        case 0x45de60u: goto label_45de60;
        case 0x45de64u: goto label_45de64;
        case 0x45de68u: goto label_45de68;
        case 0x45de6cu: goto label_45de6c;
        case 0x45de70u: goto label_45de70;
        case 0x45de74u: goto label_45de74;
        case 0x45de78u: goto label_45de78;
        case 0x45de7cu: goto label_45de7c;
        case 0x45de80u: goto label_45de80;
        case 0x45de84u: goto label_45de84;
        case 0x45de88u: goto label_45de88;
        case 0x45de8cu: goto label_45de8c;
        case 0x45de90u: goto label_45de90;
        case 0x45de94u: goto label_45de94;
        case 0x45de98u: goto label_45de98;
        case 0x45de9cu: goto label_45de9c;
        case 0x45dea0u: goto label_45dea0;
        case 0x45dea4u: goto label_45dea4;
        case 0x45dea8u: goto label_45dea8;
        case 0x45deacu: goto label_45deac;
        case 0x45deb0u: goto label_45deb0;
        case 0x45deb4u: goto label_45deb4;
        case 0x45deb8u: goto label_45deb8;
        case 0x45debcu: goto label_45debc;
        case 0x45dec0u: goto label_45dec0;
        case 0x45dec4u: goto label_45dec4;
        case 0x45dec8u: goto label_45dec8;
        case 0x45deccu: goto label_45decc;
        case 0x45ded0u: goto label_45ded0;
        case 0x45ded4u: goto label_45ded4;
        case 0x45ded8u: goto label_45ded8;
        case 0x45dedcu: goto label_45dedc;
        case 0x45dee0u: goto label_45dee0;
        case 0x45dee4u: goto label_45dee4;
        case 0x45dee8u: goto label_45dee8;
        case 0x45deecu: goto label_45deec;
        case 0x45def0u: goto label_45def0;
        case 0x45def4u: goto label_45def4;
        case 0x45def8u: goto label_45def8;
        case 0x45defcu: goto label_45defc;
        case 0x45df00u: goto label_45df00;
        case 0x45df04u: goto label_45df04;
        case 0x45df08u: goto label_45df08;
        case 0x45df0cu: goto label_45df0c;
        case 0x45df10u: goto label_45df10;
        case 0x45df14u: goto label_45df14;
        case 0x45df18u: goto label_45df18;
        case 0x45df1cu: goto label_45df1c;
        case 0x45df20u: goto label_45df20;
        case 0x45df24u: goto label_45df24;
        case 0x45df28u: goto label_45df28;
        case 0x45df2cu: goto label_45df2c;
        case 0x45df30u: goto label_45df30;
        case 0x45df34u: goto label_45df34;
        case 0x45df38u: goto label_45df38;
        case 0x45df3cu: goto label_45df3c;
        case 0x45df40u: goto label_45df40;
        case 0x45df44u: goto label_45df44;
        case 0x45df48u: goto label_45df48;
        case 0x45df4cu: goto label_45df4c;
        case 0x45df50u: goto label_45df50;
        case 0x45df54u: goto label_45df54;
        case 0x45df58u: goto label_45df58;
        case 0x45df5cu: goto label_45df5c;
        case 0x45df60u: goto label_45df60;
        case 0x45df64u: goto label_45df64;
        case 0x45df68u: goto label_45df68;
        case 0x45df6cu: goto label_45df6c;
        case 0x45df70u: goto label_45df70;
        case 0x45df74u: goto label_45df74;
        case 0x45df78u: goto label_45df78;
        case 0x45df7cu: goto label_45df7c;
        case 0x45df80u: goto label_45df80;
        case 0x45df84u: goto label_45df84;
        case 0x45df88u: goto label_45df88;
        case 0x45df8cu: goto label_45df8c;
        case 0x45df90u: goto label_45df90;
        case 0x45df94u: goto label_45df94;
        case 0x45df98u: goto label_45df98;
        case 0x45df9cu: goto label_45df9c;
        case 0x45dfa0u: goto label_45dfa0;
        case 0x45dfa4u: goto label_45dfa4;
        case 0x45dfa8u: goto label_45dfa8;
        case 0x45dfacu: goto label_45dfac;
        case 0x45dfb0u: goto label_45dfb0;
        case 0x45dfb4u: goto label_45dfb4;
        case 0x45dfb8u: goto label_45dfb8;
        case 0x45dfbcu: goto label_45dfbc;
        case 0x45dfc0u: goto label_45dfc0;
        case 0x45dfc4u: goto label_45dfc4;
        case 0x45dfc8u: goto label_45dfc8;
        case 0x45dfccu: goto label_45dfcc;
        case 0x45dfd0u: goto label_45dfd0;
        case 0x45dfd4u: goto label_45dfd4;
        case 0x45dfd8u: goto label_45dfd8;
        case 0x45dfdcu: goto label_45dfdc;
        case 0x45dfe0u: goto label_45dfe0;
        case 0x45dfe4u: goto label_45dfe4;
        case 0x45dfe8u: goto label_45dfe8;
        case 0x45dfecu: goto label_45dfec;
        case 0x45dff0u: goto label_45dff0;
        case 0x45dff4u: goto label_45dff4;
        case 0x45dff8u: goto label_45dff8;
        case 0x45dffcu: goto label_45dffc;
        case 0x45e000u: goto label_45e000;
        case 0x45e004u: goto label_45e004;
        case 0x45e008u: goto label_45e008;
        case 0x45e00cu: goto label_45e00c;
        case 0x45e010u: goto label_45e010;
        case 0x45e014u: goto label_45e014;
        case 0x45e018u: goto label_45e018;
        case 0x45e01cu: goto label_45e01c;
        case 0x45e020u: goto label_45e020;
        case 0x45e024u: goto label_45e024;
        case 0x45e028u: goto label_45e028;
        case 0x45e02cu: goto label_45e02c;
        case 0x45e030u: goto label_45e030;
        case 0x45e034u: goto label_45e034;
        case 0x45e038u: goto label_45e038;
        case 0x45e03cu: goto label_45e03c;
        case 0x45e040u: goto label_45e040;
        case 0x45e044u: goto label_45e044;
        case 0x45e048u: goto label_45e048;
        case 0x45e04cu: goto label_45e04c;
        case 0x45e050u: goto label_45e050;
        case 0x45e054u: goto label_45e054;
        case 0x45e058u: goto label_45e058;
        case 0x45e05cu: goto label_45e05c;
        case 0x45e060u: goto label_45e060;
        case 0x45e064u: goto label_45e064;
        case 0x45e068u: goto label_45e068;
        case 0x45e06cu: goto label_45e06c;
        case 0x45e070u: goto label_45e070;
        case 0x45e074u: goto label_45e074;
        case 0x45e078u: goto label_45e078;
        case 0x45e07cu: goto label_45e07c;
        case 0x45e080u: goto label_45e080;
        case 0x45e084u: goto label_45e084;
        case 0x45e088u: goto label_45e088;
        case 0x45e08cu: goto label_45e08c;
        case 0x45e090u: goto label_45e090;
        case 0x45e094u: goto label_45e094;
        case 0x45e098u: goto label_45e098;
        case 0x45e09cu: goto label_45e09c;
        case 0x45e0a0u: goto label_45e0a0;
        case 0x45e0a4u: goto label_45e0a4;
        case 0x45e0a8u: goto label_45e0a8;
        case 0x45e0acu: goto label_45e0ac;
        case 0x45e0b0u: goto label_45e0b0;
        case 0x45e0b4u: goto label_45e0b4;
        case 0x45e0b8u: goto label_45e0b8;
        case 0x45e0bcu: goto label_45e0bc;
        case 0x45e0c0u: goto label_45e0c0;
        case 0x45e0c4u: goto label_45e0c4;
        case 0x45e0c8u: goto label_45e0c8;
        case 0x45e0ccu: goto label_45e0cc;
        default: break;
    }

    ctx->pc = 0x45d6b0u;

label_45d6b0:
    // 0x45d6b0: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x45d6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
label_45d6b4:
    // 0x45d6b4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x45d6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_45d6b8:
    // 0x45d6b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x45d6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_45d6bc:
    // 0x45d6bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x45d6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_45d6c0:
    // 0x45d6c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x45d6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_45d6c4:
    // 0x45d6c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x45d6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_45d6c8:
    // 0x45d6c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45d6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_45d6cc:
    // 0x45d6cc: 0xafa40190  sw          $a0, 0x190($sp)
    ctx->pc = 0x45d6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 4));
label_45d6d0:
    // 0x45d6d0: 0xafa501a0  sw          $a1, 0x1A0($sp)
    ctx->pc = 0x45d6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 5));
label_45d6d4:
    // 0x45d6d4: 0xafa601b0  sw          $a2, 0x1B0($sp)
    ctx->pc = 0x45d6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 6));
label_45d6d8:
    // 0x45d6d8: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x45d6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_45d6dc:
    // 0x45d6dc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x45d6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45d6e0:
    // 0x45d6e0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45d6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45d6e4:
    // 0x45d6e4: 0x24424c80  addiu       $v0, $v0, 0x4C80
    ctx->pc = 0x45d6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19584));
label_45d6e8:
    // 0x45d6e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45d6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45d6ec:
    // 0x45d6ec: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x45d6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45d6f0:
    // 0x45d6f0: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_45d6f4:
    if (ctx->pc == 0x45D6F4u) {
        ctx->pc = 0x45D6F8u;
        goto label_45d6f8;
    }
    ctx->pc = 0x45D6F0u;
    {
        const bool branch_taken_0x45d6f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x45d6f0) {
            ctx->pc = 0x45D704u;
            goto label_45d704;
        }
    }
    ctx->pc = 0x45D6F8u;
label_45d6f8:
    // 0x45d6f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x45d6f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45d6fc:
    // 0x45d6fc: 0x1000026b  b           . + 4 + (0x26B << 2)
label_45d700:
    if (ctx->pc == 0x45D700u) {
        ctx->pc = 0x45D704u;
        goto label_45d704;
    }
    ctx->pc = 0x45D6FCu;
    {
        const bool branch_taken_0x45d6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45d6fc) {
            ctx->pc = 0x45E0ACu;
            goto label_45e0ac;
        }
    }
    ctx->pc = 0x45D704u;
label_45d704:
    // 0x45d704: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x45d704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_45d708:
    // 0x45d708: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x45d708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45d70c:
    // 0x45d70c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45d70cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45d710:
    // 0x45d710: 0x8c43e988  lw          $v1, -0x1678($v0)
    ctx->pc = 0x45d710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961544)));
label_45d714:
    // 0x45d714: 0x60f809  jalr        $v1
label_45d718:
    if (ctx->pc == 0x45D718u) {
        ctx->pc = 0x45D71Cu;
        goto label_45d71c;
    }
    ctx->pc = 0x45D714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x45D71Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45D714u, 0x45D71Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x45D71Cu;
label_45d71c:
    // 0x45d71c: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x45d71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_45d720:
    // 0x45d720: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x45d720u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_45d724:
    // 0x45d724: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x45d724u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_45d728:
    // 0x45d728: 0x24844c80  addiu       $a0, $a0, 0x4C80
    ctx->pc = 0x45d728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19584));
label_45d72c:
    // 0x45d72c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x45d72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_45d730:
    // 0x45d730: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x45d730u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_45d734:
    // 0x45d734: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x45d734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_45d738:
    // 0x45d738: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x45d738u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45d73c:
    // 0x45d73c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45d73cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45d740:
    // 0x45d740: 0x24424c80  addiu       $v0, $v0, 0x4C80
    ctx->pc = 0x45d740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19584));
label_45d744:
    // 0x45d744: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45d744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45d748:
    // 0x45d748: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45d748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45d74c:
    // 0x45d74c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_45d750:
    if (ctx->pc == 0x45D750u) {
        ctx->pc = 0x45D754u;
        goto label_45d754;
    }
    ctx->pc = 0x45D74Cu;
    {
        const bool branch_taken_0x45d74c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45d74c) {
            ctx->pc = 0x45D760u;
            goto label_45d760;
        }
    }
    ctx->pc = 0x45D754u;
label_45d754:
    // 0x45d754: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x45d754u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45d758:
    // 0x45d758: 0x10000254  b           . + 4 + (0x254 << 2)
label_45d75c:
    if (ctx->pc == 0x45D75Cu) {
        ctx->pc = 0x45D760u;
        goto label_45d760;
    }
    ctx->pc = 0x45D758u;
    {
        const bool branch_taken_0x45d758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45d758) {
            ctx->pc = 0x45E0ACu;
            goto label_45e0ac;
        }
    }
    ctx->pc = 0x45D760u;
label_45d760:
    // 0x45d760: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x45d760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_45d764:
    // 0x45d764: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_45d768:
    if (ctx->pc == 0x45D768u) {
        ctx->pc = 0x45D76Cu;
        goto label_45d76c;
    }
    ctx->pc = 0x45D764u;
    {
        const bool branch_taken_0x45d764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x45d764) {
            ctx->pc = 0x45D7A0u;
            goto label_45d7a0;
        }
    }
    ctx->pc = 0x45D76Cu;
label_45d76c:
    // 0x45d76c: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x45d76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_45d770:
    // 0x45d770: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x45d770u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45d774:
    // 0x45d774: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x45d774u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
label_45d778:
    // 0x45d778: 0x24c64c80  addiu       $a2, $a2, 0x4C80
    ctx->pc = 0x45d778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19584));
label_45d77c:
    // 0x45d77c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x45d77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_45d780:
    // 0x45d780: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x45d780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45d784:
    // 0x45d784: 0x8fa501a0  lw          $a1, 0x1A0($sp)
    ctx->pc = 0x45d784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_45d788:
    // 0x45d788: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45d788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45d78c:
    // 0x45d78c: 0x8c42e94c  lw          $v0, -0x16B4($v0)
    ctx->pc = 0x45d78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961484)));
label_45d790:
    // 0x45d790: 0x40f809  jalr        $v0
label_45d794:
    if (ctx->pc == 0x45D794u) {
        ctx->pc = 0x45D798u;
        goto label_45d798;
    }
    ctx->pc = 0x45D790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x45D798u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45D790u, 0x45D798u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x45D798u;
label_45d798:
    // 0x45d798: 0x10000028  b           . + 4 + (0x28 << 2)
label_45d79c:
    if (ctx->pc == 0x45D79Cu) {
        ctx->pc = 0x45D7A0u;
        goto label_45d7a0;
    }
    ctx->pc = 0x45D798u;
    {
        const bool branch_taken_0x45d798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45d798) {
            ctx->pc = 0x45D83Cu;
            goto label_45d83c;
        }
    }
    ctx->pc = 0x45D7A0u;
label_45d7a0:
    // 0x45d7a0: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x45d7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_45d7a4:
    // 0x45d7a4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x45d7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45d7a8:
    // 0x45d7a8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45d7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45d7ac:
    // 0x45d7ac: 0x24424c80  addiu       $v0, $v0, 0x4C80
    ctx->pc = 0x45d7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19584));
label_45d7b0:
    // 0x45d7b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45d7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45d7b4:
    // 0x45d7b4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x45d7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45d7b8:
    // 0x45d7b8: 0x8fa50190  lw          $a1, 0x190($sp)
    ctx->pc = 0x45d7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_45d7bc:
    // 0x45d7bc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45d7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45d7c0:
    // 0x45d7c0: 0x8c43e94c  lw          $v1, -0x16B4($v0)
    ctx->pc = 0x45d7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961484)));
label_45d7c4:
    // 0x45d7c4: 0x60f809  jalr        $v1
label_45d7c8:
    if (ctx->pc == 0x45D7C8u) {
        ctx->pc = 0x45D7CCu;
        goto label_45d7cc;
    }
    ctx->pc = 0x45D7C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x45D7CCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45D7C4u, 0x45D7CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x45D7CCu;
label_45d7cc:
    // 0x45d7cc: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x45d7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_45d7d0:
    // 0x45d7d0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x45d7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45d7d4:
    // 0x45d7d4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45d7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45d7d8:
    // 0x45d7d8: 0x24424c80  addiu       $v0, $v0, 0x4C80
    ctx->pc = 0x45d7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19584));
label_45d7dc:
    // 0x45d7dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45d7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45d7e0:
    // 0x45d7e0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x45d7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45d7e4:
    // 0x45d7e4: 0x2405002e  addiu       $a1, $zero, 0x2E
    ctx->pc = 0x45d7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_45d7e8:
    // 0x45d7e8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45d7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45d7ec:
    // 0x45d7ec: 0x8c43e95c  lw          $v1, -0x16A4($v0)
    ctx->pc = 0x45d7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961500)));
label_45d7f0:
    // 0x45d7f0: 0x60f809  jalr        $v1
label_45d7f4:
    if (ctx->pc == 0x45D7F4u) {
        ctx->pc = 0x45D7F8u;
        goto label_45d7f8;
    }
    ctx->pc = 0x45D7F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x45D7F8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45D7F0u, 0x45D7F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x45D7F8u;
label_45d7f8:
    // 0x45d7f8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x45d7f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45d7fc:
    // 0x45d7fc: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
label_45d800:
    if (ctx->pc == 0x45D800u) {
        ctx->pc = 0x45D804u;
        goto label_45d804;
    }
    ctx->pc = 0x45D7FCu;
    {
        const bool branch_taken_0x45d7fc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x45d7fc) {
            ctx->pc = 0x45D808u;
            goto label_45d808;
        }
    }
    ctx->pc = 0x45D804u;
label_45d804:
    // 0x45d804: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x45d804u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
label_45d808:
    // 0x45d808: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x45d808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_45d80c:
    // 0x45d80c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x45d80cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45d810:
    // 0x45d810: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x45d810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_45d814:
    // 0x45d814: 0x24634c80  addiu       $v1, $v1, 0x4C80
    ctx->pc = 0x45d814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19584));
label_45d818:
    // 0x45d818: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x45d818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_45d81c:
    // 0x45d81c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45d81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45d820:
    // 0x45d820: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x45d820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45d824:
    // 0x45d824: 0x2785b160  addiu       $a1, $gp, -0x4EA0
    ctx->pc = 0x45d824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947168));
label_45d828:
    // 0x45d828: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x45d828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45d82c:
    // 0x45d82c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45d82cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45d830:
    // 0x45d830: 0x8c42e958  lw          $v0, -0x16A8($v0)
    ctx->pc = 0x45d830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961496)));
label_45d834:
    // 0x45d834: 0x40f809  jalr        $v0
label_45d838:
    if (ctx->pc == 0x45D838u) {
        ctx->pc = 0x45D83Cu;
        goto label_45d83c;
    }
    ctx->pc = 0x45D834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x45D83Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45D834u, 0x45D83Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x45D83Cu;
label_45d83c:
    // 0x45d83c: 0x8fb101b0  lw          $s1, 0x1B0($sp)
    ctx->pc = 0x45d83cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_45d840:
    // 0x45d840: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x45d840u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_45d844:
    // 0x45d844: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x45d844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_45d848:
    // 0x45d848: 0x24634c80  addiu       $v1, $v1, 0x4C80
    ctx->pc = 0x45d848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19584));
label_45d84c:
    // 0x45d84c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x45d84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_45d850:
    // 0x45d850: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45d850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45d854:
    // 0x45d854: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x45d854u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
label_45d858:
    // 0x45d858: 0x8fa501b0  lw          $a1, 0x1B0($sp)
    ctx->pc = 0x45d858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_45d85c:
    // 0x45d85c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x45d85cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_45d860:
    // 0x45d860: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x45d860u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_45d864:
    // 0x45d864: 0x24634c80  addiu       $v1, $v1, 0x4C80
    ctx->pc = 0x45d864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19584));
label_45d868:
    // 0x45d868: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x45d868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_45d86c:
    // 0x45d86c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45d86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45d870:
    // 0x45d870: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x45d870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_45d874:
    // 0x45d874: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x45d874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45d878:
    // 0x45d878: 0xc116f64  jal         func_45BD90
label_45d87c:
    if (ctx->pc == 0x45D87Cu) {
        ctx->pc = 0x45D880u;
        goto label_45d880;
    }
    ctx->pc = 0x45D878u;
    SET_GPR_U32(ctx, 31, 0x45D880u);
    ctx->pc = 0x45BD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45BD90u, 0x45D878u, 0x45D880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45D880u;
label_45d880:
    // 0x45d880: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x45d880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_45d884:
    // 0x45d884: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x45d884u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_45d888:
    // 0x45d888: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x45d888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_45d88c:
    // 0x45d88c: 0x24634c80  addiu       $v1, $v1, 0x4C80
    ctx->pc = 0x45d88cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19584));
label_45d890:
    // 0x45d890: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x45d890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_45d894:
    // 0x45d894: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45d894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45d898:
    // 0x45d898: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x45d898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_45d89c:
    // 0x45d89c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x45d89cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45d8a0:
    // 0x45d8a0: 0xc116f64  jal         func_45BD90
label_45d8a4:
    if (ctx->pc == 0x45D8A4u) {
        ctx->pc = 0x45D8A8u;
        goto label_45d8a8;
    }
    ctx->pc = 0x45D8A0u;
    SET_GPR_U32(ctx, 31, 0x45D8A8u);
    ctx->pc = 0x45BD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45BD90u, 0x45D8A0u, 0x45D8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45D8A8u;
label_45d8a8:
    // 0x45d8a8: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x45d8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_45d8ac:
    // 0x45d8ac: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x45d8acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_45d8b0:
    // 0x45d8b0: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x45d8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_45d8b4:
    // 0x45d8b4: 0x24634c80  addiu       $v1, $v1, 0x4C80
    ctx->pc = 0x45d8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19584));
label_45d8b8:
    // 0x45d8b8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x45d8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_45d8bc:
    // 0x45d8bc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x45d8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45d8c0:
    // 0x45d8c0: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x45d8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
label_45d8c4:
    // 0x45d8c4: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x45d8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_45d8c8:
    // 0x45d8c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x45d8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45d8cc:
    // 0x45d8cc: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x45d8ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
label_45d8d0:
    // 0x45d8d0: 0x24c64c80  addiu       $a2, $a2, 0x4C80
    ctx->pc = 0x45d8d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19584));
label_45d8d4:
    // 0x45d8d4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x45d8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_45d8d8:
    // 0x45d8d8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x45d8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45d8dc:
    // 0x45d8dc: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x45d8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
label_45d8e0:
    // 0x45d8e0: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x45d8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_45d8e4:
    // 0x45d8e4: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x45d8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45d8e8:
    // 0x45d8e8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45d8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45d8ec:
    // 0x45d8ec: 0x24424c80  addiu       $v0, $v0, 0x4C80
    ctx->pc = 0x45d8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19584));
label_45d8f0:
    // 0x45d8f0: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x45d8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_45d8f4:
    // 0x45d8f4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x45d8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_45d8f8:
    // 0x45d8f8: 0xac400048  sw          $zero, 0x48($v0)
    ctx->pc = 0x45d8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
label_45d8fc:
    // 0x45d8fc: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x45d8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_45d900:
    // 0x45d900: 0x2785b164  addiu       $a1, $gp, -0x4E9C
    ctx->pc = 0x45d900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947172));
label_45d904:
    // 0x45d904: 0xc0f0ab6  jal         func_3C2AD8
label_45d908:
    if (ctx->pc == 0x45D908u) {
        ctx->pc = 0x45D90Cu;
        goto label_45d90c;
    }
    ctx->pc = 0x45D904u;
    SET_GPR_U32(ctx, 31, 0x45D90Cu);
    ctx->pc = 0x3C2AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2AD8u, 0x45D904u, 0x45D90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45D90Cu;
label_45d90c:
    // 0x45d90c: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x45d90cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_45d910:
    // 0x45d910: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x45d910u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_45d914:
    // 0x45d914: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x45d914u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
label_45d918:
    // 0x45d918: 0x26104c80  addiu       $s0, $s0, 0x4C80
    ctx->pc = 0x45d918u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19584));
label_45d91c:
    // 0x45d91c: 0x2041821  addu        $v1, $s0, $a0
    ctx->pc = 0x45d91cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_45d920:
    // 0x45d920: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x45d920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_45d924:
    // 0x45d924: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x45d924u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_45d928:
    // 0x45d928: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x45d928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_45d92c:
    // 0x45d92c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x45d92cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45d930:
    // 0x45d930: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x45d930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_45d934:
    // 0x45d934: 0x24634c80  addiu       $v1, $v1, 0x4C80
    ctx->pc = 0x45d934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19584));
label_45d938:
    // 0x45d938: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x45d938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_45d93c:
    // 0x45d93c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45d93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45d940:
    // 0x45d940: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x45d940u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_45d944:
    // 0x45d944: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
label_45d948:
    if (ctx->pc == 0x45D948u) {
        ctx->pc = 0x45D94Cu;
        goto label_45d94c;
    }
    ctx->pc = 0x45D944u;
    {
        const bool branch_taken_0x45d944 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x45d944) {
            ctx->pc = 0x45D964u;
            goto label_45d964;
        }
    }
    ctx->pc = 0x45D94Cu;
label_45d94c:
    // 0x45d94c: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x45d94cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_45d950:
    // 0x45d950: 0xc117540  jal         func_45D500
label_45d954:
    if (ctx->pc == 0x45D954u) {
        ctx->pc = 0x45D958u;
        goto label_45d958;
    }
    ctx->pc = 0x45D950u;
    SET_GPR_U32(ctx, 31, 0x45D958u);
    ctx->pc = 0x45D500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45D500u, 0x45D950u, 0x45D958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45D958u;
label_45d958:
    // 0x45d958: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x45d958u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45d95c:
    // 0x45d95c: 0x100001d3  b           . + 4 + (0x1D3 << 2)
label_45d960:
    if (ctx->pc == 0x45D960u) {
        ctx->pc = 0x45D964u;
        goto label_45d964;
    }
    ctx->pc = 0x45D95Cu;
    {
        const bool branch_taken_0x45d95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45d95c) {
            ctx->pc = 0x45E0ACu;
            goto label_45e0ac;
        }
    }
    ctx->pc = 0x45D964u;
label_45d964:
    // 0x45d964: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x45d964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_45d968:
    // 0x45d968: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x45d968u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_45d96c:
    // 0x45d96c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45d96cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45d970:
    // 0x45d970: 0x24424c80  addiu       $v0, $v0, 0x4C80
    ctx->pc = 0x45d970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19584));
label_45d974:
    // 0x45d974: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x45d974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45d978:
    // 0x45d978: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x45d978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_45d97c:
    // 0x45d97c: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x45d97cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_45d980:
    // 0x45d980: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x45d980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45d984:
    // 0x45d984: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x45d984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45d988:
    // 0x45d988: 0xc0f0b30  jal         func_3C2CC0
label_45d98c:
    if (ctx->pc == 0x45D98Cu) {
        ctx->pc = 0x45D990u;
        goto label_45d990;
    }
    ctx->pc = 0x45D988u;
    SET_GPR_U32(ctx, 31, 0x45D990u);
    ctx->pc = 0x3C2CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2CC0u, 0x45D988u, 0x45D990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45D990u;
label_45d990:
    // 0x45d990: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x45d990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_45d994:
    // 0x45d994: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x45d994u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_45d998:
    // 0x45d998: 0x3c110062  lui         $s1, 0x62
    ctx->pc = 0x45d998u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)98 << 16));
label_45d99c:
    // 0x45d99c: 0x26314c80  addiu       $s1, $s1, 0x4C80
    ctx->pc = 0x45d99cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 19584));
label_45d9a0:
    // 0x45d9a0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x45d9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_45d9a4:
    // 0x45d9a4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45d9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45d9a8:
    // 0x45d9a8: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x45d9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_45d9ac:
    // 0x45d9ac: 0x3c057fff  lui         $a1, 0x7FFF
    ctx->pc = 0x45d9acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32767 << 16));
label_45d9b0:
    // 0x45d9b0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x45d9b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_45d9b4:
    // 0x45d9b4: 0xc116f64  jal         func_45BD90
label_45d9b8:
    if (ctx->pc == 0x45D9B8u) {
        ctx->pc = 0x45D9BCu;
        goto label_45d9bc;
    }
    ctx->pc = 0x45D9B4u;
    SET_GPR_U32(ctx, 31, 0x45D9BCu);
    ctx->pc = 0x45BD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45BD90u, 0x45D9B4u, 0x45D9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45D9BCu;
label_45d9bc:
    // 0x45d9bc: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x45d9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_45d9c0:
    // 0x45d9c0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x45d9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45d9c4:
    // 0x45d9c4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45d9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45d9c8:
    // 0x45d9c8: 0x24424c80  addiu       $v0, $v0, 0x4C80
    ctx->pc = 0x45d9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19584));
label_45d9cc:
    // 0x45d9cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45d9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45d9d0:
    // 0x45d9d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45d9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45d9d4:
    // 0x45d9d4: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x45d9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_45d9d8:
    // 0x45d9d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x45d9d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45d9dc:
    // 0x45d9dc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x45d9dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45d9e0:
    // 0x45d9e0: 0xc0f0b30  jal         func_3C2CC0
label_45d9e4:
    if (ctx->pc == 0x45D9E4u) {
        ctx->pc = 0x45D9E8u;
        goto label_45d9e8;
    }
    ctx->pc = 0x45D9E0u;
    SET_GPR_U32(ctx, 31, 0x45D9E8u);
    ctx->pc = 0x3C2CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2CC0u, 0x45D9E0u, 0x45D9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45D9E8u;
label_45d9e8:
    // 0x45d9e8: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x45d9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_45d9ec:
    // 0x45d9ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x45d9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_45d9f0:
    // 0x45d9f0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45d9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45d9f4:
    // 0x45d9f4: 0x24424c80  addiu       $v0, $v0, 0x4C80
    ctx->pc = 0x45d9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19584));
label_45d9f8:
    // 0x45d9f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45d9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45d9fc:
    // 0x45d9fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45d9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45da00:
    // 0x45da00: 0x27a4018c  addiu       $a0, $sp, 0x18C
    ctx->pc = 0x45da00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
label_45da04:
    // 0x45da04: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x45da04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_45da08:
    // 0x45da08: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x45da08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45da0c:
    // 0x45da0c: 0x8c470010  lw          $a3, 0x10($v0)
    ctx->pc = 0x45da0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_45da10:
    // 0x45da10: 0xc0f0b08  jal         func_3C2C20
label_45da14:
    if (ctx->pc == 0x45DA14u) {
        ctx->pc = 0x45DA18u;
        goto label_45da18;
    }
    ctx->pc = 0x45DA10u;
    SET_GPR_U32(ctx, 31, 0x45DA18u);
    ctx->pc = 0x3C2C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2C20u, 0x45DA10u, 0x45DA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45DA18u;
label_45da18:
    // 0x45da18: 0x8fa3018c  lw          $v1, 0x18C($sp)
    ctx->pc = 0x45da18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
label_45da1c:
    // 0x45da1c: 0x3c024b43  lui         $v0, 0x4B43
    ctx->pc = 0x45da1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19267 << 16));
label_45da20:
    // 0x45da20: 0x34464150  ori         $a2, $v0, 0x4150
    ctx->pc = 0x45da20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16720);
label_45da24:
    // 0x45da24: 0x10660007  beq         $v1, $a2, . + 4 + (0x7 << 2)
label_45da28:
    if (ctx->pc == 0x45DA28u) {
        ctx->pc = 0x45DA2Cu;
        goto label_45da2c;
    }
    ctx->pc = 0x45DA24u;
    {
        const bool branch_taken_0x45da24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x45da24) {
            ctx->pc = 0x45DA44u;
            goto label_45da44;
        }
    }
    ctx->pc = 0x45DA2Cu;
label_45da2c:
    // 0x45da2c: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x45da2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_45da30:
    // 0x45da30: 0xc117540  jal         func_45D500
label_45da34:
    if (ctx->pc == 0x45DA34u) {
        ctx->pc = 0x45DA38u;
        goto label_45da38;
    }
    ctx->pc = 0x45DA30u;
    SET_GPR_U32(ctx, 31, 0x45DA38u);
    ctx->pc = 0x45D500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45D500u, 0x45DA30u, 0x45DA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45DA38u;
label_45da38:
    // 0x45da38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x45da38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45da3c:
    // 0x45da3c: 0x1000019b  b           . + 4 + (0x19B << 2)
label_45da40:
    if (ctx->pc == 0x45DA40u) {
        ctx->pc = 0x45DA44u;
        goto label_45da44;
    }
    ctx->pc = 0x45DA3Cu;
    {
        const bool branch_taken_0x45da3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45da3c) {
            ctx->pc = 0x45E0ACu;
            goto label_45e0ac;
        }
    }
    ctx->pc = 0x45DA44u;
label_45da44:
    // 0x45da44: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x45da44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_45da48:
    // 0x45da48: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x45da48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45da4c:
    // 0x45da4c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x45da4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_45da50:
    // 0x45da50: 0x24634c80  addiu       $v1, $v1, 0x4C80
    ctx->pc = 0x45da50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19584));
label_45da54:
    // 0x45da54: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x45da54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_45da58:
    // 0x45da58: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x45da58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45da5c:
    // 0x45da5c: 0x27a40188  addiu       $a0, $sp, 0x188
    ctx->pc = 0x45da5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
label_45da60:
    // 0x45da60: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x45da60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_45da64:
    // 0x45da64: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x45da64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45da68:
    // 0x45da68: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x45da68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45da6c:
    // 0x45da6c: 0x8c670010  lw          $a3, 0x10($v1)
    ctx->pc = 0x45da6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_45da70:
    // 0x45da70: 0xc0f0b08  jal         func_3C2C20
label_45da74:
    if (ctx->pc == 0x45DA74u) {
        ctx->pc = 0x45DA78u;
        goto label_45da78;
    }
    ctx->pc = 0x45DA70u;
    SET_GPR_U32(ctx, 31, 0x45DA78u);
    ctx->pc = 0x3C2C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2C20u, 0x45DA70u, 0x45DA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45DA78u;
label_45da78:
    // 0x45da78: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x45da78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_45da7c:
    // 0x45da7c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x45da7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45da80:
    // 0x45da80: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x45da80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_45da84:
    // 0x45da84: 0x24634c80  addiu       $v1, $v1, 0x4C80
    ctx->pc = 0x45da84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19584));
label_45da88:
    // 0x45da88: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x45da88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_45da8c:
    // 0x45da8c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45da8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45da90:
    // 0x45da90: 0x27a40184  addiu       $a0, $sp, 0x184
    ctx->pc = 0x45da90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
label_45da94:
    // 0x45da94: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x45da94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_45da98:
    // 0x45da98: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x45da98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45da9c:
    // 0x45da9c: 0x8c470010  lw          $a3, 0x10($v0)
    ctx->pc = 0x45da9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_45daa0:
    // 0x45daa0: 0xc0f0b08  jal         func_3C2C20
label_45daa4:
    if (ctx->pc == 0x45DAA4u) {
        ctx->pc = 0x45DAA8u;
        goto label_45daa8;
    }
    ctx->pc = 0x45DAA0u;
    SET_GPR_U32(ctx, 31, 0x45DAA8u);
    ctx->pc = 0x3C2C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2C20u, 0x45DAA0u, 0x45DAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45DAA8u;
label_45daa8:
    // 0x45daa8: 0x8fa30184  lw          $v1, 0x184($sp)
    ctx->pc = 0x45daa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
label_45daac:
    // 0x45daac: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x45daacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_45dab0:
    // 0x45dab0: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x45dab0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_45dab4:
    // 0x45dab4: 0x1012  mflo        $v0
    ctx->pc = 0x45dab4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_45dab8:
    // 0x45dab8: 0xafa20184  sw          $v0, 0x184($sp)
    ctx->pc = 0x45dab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 2));
label_45dabc:
    // 0x45dabc: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x45dabcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_45dac0:
    // 0x45dac0: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x45dac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_45dac4:
    // 0x45dac4: 0x27a60178  addiu       $a2, $sp, 0x178
    ctx->pc = 0x45dac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
label_45dac8:
    // 0x45dac8: 0xc115ee8  jal         func_457BA0
label_45dacc:
    if (ctx->pc == 0x45DACCu) {
        ctx->pc = 0x45DAD0u;
        goto label_45dad0;
    }
    ctx->pc = 0x45DAC8u;
    SET_GPR_U32(ctx, 31, 0x45DAD0u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x45DAC8u, 0x45DAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45DAD0u;
label_45dad0:
    // 0x45dad0: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_45dad4:
    if (ctx->pc == 0x45DAD4u) {
        ctx->pc = 0x45DAD8u;
        goto label_45dad8;
    }
    ctx->pc = 0x45DAD0u;
    {
        const bool branch_taken_0x45dad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45dad0) {
            ctx->pc = 0x45DB54u;
            goto label_45db54;
        }
    }
    ctx->pc = 0x45DAD8u;
label_45dad8:
    // 0x45dad8: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x45dad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_45dadc:
    // 0x45dadc: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_45dae0:
    if (ctx->pc == 0x45DAE0u) {
        ctx->pc = 0x45DAE4u;
        goto label_45dae4;
    }
    ctx->pc = 0x45DADCu;
    {
        const bool branch_taken_0x45dadc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45dadc) {
            ctx->pc = 0x45DB54u;
            goto label_45db54;
        }
    }
    ctx->pc = 0x45DAE4u;
label_45dae4:
    // 0x45dae4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x45dae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_45dae8:
    // 0x45dae8: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x45dae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_45daec:
    // 0x45daec: 0x8fa6017c  lw          $a2, 0x17C($sp)
    ctx->pc = 0x45daecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
label_45daf0:
    // 0x45daf0: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x45daf0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_45daf4:
    // 0x45daf4: 0x24e7ec30  addiu       $a3, $a3, -0x13D0
    ctx->pc = 0x45daf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962224));
label_45daf8:
    // 0x45daf8: 0x24080515  addiu       $t0, $zero, 0x515
    ctx->pc = 0x45daf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1301));
label_45dafc:
    // 0x45dafc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x45dafcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45db00:
    // 0x45db00: 0xc113940  jal         func_44E500
label_45db04:
    if (ctx->pc == 0x45DB04u) {
        ctx->pc = 0x45DB08u;
        goto label_45db08;
    }
    ctx->pc = 0x45DB00u;
    SET_GPR_U32(ctx, 31, 0x45DB08u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x45DB00u, 0x45DB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45DB08u;
label_45db08:
    // 0x45db08: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x45db08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_45db0c:
    // 0x45db0c: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x45db0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_45db10:
    // 0x45db10: 0x24a5ec60  addiu       $a1, $a1, -0x13A0
    ctx->pc = 0x45db10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962272));
label_45db14:
    // 0x45db14: 0x8fa60184  lw          $a2, 0x184($sp)
    ctx->pc = 0x45db14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
label_45db18:
    // 0x45db18: 0xc115c24  jal         func_457090
label_45db1c:
    if (ctx->pc == 0x45DB1Cu) {
        ctx->pc = 0x45DB20u;
        goto label_45db20;
    }
    ctx->pc = 0x45DB18u;
    SET_GPR_U32(ctx, 31, 0x45DB20u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x45DB18u, 0x45DB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45DB20u;
label_45db20:
    // 0x45db20: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x45db20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_45db24:
    // 0x45db24: 0x8fb40180  lw          $s4, 0x180($sp)
    ctx->pc = 0x45db24u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_45db28:
    // 0x45db28: 0x280f809  jalr        $s4
label_45db2c:
    if (ctx->pc == 0x45DB2Cu) {
        ctx->pc = 0x45DB30u;
        goto label_45db30;
    }
    ctx->pc = 0x45DB28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x45DB30u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45DB28u, 0x45DB30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x45DB30u;
label_45db30:
    // 0x45db30: 0x8fa60060  lw          $a2, 0x60($sp)
    ctx->pc = 0x45db30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_45db34:
    // 0x45db34: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_45db38:
    if (ctx->pc == 0x45DB38u) {
        ctx->pc = 0x45DB3Cu;
        goto label_45db3c;
    }
    ctx->pc = 0x45DB34u;
    {
        const bool branch_taken_0x45db34 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x45db34) {
            ctx->pc = 0x45DB44u;
            goto label_45db44;
        }
    }
    ctx->pc = 0x45DB3Cu;
label_45db3c:
    // 0x45db3c: 0xd  break       0
    ctx->pc = 0x45db3cu;
    runtime->handleBreak(rdram, ctx);
label_45db40:
    // 0x45db40: 0x0  nop
    ctx->pc = 0x45db40u;
    // NOP
label_45db44:
    // 0x45db44: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x45db44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_45db48:
    // 0x45db48: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x45db48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45db4c:
    // 0x45db4c: 0xc11392c  jal         func_44E4B0
label_45db50:
    if (ctx->pc == 0x45DB50u) {
        ctx->pc = 0x45DB54u;
        goto label_45db54;
    }
    ctx->pc = 0x45DB4Cu;
    SET_GPR_U32(ctx, 31, 0x45DB54u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x45DB4Cu, 0x45DB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45DB54u;
label_45db54:
    // 0x45db54: 0x8fa30184  lw          $v1, 0x184($sp)
    ctx->pc = 0x45db54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
label_45db58:
    // 0x45db58: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x45db58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_45db5c:
    // 0x45db5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45db5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45db60:
    // 0x45db60: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x45db60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_45db64:
    // 0x45db64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x45db64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45db68:
    // 0x45db68: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45db68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45db6c:
    // 0x45db6c: 0x8c42e988  lw          $v0, -0x1678($v0)
    ctx->pc = 0x45db6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961544)));
label_45db70:
    // 0x45db70: 0x40f809  jalr        $v0
label_45db74:
    if (ctx->pc == 0x45DB74u) {
        ctx->pc = 0x45DB78u;
        goto label_45db78;
    }
    ctx->pc = 0x45DB70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x45DB78u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45DB70u, 0x45DB78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x45DB78u;
label_45db78:
    // 0x45db78: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x45db78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_45db7c:
    // 0x45db7c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x45db7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_45db80:
    // 0x45db80: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x45db80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_45db84:
    // 0x45db84: 0x24634c80  addiu       $v1, $v1, 0x4C80
    ctx->pc = 0x45db84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19584));
label_45db88:
    // 0x45db88: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x45db88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_45db8c:
    // 0x45db8c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x45db8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_45db90:
    // 0x45db90: 0xac620044  sw          $v0, 0x44($v1)
    ctx->pc = 0x45db90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 2));
label_45db94:
    // 0x45db94: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x45db94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_45db98:
    // 0x45db98: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x45db98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45db9c:
    // 0x45db9c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45db9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45dba0:
    // 0x45dba0: 0x24424c80  addiu       $v0, $v0, 0x4C80
    ctx->pc = 0x45dba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19584));
label_45dba4:
    // 0x45dba4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45dba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45dba8:
    // 0x45dba8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45dba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45dbac:
    // 0x45dbac: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x45dbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_45dbb0:
    // 0x45dbb0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_45dbb4:
    if (ctx->pc == 0x45DBB4u) {
        ctx->pc = 0x45DBB8u;
        goto label_45dbb8;
    }
    ctx->pc = 0x45DBB0u;
    {
        const bool branch_taken_0x45dbb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45dbb0) {
            ctx->pc = 0x45DBD0u;
            goto label_45dbd0;
        }
    }
    ctx->pc = 0x45DBB8u;
label_45dbb8:
    // 0x45dbb8: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x45dbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_45dbbc:
    // 0x45dbbc: 0xc117540  jal         func_45D500
label_45dbc0:
    if (ctx->pc == 0x45DBC0u) {
        ctx->pc = 0x45DBC4u;
        goto label_45dbc4;
    }
    ctx->pc = 0x45DBBCu;
    SET_GPR_U32(ctx, 31, 0x45DBC4u);
    ctx->pc = 0x45D500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45D500u, 0x45DBBCu, 0x45DBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45DBC4u;
label_45dbc4:
    // 0x45dbc4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x45dbc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45dbc8:
    // 0x45dbc8: 0x10000138  b           . + 4 + (0x138 << 2)
label_45dbcc:
    if (ctx->pc == 0x45DBCCu) {
        ctx->pc = 0x45DBD0u;
        goto label_45dbd0;
    }
    ctx->pc = 0x45DBC8u;
    {
        const bool branch_taken_0x45dbc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45dbc8) {
            ctx->pc = 0x45E0ACu;
            goto label_45e0ac;
        }
    }
    ctx->pc = 0x45DBD0u;
label_45dbd0:
    // 0x45dbd0: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x45dbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_45dbd4:
    // 0x45dbd4: 0x29e3c  dsll32      $s3, $v0, 24
    ctx->pc = 0x45dbd4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 24));
label_45dbd8:
    // 0x45dbd8: 0x139e3f  dsra32      $s3, $s3, 24
    ctx->pc = 0x45dbd8u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 24));
label_45dbdc:
    // 0x45dbdc: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x45dbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_45dbe0:
    // 0x45dbe0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x45dbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45dbe4:
    // 0x45dbe4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45dbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45dbe8:
    // 0x45dbe8: 0x24424c80  addiu       $v0, $v0, 0x4C80
    ctx->pc = 0x45dbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19584));
label_45dbec:
    // 0x45dbec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45dbecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45dbf0:
    // 0x45dbf0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x45dbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45dbf4:
    // 0x45dbf4: 0x8fa50188  lw          $a1, 0x188($sp)
    ctx->pc = 0x45dbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_45dbf8:
    // 0x45dbf8: 0xc117090  jal         func_45C240
label_45dbfc:
    if (ctx->pc == 0x45DBFCu) {
        ctx->pc = 0x45DC00u;
        goto label_45dc00;
    }
    ctx->pc = 0x45DBF8u;
    SET_GPR_U32(ctx, 31, 0x45DC00u);
    ctx->pc = 0x45C240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45C240u, 0x45DBF8u, 0x45DC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45DC00u;
label_45dc00:
    // 0x45dc00: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x45dc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_45dc04:
    // 0x45dc04: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x45dc04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45dc08:
    // 0x45dc08: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45dc08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45dc0c:
    // 0x45dc0c: 0x24424c80  addiu       $v0, $v0, 0x4C80
    ctx->pc = 0x45dc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19584));
label_45dc10:
    // 0x45dc10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45dc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45dc14:
    // 0x45dc14: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45dc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45dc18:
    // 0x45dc18: 0xac400048  sw          $zero, 0x48($v0)
    ctx->pc = 0x45dc18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
label_45dc1c:
    // 0x45dc1c: 0x100000f1  b           . + 4 + (0xF1 << 2)
label_45dc20:
    if (ctx->pc == 0x45DC20u) {
        ctx->pc = 0x45DC24u;
        goto label_45dc24;
    }
    ctx->pc = 0x45DC1Cu;
    {
        const bool branch_taken_0x45dc1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45dc1c) {
            ctx->pc = 0x45DFE4u;
            goto label_45dfe4;
        }
    }
    ctx->pc = 0x45DC24u;
label_45dc24:
    // 0x45dc24: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x45dc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_45dc28:
    // 0x45dc28: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x45dc28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45dc2c:
    // 0x45dc2c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45dc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45dc30:
    // 0x45dc30: 0x24424c80  addiu       $v0, $v0, 0x4C80
    ctx->pc = 0x45dc30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19584));
label_45dc34:
    // 0x45dc34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45dc34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45dc38:
    // 0x45dc38: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x45dc38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45dc3c:
    // 0x45dc3c: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x45dc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_45dc40:
    // 0x45dc40: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x45dc40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45dc44:
    // 0x45dc44: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45dc44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45dc48:
    // 0x45dc48: 0x24424c80  addiu       $v0, $v0, 0x4C80
    ctx->pc = 0x45dc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19584));
label_45dc4c:
    // 0x45dc4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45dc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45dc50:
    // 0x45dc50: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45dc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45dc54:
    // 0x45dc54: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x45dc54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_45dc58:
    // 0x45dc58: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x45dc58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_45dc5c:
    // 0x45dc5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45dc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45dc60:
    // 0x45dc60: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x45dc60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_45dc64:
    // 0x45dc64: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x45dc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_45dc68:
    // 0x45dc68: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x45dc68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45dc6c:
    // 0x45dc6c: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x45dc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_45dc70:
    // 0x45dc70: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x45dc70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45dc74:
    // 0x45dc74: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45dc74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45dc78:
    // 0x45dc78: 0x24424c80  addiu       $v0, $v0, 0x4C80
    ctx->pc = 0x45dc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19584));
label_45dc7c:
    // 0x45dc7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45dc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45dc80:
    // 0x45dc80: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45dc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45dc84:
    // 0x45dc84: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x45dc84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_45dc88:
    // 0x45dc88: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x45dc88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45dc8c:
    // 0x45dc8c: 0x8c470010  lw          $a3, 0x10($v0)
    ctx->pc = 0x45dc8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_45dc90:
    // 0x45dc90: 0xc0f0b08  jal         func_3C2C20
label_45dc94:
    if (ctx->pc == 0x45DC94u) {
        ctx->pc = 0x45DC98u;
        goto label_45dc98;
    }
    ctx->pc = 0x45DC90u;
    SET_GPR_U32(ctx, 31, 0x45DC98u);
    ctx->pc = 0x3C2C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2C20u, 0x45DC90u, 0x45DC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45DC98u;
label_45dc98:
    // 0x45dc98: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x45dc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_45dc9c:
    // 0x45dc9c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x45dc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45dca0:
    // 0x45dca0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45dca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45dca4:
    // 0x45dca4: 0x24424c80  addiu       $v0, $v0, 0x4C80
    ctx->pc = 0x45dca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19584));
label_45dca8:
    // 0x45dca8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45dca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45dcac:
    // 0x45dcac: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x45dcacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45dcb0:
    // 0x45dcb0: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x45dcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_45dcb4:
    // 0x45dcb4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x45dcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_45dcb8:
    // 0x45dcb8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45dcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45dcbc:
    // 0x45dcbc: 0x24424c80  addiu       $v0, $v0, 0x4C80
    ctx->pc = 0x45dcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19584));
label_45dcc0:
    // 0x45dcc0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x45dcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45dcc4:
    // 0x45dcc4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x45dcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_45dcc8:
    // 0x45dcc8: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x45dcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_45dccc:
    // 0x45dccc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x45dcccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_45dcd0:
    // 0x45dcd0: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x45dcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_45dcd4:
    // 0x45dcd4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x45dcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_45dcd8:
    // 0x45dcd8: 0x8ca20044  lw          $v0, 0x44($a1)
    ctx->pc = 0x45dcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
label_45dcdc:
    // 0x45dcdc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45dcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45dce0:
    // 0x45dce0: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x45dce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_45dce4:
    // 0x45dce4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x45dce4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45dce8:
    // 0x45dce8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45dce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45dcec:
    // 0x45dcec: 0x24424c80  addiu       $v0, $v0, 0x4C80
    ctx->pc = 0x45dcecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19584));
label_45dcf0:
    // 0x45dcf0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45dcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45dcf4:
    // 0x45dcf4: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x45dcf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45dcf8:
    // 0x45dcf8: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x45dcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_45dcfc:
    // 0x45dcfc: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x45dcfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45dd00:
    // 0x45dd00: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x45dd00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
label_45dd04:
    // 0x45dd04: 0x24a54c80  addiu       $a1, $a1, 0x4C80
    ctx->pc = 0x45dd04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19584));
label_45dd08:
    // 0x45dd08: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x45dd08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_45dd0c:
    // 0x45dd0c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45dd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45dd10:
    // 0x45dd10: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x45dd10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_45dd14:
    // 0x45dd14: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x45dd14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45dd18:
    // 0x45dd18: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x45dd18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_45dd1c:
    // 0x45dd1c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x45dd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_45dd20:
    // 0x45dd20: 0x8cc40044  lw          $a0, 0x44($a2)
    ctx->pc = 0x45dd20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 68)));
label_45dd24:
    // 0x45dd24: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x45dd24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_45dd28:
    // 0x45dd28: 0x131e3c  dsll32      $v1, $s3, 24
    ctx->pc = 0x45dd28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 24));
label_45dd2c:
    // 0x45dd2c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x45dd2cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_45dd30:
    // 0x45dd30: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x45dd30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_45dd34:
    // 0x45dd34: 0x14620050  bne         $v1, $v0, . + 4 + (0x50 << 2)
label_45dd38:
    if (ctx->pc == 0x45DD38u) {
        ctx->pc = 0x45DD3Cu;
        goto label_45dd3c;
    }
    ctx->pc = 0x45DD34u;
    {
        const bool branch_taken_0x45dd34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x45dd34) {
            ctx->pc = 0x45DE78u;
            goto label_45de78;
        }
    }
    ctx->pc = 0x45DD3Cu;
label_45dd3c:
    // 0x45dd3c: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x45dd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_45dd40:
    // 0x45dd40: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x45dd40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45dd44:
    // 0x45dd44: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45dd44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45dd48:
    // 0x45dd48: 0x24424c80  addiu       $v0, $v0, 0x4C80
    ctx->pc = 0x45dd48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19584));
label_45dd4c:
    // 0x45dd4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45dd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45dd50:
    // 0x45dd50: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x45dd50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45dd54:
    // 0x45dd54: 0x8fa501b0  lw          $a1, 0x1B0($sp)
    ctx->pc = 0x45dd54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_45dd58:
    // 0x45dd58: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x45dd58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_45dd5c:
    // 0x45dd5c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45dd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45dd60:
    // 0x45dd60: 0x24424c80  addiu       $v0, $v0, 0x4C80
    ctx->pc = 0x45dd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19584));
label_45dd64:
    // 0x45dd64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45dd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45dd68:
    // 0x45dd68: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45dd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45dd6c:
    // 0x45dd6c: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x45dd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_45dd70:
    // 0x45dd70: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x45dd70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_45dd74:
    // 0x45dd74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45dd74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45dd78:
    // 0x45dd78: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x45dd78u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_45dd7c:
    // 0x45dd7c: 0x8c860044  lw          $a2, 0x44($a0)
    ctx->pc = 0x45dd7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_45dd80:
    // 0x45dd80: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x45dd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_45dd84:
    // 0x45dd84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x45dd84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45dd88:
    // 0x45dd88: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45dd88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45dd8c:
    // 0x45dd8c: 0x8c42e974  lw          $v0, -0x168C($v0)
    ctx->pc = 0x45dd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961524)));
label_45dd90:
    // 0x45dd90: 0x40f809  jalr        $v0
label_45dd94:
    if (ctx->pc == 0x45DD94u) {
        ctx->pc = 0x45DD98u;
        goto label_45dd98;
    }
    ctx->pc = 0x45DD90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x45DD98u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45DD90u, 0x45DD98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x45DD98u;
label_45dd98:
    // 0x45dd98: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x45dd98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45dd9c:
    // 0x45dd9c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x45dd9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45dda0:
    // 0x45dda0: 0x10000030  b           . + 4 + (0x30 << 2)
label_45dda4:
    if (ctx->pc == 0x45DDA4u) {
        ctx->pc = 0x45DDA8u;
        goto label_45dda8;
    }
    ctx->pc = 0x45DDA0u;
    {
        const bool branch_taken_0x45dda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45dda0) {
            ctx->pc = 0x45DE64u;
            goto label_45de64;
        }
    }
    ctx->pc = 0x45DDA8u;
label_45dda8:
    // 0x45dda8: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x45dda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_45ddac:
    // 0x45ddac: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x45ddacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45ddb0:
    // 0x45ddb0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45ddb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45ddb4:
    // 0x45ddb4: 0x24424c80  addiu       $v0, $v0, 0x4C80
    ctx->pc = 0x45ddb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19584));
label_45ddb8:
    // 0x45ddb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45ddb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45ddbc:
    // 0x45ddbc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x45ddbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45ddc0:
    // 0x45ddc0: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x45ddc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_45ddc4:
    // 0x45ddc4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x45ddc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45ddc8:
    // 0x45ddc8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45ddc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45ddcc:
    // 0x45ddcc: 0x24424c80  addiu       $v0, $v0, 0x4C80
    ctx->pc = 0x45ddccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19584));
label_45ddd0:
    // 0x45ddd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45ddd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45ddd4:
    // 0x45ddd4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x45ddd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45ddd8:
    // 0x45ddd8: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x45ddd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_45dddc:
    // 0x45dddc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x45dddcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45dde0:
    // 0x45dde0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x45dde0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_45dde4:
    // 0x45dde4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x45dde4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_45dde8:
    // 0x45dde8: 0x8ca20044  lw          $v0, 0x44($a1)
    ctx->pc = 0x45dde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
label_45ddec:
    // 0x45ddec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45ddecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45ddf0:
    // 0x45ddf0: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x45ddf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_45ddf4:
    // 0x45ddf4: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x45ddf4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_45ddf8:
    // 0x45ddf8: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x45ddf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
label_45ddfc:
    // 0x45ddfc: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x45ddfcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_45de00:
    // 0x45de00: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x45de00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_45de04:
    // 0x45de04: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
label_45de08:
    if (ctx->pc == 0x45DE08u) {
        ctx->pc = 0x45DE0Cu;
        goto label_45de0c;
    }
    ctx->pc = 0x45DE04u;
    {
        const bool branch_taken_0x45de04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x45de04) {
            ctx->pc = 0x45DE60u;
            goto label_45de60;
        }
    }
    ctx->pc = 0x45DE0Cu;
label_45de0c:
    // 0x45de0c: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x45de0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_45de10:
    // 0x45de10: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x45de10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_45de14:
    // 0x45de14: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x45de14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45de18:
    // 0x45de18: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45de18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45de1c:
    // 0x45de1c: 0x24424c80  addiu       $v0, $v0, 0x4C80
    ctx->pc = 0x45de1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19584));
label_45de20:
    // 0x45de20: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x45de20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_45de24:
    // 0x45de24: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x45de24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45de28:
    // 0x45de28: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x45de28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_45de2c:
    // 0x45de2c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x45de2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45de30:
    // 0x45de30: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45de30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45de34:
    // 0x45de34: 0x24424c80  addiu       $v0, $v0, 0x4C80
    ctx->pc = 0x45de34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19584));
label_45de38:
    // 0x45de38: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x45de38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_45de3c:
    // 0x45de3c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x45de3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_45de40:
    // 0x45de40: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x45de40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_45de44:
    // 0x45de44: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x45de44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_45de48:
    // 0x45de48: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x45de48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_45de4c:
    // 0x45de4c: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x45de4cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_45de50:
    // 0x45de50: 0x8cc20044  lw          $v0, 0x44($a2)
    ctx->pc = 0x45de50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 68)));
label_45de54:
    // 0x45de54: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x45de54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_45de58:
    // 0x45de58: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x45de58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_45de5c:
    // 0x45de5c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x45de5cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_45de60:
    // 0x45de60: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x45de60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_45de64:
    // 0x45de64: 0x211182a  slt         $v1, $s0, $s1
    ctx->pc = 0x45de64u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_45de68:
    // 0x45de68: 0x1460ffcf  bnez        $v1, . + 4 + (-0x31 << 2)
label_45de6c:
    if (ctx->pc == 0x45DE6Cu) {
        ctx->pc = 0x45DE70u;
        goto label_45de70;
    }
    ctx->pc = 0x45DE68u;
    {
        const bool branch_taken_0x45de68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x45de68) {
            ctx->pc = 0x45DDA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45dda8;
        }
    }
    ctx->pc = 0x45DE70u;
label_45de70:
    // 0x45de70: 0x10000053  b           . + 4 + (0x53 << 2)
label_45de74:
    if (ctx->pc == 0x45DE74u) {
        ctx->pc = 0x45DE78u;
        goto label_45de78;
    }
    ctx->pc = 0x45DE70u;
    {
        const bool branch_taken_0x45de70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45de70) {
            ctx->pc = 0x45DFC0u;
            goto label_45dfc0;
        }
    }
    ctx->pc = 0x45DE78u;
label_45de78:
    // 0x45de78: 0x131e3c  dsll32      $v1, $s3, 24
    ctx->pc = 0x45de78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 24));
label_45de7c:
    // 0x45de7c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x45de7cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_45de80:
    // 0x45de80: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x45de80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_45de84:
    // 0x45de84: 0x1462004e  bne         $v1, $v0, . + 4 + (0x4E << 2)
label_45de88:
    if (ctx->pc == 0x45DE88u) {
        ctx->pc = 0x45DE8Cu;
        goto label_45de8c;
    }
    ctx->pc = 0x45DE84u;
    {
        const bool branch_taken_0x45de84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x45de84) {
            ctx->pc = 0x45DFC0u;
            goto label_45dfc0;
        }
    }
    ctx->pc = 0x45DE8Cu;
label_45de8c:
    // 0x45de8c: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x45de8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_45de90:
    // 0x45de90: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x45de90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45de94:
    // 0x45de94: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45de94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45de98:
    // 0x45de98: 0x24424c80  addiu       $v0, $v0, 0x4C80
    ctx->pc = 0x45de98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19584));
label_45de9c:
    // 0x45de9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45de9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45dea0:
    // 0x45dea0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x45dea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45dea4:
    // 0x45dea4: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x45dea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_45dea8:
    // 0x45dea8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x45dea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_45deac:
    // 0x45deac: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x45deacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_45deb0:
    // 0x45deb0: 0x24634c80  addiu       $v1, $v1, 0x4C80
    ctx->pc = 0x45deb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19584));
label_45deb4:
    // 0x45deb4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x45deb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_45deb8:
    // 0x45deb8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x45deb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_45debc:
    // 0x45debc: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x45debcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_45dec0:
    // 0x45dec0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x45dec0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_45dec4:
    // 0x45dec4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x45dec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45dec8:
    // 0x45dec8: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x45dec8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_45decc:
    // 0x45decc: 0x8ca20044  lw          $v0, 0x44($a1)
    ctx->pc = 0x45deccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
label_45ded0:
    // 0x45ded0: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x45ded0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_45ded4:
    // 0x45ded4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45ded4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45ded8:
    // 0x45ded8: 0x8c42e974  lw          $v0, -0x168C($v0)
    ctx->pc = 0x45ded8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961524)));
label_45dedc:
    // 0x45dedc: 0x40f809  jalr        $v0
label_45dee0:
    if (ctx->pc == 0x45DEE0u) {
        ctx->pc = 0x45DEE4u;
        goto label_45dee4;
    }
    ctx->pc = 0x45DEDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x45DEE4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45DEDCu, 0x45DEE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x45DEE4u;
label_45dee4:
    // 0x45dee4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x45dee4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45dee8:
    // 0x45dee8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x45dee8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45deec:
    // 0x45deec: 0x10000031  b           . + 4 + (0x31 << 2)
label_45def0:
    if (ctx->pc == 0x45DEF0u) {
        ctx->pc = 0x45DEF4u;
        goto label_45def4;
    }
    ctx->pc = 0x45DEECu;
    {
        const bool branch_taken_0x45deec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45deec) {
            ctx->pc = 0x45DFB4u;
            goto label_45dfb4;
        }
    }
    ctx->pc = 0x45DEF4u;
label_45def4:
    // 0x45def4: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x45def4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_45def8:
    // 0x45def8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x45def8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45defc:
    // 0x45defc: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x45defcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_45df00:
    // 0x45df00: 0x24844c80  addiu       $a0, $a0, 0x4C80
    ctx->pc = 0x45df00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19584));
label_45df04:
    // 0x45df04: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x45df04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_45df08:
    // 0x45df08: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x45df08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_45df0c:
    // 0x45df0c: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x45df0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_45df10:
    // 0x45df10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x45df10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45df14:
    // 0x45df14: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x45df14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_45df18:
    // 0x45df18: 0x24634c80  addiu       $v1, $v1, 0x4C80
    ctx->pc = 0x45df18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19584));
label_45df1c:
    // 0x45df1c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x45df1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_45df20:
    // 0x45df20: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45df20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45df24:
    // 0x45df24: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x45df24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_45df28:
    // 0x45df28: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x45df28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45df2c:
    // 0x45df2c: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x45df2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_45df30:
    // 0x45df30: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x45df30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_45df34:
    // 0x45df34: 0x8ca30044  lw          $v1, 0x44($a1)
    ctx->pc = 0x45df34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
label_45df38:
    // 0x45df38: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x45df38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_45df3c:
    // 0x45df3c: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x45df3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_45df40:
    // 0x45df40: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x45df40u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_45df44:
    // 0x45df44: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x45df44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
label_45df48:
    // 0x45df48: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x45df48u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_45df4c:
    // 0x45df4c: 0x2404002f  addiu       $a0, $zero, 0x2F
    ctx->pc = 0x45df4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_45df50:
    // 0x45df50: 0x14440016  bne         $v0, $a0, . + 4 + (0x16 << 2)
label_45df54:
    if (ctx->pc == 0x45DF54u) {
        ctx->pc = 0x45DF58u;
        goto label_45df58;
    }
    ctx->pc = 0x45DF50u;
    {
        const bool branch_taken_0x45df50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x45df50) {
            ctx->pc = 0x45DFACu;
            goto label_45dfac;
        }
    }
    ctx->pc = 0x45DF58u;
label_45df58:
    // 0x45df58: 0x2405005c  addiu       $a1, $zero, 0x5C
    ctx->pc = 0x45df58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_45df5c:
    // 0x45df5c: 0x8fa601b0  lw          $a2, 0x1B0($sp)
    ctx->pc = 0x45df5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_45df60:
    // 0x45df60: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x45df60u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_45df64:
    // 0x45df64: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45df64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45df68:
    // 0x45df68: 0x24424c80  addiu       $v0, $v0, 0x4C80
    ctx->pc = 0x45df68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19584));
label_45df6c:
    // 0x45df6c: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x45df6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_45df70:
    // 0x45df70: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x45df70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_45df74:
    // 0x45df74: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x45df74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_45df78:
    // 0x45df78: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x45df78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45df7c:
    // 0x45df7c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45df7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45df80:
    // 0x45df80: 0x24424c80  addiu       $v0, $v0, 0x4C80
    ctx->pc = 0x45df80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19584));
label_45df84:
    // 0x45df84: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x45df84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_45df88:
    // 0x45df88: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45df88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45df8c:
    // 0x45df8c: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x45df8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_45df90:
    // 0x45df90: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x45df90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_45df94:
    // 0x45df94: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x45df94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45df98:
    // 0x45df98: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x45df98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_45df9c:
    // 0x45df9c: 0x8cc20044  lw          $v0, 0x44($a2)
    ctx->pc = 0x45df9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 68)));
label_45dfa0:
    // 0x45dfa0: 0x443021  addu        $a2, $v0, $a0
    ctx->pc = 0x45dfa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_45dfa4:
    // 0x45dfa4: 0xd03821  addu        $a3, $a2, $s0
    ctx->pc = 0x45dfa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_45dfa8:
    // 0x45dfa8: 0xa0e50000  sb          $a1, 0x0($a3)
    ctx->pc = 0x45dfa8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 5));
label_45dfac:
    // 0x45dfac: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x45dfacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_45dfb0:
    // 0x45dfb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x45dfb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45dfb4:
    // 0x45dfb4: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x45dfb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_45dfb8:
    // 0x45dfb8: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
label_45dfbc:
    if (ctx->pc == 0x45DFBCu) {
        ctx->pc = 0x45DFC0u;
        goto label_45dfc0;
    }
    ctx->pc = 0x45DFB8u;
    {
        const bool branch_taken_0x45dfb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45dfb8) {
            ctx->pc = 0x45DEF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45def4;
        }
    }
    ctx->pc = 0x45DFC0u;
label_45dfc0:
    // 0x45dfc0: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x45dfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_45dfc4:
    // 0x45dfc4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x45dfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45dfc8:
    // 0x45dfc8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45dfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45dfcc:
    // 0x45dfcc: 0x24424c80  addiu       $v0, $v0, 0x4C80
    ctx->pc = 0x45dfccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19584));
label_45dfd0:
    // 0x45dfd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45dfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45dfd4:
    // 0x45dfd4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x45dfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45dfd8:
    // 0x45dfd8: 0x8c850048  lw          $a1, 0x48($a0)
    ctx->pc = 0x45dfd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_45dfdc:
    // 0x45dfdc: 0x24a60001  addiu       $a2, $a1, 0x1
    ctx->pc = 0x45dfdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_45dfe0:
    // 0x45dfe0: 0xac860048  sw          $a2, 0x48($a0)
    ctx->pc = 0x45dfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 6));
label_45dfe4:
    // 0x45dfe4: 0x8fa701b0  lw          $a3, 0x1B0($sp)
    ctx->pc = 0x45dfe4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_45dfe8:
    // 0x45dfe8: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x45dfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_45dfec:
    // 0x45dfec: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x45dfecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_45dff0:
    // 0x45dff0: 0x24634c80  addiu       $v1, $v1, 0x4C80
    ctx->pc = 0x45dff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19584));
label_45dff4:
    // 0x45dff4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x45dff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_45dff8:
    // 0x45dff8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45dff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45dffc:
    // 0x45dffc: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x45dffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_45e000:
    // 0x45e000: 0x8fa50184  lw          $a1, 0x184($sp)
    ctx->pc = 0x45e000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
label_45e004:
    // 0x45e004: 0x85302a  slt         $a2, $a0, $a1
    ctx->pc = 0x45e004u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_45e008:
    // 0x45e008: 0x14c0ff06  bnez        $a2, . + 4 + (-0xFA << 2)
label_45e00c:
    if (ctx->pc == 0x45E00Cu) {
        ctx->pc = 0x45E010u;
        goto label_45e010;
    }
    ctx->pc = 0x45E008u;
    {
        const bool branch_taken_0x45e008 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x45e008) {
            ctx->pc = 0x45DC24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45dc24;
        }
    }
    ctx->pc = 0x45E010u;
label_45e010:
    // 0x45e010: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x45e010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_45e014:
    // 0x45e014: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_45e018:
    if (ctx->pc == 0x45E018u) {
        ctx->pc = 0x45E01Cu;
        goto label_45e01c;
    }
    ctx->pc = 0x45E014u;
    {
        const bool branch_taken_0x45e014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45e014) {
            ctx->pc = 0x45E0A4u;
            goto label_45e0a4;
        }
    }
    ctx->pc = 0x45E01Cu;
label_45e01c:
    // 0x45e01c: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x45e01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_45e020:
    // 0x45e020: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x45e020u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45e024:
    // 0x45e024: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x45e024u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
label_45e028:
    // 0x45e028: 0x24a54c80  addiu       $a1, $a1, 0x4C80
    ctx->pc = 0x45e028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19584));
label_45e02c:
    // 0x45e02c: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x45e02cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_45e030:
    // 0x45e030: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x45e030u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_45e034:
    // 0x45e034: 0x8ce80010  lw          $t0, 0x10($a3)
    ctx->pc = 0x45e034u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_45e038:
    // 0x45e038: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x45e038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_45e03c:
    // 0x45e03c: 0xc0f0af2  jal         func_3C2BC8
label_45e040:
    if (ctx->pc == 0x45E040u) {
        ctx->pc = 0x45E044u;
        goto label_45e044;
    }
    ctx->pc = 0x45E03Cu;
    SET_GPR_U32(ctx, 31, 0x45E044u);
    ctx->pc = 0x3C2BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2BC8u, 0x45E03Cu, 0x45E044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45E044u;
label_45e044:
    // 0x45e044: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x45e044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_45e048:
    // 0x45e048: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x45e048u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_45e04c:
    // 0x45e04c: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x45e04cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
label_45e050:
    // 0x45e050: 0x24c64c80  addiu       $a2, $a2, 0x4C80
    ctx->pc = 0x45e050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19584));
label_45e054:
    // 0x45e054: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x45e054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_45e058:
    // 0x45e058: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x45e058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45e05c:
    // 0x45e05c: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x45e05cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_45e060:
    // 0x45e060: 0x24140031  addiu       $s4, $zero, 0x31
    ctx->pc = 0x45e060u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_45e064:
    // 0x45e064: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x45e064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_45e068:
    // 0x45e068: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x45e068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45e06c:
    // 0x45e06c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x45e06cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_45e070:
    // 0x45e070: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x45e070u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
label_45e074:
    // 0x45e074: 0x24c6bdf0  addiu       $a2, $a2, -0x4210
    ctx->pc = 0x45e074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950384));
label_45e078:
    // 0x45e078: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x45e078u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45e07c:
    // 0x45e07c: 0xc0f09a8  jal         func_3C26A0
label_45e080:
    if (ctx->pc == 0x45E080u) {
        ctx->pc = 0x45E084u;
        goto label_45e084;
    }
    ctx->pc = 0x45E07Cu;
    SET_GPR_U32(ctx, 31, 0x45E084u);
    ctx->pc = 0x3C26A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C26A0u, 0x45E07Cu, 0x45E084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45E084u;
label_45e084:
    // 0x45e084: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x45e084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45e088:
    // 0x45e088: 0x8fa501b0  lw          $a1, 0x1B0($sp)
    ctx->pc = 0x45e088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_45e08c:
    // 0x45e08c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x45e08cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_45e090:
    // 0x45e090: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x45e090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_45e094:
    // 0x45e094: 0x24634c80  addiu       $v1, $v1, 0x4C80
    ctx->pc = 0x45e094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19584));
label_45e098:
    // 0x45e098: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x45e098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_45e09c:
    // 0x45e09c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45e09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45e0a0:
    // 0x45e0a0: 0xac440010  sw          $a0, 0x10($v0)
    ctx->pc = 0x45e0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
label_45e0a4:
    // 0x45e0a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x45e0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45e0a8:
    // 0x45e0a8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x45e0a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_45e0ac:
    // 0x45e0ac: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x45e0acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_45e0b0:
    // 0x45e0b0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x45e0b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_45e0b4:
    // 0x45e0b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x45e0b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_45e0b8:
    // 0x45e0b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x45e0b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_45e0bc:
    // 0x45e0bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45e0bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_45e0c0:
    // 0x45e0c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45e0c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_45e0c4:
    // 0x45e0c4: 0x27bd01c0  addiu       $sp, $sp, 0x1C0
    ctx->pc = 0x45e0c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_45e0c8:
    // 0x45e0c8: 0x3e00008  jr          $ra
label_45e0cc:
    if (ctx->pc == 0x45E0CCu) {
        ctx->pc = 0x45E0D0u;
        goto label_fallthrough_0x45e0c8;
    }
    ctx->pc = 0x45E0C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45E0C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x45e0c8:
    ctx->pc = 0x45E0D0u;
}
