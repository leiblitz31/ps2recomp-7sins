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

// Function: sub_0032D630
// Address: 0x32d630 - 0x330758
void sub_0032D630_0x32d630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032D630_0x32d630");
#endif

    switch (ctx->pc) {
        case 0x32d630u: goto label_32d630;
        case 0x32d634u: goto label_32d634;
        case 0x32d638u: goto label_32d638;
        case 0x32d63cu: goto label_32d63c;
        case 0x32d640u: goto label_32d640;
        case 0x32d644u: goto label_32d644;
        case 0x32d648u: goto label_32d648;
        case 0x32d64cu: goto label_32d64c;
        case 0x32d650u: goto label_32d650;
        case 0x32d654u: goto label_32d654;
        case 0x32d658u: goto label_32d658;
        case 0x32d65cu: goto label_32d65c;
        case 0x32d660u: goto label_32d660;
        case 0x32d664u: goto label_32d664;
        case 0x32d668u: goto label_32d668;
        case 0x32d66cu: goto label_32d66c;
        case 0x32d670u: goto label_32d670;
        case 0x32d674u: goto label_32d674;
        case 0x32d678u: goto label_32d678;
        case 0x32d67cu: goto label_32d67c;
        case 0x32d680u: goto label_32d680;
        case 0x32d684u: goto label_32d684;
        case 0x32d688u: goto label_32d688;
        case 0x32d68cu: goto label_32d68c;
        case 0x32d690u: goto label_32d690;
        case 0x32d694u: goto label_32d694;
        case 0x32d698u: goto label_32d698;
        case 0x32d69cu: goto label_32d69c;
        case 0x32d6a0u: goto label_32d6a0;
        case 0x32d6a4u: goto label_32d6a4;
        case 0x32d6a8u: goto label_32d6a8;
        case 0x32d6acu: goto label_32d6ac;
        case 0x32d6b0u: goto label_32d6b0;
        case 0x32d6b4u: goto label_32d6b4;
        case 0x32d6b8u: goto label_32d6b8;
        case 0x32d6bcu: goto label_32d6bc;
        case 0x32d6c0u: goto label_32d6c0;
        case 0x32d6c4u: goto label_32d6c4;
        case 0x32d6c8u: goto label_32d6c8;
        case 0x32d6ccu: goto label_32d6cc;
        case 0x32d6d0u: goto label_32d6d0;
        case 0x32d6d4u: goto label_32d6d4;
        case 0x32d6d8u: goto label_32d6d8;
        case 0x32d6dcu: goto label_32d6dc;
        case 0x32d6e0u: goto label_32d6e0;
        case 0x32d6e4u: goto label_32d6e4;
        case 0x32d6e8u: goto label_32d6e8;
        case 0x32d6ecu: goto label_32d6ec;
        case 0x32d6f0u: goto label_32d6f0;
        case 0x32d6f4u: goto label_32d6f4;
        case 0x32d6f8u: goto label_32d6f8;
        case 0x32d6fcu: goto label_32d6fc;
        case 0x32d700u: goto label_32d700;
        case 0x32d704u: goto label_32d704;
        case 0x32d708u: goto label_32d708;
        case 0x32d70cu: goto label_32d70c;
        case 0x32d710u: goto label_32d710;
        case 0x32d714u: goto label_32d714;
        case 0x32d718u: goto label_32d718;
        case 0x32d71cu: goto label_32d71c;
        case 0x32d720u: goto label_32d720;
        case 0x32d724u: goto label_32d724;
        case 0x32d728u: goto label_32d728;
        case 0x32d72cu: goto label_32d72c;
        case 0x32d730u: goto label_32d730;
        case 0x32d734u: goto label_32d734;
        case 0x32d738u: goto label_32d738;
        case 0x32d73cu: goto label_32d73c;
        case 0x32d740u: goto label_32d740;
        case 0x32d744u: goto label_32d744;
        case 0x32d748u: goto label_32d748;
        case 0x32d74cu: goto label_32d74c;
        case 0x32d750u: goto label_32d750;
        case 0x32d754u: goto label_32d754;
        case 0x32d758u: goto label_32d758;
        case 0x32d75cu: goto label_32d75c;
        case 0x32d760u: goto label_32d760;
        case 0x32d764u: goto label_32d764;
        case 0x32d768u: goto label_32d768;
        case 0x32d76cu: goto label_32d76c;
        case 0x32d770u: goto label_32d770;
        case 0x32d774u: goto label_32d774;
        case 0x32d778u: goto label_32d778;
        case 0x32d77cu: goto label_32d77c;
        case 0x32d780u: goto label_32d780;
        case 0x32d784u: goto label_32d784;
        case 0x32d788u: goto label_32d788;
        case 0x32d78cu: goto label_32d78c;
        case 0x32d790u: goto label_32d790;
        case 0x32d794u: goto label_32d794;
        case 0x32d798u: goto label_32d798;
        case 0x32d79cu: goto label_32d79c;
        case 0x32d7a0u: goto label_32d7a0;
        case 0x32d7a4u: goto label_32d7a4;
        case 0x32d7a8u: goto label_32d7a8;
        case 0x32d7acu: goto label_32d7ac;
        case 0x32d7b0u: goto label_32d7b0;
        case 0x32d7b4u: goto label_32d7b4;
        case 0x32d7b8u: goto label_32d7b8;
        case 0x32d7bcu: goto label_32d7bc;
        case 0x32d7c0u: goto label_32d7c0;
        case 0x32d7c4u: goto label_32d7c4;
        case 0x32d7c8u: goto label_32d7c8;
        case 0x32d7ccu: goto label_32d7cc;
        case 0x32d7d0u: goto label_32d7d0;
        case 0x32d7d4u: goto label_32d7d4;
        case 0x32d7d8u: goto label_32d7d8;
        case 0x32d7dcu: goto label_32d7dc;
        case 0x32d7e0u: goto label_32d7e0;
        case 0x32d7e4u: goto label_32d7e4;
        case 0x32d7e8u: goto label_32d7e8;
        case 0x32d7ecu: goto label_32d7ec;
        case 0x32d7f0u: goto label_32d7f0;
        case 0x32d7f4u: goto label_32d7f4;
        case 0x32d7f8u: goto label_32d7f8;
        case 0x32d7fcu: goto label_32d7fc;
        case 0x32d800u: goto label_32d800;
        case 0x32d804u: goto label_32d804;
        case 0x32d808u: goto label_32d808;
        case 0x32d80cu: goto label_32d80c;
        case 0x32d810u: goto label_32d810;
        case 0x32d814u: goto label_32d814;
        case 0x32d818u: goto label_32d818;
        case 0x32d81cu: goto label_32d81c;
        case 0x32d820u: goto label_32d820;
        case 0x32d824u: goto label_32d824;
        case 0x32d828u: goto label_32d828;
        case 0x32d82cu: goto label_32d82c;
        case 0x32d830u: goto label_32d830;
        case 0x32d834u: goto label_32d834;
        case 0x32d838u: goto label_32d838;
        case 0x32d83cu: goto label_32d83c;
        case 0x32d840u: goto label_32d840;
        case 0x32d844u: goto label_32d844;
        case 0x32d848u: goto label_32d848;
        case 0x32d84cu: goto label_32d84c;
        case 0x32d850u: goto label_32d850;
        case 0x32d854u: goto label_32d854;
        case 0x32d858u: goto label_32d858;
        case 0x32d85cu: goto label_32d85c;
        case 0x32d860u: goto label_32d860;
        case 0x32d864u: goto label_32d864;
        case 0x32d868u: goto label_32d868;
        case 0x32d86cu: goto label_32d86c;
        case 0x32d870u: goto label_32d870;
        case 0x32d874u: goto label_32d874;
        case 0x32d878u: goto label_32d878;
        case 0x32d87cu: goto label_32d87c;
        case 0x32d880u: goto label_32d880;
        case 0x32d884u: goto label_32d884;
        case 0x32d888u: goto label_32d888;
        case 0x32d88cu: goto label_32d88c;
        case 0x32d890u: goto label_32d890;
        case 0x32d894u: goto label_32d894;
        case 0x32d898u: goto label_32d898;
        case 0x32d89cu: goto label_32d89c;
        case 0x32d8a0u: goto label_32d8a0;
        case 0x32d8a4u: goto label_32d8a4;
        case 0x32d8a8u: goto label_32d8a8;
        case 0x32d8acu: goto label_32d8ac;
        case 0x32d8b0u: goto label_32d8b0;
        case 0x32d8b4u: goto label_32d8b4;
        case 0x32d8b8u: goto label_32d8b8;
        case 0x32d8bcu: goto label_32d8bc;
        case 0x32d8c0u: goto label_32d8c0;
        case 0x32d8c4u: goto label_32d8c4;
        case 0x32d8c8u: goto label_32d8c8;
        case 0x32d8ccu: goto label_32d8cc;
        case 0x32d8d0u: goto label_32d8d0;
        case 0x32d8d4u: goto label_32d8d4;
        case 0x32d8d8u: goto label_32d8d8;
        case 0x32d8dcu: goto label_32d8dc;
        case 0x32d8e0u: goto label_32d8e0;
        case 0x32d8e4u: goto label_32d8e4;
        case 0x32d8e8u: goto label_32d8e8;
        case 0x32d8ecu: goto label_32d8ec;
        case 0x32d8f0u: goto label_32d8f0;
        case 0x32d8f4u: goto label_32d8f4;
        case 0x32d8f8u: goto label_32d8f8;
        case 0x32d8fcu: goto label_32d8fc;
        case 0x32d900u: goto label_32d900;
        case 0x32d904u: goto label_32d904;
        case 0x32d908u: goto label_32d908;
        case 0x32d90cu: goto label_32d90c;
        case 0x32d910u: goto label_32d910;
        case 0x32d914u: goto label_32d914;
        case 0x32d918u: goto label_32d918;
        case 0x32d91cu: goto label_32d91c;
        case 0x32d920u: goto label_32d920;
        case 0x32d924u: goto label_32d924;
        case 0x32d928u: goto label_32d928;
        case 0x32d92cu: goto label_32d92c;
        case 0x32d930u: goto label_32d930;
        case 0x32d934u: goto label_32d934;
        case 0x32d938u: goto label_32d938;
        case 0x32d93cu: goto label_32d93c;
        case 0x32d940u: goto label_32d940;
        case 0x32d944u: goto label_32d944;
        case 0x32d948u: goto label_32d948;
        case 0x32d94cu: goto label_32d94c;
        case 0x32d950u: goto label_32d950;
        case 0x32d954u: goto label_32d954;
        case 0x32d958u: goto label_32d958;
        case 0x32d95cu: goto label_32d95c;
        case 0x32d960u: goto label_32d960;
        case 0x32d964u: goto label_32d964;
        case 0x32d968u: goto label_32d968;
        case 0x32d96cu: goto label_32d96c;
        case 0x32d970u: goto label_32d970;
        case 0x32d974u: goto label_32d974;
        case 0x32d978u: goto label_32d978;
        case 0x32d97cu: goto label_32d97c;
        case 0x32d980u: goto label_32d980;
        case 0x32d984u: goto label_32d984;
        case 0x32d988u: goto label_32d988;
        case 0x32d98cu: goto label_32d98c;
        case 0x32d990u: goto label_32d990;
        case 0x32d994u: goto label_32d994;
        case 0x32d998u: goto label_32d998;
        case 0x32d99cu: goto label_32d99c;
        case 0x32d9a0u: goto label_32d9a0;
        case 0x32d9a4u: goto label_32d9a4;
        case 0x32d9a8u: goto label_32d9a8;
        case 0x32d9acu: goto label_32d9ac;
        case 0x32d9b0u: goto label_32d9b0;
        case 0x32d9b4u: goto label_32d9b4;
        case 0x32d9b8u: goto label_32d9b8;
        case 0x32d9bcu: goto label_32d9bc;
        case 0x32d9c0u: goto label_32d9c0;
        case 0x32d9c4u: goto label_32d9c4;
        case 0x32d9c8u: goto label_32d9c8;
        case 0x32d9ccu: goto label_32d9cc;
        case 0x32d9d0u: goto label_32d9d0;
        case 0x32d9d4u: goto label_32d9d4;
        case 0x32d9d8u: goto label_32d9d8;
        case 0x32d9dcu: goto label_32d9dc;
        case 0x32d9e0u: goto label_32d9e0;
        case 0x32d9e4u: goto label_32d9e4;
        case 0x32d9e8u: goto label_32d9e8;
        case 0x32d9ecu: goto label_32d9ec;
        case 0x32d9f0u: goto label_32d9f0;
        case 0x32d9f4u: goto label_32d9f4;
        case 0x32d9f8u: goto label_32d9f8;
        case 0x32d9fcu: goto label_32d9fc;
        case 0x32da00u: goto label_32da00;
        case 0x32da04u: goto label_32da04;
        case 0x32da08u: goto label_32da08;
        case 0x32da0cu: goto label_32da0c;
        case 0x32da10u: goto label_32da10;
        case 0x32da14u: goto label_32da14;
        case 0x32da18u: goto label_32da18;
        case 0x32da1cu: goto label_32da1c;
        case 0x32da20u: goto label_32da20;
        case 0x32da24u: goto label_32da24;
        case 0x32da28u: goto label_32da28;
        case 0x32da2cu: goto label_32da2c;
        case 0x32da30u: goto label_32da30;
        case 0x32da34u: goto label_32da34;
        case 0x32da38u: goto label_32da38;
        case 0x32da3cu: goto label_32da3c;
        case 0x32da40u: goto label_32da40;
        case 0x32da44u: goto label_32da44;
        case 0x32da48u: goto label_32da48;
        case 0x32da4cu: goto label_32da4c;
        case 0x32da50u: goto label_32da50;
        case 0x32da54u: goto label_32da54;
        case 0x32da58u: goto label_32da58;
        case 0x32da5cu: goto label_32da5c;
        case 0x32da60u: goto label_32da60;
        case 0x32da64u: goto label_32da64;
        case 0x32da68u: goto label_32da68;
        case 0x32da6cu: goto label_32da6c;
        case 0x32da70u: goto label_32da70;
        case 0x32da74u: goto label_32da74;
        case 0x32da78u: goto label_32da78;
        case 0x32da7cu: goto label_32da7c;
        case 0x32da80u: goto label_32da80;
        case 0x32da84u: goto label_32da84;
        case 0x32da88u: goto label_32da88;
        case 0x32da8cu: goto label_32da8c;
        case 0x32da90u: goto label_32da90;
        case 0x32da94u: goto label_32da94;
        case 0x32da98u: goto label_32da98;
        case 0x32da9cu: goto label_32da9c;
        case 0x32daa0u: goto label_32daa0;
        case 0x32daa4u: goto label_32daa4;
        case 0x32daa8u: goto label_32daa8;
        case 0x32daacu: goto label_32daac;
        case 0x32dab0u: goto label_32dab0;
        case 0x32dab4u: goto label_32dab4;
        case 0x32dab8u: goto label_32dab8;
        case 0x32dabcu: goto label_32dabc;
        case 0x32dac0u: goto label_32dac0;
        case 0x32dac4u: goto label_32dac4;
        case 0x32dac8u: goto label_32dac8;
        case 0x32daccu: goto label_32dacc;
        case 0x32dad0u: goto label_32dad0;
        case 0x32dad4u: goto label_32dad4;
        case 0x32dad8u: goto label_32dad8;
        case 0x32dadcu: goto label_32dadc;
        case 0x32dae0u: goto label_32dae0;
        case 0x32dae4u: goto label_32dae4;
        case 0x32dae8u: goto label_32dae8;
        case 0x32daecu: goto label_32daec;
        case 0x32daf0u: goto label_32daf0;
        case 0x32daf4u: goto label_32daf4;
        case 0x32daf8u: goto label_32daf8;
        case 0x32dafcu: goto label_32dafc;
        case 0x32db00u: goto label_32db00;
        case 0x32db04u: goto label_32db04;
        case 0x32db08u: goto label_32db08;
        case 0x32db0cu: goto label_32db0c;
        case 0x32db10u: goto label_32db10;
        case 0x32db14u: goto label_32db14;
        case 0x32db18u: goto label_32db18;
        case 0x32db1cu: goto label_32db1c;
        case 0x32db20u: goto label_32db20;
        case 0x32db24u: goto label_32db24;
        case 0x32db28u: goto label_32db28;
        case 0x32db2cu: goto label_32db2c;
        case 0x32db30u: goto label_32db30;
        case 0x32db34u: goto label_32db34;
        case 0x32db38u: goto label_32db38;
        case 0x32db3cu: goto label_32db3c;
        case 0x32db40u: goto label_32db40;
        case 0x32db44u: goto label_32db44;
        case 0x32db48u: goto label_32db48;
        case 0x32db4cu: goto label_32db4c;
        case 0x32db50u: goto label_32db50;
        case 0x32db54u: goto label_32db54;
        case 0x32db58u: goto label_32db58;
        case 0x32db5cu: goto label_32db5c;
        case 0x32db60u: goto label_32db60;
        case 0x32db64u: goto label_32db64;
        case 0x32db68u: goto label_32db68;
        case 0x32db6cu: goto label_32db6c;
        case 0x32db70u: goto label_32db70;
        case 0x32db74u: goto label_32db74;
        case 0x32db78u: goto label_32db78;
        case 0x32db7cu: goto label_32db7c;
        case 0x32db80u: goto label_32db80;
        case 0x32db84u: goto label_32db84;
        case 0x32db88u: goto label_32db88;
        case 0x32db8cu: goto label_32db8c;
        case 0x32db90u: goto label_32db90;
        case 0x32db94u: goto label_32db94;
        case 0x32db98u: goto label_32db98;
        case 0x32db9cu: goto label_32db9c;
        case 0x32dba0u: goto label_32dba0;
        case 0x32dba4u: goto label_32dba4;
        case 0x32dba8u: goto label_32dba8;
        case 0x32dbacu: goto label_32dbac;
        case 0x32dbb0u: goto label_32dbb0;
        case 0x32dbb4u: goto label_32dbb4;
        case 0x32dbb8u: goto label_32dbb8;
        case 0x32dbbcu: goto label_32dbbc;
        case 0x32dbc0u: goto label_32dbc0;
        case 0x32dbc4u: goto label_32dbc4;
        case 0x32dbc8u: goto label_32dbc8;
        case 0x32dbccu: goto label_32dbcc;
        case 0x32dbd0u: goto label_32dbd0;
        case 0x32dbd4u: goto label_32dbd4;
        case 0x32dbd8u: goto label_32dbd8;
        case 0x32dbdcu: goto label_32dbdc;
        case 0x32dbe0u: goto label_32dbe0;
        case 0x32dbe4u: goto label_32dbe4;
        case 0x32dbe8u: goto label_32dbe8;
        case 0x32dbecu: goto label_32dbec;
        case 0x32dbf0u: goto label_32dbf0;
        case 0x32dbf4u: goto label_32dbf4;
        case 0x32dbf8u: goto label_32dbf8;
        case 0x32dbfcu: goto label_32dbfc;
        case 0x32dc00u: goto label_32dc00;
        case 0x32dc04u: goto label_32dc04;
        case 0x32dc08u: goto label_32dc08;
        case 0x32dc0cu: goto label_32dc0c;
        case 0x32dc10u: goto label_32dc10;
        case 0x32dc14u: goto label_32dc14;
        case 0x32dc18u: goto label_32dc18;
        case 0x32dc1cu: goto label_32dc1c;
        case 0x32dc20u: goto label_32dc20;
        case 0x32dc24u: goto label_32dc24;
        case 0x32dc28u: goto label_32dc28;
        case 0x32dc2cu: goto label_32dc2c;
        case 0x32dc30u: goto label_32dc30;
        case 0x32dc34u: goto label_32dc34;
        case 0x32dc38u: goto label_32dc38;
        case 0x32dc3cu: goto label_32dc3c;
        case 0x32dc40u: goto label_32dc40;
        case 0x32dc44u: goto label_32dc44;
        case 0x32dc48u: goto label_32dc48;
        case 0x32dc4cu: goto label_32dc4c;
        case 0x32dc50u: goto label_32dc50;
        case 0x32dc54u: goto label_32dc54;
        case 0x32dc58u: goto label_32dc58;
        case 0x32dc5cu: goto label_32dc5c;
        case 0x32dc60u: goto label_32dc60;
        case 0x32dc64u: goto label_32dc64;
        case 0x32dc68u: goto label_32dc68;
        case 0x32dc6cu: goto label_32dc6c;
        case 0x32dc70u: goto label_32dc70;
        case 0x32dc74u: goto label_32dc74;
        case 0x32dc78u: goto label_32dc78;
        case 0x32dc7cu: goto label_32dc7c;
        case 0x32dc80u: goto label_32dc80;
        case 0x32dc84u: goto label_32dc84;
        case 0x32dc88u: goto label_32dc88;
        case 0x32dc8cu: goto label_32dc8c;
        case 0x32dc90u: goto label_32dc90;
        case 0x32dc94u: goto label_32dc94;
        case 0x32dc98u: goto label_32dc98;
        case 0x32dc9cu: goto label_32dc9c;
        case 0x32dca0u: goto label_32dca0;
        case 0x32dca4u: goto label_32dca4;
        case 0x32dca8u: goto label_32dca8;
        case 0x32dcacu: goto label_32dcac;
        case 0x32dcb0u: goto label_32dcb0;
        case 0x32dcb4u: goto label_32dcb4;
        case 0x32dcb8u: goto label_32dcb8;
        case 0x32dcbcu: goto label_32dcbc;
        case 0x32dcc0u: goto label_32dcc0;
        case 0x32dcc4u: goto label_32dcc4;
        case 0x32dcc8u: goto label_32dcc8;
        case 0x32dcccu: goto label_32dccc;
        case 0x32dcd0u: goto label_32dcd0;
        case 0x32dcd4u: goto label_32dcd4;
        case 0x32dcd8u: goto label_32dcd8;
        case 0x32dcdcu: goto label_32dcdc;
        case 0x32dce0u: goto label_32dce0;
        case 0x32dce4u: goto label_32dce4;
        case 0x32dce8u: goto label_32dce8;
        case 0x32dcecu: goto label_32dcec;
        case 0x32dcf0u: goto label_32dcf0;
        case 0x32dcf4u: goto label_32dcf4;
        case 0x32dcf8u: goto label_32dcf8;
        case 0x32dcfcu: goto label_32dcfc;
        case 0x32dd00u: goto label_32dd00;
        case 0x32dd04u: goto label_32dd04;
        case 0x32dd08u: goto label_32dd08;
        case 0x32dd0cu: goto label_32dd0c;
        case 0x32dd10u: goto label_32dd10;
        case 0x32dd14u: goto label_32dd14;
        case 0x32dd18u: goto label_32dd18;
        case 0x32dd1cu: goto label_32dd1c;
        case 0x32dd20u: goto label_32dd20;
        case 0x32dd24u: goto label_32dd24;
        case 0x32dd28u: goto label_32dd28;
        case 0x32dd2cu: goto label_32dd2c;
        case 0x32dd30u: goto label_32dd30;
        case 0x32dd34u: goto label_32dd34;
        case 0x32dd38u: goto label_32dd38;
        case 0x32dd3cu: goto label_32dd3c;
        case 0x32dd40u: goto label_32dd40;
        case 0x32dd44u: goto label_32dd44;
        case 0x32dd48u: goto label_32dd48;
        case 0x32dd4cu: goto label_32dd4c;
        case 0x32dd50u: goto label_32dd50;
        case 0x32dd54u: goto label_32dd54;
        case 0x32dd58u: goto label_32dd58;
        case 0x32dd5cu: goto label_32dd5c;
        case 0x32dd60u: goto label_32dd60;
        case 0x32dd64u: goto label_32dd64;
        case 0x32dd68u: goto label_32dd68;
        case 0x32dd6cu: goto label_32dd6c;
        case 0x32dd70u: goto label_32dd70;
        case 0x32dd74u: goto label_32dd74;
        case 0x32dd78u: goto label_32dd78;
        case 0x32dd7cu: goto label_32dd7c;
        case 0x32dd80u: goto label_32dd80;
        case 0x32dd84u: goto label_32dd84;
        case 0x32dd88u: goto label_32dd88;
        case 0x32dd8cu: goto label_32dd8c;
        case 0x32dd90u: goto label_32dd90;
        case 0x32dd94u: goto label_32dd94;
        case 0x32dd98u: goto label_32dd98;
        case 0x32dd9cu: goto label_32dd9c;
        case 0x32dda0u: goto label_32dda0;
        case 0x32dda4u: goto label_32dda4;
        case 0x32dda8u: goto label_32dda8;
        case 0x32ddacu: goto label_32ddac;
        case 0x32ddb0u: goto label_32ddb0;
        case 0x32ddb4u: goto label_32ddb4;
        case 0x32ddb8u: goto label_32ddb8;
        case 0x32ddbcu: goto label_32ddbc;
        case 0x32ddc0u: goto label_32ddc0;
        case 0x32ddc4u: goto label_32ddc4;
        case 0x32ddc8u: goto label_32ddc8;
        case 0x32ddccu: goto label_32ddcc;
        case 0x32ddd0u: goto label_32ddd0;
        case 0x32ddd4u: goto label_32ddd4;
        case 0x32ddd8u: goto label_32ddd8;
        case 0x32dddcu: goto label_32dddc;
        case 0x32dde0u: goto label_32dde0;
        case 0x32dde4u: goto label_32dde4;
        case 0x32dde8u: goto label_32dde8;
        case 0x32ddecu: goto label_32ddec;
        case 0x32ddf0u: goto label_32ddf0;
        case 0x32ddf4u: goto label_32ddf4;
        case 0x32ddf8u: goto label_32ddf8;
        case 0x32ddfcu: goto label_32ddfc;
        case 0x32de00u: goto label_32de00;
        case 0x32de04u: goto label_32de04;
        case 0x32de08u: goto label_32de08;
        case 0x32de0cu: goto label_32de0c;
        case 0x32de10u: goto label_32de10;
        case 0x32de14u: goto label_32de14;
        case 0x32de18u: goto label_32de18;
        case 0x32de1cu: goto label_32de1c;
        case 0x32de20u: goto label_32de20;
        case 0x32de24u: goto label_32de24;
        case 0x32de28u: goto label_32de28;
        case 0x32de2cu: goto label_32de2c;
        case 0x32de30u: goto label_32de30;
        case 0x32de34u: goto label_32de34;
        case 0x32de38u: goto label_32de38;
        case 0x32de3cu: goto label_32de3c;
        case 0x32de40u: goto label_32de40;
        case 0x32de44u: goto label_32de44;
        case 0x32de48u: goto label_32de48;
        case 0x32de4cu: goto label_32de4c;
        case 0x32de50u: goto label_32de50;
        case 0x32de54u: goto label_32de54;
        case 0x32de58u: goto label_32de58;
        case 0x32de5cu: goto label_32de5c;
        case 0x32de60u: goto label_32de60;
        case 0x32de64u: goto label_32de64;
        case 0x32de68u: goto label_32de68;
        case 0x32de6cu: goto label_32de6c;
        case 0x32de70u: goto label_32de70;
        case 0x32de74u: goto label_32de74;
        case 0x32de78u: goto label_32de78;
        case 0x32de7cu: goto label_32de7c;
        case 0x32de80u: goto label_32de80;
        case 0x32de84u: goto label_32de84;
        case 0x32de88u: goto label_32de88;
        case 0x32de8cu: goto label_32de8c;
        case 0x32de90u: goto label_32de90;
        case 0x32de94u: goto label_32de94;
        case 0x32de98u: goto label_32de98;
        case 0x32de9cu: goto label_32de9c;
        case 0x32dea0u: goto label_32dea0;
        case 0x32dea4u: goto label_32dea4;
        case 0x32dea8u: goto label_32dea8;
        case 0x32deacu: goto label_32deac;
        case 0x32deb0u: goto label_32deb0;
        case 0x32deb4u: goto label_32deb4;
        case 0x32deb8u: goto label_32deb8;
        case 0x32debcu: goto label_32debc;
        case 0x32dec0u: goto label_32dec0;
        case 0x32dec4u: goto label_32dec4;
        case 0x32dec8u: goto label_32dec8;
        case 0x32deccu: goto label_32decc;
        case 0x32ded0u: goto label_32ded0;
        case 0x32ded4u: goto label_32ded4;
        case 0x32ded8u: goto label_32ded8;
        case 0x32dedcu: goto label_32dedc;
        case 0x32dee0u: goto label_32dee0;
        case 0x32dee4u: goto label_32dee4;
        case 0x32dee8u: goto label_32dee8;
        case 0x32deecu: goto label_32deec;
        case 0x32def0u: goto label_32def0;
        case 0x32def4u: goto label_32def4;
        case 0x32def8u: goto label_32def8;
        case 0x32defcu: goto label_32defc;
        case 0x32df00u: goto label_32df00;
        case 0x32df04u: goto label_32df04;
        case 0x32df08u: goto label_32df08;
        case 0x32df0cu: goto label_32df0c;
        case 0x32df10u: goto label_32df10;
        case 0x32df14u: goto label_32df14;
        case 0x32df18u: goto label_32df18;
        case 0x32df1cu: goto label_32df1c;
        case 0x32df20u: goto label_32df20;
        case 0x32df24u: goto label_32df24;
        case 0x32df28u: goto label_32df28;
        case 0x32df2cu: goto label_32df2c;
        case 0x32df30u: goto label_32df30;
        case 0x32df34u: goto label_32df34;
        case 0x32df38u: goto label_32df38;
        case 0x32df3cu: goto label_32df3c;
        case 0x32df40u: goto label_32df40;
        case 0x32df44u: goto label_32df44;
        case 0x32df48u: goto label_32df48;
        case 0x32df4cu: goto label_32df4c;
        case 0x32df50u: goto label_32df50;
        case 0x32df54u: goto label_32df54;
        case 0x32df58u: goto label_32df58;
        case 0x32df5cu: goto label_32df5c;
        case 0x32df60u: goto label_32df60;
        case 0x32df64u: goto label_32df64;
        case 0x32df68u: goto label_32df68;
        case 0x32df6cu: goto label_32df6c;
        case 0x32df70u: goto label_32df70;
        case 0x32df74u: goto label_32df74;
        case 0x32df78u: goto label_32df78;
        case 0x32df7cu: goto label_32df7c;
        case 0x32df80u: goto label_32df80;
        case 0x32df84u: goto label_32df84;
        case 0x32df88u: goto label_32df88;
        case 0x32df8cu: goto label_32df8c;
        case 0x32df90u: goto label_32df90;
        case 0x32df94u: goto label_32df94;
        case 0x32df98u: goto label_32df98;
        case 0x32df9cu: goto label_32df9c;
        case 0x32dfa0u: goto label_32dfa0;
        case 0x32dfa4u: goto label_32dfa4;
        case 0x32dfa8u: goto label_32dfa8;
        case 0x32dfacu: goto label_32dfac;
        case 0x32dfb0u: goto label_32dfb0;
        case 0x32dfb4u: goto label_32dfb4;
        case 0x32dfb8u: goto label_32dfb8;
        case 0x32dfbcu: goto label_32dfbc;
        case 0x32dfc0u: goto label_32dfc0;
        case 0x32dfc4u: goto label_32dfc4;
        case 0x32dfc8u: goto label_32dfc8;
        case 0x32dfccu: goto label_32dfcc;
        case 0x32dfd0u: goto label_32dfd0;
        case 0x32dfd4u: goto label_32dfd4;
        case 0x32dfd8u: goto label_32dfd8;
        case 0x32dfdcu: goto label_32dfdc;
        case 0x32dfe0u: goto label_32dfe0;
        case 0x32dfe4u: goto label_32dfe4;
        case 0x32dfe8u: goto label_32dfe8;
        case 0x32dfecu: goto label_32dfec;
        case 0x32dff0u: goto label_32dff0;
        case 0x32dff4u: goto label_32dff4;
        case 0x32dff8u: goto label_32dff8;
        case 0x32dffcu: goto label_32dffc;
        case 0x32e000u: goto label_32e000;
        case 0x32e004u: goto label_32e004;
        case 0x32e008u: goto label_32e008;
        case 0x32e00cu: goto label_32e00c;
        case 0x32e010u: goto label_32e010;
        case 0x32e014u: goto label_32e014;
        case 0x32e018u: goto label_32e018;
        case 0x32e01cu: goto label_32e01c;
        case 0x32e020u: goto label_32e020;
        case 0x32e024u: goto label_32e024;
        case 0x32e028u: goto label_32e028;
        case 0x32e02cu: goto label_32e02c;
        case 0x32e030u: goto label_32e030;
        case 0x32e034u: goto label_32e034;
        case 0x32e038u: goto label_32e038;
        case 0x32e03cu: goto label_32e03c;
        case 0x32e040u: goto label_32e040;
        case 0x32e044u: goto label_32e044;
        case 0x32e048u: goto label_32e048;
        case 0x32e04cu: goto label_32e04c;
        case 0x32e050u: goto label_32e050;
        case 0x32e054u: goto label_32e054;
        case 0x32e058u: goto label_32e058;
        case 0x32e05cu: goto label_32e05c;
        case 0x32e060u: goto label_32e060;
        case 0x32e064u: goto label_32e064;
        case 0x32e068u: goto label_32e068;
        case 0x32e06cu: goto label_32e06c;
        case 0x32e070u: goto label_32e070;
        case 0x32e074u: goto label_32e074;
        case 0x32e078u: goto label_32e078;
        case 0x32e07cu: goto label_32e07c;
        case 0x32e080u: goto label_32e080;
        case 0x32e084u: goto label_32e084;
        case 0x32e088u: goto label_32e088;
        case 0x32e08cu: goto label_32e08c;
        case 0x32e090u: goto label_32e090;
        case 0x32e094u: goto label_32e094;
        case 0x32e098u: goto label_32e098;
        case 0x32e09cu: goto label_32e09c;
        case 0x32e0a0u: goto label_32e0a0;
        case 0x32e0a4u: goto label_32e0a4;
        case 0x32e0a8u: goto label_32e0a8;
        case 0x32e0acu: goto label_32e0ac;
        case 0x32e0b0u: goto label_32e0b0;
        case 0x32e0b4u: goto label_32e0b4;
        case 0x32e0b8u: goto label_32e0b8;
        case 0x32e0bcu: goto label_32e0bc;
        case 0x32e0c0u: goto label_32e0c0;
        case 0x32e0c4u: goto label_32e0c4;
        case 0x32e0c8u: goto label_32e0c8;
        case 0x32e0ccu: goto label_32e0cc;
        case 0x32e0d0u: goto label_32e0d0;
        case 0x32e0d4u: goto label_32e0d4;
        case 0x32e0d8u: goto label_32e0d8;
        case 0x32e0dcu: goto label_32e0dc;
        case 0x32e0e0u: goto label_32e0e0;
        case 0x32e0e4u: goto label_32e0e4;
        case 0x32e0e8u: goto label_32e0e8;
        case 0x32e0ecu: goto label_32e0ec;
        case 0x32e0f0u: goto label_32e0f0;
        case 0x32e0f4u: goto label_32e0f4;
        case 0x32e0f8u: goto label_32e0f8;
        case 0x32e0fcu: goto label_32e0fc;
        case 0x32e100u: goto label_32e100;
        case 0x32e104u: goto label_32e104;
        case 0x32e108u: goto label_32e108;
        case 0x32e10cu: goto label_32e10c;
        case 0x32e110u: goto label_32e110;
        case 0x32e114u: goto label_32e114;
        case 0x32e118u: goto label_32e118;
        case 0x32e11cu: goto label_32e11c;
        case 0x32e120u: goto label_32e120;
        case 0x32e124u: goto label_32e124;
        case 0x32e128u: goto label_32e128;
        case 0x32e12cu: goto label_32e12c;
        case 0x32e130u: goto label_32e130;
        case 0x32e134u: goto label_32e134;
        case 0x32e138u: goto label_32e138;
        case 0x32e13cu: goto label_32e13c;
        case 0x32e140u: goto label_32e140;
        case 0x32e144u: goto label_32e144;
        case 0x32e148u: goto label_32e148;
        case 0x32e14cu: goto label_32e14c;
        case 0x32e150u: goto label_32e150;
        case 0x32e154u: goto label_32e154;
        case 0x32e158u: goto label_32e158;
        case 0x32e15cu: goto label_32e15c;
        case 0x32e160u: goto label_32e160;
        case 0x32e164u: goto label_32e164;
        case 0x32e168u: goto label_32e168;
        case 0x32e16cu: goto label_32e16c;
        case 0x32e170u: goto label_32e170;
        case 0x32e174u: goto label_32e174;
        case 0x32e178u: goto label_32e178;
        case 0x32e17cu: goto label_32e17c;
        case 0x32e180u: goto label_32e180;
        case 0x32e184u: goto label_32e184;
        case 0x32e188u: goto label_32e188;
        case 0x32e18cu: goto label_32e18c;
        case 0x32e190u: goto label_32e190;
        case 0x32e194u: goto label_32e194;
        case 0x32e198u: goto label_32e198;
        case 0x32e19cu: goto label_32e19c;
        case 0x32e1a0u: goto label_32e1a0;
        case 0x32e1a4u: goto label_32e1a4;
        case 0x32e1a8u: goto label_32e1a8;
        case 0x32e1acu: goto label_32e1ac;
        case 0x32e1b0u: goto label_32e1b0;
        case 0x32e1b4u: goto label_32e1b4;
        case 0x32e1b8u: goto label_32e1b8;
        case 0x32e1bcu: goto label_32e1bc;
        case 0x32e1c0u: goto label_32e1c0;
        case 0x32e1c4u: goto label_32e1c4;
        case 0x32e1c8u: goto label_32e1c8;
        case 0x32e1ccu: goto label_32e1cc;
        case 0x32e1d0u: goto label_32e1d0;
        case 0x32e1d4u: goto label_32e1d4;
        case 0x32e1d8u: goto label_32e1d8;
        case 0x32e1dcu: goto label_32e1dc;
        case 0x32e1e0u: goto label_32e1e0;
        case 0x32e1e4u: goto label_32e1e4;
        case 0x32e1e8u: goto label_32e1e8;
        case 0x32e1ecu: goto label_32e1ec;
        case 0x32e1f0u: goto label_32e1f0;
        case 0x32e1f4u: goto label_32e1f4;
        case 0x32e1f8u: goto label_32e1f8;
        case 0x32e1fcu: goto label_32e1fc;
        case 0x32e200u: goto label_32e200;
        case 0x32e204u: goto label_32e204;
        case 0x32e208u: goto label_32e208;
        case 0x32e20cu: goto label_32e20c;
        case 0x32e210u: goto label_32e210;
        case 0x32e214u: goto label_32e214;
        case 0x32e218u: goto label_32e218;
        case 0x32e21cu: goto label_32e21c;
        case 0x32e220u: goto label_32e220;
        case 0x32e224u: goto label_32e224;
        case 0x32e228u: goto label_32e228;
        case 0x32e22cu: goto label_32e22c;
        case 0x32e230u: goto label_32e230;
        case 0x32e234u: goto label_32e234;
        case 0x32e238u: goto label_32e238;
        case 0x32e23cu: goto label_32e23c;
        case 0x32e240u: goto label_32e240;
        case 0x32e244u: goto label_32e244;
        case 0x32e248u: goto label_32e248;
        case 0x32e24cu: goto label_32e24c;
        case 0x32e250u: goto label_32e250;
        case 0x32e254u: goto label_32e254;
        case 0x32e258u: goto label_32e258;
        case 0x32e25cu: goto label_32e25c;
        case 0x32e260u: goto label_32e260;
        case 0x32e264u: goto label_32e264;
        case 0x32e268u: goto label_32e268;
        case 0x32e26cu: goto label_32e26c;
        case 0x32e270u: goto label_32e270;
        case 0x32e274u: goto label_32e274;
        case 0x32e278u: goto label_32e278;
        case 0x32e27cu: goto label_32e27c;
        case 0x32e280u: goto label_32e280;
        case 0x32e284u: goto label_32e284;
        case 0x32e288u: goto label_32e288;
        case 0x32e28cu: goto label_32e28c;
        case 0x32e290u: goto label_32e290;
        case 0x32e294u: goto label_32e294;
        case 0x32e298u: goto label_32e298;
        case 0x32e29cu: goto label_32e29c;
        case 0x32e2a0u: goto label_32e2a0;
        case 0x32e2a4u: goto label_32e2a4;
        case 0x32e2a8u: goto label_32e2a8;
        case 0x32e2acu: goto label_32e2ac;
        case 0x32e2b0u: goto label_32e2b0;
        case 0x32e2b4u: goto label_32e2b4;
        case 0x32e2b8u: goto label_32e2b8;
        case 0x32e2bcu: goto label_32e2bc;
        case 0x32e2c0u: goto label_32e2c0;
        case 0x32e2c4u: goto label_32e2c4;
        case 0x32e2c8u: goto label_32e2c8;
        case 0x32e2ccu: goto label_32e2cc;
        case 0x32e2d0u: goto label_32e2d0;
        case 0x32e2d4u: goto label_32e2d4;
        case 0x32e2d8u: goto label_32e2d8;
        case 0x32e2dcu: goto label_32e2dc;
        case 0x32e2e0u: goto label_32e2e0;
        case 0x32e2e4u: goto label_32e2e4;
        case 0x32e2e8u: goto label_32e2e8;
        case 0x32e2ecu: goto label_32e2ec;
        case 0x32e2f0u: goto label_32e2f0;
        case 0x32e2f4u: goto label_32e2f4;
        case 0x32e2f8u: goto label_32e2f8;
        case 0x32e2fcu: goto label_32e2fc;
        case 0x32e300u: goto label_32e300;
        case 0x32e304u: goto label_32e304;
        case 0x32e308u: goto label_32e308;
        case 0x32e30cu: goto label_32e30c;
        case 0x32e310u: goto label_32e310;
        case 0x32e314u: goto label_32e314;
        case 0x32e318u: goto label_32e318;
        case 0x32e31cu: goto label_32e31c;
        case 0x32e320u: goto label_32e320;
        case 0x32e324u: goto label_32e324;
        case 0x32e328u: goto label_32e328;
        case 0x32e32cu: goto label_32e32c;
        case 0x32e330u: goto label_32e330;
        case 0x32e334u: goto label_32e334;
        case 0x32e338u: goto label_32e338;
        case 0x32e33cu: goto label_32e33c;
        case 0x32e340u: goto label_32e340;
        case 0x32e344u: goto label_32e344;
        case 0x32e348u: goto label_32e348;
        case 0x32e34cu: goto label_32e34c;
        case 0x32e350u: goto label_32e350;
        case 0x32e354u: goto label_32e354;
        case 0x32e358u: goto label_32e358;
        case 0x32e35cu: goto label_32e35c;
        case 0x32e360u: goto label_32e360;
        case 0x32e364u: goto label_32e364;
        case 0x32e368u: goto label_32e368;
        case 0x32e36cu: goto label_32e36c;
        case 0x32e370u: goto label_32e370;
        case 0x32e374u: goto label_32e374;
        case 0x32e378u: goto label_32e378;
        case 0x32e37cu: goto label_32e37c;
        case 0x32e380u: goto label_32e380;
        case 0x32e384u: goto label_32e384;
        case 0x32e388u: goto label_32e388;
        case 0x32e38cu: goto label_32e38c;
        case 0x32e390u: goto label_32e390;
        case 0x32e394u: goto label_32e394;
        case 0x32e398u: goto label_32e398;
        case 0x32e39cu: goto label_32e39c;
        case 0x32e3a0u: goto label_32e3a0;
        case 0x32e3a4u: goto label_32e3a4;
        case 0x32e3a8u: goto label_32e3a8;
        case 0x32e3acu: goto label_32e3ac;
        case 0x32e3b0u: goto label_32e3b0;
        case 0x32e3b4u: goto label_32e3b4;
        case 0x32e3b8u: goto label_32e3b8;
        case 0x32e3bcu: goto label_32e3bc;
        case 0x32e3c0u: goto label_32e3c0;
        case 0x32e3c4u: goto label_32e3c4;
        case 0x32e3c8u: goto label_32e3c8;
        case 0x32e3ccu: goto label_32e3cc;
        case 0x32e3d0u: goto label_32e3d0;
        case 0x32e3d4u: goto label_32e3d4;
        case 0x32e3d8u: goto label_32e3d8;
        case 0x32e3dcu: goto label_32e3dc;
        case 0x32e3e0u: goto label_32e3e0;
        case 0x32e3e4u: goto label_32e3e4;
        case 0x32e3e8u: goto label_32e3e8;
        case 0x32e3ecu: goto label_32e3ec;
        case 0x32e3f0u: goto label_32e3f0;
        case 0x32e3f4u: goto label_32e3f4;
        case 0x32e3f8u: goto label_32e3f8;
        case 0x32e3fcu: goto label_32e3fc;
        case 0x32e400u: goto label_32e400;
        case 0x32e404u: goto label_32e404;
        case 0x32e408u: goto label_32e408;
        case 0x32e40cu: goto label_32e40c;
        case 0x32e410u: goto label_32e410;
        case 0x32e414u: goto label_32e414;
        case 0x32e418u: goto label_32e418;
        case 0x32e41cu: goto label_32e41c;
        case 0x32e420u: goto label_32e420;
        case 0x32e424u: goto label_32e424;
        case 0x32e428u: goto label_32e428;
        case 0x32e42cu: goto label_32e42c;
        case 0x32e430u: goto label_32e430;
        case 0x32e434u: goto label_32e434;
        case 0x32e438u: goto label_32e438;
        case 0x32e43cu: goto label_32e43c;
        case 0x32e440u: goto label_32e440;
        case 0x32e444u: goto label_32e444;
        case 0x32e448u: goto label_32e448;
        case 0x32e44cu: goto label_32e44c;
        case 0x32e450u: goto label_32e450;
        case 0x32e454u: goto label_32e454;
        case 0x32e458u: goto label_32e458;
        case 0x32e45cu: goto label_32e45c;
        case 0x32e460u: goto label_32e460;
        case 0x32e464u: goto label_32e464;
        case 0x32e468u: goto label_32e468;
        case 0x32e46cu: goto label_32e46c;
        case 0x32e470u: goto label_32e470;
        case 0x32e474u: goto label_32e474;
        case 0x32e478u: goto label_32e478;
        case 0x32e47cu: goto label_32e47c;
        case 0x32e480u: goto label_32e480;
        case 0x32e484u: goto label_32e484;
        case 0x32e488u: goto label_32e488;
        case 0x32e48cu: goto label_32e48c;
        case 0x32e490u: goto label_32e490;
        case 0x32e494u: goto label_32e494;
        case 0x32e498u: goto label_32e498;
        case 0x32e49cu: goto label_32e49c;
        case 0x32e4a0u: goto label_32e4a0;
        case 0x32e4a4u: goto label_32e4a4;
        case 0x32e4a8u: goto label_32e4a8;
        case 0x32e4acu: goto label_32e4ac;
        case 0x32e4b0u: goto label_32e4b0;
        case 0x32e4b4u: goto label_32e4b4;
        case 0x32e4b8u: goto label_32e4b8;
        case 0x32e4bcu: goto label_32e4bc;
        case 0x32e4c0u: goto label_32e4c0;
        case 0x32e4c4u: goto label_32e4c4;
        case 0x32e4c8u: goto label_32e4c8;
        case 0x32e4ccu: goto label_32e4cc;
        case 0x32e4d0u: goto label_32e4d0;
        case 0x32e4d4u: goto label_32e4d4;
        case 0x32e4d8u: goto label_32e4d8;
        case 0x32e4dcu: goto label_32e4dc;
        case 0x32e4e0u: goto label_32e4e0;
        case 0x32e4e4u: goto label_32e4e4;
        case 0x32e4e8u: goto label_32e4e8;
        case 0x32e4ecu: goto label_32e4ec;
        case 0x32e4f0u: goto label_32e4f0;
        case 0x32e4f4u: goto label_32e4f4;
        case 0x32e4f8u: goto label_32e4f8;
        case 0x32e4fcu: goto label_32e4fc;
        case 0x32e500u: goto label_32e500;
        case 0x32e504u: goto label_32e504;
        case 0x32e508u: goto label_32e508;
        case 0x32e50cu: goto label_32e50c;
        case 0x32e510u: goto label_32e510;
        case 0x32e514u: goto label_32e514;
        case 0x32e518u: goto label_32e518;
        case 0x32e51cu: goto label_32e51c;
        case 0x32e520u: goto label_32e520;
        case 0x32e524u: goto label_32e524;
        case 0x32e528u: goto label_32e528;
        case 0x32e52cu: goto label_32e52c;
        case 0x32e530u: goto label_32e530;
        case 0x32e534u: goto label_32e534;
        case 0x32e538u: goto label_32e538;
        case 0x32e53cu: goto label_32e53c;
        case 0x32e540u: goto label_32e540;
        case 0x32e544u: goto label_32e544;
        case 0x32e548u: goto label_32e548;
        case 0x32e54cu: goto label_32e54c;
        case 0x32e550u: goto label_32e550;
        case 0x32e554u: goto label_32e554;
        case 0x32e558u: goto label_32e558;
        case 0x32e55cu: goto label_32e55c;
        case 0x32e560u: goto label_32e560;
        case 0x32e564u: goto label_32e564;
        case 0x32e568u: goto label_32e568;
        case 0x32e56cu: goto label_32e56c;
        case 0x32e570u: goto label_32e570;
        case 0x32e574u: goto label_32e574;
        case 0x32e578u: goto label_32e578;
        case 0x32e57cu: goto label_32e57c;
        case 0x32e580u: goto label_32e580;
        case 0x32e584u: goto label_32e584;
        case 0x32e588u: goto label_32e588;
        case 0x32e58cu: goto label_32e58c;
        case 0x32e590u: goto label_32e590;
        case 0x32e594u: goto label_32e594;
        case 0x32e598u: goto label_32e598;
        case 0x32e59cu: goto label_32e59c;
        case 0x32e5a0u: goto label_32e5a0;
        case 0x32e5a4u: goto label_32e5a4;
        case 0x32e5a8u: goto label_32e5a8;
        case 0x32e5acu: goto label_32e5ac;
        case 0x32e5b0u: goto label_32e5b0;
        case 0x32e5b4u: goto label_32e5b4;
        case 0x32e5b8u: goto label_32e5b8;
        case 0x32e5bcu: goto label_32e5bc;
        case 0x32e5c0u: goto label_32e5c0;
        case 0x32e5c4u: goto label_32e5c4;
        case 0x32e5c8u: goto label_32e5c8;
        case 0x32e5ccu: goto label_32e5cc;
        case 0x32e5d0u: goto label_32e5d0;
        case 0x32e5d4u: goto label_32e5d4;
        case 0x32e5d8u: goto label_32e5d8;
        case 0x32e5dcu: goto label_32e5dc;
        case 0x32e5e0u: goto label_32e5e0;
        case 0x32e5e4u: goto label_32e5e4;
        case 0x32e5e8u: goto label_32e5e8;
        case 0x32e5ecu: goto label_32e5ec;
        case 0x32e5f0u: goto label_32e5f0;
        case 0x32e5f4u: goto label_32e5f4;
        case 0x32e5f8u: goto label_32e5f8;
        case 0x32e5fcu: goto label_32e5fc;
        case 0x32e600u: goto label_32e600;
        case 0x32e604u: goto label_32e604;
        case 0x32e608u: goto label_32e608;
        case 0x32e60cu: goto label_32e60c;
        case 0x32e610u: goto label_32e610;
        case 0x32e614u: goto label_32e614;
        case 0x32e618u: goto label_32e618;
        case 0x32e61cu: goto label_32e61c;
        case 0x32e620u: goto label_32e620;
        case 0x32e624u: goto label_32e624;
        case 0x32e628u: goto label_32e628;
        case 0x32e62cu: goto label_32e62c;
        case 0x32e630u: goto label_32e630;
        case 0x32e634u: goto label_32e634;
        case 0x32e638u: goto label_32e638;
        case 0x32e63cu: goto label_32e63c;
        case 0x32e640u: goto label_32e640;
        case 0x32e644u: goto label_32e644;
        case 0x32e648u: goto label_32e648;
        case 0x32e64cu: goto label_32e64c;
        case 0x32e650u: goto label_32e650;
        case 0x32e654u: goto label_32e654;
        case 0x32e658u: goto label_32e658;
        case 0x32e65cu: goto label_32e65c;
        case 0x32e660u: goto label_32e660;
        case 0x32e664u: goto label_32e664;
        case 0x32e668u: goto label_32e668;
        case 0x32e66cu: goto label_32e66c;
        case 0x32e670u: goto label_32e670;
        case 0x32e674u: goto label_32e674;
        case 0x32e678u: goto label_32e678;
        case 0x32e67cu: goto label_32e67c;
        case 0x32e680u: goto label_32e680;
        case 0x32e684u: goto label_32e684;
        case 0x32e688u: goto label_32e688;
        case 0x32e68cu: goto label_32e68c;
        case 0x32e690u: goto label_32e690;
        case 0x32e694u: goto label_32e694;
        case 0x32e698u: goto label_32e698;
        case 0x32e69cu: goto label_32e69c;
        case 0x32e6a0u: goto label_32e6a0;
        case 0x32e6a4u: goto label_32e6a4;
        case 0x32e6a8u: goto label_32e6a8;
        case 0x32e6acu: goto label_32e6ac;
        case 0x32e6b0u: goto label_32e6b0;
        case 0x32e6b4u: goto label_32e6b4;
        case 0x32e6b8u: goto label_32e6b8;
        case 0x32e6bcu: goto label_32e6bc;
        case 0x32e6c0u: goto label_32e6c0;
        case 0x32e6c4u: goto label_32e6c4;
        case 0x32e6c8u: goto label_32e6c8;
        case 0x32e6ccu: goto label_32e6cc;
        case 0x32e6d0u: goto label_32e6d0;
        case 0x32e6d4u: goto label_32e6d4;
        case 0x32e6d8u: goto label_32e6d8;
        case 0x32e6dcu: goto label_32e6dc;
        case 0x32e6e0u: goto label_32e6e0;
        case 0x32e6e4u: goto label_32e6e4;
        case 0x32e6e8u: goto label_32e6e8;
        case 0x32e6ecu: goto label_32e6ec;
        case 0x32e6f0u: goto label_32e6f0;
        case 0x32e6f4u: goto label_32e6f4;
        case 0x32e6f8u: goto label_32e6f8;
        case 0x32e6fcu: goto label_32e6fc;
        case 0x32e700u: goto label_32e700;
        case 0x32e704u: goto label_32e704;
        case 0x32e708u: goto label_32e708;
        case 0x32e70cu: goto label_32e70c;
        case 0x32e710u: goto label_32e710;
        case 0x32e714u: goto label_32e714;
        case 0x32e718u: goto label_32e718;
        case 0x32e71cu: goto label_32e71c;
        case 0x32e720u: goto label_32e720;
        case 0x32e724u: goto label_32e724;
        case 0x32e728u: goto label_32e728;
        case 0x32e72cu: goto label_32e72c;
        case 0x32e730u: goto label_32e730;
        case 0x32e734u: goto label_32e734;
        case 0x32e738u: goto label_32e738;
        case 0x32e73cu: goto label_32e73c;
        case 0x32e740u: goto label_32e740;
        case 0x32e744u: goto label_32e744;
        case 0x32e748u: goto label_32e748;
        case 0x32e74cu: goto label_32e74c;
        case 0x32e750u: goto label_32e750;
        case 0x32e754u: goto label_32e754;
        case 0x32e758u: goto label_32e758;
        case 0x32e75cu: goto label_32e75c;
        case 0x32e760u: goto label_32e760;
        case 0x32e764u: goto label_32e764;
        case 0x32e768u: goto label_32e768;
        case 0x32e76cu: goto label_32e76c;
        case 0x32e770u: goto label_32e770;
        case 0x32e774u: goto label_32e774;
        case 0x32e778u: goto label_32e778;
        case 0x32e77cu: goto label_32e77c;
        case 0x32e780u: goto label_32e780;
        case 0x32e784u: goto label_32e784;
        case 0x32e788u: goto label_32e788;
        case 0x32e78cu: goto label_32e78c;
        case 0x32e790u: goto label_32e790;
        case 0x32e794u: goto label_32e794;
        case 0x32e798u: goto label_32e798;
        case 0x32e79cu: goto label_32e79c;
        case 0x32e7a0u: goto label_32e7a0;
        case 0x32e7a4u: goto label_32e7a4;
        case 0x32e7a8u: goto label_32e7a8;
        case 0x32e7acu: goto label_32e7ac;
        case 0x32e7b0u: goto label_32e7b0;
        case 0x32e7b4u: goto label_32e7b4;
        case 0x32e7b8u: goto label_32e7b8;
        case 0x32e7bcu: goto label_32e7bc;
        case 0x32e7c0u: goto label_32e7c0;
        case 0x32e7c4u: goto label_32e7c4;
        case 0x32e7c8u: goto label_32e7c8;
        case 0x32e7ccu: goto label_32e7cc;
        case 0x32e7d0u: goto label_32e7d0;
        case 0x32e7d4u: goto label_32e7d4;
        case 0x32e7d8u: goto label_32e7d8;
        case 0x32e7dcu: goto label_32e7dc;
        case 0x32e7e0u: goto label_32e7e0;
        case 0x32e7e4u: goto label_32e7e4;
        case 0x32e7e8u: goto label_32e7e8;
        case 0x32e7ecu: goto label_32e7ec;
        case 0x32e7f0u: goto label_32e7f0;
        case 0x32e7f4u: goto label_32e7f4;
        case 0x32e7f8u: goto label_32e7f8;
        case 0x32e7fcu: goto label_32e7fc;
        case 0x32e800u: goto label_32e800;
        case 0x32e804u: goto label_32e804;
        case 0x32e808u: goto label_32e808;
        case 0x32e80cu: goto label_32e80c;
        case 0x32e810u: goto label_32e810;
        case 0x32e814u: goto label_32e814;
        case 0x32e818u: goto label_32e818;
        case 0x32e81cu: goto label_32e81c;
        case 0x32e820u: goto label_32e820;
        case 0x32e824u: goto label_32e824;
        case 0x32e828u: goto label_32e828;
        case 0x32e82cu: goto label_32e82c;
        case 0x32e830u: goto label_32e830;
        case 0x32e834u: goto label_32e834;
        case 0x32e838u: goto label_32e838;
        case 0x32e83cu: goto label_32e83c;
        case 0x32e840u: goto label_32e840;
        case 0x32e844u: goto label_32e844;
        case 0x32e848u: goto label_32e848;
        case 0x32e84cu: goto label_32e84c;
        case 0x32e850u: goto label_32e850;
        case 0x32e854u: goto label_32e854;
        case 0x32e858u: goto label_32e858;
        case 0x32e85cu: goto label_32e85c;
        case 0x32e860u: goto label_32e860;
        case 0x32e864u: goto label_32e864;
        case 0x32e868u: goto label_32e868;
        case 0x32e86cu: goto label_32e86c;
        case 0x32e870u: goto label_32e870;
        case 0x32e874u: goto label_32e874;
        case 0x32e878u: goto label_32e878;
        case 0x32e87cu: goto label_32e87c;
        case 0x32e880u: goto label_32e880;
        case 0x32e884u: goto label_32e884;
        case 0x32e888u: goto label_32e888;
        case 0x32e88cu: goto label_32e88c;
        case 0x32e890u: goto label_32e890;
        case 0x32e894u: goto label_32e894;
        case 0x32e898u: goto label_32e898;
        case 0x32e89cu: goto label_32e89c;
        case 0x32e8a0u: goto label_32e8a0;
        case 0x32e8a4u: goto label_32e8a4;
        case 0x32e8a8u: goto label_32e8a8;
        case 0x32e8acu: goto label_32e8ac;
        case 0x32e8b0u: goto label_32e8b0;
        case 0x32e8b4u: goto label_32e8b4;
        case 0x32e8b8u: goto label_32e8b8;
        case 0x32e8bcu: goto label_32e8bc;
        case 0x32e8c0u: goto label_32e8c0;
        case 0x32e8c4u: goto label_32e8c4;
        case 0x32e8c8u: goto label_32e8c8;
        case 0x32e8ccu: goto label_32e8cc;
        case 0x32e8d0u: goto label_32e8d0;
        case 0x32e8d4u: goto label_32e8d4;
        case 0x32e8d8u: goto label_32e8d8;
        case 0x32e8dcu: goto label_32e8dc;
        case 0x32e8e0u: goto label_32e8e0;
        case 0x32e8e4u: goto label_32e8e4;
        case 0x32e8e8u: goto label_32e8e8;
        case 0x32e8ecu: goto label_32e8ec;
        case 0x32e8f0u: goto label_32e8f0;
        case 0x32e8f4u: goto label_32e8f4;
        case 0x32e8f8u: goto label_32e8f8;
        case 0x32e8fcu: goto label_32e8fc;
        case 0x32e900u: goto label_32e900;
        case 0x32e904u: goto label_32e904;
        case 0x32e908u: goto label_32e908;
        case 0x32e90cu: goto label_32e90c;
        case 0x32e910u: goto label_32e910;
        case 0x32e914u: goto label_32e914;
        case 0x32e918u: goto label_32e918;
        case 0x32e91cu: goto label_32e91c;
        case 0x32e920u: goto label_32e920;
        case 0x32e924u: goto label_32e924;
        case 0x32e928u: goto label_32e928;
        case 0x32e92cu: goto label_32e92c;
        case 0x32e930u: goto label_32e930;
        case 0x32e934u: goto label_32e934;
        case 0x32e938u: goto label_32e938;
        case 0x32e93cu: goto label_32e93c;
        case 0x32e940u: goto label_32e940;
        case 0x32e944u: goto label_32e944;
        case 0x32e948u: goto label_32e948;
        case 0x32e94cu: goto label_32e94c;
        case 0x32e950u: goto label_32e950;
        case 0x32e954u: goto label_32e954;
        case 0x32e958u: goto label_32e958;
        case 0x32e95cu: goto label_32e95c;
        case 0x32e960u: goto label_32e960;
        case 0x32e964u: goto label_32e964;
        case 0x32e968u: goto label_32e968;
        case 0x32e96cu: goto label_32e96c;
        case 0x32e970u: goto label_32e970;
        case 0x32e974u: goto label_32e974;
        case 0x32e978u: goto label_32e978;
        case 0x32e97cu: goto label_32e97c;
        case 0x32e980u: goto label_32e980;
        case 0x32e984u: goto label_32e984;
        case 0x32e988u: goto label_32e988;
        case 0x32e98cu: goto label_32e98c;
        case 0x32e990u: goto label_32e990;
        case 0x32e994u: goto label_32e994;
        case 0x32e998u: goto label_32e998;
        case 0x32e99cu: goto label_32e99c;
        case 0x32e9a0u: goto label_32e9a0;
        case 0x32e9a4u: goto label_32e9a4;
        case 0x32e9a8u: goto label_32e9a8;
        case 0x32e9acu: goto label_32e9ac;
        case 0x32e9b0u: goto label_32e9b0;
        case 0x32e9b4u: goto label_32e9b4;
        case 0x32e9b8u: goto label_32e9b8;
        case 0x32e9bcu: goto label_32e9bc;
        case 0x32e9c0u: goto label_32e9c0;
        case 0x32e9c4u: goto label_32e9c4;
        case 0x32e9c8u: goto label_32e9c8;
        case 0x32e9ccu: goto label_32e9cc;
        case 0x32e9d0u: goto label_32e9d0;
        case 0x32e9d4u: goto label_32e9d4;
        case 0x32e9d8u: goto label_32e9d8;
        case 0x32e9dcu: goto label_32e9dc;
        case 0x32e9e0u: goto label_32e9e0;
        case 0x32e9e4u: goto label_32e9e4;
        case 0x32e9e8u: goto label_32e9e8;
        case 0x32e9ecu: goto label_32e9ec;
        case 0x32e9f0u: goto label_32e9f0;
        case 0x32e9f4u: goto label_32e9f4;
        case 0x32e9f8u: goto label_32e9f8;
        case 0x32e9fcu: goto label_32e9fc;
        case 0x32ea00u: goto label_32ea00;
        case 0x32ea04u: goto label_32ea04;
        case 0x32ea08u: goto label_32ea08;
        case 0x32ea0cu: goto label_32ea0c;
        case 0x32ea10u: goto label_32ea10;
        case 0x32ea14u: goto label_32ea14;
        case 0x32ea18u: goto label_32ea18;
        case 0x32ea1cu: goto label_32ea1c;
        case 0x32ea20u: goto label_32ea20;
        case 0x32ea24u: goto label_32ea24;
        case 0x32ea28u: goto label_32ea28;
        case 0x32ea2cu: goto label_32ea2c;
        case 0x32ea30u: goto label_32ea30;
        case 0x32ea34u: goto label_32ea34;
        case 0x32ea38u: goto label_32ea38;
        case 0x32ea3cu: goto label_32ea3c;
        case 0x32ea40u: goto label_32ea40;
        case 0x32ea44u: goto label_32ea44;
        case 0x32ea48u: goto label_32ea48;
        case 0x32ea4cu: goto label_32ea4c;
        case 0x32ea50u: goto label_32ea50;
        case 0x32ea54u: goto label_32ea54;
        case 0x32ea58u: goto label_32ea58;
        case 0x32ea5cu: goto label_32ea5c;
        case 0x32ea60u: goto label_32ea60;
        case 0x32ea64u: goto label_32ea64;
        case 0x32ea68u: goto label_32ea68;
        case 0x32ea6cu: goto label_32ea6c;
        case 0x32ea70u: goto label_32ea70;
        case 0x32ea74u: goto label_32ea74;
        case 0x32ea78u: goto label_32ea78;
        case 0x32ea7cu: goto label_32ea7c;
        case 0x32ea80u: goto label_32ea80;
        case 0x32ea84u: goto label_32ea84;
        case 0x32ea88u: goto label_32ea88;
        case 0x32ea8cu: goto label_32ea8c;
        case 0x32ea90u: goto label_32ea90;
        case 0x32ea94u: goto label_32ea94;
        case 0x32ea98u: goto label_32ea98;
        case 0x32ea9cu: goto label_32ea9c;
        case 0x32eaa0u: goto label_32eaa0;
        case 0x32eaa4u: goto label_32eaa4;
        case 0x32eaa8u: goto label_32eaa8;
        case 0x32eaacu: goto label_32eaac;
        case 0x32eab0u: goto label_32eab0;
        case 0x32eab4u: goto label_32eab4;
        case 0x32eab8u: goto label_32eab8;
        case 0x32eabcu: goto label_32eabc;
        case 0x32eac0u: goto label_32eac0;
        case 0x32eac4u: goto label_32eac4;
        case 0x32eac8u: goto label_32eac8;
        case 0x32eaccu: goto label_32eacc;
        case 0x32ead0u: goto label_32ead0;
        case 0x32ead4u: goto label_32ead4;
        case 0x32ead8u: goto label_32ead8;
        case 0x32eadcu: goto label_32eadc;
        case 0x32eae0u: goto label_32eae0;
        case 0x32eae4u: goto label_32eae4;
        case 0x32eae8u: goto label_32eae8;
        case 0x32eaecu: goto label_32eaec;
        case 0x32eaf0u: goto label_32eaf0;
        case 0x32eaf4u: goto label_32eaf4;
        case 0x32eaf8u: goto label_32eaf8;
        case 0x32eafcu: goto label_32eafc;
        case 0x32eb00u: goto label_32eb00;
        case 0x32eb04u: goto label_32eb04;
        case 0x32eb08u: goto label_32eb08;
        case 0x32eb0cu: goto label_32eb0c;
        case 0x32eb10u: goto label_32eb10;
        case 0x32eb14u: goto label_32eb14;
        case 0x32eb18u: goto label_32eb18;
        case 0x32eb1cu: goto label_32eb1c;
        case 0x32eb20u: goto label_32eb20;
        case 0x32eb24u: goto label_32eb24;
        case 0x32eb28u: goto label_32eb28;
        case 0x32eb2cu: goto label_32eb2c;
        case 0x32eb30u: goto label_32eb30;
        case 0x32eb34u: goto label_32eb34;
        case 0x32eb38u: goto label_32eb38;
        case 0x32eb3cu: goto label_32eb3c;
        case 0x32eb40u: goto label_32eb40;
        case 0x32eb44u: goto label_32eb44;
        case 0x32eb48u: goto label_32eb48;
        case 0x32eb4cu: goto label_32eb4c;
        case 0x32eb50u: goto label_32eb50;
        case 0x32eb54u: goto label_32eb54;
        case 0x32eb58u: goto label_32eb58;
        case 0x32eb5cu: goto label_32eb5c;
        case 0x32eb60u: goto label_32eb60;
        case 0x32eb64u: goto label_32eb64;
        case 0x32eb68u: goto label_32eb68;
        case 0x32eb6cu: goto label_32eb6c;
        case 0x32eb70u: goto label_32eb70;
        case 0x32eb74u: goto label_32eb74;
        case 0x32eb78u: goto label_32eb78;
        case 0x32eb7cu: goto label_32eb7c;
        case 0x32eb80u: goto label_32eb80;
        case 0x32eb84u: goto label_32eb84;
        case 0x32eb88u: goto label_32eb88;
        case 0x32eb8cu: goto label_32eb8c;
        case 0x32eb90u: goto label_32eb90;
        case 0x32eb94u: goto label_32eb94;
        case 0x32eb98u: goto label_32eb98;
        case 0x32eb9cu: goto label_32eb9c;
        case 0x32eba0u: goto label_32eba0;
        case 0x32eba4u: goto label_32eba4;
        case 0x32eba8u: goto label_32eba8;
        case 0x32ebacu: goto label_32ebac;
        case 0x32ebb0u: goto label_32ebb0;
        case 0x32ebb4u: goto label_32ebb4;
        case 0x32ebb8u: goto label_32ebb8;
        case 0x32ebbcu: goto label_32ebbc;
        case 0x32ebc0u: goto label_32ebc0;
        case 0x32ebc4u: goto label_32ebc4;
        case 0x32ebc8u: goto label_32ebc8;
        case 0x32ebccu: goto label_32ebcc;
        case 0x32ebd0u: goto label_32ebd0;
        case 0x32ebd4u: goto label_32ebd4;
        case 0x32ebd8u: goto label_32ebd8;
        case 0x32ebdcu: goto label_32ebdc;
        case 0x32ebe0u: goto label_32ebe0;
        case 0x32ebe4u: goto label_32ebe4;
        case 0x32ebe8u: goto label_32ebe8;
        case 0x32ebecu: goto label_32ebec;
        case 0x32ebf0u: goto label_32ebf0;
        case 0x32ebf4u: goto label_32ebf4;
        case 0x32ebf8u: goto label_32ebf8;
        case 0x32ebfcu: goto label_32ebfc;
        case 0x32ec00u: goto label_32ec00;
        case 0x32ec04u: goto label_32ec04;
        case 0x32ec08u: goto label_32ec08;
        case 0x32ec0cu: goto label_32ec0c;
        case 0x32ec10u: goto label_32ec10;
        case 0x32ec14u: goto label_32ec14;
        case 0x32ec18u: goto label_32ec18;
        case 0x32ec1cu: goto label_32ec1c;
        case 0x32ec20u: goto label_32ec20;
        case 0x32ec24u: goto label_32ec24;
        case 0x32ec28u: goto label_32ec28;
        case 0x32ec2cu: goto label_32ec2c;
        case 0x32ec30u: goto label_32ec30;
        case 0x32ec34u: goto label_32ec34;
        case 0x32ec38u: goto label_32ec38;
        case 0x32ec3cu: goto label_32ec3c;
        case 0x32ec40u: goto label_32ec40;
        case 0x32ec44u: goto label_32ec44;
        case 0x32ec48u: goto label_32ec48;
        case 0x32ec4cu: goto label_32ec4c;
        case 0x32ec50u: goto label_32ec50;
        case 0x32ec54u: goto label_32ec54;
        case 0x32ec58u: goto label_32ec58;
        case 0x32ec5cu: goto label_32ec5c;
        case 0x32ec60u: goto label_32ec60;
        case 0x32ec64u: goto label_32ec64;
        case 0x32ec68u: goto label_32ec68;
        case 0x32ec6cu: goto label_32ec6c;
        case 0x32ec70u: goto label_32ec70;
        case 0x32ec74u: goto label_32ec74;
        case 0x32ec78u: goto label_32ec78;
        case 0x32ec7cu: goto label_32ec7c;
        case 0x32ec80u: goto label_32ec80;
        case 0x32ec84u: goto label_32ec84;
        case 0x32ec88u: goto label_32ec88;
        case 0x32ec8cu: goto label_32ec8c;
        case 0x32ec90u: goto label_32ec90;
        case 0x32ec94u: goto label_32ec94;
        case 0x32ec98u: goto label_32ec98;
        case 0x32ec9cu: goto label_32ec9c;
        case 0x32eca0u: goto label_32eca0;
        case 0x32eca4u: goto label_32eca4;
        case 0x32eca8u: goto label_32eca8;
        case 0x32ecacu: goto label_32ecac;
        case 0x32ecb0u: goto label_32ecb0;
        case 0x32ecb4u: goto label_32ecb4;
        case 0x32ecb8u: goto label_32ecb8;
        case 0x32ecbcu: goto label_32ecbc;
        case 0x32ecc0u: goto label_32ecc0;
        case 0x32ecc4u: goto label_32ecc4;
        case 0x32ecc8u: goto label_32ecc8;
        case 0x32ecccu: goto label_32eccc;
        case 0x32ecd0u: goto label_32ecd0;
        case 0x32ecd4u: goto label_32ecd4;
        case 0x32ecd8u: goto label_32ecd8;
        case 0x32ecdcu: goto label_32ecdc;
        case 0x32ece0u: goto label_32ece0;
        case 0x32ece4u: goto label_32ece4;
        case 0x32ece8u: goto label_32ece8;
        case 0x32ececu: goto label_32ecec;
        case 0x32ecf0u: goto label_32ecf0;
        case 0x32ecf4u: goto label_32ecf4;
        case 0x32ecf8u: goto label_32ecf8;
        case 0x32ecfcu: goto label_32ecfc;
        case 0x32ed00u: goto label_32ed00;
        case 0x32ed04u: goto label_32ed04;
        case 0x32ed08u: goto label_32ed08;
        case 0x32ed0cu: goto label_32ed0c;
        case 0x32ed10u: goto label_32ed10;
        case 0x32ed14u: goto label_32ed14;
        case 0x32ed18u: goto label_32ed18;
        case 0x32ed1cu: goto label_32ed1c;
        case 0x32ed20u: goto label_32ed20;
        case 0x32ed24u: goto label_32ed24;
        case 0x32ed28u: goto label_32ed28;
        case 0x32ed2cu: goto label_32ed2c;
        case 0x32ed30u: goto label_32ed30;
        case 0x32ed34u: goto label_32ed34;
        case 0x32ed38u: goto label_32ed38;
        case 0x32ed3cu: goto label_32ed3c;
        case 0x32ed40u: goto label_32ed40;
        case 0x32ed44u: goto label_32ed44;
        case 0x32ed48u: goto label_32ed48;
        case 0x32ed4cu: goto label_32ed4c;
        case 0x32ed50u: goto label_32ed50;
        case 0x32ed54u: goto label_32ed54;
        case 0x32ed58u: goto label_32ed58;
        case 0x32ed5cu: goto label_32ed5c;
        case 0x32ed60u: goto label_32ed60;
        case 0x32ed64u: goto label_32ed64;
        case 0x32ed68u: goto label_32ed68;
        case 0x32ed6cu: goto label_32ed6c;
        case 0x32ed70u: goto label_32ed70;
        case 0x32ed74u: goto label_32ed74;
        case 0x32ed78u: goto label_32ed78;
        case 0x32ed7cu: goto label_32ed7c;
        case 0x32ed80u: goto label_32ed80;
        case 0x32ed84u: goto label_32ed84;
        case 0x32ed88u: goto label_32ed88;
        case 0x32ed8cu: goto label_32ed8c;
        case 0x32ed90u: goto label_32ed90;
        case 0x32ed94u: goto label_32ed94;
        case 0x32ed98u: goto label_32ed98;
        case 0x32ed9cu: goto label_32ed9c;
        case 0x32eda0u: goto label_32eda0;
        case 0x32eda4u: goto label_32eda4;
        case 0x32eda8u: goto label_32eda8;
        case 0x32edacu: goto label_32edac;
        case 0x32edb0u: goto label_32edb0;
        case 0x32edb4u: goto label_32edb4;
        case 0x32edb8u: goto label_32edb8;
        case 0x32edbcu: goto label_32edbc;
        case 0x32edc0u: goto label_32edc0;
        case 0x32edc4u: goto label_32edc4;
        case 0x32edc8u: goto label_32edc8;
        case 0x32edccu: goto label_32edcc;
        case 0x32edd0u: goto label_32edd0;
        case 0x32edd4u: goto label_32edd4;
        case 0x32edd8u: goto label_32edd8;
        case 0x32eddcu: goto label_32eddc;
        case 0x32ede0u: goto label_32ede0;
        case 0x32ede4u: goto label_32ede4;
        case 0x32ede8u: goto label_32ede8;
        case 0x32edecu: goto label_32edec;
        case 0x32edf0u: goto label_32edf0;
        case 0x32edf4u: goto label_32edf4;
        case 0x32edf8u: goto label_32edf8;
        case 0x32edfcu: goto label_32edfc;
        case 0x32ee00u: goto label_32ee00;
        case 0x32ee04u: goto label_32ee04;
        case 0x32ee08u: goto label_32ee08;
        case 0x32ee0cu: goto label_32ee0c;
        case 0x32ee10u: goto label_32ee10;
        case 0x32ee14u: goto label_32ee14;
        case 0x32ee18u: goto label_32ee18;
        case 0x32ee1cu: goto label_32ee1c;
        case 0x32ee20u: goto label_32ee20;
        case 0x32ee24u: goto label_32ee24;
        case 0x32ee28u: goto label_32ee28;
        case 0x32ee2cu: goto label_32ee2c;
        case 0x32ee30u: goto label_32ee30;
        case 0x32ee34u: goto label_32ee34;
        case 0x32ee38u: goto label_32ee38;
        case 0x32ee3cu: goto label_32ee3c;
        case 0x32ee40u: goto label_32ee40;
        case 0x32ee44u: goto label_32ee44;
        case 0x32ee48u: goto label_32ee48;
        case 0x32ee4cu: goto label_32ee4c;
        case 0x32ee50u: goto label_32ee50;
        case 0x32ee54u: goto label_32ee54;
        case 0x32ee58u: goto label_32ee58;
        case 0x32ee5cu: goto label_32ee5c;
        case 0x32ee60u: goto label_32ee60;
        case 0x32ee64u: goto label_32ee64;
        case 0x32ee68u: goto label_32ee68;
        case 0x32ee6cu: goto label_32ee6c;
        case 0x32ee70u: goto label_32ee70;
        case 0x32ee74u: goto label_32ee74;
        case 0x32ee78u: goto label_32ee78;
        case 0x32ee7cu: goto label_32ee7c;
        case 0x32ee80u: goto label_32ee80;
        case 0x32ee84u: goto label_32ee84;
        case 0x32ee88u: goto label_32ee88;
        case 0x32ee8cu: goto label_32ee8c;
        case 0x32ee90u: goto label_32ee90;
        case 0x32ee94u: goto label_32ee94;
        case 0x32ee98u: goto label_32ee98;
        case 0x32ee9cu: goto label_32ee9c;
        case 0x32eea0u: goto label_32eea0;
        case 0x32eea4u: goto label_32eea4;
        case 0x32eea8u: goto label_32eea8;
        case 0x32eeacu: goto label_32eeac;
        case 0x32eeb0u: goto label_32eeb0;
        case 0x32eeb4u: goto label_32eeb4;
        case 0x32eeb8u: goto label_32eeb8;
        case 0x32eebcu: goto label_32eebc;
        case 0x32eec0u: goto label_32eec0;
        case 0x32eec4u: goto label_32eec4;
        case 0x32eec8u: goto label_32eec8;
        case 0x32eeccu: goto label_32eecc;
        case 0x32eed0u: goto label_32eed0;
        case 0x32eed4u: goto label_32eed4;
        case 0x32eed8u: goto label_32eed8;
        case 0x32eedcu: goto label_32eedc;
        case 0x32eee0u: goto label_32eee0;
        case 0x32eee4u: goto label_32eee4;
        case 0x32eee8u: goto label_32eee8;
        case 0x32eeecu: goto label_32eeec;
        case 0x32eef0u: goto label_32eef0;
        case 0x32eef4u: goto label_32eef4;
        case 0x32eef8u: goto label_32eef8;
        case 0x32eefcu: goto label_32eefc;
        case 0x32ef00u: goto label_32ef00;
        case 0x32ef04u: goto label_32ef04;
        case 0x32ef08u: goto label_32ef08;
        case 0x32ef0cu: goto label_32ef0c;
        case 0x32ef10u: goto label_32ef10;
        case 0x32ef14u: goto label_32ef14;
        case 0x32ef18u: goto label_32ef18;
        case 0x32ef1cu: goto label_32ef1c;
        case 0x32ef20u: goto label_32ef20;
        case 0x32ef24u: goto label_32ef24;
        case 0x32ef28u: goto label_32ef28;
        case 0x32ef2cu: goto label_32ef2c;
        case 0x32ef30u: goto label_32ef30;
        case 0x32ef34u: goto label_32ef34;
        case 0x32ef38u: goto label_32ef38;
        case 0x32ef3cu: goto label_32ef3c;
        case 0x32ef40u: goto label_32ef40;
        case 0x32ef44u: goto label_32ef44;
        case 0x32ef48u: goto label_32ef48;
        case 0x32ef4cu: goto label_32ef4c;
        case 0x32ef50u: goto label_32ef50;
        case 0x32ef54u: goto label_32ef54;
        case 0x32ef58u: goto label_32ef58;
        case 0x32ef5cu: goto label_32ef5c;
        case 0x32ef60u: goto label_32ef60;
        case 0x32ef64u: goto label_32ef64;
        case 0x32ef68u: goto label_32ef68;
        case 0x32ef6cu: goto label_32ef6c;
        case 0x32ef70u: goto label_32ef70;
        case 0x32ef74u: goto label_32ef74;
        case 0x32ef78u: goto label_32ef78;
        case 0x32ef7cu: goto label_32ef7c;
        case 0x32ef80u: goto label_32ef80;
        case 0x32ef84u: goto label_32ef84;
        case 0x32ef88u: goto label_32ef88;
        case 0x32ef8cu: goto label_32ef8c;
        case 0x32ef90u: goto label_32ef90;
        case 0x32ef94u: goto label_32ef94;
        case 0x32ef98u: goto label_32ef98;
        case 0x32ef9cu: goto label_32ef9c;
        case 0x32efa0u: goto label_32efa0;
        case 0x32efa4u: goto label_32efa4;
        case 0x32efa8u: goto label_32efa8;
        case 0x32efacu: goto label_32efac;
        case 0x32efb0u: goto label_32efb0;
        case 0x32efb4u: goto label_32efb4;
        case 0x32efb8u: goto label_32efb8;
        case 0x32efbcu: goto label_32efbc;
        case 0x32efc0u: goto label_32efc0;
        case 0x32efc4u: goto label_32efc4;
        case 0x32efc8u: goto label_32efc8;
        case 0x32efccu: goto label_32efcc;
        case 0x32efd0u: goto label_32efd0;
        case 0x32efd4u: goto label_32efd4;
        case 0x32efd8u: goto label_32efd8;
        case 0x32efdcu: goto label_32efdc;
        case 0x32efe0u: goto label_32efe0;
        case 0x32efe4u: goto label_32efe4;
        case 0x32efe8u: goto label_32efe8;
        case 0x32efecu: goto label_32efec;
        case 0x32eff0u: goto label_32eff0;
        case 0x32eff4u: goto label_32eff4;
        case 0x32eff8u: goto label_32eff8;
        case 0x32effcu: goto label_32effc;
        case 0x32f000u: goto label_32f000;
        case 0x32f004u: goto label_32f004;
        case 0x32f008u: goto label_32f008;
        case 0x32f00cu: goto label_32f00c;
        case 0x32f010u: goto label_32f010;
        case 0x32f014u: goto label_32f014;
        case 0x32f018u: goto label_32f018;
        case 0x32f01cu: goto label_32f01c;
        case 0x32f020u: goto label_32f020;
        case 0x32f024u: goto label_32f024;
        case 0x32f028u: goto label_32f028;
        case 0x32f02cu: goto label_32f02c;
        case 0x32f030u: goto label_32f030;
        case 0x32f034u: goto label_32f034;
        case 0x32f038u: goto label_32f038;
        case 0x32f03cu: goto label_32f03c;
        case 0x32f040u: goto label_32f040;
        case 0x32f044u: goto label_32f044;
        case 0x32f048u: goto label_32f048;
        case 0x32f04cu: goto label_32f04c;
        case 0x32f050u: goto label_32f050;
        case 0x32f054u: goto label_32f054;
        case 0x32f058u: goto label_32f058;
        case 0x32f05cu: goto label_32f05c;
        case 0x32f060u: goto label_32f060;
        case 0x32f064u: goto label_32f064;
        case 0x32f068u: goto label_32f068;
        case 0x32f06cu: goto label_32f06c;
        case 0x32f070u: goto label_32f070;
        case 0x32f074u: goto label_32f074;
        case 0x32f078u: goto label_32f078;
        case 0x32f07cu: goto label_32f07c;
        case 0x32f080u: goto label_32f080;
        case 0x32f084u: goto label_32f084;
        case 0x32f088u: goto label_32f088;
        case 0x32f08cu: goto label_32f08c;
        case 0x32f090u: goto label_32f090;
        case 0x32f094u: goto label_32f094;
        case 0x32f098u: goto label_32f098;
        case 0x32f09cu: goto label_32f09c;
        case 0x32f0a0u: goto label_32f0a0;
        case 0x32f0a4u: goto label_32f0a4;
        case 0x32f0a8u: goto label_32f0a8;
        case 0x32f0acu: goto label_32f0ac;
        case 0x32f0b0u: goto label_32f0b0;
        case 0x32f0b4u: goto label_32f0b4;
        case 0x32f0b8u: goto label_32f0b8;
        case 0x32f0bcu: goto label_32f0bc;
        case 0x32f0c0u: goto label_32f0c0;
        case 0x32f0c4u: goto label_32f0c4;
        case 0x32f0c8u: goto label_32f0c8;
        case 0x32f0ccu: goto label_32f0cc;
        case 0x32f0d0u: goto label_32f0d0;
        case 0x32f0d4u: goto label_32f0d4;
        case 0x32f0d8u: goto label_32f0d8;
        case 0x32f0dcu: goto label_32f0dc;
        case 0x32f0e0u: goto label_32f0e0;
        case 0x32f0e4u: goto label_32f0e4;
        case 0x32f0e8u: goto label_32f0e8;
        case 0x32f0ecu: goto label_32f0ec;
        case 0x32f0f0u: goto label_32f0f0;
        case 0x32f0f4u: goto label_32f0f4;
        case 0x32f0f8u: goto label_32f0f8;
        case 0x32f0fcu: goto label_32f0fc;
        case 0x32f100u: goto label_32f100;
        case 0x32f104u: goto label_32f104;
        case 0x32f108u: goto label_32f108;
        case 0x32f10cu: goto label_32f10c;
        case 0x32f110u: goto label_32f110;
        case 0x32f114u: goto label_32f114;
        case 0x32f118u: goto label_32f118;
        case 0x32f11cu: goto label_32f11c;
        case 0x32f120u: goto label_32f120;
        case 0x32f124u: goto label_32f124;
        case 0x32f128u: goto label_32f128;
        case 0x32f12cu: goto label_32f12c;
        case 0x32f130u: goto label_32f130;
        case 0x32f134u: goto label_32f134;
        case 0x32f138u: goto label_32f138;
        case 0x32f13cu: goto label_32f13c;
        case 0x32f140u: goto label_32f140;
        case 0x32f144u: goto label_32f144;
        case 0x32f148u: goto label_32f148;
        case 0x32f14cu: goto label_32f14c;
        case 0x32f150u: goto label_32f150;
        case 0x32f154u: goto label_32f154;
        case 0x32f158u: goto label_32f158;
        case 0x32f15cu: goto label_32f15c;
        case 0x32f160u: goto label_32f160;
        case 0x32f164u: goto label_32f164;
        case 0x32f168u: goto label_32f168;
        case 0x32f16cu: goto label_32f16c;
        case 0x32f170u: goto label_32f170;
        case 0x32f174u: goto label_32f174;
        case 0x32f178u: goto label_32f178;
        case 0x32f17cu: goto label_32f17c;
        case 0x32f180u: goto label_32f180;
        case 0x32f184u: goto label_32f184;
        case 0x32f188u: goto label_32f188;
        case 0x32f18cu: goto label_32f18c;
        case 0x32f190u: goto label_32f190;
        case 0x32f194u: goto label_32f194;
        case 0x32f198u: goto label_32f198;
        case 0x32f19cu: goto label_32f19c;
        case 0x32f1a0u: goto label_32f1a0;
        case 0x32f1a4u: goto label_32f1a4;
        case 0x32f1a8u: goto label_32f1a8;
        case 0x32f1acu: goto label_32f1ac;
        case 0x32f1b0u: goto label_32f1b0;
        case 0x32f1b4u: goto label_32f1b4;
        case 0x32f1b8u: goto label_32f1b8;
        case 0x32f1bcu: goto label_32f1bc;
        case 0x32f1c0u: goto label_32f1c0;
        case 0x32f1c4u: goto label_32f1c4;
        case 0x32f1c8u: goto label_32f1c8;
        case 0x32f1ccu: goto label_32f1cc;
        case 0x32f1d0u: goto label_32f1d0;
        case 0x32f1d4u: goto label_32f1d4;
        case 0x32f1d8u: goto label_32f1d8;
        case 0x32f1dcu: goto label_32f1dc;
        case 0x32f1e0u: goto label_32f1e0;
        case 0x32f1e4u: goto label_32f1e4;
        case 0x32f1e8u: goto label_32f1e8;
        case 0x32f1ecu: goto label_32f1ec;
        case 0x32f1f0u: goto label_32f1f0;
        case 0x32f1f4u: goto label_32f1f4;
        case 0x32f1f8u: goto label_32f1f8;
        case 0x32f1fcu: goto label_32f1fc;
        case 0x32f200u: goto label_32f200;
        case 0x32f204u: goto label_32f204;
        case 0x32f208u: goto label_32f208;
        case 0x32f20cu: goto label_32f20c;
        case 0x32f210u: goto label_32f210;
        case 0x32f214u: goto label_32f214;
        case 0x32f218u: goto label_32f218;
        case 0x32f21cu: goto label_32f21c;
        case 0x32f220u: goto label_32f220;
        case 0x32f224u: goto label_32f224;
        case 0x32f228u: goto label_32f228;
        case 0x32f22cu: goto label_32f22c;
        case 0x32f230u: goto label_32f230;
        case 0x32f234u: goto label_32f234;
        case 0x32f238u: goto label_32f238;
        case 0x32f23cu: goto label_32f23c;
        case 0x32f240u: goto label_32f240;
        case 0x32f244u: goto label_32f244;
        case 0x32f248u: goto label_32f248;
        case 0x32f24cu: goto label_32f24c;
        case 0x32f250u: goto label_32f250;
        case 0x32f254u: goto label_32f254;
        case 0x32f258u: goto label_32f258;
        case 0x32f25cu: goto label_32f25c;
        case 0x32f260u: goto label_32f260;
        case 0x32f264u: goto label_32f264;
        case 0x32f268u: goto label_32f268;
        case 0x32f26cu: goto label_32f26c;
        case 0x32f270u: goto label_32f270;
        case 0x32f274u: goto label_32f274;
        case 0x32f278u: goto label_32f278;
        case 0x32f27cu: goto label_32f27c;
        case 0x32f280u: goto label_32f280;
        case 0x32f284u: goto label_32f284;
        case 0x32f288u: goto label_32f288;
        case 0x32f28cu: goto label_32f28c;
        case 0x32f290u: goto label_32f290;
        case 0x32f294u: goto label_32f294;
        case 0x32f298u: goto label_32f298;
        case 0x32f29cu: goto label_32f29c;
        case 0x32f2a0u: goto label_32f2a0;
        case 0x32f2a4u: goto label_32f2a4;
        case 0x32f2a8u: goto label_32f2a8;
        case 0x32f2acu: goto label_32f2ac;
        case 0x32f2b0u: goto label_32f2b0;
        case 0x32f2b4u: goto label_32f2b4;
        case 0x32f2b8u: goto label_32f2b8;
        case 0x32f2bcu: goto label_32f2bc;
        case 0x32f2c0u: goto label_32f2c0;
        case 0x32f2c4u: goto label_32f2c4;
        case 0x32f2c8u: goto label_32f2c8;
        case 0x32f2ccu: goto label_32f2cc;
        case 0x32f2d0u: goto label_32f2d0;
        case 0x32f2d4u: goto label_32f2d4;
        case 0x32f2d8u: goto label_32f2d8;
        case 0x32f2dcu: goto label_32f2dc;
        case 0x32f2e0u: goto label_32f2e0;
        case 0x32f2e4u: goto label_32f2e4;
        case 0x32f2e8u: goto label_32f2e8;
        case 0x32f2ecu: goto label_32f2ec;
        case 0x32f2f0u: goto label_32f2f0;
        case 0x32f2f4u: goto label_32f2f4;
        case 0x32f2f8u: goto label_32f2f8;
        case 0x32f2fcu: goto label_32f2fc;
        case 0x32f300u: goto label_32f300;
        case 0x32f304u: goto label_32f304;
        case 0x32f308u: goto label_32f308;
        case 0x32f30cu: goto label_32f30c;
        case 0x32f310u: goto label_32f310;
        case 0x32f314u: goto label_32f314;
        case 0x32f318u: goto label_32f318;
        case 0x32f31cu: goto label_32f31c;
        case 0x32f320u: goto label_32f320;
        case 0x32f324u: goto label_32f324;
        case 0x32f328u: goto label_32f328;
        case 0x32f32cu: goto label_32f32c;
        case 0x32f330u: goto label_32f330;
        case 0x32f334u: goto label_32f334;
        case 0x32f338u: goto label_32f338;
        case 0x32f33cu: goto label_32f33c;
        case 0x32f340u: goto label_32f340;
        case 0x32f344u: goto label_32f344;
        case 0x32f348u: goto label_32f348;
        case 0x32f34cu: goto label_32f34c;
        case 0x32f350u: goto label_32f350;
        case 0x32f354u: goto label_32f354;
        case 0x32f358u: goto label_32f358;
        case 0x32f35cu: goto label_32f35c;
        case 0x32f360u: goto label_32f360;
        case 0x32f364u: goto label_32f364;
        case 0x32f368u: goto label_32f368;
        case 0x32f36cu: goto label_32f36c;
        case 0x32f370u: goto label_32f370;
        case 0x32f374u: goto label_32f374;
        case 0x32f378u: goto label_32f378;
        case 0x32f37cu: goto label_32f37c;
        case 0x32f380u: goto label_32f380;
        case 0x32f384u: goto label_32f384;
        case 0x32f388u: goto label_32f388;
        case 0x32f38cu: goto label_32f38c;
        case 0x32f390u: goto label_32f390;
        case 0x32f394u: goto label_32f394;
        case 0x32f398u: goto label_32f398;
        case 0x32f39cu: goto label_32f39c;
        case 0x32f3a0u: goto label_32f3a0;
        case 0x32f3a4u: goto label_32f3a4;
        case 0x32f3a8u: goto label_32f3a8;
        case 0x32f3acu: goto label_32f3ac;
        case 0x32f3b0u: goto label_32f3b0;
        case 0x32f3b4u: goto label_32f3b4;
        case 0x32f3b8u: goto label_32f3b8;
        case 0x32f3bcu: goto label_32f3bc;
        case 0x32f3c0u: goto label_32f3c0;
        case 0x32f3c4u: goto label_32f3c4;
        case 0x32f3c8u: goto label_32f3c8;
        case 0x32f3ccu: goto label_32f3cc;
        case 0x32f3d0u: goto label_32f3d0;
        case 0x32f3d4u: goto label_32f3d4;
        case 0x32f3d8u: goto label_32f3d8;
        case 0x32f3dcu: goto label_32f3dc;
        case 0x32f3e0u: goto label_32f3e0;
        case 0x32f3e4u: goto label_32f3e4;
        case 0x32f3e8u: goto label_32f3e8;
        case 0x32f3ecu: goto label_32f3ec;
        case 0x32f3f0u: goto label_32f3f0;
        case 0x32f3f4u: goto label_32f3f4;
        case 0x32f3f8u: goto label_32f3f8;
        case 0x32f3fcu: goto label_32f3fc;
        case 0x32f400u: goto label_32f400;
        case 0x32f404u: goto label_32f404;
        case 0x32f408u: goto label_32f408;
        case 0x32f40cu: goto label_32f40c;
        case 0x32f410u: goto label_32f410;
        case 0x32f414u: goto label_32f414;
        case 0x32f418u: goto label_32f418;
        case 0x32f41cu: goto label_32f41c;
        case 0x32f420u: goto label_32f420;
        case 0x32f424u: goto label_32f424;
        case 0x32f428u: goto label_32f428;
        case 0x32f42cu: goto label_32f42c;
        case 0x32f430u: goto label_32f430;
        case 0x32f434u: goto label_32f434;
        case 0x32f438u: goto label_32f438;
        case 0x32f43cu: goto label_32f43c;
        case 0x32f440u: goto label_32f440;
        case 0x32f444u: goto label_32f444;
        case 0x32f448u: goto label_32f448;
        case 0x32f44cu: goto label_32f44c;
        case 0x32f450u: goto label_32f450;
        case 0x32f454u: goto label_32f454;
        case 0x32f458u: goto label_32f458;
        case 0x32f45cu: goto label_32f45c;
        case 0x32f460u: goto label_32f460;
        case 0x32f464u: goto label_32f464;
        case 0x32f468u: goto label_32f468;
        case 0x32f46cu: goto label_32f46c;
        case 0x32f470u: goto label_32f470;
        case 0x32f474u: goto label_32f474;
        case 0x32f478u: goto label_32f478;
        case 0x32f47cu: goto label_32f47c;
        case 0x32f480u: goto label_32f480;
        case 0x32f484u: goto label_32f484;
        case 0x32f488u: goto label_32f488;
        case 0x32f48cu: goto label_32f48c;
        case 0x32f490u: goto label_32f490;
        case 0x32f494u: goto label_32f494;
        case 0x32f498u: goto label_32f498;
        case 0x32f49cu: goto label_32f49c;
        case 0x32f4a0u: goto label_32f4a0;
        case 0x32f4a4u: goto label_32f4a4;
        case 0x32f4a8u: goto label_32f4a8;
        case 0x32f4acu: goto label_32f4ac;
        case 0x32f4b0u: goto label_32f4b0;
        case 0x32f4b4u: goto label_32f4b4;
        case 0x32f4b8u: goto label_32f4b8;
        case 0x32f4bcu: goto label_32f4bc;
        case 0x32f4c0u: goto label_32f4c0;
        case 0x32f4c4u: goto label_32f4c4;
        case 0x32f4c8u: goto label_32f4c8;
        case 0x32f4ccu: goto label_32f4cc;
        case 0x32f4d0u: goto label_32f4d0;
        case 0x32f4d4u: goto label_32f4d4;
        case 0x32f4d8u: goto label_32f4d8;
        case 0x32f4dcu: goto label_32f4dc;
        case 0x32f4e0u: goto label_32f4e0;
        case 0x32f4e4u: goto label_32f4e4;
        case 0x32f4e8u: goto label_32f4e8;
        case 0x32f4ecu: goto label_32f4ec;
        case 0x32f4f0u: goto label_32f4f0;
        case 0x32f4f4u: goto label_32f4f4;
        case 0x32f4f8u: goto label_32f4f8;
        case 0x32f4fcu: goto label_32f4fc;
        case 0x32f500u: goto label_32f500;
        case 0x32f504u: goto label_32f504;
        case 0x32f508u: goto label_32f508;
        case 0x32f50cu: goto label_32f50c;
        case 0x32f510u: goto label_32f510;
        case 0x32f514u: goto label_32f514;
        case 0x32f518u: goto label_32f518;
        case 0x32f51cu: goto label_32f51c;
        case 0x32f520u: goto label_32f520;
        case 0x32f524u: goto label_32f524;
        case 0x32f528u: goto label_32f528;
        case 0x32f52cu: goto label_32f52c;
        case 0x32f530u: goto label_32f530;
        case 0x32f534u: goto label_32f534;
        case 0x32f538u: goto label_32f538;
        case 0x32f53cu: goto label_32f53c;
        case 0x32f540u: goto label_32f540;
        case 0x32f544u: goto label_32f544;
        case 0x32f548u: goto label_32f548;
        case 0x32f54cu: goto label_32f54c;
        case 0x32f550u: goto label_32f550;
        case 0x32f554u: goto label_32f554;
        case 0x32f558u: goto label_32f558;
        case 0x32f55cu: goto label_32f55c;
        case 0x32f560u: goto label_32f560;
        case 0x32f564u: goto label_32f564;
        case 0x32f568u: goto label_32f568;
        case 0x32f56cu: goto label_32f56c;
        case 0x32f570u: goto label_32f570;
        case 0x32f574u: goto label_32f574;
        case 0x32f578u: goto label_32f578;
        case 0x32f57cu: goto label_32f57c;
        case 0x32f580u: goto label_32f580;
        case 0x32f584u: goto label_32f584;
        case 0x32f588u: goto label_32f588;
        case 0x32f58cu: goto label_32f58c;
        case 0x32f590u: goto label_32f590;
        case 0x32f594u: goto label_32f594;
        case 0x32f598u: goto label_32f598;
        case 0x32f59cu: goto label_32f59c;
        case 0x32f5a0u: goto label_32f5a0;
        case 0x32f5a4u: goto label_32f5a4;
        case 0x32f5a8u: goto label_32f5a8;
        case 0x32f5acu: goto label_32f5ac;
        case 0x32f5b0u: goto label_32f5b0;
        case 0x32f5b4u: goto label_32f5b4;
        case 0x32f5b8u: goto label_32f5b8;
        case 0x32f5bcu: goto label_32f5bc;
        case 0x32f5c0u: goto label_32f5c0;
        case 0x32f5c4u: goto label_32f5c4;
        case 0x32f5c8u: goto label_32f5c8;
        case 0x32f5ccu: goto label_32f5cc;
        case 0x32f5d0u: goto label_32f5d0;
        case 0x32f5d4u: goto label_32f5d4;
        case 0x32f5d8u: goto label_32f5d8;
        case 0x32f5dcu: goto label_32f5dc;
        case 0x32f5e0u: goto label_32f5e0;
        case 0x32f5e4u: goto label_32f5e4;
        case 0x32f5e8u: goto label_32f5e8;
        case 0x32f5ecu: goto label_32f5ec;
        case 0x32f5f0u: goto label_32f5f0;
        case 0x32f5f4u: goto label_32f5f4;
        case 0x32f5f8u: goto label_32f5f8;
        case 0x32f5fcu: goto label_32f5fc;
        case 0x32f600u: goto label_32f600;
        case 0x32f604u: goto label_32f604;
        case 0x32f608u: goto label_32f608;
        case 0x32f60cu: goto label_32f60c;
        case 0x32f610u: goto label_32f610;
        case 0x32f614u: goto label_32f614;
        case 0x32f618u: goto label_32f618;
        case 0x32f61cu: goto label_32f61c;
        case 0x32f620u: goto label_32f620;
        case 0x32f624u: goto label_32f624;
        case 0x32f628u: goto label_32f628;
        case 0x32f62cu: goto label_32f62c;
        case 0x32f630u: goto label_32f630;
        case 0x32f634u: goto label_32f634;
        case 0x32f638u: goto label_32f638;
        case 0x32f63cu: goto label_32f63c;
        case 0x32f640u: goto label_32f640;
        case 0x32f644u: goto label_32f644;
        case 0x32f648u: goto label_32f648;
        case 0x32f64cu: goto label_32f64c;
        case 0x32f650u: goto label_32f650;
        case 0x32f654u: goto label_32f654;
        case 0x32f658u: goto label_32f658;
        case 0x32f65cu: goto label_32f65c;
        case 0x32f660u: goto label_32f660;
        case 0x32f664u: goto label_32f664;
        case 0x32f668u: goto label_32f668;
        case 0x32f66cu: goto label_32f66c;
        case 0x32f670u: goto label_32f670;
        case 0x32f674u: goto label_32f674;
        case 0x32f678u: goto label_32f678;
        case 0x32f67cu: goto label_32f67c;
        case 0x32f680u: goto label_32f680;
        case 0x32f684u: goto label_32f684;
        case 0x32f688u: goto label_32f688;
        case 0x32f68cu: goto label_32f68c;
        case 0x32f690u: goto label_32f690;
        case 0x32f694u: goto label_32f694;
        case 0x32f698u: goto label_32f698;
        case 0x32f69cu: goto label_32f69c;
        case 0x32f6a0u: goto label_32f6a0;
        case 0x32f6a4u: goto label_32f6a4;
        case 0x32f6a8u: goto label_32f6a8;
        case 0x32f6acu: goto label_32f6ac;
        case 0x32f6b0u: goto label_32f6b0;
        case 0x32f6b4u: goto label_32f6b4;
        case 0x32f6b8u: goto label_32f6b8;
        case 0x32f6bcu: goto label_32f6bc;
        case 0x32f6c0u: goto label_32f6c0;
        case 0x32f6c4u: goto label_32f6c4;
        case 0x32f6c8u: goto label_32f6c8;
        case 0x32f6ccu: goto label_32f6cc;
        case 0x32f6d0u: goto label_32f6d0;
        case 0x32f6d4u: goto label_32f6d4;
        case 0x32f6d8u: goto label_32f6d8;
        case 0x32f6dcu: goto label_32f6dc;
        case 0x32f6e0u: goto label_32f6e0;
        case 0x32f6e4u: goto label_32f6e4;
        case 0x32f6e8u: goto label_32f6e8;
        case 0x32f6ecu: goto label_32f6ec;
        case 0x32f6f0u: goto label_32f6f0;
        case 0x32f6f4u: goto label_32f6f4;
        case 0x32f6f8u: goto label_32f6f8;
        case 0x32f6fcu: goto label_32f6fc;
        case 0x32f700u: goto label_32f700;
        case 0x32f704u: goto label_32f704;
        case 0x32f708u: goto label_32f708;
        case 0x32f70cu: goto label_32f70c;
        case 0x32f710u: goto label_32f710;
        case 0x32f714u: goto label_32f714;
        case 0x32f718u: goto label_32f718;
        case 0x32f71cu: goto label_32f71c;
        case 0x32f720u: goto label_32f720;
        case 0x32f724u: goto label_32f724;
        case 0x32f728u: goto label_32f728;
        case 0x32f72cu: goto label_32f72c;
        case 0x32f730u: goto label_32f730;
        case 0x32f734u: goto label_32f734;
        case 0x32f738u: goto label_32f738;
        case 0x32f73cu: goto label_32f73c;
        case 0x32f740u: goto label_32f740;
        case 0x32f744u: goto label_32f744;
        case 0x32f748u: goto label_32f748;
        case 0x32f74cu: goto label_32f74c;
        case 0x32f750u: goto label_32f750;
        case 0x32f754u: goto label_32f754;
        case 0x32f758u: goto label_32f758;
        case 0x32f75cu: goto label_32f75c;
        case 0x32f760u: goto label_32f760;
        case 0x32f764u: goto label_32f764;
        case 0x32f768u: goto label_32f768;
        case 0x32f76cu: goto label_32f76c;
        case 0x32f770u: goto label_32f770;
        case 0x32f774u: goto label_32f774;
        case 0x32f778u: goto label_32f778;
        case 0x32f77cu: goto label_32f77c;
        case 0x32f780u: goto label_32f780;
        case 0x32f784u: goto label_32f784;
        case 0x32f788u: goto label_32f788;
        case 0x32f78cu: goto label_32f78c;
        case 0x32f790u: goto label_32f790;
        case 0x32f794u: goto label_32f794;
        case 0x32f798u: goto label_32f798;
        case 0x32f79cu: goto label_32f79c;
        case 0x32f7a0u: goto label_32f7a0;
        case 0x32f7a4u: goto label_32f7a4;
        case 0x32f7a8u: goto label_32f7a8;
        case 0x32f7acu: goto label_32f7ac;
        case 0x32f7b0u: goto label_32f7b0;
        case 0x32f7b4u: goto label_32f7b4;
        case 0x32f7b8u: goto label_32f7b8;
        case 0x32f7bcu: goto label_32f7bc;
        case 0x32f7c0u: goto label_32f7c0;
        case 0x32f7c4u: goto label_32f7c4;
        case 0x32f7c8u: goto label_32f7c8;
        case 0x32f7ccu: goto label_32f7cc;
        case 0x32f7d0u: goto label_32f7d0;
        case 0x32f7d4u: goto label_32f7d4;
        case 0x32f7d8u: goto label_32f7d8;
        case 0x32f7dcu: goto label_32f7dc;
        case 0x32f7e0u: goto label_32f7e0;
        case 0x32f7e4u: goto label_32f7e4;
        case 0x32f7e8u: goto label_32f7e8;
        case 0x32f7ecu: goto label_32f7ec;
        case 0x32f7f0u: goto label_32f7f0;
        case 0x32f7f4u: goto label_32f7f4;
        case 0x32f7f8u: goto label_32f7f8;
        case 0x32f7fcu: goto label_32f7fc;
        case 0x32f800u: goto label_32f800;
        case 0x32f804u: goto label_32f804;
        case 0x32f808u: goto label_32f808;
        case 0x32f80cu: goto label_32f80c;
        case 0x32f810u: goto label_32f810;
        case 0x32f814u: goto label_32f814;
        case 0x32f818u: goto label_32f818;
        case 0x32f81cu: goto label_32f81c;
        case 0x32f820u: goto label_32f820;
        case 0x32f824u: goto label_32f824;
        case 0x32f828u: goto label_32f828;
        case 0x32f82cu: goto label_32f82c;
        case 0x32f830u: goto label_32f830;
        case 0x32f834u: goto label_32f834;
        case 0x32f838u: goto label_32f838;
        case 0x32f83cu: goto label_32f83c;
        case 0x32f840u: goto label_32f840;
        case 0x32f844u: goto label_32f844;
        case 0x32f848u: goto label_32f848;
        case 0x32f84cu: goto label_32f84c;
        case 0x32f850u: goto label_32f850;
        case 0x32f854u: goto label_32f854;
        case 0x32f858u: goto label_32f858;
        case 0x32f85cu: goto label_32f85c;
        case 0x32f860u: goto label_32f860;
        case 0x32f864u: goto label_32f864;
        case 0x32f868u: goto label_32f868;
        case 0x32f86cu: goto label_32f86c;
        case 0x32f870u: goto label_32f870;
        case 0x32f874u: goto label_32f874;
        case 0x32f878u: goto label_32f878;
        case 0x32f87cu: goto label_32f87c;
        case 0x32f880u: goto label_32f880;
        case 0x32f884u: goto label_32f884;
        case 0x32f888u: goto label_32f888;
        case 0x32f88cu: goto label_32f88c;
        case 0x32f890u: goto label_32f890;
        case 0x32f894u: goto label_32f894;
        case 0x32f898u: goto label_32f898;
        case 0x32f89cu: goto label_32f89c;
        case 0x32f8a0u: goto label_32f8a0;
        case 0x32f8a4u: goto label_32f8a4;
        case 0x32f8a8u: goto label_32f8a8;
        case 0x32f8acu: goto label_32f8ac;
        case 0x32f8b0u: goto label_32f8b0;
        case 0x32f8b4u: goto label_32f8b4;
        case 0x32f8b8u: goto label_32f8b8;
        case 0x32f8bcu: goto label_32f8bc;
        case 0x32f8c0u: goto label_32f8c0;
        case 0x32f8c4u: goto label_32f8c4;
        case 0x32f8c8u: goto label_32f8c8;
        case 0x32f8ccu: goto label_32f8cc;
        case 0x32f8d0u: goto label_32f8d0;
        case 0x32f8d4u: goto label_32f8d4;
        case 0x32f8d8u: goto label_32f8d8;
        case 0x32f8dcu: goto label_32f8dc;
        case 0x32f8e0u: goto label_32f8e0;
        case 0x32f8e4u: goto label_32f8e4;
        case 0x32f8e8u: goto label_32f8e8;
        case 0x32f8ecu: goto label_32f8ec;
        case 0x32f8f0u: goto label_32f8f0;
        case 0x32f8f4u: goto label_32f8f4;
        case 0x32f8f8u: goto label_32f8f8;
        case 0x32f8fcu: goto label_32f8fc;
        case 0x32f900u: goto label_32f900;
        case 0x32f904u: goto label_32f904;
        case 0x32f908u: goto label_32f908;
        case 0x32f90cu: goto label_32f90c;
        case 0x32f910u: goto label_32f910;
        case 0x32f914u: goto label_32f914;
        case 0x32f918u: goto label_32f918;
        case 0x32f91cu: goto label_32f91c;
        case 0x32f920u: goto label_32f920;
        case 0x32f924u: goto label_32f924;
        case 0x32f928u: goto label_32f928;
        case 0x32f92cu: goto label_32f92c;
        case 0x32f930u: goto label_32f930;
        case 0x32f934u: goto label_32f934;
        case 0x32f938u: goto label_32f938;
        case 0x32f93cu: goto label_32f93c;
        case 0x32f940u: goto label_32f940;
        case 0x32f944u: goto label_32f944;
        case 0x32f948u: goto label_32f948;
        case 0x32f94cu: goto label_32f94c;
        case 0x32f950u: goto label_32f950;
        case 0x32f954u: goto label_32f954;
        case 0x32f958u: goto label_32f958;
        case 0x32f95cu: goto label_32f95c;
        case 0x32f960u: goto label_32f960;
        case 0x32f964u: goto label_32f964;
        case 0x32f968u: goto label_32f968;
        case 0x32f96cu: goto label_32f96c;
        case 0x32f970u: goto label_32f970;
        case 0x32f974u: goto label_32f974;
        case 0x32f978u: goto label_32f978;
        case 0x32f97cu: goto label_32f97c;
        case 0x32f980u: goto label_32f980;
        case 0x32f984u: goto label_32f984;
        case 0x32f988u: goto label_32f988;
        case 0x32f98cu: goto label_32f98c;
        case 0x32f990u: goto label_32f990;
        case 0x32f994u: goto label_32f994;
        case 0x32f998u: goto label_32f998;
        case 0x32f99cu: goto label_32f99c;
        case 0x32f9a0u: goto label_32f9a0;
        case 0x32f9a4u: goto label_32f9a4;
        case 0x32f9a8u: goto label_32f9a8;
        case 0x32f9acu: goto label_32f9ac;
        case 0x32f9b0u: goto label_32f9b0;
        case 0x32f9b4u: goto label_32f9b4;
        case 0x32f9b8u: goto label_32f9b8;
        case 0x32f9bcu: goto label_32f9bc;
        case 0x32f9c0u: goto label_32f9c0;
        case 0x32f9c4u: goto label_32f9c4;
        case 0x32f9c8u: goto label_32f9c8;
        case 0x32f9ccu: goto label_32f9cc;
        case 0x32f9d0u: goto label_32f9d0;
        case 0x32f9d4u: goto label_32f9d4;
        case 0x32f9d8u: goto label_32f9d8;
        case 0x32f9dcu: goto label_32f9dc;
        case 0x32f9e0u: goto label_32f9e0;
        case 0x32f9e4u: goto label_32f9e4;
        case 0x32f9e8u: goto label_32f9e8;
        case 0x32f9ecu: goto label_32f9ec;
        case 0x32f9f0u: goto label_32f9f0;
        case 0x32f9f4u: goto label_32f9f4;
        case 0x32f9f8u: goto label_32f9f8;
        case 0x32f9fcu: goto label_32f9fc;
        case 0x32fa00u: goto label_32fa00;
        case 0x32fa04u: goto label_32fa04;
        case 0x32fa08u: goto label_32fa08;
        case 0x32fa0cu: goto label_32fa0c;
        case 0x32fa10u: goto label_32fa10;
        case 0x32fa14u: goto label_32fa14;
        case 0x32fa18u: goto label_32fa18;
        case 0x32fa1cu: goto label_32fa1c;
        case 0x32fa20u: goto label_32fa20;
        case 0x32fa24u: goto label_32fa24;
        case 0x32fa28u: goto label_32fa28;
        case 0x32fa2cu: goto label_32fa2c;
        case 0x32fa30u: goto label_32fa30;
        case 0x32fa34u: goto label_32fa34;
        case 0x32fa38u: goto label_32fa38;
        case 0x32fa3cu: goto label_32fa3c;
        case 0x32fa40u: goto label_32fa40;
        case 0x32fa44u: goto label_32fa44;
        case 0x32fa48u: goto label_32fa48;
        case 0x32fa4cu: goto label_32fa4c;
        case 0x32fa50u: goto label_32fa50;
        case 0x32fa54u: goto label_32fa54;
        case 0x32fa58u: goto label_32fa58;
        case 0x32fa5cu: goto label_32fa5c;
        case 0x32fa60u: goto label_32fa60;
        case 0x32fa64u: goto label_32fa64;
        case 0x32fa68u: goto label_32fa68;
        case 0x32fa6cu: goto label_32fa6c;
        case 0x32fa70u: goto label_32fa70;
        case 0x32fa74u: goto label_32fa74;
        case 0x32fa78u: goto label_32fa78;
        case 0x32fa7cu: goto label_32fa7c;
        case 0x32fa80u: goto label_32fa80;
        case 0x32fa84u: goto label_32fa84;
        case 0x32fa88u: goto label_32fa88;
        case 0x32fa8cu: goto label_32fa8c;
        case 0x32fa90u: goto label_32fa90;
        case 0x32fa94u: goto label_32fa94;
        case 0x32fa98u: goto label_32fa98;
        case 0x32fa9cu: goto label_32fa9c;
        case 0x32faa0u: goto label_32faa0;
        case 0x32faa4u: goto label_32faa4;
        case 0x32faa8u: goto label_32faa8;
        case 0x32faacu: goto label_32faac;
        case 0x32fab0u: goto label_32fab0;
        case 0x32fab4u: goto label_32fab4;
        case 0x32fab8u: goto label_32fab8;
        case 0x32fabcu: goto label_32fabc;
        case 0x32fac0u: goto label_32fac0;
        case 0x32fac4u: goto label_32fac4;
        case 0x32fac8u: goto label_32fac8;
        case 0x32faccu: goto label_32facc;
        case 0x32fad0u: goto label_32fad0;
        case 0x32fad4u: goto label_32fad4;
        case 0x32fad8u: goto label_32fad8;
        case 0x32fadcu: goto label_32fadc;
        case 0x32fae0u: goto label_32fae0;
        case 0x32fae4u: goto label_32fae4;
        case 0x32fae8u: goto label_32fae8;
        case 0x32faecu: goto label_32faec;
        case 0x32faf0u: goto label_32faf0;
        case 0x32faf4u: goto label_32faf4;
        case 0x32faf8u: goto label_32faf8;
        case 0x32fafcu: goto label_32fafc;
        case 0x32fb00u: goto label_32fb00;
        case 0x32fb04u: goto label_32fb04;
        case 0x32fb08u: goto label_32fb08;
        case 0x32fb0cu: goto label_32fb0c;
        case 0x32fb10u: goto label_32fb10;
        case 0x32fb14u: goto label_32fb14;
        case 0x32fb18u: goto label_32fb18;
        case 0x32fb1cu: goto label_32fb1c;
        case 0x32fb20u: goto label_32fb20;
        case 0x32fb24u: goto label_32fb24;
        case 0x32fb28u: goto label_32fb28;
        case 0x32fb2cu: goto label_32fb2c;
        case 0x32fb30u: goto label_32fb30;
        case 0x32fb34u: goto label_32fb34;
        case 0x32fb38u: goto label_32fb38;
        case 0x32fb3cu: goto label_32fb3c;
        case 0x32fb40u: goto label_32fb40;
        case 0x32fb44u: goto label_32fb44;
        case 0x32fb48u: goto label_32fb48;
        case 0x32fb4cu: goto label_32fb4c;
        case 0x32fb50u: goto label_32fb50;
        case 0x32fb54u: goto label_32fb54;
        case 0x32fb58u: goto label_32fb58;
        case 0x32fb5cu: goto label_32fb5c;
        case 0x32fb60u: goto label_32fb60;
        case 0x32fb64u: goto label_32fb64;
        case 0x32fb68u: goto label_32fb68;
        case 0x32fb6cu: goto label_32fb6c;
        case 0x32fb70u: goto label_32fb70;
        case 0x32fb74u: goto label_32fb74;
        case 0x32fb78u: goto label_32fb78;
        case 0x32fb7cu: goto label_32fb7c;
        case 0x32fb80u: goto label_32fb80;
        case 0x32fb84u: goto label_32fb84;
        case 0x32fb88u: goto label_32fb88;
        case 0x32fb8cu: goto label_32fb8c;
        case 0x32fb90u: goto label_32fb90;
        case 0x32fb94u: goto label_32fb94;
        case 0x32fb98u: goto label_32fb98;
        case 0x32fb9cu: goto label_32fb9c;
        case 0x32fba0u: goto label_32fba0;
        case 0x32fba4u: goto label_32fba4;
        case 0x32fba8u: goto label_32fba8;
        case 0x32fbacu: goto label_32fbac;
        case 0x32fbb0u: goto label_32fbb0;
        case 0x32fbb4u: goto label_32fbb4;
        case 0x32fbb8u: goto label_32fbb8;
        case 0x32fbbcu: goto label_32fbbc;
        case 0x32fbc0u: goto label_32fbc0;
        case 0x32fbc4u: goto label_32fbc4;
        case 0x32fbc8u: goto label_32fbc8;
        case 0x32fbccu: goto label_32fbcc;
        case 0x32fbd0u: goto label_32fbd0;
        case 0x32fbd4u: goto label_32fbd4;
        case 0x32fbd8u: goto label_32fbd8;
        case 0x32fbdcu: goto label_32fbdc;
        case 0x32fbe0u: goto label_32fbe0;
        case 0x32fbe4u: goto label_32fbe4;
        case 0x32fbe8u: goto label_32fbe8;
        case 0x32fbecu: goto label_32fbec;
        case 0x32fbf0u: goto label_32fbf0;
        case 0x32fbf4u: goto label_32fbf4;
        case 0x32fbf8u: goto label_32fbf8;
        case 0x32fbfcu: goto label_32fbfc;
        case 0x32fc00u: goto label_32fc00;
        case 0x32fc04u: goto label_32fc04;
        case 0x32fc08u: goto label_32fc08;
        case 0x32fc0cu: goto label_32fc0c;
        case 0x32fc10u: goto label_32fc10;
        case 0x32fc14u: goto label_32fc14;
        case 0x32fc18u: goto label_32fc18;
        case 0x32fc1cu: goto label_32fc1c;
        case 0x32fc20u: goto label_32fc20;
        case 0x32fc24u: goto label_32fc24;
        case 0x32fc28u: goto label_32fc28;
        case 0x32fc2cu: goto label_32fc2c;
        case 0x32fc30u: goto label_32fc30;
        case 0x32fc34u: goto label_32fc34;
        case 0x32fc38u: goto label_32fc38;
        case 0x32fc3cu: goto label_32fc3c;
        case 0x32fc40u: goto label_32fc40;
        case 0x32fc44u: goto label_32fc44;
        case 0x32fc48u: goto label_32fc48;
        case 0x32fc4cu: goto label_32fc4c;
        case 0x32fc50u: goto label_32fc50;
        case 0x32fc54u: goto label_32fc54;
        case 0x32fc58u: goto label_32fc58;
        case 0x32fc5cu: goto label_32fc5c;
        case 0x32fc60u: goto label_32fc60;
        case 0x32fc64u: goto label_32fc64;
        case 0x32fc68u: goto label_32fc68;
        case 0x32fc6cu: goto label_32fc6c;
        case 0x32fc70u: goto label_32fc70;
        case 0x32fc74u: goto label_32fc74;
        case 0x32fc78u: goto label_32fc78;
        case 0x32fc7cu: goto label_32fc7c;
        case 0x32fc80u: goto label_32fc80;
        case 0x32fc84u: goto label_32fc84;
        case 0x32fc88u: goto label_32fc88;
        case 0x32fc8cu: goto label_32fc8c;
        case 0x32fc90u: goto label_32fc90;
        case 0x32fc94u: goto label_32fc94;
        case 0x32fc98u: goto label_32fc98;
        case 0x32fc9cu: goto label_32fc9c;
        case 0x32fca0u: goto label_32fca0;
        case 0x32fca4u: goto label_32fca4;
        case 0x32fca8u: goto label_32fca8;
        case 0x32fcacu: goto label_32fcac;
        case 0x32fcb0u: goto label_32fcb0;
        case 0x32fcb4u: goto label_32fcb4;
        case 0x32fcb8u: goto label_32fcb8;
        case 0x32fcbcu: goto label_32fcbc;
        case 0x32fcc0u: goto label_32fcc0;
        case 0x32fcc4u: goto label_32fcc4;
        case 0x32fcc8u: goto label_32fcc8;
        case 0x32fcccu: goto label_32fccc;
        case 0x32fcd0u: goto label_32fcd0;
        case 0x32fcd4u: goto label_32fcd4;
        case 0x32fcd8u: goto label_32fcd8;
        case 0x32fcdcu: goto label_32fcdc;
        case 0x32fce0u: goto label_32fce0;
        case 0x32fce4u: goto label_32fce4;
        case 0x32fce8u: goto label_32fce8;
        case 0x32fcecu: goto label_32fcec;
        case 0x32fcf0u: goto label_32fcf0;
        case 0x32fcf4u: goto label_32fcf4;
        case 0x32fcf8u: goto label_32fcf8;
        case 0x32fcfcu: goto label_32fcfc;
        case 0x32fd00u: goto label_32fd00;
        case 0x32fd04u: goto label_32fd04;
        case 0x32fd08u: goto label_32fd08;
        case 0x32fd0cu: goto label_32fd0c;
        case 0x32fd10u: goto label_32fd10;
        case 0x32fd14u: goto label_32fd14;
        case 0x32fd18u: goto label_32fd18;
        case 0x32fd1cu: goto label_32fd1c;
        case 0x32fd20u: goto label_32fd20;
        case 0x32fd24u: goto label_32fd24;
        case 0x32fd28u: goto label_32fd28;
        case 0x32fd2cu: goto label_32fd2c;
        case 0x32fd30u: goto label_32fd30;
        case 0x32fd34u: goto label_32fd34;
        case 0x32fd38u: goto label_32fd38;
        case 0x32fd3cu: goto label_32fd3c;
        case 0x32fd40u: goto label_32fd40;
        case 0x32fd44u: goto label_32fd44;
        case 0x32fd48u: goto label_32fd48;
        case 0x32fd4cu: goto label_32fd4c;
        case 0x32fd50u: goto label_32fd50;
        case 0x32fd54u: goto label_32fd54;
        case 0x32fd58u: goto label_32fd58;
        case 0x32fd5cu: goto label_32fd5c;
        case 0x32fd60u: goto label_32fd60;
        case 0x32fd64u: goto label_32fd64;
        case 0x32fd68u: goto label_32fd68;
        case 0x32fd6cu: goto label_32fd6c;
        case 0x32fd70u: goto label_32fd70;
        case 0x32fd74u: goto label_32fd74;
        case 0x32fd78u: goto label_32fd78;
        case 0x32fd7cu: goto label_32fd7c;
        case 0x32fd80u: goto label_32fd80;
        case 0x32fd84u: goto label_32fd84;
        case 0x32fd88u: goto label_32fd88;
        case 0x32fd8cu: goto label_32fd8c;
        case 0x32fd90u: goto label_32fd90;
        case 0x32fd94u: goto label_32fd94;
        case 0x32fd98u: goto label_32fd98;
        case 0x32fd9cu: goto label_32fd9c;
        case 0x32fda0u: goto label_32fda0;
        case 0x32fda4u: goto label_32fda4;
        case 0x32fda8u: goto label_32fda8;
        case 0x32fdacu: goto label_32fdac;
        case 0x32fdb0u: goto label_32fdb0;
        case 0x32fdb4u: goto label_32fdb4;
        case 0x32fdb8u: goto label_32fdb8;
        case 0x32fdbcu: goto label_32fdbc;
        case 0x32fdc0u: goto label_32fdc0;
        case 0x32fdc4u: goto label_32fdc4;
        case 0x32fdc8u: goto label_32fdc8;
        case 0x32fdccu: goto label_32fdcc;
        case 0x32fdd0u: goto label_32fdd0;
        case 0x32fdd4u: goto label_32fdd4;
        case 0x32fdd8u: goto label_32fdd8;
        case 0x32fddcu: goto label_32fddc;
        case 0x32fde0u: goto label_32fde0;
        case 0x32fde4u: goto label_32fde4;
        case 0x32fde8u: goto label_32fde8;
        case 0x32fdecu: goto label_32fdec;
        case 0x32fdf0u: goto label_32fdf0;
        case 0x32fdf4u: goto label_32fdf4;
        case 0x32fdf8u: goto label_32fdf8;
        case 0x32fdfcu: goto label_32fdfc;
        case 0x32fe00u: goto label_32fe00;
        case 0x32fe04u: goto label_32fe04;
        case 0x32fe08u: goto label_32fe08;
        case 0x32fe0cu: goto label_32fe0c;
        case 0x32fe10u: goto label_32fe10;
        case 0x32fe14u: goto label_32fe14;
        case 0x32fe18u: goto label_32fe18;
        case 0x32fe1cu: goto label_32fe1c;
        case 0x32fe20u: goto label_32fe20;
        case 0x32fe24u: goto label_32fe24;
        case 0x32fe28u: goto label_32fe28;
        case 0x32fe2cu: goto label_32fe2c;
        case 0x32fe30u: goto label_32fe30;
        case 0x32fe34u: goto label_32fe34;
        case 0x32fe38u: goto label_32fe38;
        case 0x32fe3cu: goto label_32fe3c;
        case 0x32fe40u: goto label_32fe40;
        case 0x32fe44u: goto label_32fe44;
        case 0x32fe48u: goto label_32fe48;
        case 0x32fe4cu: goto label_32fe4c;
        case 0x32fe50u: goto label_32fe50;
        case 0x32fe54u: goto label_32fe54;
        case 0x32fe58u: goto label_32fe58;
        case 0x32fe5cu: goto label_32fe5c;
        case 0x32fe60u: goto label_32fe60;
        case 0x32fe64u: goto label_32fe64;
        case 0x32fe68u: goto label_32fe68;
        case 0x32fe6cu: goto label_32fe6c;
        case 0x32fe70u: goto label_32fe70;
        case 0x32fe74u: goto label_32fe74;
        case 0x32fe78u: goto label_32fe78;
        case 0x32fe7cu: goto label_32fe7c;
        case 0x32fe80u: goto label_32fe80;
        case 0x32fe84u: goto label_32fe84;
        case 0x32fe88u: goto label_32fe88;
        case 0x32fe8cu: goto label_32fe8c;
        case 0x32fe90u: goto label_32fe90;
        case 0x32fe94u: goto label_32fe94;
        case 0x32fe98u: goto label_32fe98;
        case 0x32fe9cu: goto label_32fe9c;
        case 0x32fea0u: goto label_32fea0;
        case 0x32fea4u: goto label_32fea4;
        case 0x32fea8u: goto label_32fea8;
        case 0x32feacu: goto label_32feac;
        case 0x32feb0u: goto label_32feb0;
        case 0x32feb4u: goto label_32feb4;
        case 0x32feb8u: goto label_32feb8;
        case 0x32febcu: goto label_32febc;
        case 0x32fec0u: goto label_32fec0;
        case 0x32fec4u: goto label_32fec4;
        case 0x32fec8u: goto label_32fec8;
        case 0x32feccu: goto label_32fecc;
        case 0x32fed0u: goto label_32fed0;
        case 0x32fed4u: goto label_32fed4;
        case 0x32fed8u: goto label_32fed8;
        case 0x32fedcu: goto label_32fedc;
        case 0x32fee0u: goto label_32fee0;
        case 0x32fee4u: goto label_32fee4;
        case 0x32fee8u: goto label_32fee8;
        case 0x32feecu: goto label_32feec;
        case 0x32fef0u: goto label_32fef0;
        case 0x32fef4u: goto label_32fef4;
        case 0x32fef8u: goto label_32fef8;
        case 0x32fefcu: goto label_32fefc;
        case 0x32ff00u: goto label_32ff00;
        case 0x32ff04u: goto label_32ff04;
        case 0x32ff08u: goto label_32ff08;
        case 0x32ff0cu: goto label_32ff0c;
        case 0x32ff10u: goto label_32ff10;
        case 0x32ff14u: goto label_32ff14;
        case 0x32ff18u: goto label_32ff18;
        case 0x32ff1cu: goto label_32ff1c;
        case 0x32ff20u: goto label_32ff20;
        case 0x32ff24u: goto label_32ff24;
        case 0x32ff28u: goto label_32ff28;
        case 0x32ff2cu: goto label_32ff2c;
        case 0x32ff30u: goto label_32ff30;
        case 0x32ff34u: goto label_32ff34;
        case 0x32ff38u: goto label_32ff38;
        case 0x32ff3cu: goto label_32ff3c;
        case 0x32ff40u: goto label_32ff40;
        case 0x32ff44u: goto label_32ff44;
        case 0x32ff48u: goto label_32ff48;
        case 0x32ff4cu: goto label_32ff4c;
        case 0x32ff50u: goto label_32ff50;
        case 0x32ff54u: goto label_32ff54;
        case 0x32ff58u: goto label_32ff58;
        case 0x32ff5cu: goto label_32ff5c;
        case 0x32ff60u: goto label_32ff60;
        case 0x32ff64u: goto label_32ff64;
        case 0x32ff68u: goto label_32ff68;
        case 0x32ff6cu: goto label_32ff6c;
        case 0x32ff70u: goto label_32ff70;
        case 0x32ff74u: goto label_32ff74;
        case 0x32ff78u: goto label_32ff78;
        case 0x32ff7cu: goto label_32ff7c;
        case 0x32ff80u: goto label_32ff80;
        case 0x32ff84u: goto label_32ff84;
        case 0x32ff88u: goto label_32ff88;
        case 0x32ff8cu: goto label_32ff8c;
        case 0x32ff90u: goto label_32ff90;
        case 0x32ff94u: goto label_32ff94;
        case 0x32ff98u: goto label_32ff98;
        case 0x32ff9cu: goto label_32ff9c;
        case 0x32ffa0u: goto label_32ffa0;
        case 0x32ffa4u: goto label_32ffa4;
        case 0x32ffa8u: goto label_32ffa8;
        case 0x32ffacu: goto label_32ffac;
        case 0x32ffb0u: goto label_32ffb0;
        case 0x32ffb4u: goto label_32ffb4;
        case 0x32ffb8u: goto label_32ffb8;
        case 0x32ffbcu: goto label_32ffbc;
        case 0x32ffc0u: goto label_32ffc0;
        case 0x32ffc4u: goto label_32ffc4;
        case 0x32ffc8u: goto label_32ffc8;
        case 0x32ffccu: goto label_32ffcc;
        case 0x32ffd0u: goto label_32ffd0;
        case 0x32ffd4u: goto label_32ffd4;
        case 0x32ffd8u: goto label_32ffd8;
        case 0x32ffdcu: goto label_32ffdc;
        case 0x32ffe0u: goto label_32ffe0;
        case 0x32ffe4u: goto label_32ffe4;
        case 0x32ffe8u: goto label_32ffe8;
        case 0x32ffecu: goto label_32ffec;
        case 0x32fff0u: goto label_32fff0;
        case 0x32fff4u: goto label_32fff4;
        case 0x32fff8u: goto label_32fff8;
        case 0x32fffcu: goto label_32fffc;
        case 0x330000u: goto label_330000;
        case 0x330004u: goto label_330004;
        case 0x330008u: goto label_330008;
        case 0x33000cu: goto label_33000c;
        case 0x330010u: goto label_330010;
        case 0x330014u: goto label_330014;
        case 0x330018u: goto label_330018;
        case 0x33001cu: goto label_33001c;
        case 0x330020u: goto label_330020;
        case 0x330024u: goto label_330024;
        case 0x330028u: goto label_330028;
        case 0x33002cu: goto label_33002c;
        case 0x330030u: goto label_330030;
        case 0x330034u: goto label_330034;
        case 0x330038u: goto label_330038;
        case 0x33003cu: goto label_33003c;
        case 0x330040u: goto label_330040;
        case 0x330044u: goto label_330044;
        case 0x330048u: goto label_330048;
        case 0x33004cu: goto label_33004c;
        case 0x330050u: goto label_330050;
        case 0x330054u: goto label_330054;
        case 0x330058u: goto label_330058;
        case 0x33005cu: goto label_33005c;
        case 0x330060u: goto label_330060;
        case 0x330064u: goto label_330064;
        case 0x330068u: goto label_330068;
        case 0x33006cu: goto label_33006c;
        case 0x330070u: goto label_330070;
        case 0x330074u: goto label_330074;
        case 0x330078u: goto label_330078;
        case 0x33007cu: goto label_33007c;
        case 0x330080u: goto label_330080;
        case 0x330084u: goto label_330084;
        case 0x330088u: goto label_330088;
        case 0x33008cu: goto label_33008c;
        case 0x330090u: goto label_330090;
        case 0x330094u: goto label_330094;
        case 0x330098u: goto label_330098;
        case 0x33009cu: goto label_33009c;
        case 0x3300a0u: goto label_3300a0;
        case 0x3300a4u: goto label_3300a4;
        case 0x3300a8u: goto label_3300a8;
        case 0x3300acu: goto label_3300ac;
        case 0x3300b0u: goto label_3300b0;
        case 0x3300b4u: goto label_3300b4;
        case 0x3300b8u: goto label_3300b8;
        case 0x3300bcu: goto label_3300bc;
        case 0x3300c0u: goto label_3300c0;
        case 0x3300c4u: goto label_3300c4;
        case 0x3300c8u: goto label_3300c8;
        case 0x3300ccu: goto label_3300cc;
        case 0x3300d0u: goto label_3300d0;
        case 0x3300d4u: goto label_3300d4;
        case 0x3300d8u: goto label_3300d8;
        case 0x3300dcu: goto label_3300dc;
        case 0x3300e0u: goto label_3300e0;
        case 0x3300e4u: goto label_3300e4;
        case 0x3300e8u: goto label_3300e8;
        case 0x3300ecu: goto label_3300ec;
        case 0x3300f0u: goto label_3300f0;
        case 0x3300f4u: goto label_3300f4;
        case 0x3300f8u: goto label_3300f8;
        case 0x3300fcu: goto label_3300fc;
        case 0x330100u: goto label_330100;
        case 0x330104u: goto label_330104;
        case 0x330108u: goto label_330108;
        case 0x33010cu: goto label_33010c;
        case 0x330110u: goto label_330110;
        case 0x330114u: goto label_330114;
        case 0x330118u: goto label_330118;
        case 0x33011cu: goto label_33011c;
        case 0x330120u: goto label_330120;
        case 0x330124u: goto label_330124;
        case 0x330128u: goto label_330128;
        case 0x33012cu: goto label_33012c;
        case 0x330130u: goto label_330130;
        case 0x330134u: goto label_330134;
        case 0x330138u: goto label_330138;
        case 0x33013cu: goto label_33013c;
        case 0x330140u: goto label_330140;
        case 0x330144u: goto label_330144;
        case 0x330148u: goto label_330148;
        case 0x33014cu: goto label_33014c;
        case 0x330150u: goto label_330150;
        case 0x330154u: goto label_330154;
        case 0x330158u: goto label_330158;
        case 0x33015cu: goto label_33015c;
        case 0x330160u: goto label_330160;
        case 0x330164u: goto label_330164;
        case 0x330168u: goto label_330168;
        case 0x33016cu: goto label_33016c;
        case 0x330170u: goto label_330170;
        case 0x330174u: goto label_330174;
        case 0x330178u: goto label_330178;
        case 0x33017cu: goto label_33017c;
        case 0x330180u: goto label_330180;
        case 0x330184u: goto label_330184;
        case 0x330188u: goto label_330188;
        case 0x33018cu: goto label_33018c;
        case 0x330190u: goto label_330190;
        case 0x330194u: goto label_330194;
        case 0x330198u: goto label_330198;
        case 0x33019cu: goto label_33019c;
        case 0x3301a0u: goto label_3301a0;
        case 0x3301a4u: goto label_3301a4;
        case 0x3301a8u: goto label_3301a8;
        case 0x3301acu: goto label_3301ac;
        case 0x3301b0u: goto label_3301b0;
        case 0x3301b4u: goto label_3301b4;
        case 0x3301b8u: goto label_3301b8;
        case 0x3301bcu: goto label_3301bc;
        case 0x3301c0u: goto label_3301c0;
        case 0x3301c4u: goto label_3301c4;
        case 0x3301c8u: goto label_3301c8;
        case 0x3301ccu: goto label_3301cc;
        case 0x3301d0u: goto label_3301d0;
        case 0x3301d4u: goto label_3301d4;
        case 0x3301d8u: goto label_3301d8;
        case 0x3301dcu: goto label_3301dc;
        case 0x3301e0u: goto label_3301e0;
        case 0x3301e4u: goto label_3301e4;
        case 0x3301e8u: goto label_3301e8;
        case 0x3301ecu: goto label_3301ec;
        case 0x3301f0u: goto label_3301f0;
        case 0x3301f4u: goto label_3301f4;
        case 0x3301f8u: goto label_3301f8;
        case 0x3301fcu: goto label_3301fc;
        case 0x330200u: goto label_330200;
        case 0x330204u: goto label_330204;
        case 0x330208u: goto label_330208;
        case 0x33020cu: goto label_33020c;
        case 0x330210u: goto label_330210;
        case 0x330214u: goto label_330214;
        case 0x330218u: goto label_330218;
        case 0x33021cu: goto label_33021c;
        case 0x330220u: goto label_330220;
        case 0x330224u: goto label_330224;
        case 0x330228u: goto label_330228;
        case 0x33022cu: goto label_33022c;
        case 0x330230u: goto label_330230;
        case 0x330234u: goto label_330234;
        case 0x330238u: goto label_330238;
        case 0x33023cu: goto label_33023c;
        case 0x330240u: goto label_330240;
        case 0x330244u: goto label_330244;
        case 0x330248u: goto label_330248;
        case 0x33024cu: goto label_33024c;
        case 0x330250u: goto label_330250;
        case 0x330254u: goto label_330254;
        case 0x330258u: goto label_330258;
        case 0x33025cu: goto label_33025c;
        case 0x330260u: goto label_330260;
        case 0x330264u: goto label_330264;
        case 0x330268u: goto label_330268;
        case 0x33026cu: goto label_33026c;
        case 0x330270u: goto label_330270;
        case 0x330274u: goto label_330274;
        case 0x330278u: goto label_330278;
        case 0x33027cu: goto label_33027c;
        case 0x330280u: goto label_330280;
        case 0x330284u: goto label_330284;
        case 0x330288u: goto label_330288;
        case 0x33028cu: goto label_33028c;
        case 0x330290u: goto label_330290;
        case 0x330294u: goto label_330294;
        case 0x330298u: goto label_330298;
        case 0x33029cu: goto label_33029c;
        case 0x3302a0u: goto label_3302a0;
        case 0x3302a4u: goto label_3302a4;
        case 0x3302a8u: goto label_3302a8;
        case 0x3302acu: goto label_3302ac;
        case 0x3302b0u: goto label_3302b0;
        case 0x3302b4u: goto label_3302b4;
        case 0x3302b8u: goto label_3302b8;
        case 0x3302bcu: goto label_3302bc;
        case 0x3302c0u: goto label_3302c0;
        case 0x3302c4u: goto label_3302c4;
        case 0x3302c8u: goto label_3302c8;
        case 0x3302ccu: goto label_3302cc;
        case 0x3302d0u: goto label_3302d0;
        case 0x3302d4u: goto label_3302d4;
        case 0x3302d8u: goto label_3302d8;
        case 0x3302dcu: goto label_3302dc;
        case 0x3302e0u: goto label_3302e0;
        case 0x3302e4u: goto label_3302e4;
        case 0x3302e8u: goto label_3302e8;
        case 0x3302ecu: goto label_3302ec;
        case 0x3302f0u: goto label_3302f0;
        case 0x3302f4u: goto label_3302f4;
        case 0x3302f8u: goto label_3302f8;
        case 0x3302fcu: goto label_3302fc;
        case 0x330300u: goto label_330300;
        case 0x330304u: goto label_330304;
        case 0x330308u: goto label_330308;
        case 0x33030cu: goto label_33030c;
        case 0x330310u: goto label_330310;
        case 0x330314u: goto label_330314;
        case 0x330318u: goto label_330318;
        case 0x33031cu: goto label_33031c;
        case 0x330320u: goto label_330320;
        case 0x330324u: goto label_330324;
        case 0x330328u: goto label_330328;
        case 0x33032cu: goto label_33032c;
        case 0x330330u: goto label_330330;
        case 0x330334u: goto label_330334;
        case 0x330338u: goto label_330338;
        case 0x33033cu: goto label_33033c;
        case 0x330340u: goto label_330340;
        case 0x330344u: goto label_330344;
        case 0x330348u: goto label_330348;
        case 0x33034cu: goto label_33034c;
        case 0x330350u: goto label_330350;
        case 0x330354u: goto label_330354;
        case 0x330358u: goto label_330358;
        case 0x33035cu: goto label_33035c;
        case 0x330360u: goto label_330360;
        case 0x330364u: goto label_330364;
        case 0x330368u: goto label_330368;
        case 0x33036cu: goto label_33036c;
        case 0x330370u: goto label_330370;
        case 0x330374u: goto label_330374;
        case 0x330378u: goto label_330378;
        case 0x33037cu: goto label_33037c;
        case 0x330380u: goto label_330380;
        case 0x330384u: goto label_330384;
        case 0x330388u: goto label_330388;
        case 0x33038cu: goto label_33038c;
        case 0x330390u: goto label_330390;
        case 0x330394u: goto label_330394;
        case 0x330398u: goto label_330398;
        case 0x33039cu: goto label_33039c;
        case 0x3303a0u: goto label_3303a0;
        case 0x3303a4u: goto label_3303a4;
        case 0x3303a8u: goto label_3303a8;
        case 0x3303acu: goto label_3303ac;
        case 0x3303b0u: goto label_3303b0;
        case 0x3303b4u: goto label_3303b4;
        case 0x3303b8u: goto label_3303b8;
        case 0x3303bcu: goto label_3303bc;
        case 0x3303c0u: goto label_3303c0;
        case 0x3303c4u: goto label_3303c4;
        case 0x3303c8u: goto label_3303c8;
        case 0x3303ccu: goto label_3303cc;
        case 0x3303d0u: goto label_3303d0;
        case 0x3303d4u: goto label_3303d4;
        case 0x3303d8u: goto label_3303d8;
        case 0x3303dcu: goto label_3303dc;
        case 0x3303e0u: goto label_3303e0;
        case 0x3303e4u: goto label_3303e4;
        case 0x3303e8u: goto label_3303e8;
        case 0x3303ecu: goto label_3303ec;
        case 0x3303f0u: goto label_3303f0;
        case 0x3303f4u: goto label_3303f4;
        case 0x3303f8u: goto label_3303f8;
        case 0x3303fcu: goto label_3303fc;
        case 0x330400u: goto label_330400;
        case 0x330404u: goto label_330404;
        case 0x330408u: goto label_330408;
        case 0x33040cu: goto label_33040c;
        case 0x330410u: goto label_330410;
        case 0x330414u: goto label_330414;
        case 0x330418u: goto label_330418;
        case 0x33041cu: goto label_33041c;
        case 0x330420u: goto label_330420;
        case 0x330424u: goto label_330424;
        case 0x330428u: goto label_330428;
        case 0x33042cu: goto label_33042c;
        case 0x330430u: goto label_330430;
        case 0x330434u: goto label_330434;
        case 0x330438u: goto label_330438;
        case 0x33043cu: goto label_33043c;
        case 0x330440u: goto label_330440;
        case 0x330444u: goto label_330444;
        case 0x330448u: goto label_330448;
        case 0x33044cu: goto label_33044c;
        case 0x330450u: goto label_330450;
        case 0x330454u: goto label_330454;
        case 0x330458u: goto label_330458;
        case 0x33045cu: goto label_33045c;
        case 0x330460u: goto label_330460;
        case 0x330464u: goto label_330464;
        case 0x330468u: goto label_330468;
        case 0x33046cu: goto label_33046c;
        case 0x330470u: goto label_330470;
        case 0x330474u: goto label_330474;
        case 0x330478u: goto label_330478;
        case 0x33047cu: goto label_33047c;
        case 0x330480u: goto label_330480;
        case 0x330484u: goto label_330484;
        case 0x330488u: goto label_330488;
        case 0x33048cu: goto label_33048c;
        case 0x330490u: goto label_330490;
        case 0x330494u: goto label_330494;
        case 0x330498u: goto label_330498;
        case 0x33049cu: goto label_33049c;
        case 0x3304a0u: goto label_3304a0;
        case 0x3304a4u: goto label_3304a4;
        case 0x3304a8u: goto label_3304a8;
        case 0x3304acu: goto label_3304ac;
        case 0x3304b0u: goto label_3304b0;
        case 0x3304b4u: goto label_3304b4;
        case 0x3304b8u: goto label_3304b8;
        case 0x3304bcu: goto label_3304bc;
        case 0x3304c0u: goto label_3304c0;
        case 0x3304c4u: goto label_3304c4;
        case 0x3304c8u: goto label_3304c8;
        case 0x3304ccu: goto label_3304cc;
        case 0x3304d0u: goto label_3304d0;
        case 0x3304d4u: goto label_3304d4;
        case 0x3304d8u: goto label_3304d8;
        case 0x3304dcu: goto label_3304dc;
        case 0x3304e0u: goto label_3304e0;
        case 0x3304e4u: goto label_3304e4;
        case 0x3304e8u: goto label_3304e8;
        case 0x3304ecu: goto label_3304ec;
        case 0x3304f0u: goto label_3304f0;
        case 0x3304f4u: goto label_3304f4;
        case 0x3304f8u: goto label_3304f8;
        case 0x3304fcu: goto label_3304fc;
        case 0x330500u: goto label_330500;
        case 0x330504u: goto label_330504;
        case 0x330508u: goto label_330508;
        case 0x33050cu: goto label_33050c;
        case 0x330510u: goto label_330510;
        case 0x330514u: goto label_330514;
        case 0x330518u: goto label_330518;
        case 0x33051cu: goto label_33051c;
        case 0x330520u: goto label_330520;
        case 0x330524u: goto label_330524;
        case 0x330528u: goto label_330528;
        case 0x33052cu: goto label_33052c;
        case 0x330530u: goto label_330530;
        case 0x330534u: goto label_330534;
        case 0x330538u: goto label_330538;
        case 0x33053cu: goto label_33053c;
        case 0x330540u: goto label_330540;
        case 0x330544u: goto label_330544;
        case 0x330548u: goto label_330548;
        case 0x33054cu: goto label_33054c;
        case 0x330550u: goto label_330550;
        case 0x330554u: goto label_330554;
        case 0x330558u: goto label_330558;
        case 0x33055cu: goto label_33055c;
        case 0x330560u: goto label_330560;
        case 0x330564u: goto label_330564;
        case 0x330568u: goto label_330568;
        case 0x33056cu: goto label_33056c;
        case 0x330570u: goto label_330570;
        case 0x330574u: goto label_330574;
        case 0x330578u: goto label_330578;
        case 0x33057cu: goto label_33057c;
        case 0x330580u: goto label_330580;
        case 0x330584u: goto label_330584;
        case 0x330588u: goto label_330588;
        case 0x33058cu: goto label_33058c;
        case 0x330590u: goto label_330590;
        case 0x330594u: goto label_330594;
        case 0x330598u: goto label_330598;
        case 0x33059cu: goto label_33059c;
        case 0x3305a0u: goto label_3305a0;
        case 0x3305a4u: goto label_3305a4;
        case 0x3305a8u: goto label_3305a8;
        case 0x3305acu: goto label_3305ac;
        case 0x3305b0u: goto label_3305b0;
        case 0x3305b4u: goto label_3305b4;
        case 0x3305b8u: goto label_3305b8;
        case 0x3305bcu: goto label_3305bc;
        case 0x3305c0u: goto label_3305c0;
        case 0x3305c4u: goto label_3305c4;
        case 0x3305c8u: goto label_3305c8;
        case 0x3305ccu: goto label_3305cc;
        case 0x3305d0u: goto label_3305d0;
        case 0x3305d4u: goto label_3305d4;
        case 0x3305d8u: goto label_3305d8;
        case 0x3305dcu: goto label_3305dc;
        case 0x3305e0u: goto label_3305e0;
        case 0x3305e4u: goto label_3305e4;
        case 0x3305e8u: goto label_3305e8;
        case 0x3305ecu: goto label_3305ec;
        case 0x3305f0u: goto label_3305f0;
        case 0x3305f4u: goto label_3305f4;
        case 0x3305f8u: goto label_3305f8;
        case 0x3305fcu: goto label_3305fc;
        case 0x330600u: goto label_330600;
        case 0x330604u: goto label_330604;
        case 0x330608u: goto label_330608;
        case 0x33060cu: goto label_33060c;
        case 0x330610u: goto label_330610;
        case 0x330614u: goto label_330614;
        case 0x330618u: goto label_330618;
        case 0x33061cu: goto label_33061c;
        case 0x330620u: goto label_330620;
        case 0x330624u: goto label_330624;
        case 0x330628u: goto label_330628;
        case 0x33062cu: goto label_33062c;
        case 0x330630u: goto label_330630;
        case 0x330634u: goto label_330634;
        case 0x330638u: goto label_330638;
        case 0x33063cu: goto label_33063c;
        case 0x330640u: goto label_330640;
        case 0x330644u: goto label_330644;
        case 0x330648u: goto label_330648;
        case 0x33064cu: goto label_33064c;
        case 0x330650u: goto label_330650;
        case 0x330654u: goto label_330654;
        case 0x330658u: goto label_330658;
        case 0x33065cu: goto label_33065c;
        case 0x330660u: goto label_330660;
        case 0x330664u: goto label_330664;
        case 0x330668u: goto label_330668;
        case 0x33066cu: goto label_33066c;
        case 0x330670u: goto label_330670;
        case 0x330674u: goto label_330674;
        case 0x330678u: goto label_330678;
        case 0x33067cu: goto label_33067c;
        case 0x330680u: goto label_330680;
        case 0x330684u: goto label_330684;
        case 0x330688u: goto label_330688;
        case 0x33068cu: goto label_33068c;
        case 0x330690u: goto label_330690;
        case 0x330694u: goto label_330694;
        case 0x330698u: goto label_330698;
        case 0x33069cu: goto label_33069c;
        case 0x3306a0u: goto label_3306a0;
        case 0x3306a4u: goto label_3306a4;
        case 0x3306a8u: goto label_3306a8;
        case 0x3306acu: goto label_3306ac;
        case 0x3306b0u: goto label_3306b0;
        case 0x3306b4u: goto label_3306b4;
        case 0x3306b8u: goto label_3306b8;
        case 0x3306bcu: goto label_3306bc;
        case 0x3306c0u: goto label_3306c0;
        case 0x3306c4u: goto label_3306c4;
        case 0x3306c8u: goto label_3306c8;
        case 0x3306ccu: goto label_3306cc;
        case 0x3306d0u: goto label_3306d0;
        case 0x3306d4u: goto label_3306d4;
        case 0x3306d8u: goto label_3306d8;
        case 0x3306dcu: goto label_3306dc;
        case 0x3306e0u: goto label_3306e0;
        case 0x3306e4u: goto label_3306e4;
        case 0x3306e8u: goto label_3306e8;
        case 0x3306ecu: goto label_3306ec;
        case 0x3306f0u: goto label_3306f0;
        case 0x3306f4u: goto label_3306f4;
        case 0x3306f8u: goto label_3306f8;
        case 0x3306fcu: goto label_3306fc;
        case 0x330700u: goto label_330700;
        case 0x330704u: goto label_330704;
        case 0x330708u: goto label_330708;
        case 0x33070cu: goto label_33070c;
        case 0x330710u: goto label_330710;
        case 0x330714u: goto label_330714;
        case 0x330718u: goto label_330718;
        case 0x33071cu: goto label_33071c;
        case 0x330720u: goto label_330720;
        case 0x330724u: goto label_330724;
        case 0x330728u: goto label_330728;
        case 0x33072cu: goto label_33072c;
        case 0x330730u: goto label_330730;
        case 0x330734u: goto label_330734;
        case 0x330738u: goto label_330738;
        case 0x33073cu: goto label_33073c;
        case 0x330740u: goto label_330740;
        case 0x330744u: goto label_330744;
        case 0x330748u: goto label_330748;
        case 0x33074cu: goto label_33074c;
        case 0x330750u: goto label_330750;
        case 0x330754u: goto label_330754;
        default: break;
    }

    ctx->pc = 0x32d630u;

label_32d630:
    // 0x32d630: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x32d630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_32d634:
    // 0x32d634: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x32d634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_32d638:
    // 0x32d638: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x32d638u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_32d63c:
    // 0x32d63c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x32d63cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_32d640:
    // 0x32d640: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x32d640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_32d644:
    // 0x32d644: 0x128080  sll         $s0, $s2, 2
    ctx->pc = 0x32d644u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_32d648:
    // 0x32d648: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x32d648u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_32d64c:
    // 0x32d64c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32d64cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32d650:
    // 0x32d650: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32d650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_32d654:
    // 0x32d654: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x32d654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32d658:
    // 0x32d658: 0xc10a322  jal         func_428C88
label_32d65c:
    if (ctx->pc == 0x32D65Cu) {
        ctx->pc = 0x32D65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D658u;
        // 0x32d65c: 0x26050002  addiu       $a1, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32D660u;
        goto label_32d660;
    }
    ctx->pc = 0x32D658u;
    SET_GPR_U32(ctx, 31, 0x32D660u);
    ctx->pc = 0x32D65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D658u;
    // 0x32d65c: 0x26050002  addiu       $a1, $s0, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x32D658u, 0x32D660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D660u;
label_32d660:
    // 0x32d660: 0x8f85be20  lw          $a1, -0x41E0($gp)
    ctx->pc = 0x32d660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_32d664:
    // 0x32d664: 0x3c036c00  lui         $v1, 0x6C00
    ctx->pc = 0x32d664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27648 << 16));
label_32d668:
    // 0x32d668: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x32d668u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_32d66c:
    // 0x32d66c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x32d66cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_32d670:
    // 0x32d670: 0x346302ff  ori         $v1, $v1, 0x2FF
    ctx->pc = 0x32d670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)767);
label_32d674:
    // 0x32d674: 0x101400  sll         $v0, $s0, 16
    ctx->pc = 0x32d674u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
label_32d678:
    // 0x32d678: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32d678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_32d67c:
    // 0x32d67c: 0x2048025  or          $s0, $s0, $a0
    ctx->pc = 0x32d67cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
label_32d680:
    // 0x32d680: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x32d680u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
label_32d684:
    // 0x32d684: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x32d684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_32d688:
    // 0x32d688: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x32d688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_32d68c:
    // 0x32d68c: 0x34630404  ori         $v1, $v1, 0x404
    ctx->pc = 0x32d68cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1028);
label_32d690:
    // 0x32d690: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x32d690u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
label_32d694:
    // 0x32d694: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32d694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_32d698:
    // 0x32d698: 0x70501389  pcpyld      $v0, $v0, $s0
    ctx->pc = 0x32d698u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 16)));
label_32d69c:
    // 0x32d69c: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x32d69cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
label_32d6a0:
    // 0x32d6a0: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x32d6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_32d6a4:
    // 0x32d6a4: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x32d6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
label_32d6a8:
    // 0x32d6a8: 0x2803e  dsrl32      $s0, $v0, 0
    ctx->pc = 0x32d6a8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) >> (32 + 0));
label_32d6ac:
    // 0x32d6ac: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x32d6acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32d6b0:
    // 0x32d6b0: 0x70701389  pcpyld      $v0, $v1, $s0
    ctx->pc = 0x32d6b0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 16)));
label_32d6b4:
    // 0x32d6b4: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x32d6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
label_32d6b8:
    // 0x32d6b8: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x32d6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_32d6bc:
    // 0x32d6bc: 0x12400046  beqz        $s2, . + 4 + (0x46 << 2)
label_32d6c0:
    if (ctx->pc == 0x32D6C0u) {
        ctx->pc = 0x32D6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D6BCu;
        // 0x32d6c0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32D6C4u;
        goto label_32d6c4;
    }
    ctx->pc = 0x32D6BCu;
    {
        const bool branch_taken_0x32d6bc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D6BCu;
        // 0x32d6c0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d6bc) {
            ctx->pc = 0x32D7D8u;
            goto label_32d7d8;
        }
    }
    ctx->pc = 0x32D6C4u;
label_32d6c4:
    // 0x32d6c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32d6c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32d6c8:
    // 0x32d6c8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x32d6c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_32d6cc:
    // 0x32d6cc: 0x1a400004  blez        $s2, . + 4 + (0x4 << 2)
label_32d6d0:
    if (ctx->pc == 0x32D6D0u) {
        ctx->pc = 0x32D6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D6CCu;
        // 0x32d6d0: 0x32420001  andi        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32D6D4u;
        goto label_32d6d4;
    }
    ctx->pc = 0x32D6CCu;
    {
        const bool branch_taken_0x32d6cc = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x32D6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D6CCu;
        // 0x32d6d0: 0x32420001  andi        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d6cc) {
            ctx->pc = 0x32D6E0u;
            goto label_32d6e0;
        }
    }
    ctx->pc = 0x32D6D4u;
label_32d6d4:
    // 0x32d6d4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_32d6d8:
    if (ctx->pc == 0x32D6D8u) {
        ctx->pc = 0x32D6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D6D4u;
        // 0x32d6d8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32D6DCu;
        goto label_32d6dc;
    }
    ctx->pc = 0x32D6D4u;
    {
        const bool branch_taken_0x32d6d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D6D4u;
        // 0x32d6d8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d6d4) {
            ctx->pc = 0x32D738u;
            goto label_32d738;
        }
    }
    ctx->pc = 0x32D6DCu;
label_32d6dc:
    // 0x32d6dc: 0x0  nop
    ctx->pc = 0x32d6dcu;
    // NOP
label_32d6e0:
    // 0x32d6e0: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x32d6e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_32d6e4:
    // 0x32d6e4: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x32d6e4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
label_32d6e8:
    // 0x32d6e8: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x32d6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_32d6ec:
    // 0x32d6ec: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x32d6ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_32d6f0:
    // 0x32d6f0: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x32d6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
label_32d6f4:
    // 0x32d6f4: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x32d6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_32d6f8:
    // 0x32d6f8: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x32d6f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_32d6fc:
    // 0x32d6fc: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x32d6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
label_32d700:
    // 0x32d700: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x32d700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_32d704:
    // 0x32d704: 0x7a220030  lq          $v0, 0x30($s1)
    ctx->pc = 0x32d704u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 48)));
label_32d708:
    // 0x32d708: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x32d708u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
label_32d70c:
    // 0x32d70c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x32d70cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_32d710:
    // 0x32d710: 0x7a220040  lq          $v0, 0x40($s1)
    ctx->pc = 0x32d710u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 64)));
label_32d714:
    // 0x32d714: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x32d714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_32d718:
    // 0x32d718: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x32d718u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
label_32d71c:
    // 0x32d71c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x32d71cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_32d720:
    // 0x32d720: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x32d720u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32d724:
    // 0x32d724: 0x172102b  sltu        $v0, $t3, $s2
    ctx->pc = 0x32d724u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_32d728:
    // 0x32d728: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_32d72c:
    if (ctx->pc == 0x32D72Cu) {
        ctx->pc = 0x32D72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D728u;
        // 0x32d72c: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32D730u;
        goto label_32d730;
    }
    ctx->pc = 0x32D728u;
    {
        const bool branch_taken_0x32d728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D728u;
        // 0x32d72c: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d728) {
            ctx->pc = 0x32D7D8u;
            goto label_32d7d8;
        }
    }
    ctx->pc = 0x32D730u;
label_32d730:
    // 0x32d730: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x32d730u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32d734:
    // 0x32d734: 0x0  nop
    ctx->pc = 0x32d734u;
    // NOP
label_32d738:
    // 0x32d738: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x32d738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_32d73c:
    // 0x32d73c: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x32d73cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_32d740:
    // 0x32d740: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x32d740u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_32d744:
    // 0x32d744: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x32d744u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_32d748:
    // 0x32d748: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x32d748u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_32d74c:
    // 0x32d74c: 0x0  nop
    ctx->pc = 0x32d74cu;
    // NOP
label_32d750:
    // 0x32d750: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x32d750u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_32d754:
    // 0x32d754: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x32d754u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_32d758:
    // 0x32d758: 0x79030010  lq          $v1, 0x10($t0)
    ctx->pc = 0x32d758u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 8), 16)));
label_32d75c:
    // 0x32d75c: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x32d75cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
label_32d760:
    // 0x32d760: 0x79220020  lq          $v0, 0x20($t1)
    ctx->pc = 0x32d760u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 9), 32)));
label_32d764:
    // 0x32d764: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x32d764u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
label_32d768:
    // 0x32d768: 0x79430030  lq          $v1, 0x30($t2)
    ctx->pc = 0x32d768u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 10), 48)));
label_32d76c:
    // 0x32d76c: 0x7c830030  sq          $v1, 0x30($a0)
    ctx->pc = 0x32d76cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 3));
label_32d770:
    // 0x32d770: 0x78c20040  lq          $v0, 0x40($a2)
    ctx->pc = 0x32d770u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 64)));
label_32d774:
    // 0x32d774: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x32d774u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
label_32d778:
    // 0x32d778: 0x78e30050  lq          $v1, 0x50($a3)
    ctx->pc = 0x32d778u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 80)));
label_32d77c:
    // 0x32d77c: 0x7c830050  sq          $v1, 0x50($a0)
    ctx->pc = 0x32d77cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 3));
label_32d780:
    // 0x32d780: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x32d780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_32d784:
    // 0x32d784: 0x79020060  lq          $v0, 0x60($t0)
    ctx->pc = 0x32d784u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 96)));
label_32d788:
    // 0x32d788: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x32d788u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_32d78c:
    // 0x32d78c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x32d78cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_32d790:
    // 0x32d790: 0x79220070  lq          $v0, 0x70($t1)
    ctx->pc = 0x32d790u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 9), 112)));
label_32d794:
    // 0x32d794: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x32d794u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_32d798:
    // 0x32d798: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x32d798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_32d79c:
    // 0x32d79c: 0x79420080  lq          $v0, 0x80($t2)
    ctx->pc = 0x32d79cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 10), 128)));
label_32d7a0:
    // 0x32d7a0: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x32d7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_32d7a4:
    // 0x32d7a4: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x32d7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_32d7a8:
    // 0x32d7a8: 0x78c20090  lq          $v0, 0x90($a2)
    ctx->pc = 0x32d7a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 144)));
label_32d7ac:
    // 0x32d7ac: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x32d7acu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_32d7b0:
    // 0x32d7b0: 0x24a500a0  addiu       $a1, $a1, 0xA0
    ctx->pc = 0x32d7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 160));
label_32d7b4:
    // 0x32d7b4: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x32d7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_32d7b8:
    // 0x32d7b8: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x32d7b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
label_32d7bc:
    // 0x32d7bc: 0x256b0002  addiu       $t3, $t3, 0x2
    ctx->pc = 0x32d7bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
label_32d7c0:
    // 0x32d7c0: 0x254a00a0  addiu       $t2, $t2, 0xA0
    ctx->pc = 0x32d7c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 160));
label_32d7c4:
    // 0x32d7c4: 0x252900a0  addiu       $t1, $t1, 0xA0
    ctx->pc = 0x32d7c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 160));
label_32d7c8:
    // 0x32d7c8: 0x250800a0  addiu       $t0, $t0, 0xA0
    ctx->pc = 0x32d7c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 160));
label_32d7cc:
    // 0x32d7cc: 0x172102b  sltu        $v0, $t3, $s2
    ctx->pc = 0x32d7ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_32d7d0:
    // 0x32d7d0: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
label_32d7d4:
    if (ctx->pc == 0x32D7D4u) {
        ctx->pc = 0x32D7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D7D0u;
        // 0x32d7d4: 0x24e700a0  addiu       $a3, $a3, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32D7D8u;
        goto label_32d7d8;
    }
    ctx->pc = 0x32D7D0u;
    {
        const bool branch_taken_0x32d7d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32D7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D7D0u;
        // 0x32d7d4: 0x24e700a0  addiu       $a3, $a3, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d7d0) {
            ctx->pc = 0x32D750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32d750;
        }
    }
    ctx->pc = 0x32D7D8u;
label_32d7d8:
    // 0x32d7d8: 0xaf85be20  sw          $a1, -0x41E0($gp)
    ctx->pc = 0x32d7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 5));
label_32d7dc:
    // 0x32d7dc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x32d7dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32d7e0:
    // 0x32d7e0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x32d7e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_32d7e4:
    // 0x32d7e4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x32d7e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_32d7e8:
    // 0x32d7e8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x32d7e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_32d7ec:
    // 0x32d7ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32d7ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_32d7f0:
    // 0x32d7f0: 0x3e00008  jr          $ra
label_32d7f4:
    if (ctx->pc == 0x32D7F4u) {
        ctx->pc = 0x32D7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D7F0u;
        // 0x32d7f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32D7F8u;
        goto label_32d7f8;
    }
    ctx->pc = 0x32D7F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D7F0u;
        // 0x32d7f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D7F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32D7F8u;
label_32d7f8:
    // 0x32d7f8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x32d7f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_32d7fc:
    // 0x32d7fc: 0x8f83a634  lw          $v1, -0x59CC($gp)
    ctx->pc = 0x32d7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944308)));
label_32d800:
    // 0x32d800: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x32d800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_32d804:
    // 0x32d804: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x32d804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_32d808:
    // 0x32d808: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x32d808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_32d80c:
    // 0x32d80c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x32d80cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32d810:
    // 0x32d810: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x32d810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_32d814:
    // 0x32d814: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x32d814u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32d818:
    // 0x32d818: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x32d818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_32d81c:
    // 0x32d81c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x32d81cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_32d820:
    // 0x32d820: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x32d820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_32d824:
    // 0x32d824: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x32d824u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_32d828:
    // 0x32d828: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32d828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_32d82c:
    // 0x32d82c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x32d82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_32d830:
    // 0x32d830: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x32d830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32d834:
    // 0x32d834: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x32d834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_32d838:
    // 0x32d838: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x32d838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32d83c:
    // 0x32d83c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x32d83cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_32d840:
    // 0x32d840: 0x44130800  mfc1        $s3, $f1
    ctx->pc = 0x32d840u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
label_32d844:
    // 0x32d844: 0xc0cacc6  jal         func_32B318
label_32d848:
    if (ctx->pc == 0x32D848u) {
        ctx->pc = 0x32D848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D844u;
        // 0x32d848: 0x8c510004  lw          $s1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32D84Cu;
        goto label_32d84c;
    }
    ctx->pc = 0x32D844u;
    SET_GPR_U32(ctx, 31, 0x32D84Cu);
    ctx->pc = 0x32D848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D844u;
    // 0x32d848: 0x8c510004  lw          $s1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B318u, 0x32D844u, 0x32D84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D84Cu;
label_32d84c:
    // 0x32d84c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x32d84cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_32d850:
    // 0x32d850: 0xc780a6ac  lwc1        $f0, -0x5954($gp)
    ctx->pc = 0x32d850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294944428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32d854:
    // 0x32d854: 0x8c62e880  lw          $v0, -0x1780($v1)
    ctx->pc = 0x32d854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961280)));
label_32d858:
    // 0x32d858: 0xc4420084  lwc1        $f2, 0x84($v0)
    ctx->pc = 0x32d858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_32d85c:
    // 0x32d85c: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x32d85cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_32d860:
    // 0x32d860: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_32d864:
    if (ctx->pc == 0x32D864u) {
        ctx->pc = 0x32D868u;
        goto label_32d868;
    }
    ctx->pc = 0x32D860u;
    {
        const bool branch_taken_0x32d860 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32d860) {
            ctx->pc = 0x32D884u;
            goto label_32d884;
        }
    }
    ctx->pc = 0x32D868u;
label_32d868:
    // 0x32d868: 0xc4400080  lwc1        $f0, 0x80($v0)
    ctx->pc = 0x32d868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32d86c:
    // 0x32d86c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x32d86cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_32d870:
    // 0x32d870: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x32d870u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_32d874:
    // 0x32d874: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x32d874u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_32d878:
    // 0x32d878: 0xe782a6ac  swc1        $f2, -0x5954($gp)
    ctx->pc = 0x32d878u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294944428), bits); }
label_32d87c:
    // 0x32d87c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x32d87cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_32d880:
    // 0x32d880: 0xe781a6a8  swc1        $f1, -0x5958($gp)
    ctx->pc = 0x32d880u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294944424), bits); }
label_32d884:
    // 0x32d884: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
label_32d888:
    if (ctx->pc == 0x32D888u) {
        ctx->pc = 0x32D88Cu;
        goto label_32d88c;
    }
    ctx->pc = 0x32D884u;
    {
        const bool branch_taken_0x32d884 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x32d884) {
            ctx->pc = 0x32D898u;
            goto label_32d898;
        }
    }
    ctx->pc = 0x32D88Cu;
label_32d88c:
    // 0x32d88c: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x32d88cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32d890:
    // 0x32d890: 0x52200005  beql        $s1, $zero, . + 4 + (0x5 << 2)
label_32d894:
    if (ctx->pc == 0x32D894u) {
        ctx->pc = 0x32D894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D890u;
        // 0x32d894: 0xae510040  sw          $s1, 0x40($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32D898u;
        goto label_32d898;
    }
    ctx->pc = 0x32D890u;
    {
        const bool branch_taken_0x32d890 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d890) {
            ctx->pc = 0x32D894u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32D890u;
            // 0x32d894: 0xae510040  sw          $s1, 0x40($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32D8A8u;
            goto label_32d8a8;
        }
    }
    ctx->pc = 0x32D898u;
label_32d898:
    // 0x32d898: 0xc110e98  jal         func_443A60
label_32d89c:
    if (ctx->pc == 0x32D89Cu) {
        ctx->pc = 0x32D89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D898u;
        // 0x32d89c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32D8A0u;
        goto label_32d8a0;
    }
    ctx->pc = 0x32D898u;
    SET_GPR_U32(ctx, 31, 0x32D8A0u);
    ctx->pc = 0x32D89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D898u;
    // 0x32d89c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443A60u, 0x32D898u, 0x32D8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D8A0u;
label_32d8a0:
    // 0x32d8a0: 0xae510040  sw          $s1, 0x40($s2)
    ctx->pc = 0x32d8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 17));
label_32d8a4:
    // 0x32d8a4: 0x0  nop
    ctx->pc = 0x32d8a4u;
    // NOP
label_32d8a8:
    // 0x32d8a8: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
label_32d8ac:
    if (ctx->pc == 0x32D8ACu) {
        ctx->pc = 0x32D8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D8A8u;
        // 0x32d8ac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32D8B0u;
        goto label_32d8b0;
    }
    ctx->pc = 0x32D8A8u;
    {
        const bool branch_taken_0x32d8a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D8A8u;
        // 0x32d8ac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d8a8) {
            ctx->pc = 0x32D8B4u;
            goto label_32d8b4;
        }
    }
    ctx->pc = 0x32D8B0u;
label_32d8b0:
    // 0x32d8b0: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x32d8b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_32d8b4:
    // 0x32d8b4: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_32d8b8:
    if (ctx->pc == 0x32D8B8u) {
        ctx->pc = 0x32D8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D8B4u;
        // 0x32d8b8: 0xaf80bec4  sw          $zero, -0x413C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950596), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32D8BCu;
        goto label_32d8bc;
    }
    ctx->pc = 0x32D8B4u;
    {
        const bool branch_taken_0x32d8b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D8B4u;
        // 0x32d8b8: 0xaf80bec4  sw          $zero, -0x413C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950596), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d8b4) {
            ctx->pc = 0x32D8DCu;
            goto label_32d8dc;
        }
    }
    ctx->pc = 0x32D8BCu;
label_32d8bc:
    // 0x32d8bc: 0x92020023  lbu         $v0, 0x23($s0)
    ctx->pc = 0x32d8bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
label_32d8c0:
    // 0x32d8c0: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x32d8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_32d8c4:
    // 0x32d8c4: 0x38430005  xori        $v1, $v0, 0x5
    ctx->pc = 0x32d8c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
label_32d8c8:
    // 0x32d8c8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x32d8c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_32d8cc:
    // 0x32d8cc: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x32d8ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_32d8d0:
    // 0x32d8d0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x32d8d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_32d8d4:
    // 0x32d8d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32d8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_32d8d8:
    // 0x32d8d8: 0xaf82bec4  sw          $v0, -0x413C($gp)
    ctx->pc = 0x32d8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950596), GPR_U32(ctx, 2));
label_32d8dc:
    // 0x32d8dc: 0x8f82bec0  lw          $v0, -0x4140($gp)
    ctx->pc = 0x32d8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950592)));
label_32d8e0:
    // 0x32d8e0: 0x12020038  beq         $s0, $v0, . + 4 + (0x38 << 2)
label_32d8e4:
    if (ctx->pc == 0x32D8E4u) {
        ctx->pc = 0x32D8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D8E0u;
        // 0x32d8e4: 0x8f82bec4  lw          $v0, -0x413C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950596)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32D8E8u;
        goto label_32d8e8;
    }
    ctx->pc = 0x32D8E0u;
    {
        const bool branch_taken_0x32d8e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x32D8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D8E0u;
        // 0x32d8e4: 0x8f82bec4  lw          $v0, -0x413C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950596)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d8e0) {
            ctx->pc = 0x32D9C4u;
            goto label_32d9c4;
        }
    }
    ctx->pc = 0x32D8E8u;
label_32d8e8:
    // 0x32d8e8: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_32d8ec:
    if (ctx->pc == 0x32D8ECu) {
        ctx->pc = 0x32D8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D8E8u;
        // 0x32d8ec: 0xdf82ae80  ld          $v0, -0x5180($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32D8F0u;
        goto label_32d8f0;
    }
    ctx->pc = 0x32D8E8u;
    {
        const bool branch_taken_0x32d8e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D8E8u;
        // 0x32d8ec: 0xdf82ae80  ld          $v0, -0x5180($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d8e8) {
            ctx->pc = 0x32D910u;
            goto label_32d910;
        }
    }
    ctx->pc = 0x32D8F0u;
label_32d8f0:
    // 0x32d8f0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x32d8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_32d8f4:
    // 0x32d8f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32d8f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32d8f8:
    // 0x32d8f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32d8f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32d8fc:
    // 0x32d8fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32d8fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_32d900:
    // 0x32d900: 0xc110b7e  jal         func_442DF8
label_32d904:
    if (ctx->pc == 0x32D904u) {
        ctx->pc = 0x32D904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D900u;
        // 0x32d904: 0xff82ae80  sd          $v0, -0x5180($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294946432), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32D908u;
        goto label_32d908;
    }
    ctx->pc = 0x32D900u;
    SET_GPR_U32(ctx, 31, 0x32D908u);
    ctx->pc = 0x32D904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D900u;
    // 0x32d904: 0xff82ae80  sd          $v0, -0x5180($gp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946432), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x442DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x442DF8u, 0x32D900u, 0x32D908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D908u;
label_32d908:
    // 0x32d908: 0x10000005  b           . + 4 + (0x5 << 2)
label_32d90c:
    if (ctx->pc == 0x32D90Cu) {
        ctx->pc = 0x32D90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D908u;
        // 0x32d90c: 0xaf90bec0  sw          $s0, -0x4140($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950592), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32D910u;
        goto label_32d910;
    }
    ctx->pc = 0x32D908u;
    {
        const bool branch_taken_0x32d908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D908u;
        // 0x32d90c: 0xaf90bec0  sw          $s0, -0x4140($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950592), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d908) {
            ctx->pc = 0x32D920u;
            goto label_32d920;
        }
    }
    ctx->pc = 0x32D910u;
label_32d910:
    // 0x32d910: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x32d910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_32d914:
    // 0x32d914: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x32d914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_32d918:
    // 0x32d918: 0xff82ae80  sd          $v0, -0x5180($gp)
    ctx->pc = 0x32d918u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946432), GPR_U64(ctx, 2));
label_32d91c:
    // 0x32d91c: 0xaf90bec0  sw          $s0, -0x4140($gp)
    ctx->pc = 0x32d91cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950592), GPR_U32(ctx, 16));
label_32d920:
    // 0x32d920: 0x12200027  beqz        $s1, . + 4 + (0x27 << 2)
label_32d924:
    if (ctx->pc == 0x32D924u) {
        ctx->pc = 0x32D924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D920u;
        // 0x32d924: 0x2404fe1f  addiu       $a0, $zero, -0x1E1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966815));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32D928u;
        goto label_32d928;
    }
    ctx->pc = 0x32D920u;
    {
        const bool branch_taken_0x32d920 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D920u;
        // 0x32d924: 0x2404fe1f  addiu       $a0, $zero, -0x1E1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966815));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d920) {
            ctx->pc = 0x32D9C0u;
            goto label_32d9c0;
        }
    }
    ctx->pc = 0x32D928u;
label_32d928:
    // 0x32d928: 0x8e250050  lw          $a1, 0x50($s1)
    ctx->pc = 0x32d928u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_32d92c:
    // 0x32d92c: 0xdf82ae68  ld          $v0, -0x5198($gp)
    ctx->pc = 0x32d92cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946408)));
label_32d930:
    // 0x32d930: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x32d930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_32d934:
    // 0x32d934: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x32d934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_32d938:
    // 0x32d938: 0x34010006  ori         $at, $zero, 0x6
    ctx->pc = 0x32d938u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)6);
label_32d93c:
    // 0x32d93c: 0x5023000e  beql        $at, $v1, . + 4 + (0xE << 2)
label_32d940:
    if (ctx->pc == 0x32D940u) {
        ctx->pc = 0x32D940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D93Cu;
        // 0x32d940: 0x34420160  ori         $v0, $v0, 0x160 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)352);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32D944u;
        goto label_32d944;
    }
    ctx->pc = 0x32D93Cu;
    {
        const bool branch_taken_0x32d93c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 3));
        if (branch_taken_0x32d93c) {
            ctx->pc = 0x32D940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32D93Cu;
            // 0x32d940: 0x34420160  ori         $v0, $v0, 0x160 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)352);
            ctx->in_delay_slot = false;
            ctx->pc = 0x32D978u;
            goto label_32d978;
        }
    }
    ctx->pc = 0x32D944u;
label_32d944:
    // 0x32d944: 0x34010005  ori         $at, $zero, 0x5
    ctx->pc = 0x32d944u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)5);
label_32d948:
    // 0x32d948: 0x5023000b  beql        $at, $v1, . + 4 + (0xB << 2)
label_32d94c:
    if (ctx->pc == 0x32D94Cu) {
        ctx->pc = 0x32D94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D948u;
        // 0x32d94c: 0x344200c0  ori         $v0, $v0, 0xC0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32D950u;
        goto label_32d950;
    }
    ctx->pc = 0x32D948u;
    {
        const bool branch_taken_0x32d948 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 3));
        if (branch_taken_0x32d948) {
            ctx->pc = 0x32D94Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32D948u;
            // 0x32d94c: 0x344200c0  ori         $v0, $v0, 0xC0 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
            ctx->in_delay_slot = false;
            ctx->pc = 0x32D978u;
            goto label_32d978;
        }
    }
    ctx->pc = 0x32D950u;
label_32d950:
    // 0x32d950: 0x34010004  ori         $at, $zero, 0x4
    ctx->pc = 0x32d950u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)4);
label_32d954:
    // 0x32d954: 0x50230008  beql        $at, $v1, . + 4 + (0x8 << 2)
label_32d958:
    if (ctx->pc == 0x32D958u) {
        ctx->pc = 0x32D958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D954u;
        // 0x32d958: 0x34420120  ori         $v0, $v0, 0x120 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32D95Cu;
        goto label_32d95c;
    }
    ctx->pc = 0x32D954u;
    {
        const bool branch_taken_0x32d954 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 3));
        if (branch_taken_0x32d954) {
            ctx->pc = 0x32D958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32D954u;
            // 0x32d958: 0x34420120  ori         $v0, $v0, 0x120 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
            ctx->in_delay_slot = false;
            ctx->pc = 0x32D978u;
            goto label_32d978;
        }
    }
    ctx->pc = 0x32D95Cu;
label_32d95c:
    // 0x32d95c: 0x34010003  ori         $at, $zero, 0x3
    ctx->pc = 0x32d95cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)3);
label_32d960:
    // 0x32d960: 0x50230005  beql        $at, $v1, . + 4 + (0x5 << 2)
label_32d964:
    if (ctx->pc == 0x32D964u) {
        ctx->pc = 0x32D964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D960u;
        // 0x32d964: 0x34420080  ori         $v0, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32D968u;
        goto label_32d968;
    }
    ctx->pc = 0x32D960u;
    {
        const bool branch_taken_0x32d960 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 3));
        if (branch_taken_0x32d960) {
            ctx->pc = 0x32D964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32D960u;
            // 0x32d964: 0x34420080  ori         $v0, $v0, 0x80 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
            ctx->in_delay_slot = false;
            ctx->pc = 0x32D978u;
            goto label_32d978;
        }
    }
    ctx->pc = 0x32D968u;
label_32d968:
    // 0x32d968: 0x34010002  ori         $at, $zero, 0x2
    ctx->pc = 0x32d968u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)2);
label_32d96c:
    // 0x32d96c: 0x50230002  beql        $at, $v1, . + 4 + (0x2 << 2)
label_32d970:
    if (ctx->pc == 0x32D970u) {
        ctx->pc = 0x32D970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D96Cu;
        // 0x32d970: 0x34420060  ori         $v0, $v0, 0x60 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)96);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32D974u;
        goto label_32d974;
    }
    ctx->pc = 0x32D96Cu;
    {
        const bool branch_taken_0x32d96c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 3));
        if (branch_taken_0x32d96c) {
            ctx->pc = 0x32D970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32D96Cu;
            // 0x32d970: 0x34420060  ori         $v0, $v0, 0x60 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)96);
            ctx->in_delay_slot = false;
            ctx->pc = 0x32D978u;
            goto label_32d978;
        }
    }
    ctx->pc = 0x32D974u;
label_32d974:
    // 0x32d974: 0x34420000  ori         $v0, $v0, 0x0
    ctx->pc = 0x32d974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)0);
label_32d978:
    // 0x32d978: 0x0  nop
    ctx->pc = 0x32d978u;
    // NOP
label_32d97c:
    // 0x32d97c: 0xff82ae68  sd          $v0, -0x5198($gp)
    ctx->pc = 0x32d97cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946408), GPR_U64(ctx, 2));
label_32d980:
    // 0x32d980: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x32d980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_32d984:
    // 0x32d984: 0x30a20f00  andi        $v0, $a1, 0xF00
    ctx->pc = 0x32d984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3840);
label_32d988:
    // 0x32d988: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x32d988u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_32d98c:
    // 0x32d98c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_32d990:
    if (ctx->pc == 0x32D990u) {
        ctx->pc = 0x32D990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D98Cu;
        // 0x32d990: 0xff80ae60  sd          $zero, -0x51A0($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294946400), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32D994u;
        goto label_32d994;
    }
    ctx->pc = 0x32D98Cu;
    {
        const bool branch_taken_0x32d98c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x32D990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D98Cu;
        // 0x32d990: 0xff80ae60  sd          $zero, -0x51A0($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294946400), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d98c) {
            ctx->pc = 0x32D9A0u;
            goto label_32d9a0;
        }
    }
    ctx->pc = 0x32D994u;
label_32d994:
    // 0x32d994: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32d994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32d998:
    // 0x32d998: 0xff82ae60  sd          $v0, -0x51A0($gp)
    ctx->pc = 0x32d998u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946400), GPR_U64(ctx, 2));
label_32d99c:
    // 0x32d99c: 0x0  nop
    ctx->pc = 0x32d99cu;
    // NOP
label_32d9a0:
    // 0x32d9a0: 0x30a2f000  andi        $v0, $a1, 0xF000
    ctx->pc = 0x32d9a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)61440);
label_32d9a4:
    // 0x32d9a4: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x32d9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
label_32d9a8:
    // 0x32d9a8: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_32d9ac:
    if (ctx->pc == 0x32D9ACu) {
        ctx->pc = 0x32D9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D9A8u;
        // 0x32d9ac: 0x8f82bec4  lw          $v0, -0x413C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950596)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32D9B0u;
        goto label_32d9b0;
    }
    ctx->pc = 0x32D9A8u;
    {
        const bool branch_taken_0x32d9a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x32D9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D9A8u;
        // 0x32d9ac: 0x8f82bec4  lw          $v0, -0x413C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950596)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d9a8) {
            ctx->pc = 0x32D9C4u;
            goto label_32d9c4;
        }
    }
    ctx->pc = 0x32D9B0u;
label_32d9b0:
    // 0x32d9b0: 0xdf82ae60  ld          $v0, -0x51A0($gp)
    ctx->pc = 0x32d9b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946400)));
label_32d9b4:
    // 0x32d9b4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x32d9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_32d9b8:
    // 0x32d9b8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32d9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_32d9bc:
    // 0x32d9bc: 0xff82ae60  sd          $v0, -0x51A0($gp)
    ctx->pc = 0x32d9bcu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946400), GPR_U64(ctx, 2));
label_32d9c0:
    // 0x32d9c0: 0x8f82bec4  lw          $v0, -0x413C($gp)
    ctx->pc = 0x32d9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950596)));
label_32d9c4:
    // 0x32d9c4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_32d9c8:
    if (ctx->pc == 0x32D9C8u) {
        ctx->pc = 0x32D9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D9C4u;
        // 0x32d9c8: 0xdf82ae48  ld          $v0, -0x51B8($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32D9CCu;
        goto label_32d9cc;
    }
    ctx->pc = 0x32D9C4u;
    {
        const bool branch_taken_0x32d9c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D9C4u;
        // 0x32d9c8: 0xdf82ae48  ld          $v0, -0x51B8($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d9c4) {
            ctx->pc = 0x32D9D8u;
            goto label_32d9d8;
        }
    }
    ctx->pc = 0x32D9CCu;
label_32d9cc:
    // 0x32d9cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32d9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32d9d0:
    // 0x32d9d0: 0x10000003  b           . + 4 + (0x3 << 2)
label_32d9d4:
    if (ctx->pc == 0x32D9D4u) {
        ctx->pc = 0x32D9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D9D0u;
        // 0x32d9d4: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32D9D8u;
        goto label_32d9d8;
    }
    ctx->pc = 0x32D9D0u;
    {
        const bool branch_taken_0x32d9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D9D0u;
        // 0x32d9d4: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d9d0) {
            ctx->pc = 0x32D9E0u;
            goto label_32d9e0;
        }
    }
    ctx->pc = 0x32D9D8u;
label_32d9d8:
    // 0x32d9d8: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x32d9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_32d9dc:
    // 0x32d9dc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x32d9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_32d9e0:
    // 0x32d9e0: 0xff82ae48  sd          $v0, -0x51B8($gp)
    ctx->pc = 0x32d9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946376), GPR_U64(ctx, 2));
label_32d9e4:
    // 0x32d9e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x32d9e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32d9e8:
    // 0x32d9e8: 0xc10a322  jal         func_428C88
label_32d9ec:
    if (ctx->pc == 0x32D9ECu) {
        ctx->pc = 0x32D9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D9E8u;
        // 0x32d9ec: 0x24050021  addiu       $a1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32D9F0u;
        goto label_32d9f0;
    }
    ctx->pc = 0x32D9E8u;
    SET_GPR_U32(ctx, 31, 0x32D9F0u);
    ctx->pc = 0x32D9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D9E8u;
    // 0x32d9ec: 0x24050021  addiu       $a1, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x32D9E8u, 0x32D9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D9F0u;
label_32d9f0:
    // 0x32d9f0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x32d9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_32d9f4:
    // 0x32d9f4: 0x3463001a  ori         $v1, $v1, 0x1A
    ctx->pc = 0x32d9f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26);
label_32d9f8:
    // 0x32d9f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x32d9f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32d9fc:
    // 0x32d9fc: 0x71031b89  pcpyld      $v1, $t0, $v1
    ctx->pc = 0x32d9fcu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 3)));
label_32da00:
    // 0x32da00: 0x8f85be20  lw          $a1, -0x41E0($gp)
    ctx->pc = 0x32da00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_32da04:
    // 0x32da04: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x32da04u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
label_32da08:
    // 0x32da08: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x32da08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_32da0c:
    // 0x32da0c: 0xaf85be20  sw          $a1, -0x41E0($gp)
    ctx->pc = 0x32da0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 5));
label_32da10:
    // 0x32da10: 0x3c036c0a  lui         $v1, 0x6C0A
    ctx->pc = 0x32da10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27658 << 16));
label_32da14:
    // 0x32da14: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x32da14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_32da18:
    // 0x32da18: 0x346303bc  ori         $v1, $v1, 0x3BC
    ctx->pc = 0x32da18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)956);
label_32da1c:
    // 0x32da1c: 0x34840101  ori         $a0, $a0, 0x101
    ctx->pc = 0x32da1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)257);
label_32da20:
    // 0x32da20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32da20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32da24:
    // 0x32da24: 0x70641cc8  ppacw       $v1, $v1, $a0
    ctx->pc = 0x32da24u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_32da28:
    // 0x32da28: 0x704214c8  ppacw       $v0, $v0, $v0
    ctx->pc = 0x32da28u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
label_32da2c:
    // 0x32da2c: 0x70621cc8  ppacw       $v1, $v1, $v0
    ctx->pc = 0x32da2cu;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_32da30:
    // 0x32da30: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x32da30u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
label_32da34:
    // 0x32da34: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x32da34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_32da38:
    // 0x32da38: 0x9f82a6ac  lwu         $v0, -0x5954($gp)
    ctx->pc = 0x32da38u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294944428)));
label_32da3c:
    // 0x32da3c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x32da3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_32da40:
    // 0x32da40: 0x9f83a6a8  lwu         $v1, -0x5958($gp)
    ctx->pc = 0x32da40u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294944424)));
label_32da44:
    // 0x32da44: 0x4483e  dsrl32      $t1, $a0, 0
    ctx->pc = 0x32da44u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) >> (32 + 0));
label_32da48:
    // 0x32da48: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x32da48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_32da4c:
    // 0x32da4c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32da4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_32da50:
    // 0x32da50: 0x70491389  pcpyld      $v0, $v0, $t1
    ctx->pc = 0x32da50u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
label_32da54:
    // 0x32da54: 0x7ca20010  sq          $v0, 0x10($a1)
    ctx->pc = 0x32da54u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
label_32da58:
    // 0x32da58: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x32da58u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
label_32da5c:
    // 0x32da5c: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x32da5cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
label_32da60:
    // 0x32da60: 0x35298002  ori         $t1, $t1, 0x8002
    ctx->pc = 0x32da60u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32770);
label_32da64:
    // 0x32da64: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x32da64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_32da68:
    // 0x32da68: 0x70c91389  pcpyld      $v0, $a2, $t1
    ctx->pc = 0x32da68u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 9)));
label_32da6c:
    // 0x32da6c: 0x7ca20020  sq          $v0, 0x20($a1)
    ctx->pc = 0x32da6cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 2));
label_32da70:
    // 0x32da70: 0x24070042  addiu       $a3, $zero, 0x42
    ctx->pc = 0x32da70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_32da74:
    // 0x32da74: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32da74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_32da78:
    // 0x32da78: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x32da78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_32da7c:
    // 0x32da7c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x32da7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_32da80:
    // 0x32da80: 0x70e21389  pcpyld      $v0, $a3, $v0
    ctx->pc = 0x32da80u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 2)));
label_32da84:
    // 0x32da84: 0x7ca20030  sq          $v0, 0x30($a1)
    ctx->pc = 0x32da84u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 2));
label_32da88:
    // 0x32da88: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x32da88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_32da8c:
    // 0x32da8c: 0xdf83ae48  ld          $v1, -0x51B8($gp)
    ctx->pc = 0x32da8cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
label_32da90:
    // 0x32da90: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x32da90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
label_32da94:
    // 0x32da94: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x32da94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_32da98:
    // 0x32da98: 0x70831389  pcpyld      $v0, $a0, $v1
    ctx->pc = 0x32da98u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
label_32da9c:
    // 0x32da9c: 0x7ca20040  sq          $v0, 0x40($a1)
    ctx->pc = 0x32da9cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 64), GPR_VEC(ctx, 2));
label_32daa0:
    // 0x32daa0: 0x70c91389  pcpyld      $v0, $a2, $t1
    ctx->pc = 0x32daa0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 9)));
label_32daa4:
    // 0x32daa4: 0x7ca20050  sq          $v0, 0x50($a1)
    ctx->pc = 0x32daa4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 80), GPR_VEC(ctx, 2));
label_32daa8:
    // 0x32daa8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32daa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_32daac:
    // 0x32daac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x32daacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_32dab0:
    // 0x32dab0: 0x34420048  ori         $v0, $v0, 0x48
    ctx->pc = 0x32dab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)72);
label_32dab4:
    // 0x32dab4: 0x70e21389  pcpyld      $v0, $a3, $v0
    ctx->pc = 0x32dab4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 2)));
label_32dab8:
    // 0x32dab8: 0x7ca20060  sq          $v0, 0x60($a1)
    ctx->pc = 0x32dab8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 96), GPR_VEC(ctx, 2));
label_32dabc:
    // 0x32dabc: 0x70831389  pcpyld      $v0, $a0, $v1
    ctx->pc = 0x32dabcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
label_32dac0:
    // 0x32dac0: 0x7ca20070  sq          $v0, 0x70($a1)
    ctx->pc = 0x32dac0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 112), GPR_VEC(ctx, 2));
label_32dac4:
    // 0x32dac4: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x32dac4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_32dac8:
    // 0x32dac8: 0x7ca20080  sq          $v0, 0x80($a1)
    ctx->pc = 0x32dac8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 128), GPR_VEC(ctx, 2));
label_32dacc:
    // 0x32dacc: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x32daccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_32dad0:
    // 0x32dad0: 0x7ca20090  sq          $v0, 0x90($a1)
    ctx->pc = 0x32dad0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 144), GPR_VEC(ctx, 2));
label_32dad4:
    // 0x32dad4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x32dad4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_32dad8:
    // 0x32dad8: 0x7ca200a0  sq          $v0, 0xA0($a1)
    ctx->pc = 0x32dad8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 160), GPR_VEC(ctx, 2));
label_32dadc:
    // 0x32dadc: 0x24a200b0  addiu       $v0, $a1, 0xB0
    ctx->pc = 0x32dadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 176));
label_32dae0:
    // 0x32dae0: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x32dae0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_32dae4:
    // 0x32dae4: 0x3c046c01  lui         $a0, 0x6C01
    ctx->pc = 0x32dae4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27649 << 16));
label_32dae8:
    // 0x32dae8: 0x348403fa  ori         $a0, $a0, 0x3FA
    ctx->pc = 0x32dae8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1018);
label_32daec:
    // 0x32daec: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x32daecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_32daf0:
    // 0x32daf0: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x32daf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
label_32daf4:
    // 0x32daf4: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x32daf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_32daf8:
    // 0x32daf8: 0x34840404  ori         $a0, $a0, 0x404
    ctx->pc = 0x32daf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1028);
label_32dafc:
    // 0x32dafc: 0x70882389  pcpyld      $a0, $a0, $t0
    ctx->pc = 0x32dafcu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 8)));
label_32db00:
    // 0x32db00: 0x7ca400b0  sq          $a0, 0xB0($a1)
    ctx->pc = 0x32db00u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 176), GPR_VEC(ctx, 4));
label_32db04:
    // 0x32db04: 0x24a500c0  addiu       $a1, $a1, 0xC0
    ctx->pc = 0x32db04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
label_32db08:
    // 0x32db08: 0xaf85be20  sw          $a1, -0x41E0($gp)
    ctx->pc = 0x32db08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 5));
label_32db0c:
    // 0x32db0c: 0x92420047  lbu         $v0, 0x47($s2)
    ctx->pc = 0x32db0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 71)));
label_32db10:
    // 0x32db10: 0x8f83bec4  lw          $v1, -0x413C($gp)
    ctx->pc = 0x32db10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950596)));
label_32db14:
    // 0x32db14: 0x384200ff  xori        $v0, $v0, 0xFF
    ctx->pc = 0x32db14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)255);
label_32db18:
    // 0x32db18: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x32db18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_32db1c:
    // 0x32db1c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x32db1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_32db20:
    // 0x32db20: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_32db24:
    if (ctx->pc == 0x32DB24u) {
        ctx->pc = 0x32DB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DB20u;
        // 0x32db24: 0xaf82bec8  sw          $v0, -0x4138($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950600), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32DB28u;
        goto label_32db28;
    }
    ctx->pc = 0x32DB20u;
    {
        const bool branch_taken_0x32db20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32DB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DB20u;
        // 0x32db24: 0xaf82bec8  sw          $v0, -0x4138($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950600), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32db20) {
            ctx->pc = 0x32DB38u;
            goto label_32db38;
        }
    }
    ctx->pc = 0x32DB28u;
label_32db28:
    // 0x32db28: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x32db28u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
label_32db2c:
    // 0x32db2c: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x32db2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_32db30:
    // 0x32db30: 0x10000004  b           . + 4 + (0x4 << 2)
label_32db34:
    if (ctx->pc == 0x32DB34u) {
        ctx->pc = 0x32DB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DB30u;
        // 0x32db34: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32DB38u;
        goto label_32db38;
    }
    ctx->pc = 0x32DB30u;
    {
        const bool branch_taken_0x32db30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32DB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DB30u;
        // 0x32db34: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32db30) {
            ctx->pc = 0x32DB44u;
            goto label_32db44;
        }
    }
    ctx->pc = 0x32DB38u;
label_32db38:
    // 0x32db38: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x32db38u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
label_32db3c:
    // 0x32db3c: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x32db3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
label_32db40:
    // 0x32db40: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x32db40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_32db44:
    // 0x32db44: 0xff82ae80  sd          $v0, -0x5180($gp)
    ctx->pc = 0x32db44u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946432), GPR_U64(ctx, 2));
label_32db48:
    // 0x32db48: 0x92460029  lbu         $a2, 0x29($s2)
    ctx->pc = 0x32db48u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 41)));
label_32db4c:
    // 0x32db4c: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x32db4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_32db50:
    // 0x32db50: 0x8f82ae80  lw          $v0, -0x5180($gp)
    ctx->pc = 0x32db50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946432)));
label_32db54:
    // 0x32db54: 0x3c07fc00  lui         $a3, 0xFC00
    ctx->pc = 0x32db54u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64512 << 16));
label_32db58:
    // 0x32db58: 0x34e77fff  ori         $a3, $a3, 0x7FFF
    ctx->pc = 0x32db58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32767);
label_32db5c:
    // 0x32db5c: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x32db5cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
label_32db60:
    // 0x32db60: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x32db60u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_32db64:
    // 0x32db64: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x32db64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
label_32db68:
    // 0x32db68: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x32db68u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_32db6c:
    // 0x32db6c: 0xdc64d5d0  ld          $a0, -0x2A30($v1)
    ctx->pc = 0x32db6cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 4294956496)));
label_32db70:
    // 0x32db70: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x32db70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_32db74:
    // 0x32db74: 0x2463d5d0  addiu       $v1, $v1, -0x2A30
    ctx->pc = 0x32db74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956496));
label_32db78:
    // 0x32db78: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x32db78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
label_32db7c:
    // 0x32db7c: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x32db7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
label_32db80:
    // 0x32db80: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x32db80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
label_32db84:
    // 0x32db84: 0xdc650008  ld          $a1, 0x8($v1)
    ctx->pc = 0x32db84u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 8)));
label_32db88:
    // 0x32db88: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x32db88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_32db8c:
    // 0x32db8c: 0x70a42389  pcpyld      $a0, $a1, $a0
    ctx->pc = 0x32db8cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_32db90:
    // 0x32db90: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x32db90u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_32db94:
    // 0x32db94: 0x8f86be20  lw          $a2, -0x41E0($gp)
    ctx->pc = 0x32db94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_32db98:
    // 0x32db98: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x32db98u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
label_32db9c:
    // 0x32db9c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x32db9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_32dba0:
    // 0x32dba0: 0xaf86be20  sw          $a2, -0x41E0($gp)
    ctx->pc = 0x32dba0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 6));
label_32dba4:
    // 0x32dba4: 0x3c026c01  lui         $v0, 0x6C01
    ctx->pc = 0x32dba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27649 << 16));
label_32dba8:
    // 0x32dba8: 0x344203fb  ori         $v0, $v0, 0x3FB
    ctx->pc = 0x32dba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1019);
label_32dbac:
    // 0x32dbac: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x32dbacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_32dbb0:
    // 0x32dbb0: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x32dbb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_32dbb4:
    // 0x32dbb4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x32dbb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_32dbb8:
    // 0x32dbb8: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x32dbb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
label_32dbbc:
    // 0x32dbbc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32dbbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32dbc0:
    // 0x32dbc0: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x32dbc0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
label_32dbc4:
    // 0x32dbc4: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x32dbc4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_32dbc8:
    // 0x32dbc8: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x32dbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_32dbcc:
    // 0x32dbcc: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x32dbccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_32dbd0:
    // 0x32dbd0: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x32dbd0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
label_32dbd4:
    // 0x32dbd4: 0xc7858054  lwc1        $f5, -0x7FAC($gp)
    ctx->pc = 0x32dbd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_32dbd8:
    // 0x32dbd8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x32dbd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_32dbdc:
    // 0x32dbdc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_32dbe0:
    if (ctx->pc == 0x32DBE0u) {
        ctx->pc = 0x32DBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DBDCu;
        // 0x32dbe0: 0x92420044  lbu         $v0, 0x44($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32DBE4u;
        goto label_32dbe4;
    }
    ctx->pc = 0x32DBDCu;
    {
        const bool branch_taken_0x32dbdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32DBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DBDCu;
        // 0x32dbe0: 0x92420044  lbu         $v0, 0x44($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32dbdc) {
            ctx->pc = 0x32DBE8u;
            goto label_32dbe8;
        }
    }
    ctx->pc = 0x32DBE4u;
label_32dbe4:
    // 0x32dbe4: 0xc7858434  lwc1        $f5, -0x7BCC($gp)
    ctx->pc = 0x32dbe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_32dbe8:
    // 0x32dbe8: 0x92430045  lbu         $v1, 0x45($s2)
    ctx->pc = 0x32dbe8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 69)));
label_32dbec:
    // 0x32dbec: 0x92440046  lbu         $a0, 0x46($s2)
    ctx->pc = 0x32dbecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 70)));
label_32dbf0:
    // 0x32dbf0: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x32dbf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_32dbf4:
    // 0x32dbf4: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x32dbf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_32dbf8:
    // 0x32dbf8: 0x92450047  lbu         $a1, 0x47($s2)
    ctx->pc = 0x32dbf8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 71)));
label_32dbfc:
    // 0x32dbfc: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x32dbfcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_32dc00:
    // 0x32dc00: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x32dc00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_32dc04:
    // 0x32dc04: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x32dc04u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_32dc08:
    // 0x32dc08: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x32dc08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_32dc0c:
    // 0x32dc0c: 0xc7818434  lwc1        $f1, -0x7BCC($gp)
    ctx->pc = 0x32dc0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_32dc10:
    // 0x32dc10: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x32dc10u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32dc14:
    // 0x32dc14: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32dc14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_32dc18:
    // 0x32dc18: 0x46010182  mul.s       $f6, $f0, $f1
    ctx->pc = 0x32dc18u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_32dc1c:
    // 0x32dc1c: 0x460519c2  mul.s       $f7, $f3, $f5
    ctx->pc = 0x32dc1cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
label_32dc20:
    // 0x32dc20: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x32dc20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_32dc24:
    // 0x32dc24: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x32dc24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_32dc28:
    // 0x32dc28: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x32dc28u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
label_32dc2c:
    // 0x32dc2c: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x32dc2cu;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
label_32dc30:
    // 0x32dc30: 0x46051182  mul.s       $f6, $f2, $f5
    ctx->pc = 0x32dc30u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_32dc34:
    // 0x32dc34: 0x460521c2  mul.s       $f7, $f4, $f5
    ctx->pc = 0x32dc34u;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
label_32dc38:
    // 0x32dc38: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x32dc38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_32dc3c:
    // 0x32dc3c: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x32dc3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_32dc40:
    // 0x32dc40: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x32dc40u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_32dc44:
    // 0x32dc44: 0x7cc20010  sq          $v0, 0x10($a2)
    ctx->pc = 0x32dc44u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
label_32dc48:
    // 0x32dc48: 0x24c30020  addiu       $v1, $a2, 0x20
    ctx->pc = 0x32dc48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
label_32dc4c:
    // 0x32dc4c: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x32dc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_32dc50:
    // 0x32dc50: 0x3c026c01  lui         $v0, 0x6C01
    ctx->pc = 0x32dc50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27649 << 16));
label_32dc54:
    // 0x32dc54: 0x344203fc  ori         $v0, $v0, 0x3FC
    ctx->pc = 0x32dc54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1020);
label_32dc58:
    // 0x32dc58: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x32dc58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_32dc5c:
    // 0x32dc5c: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x32dc5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_32dc60:
    // 0x32dc60: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x32dc60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_32dc64:
    // 0x32dc64: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x32dc64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
label_32dc68:
    // 0x32dc68: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x32dc68u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
label_32dc6c:
    // 0x32dc6c: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x32dc6cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 2));
label_32dc70:
    // 0x32dc70: 0x24c30030  addiu       $v1, $a2, 0x30
    ctx->pc = 0x32dc70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
label_32dc74:
    // 0x32dc74: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x32dc74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_32dc78:
    // 0x32dc78: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x32dc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_32dc7c:
    // 0x32dc7c: 0xc7848240  lwc1        $f4, -0x7DC0($gp)
    ctx->pc = 0x32dc7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_32dc80:
    // 0x32dc80: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x32dc80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_32dc84:
    // 0x32dc84: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x32dc84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_32dc88:
    // 0x32dc88: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x32dc88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_32dc8c:
    // 0x32dc8c: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x32dc8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32dc90:
    // 0x32dc90: 0x46040942  mul.s       $f5, $f1, $f4
    ctx->pc = 0x32dc90u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_32dc94:
    // 0x32dc94: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x32dc94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_32dc98:
    // 0x32dc98: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x32dc98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_32dc9c:
    // 0x32dc9c: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x32dc9cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
label_32dca0:
    // 0x32dca0: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x32dca0u;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
label_32dca4:
    // 0x32dca4: 0x46041982  mul.s       $f6, $f3, $f4
    ctx->pc = 0x32dca4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_32dca8:
    // 0x32dca8: 0x46041142  mul.s       $f5, $f2, $f4
    ctx->pc = 0x32dca8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_32dcac:
    // 0x32dcac: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x32dcacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_32dcb0:
    // 0x32dcb0: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x32dcb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_32dcb4:
    // 0x32dcb4: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x32dcb4u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_32dcb8:
    // 0x32dcb8: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x32dcb8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
label_32dcbc:
    // 0x32dcbc: 0x24c30040  addiu       $v1, $a2, 0x40
    ctx->pc = 0x32dcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
label_32dcc0:
    // 0x32dcc0: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x32dcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_32dcc4:
    // 0x32dcc4: 0x92420028  lbu         $v0, 0x28($s2)
    ctx->pc = 0x32dcc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 40)));
label_32dcc8:
    // 0x32dcc8: 0x3c046c03  lui         $a0, 0x6C03
    ctx->pc = 0x32dcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27651 << 16));
label_32dccc:
    // 0x32dccc: 0x348403fd  ori         $a0, $a0, 0x3FD
    ctx->pc = 0x32dcccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1021);
label_32dcd0:
    // 0x32dcd0: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x32dcd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_32dcd4:
    // 0x32dcd4: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x32dcd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
label_32dcd8:
    // 0x32dcd8: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x32dcd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_32dcdc:
    // 0x32dcdc: 0x34840404  ori         $a0, $a0, 0x404
    ctx->pc = 0x32dcdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1028);
label_32dce0:
    // 0x32dce0: 0x70871b89  pcpyld      $v1, $a0, $a3
    ctx->pc = 0x32dce0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
label_32dce4:
    // 0x32dce4: 0x30470007  andi        $a3, $v0, 0x7
    ctx->pc = 0x32dce4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_32dce8:
    // 0x32dce8: 0x7cc30040  sq          $v1, 0x40($a2)
    ctx->pc = 0x32dce8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), GPR_VEC(ctx, 3));
label_32dcec:
    // 0x32dcec: 0x24c20050  addiu       $v0, $a2, 0x50
    ctx->pc = 0x32dcecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
label_32dcf0:
    // 0x32dcf0: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x32dcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_32dcf4:
    // 0x32dcf4: 0x8f83aee0  lw          $v1, -0x5120($gp)
    ctx->pc = 0x32dcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946528)));
label_32dcf8:
    // 0x32dcf8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_32dcfc:
    if (ctx->pc == 0x32DCFCu) {
        ctx->pc = 0x32DCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DCF8u;
        // 0x32dcfc: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32DD00u;
        goto label_32dd00;
    }
    ctx->pc = 0x32DCF8u;
    {
        const bool branch_taken_0x32dcf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32DCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DCF8u;
        // 0x32dcfc: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32dcf8) {
            ctx->pc = 0x32DD08u;
            goto label_32dd08;
        }
    }
    ctx->pc = 0x32DD00u;
label_32dd00:
    // 0x32dd00: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_32dd04:
    if (ctx->pc == 0x32DD04u) {
        ctx->pc = 0x32DD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DD00u;
        // 0x32dd04: 0x34e70008  ori         $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32DD08u;
        goto label_32dd08;
    }
    ctx->pc = 0x32DD00u;
    {
        const bool branch_taken_0x32dd00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32dd00) {
            ctx->pc = 0x32DD04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32DD00u;
            // 0x32dd04: 0x34e70008  ori         $a3, $a3, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x32DD20u;
            goto label_32dd20;
        }
    }
    ctx->pc = 0x32DD08u;
label_32dd08:
    // 0x32dd08: 0x8f82aee4  lw          $v0, -0x511C($gp)
    ctx->pc = 0x32dd08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946532)));
label_32dd0c:
    // 0x32dd0c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_32dd10:
    if (ctx->pc == 0x32DD10u) {
        ctx->pc = 0x32DD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DD0Cu;
        // 0x32dd10: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32DD14u;
        goto label_32dd14;
    }
    ctx->pc = 0x32DD0Cu;
    {
        const bool branch_taken_0x32dd0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32DD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DD0Cu;
        // 0x32dd10: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32dd0c) {
            ctx->pc = 0x32DD48u;
            goto label_32dd48;
        }
    }
    ctx->pc = 0x32DD14u;
label_32dd14:
    // 0x32dd14: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_32dd18:
    if (ctx->pc == 0x32DD18u) {
        ctx->pc = 0x32DD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DD14u;
        // 0x32dd18: 0x3c03005e  lui         $v1, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32DD1Cu;
        goto label_32dd1c;
    }
    ctx->pc = 0x32DD14u;
    {
        const bool branch_taken_0x32dd14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32dd14) {
            ctx->pc = 0x32DD18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32DD14u;
            // 0x32dd18: 0x3c03005e  lui         $v1, 0x5E (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32DD50u;
            goto label_32dd50;
        }
    }
    ctx->pc = 0x32DD1Cu;
label_32dd1c:
    // 0x32dd1c: 0x34e70008  ori         $a3, $a3, 0x8
    ctx->pc = 0x32dd1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
label_32dd20:
    // 0x32dd20: 0x8f84be20  lw          $a0, -0x41E0($gp)
    ctx->pc = 0x32dd20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_32dd24:
    // 0x32dd24: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x32dd24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_32dd28:
    // 0x32dd28: 0x2463d670  addiu       $v1, $v1, -0x2990
    ctx->pc = 0x32dd28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956656));
label_32dd2c:
    // 0x32dd2c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x32dd2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_32dd30:
    // 0x32dd30: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x32dd30u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_32dd34:
    // 0x32dd34: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x32dd34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_32dd38:
    // 0x32dd38: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x32dd38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
label_32dd3c:
    // 0x32dd3c: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x32dd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_32dd40:
    // 0x32dd40: 0x1000000b  b           . + 4 + (0xB << 2)
label_32dd44:
    if (ctx->pc == 0x32DD44u) {
        ctx->pc = 0x32DD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DD40u;
        // 0x32dd44: 0x2463d680  addiu       $v1, $v1, -0x2980 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32DD48u;
        goto label_32dd48;
    }
    ctx->pc = 0x32DD40u;
    {
        const bool branch_taken_0x32dd40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32DD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DD40u;
        // 0x32dd44: 0x2463d680  addiu       $v1, $v1, -0x2980 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32dd40) {
            ctx->pc = 0x32DD70u;
            goto label_32dd70;
        }
    }
    ctx->pc = 0x32DD48u;
label_32dd48:
    // 0x32dd48: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x32dd48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_32dd4c:
    // 0x32dd4c: 0x0  nop
    ctx->pc = 0x32dd4cu;
    // NOP
label_32dd50:
    // 0x32dd50: 0x8f84be20  lw          $a0, -0x41E0($gp)
    ctx->pc = 0x32dd50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_32dd54:
    // 0x32dd54: 0x2463d650  addiu       $v1, $v1, -0x29B0
    ctx->pc = 0x32dd54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956624));
label_32dd58:
    // 0x32dd58: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x32dd58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_32dd5c:
    // 0x32dd5c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x32dd5cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_32dd60:
    // 0x32dd60: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x32dd60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_32dd64:
    // 0x32dd64: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x32dd64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
label_32dd68:
    // 0x32dd68: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x32dd68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_32dd6c:
    // 0x32dd6c: 0x2463d660  addiu       $v1, $v1, -0x29A0
    ctx->pc = 0x32dd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956640));
label_32dd70:
    // 0x32dd70: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x32dd70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_32dd74:
    // 0x32dd74: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x32dd74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_32dd78:
    // 0x32dd78: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x32dd78u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_32dd7c:
    // 0x32dd7c: 0xaf85be20  sw          $a1, -0x41E0($gp)
    ctx->pc = 0x32dd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 5));
label_32dd80:
    // 0x32dd80: 0x8f83becc  lw          $v1, -0x4134($gp)
    ctx->pc = 0x32dd80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950604)));
label_32dd84:
    // 0x32dd84: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x32dd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_32dd88:
    // 0x32dd88: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_32dd8c:
    if (ctx->pc == 0x32DD8Cu) {
        ctx->pc = 0x32DD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DD88u;
        // 0x32dd8c: 0xaf80aed8  sw          $zero, -0x5128($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946520), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32DD90u;
        goto label_32dd90;
    }
    ctx->pc = 0x32DD88u;
    {
        const bool branch_taken_0x32dd88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x32DD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DD88u;
        // 0x32dd8c: 0xaf80aed8  sw          $zero, -0x5128($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946520), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32dd88) {
            ctx->pc = 0x32DD98u;
            goto label_32dd98;
        }
    }
    ctx->pc = 0x32DD90u;
label_32dd90:
    // 0x32dd90: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x32dd90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_32dd94:
    // 0x32dd94: 0xaf82aed8  sw          $v0, -0x5128($gp)
    ctx->pc = 0x32dd94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946520), GPR_U32(ctx, 2));
label_32dd98:
    // 0x32dd98: 0x9f82aedc  lwu         $v0, -0x5124($gp)
    ctx->pc = 0x32dd98u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294946524)));
label_32dd9c:
    // 0x32dd9c: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x32dd9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
label_32dda0:
    // 0x32dda0: 0x9f84aed8  lwu         $a0, -0x5128($gp)
    ctx->pc = 0x32dda0u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294946520)));
label_32dda4:
    // 0x32dda4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x32dda4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_32dda8:
    // 0x32dda8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x32dda8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_32ddac:
    // 0x32ddac: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x32ddacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_32ddb0:
    // 0x32ddb0: 0x70831b89  pcpyld      $v1, $a0, $v1
    ctx->pc = 0x32ddb0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
label_32ddb4:
    // 0x32ddb4: 0x8f84be20  lw          $a0, -0x41E0($gp)
    ctx->pc = 0x32ddb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_32ddb8:
    // 0x32ddb8: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x32ddb8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_32ddbc:
    // 0x32ddbc: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x32ddbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_32ddc0:
    // 0x32ddc0: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x32ddc0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
label_32ddc4:
    // 0x32ddc4: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x32ddc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_32ddc8:
    // 0x32ddc8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_32ddcc:
    if (ctx->pc == 0x32DDCCu) {
        ctx->pc = 0x32DDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DDC8u;
        // 0x32ddcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32DDD0u;
        goto label_32ddd0;
    }
    ctx->pc = 0x32DDC8u;
    {
        const bool branch_taken_0x32ddc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32DDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DDC8u;
        // 0x32ddcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ddc8) {
            ctx->pc = 0x32DE48u;
            goto label_32de48;
        }
    }
    ctx->pc = 0x32DDD0u;
label_32ddd0:
    // 0x32ddd0: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x32ddd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
label_32ddd4:
    // 0x32ddd4: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x32ddd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_32ddd8:
    // 0x32ddd8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x32ddd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_32dddc:
    // 0x32dddc: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x32dddcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_32dde0:
    // 0x32dde0: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x32dde0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_32dde4:
    // 0x32dde4: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x32dde4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_32dde8:
    // 0x32dde8: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x32dde8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_32ddec:
    // 0x32ddec: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x32ddecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_32ddf0:
    // 0x32ddf0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x32ddf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_32ddf4:
    // 0x32ddf4: 0x34428003  ori         $v0, $v0, 0x8003
    ctx->pc = 0x32ddf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32771);
label_32ddf8:
    // 0x32ddf8: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x32ddf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_32ddfc:
    // 0x32ddfc: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x32ddfcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_32de00:
    // 0x32de00: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x32de00u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
label_32de04:
    // 0x32de04: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x32de04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_32de08:
    // 0x32de08: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x32de08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_32de0c:
    // 0x32de0c: 0xdf82ae48  ld          $v0, -0x51B8($gp)
    ctx->pc = 0x32de0cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
label_32de10:
    // 0x32de10: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x32de10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_32de14:
    // 0x32de14: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x32de14u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_32de18:
    // 0x32de18: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x32de18u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
label_32de1c:
    // 0x32de1c: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x32de1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_32de20:
    // 0x32de20: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x32de20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_32de24:
    // 0x32de24: 0xdf82ae68  ld          $v0, -0x5198($gp)
    ctx->pc = 0x32de24u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946408)));
label_32de28:
    // 0x32de28: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x32de28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_32de2c:
    // 0x32de2c: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x32de2cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_32de30:
    // 0x32de30: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x32de30u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
label_32de34:
    // 0x32de34: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x32de34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_32de38:
    // 0x32de38: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x32de38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_32de3c:
    // 0x32de3c: 0xdf82ae60  ld          $v0, -0x51A0($gp)
    ctx->pc = 0x32de3cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946400)));
label_32de40:
    // 0x32de40: 0x1000001b  b           . + 4 + (0x1B << 2)
label_32de44:
    if (ctx->pc == 0x32DE44u) {
        ctx->pc = 0x32DE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DE40u;
        // 0x32de44: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32DE48u;
        goto label_32de48;
    }
    ctx->pc = 0x32DE40u;
    {
        const bool branch_taken_0x32de40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32DE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DE40u;
        // 0x32de44: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32de40) {
            ctx->pc = 0x32DEB0u;
            goto label_32deb0;
        }
    }
    ctx->pc = 0x32DE48u;
label_32de48:
    // 0x32de48: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x32de48u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_32de4c:
    // 0x32de4c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x32de4cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_32de50:
    // 0x32de50: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x32de50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_32de54:
    // 0x32de54: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x32de54u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_32de58:
    // 0x32de58: 0x70001ca9  por         $v1, $zero, $zero
    ctx->pc = 0x32de58u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_32de5c:
    // 0x32de5c: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x32de5cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
label_32de60:
    // 0x32de60: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x32de60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_32de64:
    // 0x32de64: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x32de64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_32de68:
    // 0x32de68: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x32de68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
label_32de6c:
    // 0x32de6c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x32de6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_32de70:
    // 0x32de70: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x32de70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_32de74:
    // 0x32de74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32de74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32de78:
    // 0x32de78: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x32de78u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_32de7c:
    // 0x32de7c: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x32de7cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
label_32de80:
    // 0x32de80: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x32de80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_32de84:
    // 0x32de84: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x32de84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_32de88:
    // 0x32de88: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x32de88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_32de8c:
    // 0x32de8c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x32de8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_32de90:
    // 0x32de90: 0x34428001  ori         $v0, $v0, 0x8001
    ctx->pc = 0x32de90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
label_32de94:
    // 0x32de94: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x32de94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_32de98:
    // 0x32de98: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x32de98u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_32de9c:
    // 0x32de9c: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x32de9cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
label_32dea0:
    // 0x32dea0: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x32dea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_32dea4:
    // 0x32dea4: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x32dea4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_32dea8:
    // 0x32dea8: 0xdf82ae48  ld          $v0, -0x51B8($gp)
    ctx->pc = 0x32dea8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
label_32deac:
    // 0x32deac: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x32deacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_32deb0:
    // 0x32deb0: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x32deb0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_32deb4:
    // 0x32deb4: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x32deb4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
label_32deb8:
    // 0x32deb8: 0x24820050  addiu       $v0, $a0, 0x50
    ctx->pc = 0x32deb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
label_32debc:
    // 0x32debc: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x32debcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_32dec0:
    // 0x32dec0: 0x92430028  lbu         $v1, 0x28($s2)
    ctx->pc = 0x32dec0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 40)));
label_32dec4:
    // 0x32dec4: 0x30640010  andi        $a0, $v1, 0x10
    ctx->pc = 0x32dec4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_32dec8:
    // 0x32dec8: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x32dec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_32decc:
    // 0x32decc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x32deccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_32ded0:
    // 0x32ded0: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x32ded0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_32ded4:
    // 0x32ded4: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x32ded4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_32ded8:
    // 0x32ded8: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x32ded8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
label_32dedc:
    // 0x32dedc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32dedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_32dee0:
    // 0x32dee0: 0xa242002b  sb          $v0, 0x2B($s2)
    ctx->pc = 0x32dee0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 43), (uint8_t)GPR_U32(ctx, 2));
label_32dee4:
    // 0x32dee4: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x32dee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_32dee8:
    // 0x32dee8: 0x8f85aed4  lw          $a1, -0x512C($gp)
    ctx->pc = 0x32dee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946516)));
label_32deec:
    // 0x32deec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x32deecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_32def0:
    // 0x32def0: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x32def0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_32def4:
    // 0x32def4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x32def4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_32def8:
    // 0x32def8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32def8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_32defc:
    // 0x32defc: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x32defcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32df00:
    // 0x32df00: 0x10a6000b  beq         $a1, $a2, . + 4 + (0xB << 2)
label_32df04:
    if (ctx->pc == 0x32DF04u) {
        ctx->pc = 0x32DF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DF00u;
        // 0x32df04: 0x6203c  dsll32      $a0, $a2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32DF08u;
        goto label_32df08;
    }
    ctx->pc = 0x32DF00u;
    {
        const bool branch_taken_0x32df00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x32DF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DF00u;
        // 0x32df04: 0x6203c  dsll32      $a0, $a2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32df00) {
            ctx->pc = 0x32DF30u;
            goto label_32df30;
        }
    }
    ctx->pc = 0x32DF08u;
label_32df08:
    // 0x32df08: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x32df08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
label_32df0c:
    // 0x32df0c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x32df0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_32df10:
    // 0x32df10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32df10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32df14:
    // 0x32df14: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x32df14u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
label_32df18:
    // 0x32df18: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x32df18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_32df1c:
    // 0x32df1c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x32df1cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_32df20:
    // 0x32df20: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x32df20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_32df24:
    // 0x32df24: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x32df24u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_32df28:
    // 0x32df28: 0xaf86aed4  sw          $a2, -0x512C($gp)
    ctx->pc = 0x32df28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946516), GPR_U32(ctx, 6));
label_32df2c:
    // 0x32df2c: 0x0  nop
    ctx->pc = 0x32df2cu;
    // NOP
label_32df30:
    // 0x32df30: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x32df30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_32df34:
    // 0x32df34: 0x3c070200  lui         $a3, 0x200
    ctx->pc = 0x32df34u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)512 << 16));
label_32df38:
    // 0x32df38: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x32df38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_32df3c:
    // 0x32df3c: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x32df3cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
label_32df40:
    // 0x32df40: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x32df40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32df44:
    // 0x32df44: 0x3c060300  lui         $a2, 0x300
    ctx->pc = 0x32df44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)768 << 16));
label_32df48:
    // 0x32df48: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x32df48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_32df4c:
    // 0x32df4c: 0x24a90018  addiu       $t1, $a1, 0x18
    ctx->pc = 0x32df4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
label_32df50:
    // 0x32df50: 0x9d240008  lwu         $a0, 0x8($t1)
    ctx->pc = 0x32df50u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 9), 8)));
label_32df54:
    // 0x32df54: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x32df54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_32df58:
    // 0x32df58: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x32df58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_32df5c:
    // 0x32df5c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x32df5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_32df60:
    // 0x32df60: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x32df60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_32df64:
    // 0x32df64: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x32df64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
label_32df68:
    // 0x32df68: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x32df68u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
label_32df6c:
    // 0x32df6c: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x32df6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_32df70:
    // 0x32df70: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x32df70u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_32df74:
    // 0x32df74: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x32df74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_32df78:
    // 0x32df78: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x32df78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_32df7c:
    // 0x32df7c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x32df7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_32df80:
    // 0x32df80: 0x42000039  di
    ctx->pc = 0x32df80u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
label_32df84:
    // 0x32df84: 0x40f  sync.p
    ctx->pc = 0x32df84u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_32df88:
    // 0x32df88: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x32df88u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
label_32df8c:
    // 0x32df8c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x32df8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_32df90:
    // 0x32df90: 0x0  nop
    ctx->pc = 0x32df90u;
    // NOP
label_32df94:
    // 0x32df94: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_32df98:
    if (ctx->pc == 0x32DF98u) {
        ctx->pc = 0x32DF9Cu;
        goto label_32df9c;
    }
    ctx->pc = 0x32DF94u;
    {
        const bool branch_taken_0x32df94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32df94) {
            ctx->pc = 0x32DF80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32df80;
        }
    }
    ctx->pc = 0x32DF9Cu;
label_32df9c:
    // 0x32df9c: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x32df9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_32dfa0:
    // 0x32dfa0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32dfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_32dfa4:
    // 0x32dfa4: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x32dfa4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
label_32dfa8:
    // 0x32dfa8: 0x42000038  ei
    ctx->pc = 0x32dfa8u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_32dfac:
    // 0x32dfac: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x32dfacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_32dfb0:
    // 0x32dfb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32dfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32dfb4:
    // 0x32dfb4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32dfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_32dfb8:
    // 0x32dfb8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_32dfbc:
    if (ctx->pc == 0x32DFBCu) {
        ctx->pc = 0x32DFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DFB8u;
        // 0x32dfbc: 0xad220004  sw          $v0, 0x4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32DFC0u;
        goto label_32dfc0;
    }
    ctx->pc = 0x32DFB8u;
    {
        const bool branch_taken_0x32dfb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x32DFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DFB8u;
        // 0x32dfbc: 0xad220004  sw          $v0, 0x4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32dfb8) {
            ctx->pc = 0x32DFC8u;
            goto label_32dfc8;
        }
    }
    ctx->pc = 0x32DFC0u;
label_32dfc0:
    // 0x32dfc0: 0xc10a762  jal         func_429D88
label_32dfc4:
    if (ctx->pc == 0x32DFC4u) {
        ctx->pc = 0x32DFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DFC0u;
        // 0x32dfc4: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32DFC8u;
        goto label_32dfc8;
    }
    ctx->pc = 0x32DFC0u;
    SET_GPR_U32(ctx, 31, 0x32DFC8u);
    ctx->pc = 0x32DFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DFC0u;
    // 0x32dfc4: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x429D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x429D88u, 0x32DFC0u, 0x32DFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DFC8u;
label_32dfc8:
    // 0x32dfc8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x32dfc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32dfcc:
    // 0x32dfcc: 0xc10a322  jal         func_428C88
label_32dfd0:
    if (ctx->pc == 0x32DFD0u) {
        ctx->pc = 0x32DFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DFCCu;
        // 0x32dfd0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32DFD4u;
        goto label_32dfd4;
    }
    ctx->pc = 0x32DFCCu;
    SET_GPR_U32(ctx, 31, 0x32DFD4u);
    ctx->pc = 0x32DFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DFCCu;
    // 0x32dfd0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x32DFCCu, 0x32DFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DFD4u;
label_32dfd4:
    // 0x32dfd4: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x32dfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
label_32dfd8:
    // 0x32dfd8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32dfd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32dfdc:
    // 0x32dfdc: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x32dfdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
label_32dfe0:
    // 0x32dfe0: 0x70621cc8  ppacw       $v1, $v1, $v0
    ctx->pc = 0x32dfe0u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_32dfe4:
    // 0x32dfe4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x32dfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_32dfe8:
    // 0x32dfe8: 0x34840003  ori         $a0, $a0, 0x3
    ctx->pc = 0x32dfe8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
label_32dfec:
    // 0x32dfec: 0x704414c8  ppacw       $v0, $v0, $a0
    ctx->pc = 0x32dfecu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
label_32dff0:
    // 0x32dff0: 0x70621cc8  ppacw       $v1, $v1, $v0
    ctx->pc = 0x32dff0u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_32dff4:
    // 0x32dff4: 0x8f84be20  lw          $a0, -0x41E0($gp)
    ctx->pc = 0x32dff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_32dff8:
    // 0x32dff8: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x32dff8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_32dffc:
    // 0x32dffc: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x32dffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_32e000:
    // 0x32e000: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x32e000u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
label_32e004:
    // 0x32e004: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x32e004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_32e008:
    // 0x32e008: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x32e008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_32e00c:
    // 0x32e00c: 0x34638002  ori         $v1, $v1, 0x8002
    ctx->pc = 0x32e00cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32770);
label_32e010:
    // 0x32e010: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x32e010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_32e014:
    // 0x32e014: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x32e014u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_32e018:
    // 0x32e018: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x32e018u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_32e01c:
    // 0x32e01c: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x32e01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_32e020:
    // 0x32e020: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x32e020u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_32e024:
    // 0x32e024: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x32e024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_32e028:
    // 0x32e028: 0xdf82ae70  ld          $v0, -0x5190($gp)
    ctx->pc = 0x32e028u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946416)));
label_32e02c:
    // 0x32e02c: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x32e02cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_32e030:
    // 0x32e030: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x32e030u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
label_32e034:
    // 0x32e034: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x32e034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_32e038:
    // 0x32e038: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x32e038u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_32e03c:
    // 0x32e03c: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x32e03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_32e040:
    // 0x32e040: 0xdf82ae48  ld          $v0, -0x51B8($gp)
    ctx->pc = 0x32e040u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
label_32e044:
    // 0x32e044: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x32e044u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_32e048:
    // 0x32e048: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x32e048u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
label_32e04c:
    // 0x32e04c: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x32e04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_32e050:
    // 0x32e050: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x32e050u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
label_32e054:
    // 0x32e054: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32e054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32e058:
    // 0x32e058: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x32e058u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_32e05c:
    // 0x32e05c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x32e05cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_32e060:
    // 0x32e060: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x32e060u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_32e064:
    // 0x32e064: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x32e064u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_32e068:
    // 0x32e068: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x32e068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_32e06c:
    // 0x32e06c: 0x3e00008  jr          $ra
label_32e070:
    if (ctx->pc == 0x32E070u) {
        ctx->pc = 0x32E070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E06Cu;
        // 0x32e070: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E074u;
        goto label_32e074;
    }
    ctx->pc = 0x32E06Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32E070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E06Cu;
        // 0x32e070: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E06Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E074u;
label_32e074:
    // 0x32e074: 0x0  nop
    ctx->pc = 0x32e074u;
    // NOP
label_32e078:
    // 0x32e078: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x32e078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_32e07c:
    // 0x32e07c: 0x8f88a634  lw          $t0, -0x59CC($gp)
    ctx->pc = 0x32e07cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944308)));
label_32e080:
    // 0x32e080: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x32e080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_32e084:
    // 0x32e084: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x32e084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_32e088:
    // 0x32e088: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x32e088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_32e08c:
    // 0x32e08c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x32e08cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32e090:
    // 0x32e090: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x32e090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
label_32e094:
    // 0x32e094: 0x3c040007  lui         $a0, 0x7
    ctx->pc = 0x32e094u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7 << 16));
label_32e098:
    // 0x32e098: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x32e098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_32e09c:
    // 0x32e09c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x32e09cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_32e0a0:
    // 0x32e0a0: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x32e0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_32e0a4:
    // 0x32e0a4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x32e0a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32e0a8:
    // 0x32e0a8: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x32e0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_32e0ac:
    // 0x32e0ac: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x32e0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_32e0b0:
    // 0x32e0b0: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x32e0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_32e0b4:
    // 0x32e0b4: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x32e0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_32e0b8:
    // 0x32e0b8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x32e0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_32e0bc:
    // 0x32e0bc: 0xdf87ae48  ld          $a3, -0x51B8($gp)
    ctx->pc = 0x32e0bcu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
label_32e0c0:
    // 0x32e0c0: 0x8e62002c  lw          $v0, 0x2C($s3)
    ctx->pc = 0x32e0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_32e0c4:
    // 0x32e0c4: 0xe43824  and         $a3, $a3, $a0
    ctx->pc = 0x32e0c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
label_32e0c8:
    // 0x32e0c8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x32e0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_32e0cc:
    // 0x32e0cc: 0xdf82ae38  ld          $v0, -0x51C8($gp)
    ctx->pc = 0x32e0ccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946360)));
label_32e0d0:
    // 0x32e0d0: 0xffa20058  sd          $v0, 0x58($sp)
    ctx->pc = 0x32e0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 2));
label_32e0d4:
    // 0x32e0d4: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x32e0d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_32e0d8:
    // 0x32e0d8: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x32e0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_32e0dc:
    // 0x32e0dc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x32e0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_32e0e0:
    // 0x32e0e0: 0xdc430038  ld          $v1, 0x38($v0)
    ctx->pc = 0x32e0e0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 56)));
label_32e0e4:
    // 0x32e0e4: 0x8c560008  lw          $s6, 0x8($v0)
    ctx->pc = 0x32e0e4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_32e0e8:
    // 0x32e0e8: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x32e0e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_32e0ec:
    // 0x32e0ec: 0xe3f025  or          $fp, $a3, $v1
    ctx->pc = 0x32e0ecu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_32e0f0:
    // 0x32e0f0: 0xdc570028  ld          $s7, 0x28($v0)
    ctx->pc = 0x32e0f0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 2), 40)));
label_32e0f4:
    // 0x32e0f4: 0xdc550030  ld          $s5, 0x30($v0)
    ctx->pc = 0x32e0f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 2), 48)));
label_32e0f8:
    // 0x32e0f8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x32e0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32e0fc:
    // 0x32e0fc: 0xc0cacc6  jal         func_32B318
label_32e100:
    if (ctx->pc == 0x32E100u) {
        ctx->pc = 0x32E100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E0FCu;
        // 0x32e100: 0xffa00050  sd          $zero, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E104u;
        goto label_32e104;
    }
    ctx->pc = 0x32E0FCu;
    SET_GPR_U32(ctx, 31, 0x32E104u);
    ctx->pc = 0x32E100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E0FCu;
    // 0x32e100: 0xffa00050  sd          $zero, 0x50($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B318u, 0x32E0FCu, 0x32E104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E104u;
label_32e104:
    // 0x32e104: 0xffa00040  sd          $zero, 0x40($sp)
    ctx->pc = 0x32e104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 0));
label_32e108:
    // 0x32e108: 0xffa00048  sd          $zero, 0x48($sp)
    ctx->pc = 0x32e108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 0));
label_32e10c:
    // 0x32e10c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_32e110:
    if (ctx->pc == 0x32E110u) {
        ctx->pc = 0x32E110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E10Cu;
        // 0x32e110: 0xaf80bec4  sw          $zero, -0x413C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950596), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E114u;
        goto label_32e114;
    }
    ctx->pc = 0x32E10Cu;
    {
        const bool branch_taken_0x32e10c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E10Cu;
        // 0x32e110: 0xaf80bec4  sw          $zero, -0x413C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950596), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e10c) {
            ctx->pc = 0x32E138u;
            goto label_32e138;
        }
    }
    ctx->pc = 0x32E114u;
label_32e114:
    // 0x32e114: 0xc110e98  jal         func_443A60
label_32e118:
    if (ctx->pc == 0x32E118u) {
        ctx->pc = 0x32E118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E114u;
        // 0x32e118: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E11Cu;
        goto label_32e11c;
    }
    ctx->pc = 0x32E114u;
    SET_GPR_U32(ctx, 31, 0x32E11Cu);
    ctx->pc = 0x32E118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E114u;
    // 0x32e118: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443A60u, 0x32E114u, 0x32E11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E11Cu;
label_32e11c:
    // 0x32e11c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x32e11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32e120:
    // 0x32e120: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x32e120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_32e124:
    // 0x32e124: 0x90430023  lbu         $v1, 0x23($v0)
    ctx->pc = 0x32e124u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 35)));
label_32e128:
    // 0x32e128: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x32e128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_32e12c:
    // 0x32e12c: 0x10640002  beq         $v1, $a0, . + 4 + (0x2 << 2)
label_32e130:
    if (ctx->pc == 0x32E130u) {
        ctx->pc = 0x32E130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E12Cu;
        // 0x32e130: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E134u;
        goto label_32e134;
    }
    ctx->pc = 0x32E12Cu;
    {
        const bool branch_taken_0x32e12c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x32E130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E12Cu;
        // 0x32e130: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e12c) {
            ctx->pc = 0x32E138u;
            goto label_32e138;
        }
    }
    ctx->pc = 0x32E134u;
label_32e134:
    // 0x32e134: 0xaf82bec4  sw          $v0, -0x413C($gp)
    ctx->pc = 0x32e134u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950596), GPR_U32(ctx, 2));
label_32e138:
    // 0x32e138: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_32e13c:
    if (ctx->pc == 0x32E13Cu) {
        ctx->pc = 0x32E140u;
        goto label_32e140;
    }
    ctx->pc = 0x32E138u;
    {
        const bool branch_taken_0x32e138 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e138) {
            ctx->pc = 0x32E154u;
            goto label_32e154;
        }
    }
    ctx->pc = 0x32E140u;
label_32e140:
    // 0x32e140: 0xc110e98  jal         func_443A60
label_32e144:
    if (ctx->pc == 0x32E144u) {
        ctx->pc = 0x32E144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E140u;
        // 0x32e144: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E148u;
        goto label_32e148;
    }
    ctx->pc = 0x32E140u;
    SET_GPR_U32(ctx, 31, 0x32E148u);
    ctx->pc = 0x32E144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E140u;
    // 0x32e144: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443A60u, 0x32E140u, 0x32E148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E148u;
label_32e148:
    // 0x32e148: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x32e148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_32e14c:
    // 0x32e14c: 0xc110b7e  jal         func_442DF8
label_32e150:
    if (ctx->pc == 0x32E150u) {
        ctx->pc = 0x32E150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E14Cu;
        // 0x32e150: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E154u;
        goto label_32e154;
    }
    ctx->pc = 0x32E14Cu;
    SET_GPR_U32(ctx, 31, 0x32E154u);
    ctx->pc = 0x32E150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E14Cu;
    // 0x32e150: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x442DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x442DF8u, 0x32E14Cu, 0x32E154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E154u;
label_32e154:
    // 0x32e154: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_32e158:
    if (ctx->pc == 0x32E158u) {
        ctx->pc = 0x32E15Cu;
        goto label_32e15c;
    }
    ctx->pc = 0x32E154u;
    {
        const bool branch_taken_0x32e154 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e154) {
            ctx->pc = 0x32E168u;
            goto label_32e168;
        }
    }
    ctx->pc = 0x32E15Cu;
label_32e15c:
    // 0x32e15c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x32e15cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32e160:
    // 0x32e160: 0xc110b7e  jal         func_442DF8
label_32e164:
    if (ctx->pc == 0x32E164u) {
        ctx->pc = 0x32E164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E160u;
        // 0x32e164: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E168u;
        goto label_32e168;
    }
    ctx->pc = 0x32E160u;
    SET_GPR_U32(ctx, 31, 0x32E168u);
    ctx->pc = 0x32E164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E160u;
    // 0x32e164: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x442DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x442DF8u, 0x32E160u, 0x32E168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E168u;
label_32e168:
    // 0x32e168: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_32e16c:
    if (ctx->pc == 0x32E16Cu) {
        ctx->pc = 0x32E16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E168u;
        // 0x32e16c: 0x8f82beb8  lw          $v0, -0x4148($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E170u;
        goto label_32e170;
    }
    ctx->pc = 0x32E168u;
    {
        const bool branch_taken_0x32e168 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E168u;
        // 0x32e16c: 0x8f82beb8  lw          $v0, -0x4148($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e168) {
            ctx->pc = 0x32E18Cu;
            goto label_32e18c;
        }
    }
    ctx->pc = 0x32E170u;
label_32e170:
    // 0x32e170: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x32e170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_32e174:
    // 0x32e174: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x32e174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_32e178:
    // 0x32e178: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x32e178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_32e17c:
    // 0x32e17c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_32e180:
    if (ctx->pc == 0x32E180u) {
        ctx->pc = 0x32E184u;
        goto label_32e184;
    }
    ctx->pc = 0x32E17Cu;
    {
        const bool branch_taken_0x32e17c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32e17c) {
            ctx->pc = 0x32E18Cu;
            goto label_32e18c;
        }
    }
    ctx->pc = 0x32E184u;
label_32e184:
    // 0x32e184: 0xc110b7e  jal         func_442DF8
label_32e188:
    if (ctx->pc == 0x32E188u) {
        ctx->pc = 0x32E188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E184u;
        // 0x32e188: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E18Cu;
        goto label_32e18c;
    }
    ctx->pc = 0x32E184u;
    SET_GPR_U32(ctx, 31, 0x32E18Cu);
    ctx->pc = 0x32E188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E184u;
    // 0x32e188: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x442DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x442DF8u, 0x32E184u, 0x32E18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E18Cu;
label_32e18c:
    // 0x32e18c: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
label_32e190:
    if (ctx->pc == 0x32E190u) {
        ctx->pc = 0x32E190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E18Cu;
        // 0x32e190: 0x8f82beb8  lw          $v0, -0x4148($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E194u;
        goto label_32e194;
    }
    ctx->pc = 0x32E18Cu;
    {
        const bool branch_taken_0x32e18c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E18Cu;
        // 0x32e190: 0x8f82beb8  lw          $v0, -0x4148($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e18c) {
            ctx->pc = 0x32E22Cu;
            goto label_32e22c;
        }
    }
    ctx->pc = 0x32E194u;
label_32e194:
    // 0x32e194: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x32e194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32e198:
    // 0x32e198: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x32e198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_32e19c:
    // 0x32e19c: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x32e19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_32e1a0:
    // 0x32e1a0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_32e1a4:
    if (ctx->pc == 0x32E1A4u) {
        ctx->pc = 0x32E1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E1A0u;
        // 0x32e1a4: 0xdf82ae80  ld          $v0, -0x5180($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E1A8u;
        goto label_32e1a8;
    }
    ctx->pc = 0x32E1A0u;
    {
        const bool branch_taken_0x32e1a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32E1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E1A0u;
        // 0x32e1a4: 0xdf82ae80  ld          $v0, -0x5180($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e1a0) {
            ctx->pc = 0x32E1B4u;
            goto label_32e1b4;
        }
    }
    ctx->pc = 0x32E1A8u;
label_32e1a8:
    // 0x32e1a8: 0xc110b7e  jal         func_442DF8
label_32e1ac:
    if (ctx->pc == 0x32E1ACu) {
        ctx->pc = 0x32E1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E1A8u;
        // 0x32e1ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E1B0u;
        goto label_32e1b0;
    }
    ctx->pc = 0x32E1A8u;
    SET_GPR_U32(ctx, 31, 0x32E1B0u);
    ctx->pc = 0x32E1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E1A8u;
    // 0x32e1ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x442DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x442DF8u, 0x32E1A8u, 0x32E1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E1B0u;
label_32e1b0:
    // 0x32e1b0: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x32e1b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
label_32e1b4:
    // 0x32e1b4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x32e1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_32e1b8:
    // 0x32e1b8: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x32e1b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32e1bc:
    // 0x32e1bc: 0x27a50044  addiu       $a1, $sp, 0x44
    ctx->pc = 0x32e1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
label_32e1c0:
    // 0x32e1c0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32e1c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_32e1c4:
    // 0x32e1c4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x32e1c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_32e1c8:
    // 0x32e1c8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x32e1c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_32e1cc:
    // 0x32e1cc: 0xaf87bec0  sw          $a3, -0x4140($gp)
    ctx->pc = 0x32e1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950592), GPR_U32(ctx, 7));
label_32e1d0:
    // 0x32e1d0: 0xc110f4c  jal         func_443D30
label_32e1d4:
    if (ctx->pc == 0x32E1D4u) {
        ctx->pc = 0x32E1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E1D0u;
        // 0x32e1d4: 0xff82ae80  sd          $v0, -0x5180($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294946432), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E1D8u;
        goto label_32e1d8;
    }
    ctx->pc = 0x32E1D0u;
    SET_GPR_U32(ctx, 31, 0x32E1D8u);
    ctx->pc = 0x32E1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E1D0u;
    // 0x32e1d4: 0xff82ae80  sd          $v0, -0x5180($gp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946432), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443D30u, 0x32E1D0u, 0x32E1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E1D8u;
label_32e1d8:
    // 0x32e1d8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x32e1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32e1dc:
    // 0x32e1dc: 0x2785ae68  addiu       $a1, $gp, -0x5198
    ctx->pc = 0x32e1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946408));
label_32e1e0:
    // 0x32e1e0: 0xc110f54  jal         func_443D50
label_32e1e4:
    if (ctx->pc == 0x32E1E4u) {
        ctx->pc = 0x32E1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E1E0u;
        // 0x32e1e4: 0x92060050  lbu         $a2, 0x50($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E1E8u;
        goto label_32e1e8;
    }
    ctx->pc = 0x32E1E0u;
    SET_GPR_U32(ctx, 31, 0x32E1E8u);
    ctx->pc = 0x32E1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E1E0u;
    // 0x32e1e4: 0x92060050  lbu         $a2, 0x50($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443D50u, 0x32E1E0u, 0x32E1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E1E8u;
label_32e1e8:
    // 0x32e1e8: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x32e1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_32e1ec:
    // 0x32e1ec: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x32e1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_32e1f0:
    // 0x32e1f0: 0x30620f00  andi        $v0, $v1, 0xF00
    ctx->pc = 0x32e1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3840);
label_32e1f4:
    // 0x32e1f4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x32e1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_32e1f8:
    // 0x32e1f8: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
label_32e1fc:
    if (ctx->pc == 0x32E1FCu) {
        ctx->pc = 0x32E1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E1F8u;
        // 0x32e1fc: 0xff80ae60  sd          $zero, -0x51A0($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294946400), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E200u;
        goto label_32e200;
    }
    ctx->pc = 0x32E1F8u;
    {
        const bool branch_taken_0x32e1f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x32E1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E1F8u;
        // 0x32e1fc: 0xff80ae60  sd          $zero, -0x51A0($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294946400), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e1f8) {
            ctx->pc = 0x32E208u;
            goto label_32e208;
        }
    }
    ctx->pc = 0x32E200u;
label_32e200:
    // 0x32e200: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32e200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32e204:
    // 0x32e204: 0xff82ae60  sd          $v0, -0x51A0($gp)
    ctx->pc = 0x32e204u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946400), GPR_U64(ctx, 2));
label_32e208:
    // 0x32e208: 0x3062f000  andi        $v0, $v1, 0xF000
    ctx->pc = 0x32e208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61440);
label_32e20c:
    // 0x32e20c: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x32e20cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
label_32e210:
    // 0x32e210: 0x1444000c  bne         $v0, $a0, . + 4 + (0xC << 2)
label_32e214:
    if (ctx->pc == 0x32E214u) {
        ctx->pc = 0x32E214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E210u;
        // 0x32e214: 0xdf82ae48  ld          $v0, -0x51B8($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E218u;
        goto label_32e218;
    }
    ctx->pc = 0x32E210u;
    {
        const bool branch_taken_0x32e210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x32E214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E210u;
        // 0x32e214: 0xdf82ae48  ld          $v0, -0x51B8($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e210) {
            ctx->pc = 0x32E244u;
            goto label_32e244;
        }
    }
    ctx->pc = 0x32E218u;
label_32e218:
    // 0x32e218: 0xdf82ae60  ld          $v0, -0x51A0($gp)
    ctx->pc = 0x32e218u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946400)));
label_32e21c:
    // 0x32e21c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x32e21cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_32e220:
    // 0x32e220: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32e220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_32e224:
    // 0x32e224: 0x10000006  b           . + 4 + (0x6 << 2)
label_32e228:
    if (ctx->pc == 0x32E228u) {
        ctx->pc = 0x32E228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E224u;
        // 0x32e228: 0xff82ae60  sd          $v0, -0x51A0($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294946400), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E22Cu;
        goto label_32e22c;
    }
    ctx->pc = 0x32E224u;
    {
        const bool branch_taken_0x32e224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E224u;
        // 0x32e228: 0xff82ae60  sd          $v0, -0x51A0($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294946400), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e224) {
            ctx->pc = 0x32E240u;
            goto label_32e240;
        }
    }
    ctx->pc = 0x32E22Cu;
label_32e22c:
    // 0x32e22c: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x32e22cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
label_32e230:
    // 0x32e230: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x32e230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_32e234:
    // 0x32e234: 0xaf80bec0  sw          $zero, -0x4140($gp)
    ctx->pc = 0x32e234u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950592), GPR_U32(ctx, 0));
label_32e238:
    // 0x32e238: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x32e238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_32e23c:
    // 0x32e23c: 0xff82ae80  sd          $v0, -0x5180($gp)
    ctx->pc = 0x32e23cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946432), GPR_U64(ctx, 2));
label_32e240:
    // 0x32e240: 0xdf82ae48  ld          $v0, -0x51B8($gp)
    ctx->pc = 0x32e240u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
label_32e244:
    // 0x32e244: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x32e244u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32e248:
    // 0x32e248: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x32e248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
label_32e24c:
    // 0x32e24c: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
label_32e250:
    if (ctx->pc == 0x32E250u) {
        ctx->pc = 0x32E250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E24Cu;
        // 0x32e250: 0xff82ae48  sd          $v0, -0x51B8($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294946376), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E254u;
        goto label_32e254;
    }
    ctx->pc = 0x32E24Cu;
    {
        const bool branch_taken_0x32e24c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E24Cu;
        // 0x32e250: 0xff82ae48  sd          $v0, -0x51B8($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294946376), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e24c) {
            ctx->pc = 0x32E2A4u;
            goto label_32e2a4;
        }
    }
    ctx->pc = 0x32E254u;
label_32e254:
    // 0x32e254: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x32e254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_32e258:
    // 0x32e258: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x32e258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
label_32e25c:
    // 0x32e25c: 0x27a60048  addiu       $a2, $sp, 0x48
    ctx->pc = 0x32e25cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_32e260:
    // 0x32e260: 0xc110f4c  jal         func_443D30
label_32e264:
    if (ctx->pc == 0x32E264u) {
        ctx->pc = 0x32E264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E260u;
        // 0x32e264: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E268u;
        goto label_32e268;
    }
    ctx->pc = 0x32E260u;
    SET_GPR_U32(ctx, 31, 0x32E268u);
    ctx->pc = 0x32E264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E260u;
    // 0x32e264: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443D30u, 0x32E260u, 0x32E268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E268u;
label_32e268:
    // 0x32e268: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x32e268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_32e26c:
    // 0x32e26c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x32e26cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_32e270:
    // 0x32e270: 0xc110f54  jal         func_443D50
label_32e274:
    if (ctx->pc == 0x32E274u) {
        ctx->pc = 0x32E274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E270u;
        // 0x32e274: 0x92260050  lbu         $a2, 0x50($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E278u;
        goto label_32e278;
    }
    ctx->pc = 0x32E270u;
    SET_GPR_U32(ctx, 31, 0x32E278u);
    ctx->pc = 0x32E274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E270u;
    // 0x32e274: 0x92260050  lbu         $a2, 0x50($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443D50u, 0x32E270u, 0x32E278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E278u;
label_32e278:
    // 0x32e278: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x32e278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_32e27c:
    // 0x32e27c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x32e27cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_32e280:
    // 0x32e280: 0x30620f00  andi        $v0, $v1, 0xF00
    ctx->pc = 0x32e280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3840);
label_32e284:
    // 0x32e284: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x32e284u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_32e288:
    // 0x32e288: 0x3063f000  andi        $v1, $v1, 0xF000
    ctx->pc = 0x32e288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61440);
label_32e28c:
    // 0x32e28c: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x32e28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_32e290:
    // 0x32e290: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x32e290u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
label_32e294:
    // 0x32e294: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
label_32e298:
    if (ctx->pc == 0x32E298u) {
        ctx->pc = 0x32E298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E294u;
        // 0x32e298: 0x2a00b  movn        $s4, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E29Cu;
        goto label_32e29c;
    }
    ctx->pc = 0x32E294u;
    {
        const bool branch_taken_0x32e294 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x32E298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E294u;
        // 0x32e298: 0x2a00b  movn        $s4, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e294) {
            ctx->pc = 0x32E2A4u;
            goto label_32e2a4;
        }
    }
    ctx->pc = 0x32E29Cu;
label_32e29c:
    // 0x32e29c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x32e29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_32e2a0:
    // 0x32e2a0: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x32e2a0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
label_32e2a4:
    // 0x32e2a4: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_32e2a8:
    if (ctx->pc == 0x32E2A8u) {
        ctx->pc = 0x32E2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E2A4u;
        // 0x32e2a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E2ACu;
        goto label_32e2ac;
    }
    ctx->pc = 0x32E2A4u;
    {
        const bool branch_taken_0x32e2a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E2A4u;
        // 0x32e2a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e2a4) {
            ctx->pc = 0x32E2E8u;
            goto label_32e2e8;
        }
    }
    ctx->pc = 0x32E2ACu;
label_32e2ac:
    // 0x32e2ac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x32e2acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32e2b0:
    // 0x32e2b0: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x32e2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_32e2b4:
    // 0x32e2b4: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x32e2b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
label_32e2b8:
    // 0x32e2b8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_32e2bc:
    if (ctx->pc == 0x32E2BCu) {
        ctx->pc = 0x32E2C0u;
        goto label_32e2c0;
    }
    ctx->pc = 0x32E2B8u;
    {
        const bool branch_taken_0x32e2b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e2b8) {
            ctx->pc = 0x32E2E8u;
            goto label_32e2e8;
        }
    }
    ctx->pc = 0x32E2C0u;
label_32e2c0:
    // 0x32e2c0: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_32e2c4:
    if (ctx->pc == 0x32E2C4u) {
        ctx->pc = 0x32E2C8u;
        goto label_32e2c8;
    }
    ctx->pc = 0x32E2C0u;
    {
        const bool branch_taken_0x32e2c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e2c0) {
            ctx->pc = 0x32E2E8u;
            goto label_32e2e8;
        }
    }
    ctx->pc = 0x32E2C8u;
label_32e2c8:
    // 0x32e2c8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x32e2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_32e2cc:
    // 0x32e2cc: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x32e2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_32e2d0:
    // 0x32e2d0: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x32e2d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
label_32e2d4:
    // 0x32e2d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_32e2d8:
    if (ctx->pc == 0x32E2D8u) {
        ctx->pc = 0x32E2DCu;
        goto label_32e2dc;
    }
    ctx->pc = 0x32E2D4u;
    {
        const bool branch_taken_0x32e2d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e2d4) {
            ctx->pc = 0x32E2E8u;
            goto label_32e2e8;
        }
    }
    ctx->pc = 0x32E2DCu;
label_32e2dc:
    // 0x32e2dc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x32e2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_32e2e0:
    // 0x32e2e0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x32e2e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_32e2e4:
    // 0x32e2e4: 0xaf82bec0  sw          $v0, -0x4140($gp)
    ctx->pc = 0x32e2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950592), GPR_U32(ctx, 2));
label_32e2e8:
    // 0x32e2e8: 0xc10a322  jal         func_428C88
label_32e2ec:
    if (ctx->pc == 0x32E2ECu) {
        ctx->pc = 0x32E2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E2E8u;
        // 0x32e2ec: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E2F0u;
        goto label_32e2f0;
    }
    ctx->pc = 0x32E2E8u;
    SET_GPR_U32(ctx, 31, 0x32E2F0u);
    ctx->pc = 0x32E2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E2E8u;
    // 0x32e2ec: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x32E2E8u, 0x32E2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E2F0u;
label_32e2f0:
    // 0x32e2f0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x32e2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_32e2f4:
    // 0x32e2f4: 0x34630022  ori         $v1, $v1, 0x22
    ctx->pc = 0x32e2f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34);
label_32e2f8:
    // 0x32e2f8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x32e2f8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32e2fc:
    // 0x32e2fc: 0x71431b89  pcpyld      $v1, $t2, $v1
    ctx->pc = 0x32e2fcu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 3)));
label_32e300:
    // 0x32e300: 0x8f85be20  lw          $a1, -0x41E0($gp)
    ctx->pc = 0x32e300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_32e304:
    // 0x32e304: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x32e304u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
label_32e308:
    // 0x32e308: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x32e308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_32e30c:
    // 0x32e30c: 0xaf85be20  sw          $a1, -0x41E0($gp)
    ctx->pc = 0x32e30cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 5));
label_32e310:
    // 0x32e310: 0x3c026c0b  lui         $v0, 0x6C0B
    ctx->pc = 0x32e310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27659 << 16));
label_32e314:
    // 0x32e314: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x32e314u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_32e318:
    // 0x32e318: 0x344203bc  ori         $v0, $v0, 0x3BC
    ctx->pc = 0x32e318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)956);
label_32e31c:
    // 0x32e31c: 0x34840101  ori         $a0, $a0, 0x101
    ctx->pc = 0x32e31cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)257);
label_32e320:
    // 0x32e320: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32e320u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32e324:
    // 0x32e324: 0x704414c8  ppacw       $v0, $v0, $a0
    ctx->pc = 0x32e324u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
label_32e328:
    // 0x32e328: 0x70c61cc8  ppacw       $v1, $a2, $a2
    ctx->pc = 0x32e328u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 6), GPR_VEC(ctx, 6)));
label_32e32c:
    // 0x32e32c: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x32e32cu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_32e330:
    // 0x32e330: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x32e330u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
label_32e334:
    // 0x32e334: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x32e334u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
label_32e338:
    // 0x32e338: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x32e338u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
label_32e33c:
    // 0x32e33c: 0x35088002  ori         $t0, $t0, 0x8002
    ctx->pc = 0x32e33cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32770);
label_32e340:
    // 0x32e340: 0x2409000e  addiu       $t1, $zero, 0xE
    ctx->pc = 0x32e340u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_32e344:
    // 0x32e344: 0x71281389  pcpyld      $v0, $t1, $t0
    ctx->pc = 0x32e344u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
label_32e348:
    // 0x32e348: 0x7ca20010  sq          $v0, 0x10($a1)
    ctx->pc = 0x32e348u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
label_32e34c:
    // 0x32e34c: 0x2404003d  addiu       $a0, $zero, 0x3D
    ctx->pc = 0x32e34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
label_32e350:
    // 0x32e350: 0x70951389  pcpyld      $v0, $a0, $s5
    ctx->pc = 0x32e350u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 21)));
label_32e354:
    // 0x32e354: 0x7ca20020  sq          $v0, 0x20($a1)
    ctx->pc = 0x32e354u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 2));
label_32e358:
    // 0x32e358: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x32e358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_32e35c:
    // 0x32e35c: 0xdfa20048  ld          $v0, 0x48($sp)
    ctx->pc = 0x32e35cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_32e360:
    // 0x32e360: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x32e360u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_32e364:
    // 0x32e364: 0x7ca20030  sq          $v0, 0x30($a1)
    ctx->pc = 0x32e364u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 2));
label_32e368:
    // 0x32e368: 0x71281389  pcpyld      $v0, $t1, $t0
    ctx->pc = 0x32e368u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
label_32e36c:
    // 0x32e36c: 0x7ca20040  sq          $v0, 0x40($a1)
    ctx->pc = 0x32e36cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 64), GPR_VEC(ctx, 2));
label_32e370:
    // 0x32e370: 0xdf82ae58  ld          $v0, -0x51A8($gp)
    ctx->pc = 0x32e370u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946392)));
label_32e374:
    // 0x32e374: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x32e374u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_32e378:
    // 0x32e378: 0x7ca20050  sq          $v0, 0x50($a1)
    ctx->pc = 0x32e378u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 80), GPR_VEC(ctx, 2));
label_32e37c:
    // 0x32e37c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x32e37cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_32e380:
    // 0x32e380: 0xdfa20040  ld          $v0, 0x40($sp)
    ctx->pc = 0x32e380u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_32e384:
    // 0x32e384: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x32e384u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_32e388:
    // 0x32e388: 0x7ca20060  sq          $v0, 0x60($a1)
    ctx->pc = 0x32e388u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 96), GPR_VEC(ctx, 2));
label_32e38c:
    // 0x32e38c: 0x92630029  lbu         $v1, 0x29($s3)
    ctx->pc = 0x32e38cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 41)));
label_32e390:
    // 0x32e390: 0x24040258  addiu       $a0, $zero, 0x258
    ctx->pc = 0x32e390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
label_32e394:
    // 0x32e394: 0x3c083000  lui         $t0, 0x3000
    ctx->pc = 0x32e394u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)12288 << 16));
label_32e398:
    // 0x32e398: 0x35084000  ori         $t0, $t0, 0x4000
    ctx->pc = 0x32e398u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)16384);
label_32e39c:
    // 0x32e39c: 0x92620028  lbu         $v0, 0x28($s3)
    ctx->pc = 0x32e39cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 40)));
label_32e3a0:
    // 0x32e3a0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x32e3a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_32e3a4:
    // 0x32e3a4: 0x24070412  addiu       $a3, $zero, 0x412
    ctx->pc = 0x32e3a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
label_32e3a8:
    // 0x32e3a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x32e3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_32e3ac:
    // 0x32e3ac: 0x21178  dsll        $v0, $v0, 5
    ctx->pc = 0x32e3acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 5);
label_32e3b0:
    // 0x32e3b0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32e3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_32e3b4:
    // 0x32e3b4: 0x213f8  dsll        $v0, $v0, 15
    ctx->pc = 0x32e3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 15);
label_32e3b8:
    // 0x32e3b8: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x32e3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
label_32e3bc:
    // 0x32e3bc: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x32e3bcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
label_32e3c0:
    // 0x32e3c0: 0x70e81389  pcpyld      $v0, $a3, $t0
    ctx->pc = 0x32e3c0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
label_32e3c4:
    // 0x32e3c4: 0x7ca20070  sq          $v0, 0x70($a1)
    ctx->pc = 0x32e3c4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 112), GPR_VEC(ctx, 2));
label_32e3c8:
    // 0x32e3c8: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x32e3c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_32e3cc:
    // 0x32e3cc: 0x7ca20080  sq          $v0, 0x80($a1)
    ctx->pc = 0x32e3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 128), GPR_VEC(ctx, 2));
label_32e3d0:
    // 0x32e3d0: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x32e3d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_32e3d4:
    // 0x32e3d4: 0x7ca20090  sq          $v0, 0x90($a1)
    ctx->pc = 0x32e3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 144), GPR_VEC(ctx, 2));
label_32e3d8:
    // 0x32e3d8: 0xdfa80020  ld          $t0, 0x20($sp)
    ctx->pc = 0x32e3d8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_32e3dc:
    // 0x32e3dc: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x32e3dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_32e3e0:
    // 0x32e3e0: 0x9fa30028  lwu         $v1, 0x28($sp)
    ctx->pc = 0x32e3e0u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_32e3e4:
    // 0x32e3e4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x32e3e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_32e3e8:
    // 0x32e3e8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32e3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_32e3ec:
    // 0x32e3ec: 0x70481389  pcpyld      $v0, $v0, $t0
    ctx->pc = 0x32e3ecu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
label_32e3f0:
    // 0x32e3f0: 0x7ca200a0  sq          $v0, 0xA0($a1)
    ctx->pc = 0x32e3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 160), GPR_VEC(ctx, 2));
label_32e3f4:
    // 0x32e3f4: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x32e3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_32e3f8:
    // 0x32e3f8: 0xdc482710  ld          $t0, 0x2710($v0)
    ctx->pc = 0x32e3f8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 10000)));
label_32e3fc:
    // 0x32e3fc: 0x24432710  addiu       $v1, $v0, 0x2710
    ctx->pc = 0x32e3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 10000));
label_32e400:
    // 0x32e400: 0xdc620008  ld          $v0, 0x8($v1)
    ctx->pc = 0x32e400u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 8)));
label_32e404:
    // 0x32e404: 0x70481389  pcpyld      $v0, $v0, $t0
    ctx->pc = 0x32e404u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
label_32e408:
    // 0x32e408: 0x7ca200b0  sq          $v0, 0xB0($a1)
    ctx->pc = 0x32e408u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 176), GPR_VEC(ctx, 2));
label_32e40c:
    // 0x32e40c: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x32e40cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
label_32e410:
    // 0x32e410: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x32e410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
label_32e414:
    // 0x32e414: 0x70c61cc8  ppacw       $v1, $a2, $a2
    ctx->pc = 0x32e414u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 6), GPR_VEC(ctx, 6)));
label_32e418:
    // 0x32e418: 0x704614c8  ppacw       $v0, $v0, $a2
    ctx->pc = 0x32e418u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
label_32e41c:
    // 0x32e41c: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x32e41cu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_32e420:
    // 0x32e420: 0x7ca200c0  sq          $v0, 0xC0($a1)
    ctx->pc = 0x32e420u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 192), GPR_VEC(ctx, 2));
label_32e424:
    // 0x32e424: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x32e424u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
label_32e428:
    // 0x32e428: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x32e428u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
label_32e42c:
    // 0x32e42c: 0x35088005  ori         $t0, $t0, 0x8005
    ctx->pc = 0x32e42cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32773);
label_32e430:
    // 0x32e430: 0x71281389  pcpyld      $v0, $t1, $t0
    ctx->pc = 0x32e430u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
label_32e434:
    // 0x32e434: 0x7ca200d0  sq          $v0, 0xD0($a1)
    ctx->pc = 0x32e434u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 208), GPR_VEC(ctx, 2));
label_32e438:
    // 0x32e438: 0x24020043  addiu       $v0, $zero, 0x43
    ctx->pc = 0x32e438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
label_32e43c:
    // 0x32e43c: 0x70571389  pcpyld      $v0, $v0, $s7
    ctx->pc = 0x32e43cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 23)));
label_32e440:
    // 0x32e440: 0x7ca200e0  sq          $v0, 0xE0($a1)
    ctx->pc = 0x32e440u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 224), GPR_VEC(ctx, 2));
label_32e444:
    // 0x32e444: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x32e444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_32e448:
    // 0x32e448: 0x70541389  pcpyld      $v0, $v0, $s4
    ctx->pc = 0x32e448u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 20)));
label_32e44c:
    // 0x32e44c: 0x7ca200f0  sq          $v0, 0xF0($a1)
    ctx->pc = 0x32e44cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 240), GPR_VEC(ctx, 2));
label_32e450:
    // 0x32e450: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x32e450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_32e454:
    // 0x32e454: 0x705e1389  pcpyld      $v0, $v0, $fp
    ctx->pc = 0x32e454u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 30)));
label_32e458:
    // 0x32e458: 0x7ca20100  sq          $v0, 0x100($a1)
    ctx->pc = 0x32e458u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 256), GPR_VEC(ctx, 2));
label_32e45c:
    // 0x32e45c: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x32e45cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_32e460:
    // 0x32e460: 0xdfa20050  ld          $v0, 0x50($sp)
    ctx->pc = 0x32e460u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_32e464:
    // 0x32e464: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x32e464u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_32e468:
    // 0x32e468: 0x7ca20110  sq          $v0, 0x110($a1)
    ctx->pc = 0x32e468u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 272), GPR_VEC(ctx, 2));
label_32e46c:
    // 0x32e46c: 0x2402004f  addiu       $v0, $zero, 0x4F
    ctx->pc = 0x32e46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
label_32e470:
    // 0x32e470: 0xdfa30058  ld          $v1, 0x58($sp)
    ctx->pc = 0x32e470u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_32e474:
    // 0x32e474: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x32e474u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_32e478:
    // 0x32e478: 0x7ca20120  sq          $v0, 0x120($a1)
    ctx->pc = 0x32e478u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 288), GPR_VEC(ctx, 2));
label_32e47c:
    // 0x32e47c: 0x24a20130  addiu       $v0, $a1, 0x130
    ctx->pc = 0x32e47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 304));
label_32e480:
    // 0x32e480: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x32e480u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_32e484:
    // 0x32e484: 0x3c046c01  lui         $a0, 0x6C01
    ctx->pc = 0x32e484u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27649 << 16));
label_32e488:
    // 0x32e488: 0x348403fa  ori         $a0, $a0, 0x3FA
    ctx->pc = 0x32e488u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1018);
label_32e48c:
    // 0x32e48c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x32e48cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_32e490:
    // 0x32e490: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x32e490u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
label_32e494:
    // 0x32e494: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x32e494u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_32e498:
    // 0x32e498: 0x34840404  ori         $a0, $a0, 0x404
    ctx->pc = 0x32e498u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1028);
label_32e49c:
    // 0x32e49c: 0x708a2389  pcpyld      $a0, $a0, $t2
    ctx->pc = 0x32e49cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 10)));
label_32e4a0:
    // 0x32e4a0: 0x7ca40130  sq          $a0, 0x130($a1)
    ctx->pc = 0x32e4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 304), GPR_VEC(ctx, 4));
label_32e4a4:
    // 0x32e4a4: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x32e4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
label_32e4a8:
    // 0x32e4a8: 0xaf85be20  sw          $a1, -0x41E0($gp)
    ctx->pc = 0x32e4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 5));
label_32e4ac:
    // 0x32e4ac: 0x92620047  lbu         $v0, 0x47($s3)
    ctx->pc = 0x32e4acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 71)));
label_32e4b0:
    // 0x32e4b0: 0x8f83bec4  lw          $v1, -0x413C($gp)
    ctx->pc = 0x32e4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950596)));
label_32e4b4:
    // 0x32e4b4: 0x384200ff  xori        $v0, $v0, 0xFF
    ctx->pc = 0x32e4b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)255);
label_32e4b8:
    // 0x32e4b8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x32e4b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_32e4bc:
    // 0x32e4bc: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x32e4bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_32e4c0:
    // 0x32e4c0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_32e4c4:
    if (ctx->pc == 0x32E4C4u) {
        ctx->pc = 0x32E4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E4C0u;
        // 0x32e4c4: 0xaf82bec8  sw          $v0, -0x4138($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950600), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E4C8u;
        goto label_32e4c8;
    }
    ctx->pc = 0x32E4C0u;
    {
        const bool branch_taken_0x32e4c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E4C0u;
        // 0x32e4c4: 0xaf82bec8  sw          $v0, -0x4138($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950600), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e4c0) {
            ctx->pc = 0x32E4D8u;
            goto label_32e4d8;
        }
    }
    ctx->pc = 0x32E4C8u;
label_32e4c8:
    // 0x32e4c8: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x32e4c8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
label_32e4cc:
    // 0x32e4cc: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x32e4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_32e4d0:
    // 0x32e4d0: 0x10000004  b           . + 4 + (0x4 << 2)
label_32e4d4:
    if (ctx->pc == 0x32E4D4u) {
        ctx->pc = 0x32E4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E4D0u;
        // 0x32e4d4: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E4D8u;
        goto label_32e4d8;
    }
    ctx->pc = 0x32E4D0u;
    {
        const bool branch_taken_0x32e4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E4D0u;
        // 0x32e4d4: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e4d0) {
            ctx->pc = 0x32E4E4u;
            goto label_32e4e4;
        }
    }
    ctx->pc = 0x32E4D8u;
label_32e4d8:
    // 0x32e4d8: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x32e4d8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
label_32e4dc:
    // 0x32e4dc: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x32e4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
label_32e4e0:
    // 0x32e4e0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x32e4e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_32e4e4:
    // 0x32e4e4: 0xff82ae80  sd          $v0, -0x5180($gp)
    ctx->pc = 0x32e4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946432), GPR_U64(ctx, 2));
label_32e4e8:
    // 0x32e4e8: 0x92660029  lbu         $a2, 0x29($s3)
    ctx->pc = 0x32e4e8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 41)));
label_32e4ec:
    // 0x32e4ec: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x32e4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_32e4f0:
    // 0x32e4f0: 0x8f82ae80  lw          $v0, -0x5180($gp)
    ctx->pc = 0x32e4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946432)));
label_32e4f4:
    // 0x32e4f4: 0x3c07fc00  lui         $a3, 0xFC00
    ctx->pc = 0x32e4f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64512 << 16));
label_32e4f8:
    // 0x32e4f8: 0x34e77fff  ori         $a3, $a3, 0x7FFF
    ctx->pc = 0x32e4f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32767);
label_32e4fc:
    // 0x32e4fc: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x32e4fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
label_32e500:
    // 0x32e500: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x32e500u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_32e504:
    // 0x32e504: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x32e504u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
label_32e508:
    // 0x32e508: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x32e508u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_32e50c:
    // 0x32e50c: 0xdc64d5d0  ld          $a0, -0x2A30($v1)
    ctx->pc = 0x32e50cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 4294956496)));
label_32e510:
    // 0x32e510: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x32e510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_32e514:
    // 0x32e514: 0x2463d5d0  addiu       $v1, $v1, -0x2A30
    ctx->pc = 0x32e514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956496));
label_32e518:
    // 0x32e518: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x32e518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
label_32e51c:
    // 0x32e51c: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x32e51cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
label_32e520:
    // 0x32e520: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x32e520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
label_32e524:
    // 0x32e524: 0xdc650008  ld          $a1, 0x8($v1)
    ctx->pc = 0x32e524u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 8)));
label_32e528:
    // 0x32e528: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x32e528u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_32e52c:
    // 0x32e52c: 0x70a42389  pcpyld      $a0, $a1, $a0
    ctx->pc = 0x32e52cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_32e530:
    // 0x32e530: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x32e530u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_32e534:
    // 0x32e534: 0x8f86be20  lw          $a2, -0x41E0($gp)
    ctx->pc = 0x32e534u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_32e538:
    // 0x32e538: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x32e538u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
label_32e53c:
    // 0x32e53c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x32e53cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_32e540:
    // 0x32e540: 0xaf86be20  sw          $a2, -0x41E0($gp)
    ctx->pc = 0x32e540u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 6));
label_32e544:
    // 0x32e544: 0x3c026c01  lui         $v0, 0x6C01
    ctx->pc = 0x32e544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27649 << 16));
label_32e548:
    // 0x32e548: 0x344203fb  ori         $v0, $v0, 0x3FB
    ctx->pc = 0x32e548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1019);
label_32e54c:
    // 0x32e54c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x32e54cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_32e550:
    // 0x32e550: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x32e550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_32e554:
    // 0x32e554: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x32e554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_32e558:
    // 0x32e558: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x32e558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
label_32e55c:
    // 0x32e55c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32e55cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32e560:
    // 0x32e560: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x32e560u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
label_32e564:
    // 0x32e564: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x32e564u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_32e568:
    // 0x32e568: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x32e568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_32e56c:
    // 0x32e56c: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x32e56cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_32e570:
    // 0x32e570: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x32e570u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
label_32e574:
    // 0x32e574: 0xc7858054  lwc1        $f5, -0x7FAC($gp)
    ctx->pc = 0x32e574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_32e578:
    // 0x32e578: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x32e578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_32e57c:
    // 0x32e57c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_32e580:
    if (ctx->pc == 0x32E580u) {
        ctx->pc = 0x32E580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E57Cu;
        // 0x32e580: 0x92620044  lbu         $v0, 0x44($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E584u;
        goto label_32e584;
    }
    ctx->pc = 0x32E57Cu;
    {
        const bool branch_taken_0x32e57c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E57Cu;
        // 0x32e580: 0x92620044  lbu         $v0, 0x44($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e57c) {
            ctx->pc = 0x32E588u;
            goto label_32e588;
        }
    }
    ctx->pc = 0x32E584u;
label_32e584:
    // 0x32e584: 0xc7858434  lwc1        $f5, -0x7BCC($gp)
    ctx->pc = 0x32e584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_32e588:
    // 0x32e588: 0x92630045  lbu         $v1, 0x45($s3)
    ctx->pc = 0x32e588u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 69)));
label_32e58c:
    // 0x32e58c: 0x92640046  lbu         $a0, 0x46($s3)
    ctx->pc = 0x32e58cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 70)));
label_32e590:
    // 0x32e590: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x32e590u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_32e594:
    // 0x32e594: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x32e594u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_32e598:
    // 0x32e598: 0x92650047  lbu         $a1, 0x47($s3)
    ctx->pc = 0x32e598u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 71)));
label_32e59c:
    // 0x32e59c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x32e59cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_32e5a0:
    // 0x32e5a0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x32e5a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_32e5a4:
    // 0x32e5a4: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x32e5a4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_32e5a8:
    // 0x32e5a8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x32e5a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_32e5ac:
    // 0x32e5ac: 0xc7818434  lwc1        $f1, -0x7BCC($gp)
    ctx->pc = 0x32e5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_32e5b0:
    // 0x32e5b0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x32e5b0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32e5b4:
    // 0x32e5b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32e5b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_32e5b8:
    // 0x32e5b8: 0x46010182  mul.s       $f6, $f0, $f1
    ctx->pc = 0x32e5b8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_32e5bc:
    // 0x32e5bc: 0x460519c2  mul.s       $f7, $f3, $f5
    ctx->pc = 0x32e5bcu;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
label_32e5c0:
    // 0x32e5c0: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x32e5c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_32e5c4:
    // 0x32e5c4: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x32e5c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_32e5c8:
    // 0x32e5c8: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x32e5c8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
label_32e5cc:
    // 0x32e5cc: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x32e5ccu;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
label_32e5d0:
    // 0x32e5d0: 0x46051182  mul.s       $f6, $f2, $f5
    ctx->pc = 0x32e5d0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_32e5d4:
    // 0x32e5d4: 0x460521c2  mul.s       $f7, $f4, $f5
    ctx->pc = 0x32e5d4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
label_32e5d8:
    // 0x32e5d8: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x32e5d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_32e5dc:
    // 0x32e5dc: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x32e5dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_32e5e0:
    // 0x32e5e0: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x32e5e0u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_32e5e4:
    // 0x32e5e4: 0x7cc20010  sq          $v0, 0x10($a2)
    ctx->pc = 0x32e5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
label_32e5e8:
    // 0x32e5e8: 0x24c30020  addiu       $v1, $a2, 0x20
    ctx->pc = 0x32e5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
label_32e5ec:
    // 0x32e5ec: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x32e5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_32e5f0:
    // 0x32e5f0: 0x3c026c01  lui         $v0, 0x6C01
    ctx->pc = 0x32e5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27649 << 16));
label_32e5f4:
    // 0x32e5f4: 0x344203fc  ori         $v0, $v0, 0x3FC
    ctx->pc = 0x32e5f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1020);
label_32e5f8:
    // 0x32e5f8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x32e5f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_32e5fc:
    // 0x32e5fc: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x32e5fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_32e600:
    // 0x32e600: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x32e600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_32e604:
    // 0x32e604: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x32e604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
label_32e608:
    // 0x32e608: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x32e608u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
label_32e60c:
    // 0x32e60c: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x32e60cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 2));
label_32e610:
    // 0x32e610: 0x24c30030  addiu       $v1, $a2, 0x30
    ctx->pc = 0x32e610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
label_32e614:
    // 0x32e614: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x32e614u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_32e618:
    // 0x32e618: 0x8e62003c  lw          $v0, 0x3C($s3)
    ctx->pc = 0x32e618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
label_32e61c:
    // 0x32e61c: 0xc7848240  lwc1        $f4, -0x7DC0($gp)
    ctx->pc = 0x32e61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_32e620:
    // 0x32e620: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x32e620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_32e624:
    // 0x32e624: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x32e624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_32e628:
    // 0x32e628: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x32e628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_32e62c:
    // 0x32e62c: 0xc660001c  lwc1        $f0, 0x1C($s3)
    ctx->pc = 0x32e62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32e630:
    // 0x32e630: 0x46040942  mul.s       $f5, $f1, $f4
    ctx->pc = 0x32e630u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_32e634:
    // 0x32e634: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x32e634u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_32e638:
    // 0x32e638: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x32e638u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_32e63c:
    // 0x32e63c: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x32e63cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
label_32e640:
    // 0x32e640: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x32e640u;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
label_32e644:
    // 0x32e644: 0x46041982  mul.s       $f6, $f3, $f4
    ctx->pc = 0x32e644u;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_32e648:
    // 0x32e648: 0x46041142  mul.s       $f5, $f2, $f4
    ctx->pc = 0x32e648u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_32e64c:
    // 0x32e64c: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x32e64cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_32e650:
    // 0x32e650: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x32e650u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_32e654:
    // 0x32e654: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x32e654u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_32e658:
    // 0x32e658: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x32e658u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
label_32e65c:
    // 0x32e65c: 0x24c30040  addiu       $v1, $a2, 0x40
    ctx->pc = 0x32e65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
label_32e660:
    // 0x32e660: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x32e660u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_32e664:
    // 0x32e664: 0x92620028  lbu         $v0, 0x28($s3)
    ctx->pc = 0x32e664u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 40)));
label_32e668:
    // 0x32e668: 0x3c046c03  lui         $a0, 0x6C03
    ctx->pc = 0x32e668u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27651 << 16));
label_32e66c:
    // 0x32e66c: 0x348403fd  ori         $a0, $a0, 0x3FD
    ctx->pc = 0x32e66cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1021);
label_32e670:
    // 0x32e670: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x32e670u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_32e674:
    // 0x32e674: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x32e674u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
label_32e678:
    // 0x32e678: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x32e678u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_32e67c:
    // 0x32e67c: 0x34840404  ori         $a0, $a0, 0x404
    ctx->pc = 0x32e67cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1028);
label_32e680:
    // 0x32e680: 0x70871b89  pcpyld      $v1, $a0, $a3
    ctx->pc = 0x32e680u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
label_32e684:
    // 0x32e684: 0x30470007  andi        $a3, $v0, 0x7
    ctx->pc = 0x32e684u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_32e688:
    // 0x32e688: 0x7cc30040  sq          $v1, 0x40($a2)
    ctx->pc = 0x32e688u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), GPR_VEC(ctx, 3));
label_32e68c:
    // 0x32e68c: 0x24c20050  addiu       $v0, $a2, 0x50
    ctx->pc = 0x32e68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
label_32e690:
    // 0x32e690: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x32e690u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_32e694:
    // 0x32e694: 0x8f83aee0  lw          $v1, -0x5120($gp)
    ctx->pc = 0x32e694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946528)));
label_32e698:
    // 0x32e698: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_32e69c:
    if (ctx->pc == 0x32E69Cu) {
        ctx->pc = 0x32E69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E698u;
        // 0x32e69c: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E6A0u;
        goto label_32e6a0;
    }
    ctx->pc = 0x32E698u;
    {
        const bool branch_taken_0x32e698 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E698u;
        // 0x32e69c: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e698) {
            ctx->pc = 0x32E6A8u;
            goto label_32e6a8;
        }
    }
    ctx->pc = 0x32E6A0u;
label_32e6a0:
    // 0x32e6a0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_32e6a4:
    if (ctx->pc == 0x32E6A4u) {
        ctx->pc = 0x32E6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E6A0u;
        // 0x32e6a4: 0x34e70008  ori         $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E6A8u;
        goto label_32e6a8;
    }
    ctx->pc = 0x32E6A0u;
    {
        const bool branch_taken_0x32e6a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e6a0) {
            ctx->pc = 0x32E6A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32E6A0u;
            // 0x32e6a4: 0x34e70008  ori         $a3, $a3, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x32E6C0u;
            goto label_32e6c0;
        }
    }
    ctx->pc = 0x32E6A8u;
label_32e6a8:
    // 0x32e6a8: 0x8f82aee4  lw          $v0, -0x511C($gp)
    ctx->pc = 0x32e6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946532)));
label_32e6ac:
    // 0x32e6ac: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_32e6b0:
    if (ctx->pc == 0x32E6B0u) {
        ctx->pc = 0x32E6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E6ACu;
        // 0x32e6b0: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E6B4u;
        goto label_32e6b4;
    }
    ctx->pc = 0x32E6ACu;
    {
        const bool branch_taken_0x32e6ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E6ACu;
        // 0x32e6b0: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e6ac) {
            ctx->pc = 0x32E6E8u;
            goto label_32e6e8;
        }
    }
    ctx->pc = 0x32E6B4u;
label_32e6b4:
    // 0x32e6b4: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_32e6b8:
    if (ctx->pc == 0x32E6B8u) {
        ctx->pc = 0x32E6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E6B4u;
        // 0x32e6b8: 0x3c03005e  lui         $v1, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E6BCu;
        goto label_32e6bc;
    }
    ctx->pc = 0x32E6B4u;
    {
        const bool branch_taken_0x32e6b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e6b4) {
            ctx->pc = 0x32E6B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32E6B4u;
            // 0x32e6b8: 0x3c03005e  lui         $v1, 0x5E (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32E6F0u;
            goto label_32e6f0;
        }
    }
    ctx->pc = 0x32E6BCu;
label_32e6bc:
    // 0x32e6bc: 0x34e70008  ori         $a3, $a3, 0x8
    ctx->pc = 0x32e6bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
label_32e6c0:
    // 0x32e6c0: 0x8f84be20  lw          $a0, -0x41E0($gp)
    ctx->pc = 0x32e6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_32e6c4:
    // 0x32e6c4: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x32e6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_32e6c8:
    // 0x32e6c8: 0x2463d670  addiu       $v1, $v1, -0x2990
    ctx->pc = 0x32e6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956656));
label_32e6cc:
    // 0x32e6cc: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x32e6ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_32e6d0:
    // 0x32e6d0: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x32e6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_32e6d4:
    // 0x32e6d4: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x32e6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_32e6d8:
    // 0x32e6d8: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x32e6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
label_32e6dc:
    // 0x32e6dc: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x32e6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_32e6e0:
    // 0x32e6e0: 0x1000000b  b           . + 4 + (0xB << 2)
label_32e6e4:
    if (ctx->pc == 0x32E6E4u) {
        ctx->pc = 0x32E6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E6E0u;
        // 0x32e6e4: 0x2463d680  addiu       $v1, $v1, -0x2980 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E6E8u;
        goto label_32e6e8;
    }
    ctx->pc = 0x32E6E0u;
    {
        const bool branch_taken_0x32e6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E6E0u;
        // 0x32e6e4: 0x2463d680  addiu       $v1, $v1, -0x2980 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e6e0) {
            ctx->pc = 0x32E710u;
            goto label_32e710;
        }
    }
    ctx->pc = 0x32E6E8u;
label_32e6e8:
    // 0x32e6e8: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x32e6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_32e6ec:
    // 0x32e6ec: 0x0  nop
    ctx->pc = 0x32e6ecu;
    // NOP
label_32e6f0:
    // 0x32e6f0: 0x8f84be20  lw          $a0, -0x41E0($gp)
    ctx->pc = 0x32e6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_32e6f4:
    // 0x32e6f4: 0x2463d650  addiu       $v1, $v1, -0x29B0
    ctx->pc = 0x32e6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956624));
label_32e6f8:
    // 0x32e6f8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x32e6f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_32e6fc:
    // 0x32e6fc: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x32e6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_32e700:
    // 0x32e700: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x32e700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_32e704:
    // 0x32e704: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x32e704u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
label_32e708:
    // 0x32e708: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x32e708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_32e70c:
    // 0x32e70c: 0x2463d660  addiu       $v1, $v1, -0x29A0
    ctx->pc = 0x32e70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956640));
label_32e710:
    // 0x32e710: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x32e710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_32e714:
    // 0x32e714: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x32e714u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_32e718:
    // 0x32e718: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x32e718u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_32e71c:
    // 0x32e71c: 0xaf85be20  sw          $a1, -0x41E0($gp)
    ctx->pc = 0x32e71cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 5));
label_32e720:
    // 0x32e720: 0x8f83becc  lw          $v1, -0x4134($gp)
    ctx->pc = 0x32e720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950604)));
label_32e724:
    // 0x32e724: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x32e724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_32e728:
    // 0x32e728: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_32e72c:
    if (ctx->pc == 0x32E72Cu) {
        ctx->pc = 0x32E72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E728u;
        // 0x32e72c: 0xaf80aed8  sw          $zero, -0x5128($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946520), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E730u;
        goto label_32e730;
    }
    ctx->pc = 0x32E728u;
    {
        const bool branch_taken_0x32e728 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x32E72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E728u;
        // 0x32e72c: 0xaf80aed8  sw          $zero, -0x5128($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946520), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e728) {
            ctx->pc = 0x32E738u;
            goto label_32e738;
        }
    }
    ctx->pc = 0x32E730u;
label_32e730:
    // 0x32e730: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x32e730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_32e734:
    // 0x32e734: 0xaf82aed8  sw          $v0, -0x5128($gp)
    ctx->pc = 0x32e734u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946520), GPR_U32(ctx, 2));
label_32e738:
    // 0x32e738: 0x9f82aedc  lwu         $v0, -0x5124($gp)
    ctx->pc = 0x32e738u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294946524)));
label_32e73c:
    // 0x32e73c: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x32e73cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
label_32e740:
    // 0x32e740: 0x9f84aed8  lwu         $a0, -0x5128($gp)
    ctx->pc = 0x32e740u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294946520)));
label_32e744:
    // 0x32e744: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x32e744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_32e748:
    // 0x32e748: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x32e748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_32e74c:
    // 0x32e74c: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x32e74cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_32e750:
    // 0x32e750: 0x70831b89  pcpyld      $v1, $a0, $v1
    ctx->pc = 0x32e750u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
label_32e754:
    // 0x32e754: 0x8f84be20  lw          $a0, -0x41E0($gp)
    ctx->pc = 0x32e754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_32e758:
    // 0x32e758: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x32e758u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_32e75c:
    // 0x32e75c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x32e75cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_32e760:
    // 0x32e760: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x32e760u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
label_32e764:
    // 0x32e764: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x32e764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_32e768:
    // 0x32e768: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_32e76c:
    if (ctx->pc == 0x32E76Cu) {
        ctx->pc = 0x32E76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E768u;
        // 0x32e76c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E770u;
        goto label_32e770;
    }
    ctx->pc = 0x32E768u;
    {
        const bool branch_taken_0x32e768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E768u;
        // 0x32e76c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e768) {
            ctx->pc = 0x32E7E8u;
            goto label_32e7e8;
        }
    }
    ctx->pc = 0x32E770u;
label_32e770:
    // 0x32e770: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x32e770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
label_32e774:
    // 0x32e774: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x32e774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_32e778:
    // 0x32e778: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x32e778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_32e77c:
    // 0x32e77c: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x32e77cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_32e780:
    // 0x32e780: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x32e780u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_32e784:
    // 0x32e784: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x32e784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_32e788:
    // 0x32e788: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x32e788u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_32e78c:
    // 0x32e78c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x32e78cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_32e790:
    // 0x32e790: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x32e790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_32e794:
    // 0x32e794: 0x34428003  ori         $v0, $v0, 0x8003
    ctx->pc = 0x32e794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32771);
label_32e798:
    // 0x32e798: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x32e798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_32e79c:
    // 0x32e79c: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x32e79cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_32e7a0:
    // 0x32e7a0: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x32e7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
label_32e7a4:
    // 0x32e7a4: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x32e7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_32e7a8:
    // 0x32e7a8: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x32e7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_32e7ac:
    // 0x32e7ac: 0xdf82ae48  ld          $v0, -0x51B8($gp)
    ctx->pc = 0x32e7acu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
label_32e7b0:
    // 0x32e7b0: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x32e7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_32e7b4:
    // 0x32e7b4: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x32e7b4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_32e7b8:
    // 0x32e7b8: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x32e7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
label_32e7bc:
    // 0x32e7bc: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x32e7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_32e7c0:
    // 0x32e7c0: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x32e7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_32e7c4:
    // 0x32e7c4: 0xdf82ae68  ld          $v0, -0x5198($gp)
    ctx->pc = 0x32e7c4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946408)));
label_32e7c8:
    // 0x32e7c8: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x32e7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_32e7cc:
    // 0x32e7cc: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x32e7ccu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_32e7d0:
    // 0x32e7d0: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x32e7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
label_32e7d4:
    // 0x32e7d4: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x32e7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_32e7d8:
    // 0x32e7d8: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x32e7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_32e7dc:
    // 0x32e7dc: 0xdf82ae60  ld          $v0, -0x51A0($gp)
    ctx->pc = 0x32e7dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946400)));
label_32e7e0:
    // 0x32e7e0: 0x1000001b  b           . + 4 + (0x1B << 2)
label_32e7e4:
    if (ctx->pc == 0x32E7E4u) {
        ctx->pc = 0x32E7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E7E0u;
        // 0x32e7e4: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E7E8u;
        goto label_32e7e8;
    }
    ctx->pc = 0x32E7E0u;
    {
        const bool branch_taken_0x32e7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E7E0u;
        // 0x32e7e4: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e7e0) {
            ctx->pc = 0x32E850u;
            goto label_32e850;
        }
    }
    ctx->pc = 0x32E7E8u;
label_32e7e8:
    // 0x32e7e8: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x32e7e8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_32e7ec:
    // 0x32e7ec: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x32e7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_32e7f0:
    // 0x32e7f0: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x32e7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_32e7f4:
    // 0x32e7f4: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x32e7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_32e7f8:
    // 0x32e7f8: 0x70001ca9  por         $v1, $zero, $zero
    ctx->pc = 0x32e7f8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_32e7fc:
    // 0x32e7fc: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x32e7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
label_32e800:
    // 0x32e800: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x32e800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_32e804:
    // 0x32e804: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x32e804u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_32e808:
    // 0x32e808: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x32e808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
label_32e80c:
    // 0x32e80c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x32e80cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_32e810:
    // 0x32e810: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x32e810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_32e814:
    // 0x32e814: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32e814u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32e818:
    // 0x32e818: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x32e818u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_32e81c:
    // 0x32e81c: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x32e81cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
label_32e820:
    // 0x32e820: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x32e820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_32e824:
    // 0x32e824: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x32e824u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_32e828:
    // 0x32e828: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x32e828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_32e82c:
    // 0x32e82c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x32e82cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_32e830:
    // 0x32e830: 0x34428001  ori         $v0, $v0, 0x8001
    ctx->pc = 0x32e830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
label_32e834:
    // 0x32e834: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x32e834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_32e838:
    // 0x32e838: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x32e838u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_32e83c:
    // 0x32e83c: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x32e83cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
label_32e840:
    // 0x32e840: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x32e840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_32e844:
    // 0x32e844: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x32e844u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_32e848:
    // 0x32e848: 0xdf82ae48  ld          $v0, -0x51B8($gp)
    ctx->pc = 0x32e848u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
label_32e84c:
    // 0x32e84c: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x32e84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_32e850:
    // 0x32e850: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x32e850u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_32e854:
    // 0x32e854: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x32e854u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
label_32e858:
    // 0x32e858: 0x24820050  addiu       $v0, $a0, 0x50
    ctx->pc = 0x32e858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
label_32e85c:
    // 0x32e85c: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x32e85cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_32e860:
    // 0x32e860: 0x92630028  lbu         $v1, 0x28($s3)
    ctx->pc = 0x32e860u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 40)));
label_32e864:
    // 0x32e864: 0x30640010  andi        $a0, $v1, 0x10
    ctx->pc = 0x32e864u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_32e868:
    // 0x32e868: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x32e868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_32e86c:
    // 0x32e86c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x32e86cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_32e870:
    // 0x32e870: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x32e870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_32e874:
    // 0x32e874: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x32e874u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_32e878:
    // 0x32e878: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x32e878u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
label_32e87c:
    // 0x32e87c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32e87cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_32e880:
    // 0x32e880: 0xa262002b  sb          $v0, 0x2B($s3)
    ctx->pc = 0x32e880u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 43), (uint8_t)GPR_U32(ctx, 2));
label_32e884:
    // 0x32e884: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x32e884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_32e888:
    // 0x32e888: 0x8f85aed4  lw          $a1, -0x512C($gp)
    ctx->pc = 0x32e888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946516)));
label_32e88c:
    // 0x32e88c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x32e88cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_32e890:
    // 0x32e890: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x32e890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_32e894:
    // 0x32e894: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x32e894u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_32e898:
    // 0x32e898: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32e898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_32e89c:
    // 0x32e89c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x32e89cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32e8a0:
    // 0x32e8a0: 0x10a6000b  beq         $a1, $a2, . + 4 + (0xB << 2)
label_32e8a4:
    if (ctx->pc == 0x32E8A4u) {
        ctx->pc = 0x32E8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E8A0u;
        // 0x32e8a4: 0x6203c  dsll32      $a0, $a2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E8A8u;
        goto label_32e8a8;
    }
    ctx->pc = 0x32E8A0u;
    {
        const bool branch_taken_0x32e8a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x32E8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E8A0u;
        // 0x32e8a4: 0x6203c  dsll32      $a0, $a2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e8a0) {
            ctx->pc = 0x32E8D0u;
            goto label_32e8d0;
        }
    }
    ctx->pc = 0x32E8A8u;
label_32e8a8:
    // 0x32e8a8: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x32e8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
label_32e8ac:
    // 0x32e8ac: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x32e8acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_32e8b0:
    // 0x32e8b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32e8b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32e8b4:
    // 0x32e8b4: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x32e8b4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
label_32e8b8:
    // 0x32e8b8: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x32e8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_32e8bc:
    // 0x32e8bc: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x32e8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_32e8c0:
    // 0x32e8c0: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x32e8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_32e8c4:
    // 0x32e8c4: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x32e8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_32e8c8:
    // 0x32e8c8: 0xaf86aed4  sw          $a2, -0x512C($gp)
    ctx->pc = 0x32e8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946516), GPR_U32(ctx, 6));
label_32e8cc:
    // 0x32e8cc: 0x0  nop
    ctx->pc = 0x32e8ccu;
    // NOP
label_32e8d0:
    // 0x32e8d0: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x32e8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_32e8d4:
    // 0x32e8d4: 0x3c070200  lui         $a3, 0x200
    ctx->pc = 0x32e8d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)512 << 16));
label_32e8d8:
    // 0x32e8d8: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x32e8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_32e8dc:
    // 0x32e8dc: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x32e8dcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
label_32e8e0:
    // 0x32e8e0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x32e8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32e8e4:
    // 0x32e8e4: 0x3c060300  lui         $a2, 0x300
    ctx->pc = 0x32e8e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)768 << 16));
label_32e8e8:
    // 0x32e8e8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x32e8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_32e8ec:
    // 0x32e8ec: 0x24a90018  addiu       $t1, $a1, 0x18
    ctx->pc = 0x32e8ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
label_32e8f0:
    // 0x32e8f0: 0x9d240008  lwu         $a0, 0x8($t1)
    ctx->pc = 0x32e8f0u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 9), 8)));
label_32e8f4:
    // 0x32e8f4: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x32e8f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_32e8f8:
    // 0x32e8f8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x32e8f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_32e8fc:
    // 0x32e8fc: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x32e8fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_32e900:
    // 0x32e900: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x32e900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_32e904:
    // 0x32e904: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x32e904u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
label_32e908:
    // 0x32e908: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x32e908u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
label_32e90c:
    // 0x32e90c: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x32e90cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_32e910:
    // 0x32e910: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x32e910u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_32e914:
    // 0x32e914: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x32e914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_32e918:
    // 0x32e918: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x32e918u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_32e91c:
    // 0x32e91c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x32e91cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_32e920:
    // 0x32e920: 0x42000039  di
    ctx->pc = 0x32e920u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
label_32e924:
    // 0x32e924: 0x40f  sync.p
    ctx->pc = 0x32e924u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_32e928:
    // 0x32e928: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x32e928u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
label_32e92c:
    // 0x32e92c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x32e92cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_32e930:
    // 0x32e930: 0x0  nop
    ctx->pc = 0x32e930u;
    // NOP
label_32e934:
    // 0x32e934: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_32e938:
    if (ctx->pc == 0x32E938u) {
        ctx->pc = 0x32E93Cu;
        goto label_32e93c;
    }
    ctx->pc = 0x32E934u;
    {
        const bool branch_taken_0x32e934 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32e934) {
            ctx->pc = 0x32E920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32e920;
        }
    }
    ctx->pc = 0x32E93Cu;
label_32e93c:
    // 0x32e93c: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x32e93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_32e940:
    // 0x32e940: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32e940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_32e944:
    // 0x32e944: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x32e944u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
label_32e948:
    // 0x32e948: 0x42000038  ei
    ctx->pc = 0x32e948u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_32e94c:
    // 0x32e94c: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x32e94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_32e950:
    // 0x32e950: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32e950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32e954:
    // 0x32e954: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32e954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_32e958:
    // 0x32e958: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_32e95c:
    if (ctx->pc == 0x32E95Cu) {
        ctx->pc = 0x32E95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E958u;
        // 0x32e95c: 0xad220004  sw          $v0, 0x4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E960u;
        goto label_32e960;
    }
    ctx->pc = 0x32E958u;
    {
        const bool branch_taken_0x32e958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x32E95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E958u;
        // 0x32e95c: 0xad220004  sw          $v0, 0x4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e958) {
            ctx->pc = 0x32E968u;
            goto label_32e968;
        }
    }
    ctx->pc = 0x32E960u;
label_32e960:
    // 0x32e960: 0xc10a762  jal         func_429D88
label_32e964:
    if (ctx->pc == 0x32E964u) {
        ctx->pc = 0x32E964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E960u;
        // 0x32e964: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E968u;
        goto label_32e968;
    }
    ctx->pc = 0x32E960u;
    SET_GPR_U32(ctx, 31, 0x32E968u);
    ctx->pc = 0x32E964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E960u;
    // 0x32e964: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x429D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x429D88u, 0x32E960u, 0x32E968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E968u;
label_32e968:
    // 0x32e968: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x32e968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32e96c:
    // 0x32e96c: 0xc10a322  jal         func_428C88
label_32e970:
    if (ctx->pc == 0x32E970u) {
        ctx->pc = 0x32E970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E96Cu;
        // 0x32e970: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E974u;
        goto label_32e974;
    }
    ctx->pc = 0x32E96Cu;
    SET_GPR_U32(ctx, 31, 0x32E974u);
    ctx->pc = 0x32E970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E96Cu;
    // 0x32e970: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x32E96Cu, 0x32E974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E974u;
label_32e974:
    // 0x32e974: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x32e974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
label_32e978:
    // 0x32e978: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32e978u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32e97c:
    // 0x32e97c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x32e97cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_32e980:
    // 0x32e980: 0x70621cc8  ppacw       $v1, $v1, $v0
    ctx->pc = 0x32e980u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_32e984:
    // 0x32e984: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x32e984u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_32e988:
    // 0x32e988: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x32e988u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
label_32e98c:
    // 0x32e98c: 0x704414c8  ppacw       $v0, $v0, $a0
    ctx->pc = 0x32e98cu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
label_32e990:
    // 0x32e990: 0x70621cc8  ppacw       $v1, $v1, $v0
    ctx->pc = 0x32e990u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_32e994:
    // 0x32e994: 0x8f84be20  lw          $a0, -0x41E0($gp)
    ctx->pc = 0x32e994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_32e998:
    // 0x32e998: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x32e998u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_32e99c:
    // 0x32e99c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x32e99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_32e9a0:
    // 0x32e9a0: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x32e9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
label_32e9a4:
    // 0x32e9a4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x32e9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_32e9a8:
    // 0x32e9a8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x32e9a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_32e9ac:
    // 0x32e9ac: 0x34638001  ori         $v1, $v1, 0x8001
    ctx->pc = 0x32e9acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32769);
label_32e9b0:
    // 0x32e9b0: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x32e9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_32e9b4:
    // 0x32e9b4: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x32e9b4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_32e9b8:
    // 0x32e9b8: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x32e9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_32e9bc:
    // 0x32e9bc: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x32e9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_32e9c0:
    // 0x32e9c0: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x32e9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_32e9c4:
    // 0x32e9c4: 0x2403003d  addiu       $v1, $zero, 0x3D
    ctx->pc = 0x32e9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
label_32e9c8:
    // 0x32e9c8: 0xdf82ae58  ld          $v0, -0x51A8($gp)
    ctx->pc = 0x32e9c8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946392)));
label_32e9cc:
    // 0x32e9cc: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x32e9ccu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_32e9d0:
    // 0x32e9d0: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x32e9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
label_32e9d4:
    // 0x32e9d4: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x32e9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_32e9d8:
    // 0x32e9d8: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x32e9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
label_32e9dc:
    // 0x32e9dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32e9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32e9e0:
    // 0x32e9e0: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x32e9e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_32e9e4:
    // 0x32e9e4: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x32e9e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_32e9e8:
    // 0x32e9e8: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x32e9e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_32e9ec:
    // 0x32e9ec: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x32e9ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_32e9f0:
    // 0x32e9f0: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x32e9f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_32e9f4:
    // 0x32e9f4: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x32e9f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_32e9f8:
    // 0x32e9f8: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x32e9f8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_32e9fc:
    // 0x32e9fc: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x32e9fcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_32ea00:
    // 0x32ea00: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x32ea00u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_32ea04:
    // 0x32ea04: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x32ea04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_32ea08:
    // 0x32ea08: 0x3e00008  jr          $ra
label_32ea0c:
    if (ctx->pc == 0x32EA0Cu) {
        ctx->pc = 0x32EA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EA08u;
        // 0x32ea0c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32EA10u;
        goto label_32ea10;
    }
    ctx->pc = 0x32EA08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32EA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EA08u;
        // 0x32ea0c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32EA08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32EA10u;
label_32ea10:
    // 0x32ea10: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x32ea10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_32ea14:
    // 0x32ea14: 0x8f82a634  lw          $v0, -0x59CC($gp)
    ctx->pc = 0x32ea14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944308)));
label_32ea18:
    // 0x32ea18: 0x7fb30110  sq          $s3, 0x110($sp)
    ctx->pc = 0x32ea18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 19));
label_32ea1c:
    // 0x32ea1c: 0x7fb500f0  sq          $s5, 0xF0($sp)
    ctx->pc = 0x32ea1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 21));
label_32ea20:
    // 0x32ea20: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x32ea20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32ea24:
    // 0x32ea24: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x32ea24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
label_32ea28:
    // 0x32ea28: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x32ea28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
label_32ea2c:
    // 0x32ea2c: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x32ea2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
label_32ea30:
    // 0x32ea30: 0x7fb40100  sq          $s4, 0x100($sp)
    ctx->pc = 0x32ea30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 20));
label_32ea34:
    // 0x32ea34: 0x7fb600e0  sq          $s6, 0xE0($sp)
    ctx->pc = 0x32ea34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 22));
label_32ea38:
    // 0x32ea38: 0x7fb700d0  sq          $s7, 0xD0($sp)
    ctx->pc = 0x32ea38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 23));
label_32ea3c:
    // 0x32ea3c: 0x7fbe00c0  sq          $fp, 0xC0($sp)
    ctx->pc = 0x32ea3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 30));
label_32ea40:
    // 0x32ea40: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x32ea40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_32ea44:
    // 0x32ea44: 0x8e63002c  lw          $v1, 0x2C($s3)
    ctx->pc = 0x32ea44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_32ea48:
    // 0x32ea48: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x32ea48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_32ea4c:
    // 0x32ea4c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x32ea4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_32ea50:
    // 0x32ea50: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x32ea50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32ea54:
    // 0x32ea54: 0xc4e1000c  lwc1        $f1, 0xC($a3)
    ctx->pc = 0x32ea54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_32ea58:
    // 0x32ea58: 0xc4e00010  lwc1        $f0, 0x10($a3)
    ctx->pc = 0x32ea58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32ea5c:
    // 0x32ea5c: 0x8cf10004  lw          $s1, 0x4($a3)
    ctx->pc = 0x32ea5cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_32ea60:
    // 0x32ea60: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x32ea60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_32ea64:
    // 0x32ea64: 0x44150800  mfc1        $s5, $f1
    ctx->pc = 0x32ea64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
label_32ea68:
    // 0x32ea68: 0x16200002  bnez        $s1, . + 4 + (0x2 << 2)
label_32ea6c:
    if (ctx->pc == 0x32EA6Cu) {
        ctx->pc = 0x32EA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EA68u;
        // 0x32ea6c: 0x8ce40000  lw          $a0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32EA70u;
        goto label_32ea70;
    }
    ctx->pc = 0x32EA68u;
    {
        const bool branch_taken_0x32ea68 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x32EA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EA68u;
        // 0x32ea6c: 0x8ce40000  lw          $a0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ea68) {
            ctx->pc = 0x32EA74u;
            goto label_32ea74;
        }
    }
    ctx->pc = 0x32EA70u;
label_32ea70:
    // 0x32ea70: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x32ea70u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_32ea74:
    // 0x32ea74: 0xdf82ae48  ld          $v0, -0x51B8($gp)
    ctx->pc = 0x32ea74u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
label_32ea78:
    // 0x32ea78: 0x3c030007  lui         $v1, 0x7
    ctx->pc = 0x32ea78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7 << 16));
label_32ea7c:
    // 0x32ea7c: 0xdce50078  ld          $a1, 0x78($a3)
    ctx->pc = 0x32ea7cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 7), 120)));
label_32ea80:
    // 0x32ea80: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x32ea80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_32ea84:
    // 0x32ea84: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x32ea84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_32ea88:
    // 0x32ea88: 0x8cf00040  lw          $s0, 0x40($a3)
    ctx->pc = 0x32ea88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 64)));
label_32ea8c:
    // 0x32ea8c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x32ea8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_32ea90:
    // 0x32ea90: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x32ea90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32ea94:
    // 0x32ea94: 0xffa20098  sd          $v0, 0x98($sp)
    ctx->pc = 0x32ea94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 2));
label_32ea98:
    // 0x32ea98: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x32ea98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_32ea9c:
    // 0x32ea9c: 0xdf82ae38  ld          $v0, -0x51C8($gp)
    ctx->pc = 0x32ea9cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946360)));
label_32eaa0:
    // 0x32eaa0: 0x8cf70048  lw          $s7, 0x48($a3)
    ctx->pc = 0x32eaa0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 72)));
label_32eaa4:
    // 0x32eaa4: 0x8cf20044  lw          $s2, 0x44($a3)
    ctx->pc = 0x32eaa4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 68)));
label_32eaa8:
    // 0x32eaa8: 0xdcfe0068  ld          $fp, 0x68($a3)
    ctx->pc = 0x32eaa8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 7), 104)));
label_32eaac:
    // 0x32eaac: 0xdcf60070  ld          $s6, 0x70($a3)
    ctx->pc = 0x32eaacu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 7), 112)));
label_32eab0:
    // 0x32eab0: 0xffa00090  sd          $zero, 0x90($sp)
    ctx->pc = 0x32eab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 0));
label_32eab4:
    // 0x32eab4: 0xc0cacc6  jal         func_32B318
label_32eab8:
    if (ctx->pc == 0x32EAB8u) {
        ctx->pc = 0x32EAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EAB4u;
        // 0x32eab8: 0xffa200a0  sd          $v0, 0xA0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32EABCu;
        goto label_32eabc;
    }
    ctx->pc = 0x32EAB4u;
    SET_GPR_U32(ctx, 31, 0x32EABCu);
    ctx->pc = 0x32EAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EAB4u;
    // 0x32eab8: 0xffa200a0  sd          $v0, 0xA0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B318u, 0x32EAB4u, 0x32EABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EABCu;
label_32eabc:
    // 0x32eabc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32eabcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32eac0:
    // 0x32eac0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x32eac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_32eac4:
    // 0x32eac4: 0xc0cacc6  jal         func_32B318
label_32eac8:
    if (ctx->pc == 0x32EAC8u) {
        ctx->pc = 0x32EAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EAC4u;
        // 0x32eac8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32EACCu;
        goto label_32eacc;
    }
    ctx->pc = 0x32EAC4u;
    SET_GPR_U32(ctx, 31, 0x32EACCu);
    ctx->pc = 0x32EAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EAC4u;
    // 0x32eac8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B318u, 0x32EAC4u, 0x32EACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EACCu;
label_32eacc:
    // 0x32eacc: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x32eaccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_32ead0:
    // 0x32ead0: 0xc780a6e4  lwc1        $f0, -0x591C($gp)
    ctx->pc = 0x32ead0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294944484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32ead4:
    // 0x32ead4: 0x8c62e880  lw          $v0, -0x1780($v1)
    ctx->pc = 0x32ead4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961280)));
label_32ead8:
    // 0x32ead8: 0xc4420084  lwc1        $f2, 0x84($v0)
    ctx->pc = 0x32ead8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_32eadc:
    // 0x32eadc: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x32eadcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_32eae0:
    // 0x32eae0: 0x0  nop
    ctx->pc = 0x32eae0u;
    // NOP
label_32eae4:
    // 0x32eae4: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
label_32eae8:
    if (ctx->pc == 0x32EAE8u) {
        ctx->pc = 0x32EAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EAE4u;
        // 0x32eae8: 0xffa00080  sd          $zero, 0x80($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32EAECu;
        goto label_32eaec;
    }
    ctx->pc = 0x32EAE4u;
    {
        const bool branch_taken_0x32eae4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32eae4) {
            ctx->pc = 0x32EAE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32EAE4u;
            // 0x32eae8: 0xffa00080  sd          $zero, 0x80($sp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32EB0Cu;
            goto label_32eb0c;
        }
    }
    ctx->pc = 0x32EAECu;
label_32eaec:
    // 0x32eaec: 0xc4400080  lwc1        $f0, 0x80($v0)
    ctx->pc = 0x32eaecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32eaf0:
    // 0x32eaf0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x32eaf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_32eaf4:
    // 0x32eaf4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x32eaf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_32eaf8:
    // 0x32eaf8: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x32eaf8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_32eafc:
    // 0x32eafc: 0xe782a6e4  swc1        $f2, -0x591C($gp)
    ctx->pc = 0x32eafcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294944484), bits); }
label_32eb00:
    // 0x32eb00: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x32eb00u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_32eb04:
    // 0x32eb04: 0xe781a6e0  swc1        $f1, -0x5920($gp)
    ctx->pc = 0x32eb04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294944480), bits); }
label_32eb08:
    // 0x32eb08: 0xffa00080  sd          $zero, 0x80($sp)
    ctx->pc = 0x32eb08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 0));
label_32eb0c:
    // 0x32eb0c: 0xffa00088  sd          $zero, 0x88($sp)
    ctx->pc = 0x32eb0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 0));
label_32eb10:
    // 0x32eb10: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_32eb14:
    if (ctx->pc == 0x32EB14u) {
        ctx->pc = 0x32EB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EB10u;
        // 0x32eb14: 0xaf80bec4  sw          $zero, -0x413C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950596), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32EB18u;
        goto label_32eb18;
    }
    ctx->pc = 0x32EB10u;
    {
        const bool branch_taken_0x32eb10 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x32EB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EB10u;
        // 0x32eb14: 0xaf80bec4  sw          $zero, -0x413C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950596), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32eb10) {
            ctx->pc = 0x32EB40u;
            goto label_32eb40;
        }
    }
    ctx->pc = 0x32EB18u;
label_32eb18:
    // 0x32eb18: 0xc110e98  jal         func_443A60
label_32eb1c:
    if (ctx->pc == 0x32EB1Cu) {
        ctx->pc = 0x32EB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EB18u;
        // 0x32eb1c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32EB20u;
        goto label_32eb20;
    }
    ctx->pc = 0x32EB18u;
    SET_GPR_U32(ctx, 31, 0x32EB20u);
    ctx->pc = 0x32EB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EB18u;
    // 0x32eb1c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443A60u, 0x32EB18u, 0x32EB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EB20u;
label_32eb20:
    // 0x32eb20: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x32eb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_32eb24:
    // 0x32eb24: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x32eb24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_32eb28:
    // 0x32eb28: 0x90430023  lbu         $v1, 0x23($v0)
    ctx->pc = 0x32eb28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 35)));
label_32eb2c:
    // 0x32eb2c: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x32eb2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_32eb30:
    // 0x32eb30: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
label_32eb34:
    if (ctx->pc == 0x32EB34u) {
        ctx->pc = 0x32EB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EB30u;
        // 0x32eb34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32EB38u;
        goto label_32eb38;
    }
    ctx->pc = 0x32EB30u;
    {
        const bool branch_taken_0x32eb30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x32EB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EB30u;
        // 0x32eb34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32eb30) {
            ctx->pc = 0x32EB40u;
            goto label_32eb40;
        }
    }
    ctx->pc = 0x32EB38u;
label_32eb38:
    // 0x32eb38: 0xaf82bec4  sw          $v0, -0x413C($gp)
    ctx->pc = 0x32eb38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950596), GPR_U32(ctx, 2));
label_32eb3c:
    // 0x32eb3c: 0x0  nop
    ctx->pc = 0x32eb3cu;
    // NOP
label_32eb40:
    // 0x32eb40: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_32eb44:
    if (ctx->pc == 0x32EB44u) {
        ctx->pc = 0x32EB48u;
        goto label_32eb48;
    }
    ctx->pc = 0x32EB40u;
    {
        const bool branch_taken_0x32eb40 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x32eb40) {
            ctx->pc = 0x32EB5Cu;
            goto label_32eb5c;
        }
    }
    ctx->pc = 0x32EB48u;
label_32eb48:
    // 0x32eb48: 0xc110e98  jal         func_443A60
label_32eb4c:
    if (ctx->pc == 0x32EB4Cu) {
        ctx->pc = 0x32EB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EB48u;
        // 0x32eb4c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32EB50u;
        goto label_32eb50;
    }
    ctx->pc = 0x32EB48u;
    SET_GPR_U32(ctx, 31, 0x32EB50u);
    ctx->pc = 0x32EB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EB48u;
    // 0x32eb4c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443A60u, 0x32EB48u, 0x32EB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EB50u;
label_32eb50:
    // 0x32eb50: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x32eb50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_32eb54:
    // 0x32eb54: 0xc110b7e  jal         func_442DF8
label_32eb58:
    if (ctx->pc == 0x32EB58u) {
        ctx->pc = 0x32EB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EB54u;
        // 0x32eb58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32EB5Cu;
        goto label_32eb5c;
    }
    ctx->pc = 0x32EB54u;
    SET_GPR_U32(ctx, 31, 0x32EB5Cu);
    ctx->pc = 0x32EB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EB54u;
    // 0x32eb58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x442DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x442DF8u, 0x32EB54u, 0x32EB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EB5Cu;
label_32eb5c:
    // 0x32eb5c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_32eb60:
    if (ctx->pc == 0x32EB60u) {
        ctx->pc = 0x32EB64u;
        goto label_32eb64;
    }
    ctx->pc = 0x32EB5Cu;
    {
        const bool branch_taken_0x32eb5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x32eb5c) {
            ctx->pc = 0x32EB70u;
            goto label_32eb70;
        }
    }
    ctx->pc = 0x32EB64u;
label_32eb64:
    // 0x32eb64: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x32eb64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_32eb68:
    // 0x32eb68: 0xc110b7e  jal         func_442DF8
label_32eb6c:
    if (ctx->pc == 0x32EB6Cu) {
        ctx->pc = 0x32EB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EB68u;
        // 0x32eb6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32EB70u;
        goto label_32eb70;
    }
    ctx->pc = 0x32EB68u;
    SET_GPR_U32(ctx, 31, 0x32EB70u);
    ctx->pc = 0x32EB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EB68u;
    // 0x32eb6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x442DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x442DF8u, 0x32EB68u, 0x32EB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EB70u;
label_32eb70:
    // 0x32eb70: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_32eb74:
    if (ctx->pc == 0x32EB74u) {
        ctx->pc = 0x32EB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EB70u;
        // 0x32eb74: 0x8f82beb8  lw          $v0, -0x4148($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32EB78u;
        goto label_32eb78;
    }
    ctx->pc = 0x32EB70u;
    {
        const bool branch_taken_0x32eb70 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x32EB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EB70u;
        // 0x32eb74: 0x8f82beb8  lw          $v0, -0x4148($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32eb70) {
            ctx->pc = 0x32EB94u;
            goto label_32eb94;
        }
    }
    ctx->pc = 0x32EB78u;
label_32eb78:
    // 0x32eb78: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x32eb78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_32eb7c:
    // 0x32eb7c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x32eb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_32eb80:
    // 0x32eb80: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x32eb80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_32eb84:
    // 0x32eb84: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_32eb88:
    if (ctx->pc == 0x32EB88u) {
        ctx->pc = 0x32EB8Cu;
        goto label_32eb8c;
    }
    ctx->pc = 0x32EB84u;
    {
        const bool branch_taken_0x32eb84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32eb84) {
            ctx->pc = 0x32EB94u;
            goto label_32eb94;
        }
    }
    ctx->pc = 0x32EB8Cu;
label_32eb8c:
    // 0x32eb8c: 0xc110b7e  jal         func_442DF8
label_32eb90:
    if (ctx->pc == 0x32EB90u) {
        ctx->pc = 0x32EB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EB8Cu;
        // 0x32eb90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32EB94u;
        goto label_32eb94;
    }
    ctx->pc = 0x32EB8Cu;
    SET_GPR_U32(ctx, 31, 0x32EB94u);
    ctx->pc = 0x32EB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EB8Cu;
    // 0x32eb90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x442DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x442DF8u, 0x32EB8Cu, 0x32EB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EB94u;
label_32eb94:
    // 0x32eb94: 0x12200027  beqz        $s1, . + 4 + (0x27 << 2)
label_32eb98:
    if (ctx->pc == 0x32EB98u) {
        ctx->pc = 0x32EB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EB94u;
        // 0x32eb98: 0x8f82beb8  lw          $v0, -0x4148($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32EB9Cu;
        goto label_32eb9c;
    }
    ctx->pc = 0x32EB94u;
    {
        const bool branch_taken_0x32eb94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x32EB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EB94u;
        // 0x32eb98: 0x8f82beb8  lw          $v0, -0x4148($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32eb94) {
            ctx->pc = 0x32EC34u;
            goto label_32ec34;
        }
    }
    ctx->pc = 0x32EB9Cu;
label_32eb9c:
    // 0x32eb9c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x32eb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_32eba0:
    // 0x32eba0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x32eba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_32eba4:
    // 0x32eba4: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x32eba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_32eba8:
    // 0x32eba8: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_32ebac:
    if (ctx->pc == 0x32EBACu) {
        ctx->pc = 0x32EBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EBA8u;
        // 0x32ebac: 0xdf82ae80  ld          $v0, -0x5180($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32EBB0u;
        goto label_32ebb0;
    }
    ctx->pc = 0x32EBA8u;
    {
        const bool branch_taken_0x32eba8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32EBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EBA8u;
        // 0x32ebac: 0xdf82ae80  ld          $v0, -0x5180($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32eba8) {
            ctx->pc = 0x32EBBCu;
            goto label_32ebbc;
        }
    }
    ctx->pc = 0x32EBB0u;
label_32ebb0:
    // 0x32ebb0: 0xc110b7e  jal         func_442DF8
label_32ebb4:
    if (ctx->pc == 0x32EBB4u) {
        ctx->pc = 0x32EBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EBB0u;
        // 0x32ebb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32EBB8u;
        goto label_32ebb8;
    }
    ctx->pc = 0x32EBB0u;
    SET_GPR_U32(ctx, 31, 0x32EBB8u);
    ctx->pc = 0x32EBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EBB0u;
    // 0x32ebb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x442DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x442DF8u, 0x32EBB0u, 0x32EBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EBB8u;
label_32ebb8:
    // 0x32ebb8: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x32ebb8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
label_32ebbc:
    // 0x32ebbc: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x32ebbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_32ebc0:
    // 0x32ebc0: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x32ebc0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_32ebc4:
    // 0x32ebc4: 0x27a50084  addiu       $a1, $sp, 0x84
    ctx->pc = 0x32ebc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
label_32ebc8:
    // 0x32ebc8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32ebc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_32ebcc:
    // 0x32ebcc: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x32ebccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_32ebd0:
    // 0x32ebd0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x32ebd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_32ebd4:
    // 0x32ebd4: 0xaf87bec0  sw          $a3, -0x4140($gp)
    ctx->pc = 0x32ebd4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950592), GPR_U32(ctx, 7));
label_32ebd8:
    // 0x32ebd8: 0xc110f4c  jal         func_443D30
label_32ebdc:
    if (ctx->pc == 0x32EBDCu) {
        ctx->pc = 0x32EBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EBD8u;
        // 0x32ebdc: 0xff82ae80  sd          $v0, -0x5180($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294946432), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32EBE0u;
        goto label_32ebe0;
    }
    ctx->pc = 0x32EBD8u;
    SET_GPR_U32(ctx, 31, 0x32EBE0u);
    ctx->pc = 0x32EBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EBD8u;
    // 0x32ebdc: 0xff82ae80  sd          $v0, -0x5180($gp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946432), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443D30u, 0x32EBD8u, 0x32EBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EBE0u;
label_32ebe0:
    // 0x32ebe0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x32ebe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_32ebe4:
    // 0x32ebe4: 0x2785ae68  addiu       $a1, $gp, -0x5198
    ctx->pc = 0x32ebe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946408));
label_32ebe8:
    // 0x32ebe8: 0xc110f54  jal         func_443D50
label_32ebec:
    if (ctx->pc == 0x32EBECu) {
        ctx->pc = 0x32EBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EBE8u;
        // 0x32ebec: 0x92260050  lbu         $a2, 0x50($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32EBF0u;
        goto label_32ebf0;
    }
    ctx->pc = 0x32EBE8u;
    SET_GPR_U32(ctx, 31, 0x32EBF0u);
    ctx->pc = 0x32EBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EBE8u;
    // 0x32ebec: 0x92260050  lbu         $a2, 0x50($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443D50u, 0x32EBE8u, 0x32EBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EBF0u;
label_32ebf0:
    // 0x32ebf0: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x32ebf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_32ebf4:
    // 0x32ebf4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x32ebf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_32ebf8:
    // 0x32ebf8: 0x30620f00  andi        $v0, $v1, 0xF00
    ctx->pc = 0x32ebf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3840);
label_32ebfc:
    // 0x32ebfc: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x32ebfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_32ec00:
    // 0x32ec00: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
label_32ec04:
    if (ctx->pc == 0x32EC04u) {
        ctx->pc = 0x32EC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EC00u;
        // 0x32ec04: 0xff80ae60  sd          $zero, -0x51A0($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294946400), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32EC08u;
        goto label_32ec08;
    }
    ctx->pc = 0x32EC00u;
    {
        const bool branch_taken_0x32ec00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x32EC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EC00u;
        // 0x32ec04: 0xff80ae60  sd          $zero, -0x51A0($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294946400), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ec00) {
            ctx->pc = 0x32EC10u;
            goto label_32ec10;
        }
    }
    ctx->pc = 0x32EC08u;
label_32ec08:
    // 0x32ec08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32ec08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32ec0c:
    // 0x32ec0c: 0xff82ae60  sd          $v0, -0x51A0($gp)
    ctx->pc = 0x32ec0cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946400), GPR_U64(ctx, 2));
label_32ec10:
    // 0x32ec10: 0x3062f000  andi        $v0, $v1, 0xF000
    ctx->pc = 0x32ec10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61440);
label_32ec14:
    // 0x32ec14: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x32ec14u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
label_32ec18:
    // 0x32ec18: 0x1444000c  bne         $v0, $a0, . + 4 + (0xC << 2)
label_32ec1c:
    if (ctx->pc == 0x32EC1Cu) {
        ctx->pc = 0x32EC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EC18u;
        // 0x32ec1c: 0xdf82ae48  ld          $v0, -0x51B8($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32EC20u;
        goto label_32ec20;
    }
    ctx->pc = 0x32EC18u;
    {
        const bool branch_taken_0x32ec18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x32EC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EC18u;
        // 0x32ec1c: 0xdf82ae48  ld          $v0, -0x51B8($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ec18) {
            ctx->pc = 0x32EC4Cu;
            goto label_32ec4c;
        }
    }
    ctx->pc = 0x32EC20u;
label_32ec20:
    // 0x32ec20: 0xdf82ae60  ld          $v0, -0x51A0($gp)
    ctx->pc = 0x32ec20u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946400)));
label_32ec24:
    // 0x32ec24: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x32ec24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_32ec28:
    // 0x32ec28: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32ec28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_32ec2c:
    // 0x32ec2c: 0x10000006  b           . + 4 + (0x6 << 2)
label_32ec30:
    if (ctx->pc == 0x32EC30u) {
        ctx->pc = 0x32EC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EC2Cu;
        // 0x32ec30: 0xff82ae60  sd          $v0, -0x51A0($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294946400), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32EC34u;
        goto label_32ec34;
    }
    ctx->pc = 0x32EC2Cu;
    {
        const bool branch_taken_0x32ec2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32EC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EC2Cu;
        // 0x32ec30: 0xff82ae60  sd          $v0, -0x51A0($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294946400), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ec2c) {
            ctx->pc = 0x32EC48u;
            goto label_32ec48;
        }
    }
    ctx->pc = 0x32EC34u;
label_32ec34:
    // 0x32ec34: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x32ec34u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
label_32ec38:
    // 0x32ec38: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x32ec38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_32ec3c:
    // 0x32ec3c: 0xaf80bec0  sw          $zero, -0x4140($gp)
    ctx->pc = 0x32ec3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950592), GPR_U32(ctx, 0));
label_32ec40:
    // 0x32ec40: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x32ec40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_32ec44:
    // 0x32ec44: 0xff82ae80  sd          $v0, -0x5180($gp)
    ctx->pc = 0x32ec44u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946432), GPR_U64(ctx, 2));
label_32ec48:
    // 0x32ec48: 0xdf82ae48  ld          $v0, -0x51B8($gp)
    ctx->pc = 0x32ec48u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
label_32ec4c:
    // 0x32ec4c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x32ec4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32ec50:
    // 0x32ec50: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x32ec50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_32ec54:
    // 0x32ec54: 0x12400015  beqz        $s2, . + 4 + (0x15 << 2)
label_32ec58:
    if (ctx->pc == 0x32EC58u) {
        ctx->pc = 0x32EC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EC54u;
        // 0x32ec58: 0xff82ae48  sd          $v0, -0x51B8($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294946376), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32EC5Cu;
        goto label_32ec5c;
    }
    ctx->pc = 0x32EC54u;
    {
        const bool branch_taken_0x32ec54 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x32EC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EC54u;
        // 0x32ec58: 0xff82ae48  sd          $v0, -0x51B8($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294946376), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ec54) {
            ctx->pc = 0x32ECACu;
            goto label_32ecac;
        }
    }
    ctx->pc = 0x32EC5Cu;
label_32ec5c:
    // 0x32ec5c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x32ec5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_32ec60:
    // 0x32ec60: 0x27a5008c  addiu       $a1, $sp, 0x8C
    ctx->pc = 0x32ec60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
label_32ec64:
    // 0x32ec64: 0x27a60088  addiu       $a2, $sp, 0x88
    ctx->pc = 0x32ec64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_32ec68:
    // 0x32ec68: 0xc110f4c  jal         func_443D30
label_32ec6c:
    if (ctx->pc == 0x32EC6Cu) {
        ctx->pc = 0x32EC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EC68u;
        // 0x32ec6c: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32EC70u;
        goto label_32ec70;
    }
    ctx->pc = 0x32EC68u;
    SET_GPR_U32(ctx, 31, 0x32EC70u);
    ctx->pc = 0x32EC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EC68u;
    // 0x32ec6c: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443D30u, 0x32EC68u, 0x32EC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EC70u;
label_32ec70:
    // 0x32ec70: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x32ec70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_32ec74:
    // 0x32ec74: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x32ec74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_32ec78:
    // 0x32ec78: 0xc110f54  jal         func_443D50
label_32ec7c:
    if (ctx->pc == 0x32EC7Cu) {
        ctx->pc = 0x32EC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EC78u;
        // 0x32ec7c: 0x92460050  lbu         $a2, 0x50($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32EC80u;
        goto label_32ec80;
    }
    ctx->pc = 0x32EC78u;
    SET_GPR_U32(ctx, 31, 0x32EC80u);
    ctx->pc = 0x32EC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EC78u;
    // 0x32ec7c: 0x92460050  lbu         $a2, 0x50($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443D50u, 0x32EC78u, 0x32EC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EC80u;
label_32ec80:
    // 0x32ec80: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x32ec80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_32ec84:
    // 0x32ec84: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x32ec84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_32ec88:
    // 0x32ec88: 0x30620f00  andi        $v0, $v1, 0xF00
    ctx->pc = 0x32ec88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3840);
label_32ec8c:
    // 0x32ec8c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x32ec8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_32ec90:
    // 0x32ec90: 0x3063f000  andi        $v1, $v1, 0xF000
    ctx->pc = 0x32ec90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61440);
label_32ec94:
    // 0x32ec94: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x32ec94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_32ec98:
    // 0x32ec98: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x32ec98u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
label_32ec9c:
    // 0x32ec9c: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
label_32eca0:
    if (ctx->pc == 0x32ECA0u) {
        ctx->pc = 0x32ECA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EC9Cu;
        // 0x32eca0: 0x2a00b  movn        $s4, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32ECA4u;
        goto label_32eca4;
    }
    ctx->pc = 0x32EC9Cu;
    {
        const bool branch_taken_0x32ec9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x32ECA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EC9Cu;
        // 0x32eca0: 0x2a00b  movn        $s4, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ec9c) {
            ctx->pc = 0x32ECACu;
            goto label_32ecac;
        }
    }
    ctx->pc = 0x32ECA4u;
label_32eca4:
    // 0x32eca4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x32eca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_32eca8:
    // 0x32eca8: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x32eca8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
label_32ecac:
    // 0x32ecac: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_32ecb0:
    if (ctx->pc == 0x32ECB0u) {
        ctx->pc = 0x32ECB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ECACu;
        // 0x32ecb0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32ECB4u;
        goto label_32ecb4;
    }
    ctx->pc = 0x32ECACu;
    {
        const bool branch_taken_0x32ecac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x32ECB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ECACu;
        // 0x32ecb0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ecac) {
            ctx->pc = 0x32ECF0u;
            goto label_32ecf0;
        }
    }
    ctx->pc = 0x32ECB4u;
label_32ecb4:
    // 0x32ecb4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x32ecb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_32ecb8:
    // 0x32ecb8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x32ecb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_32ecbc:
    // 0x32ecbc: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x32ecbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
label_32ecc0:
    // 0x32ecc0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_32ecc4:
    if (ctx->pc == 0x32ECC4u) {
        ctx->pc = 0x32ECC8u;
        goto label_32ecc8;
    }
    ctx->pc = 0x32ECC0u;
    {
        const bool branch_taken_0x32ecc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ecc0) {
            ctx->pc = 0x32ECF0u;
            goto label_32ecf0;
        }
    }
    ctx->pc = 0x32ECC8u;
label_32ecc8:
    // 0x32ecc8: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
label_32eccc:
    if (ctx->pc == 0x32ECCCu) {
        ctx->pc = 0x32ECD0u;
        goto label_32ecd0;
    }
    ctx->pc = 0x32ECC8u;
    {
        const bool branch_taken_0x32ecc8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ecc8) {
            ctx->pc = 0x32ECF0u;
            goto label_32ecf0;
        }
    }
    ctx->pc = 0x32ECD0u;
label_32ecd0:
    // 0x32ecd0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x32ecd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_32ecd4:
    // 0x32ecd4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x32ecd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_32ecd8:
    // 0x32ecd8: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x32ecd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
label_32ecdc:
    // 0x32ecdc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_32ece0:
    if (ctx->pc == 0x32ECE0u) {
        ctx->pc = 0x32ECE4u;
        goto label_32ece4;
    }
    ctx->pc = 0x32ECDCu;
    {
        const bool branch_taken_0x32ecdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ecdc) {
            ctx->pc = 0x32ECF0u;
            goto label_32ecf0;
        }
    }
    ctx->pc = 0x32ECE4u;
label_32ece4:
    // 0x32ece4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x32ece4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_32ece8:
    // 0x32ece8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x32ece8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_32ecec:
    // 0x32ecec: 0xaf82bec0  sw          $v0, -0x4140($gp)
    ctx->pc = 0x32ececu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950592), GPR_U32(ctx, 2));
label_32ecf0:
    // 0x32ecf0: 0xc10a322  jal         func_428C88
label_32ecf4:
    if (ctx->pc == 0x32ECF4u) {
        ctx->pc = 0x32ECF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ECF0u;
        // 0x32ecf4: 0x24050033  addiu       $a1, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32ECF8u;
        goto label_32ecf8;
    }
    ctx->pc = 0x32ECF0u;
    SET_GPR_U32(ctx, 31, 0x32ECF8u);
    ctx->pc = 0x32ECF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32ECF0u;
    // 0x32ecf4: 0x24050033  addiu       $a1, $zero, 0x33 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x32ECF0u, 0x32ECF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32ECF8u;
label_32ecf8:
    // 0x32ecf8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x32ecf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_32ecfc:
    // 0x32ecfc: 0x3463002b  ori         $v1, $v1, 0x2B
    ctx->pc = 0x32ecfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43);
label_32ed00:
    // 0x32ed00: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x32ed00u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32ed04:
    // 0x32ed04: 0x71631b89  pcpyld      $v1, $t3, $v1
    ctx->pc = 0x32ed04u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 11), GPR_VEC(ctx, 3)));
label_32ed08:
    // 0x32ed08: 0x8f85be20  lw          $a1, -0x41E0($gp)
    ctx->pc = 0x32ed08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_32ed0c:
    // 0x32ed0c: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x32ed0cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
label_32ed10:
    // 0x32ed10: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x32ed10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_32ed14:
    // 0x32ed14: 0xaf85be20  sw          $a1, -0x41E0($gp)
    ctx->pc = 0x32ed14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 5));
label_32ed18:
    // 0x32ed18: 0x3c026c14  lui         $v0, 0x6C14
    ctx->pc = 0x32ed18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27668 << 16));
label_32ed1c:
    // 0x32ed1c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x32ed1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_32ed20:
    // 0x32ed20: 0x344203bc  ori         $v0, $v0, 0x3BC
    ctx->pc = 0x32ed20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)956);
label_32ed24:
    // 0x32ed24: 0x34840101  ori         $a0, $a0, 0x101
    ctx->pc = 0x32ed24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)257);
label_32ed28:
    // 0x32ed28: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x32ed28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32ed2c:
    // 0x32ed2c: 0x704414c8  ppacw       $v0, $v0, $a0
    ctx->pc = 0x32ed2cu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
label_32ed30:
    // 0x32ed30: 0x71081cc8  ppacw       $v1, $t0, $t0
    ctx->pc = 0x32ed30u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
label_32ed34:
    // 0x32ed34: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x32ed34u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_32ed38:
    // 0x32ed38: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x32ed38u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
label_32ed3c:
    // 0x32ed3c: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x32ed3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_32ed40:
    // 0x32ed40: 0x9f82a6e4  lwu         $v0, -0x591C($gp)
    ctx->pc = 0x32ed40u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294944484)));
label_32ed44:
    // 0x32ed44: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x32ed44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_32ed48:
    // 0x32ed48: 0x9f84a6e0  lwu         $a0, -0x5920($gp)
    ctx->pc = 0x32ed48u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294944480)));
label_32ed4c:
    // 0x32ed4c: 0x3603e  dsrl32      $t4, $v1, 0
    ctx->pc = 0x32ed4cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) >> (32 + 0));
label_32ed50:
    // 0x32ed50: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x32ed50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_32ed54:
    // 0x32ed54: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x32ed54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_32ed58:
    // 0x32ed58: 0x704c1389  pcpyld      $v0, $v0, $t4
    ctx->pc = 0x32ed58u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 12)));
label_32ed5c:
    // 0x32ed5c: 0x7ca20010  sq          $v0, 0x10($a1)
    ctx->pc = 0x32ed5cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
label_32ed60:
    // 0x32ed60: 0x3c0c1000  lui         $t4, 0x1000
    ctx->pc = 0x32ed60u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)4096 << 16));
label_32ed64:
    // 0x32ed64: 0xc603c  dsll32      $t4, $t4, 0
    ctx->pc = 0x32ed64u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 0));
label_32ed68:
    // 0x32ed68: 0x358c8004  ori         $t4, $t4, 0x8004
    ctx->pc = 0x32ed68u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)32772);
label_32ed6c:
    // 0x32ed6c: 0x240a000e  addiu       $t2, $zero, 0xE
    ctx->pc = 0x32ed6cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_32ed70:
    // 0x32ed70: 0x714c1389  pcpyld      $v0, $t2, $t4
    ctx->pc = 0x32ed70u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 12)));
label_32ed74:
    // 0x32ed74: 0x7ca20020  sq          $v0, 0x20($a1)
    ctx->pc = 0x32ed74u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 2));
label_32ed78:
    // 0x32ed78: 0x24070042  addiu       $a3, $zero, 0x42
    ctx->pc = 0x32ed78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_32ed7c:
    // 0x32ed7c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32ed7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_32ed80:
    // 0x32ed80: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x32ed80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_32ed84:
    // 0x32ed84: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x32ed84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_32ed88:
    // 0x32ed88: 0x70e21389  pcpyld      $v0, $a3, $v0
    ctx->pc = 0x32ed88u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 2)));
label_32ed8c:
    // 0x32ed8c: 0x7ca20030  sq          $v0, 0x30($a1)
    ctx->pc = 0x32ed8cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 2));
label_32ed90:
    // 0x32ed90: 0x24060047  addiu       $a2, $zero, 0x47
    ctx->pc = 0x32ed90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_32ed94:
    // 0x32ed94: 0xdf84ae48  ld          $a0, -0x51B8($gp)
    ctx->pc = 0x32ed94u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
label_32ed98:
    // 0x32ed98: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x32ed98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
label_32ed9c:
    // 0x32ed9c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x32ed9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_32eda0:
    // 0x32eda0: 0x70c41389  pcpyld      $v0, $a2, $a0
    ctx->pc = 0x32eda0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 4)));
label_32eda4:
    // 0x32eda4: 0x7ca20040  sq          $v0, 0x40($a1)
    ctx->pc = 0x32eda4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 64), GPR_VEC(ctx, 2));
label_32eda8:
    // 0x32eda8: 0x2409003d  addiu       $t1, $zero, 0x3D
    ctx->pc = 0x32eda8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
label_32edac:
    // 0x32edac: 0xdf82ae58  ld          $v0, -0x51A8($gp)
    ctx->pc = 0x32edacu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946392)));
label_32edb0:
    // 0x32edb0: 0x71221389  pcpyld      $v0, $t1, $v0
    ctx->pc = 0x32edb0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 2)));
label_32edb4:
    // 0x32edb4: 0x7ca20050  sq          $v0, 0x50($a1)
    ctx->pc = 0x32edb4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 80), GPR_VEC(ctx, 2));
label_32edb8:
    // 0x32edb8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x32edb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_32edbc:
    // 0x32edbc: 0xdfa20080  ld          $v0, 0x80($sp)
    ctx->pc = 0x32edbcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_32edc0:
    // 0x32edc0: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x32edc0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_32edc4:
    // 0x32edc4: 0x7ca20060  sq          $v0, 0x60($a1)
    ctx->pc = 0x32edc4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 96), GPR_VEC(ctx, 2));
label_32edc8:
    // 0x32edc8: 0x3c0c1000  lui         $t4, 0x1000
    ctx->pc = 0x32edc8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)4096 << 16));
label_32edcc:
    // 0x32edcc: 0xc603c  dsll32      $t4, $t4, 0
    ctx->pc = 0x32edccu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 0));
label_32edd0:
    // 0x32edd0: 0x358c8002  ori         $t4, $t4, 0x8002
    ctx->pc = 0x32edd0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)32770);
label_32edd4:
    // 0x32edd4: 0x714c1389  pcpyld      $v0, $t2, $t4
    ctx->pc = 0x32edd4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 12)));
label_32edd8:
    // 0x32edd8: 0x7ca20070  sq          $v0, 0x70($a1)
    ctx->pc = 0x32edd8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 112), GPR_VEC(ctx, 2));
label_32eddc:
    // 0x32eddc: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32eddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_32ede0:
    // 0x32ede0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x32ede0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_32ede4:
    // 0x32ede4: 0x34420048  ori         $v0, $v0, 0x48
    ctx->pc = 0x32ede4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)72);
label_32ede8:
    // 0x32ede8: 0x70e21389  pcpyld      $v0, $a3, $v0
    ctx->pc = 0x32ede8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 2)));
label_32edec:
    // 0x32edec: 0x7ca20080  sq          $v0, 0x80($a1)
    ctx->pc = 0x32edecu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 128), GPR_VEC(ctx, 2));
label_32edf0:
    // 0x32edf0: 0x70c41389  pcpyld      $v0, $a2, $a0
    ctx->pc = 0x32edf0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 4)));
label_32edf4:
    // 0x32edf4: 0x7ca20090  sq          $v0, 0x90($a1)
    ctx->pc = 0x32edf4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 144), GPR_VEC(ctx, 2));
label_32edf8:
    // 0x32edf8: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x32edf8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_32edfc:
    // 0x32edfc: 0x7ca200a0  sq          $v0, 0xA0($a1)
    ctx->pc = 0x32edfcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 160), GPR_VEC(ctx, 2));
label_32ee00:
    // 0x32ee00: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x32ee00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_32ee04:
    // 0x32ee04: 0x7ca200b0  sq          $v0, 0xB0($a1)
    ctx->pc = 0x32ee04u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 176), GPR_VEC(ctx, 2));
label_32ee08:
    // 0x32ee08: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x32ee08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_32ee0c:
    // 0x32ee0c: 0x7ca200c0  sq          $v0, 0xC0($a1)
    ctx->pc = 0x32ee0cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 192), GPR_VEC(ctx, 2));
label_32ee10:
    // 0x32ee10: 0x714c1389  pcpyld      $v0, $t2, $t4
    ctx->pc = 0x32ee10u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 12)));
label_32ee14:
    // 0x32ee14: 0x7ca200d0  sq          $v0, 0xD0($a1)
    ctx->pc = 0x32ee14u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 208), GPR_VEC(ctx, 2));
label_32ee18:
    // 0x32ee18: 0x71361389  pcpyld      $v0, $t1, $s6
    ctx->pc = 0x32ee18u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 22)));
label_32ee1c:
    // 0x32ee1c: 0x7ca200e0  sq          $v0, 0xE0($a1)
    ctx->pc = 0x32ee1cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 224), GPR_VEC(ctx, 2));
label_32ee20:
    // 0x32ee20: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x32ee20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_32ee24:
    // 0x32ee24: 0xdfa20088  ld          $v0, 0x88($sp)
    ctx->pc = 0x32ee24u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_32ee28:
    // 0x32ee28: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x32ee28u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_32ee2c:
    // 0x32ee2c: 0x7ca200f0  sq          $v0, 0xF0($a1)
    ctx->pc = 0x32ee2cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 240), GPR_VEC(ctx, 2));
label_32ee30:
    // 0x32ee30: 0x92630029  lbu         $v1, 0x29($s3)
    ctx->pc = 0x32ee30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 41)));
label_32ee34:
    // 0x32ee34: 0x24040258  addiu       $a0, $zero, 0x258
    ctx->pc = 0x32ee34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
label_32ee38:
    // 0x32ee38: 0x3c073000  lui         $a3, 0x3000
    ctx->pc = 0x32ee38u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)12288 << 16));
label_32ee3c:
    // 0x32ee3c: 0x34e74000  ori         $a3, $a3, 0x4000
    ctx->pc = 0x32ee3cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)16384);
label_32ee40:
    // 0x32ee40: 0x92620028  lbu         $v0, 0x28($s3)
    ctx->pc = 0x32ee40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 40)));
label_32ee44:
    // 0x32ee44: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x32ee44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_32ee48:
    // 0x32ee48: 0x24060412  addiu       $a2, $zero, 0x412
    ctx->pc = 0x32ee48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
label_32ee4c:
    // 0x32ee4c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x32ee4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_32ee50:
    // 0x32ee50: 0x21178  dsll        $v0, $v0, 5
    ctx->pc = 0x32ee50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 5);
label_32ee54:
    // 0x32ee54: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32ee54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_32ee58:
    // 0x32ee58: 0x213f8  dsll        $v0, $v0, 15
    ctx->pc = 0x32ee58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 15);
label_32ee5c:
    // 0x32ee5c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x32ee5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_32ee60:
    // 0x32ee60: 0x2603c  dsll32      $t4, $v0, 0
    ctx->pc = 0x32ee60u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) << (32 + 0));
label_32ee64:
    // 0x32ee64: 0x70cc1389  pcpyld      $v0, $a2, $t4
    ctx->pc = 0x32ee64u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 12)));
label_32ee68:
    // 0x32ee68: 0x7ca20100  sq          $v0, 0x100($a1)
    ctx->pc = 0x32ee68u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 256), GPR_VEC(ctx, 2));
label_32ee6c:
    // 0x32ee6c: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x32ee6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_32ee70:
    // 0x32ee70: 0x7ca20110  sq          $v0, 0x110($a1)
    ctx->pc = 0x32ee70u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 272), GPR_VEC(ctx, 2));
label_32ee74:
    // 0x32ee74: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x32ee74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_32ee78:
    // 0x32ee78: 0x7ca20120  sq          $v0, 0x120($a1)
    ctx->pc = 0x32ee78u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 288), GPR_VEC(ctx, 2));
label_32ee7c:
    // 0x32ee7c: 0xdfac0060  ld          $t4, 0x60($sp)
    ctx->pc = 0x32ee7cu;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_32ee80:
    // 0x32ee80: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x32ee80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_32ee84:
    // 0x32ee84: 0x9fa30068  lwu         $v1, 0x68($sp)
    ctx->pc = 0x32ee84u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_32ee88:
    // 0x32ee88: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x32ee88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_32ee8c:
    // 0x32ee8c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32ee8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_32ee90:
    // 0x32ee90: 0x704c1389  pcpyld      $v0, $v0, $t4
    ctx->pc = 0x32ee90u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 12)));
label_32ee94:
    // 0x32ee94: 0x7ca20130  sq          $v0, 0x130($a1)
    ctx->pc = 0x32ee94u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 304), GPR_VEC(ctx, 2));
label_32ee98:
    // 0x32ee98: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x32ee98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_32ee9c:
    // 0x32ee9c: 0xdc4c27c0  ld          $t4, 0x27C0($v0)
    ctx->pc = 0x32ee9cu;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 2), 10176)));
label_32eea0:
    // 0x32eea0: 0x244327c0  addiu       $v1, $v0, 0x27C0
    ctx->pc = 0x32eea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 10176));
label_32eea4:
    // 0x32eea4: 0xdc620008  ld          $v0, 0x8($v1)
    ctx->pc = 0x32eea4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 8)));
label_32eea8:
    // 0x32eea8: 0x704c1389  pcpyld      $v0, $v0, $t4
    ctx->pc = 0x32eea8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 12)));
label_32eeac:
    // 0x32eeac: 0x7ca20140  sq          $v0, 0x140($a1)
    ctx->pc = 0x32eeacu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 320), GPR_VEC(ctx, 2));
label_32eeb0:
    // 0x32eeb0: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x32eeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
label_32eeb4:
    // 0x32eeb4: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x32eeb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
label_32eeb8:
    // 0x32eeb8: 0x71081cc8  ppacw       $v1, $t0, $t0
    ctx->pc = 0x32eeb8u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
label_32eebc:
    // 0x32eebc: 0x704814c8  ppacw       $v0, $v0, $t0
    ctx->pc = 0x32eebcu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
label_32eec0:
    // 0x32eec0: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x32eec0u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_32eec4:
    // 0x32eec4: 0x7ca20150  sq          $v0, 0x150($a1)
    ctx->pc = 0x32eec4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 336), GPR_VEC(ctx, 2));
label_32eec8:
    // 0x32eec8: 0x3c0c1000  lui         $t4, 0x1000
    ctx->pc = 0x32eec8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)4096 << 16));
label_32eecc:
    // 0x32eecc: 0xc603c  dsll32      $t4, $t4, 0
    ctx->pc = 0x32eeccu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 0));
label_32eed0:
    // 0x32eed0: 0x358c8005  ori         $t4, $t4, 0x8005
    ctx->pc = 0x32eed0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)32773);
label_32eed4:
    // 0x32eed4: 0x714c1389  pcpyld      $v0, $t2, $t4
    ctx->pc = 0x32eed4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 12)));
label_32eed8:
    // 0x32eed8: 0x7ca20160  sq          $v0, 0x160($a1)
    ctx->pc = 0x32eed8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 352), GPR_VEC(ctx, 2));
label_32eedc:
    // 0x32eedc: 0x24020043  addiu       $v0, $zero, 0x43
    ctx->pc = 0x32eedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
label_32eee0:
    // 0x32eee0: 0x705e1389  pcpyld      $v0, $v0, $fp
    ctx->pc = 0x32eee0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 30)));
label_32eee4:
    // 0x32eee4: 0x7ca20170  sq          $v0, 0x170($a1)
    ctx->pc = 0x32eee4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 368), GPR_VEC(ctx, 2));
label_32eee8:
    // 0x32eee8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x32eee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_32eeec:
    // 0x32eeec: 0x70541389  pcpyld      $v0, $v0, $s4
    ctx->pc = 0x32eeecu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 20)));
label_32eef0:
    // 0x32eef0: 0x7ca20180  sq          $v0, 0x180($a1)
    ctx->pc = 0x32eef0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 384), GPR_VEC(ctx, 2));
label_32eef4:
    // 0x32eef4: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x32eef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_32eef8:
    // 0x32eef8: 0xdfa30098  ld          $v1, 0x98($sp)
    ctx->pc = 0x32eef8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_32eefc:
    // 0x32eefc: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x32eefcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_32ef00:
    // 0x32ef00: 0x7ca20190  sq          $v0, 0x190($a1)
    ctx->pc = 0x32ef00u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 400), GPR_VEC(ctx, 2));
label_32ef04:
    // 0x32ef04: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x32ef04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_32ef08:
    // 0x32ef08: 0xdfa20090  ld          $v0, 0x90($sp)
    ctx->pc = 0x32ef08u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_32ef0c:
    // 0x32ef0c: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x32ef0cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_32ef10:
    // 0x32ef10: 0x7ca201a0  sq          $v0, 0x1A0($a1)
    ctx->pc = 0x32ef10u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 416), GPR_VEC(ctx, 2));
label_32ef14:
    // 0x32ef14: 0x2402004f  addiu       $v0, $zero, 0x4F
    ctx->pc = 0x32ef14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
label_32ef18:
    // 0x32ef18: 0xdfa300a0  ld          $v1, 0xA0($sp)
    ctx->pc = 0x32ef18u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_32ef1c:
    // 0x32ef1c: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x32ef1cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_32ef20:
    // 0x32ef20: 0x7ca201b0  sq          $v0, 0x1B0($a1)
    ctx->pc = 0x32ef20u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 432), GPR_VEC(ctx, 2));
label_32ef24:
    // 0x32ef24: 0x24a201c0  addiu       $v0, $a1, 0x1C0
    ctx->pc = 0x32ef24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 448));
label_32ef28:
    // 0x32ef28: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x32ef28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_32ef2c:
    // 0x32ef2c: 0x3c046c01  lui         $a0, 0x6C01
    ctx->pc = 0x32ef2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27649 << 16));
label_32ef30:
    // 0x32ef30: 0x348403fa  ori         $a0, $a0, 0x3FA
    ctx->pc = 0x32ef30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1018);
label_32ef34:
    // 0x32ef34: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x32ef34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_32ef38:
    // 0x32ef38: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x32ef38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
label_32ef3c:
    // 0x32ef3c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x32ef3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_32ef40:
    // 0x32ef40: 0x34840404  ori         $a0, $a0, 0x404
    ctx->pc = 0x32ef40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1028);
label_32ef44:
    // 0x32ef44: 0x708b2389  pcpyld      $a0, $a0, $t3
    ctx->pc = 0x32ef44u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 11)));
label_32ef48:
    // 0x32ef48: 0x7ca401c0  sq          $a0, 0x1C0($a1)
    ctx->pc = 0x32ef48u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 448), GPR_VEC(ctx, 4));
label_32ef4c:
    // 0x32ef4c: 0x24a501d0  addiu       $a1, $a1, 0x1D0
    ctx->pc = 0x32ef4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 464));
label_32ef50:
    // 0x32ef50: 0xaf85be20  sw          $a1, -0x41E0($gp)
    ctx->pc = 0x32ef50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 5));
label_32ef54:
    // 0x32ef54: 0x92620047  lbu         $v0, 0x47($s3)
    ctx->pc = 0x32ef54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 71)));
label_32ef58:
    // 0x32ef58: 0x8f83bec4  lw          $v1, -0x413C($gp)
    ctx->pc = 0x32ef58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950596)));
label_32ef5c:
    // 0x32ef5c: 0x384200ff  xori        $v0, $v0, 0xFF
    ctx->pc = 0x32ef5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)255);
label_32ef60:
    // 0x32ef60: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x32ef60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_32ef64:
    // 0x32ef64: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x32ef64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_32ef68:
    // 0x32ef68: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_32ef6c:
    if (ctx->pc == 0x32EF6Cu) {
        ctx->pc = 0x32EF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EF68u;
        // 0x32ef6c: 0xaf82bec8  sw          $v0, -0x4138($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950600), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32EF70u;
        goto label_32ef70;
    }
    ctx->pc = 0x32EF68u;
    {
        const bool branch_taken_0x32ef68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32EF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EF68u;
        // 0x32ef6c: 0xaf82bec8  sw          $v0, -0x4138($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950600), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ef68) {
            ctx->pc = 0x32EF80u;
            goto label_32ef80;
        }
    }
    ctx->pc = 0x32EF70u;
label_32ef70:
    // 0x32ef70: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x32ef70u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
label_32ef74:
    // 0x32ef74: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x32ef74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_32ef78:
    // 0x32ef78: 0x10000004  b           . + 4 + (0x4 << 2)
label_32ef7c:
    if (ctx->pc == 0x32EF7Cu) {
        ctx->pc = 0x32EF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EF78u;
        // 0x32ef7c: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32EF80u;
        goto label_32ef80;
    }
    ctx->pc = 0x32EF78u;
    {
        const bool branch_taken_0x32ef78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32EF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EF78u;
        // 0x32ef7c: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ef78) {
            ctx->pc = 0x32EF8Cu;
            goto label_32ef8c;
        }
    }
    ctx->pc = 0x32EF80u;
label_32ef80:
    // 0x32ef80: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x32ef80u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
label_32ef84:
    // 0x32ef84: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x32ef84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
label_32ef88:
    // 0x32ef88: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x32ef88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_32ef8c:
    // 0x32ef8c: 0xff82ae80  sd          $v0, -0x5180($gp)
    ctx->pc = 0x32ef8cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946432), GPR_U64(ctx, 2));
label_32ef90:
    // 0x32ef90: 0x92660029  lbu         $a2, 0x29($s3)
    ctx->pc = 0x32ef90u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 41)));
label_32ef94:
    // 0x32ef94: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x32ef94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_32ef98:
    // 0x32ef98: 0x8f82ae80  lw          $v0, -0x5180($gp)
    ctx->pc = 0x32ef98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946432)));
label_32ef9c:
    // 0x32ef9c: 0x3c07fc00  lui         $a3, 0xFC00
    ctx->pc = 0x32ef9cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64512 << 16));
label_32efa0:
    // 0x32efa0: 0x34e77fff  ori         $a3, $a3, 0x7FFF
    ctx->pc = 0x32efa0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32767);
label_32efa4:
    // 0x32efa4: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x32efa4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
label_32efa8:
    // 0x32efa8: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x32efa8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_32efac:
    // 0x32efac: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x32efacu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
label_32efb0:
    // 0x32efb0: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x32efb0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_32efb4:
    // 0x32efb4: 0xdc64d5d0  ld          $a0, -0x2A30($v1)
    ctx->pc = 0x32efb4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 4294956496)));
label_32efb8:
    // 0x32efb8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x32efb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_32efbc:
    // 0x32efbc: 0x2463d5d0  addiu       $v1, $v1, -0x2A30
    ctx->pc = 0x32efbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956496));
label_32efc0:
    // 0x32efc0: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x32efc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
label_32efc4:
    // 0x32efc4: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x32efc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
label_32efc8:
    // 0x32efc8: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x32efc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
label_32efcc:
    // 0x32efcc: 0xdc650008  ld          $a1, 0x8($v1)
    ctx->pc = 0x32efccu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 8)));
label_32efd0:
    // 0x32efd0: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x32efd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_32efd4:
    // 0x32efd4: 0x70a42389  pcpyld      $a0, $a1, $a0
    ctx->pc = 0x32efd4u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_32efd8:
    // 0x32efd8: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x32efd8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_32efdc:
    // 0x32efdc: 0x8f86be20  lw          $a2, -0x41E0($gp)
    ctx->pc = 0x32efdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_32efe0:
    // 0x32efe0: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x32efe0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
label_32efe4:
    // 0x32efe4: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x32efe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_32efe8:
    // 0x32efe8: 0xaf86be20  sw          $a2, -0x41E0($gp)
    ctx->pc = 0x32efe8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 6));
label_32efec:
    // 0x32efec: 0x3c026c01  lui         $v0, 0x6C01
    ctx->pc = 0x32efecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27649 << 16));
label_32eff0:
    // 0x32eff0: 0x344203fb  ori         $v0, $v0, 0x3FB
    ctx->pc = 0x32eff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1019);
label_32eff4:
    // 0x32eff4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x32eff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_32eff8:
    // 0x32eff8: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x32eff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_32effc:
    // 0x32effc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x32effcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_32f000:
    // 0x32f000: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x32f000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
label_32f004:
    // 0x32f004: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32f004u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32f008:
    // 0x32f008: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x32f008u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
label_32f00c:
    // 0x32f00c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x32f00cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_32f010:
    // 0x32f010: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x32f010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_32f014:
    // 0x32f014: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x32f014u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_32f018:
    // 0x32f018: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x32f018u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
label_32f01c:
    // 0x32f01c: 0xc7858054  lwc1        $f5, -0x7FAC($gp)
    ctx->pc = 0x32f01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_32f020:
    // 0x32f020: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x32f020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_32f024:
    // 0x32f024: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_32f028:
    if (ctx->pc == 0x32F028u) {
        ctx->pc = 0x32F028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F024u;
        // 0x32f028: 0x92620044  lbu         $v0, 0x44($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32F02Cu;
        goto label_32f02c;
    }
    ctx->pc = 0x32F024u;
    {
        const bool branch_taken_0x32f024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F024u;
        // 0x32f028: 0x92620044  lbu         $v0, 0x44($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f024) {
            ctx->pc = 0x32F030u;
            goto label_32f030;
        }
    }
    ctx->pc = 0x32F02Cu;
label_32f02c:
    // 0x32f02c: 0xc7858434  lwc1        $f5, -0x7BCC($gp)
    ctx->pc = 0x32f02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_32f030:
    // 0x32f030: 0x92630045  lbu         $v1, 0x45($s3)
    ctx->pc = 0x32f030u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 69)));
label_32f034:
    // 0x32f034: 0x92640046  lbu         $a0, 0x46($s3)
    ctx->pc = 0x32f034u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 70)));
label_32f038:
    // 0x32f038: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x32f038u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_32f03c:
    // 0x32f03c: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x32f03cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_32f040:
    // 0x32f040: 0x92650047  lbu         $a1, 0x47($s3)
    ctx->pc = 0x32f040u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 71)));
label_32f044:
    // 0x32f044: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x32f044u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_32f048:
    // 0x32f048: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x32f048u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_32f04c:
    // 0x32f04c: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x32f04cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_32f050:
    // 0x32f050: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x32f050u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_32f054:
    // 0x32f054: 0xc7818434  lwc1        $f1, -0x7BCC($gp)
    ctx->pc = 0x32f054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_32f058:
    // 0x32f058: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x32f058u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32f05c:
    // 0x32f05c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32f05cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_32f060:
    // 0x32f060: 0x46010182  mul.s       $f6, $f0, $f1
    ctx->pc = 0x32f060u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_32f064:
    // 0x32f064: 0x460519c2  mul.s       $f7, $f3, $f5
    ctx->pc = 0x32f064u;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
label_32f068:
    // 0x32f068: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x32f068u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_32f06c:
    // 0x32f06c: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x32f06cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_32f070:
    // 0x32f070: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x32f070u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
label_32f074:
    // 0x32f074: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x32f074u;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
label_32f078:
    // 0x32f078: 0x46051182  mul.s       $f6, $f2, $f5
    ctx->pc = 0x32f078u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_32f07c:
    // 0x32f07c: 0x460521c2  mul.s       $f7, $f4, $f5
    ctx->pc = 0x32f07cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
label_32f080:
    // 0x32f080: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x32f080u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_32f084:
    // 0x32f084: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x32f084u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_32f088:
    // 0x32f088: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x32f088u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_32f08c:
    // 0x32f08c: 0x7cc20010  sq          $v0, 0x10($a2)
    ctx->pc = 0x32f08cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
label_32f090:
    // 0x32f090: 0x24c30020  addiu       $v1, $a2, 0x20
    ctx->pc = 0x32f090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
label_32f094:
    // 0x32f094: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x32f094u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_32f098:
    // 0x32f098: 0x3c026c01  lui         $v0, 0x6C01
    ctx->pc = 0x32f098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27649 << 16));
label_32f09c:
    // 0x32f09c: 0x344203fc  ori         $v0, $v0, 0x3FC
    ctx->pc = 0x32f09cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1020);
label_32f0a0:
    // 0x32f0a0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x32f0a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_32f0a4:
    // 0x32f0a4: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x32f0a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_32f0a8:
    // 0x32f0a8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x32f0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_32f0ac:
    // 0x32f0ac: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x32f0acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
label_32f0b0:
    // 0x32f0b0: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x32f0b0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
label_32f0b4:
    // 0x32f0b4: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x32f0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 2));
label_32f0b8:
    // 0x32f0b8: 0x24c30030  addiu       $v1, $a2, 0x30
    ctx->pc = 0x32f0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
label_32f0bc:
    // 0x32f0bc: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x32f0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_32f0c0:
    // 0x32f0c0: 0x8e62003c  lw          $v0, 0x3C($s3)
    ctx->pc = 0x32f0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
label_32f0c4:
    // 0x32f0c4: 0xc7848240  lwc1        $f4, -0x7DC0($gp)
    ctx->pc = 0x32f0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_32f0c8:
    // 0x32f0c8: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x32f0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_32f0cc:
    // 0x32f0cc: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x32f0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_32f0d0:
    // 0x32f0d0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x32f0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_32f0d4:
    // 0x32f0d4: 0xc660001c  lwc1        $f0, 0x1C($s3)
    ctx->pc = 0x32f0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32f0d8:
    // 0x32f0d8: 0x46040942  mul.s       $f5, $f1, $f4
    ctx->pc = 0x32f0d8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_32f0dc:
    // 0x32f0dc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x32f0dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_32f0e0:
    // 0x32f0e0: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x32f0e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_32f0e4:
    // 0x32f0e4: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x32f0e4u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
label_32f0e8:
    // 0x32f0e8: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x32f0e8u;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
label_32f0ec:
    // 0x32f0ec: 0x46041982  mul.s       $f6, $f3, $f4
    ctx->pc = 0x32f0ecu;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_32f0f0:
    // 0x32f0f0: 0x46041142  mul.s       $f5, $f2, $f4
    ctx->pc = 0x32f0f0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_32f0f4:
    // 0x32f0f4: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x32f0f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_32f0f8:
    // 0x32f0f8: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x32f0f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_32f0fc:
    // 0x32f0fc: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x32f0fcu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_32f100:
    // 0x32f100: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x32f100u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
label_32f104:
    // 0x32f104: 0x24c30040  addiu       $v1, $a2, 0x40
    ctx->pc = 0x32f104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
label_32f108:
    // 0x32f108: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x32f108u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_32f10c:
    // 0x32f10c: 0x92620028  lbu         $v0, 0x28($s3)
    ctx->pc = 0x32f10cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 40)));
label_32f110:
    // 0x32f110: 0x3c046c03  lui         $a0, 0x6C03
    ctx->pc = 0x32f110u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27651 << 16));
label_32f114:
    // 0x32f114: 0x348403fd  ori         $a0, $a0, 0x3FD
    ctx->pc = 0x32f114u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1021);
label_32f118:
    // 0x32f118: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x32f118u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_32f11c:
    // 0x32f11c: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x32f11cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
label_32f120:
    // 0x32f120: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x32f120u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_32f124:
    // 0x32f124: 0x34840404  ori         $a0, $a0, 0x404
    ctx->pc = 0x32f124u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1028);
label_32f128:
    // 0x32f128: 0x70871b89  pcpyld      $v1, $a0, $a3
    ctx->pc = 0x32f128u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
label_32f12c:
    // 0x32f12c: 0x30470007  andi        $a3, $v0, 0x7
    ctx->pc = 0x32f12cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_32f130:
    // 0x32f130: 0x7cc30040  sq          $v1, 0x40($a2)
    ctx->pc = 0x32f130u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), GPR_VEC(ctx, 3));
label_32f134:
    // 0x32f134: 0x24c20050  addiu       $v0, $a2, 0x50
    ctx->pc = 0x32f134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
label_32f138:
    // 0x32f138: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x32f138u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_32f13c:
    // 0x32f13c: 0x8f83aee0  lw          $v1, -0x5120($gp)
    ctx->pc = 0x32f13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946528)));
label_32f140:
    // 0x32f140: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_32f144:
    if (ctx->pc == 0x32F144u) {
        ctx->pc = 0x32F144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F140u;
        // 0x32f144: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32F148u;
        goto label_32f148;
    }
    ctx->pc = 0x32F140u;
    {
        const bool branch_taken_0x32f140 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F140u;
        // 0x32f144: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f140) {
            ctx->pc = 0x32F150u;
            goto label_32f150;
        }
    }
    ctx->pc = 0x32F148u;
label_32f148:
    // 0x32f148: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_32f14c:
    if (ctx->pc == 0x32F14Cu) {
        ctx->pc = 0x32F14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F148u;
        // 0x32f14c: 0x34e70008  ori         $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32F150u;
        goto label_32f150;
    }
    ctx->pc = 0x32F148u;
    {
        const bool branch_taken_0x32f148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f148) {
            ctx->pc = 0x32F14Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32F148u;
            // 0x32f14c: 0x34e70008  ori         $a3, $a3, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x32F168u;
            goto label_32f168;
        }
    }
    ctx->pc = 0x32F150u;
label_32f150:
    // 0x32f150: 0x8f82aee4  lw          $v0, -0x511C($gp)
    ctx->pc = 0x32f150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946532)));
label_32f154:
    // 0x32f154: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_32f158:
    if (ctx->pc == 0x32F158u) {
        ctx->pc = 0x32F158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F154u;
        // 0x32f158: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32F15Cu;
        goto label_32f15c;
    }
    ctx->pc = 0x32F154u;
    {
        const bool branch_taken_0x32f154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F154u;
        // 0x32f158: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f154) {
            ctx->pc = 0x32F190u;
            goto label_32f190;
        }
    }
    ctx->pc = 0x32F15Cu;
label_32f15c:
    // 0x32f15c: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_32f160:
    if (ctx->pc == 0x32F160u) {
        ctx->pc = 0x32F160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F15Cu;
        // 0x32f160: 0x3c03005e  lui         $v1, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32F164u;
        goto label_32f164;
    }
    ctx->pc = 0x32F15Cu;
    {
        const bool branch_taken_0x32f15c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f15c) {
            ctx->pc = 0x32F160u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32F15Cu;
            // 0x32f160: 0x3c03005e  lui         $v1, 0x5E (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32F198u;
            goto label_32f198;
        }
    }
    ctx->pc = 0x32F164u;
label_32f164:
    // 0x32f164: 0x34e70008  ori         $a3, $a3, 0x8
    ctx->pc = 0x32f164u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
label_32f168:
    // 0x32f168: 0x8f84be20  lw          $a0, -0x41E0($gp)
    ctx->pc = 0x32f168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_32f16c:
    // 0x32f16c: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x32f16cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_32f170:
    // 0x32f170: 0x2463d670  addiu       $v1, $v1, -0x2990
    ctx->pc = 0x32f170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956656));
label_32f174:
    // 0x32f174: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x32f174u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_32f178:
    // 0x32f178: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x32f178u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_32f17c:
    // 0x32f17c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x32f17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_32f180:
    // 0x32f180: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x32f180u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
label_32f184:
    // 0x32f184: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x32f184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_32f188:
    // 0x32f188: 0x1000000b  b           . + 4 + (0xB << 2)
label_32f18c:
    if (ctx->pc == 0x32F18Cu) {
        ctx->pc = 0x32F18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F188u;
        // 0x32f18c: 0x2463d680  addiu       $v1, $v1, -0x2980 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32F190u;
        goto label_32f190;
    }
    ctx->pc = 0x32F188u;
    {
        const bool branch_taken_0x32f188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F188u;
        // 0x32f18c: 0x2463d680  addiu       $v1, $v1, -0x2980 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f188) {
            ctx->pc = 0x32F1B8u;
            goto label_32f1b8;
        }
    }
    ctx->pc = 0x32F190u;
label_32f190:
    // 0x32f190: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x32f190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_32f194:
    // 0x32f194: 0x0  nop
    ctx->pc = 0x32f194u;
    // NOP
label_32f198:
    // 0x32f198: 0x8f84be20  lw          $a0, -0x41E0($gp)
    ctx->pc = 0x32f198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_32f19c:
    // 0x32f19c: 0x2463d650  addiu       $v1, $v1, -0x29B0
    ctx->pc = 0x32f19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956624));
label_32f1a0:
    // 0x32f1a0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x32f1a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_32f1a4:
    // 0x32f1a4: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x32f1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_32f1a8:
    // 0x32f1a8: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x32f1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_32f1ac:
    // 0x32f1ac: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x32f1acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
label_32f1b0:
    // 0x32f1b0: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x32f1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_32f1b4:
    // 0x32f1b4: 0x2463d660  addiu       $v1, $v1, -0x29A0
    ctx->pc = 0x32f1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956640));
label_32f1b8:
    // 0x32f1b8: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x32f1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_32f1bc:
    // 0x32f1bc: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x32f1bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_32f1c0:
    // 0x32f1c0: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x32f1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_32f1c4:
    // 0x32f1c4: 0xaf85be20  sw          $a1, -0x41E0($gp)
    ctx->pc = 0x32f1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 5));
label_32f1c8:
    // 0x32f1c8: 0x8f83becc  lw          $v1, -0x4134($gp)
    ctx->pc = 0x32f1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950604)));
label_32f1cc:
    // 0x32f1cc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x32f1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_32f1d0:
    // 0x32f1d0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_32f1d4:
    if (ctx->pc == 0x32F1D4u) {
        ctx->pc = 0x32F1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F1D0u;
        // 0x32f1d4: 0xaf80aed8  sw          $zero, -0x5128($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946520), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32F1D8u;
        goto label_32f1d8;
    }
    ctx->pc = 0x32F1D0u;
    {
        const bool branch_taken_0x32f1d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x32F1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F1D0u;
        // 0x32f1d4: 0xaf80aed8  sw          $zero, -0x5128($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946520), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f1d0) {
            ctx->pc = 0x32F1E0u;
            goto label_32f1e0;
        }
    }
    ctx->pc = 0x32F1D8u;
label_32f1d8:
    // 0x32f1d8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x32f1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_32f1dc:
    // 0x32f1dc: 0xaf82aed8  sw          $v0, -0x5128($gp)
    ctx->pc = 0x32f1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946520), GPR_U32(ctx, 2));
label_32f1e0:
    // 0x32f1e0: 0x9f82aedc  lwu         $v0, -0x5124($gp)
    ctx->pc = 0x32f1e0u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294946524)));
label_32f1e4:
    // 0x32f1e4: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x32f1e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
label_32f1e8:
    // 0x32f1e8: 0x9f84aed8  lwu         $a0, -0x5128($gp)
    ctx->pc = 0x32f1e8u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294946520)));
label_32f1ec:
    // 0x32f1ec: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x32f1ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_32f1f0:
    // 0x32f1f0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x32f1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_32f1f4:
    // 0x32f1f4: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x32f1f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_32f1f8:
    // 0x32f1f8: 0x70831b89  pcpyld      $v1, $a0, $v1
    ctx->pc = 0x32f1f8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
label_32f1fc:
    // 0x32f1fc: 0x8f84be20  lw          $a0, -0x41E0($gp)
    ctx->pc = 0x32f1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_32f200:
    // 0x32f200: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x32f200u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_32f204:
    // 0x32f204: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x32f204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_32f208:
    // 0x32f208: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x32f208u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
label_32f20c:
    // 0x32f20c: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x32f20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_32f210:
    // 0x32f210: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_32f214:
    if (ctx->pc == 0x32F214u) {
        ctx->pc = 0x32F214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F210u;
        // 0x32f214: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32F218u;
        goto label_32f218;
    }
    ctx->pc = 0x32F210u;
    {
        const bool branch_taken_0x32f210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F210u;
        // 0x32f214: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f210) {
            ctx->pc = 0x32F290u;
            goto label_32f290;
        }
    }
    ctx->pc = 0x32F218u;
label_32f218:
    // 0x32f218: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x32f218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
label_32f21c:
    // 0x32f21c: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x32f21cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_32f220:
    // 0x32f220: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x32f220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_32f224:
    // 0x32f224: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x32f224u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_32f228:
    // 0x32f228: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x32f228u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_32f22c:
    // 0x32f22c: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x32f22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_32f230:
    // 0x32f230: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x32f230u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_32f234:
    // 0x32f234: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x32f234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_32f238:
    // 0x32f238: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x32f238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_32f23c:
    // 0x32f23c: 0x34428003  ori         $v0, $v0, 0x8003
    ctx->pc = 0x32f23cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32771);
label_32f240:
    // 0x32f240: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x32f240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_32f244:
    // 0x32f244: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x32f244u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_32f248:
    // 0x32f248: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x32f248u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
label_32f24c:
    // 0x32f24c: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x32f24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_32f250:
    // 0x32f250: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x32f250u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_32f254:
    // 0x32f254: 0xdf82ae48  ld          $v0, -0x51B8($gp)
    ctx->pc = 0x32f254u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
label_32f258:
    // 0x32f258: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x32f258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_32f25c:
    // 0x32f25c: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x32f25cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_32f260:
    // 0x32f260: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x32f260u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
label_32f264:
    // 0x32f264: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x32f264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_32f268:
    // 0x32f268: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x32f268u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_32f26c:
    // 0x32f26c: 0xdf82ae68  ld          $v0, -0x5198($gp)
    ctx->pc = 0x32f26cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946408)));
label_32f270:
    // 0x32f270: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x32f270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_32f274:
    // 0x32f274: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x32f274u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_32f278:
    // 0x32f278: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x32f278u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
label_32f27c:
    // 0x32f27c: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x32f27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_32f280:
    // 0x32f280: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x32f280u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_32f284:
    // 0x32f284: 0xdf82ae60  ld          $v0, -0x51A0($gp)
    ctx->pc = 0x32f284u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946400)));
label_32f288:
    // 0x32f288: 0x1000001b  b           . + 4 + (0x1B << 2)
label_32f28c:
    if (ctx->pc == 0x32F28Cu) {
        ctx->pc = 0x32F28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F288u;
        // 0x32f28c: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32F290u;
        goto label_32f290;
    }
    ctx->pc = 0x32F288u;
    {
        const bool branch_taken_0x32f288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F288u;
        // 0x32f28c: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f288) {
            ctx->pc = 0x32F2F8u;
            goto label_32f2f8;
        }
    }
    ctx->pc = 0x32F290u;
label_32f290:
    // 0x32f290: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x32f290u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_32f294:
    // 0x32f294: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x32f294u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_32f298:
    // 0x32f298: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x32f298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_32f29c:
    // 0x32f29c: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x32f29cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_32f2a0:
    // 0x32f2a0: 0x70001ca9  por         $v1, $zero, $zero
    ctx->pc = 0x32f2a0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_32f2a4:
    // 0x32f2a4: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x32f2a4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
label_32f2a8:
    // 0x32f2a8: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x32f2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_32f2ac:
    // 0x32f2ac: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x32f2acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_32f2b0:
    // 0x32f2b0: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x32f2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
label_32f2b4:
    // 0x32f2b4: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x32f2b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_32f2b8:
    // 0x32f2b8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x32f2b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_32f2bc:
    // 0x32f2bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32f2bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32f2c0:
    // 0x32f2c0: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x32f2c0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_32f2c4:
    // 0x32f2c4: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x32f2c4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
label_32f2c8:
    // 0x32f2c8: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x32f2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_32f2cc:
    // 0x32f2cc: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x32f2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_32f2d0:
    // 0x32f2d0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x32f2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_32f2d4:
    // 0x32f2d4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x32f2d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_32f2d8:
    // 0x32f2d8: 0x34428001  ori         $v0, $v0, 0x8001
    ctx->pc = 0x32f2d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
label_32f2dc:
    // 0x32f2dc: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x32f2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_32f2e0:
    // 0x32f2e0: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x32f2e0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_32f2e4:
    // 0x32f2e4: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x32f2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
label_32f2e8:
    // 0x32f2e8: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x32f2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_32f2ec:
    // 0x32f2ec: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x32f2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_32f2f0:
    // 0x32f2f0: 0xdf82ae48  ld          $v0, -0x51B8($gp)
    ctx->pc = 0x32f2f0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
label_32f2f4:
    // 0x32f2f4: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x32f2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_32f2f8:
    // 0x32f2f8: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x32f2f8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_32f2fc:
    // 0x32f2fc: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x32f2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
label_32f300:
    // 0x32f300: 0x24820050  addiu       $v0, $a0, 0x50
    ctx->pc = 0x32f300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
label_32f304:
    // 0x32f304: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x32f304u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_32f308:
    // 0x32f308: 0x92630028  lbu         $v1, 0x28($s3)
    ctx->pc = 0x32f308u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 40)));
label_32f30c:
    // 0x32f30c: 0x30640010  andi        $a0, $v1, 0x10
    ctx->pc = 0x32f30cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_32f310:
    // 0x32f310: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x32f310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_32f314:
    // 0x32f314: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x32f314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_32f318:
    // 0x32f318: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x32f318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_32f31c:
    // 0x32f31c: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x32f31cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_32f320:
    // 0x32f320: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x32f320u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
label_32f324:
    // 0x32f324: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32f324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_32f328:
    // 0x32f328: 0xa262002b  sb          $v0, 0x2B($s3)
    ctx->pc = 0x32f328u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 43), (uint8_t)GPR_U32(ctx, 2));
label_32f32c:
    // 0x32f32c: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x32f32cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_32f330:
    // 0x32f330: 0x8f85aed4  lw          $a1, -0x512C($gp)
    ctx->pc = 0x32f330u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946516)));
label_32f334:
    // 0x32f334: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x32f334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_32f338:
    // 0x32f338: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x32f338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_32f33c:
    // 0x32f33c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x32f33cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_32f340:
    // 0x32f340: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32f340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_32f344:
    // 0x32f344: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x32f344u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32f348:
    // 0x32f348: 0x10a6000b  beq         $a1, $a2, . + 4 + (0xB << 2)
label_32f34c:
    if (ctx->pc == 0x32F34Cu) {
        ctx->pc = 0x32F34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F348u;
        // 0x32f34c: 0x6203c  dsll32      $a0, $a2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32F350u;
        goto label_32f350;
    }
    ctx->pc = 0x32F348u;
    {
        const bool branch_taken_0x32f348 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x32F34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F348u;
        // 0x32f34c: 0x6203c  dsll32      $a0, $a2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f348) {
            ctx->pc = 0x32F378u;
            goto label_32f378;
        }
    }
    ctx->pc = 0x32F350u;
label_32f350:
    // 0x32f350: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x32f350u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
label_32f354:
    // 0x32f354: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x32f354u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_32f358:
    // 0x32f358: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32f358u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32f35c:
    // 0x32f35c: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x32f35cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
label_32f360:
    // 0x32f360: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x32f360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_32f364:
    // 0x32f364: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x32f364u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_32f368:
    // 0x32f368: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x32f368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_32f36c:
    // 0x32f36c: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x32f36cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_32f370:
    // 0x32f370: 0xaf86aed4  sw          $a2, -0x512C($gp)
    ctx->pc = 0x32f370u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946516), GPR_U32(ctx, 6));
label_32f374:
    // 0x32f374: 0x0  nop
    ctx->pc = 0x32f374u;
    // NOP
label_32f378:
    // 0x32f378: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x32f378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_32f37c:
    // 0x32f37c: 0x3c070200  lui         $a3, 0x200
    ctx->pc = 0x32f37cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)512 << 16));
label_32f380:
    // 0x32f380: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x32f380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_32f384:
    // 0x32f384: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x32f384u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
label_32f388:
    // 0x32f388: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x32f388u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32f38c:
    // 0x32f38c: 0x3c060300  lui         $a2, 0x300
    ctx->pc = 0x32f38cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)768 << 16));
label_32f390:
    // 0x32f390: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x32f390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_32f394:
    // 0x32f394: 0x24a90018  addiu       $t1, $a1, 0x18
    ctx->pc = 0x32f394u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
label_32f398:
    // 0x32f398: 0x9d240008  lwu         $a0, 0x8($t1)
    ctx->pc = 0x32f398u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 9), 8)));
label_32f39c:
    // 0x32f39c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x32f39cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_32f3a0:
    // 0x32f3a0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x32f3a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_32f3a4:
    // 0x32f3a4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x32f3a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_32f3a8:
    // 0x32f3a8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x32f3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_32f3ac:
    // 0x32f3ac: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x32f3acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
label_32f3b0:
    // 0x32f3b0: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x32f3b0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
label_32f3b4:
    // 0x32f3b4: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x32f3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_32f3b8:
    // 0x32f3b8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x32f3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_32f3bc:
    // 0x32f3bc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x32f3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_32f3c0:
    // 0x32f3c0: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x32f3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_32f3c4:
    // 0x32f3c4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x32f3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_32f3c8:
    // 0x32f3c8: 0x42000039  di
    ctx->pc = 0x32f3c8u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
label_32f3cc:
    // 0x32f3cc: 0x40f  sync.p
    ctx->pc = 0x32f3ccu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_32f3d0:
    // 0x32f3d0: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x32f3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
label_32f3d4:
    // 0x32f3d4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x32f3d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_32f3d8:
    // 0x32f3d8: 0x0  nop
    ctx->pc = 0x32f3d8u;
    // NOP
label_32f3dc:
    // 0x32f3dc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_32f3e0:
    if (ctx->pc == 0x32F3E0u) {
        ctx->pc = 0x32F3E4u;
        goto label_32f3e4;
    }
    ctx->pc = 0x32F3DCu;
    {
        const bool branch_taken_0x32f3dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32f3dc) {
            ctx->pc = 0x32F3C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32f3c8;
        }
    }
    ctx->pc = 0x32F3E4u;
label_32f3e4:
    // 0x32f3e4: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x32f3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_32f3e8:
    // 0x32f3e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32f3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_32f3ec:
    // 0x32f3ec: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x32f3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
label_32f3f0:
    // 0x32f3f0: 0x42000038  ei
    ctx->pc = 0x32f3f0u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_32f3f4:
    // 0x32f3f4: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x32f3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_32f3f8:
    // 0x32f3f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32f3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32f3fc:
    // 0x32f3fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32f3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_32f400:
    // 0x32f400: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_32f404:
    if (ctx->pc == 0x32F404u) {
        ctx->pc = 0x32F404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F400u;
        // 0x32f404: 0xad220004  sw          $v0, 0x4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32F408u;
        goto label_32f408;
    }
    ctx->pc = 0x32F400u;
    {
        const bool branch_taken_0x32f400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x32F404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F400u;
        // 0x32f404: 0xad220004  sw          $v0, 0x4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f400) {
            ctx->pc = 0x32F410u;
            goto label_32f410;
        }
    }
    ctx->pc = 0x32F408u;
label_32f408:
    // 0x32f408: 0xc10a762  jal         func_429D88
label_32f40c:
    if (ctx->pc == 0x32F40Cu) {
        ctx->pc = 0x32F40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F408u;
        // 0x32f40c: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32F410u;
        goto label_32f410;
    }
    ctx->pc = 0x32F408u;
    SET_GPR_U32(ctx, 31, 0x32F410u);
    ctx->pc = 0x32F40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F408u;
    // 0x32f40c: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x429D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x429D88u, 0x32F408u, 0x32F410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F410u;
label_32f410:
    // 0x32f410: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x32f410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32f414:
    // 0x32f414: 0xc10a322  jal         func_428C88
label_32f418:
    if (ctx->pc == 0x32F418u) {
        ctx->pc = 0x32F418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F414u;
        // 0x32f418: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32F41Cu;
        goto label_32f41c;
    }
    ctx->pc = 0x32F414u;
    SET_GPR_U32(ctx, 31, 0x32F41Cu);
    ctx->pc = 0x32F418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F414u;
    // 0x32f418: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x32F414u, 0x32F41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F41Cu;
label_32f41c:
    // 0x32f41c: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x32f41cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
label_32f420:
    // 0x32f420: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32f420u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32f424:
    // 0x32f424: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x32f424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_32f428:
    // 0x32f428: 0x70621cc8  ppacw       $v1, $v1, $v0
    ctx->pc = 0x32f428u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_32f42c:
    // 0x32f42c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x32f42cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_32f430:
    // 0x32f430: 0x34840004  ori         $a0, $a0, 0x4
    ctx->pc = 0x32f430u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
label_32f434:
    // 0x32f434: 0x704414c8  ppacw       $v0, $v0, $a0
    ctx->pc = 0x32f434u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
label_32f438:
    // 0x32f438: 0x70621cc8  ppacw       $v1, $v1, $v0
    ctx->pc = 0x32f438u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_32f43c:
    // 0x32f43c: 0x8f84be20  lw          $a0, -0x41E0($gp)
    ctx->pc = 0x32f43cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_32f440:
    // 0x32f440: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x32f440u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_32f444:
    // 0x32f444: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x32f444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_32f448:
    // 0x32f448: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x32f448u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
label_32f44c:
    // 0x32f44c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x32f44cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_32f450:
    // 0x32f450: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x32f450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_32f454:
    // 0x32f454: 0x34638003  ori         $v1, $v1, 0x8003
    ctx->pc = 0x32f454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32771);
label_32f458:
    // 0x32f458: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x32f458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_32f45c:
    // 0x32f45c: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x32f45cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_32f460:
    // 0x32f460: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x32f460u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_32f464:
    // 0x32f464: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x32f464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_32f468:
    // 0x32f468: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x32f468u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_32f46c:
    // 0x32f46c: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x32f46cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_32f470:
    // 0x32f470: 0xdf82ae70  ld          $v0, -0x5190($gp)
    ctx->pc = 0x32f470u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946416)));
label_32f474:
    // 0x32f474: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x32f474u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_32f478:
    // 0x32f478: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x32f478u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
label_32f47c:
    // 0x32f47c: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x32f47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_32f480:
    // 0x32f480: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x32f480u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_32f484:
    // 0x32f484: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x32f484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_32f488:
    // 0x32f488: 0xdf82ae48  ld          $v0, -0x51B8($gp)
    ctx->pc = 0x32f488u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
label_32f48c:
    // 0x32f48c: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x32f48cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_32f490:
    // 0x32f490: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x32f490u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
label_32f494:
    // 0x32f494: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x32f494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_32f498:
    // 0x32f498: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x32f498u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_32f49c:
    // 0x32f49c: 0x2403003d  addiu       $v1, $zero, 0x3D
    ctx->pc = 0x32f49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
label_32f4a0:
    // 0x32f4a0: 0xdf82ae58  ld          $v0, -0x51A8($gp)
    ctx->pc = 0x32f4a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946392)));
label_32f4a4:
    // 0x32f4a4: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x32f4a4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_32f4a8:
    // 0x32f4a8: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x32f4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
label_32f4ac:
    // 0x32f4ac: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x32f4acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_32f4b0:
    // 0x32f4b0: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x32f4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
label_32f4b4:
    // 0x32f4b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32f4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32f4b8:
    // 0x32f4b8: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x32f4b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_32f4bc:
    // 0x32f4bc: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x32f4bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_32f4c0:
    // 0x32f4c0: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x32f4c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_32f4c4:
    // 0x32f4c4: 0x7bb30110  lq          $s3, 0x110($sp)
    ctx->pc = 0x32f4c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_32f4c8:
    // 0x32f4c8: 0x7bb40100  lq          $s4, 0x100($sp)
    ctx->pc = 0x32f4c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_32f4cc:
    // 0x32f4cc: 0x7bb500f0  lq          $s5, 0xF0($sp)
    ctx->pc = 0x32f4ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_32f4d0:
    // 0x32f4d0: 0x7bb600e0  lq          $s6, 0xE0($sp)
    ctx->pc = 0x32f4d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_32f4d4:
    // 0x32f4d4: 0x7bb700d0  lq          $s7, 0xD0($sp)
    ctx->pc = 0x32f4d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_32f4d8:
    // 0x32f4d8: 0x7bbe00c0  lq          $fp, 0xC0($sp)
    ctx->pc = 0x32f4d8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_32f4dc:
    // 0x32f4dc: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x32f4dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_32f4e0:
    // 0x32f4e0: 0x3e00008  jr          $ra
label_32f4e4:
    if (ctx->pc == 0x32F4E4u) {
        ctx->pc = 0x32F4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F4E0u;
        // 0x32f4e4: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32F4E8u;
        goto label_32f4e8;
    }
    ctx->pc = 0x32F4E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32F4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F4E0u;
        // 0x32f4e4: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32F4E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32F4E8u;
label_32f4e8:
    // 0x32f4e8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x32f4e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_32f4ec:
    // 0x32f4ec: 0x8f87a634  lw          $a3, -0x59CC($gp)
    ctx->pc = 0x32f4ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944308)));
label_32f4f0:
    // 0x32f4f0: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x32f4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_32f4f4:
    // 0x32f4f4: 0x3c060100  lui         $a2, 0x100
    ctx->pc = 0x32f4f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)256 << 16));
label_32f4f8:
    // 0x32f4f8: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x32f4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_32f4fc:
    // 0x32f4fc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x32f4fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32f500:
    // 0x32f500: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x32f500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_32f504:
    // 0x32f504: 0x3c050007  lui         $a1, 0x7
    ctx->pc = 0x32f504u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
label_32f508:
    // 0x32f508: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x32f508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_32f50c:
    // 0x32f50c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x32f50cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32f510:
    // 0x32f510: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x32f510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_32f514:
    // 0x32f514: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x32f514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_32f518:
    // 0x32f518: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x32f518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_32f51c:
    // 0x32f51c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x32f51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_32f520:
    // 0x32f520: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x32f520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_32f524:
    // 0x32f524: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x32f524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_32f528:
    // 0x32f528: 0xdf84ae48  ld          $a0, -0x51B8($gp)
    ctx->pc = 0x32f528u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
label_32f52c:
    // 0x32f52c: 0x8e62002c  lw          $v0, 0x2C($s3)
    ctx->pc = 0x32f52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_32f530:
    // 0x32f530: 0xdf88ae58  ld          $t0, -0x51A8($gp)
    ctx->pc = 0x32f530u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 28), 4294946392)));
label_32f534:
    // 0x32f534: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x32f534u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_32f538:
    // 0x32f538: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x32f538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_32f53c:
    // 0x32f53c: 0xdf9eae38  ld          $fp, -0x51C8($gp)
    ctx->pc = 0x32f53cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 28), 4294946360)));
label_32f540:
    // 0x32f540: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x32f540u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_32f544:
    // 0x32f544: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x32f544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_32f548:
    // 0x32f548: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x32f548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_32f54c:
    // 0x32f54c: 0xdc550030  ld          $s5, 0x30($v0)
    ctx->pc = 0x32f54cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 2), 48)));
label_32f550:
    // 0x32f550: 0xdc430038  ld          $v1, 0x38($v0)
    ctx->pc = 0x32f550u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 56)));
label_32f554:
    // 0x32f554: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x32f554u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32f558:
    // 0x32f558: 0x2a63026  xor         $a2, $s5, $a2
    ctx->pc = 0x32f558u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) ^ GPR_U64(ctx, 6));
label_32f55c:
    // 0x32f55c: 0xdc560028  ld          $s6, 0x28($v0)
    ctx->pc = 0x32f55cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 2), 40)));
label_32f560:
    // 0x32f560: 0x83b825  or          $s7, $a0, $v1
    ctx->pc = 0x32f560u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_32f564:
    // 0x32f564: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x32f564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_32f568:
    // 0x32f568: 0x106a80a  movz        $s5, $t0, $a2
    ctx->pc = 0x32f568u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 8));
label_32f56c:
    // 0x32f56c: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x32f56cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_32f570:
    // 0x32f570: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x32f570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
label_32f574:
    // 0x32f574: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_32f578:
    if (ctx->pc == 0x32F578u) {
        ctx->pc = 0x32F578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F574u;
        // 0x32f578: 0xaf80bec4  sw          $zero, -0x413C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950596), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32F57Cu;
        goto label_32f57c;
    }
    ctx->pc = 0x32F574u;
    {
        const bool branch_taken_0x32f574 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F574u;
        // 0x32f578: 0xaf80bec4  sw          $zero, -0x413C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950596), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f574) {
            ctx->pc = 0x32F5A0u;
            goto label_32f5a0;
        }
    }
    ctx->pc = 0x32F57Cu;
label_32f57c:
    // 0x32f57c: 0xc110e98  jal         func_443A60
label_32f580:
    if (ctx->pc == 0x32F580u) {
        ctx->pc = 0x32F580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F57Cu;
        // 0x32f580: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32F584u;
        goto label_32f584;
    }
    ctx->pc = 0x32F57Cu;
    SET_GPR_U32(ctx, 31, 0x32F584u);
    ctx->pc = 0x32F580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F57Cu;
    // 0x32f580: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443A60u, 0x32F57Cu, 0x32F584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F584u;
label_32f584:
    // 0x32f584: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x32f584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32f588:
    // 0x32f588: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x32f588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_32f58c:
    // 0x32f58c: 0x90430023  lbu         $v1, 0x23($v0)
    ctx->pc = 0x32f58cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 35)));
label_32f590:
    // 0x32f590: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x32f590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_32f594:
    // 0x32f594: 0x10640002  beq         $v1, $a0, . + 4 + (0x2 << 2)
label_32f598:
    if (ctx->pc == 0x32F598u) {
        ctx->pc = 0x32F598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F594u;
        // 0x32f598: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32F59Cu;
        goto label_32f59c;
    }
    ctx->pc = 0x32F594u;
    {
        const bool branch_taken_0x32f594 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x32F598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F594u;
        // 0x32f598: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f594) {
            ctx->pc = 0x32F5A0u;
            goto label_32f5a0;
        }
    }
    ctx->pc = 0x32F59Cu;
label_32f59c:
    // 0x32f59c: 0xaf82bec4  sw          $v0, -0x413C($gp)
    ctx->pc = 0x32f59cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950596), GPR_U32(ctx, 2));
label_32f5a0:
    // 0x32f5a0: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_32f5a4:
    if (ctx->pc == 0x32F5A4u) {
        ctx->pc = 0x32F5A8u;
        goto label_32f5a8;
    }
    ctx->pc = 0x32F5A0u;
    {
        const bool branch_taken_0x32f5a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f5a0) {
            ctx->pc = 0x32F5BCu;
            goto label_32f5bc;
        }
    }
    ctx->pc = 0x32F5A8u;
label_32f5a8:
    // 0x32f5a8: 0xc110e98  jal         func_443A60
label_32f5ac:
    if (ctx->pc == 0x32F5ACu) {
        ctx->pc = 0x32F5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F5A8u;
        // 0x32f5ac: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32F5B0u;
        goto label_32f5b0;
    }
    ctx->pc = 0x32F5A8u;
    SET_GPR_U32(ctx, 31, 0x32F5B0u);
    ctx->pc = 0x32F5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F5A8u;
    // 0x32f5ac: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443A60u, 0x32F5A8u, 0x32F5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F5B0u;
label_32f5b0:
    // 0x32f5b0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x32f5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_32f5b4:
    // 0x32f5b4: 0xc110b7e  jal         func_442DF8
label_32f5b8:
    if (ctx->pc == 0x32F5B8u) {
        ctx->pc = 0x32F5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F5B4u;
        // 0x32f5b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32F5BCu;
        goto label_32f5bc;
    }
    ctx->pc = 0x32F5B4u;
    SET_GPR_U32(ctx, 31, 0x32F5BCu);
    ctx->pc = 0x32F5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F5B4u;
    // 0x32f5b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x442DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x442DF8u, 0x32F5B4u, 0x32F5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F5BCu;
label_32f5bc:
    // 0x32f5bc: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_32f5c0:
    if (ctx->pc == 0x32F5C0u) {
        ctx->pc = 0x32F5C4u;
        goto label_32f5c4;
    }
    ctx->pc = 0x32F5BCu;
    {
        const bool branch_taken_0x32f5bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f5bc) {
            ctx->pc = 0x32F5D0u;
            goto label_32f5d0;
        }
    }
    ctx->pc = 0x32F5C4u;
label_32f5c4:
    // 0x32f5c4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x32f5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32f5c8:
    // 0x32f5c8: 0xc110b7e  jal         func_442DF8
label_32f5cc:
    if (ctx->pc == 0x32F5CCu) {
        ctx->pc = 0x32F5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F5C8u;
        // 0x32f5cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32F5D0u;
        goto label_32f5d0;
    }
    ctx->pc = 0x32F5C8u;
    SET_GPR_U32(ctx, 31, 0x32F5D0u);
    ctx->pc = 0x32F5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F5C8u;
    // 0x32f5cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x442DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x442DF8u, 0x32F5C8u, 0x32F5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F5D0u;
label_32f5d0:
    // 0x32f5d0: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_32f5d4:
    if (ctx->pc == 0x32F5D4u) {
        ctx->pc = 0x32F5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F5D0u;
        // 0x32f5d4: 0x8f82beb8  lw          $v0, -0x4148($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32F5D8u;
        goto label_32f5d8;
    }
    ctx->pc = 0x32F5D0u;
    {
        const bool branch_taken_0x32f5d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F5D0u;
        // 0x32f5d4: 0x8f82beb8  lw          $v0, -0x4148($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f5d0) {
            ctx->pc = 0x32F5F4u;
            goto label_32f5f4;
        }
    }
    ctx->pc = 0x32F5D8u;
label_32f5d8:
    // 0x32f5d8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x32f5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_32f5dc:
    // 0x32f5dc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x32f5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_32f5e0:
    // 0x32f5e0: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x32f5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_32f5e4:
    // 0x32f5e4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_32f5e8:
    if (ctx->pc == 0x32F5E8u) {
        ctx->pc = 0x32F5ECu;
        goto label_32f5ec;
    }
    ctx->pc = 0x32F5E4u;
    {
        const bool branch_taken_0x32f5e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32f5e4) {
            ctx->pc = 0x32F5F4u;
            goto label_32f5f4;
        }
    }
    ctx->pc = 0x32F5ECu;
label_32f5ec:
    // 0x32f5ec: 0xc110b7e  jal         func_442DF8
label_32f5f0:
    if (ctx->pc == 0x32F5F0u) {
        ctx->pc = 0x32F5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F5ECu;
        // 0x32f5f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32F5F4u;
        goto label_32f5f4;
    }
    ctx->pc = 0x32F5ECu;
    SET_GPR_U32(ctx, 31, 0x32F5F4u);
    ctx->pc = 0x32F5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F5ECu;
    // 0x32f5f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x442DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x442DF8u, 0x32F5ECu, 0x32F5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F5F4u;
label_32f5f4:
    // 0x32f5f4: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
label_32f5f8:
    if (ctx->pc == 0x32F5F8u) {
        ctx->pc = 0x32F5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F5F4u;
        // 0x32f5f8: 0x8f82beb8  lw          $v0, -0x4148($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32F5FCu;
        goto label_32f5fc;
    }
    ctx->pc = 0x32F5F4u;
    {
        const bool branch_taken_0x32f5f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F5F4u;
        // 0x32f5f8: 0x8f82beb8  lw          $v0, -0x4148($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f5f4) {
            ctx->pc = 0x32F694u;
            goto label_32f694;
        }
    }
    ctx->pc = 0x32F5FCu;
label_32f5fc:
    // 0x32f5fc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x32f5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32f600:
    // 0x32f600: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x32f600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_32f604:
    // 0x32f604: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x32f604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_32f608:
    // 0x32f608: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_32f60c:
    if (ctx->pc == 0x32F60Cu) {
        ctx->pc = 0x32F60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F608u;
        // 0x32f60c: 0xdf82ae80  ld          $v0, -0x5180($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32F610u;
        goto label_32f610;
    }
    ctx->pc = 0x32F608u;
    {
        const bool branch_taken_0x32f608 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32F60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F608u;
        // 0x32f60c: 0xdf82ae80  ld          $v0, -0x5180($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f608) {
            ctx->pc = 0x32F61Cu;
            goto label_32f61c;
        }
    }
    ctx->pc = 0x32F610u;
label_32f610:
    // 0x32f610: 0xc110b7e  jal         func_442DF8
label_32f614:
    if (ctx->pc == 0x32F614u) {
        ctx->pc = 0x32F614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F610u;
        // 0x32f614: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32F618u;
        goto label_32f618;
    }
    ctx->pc = 0x32F610u;
    SET_GPR_U32(ctx, 31, 0x32F618u);
    ctx->pc = 0x32F614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F610u;
    // 0x32f614: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x442DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x442DF8u, 0x32F610u, 0x32F618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F618u;
label_32f618:
    // 0x32f618: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x32f618u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
label_32f61c:
    // 0x32f61c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x32f61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_32f620:
    // 0x32f620: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x32f620u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32f624:
    // 0x32f624: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x32f624u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_32f628:
    // 0x32f628: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32f628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_32f62c:
    // 0x32f62c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x32f62cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_32f630:
    // 0x32f630: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x32f630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_32f634:
    // 0x32f634: 0xaf87bec0  sw          $a3, -0x4140($gp)
    ctx->pc = 0x32f634u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950592), GPR_U32(ctx, 7));
label_32f638:
    // 0x32f638: 0xc110f4c  jal         func_443D30
label_32f63c:
    if (ctx->pc == 0x32F63Cu) {
        ctx->pc = 0x32F63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F638u;
        // 0x32f63c: 0xff82ae80  sd          $v0, -0x5180($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294946432), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32F640u;
        goto label_32f640;
    }
    ctx->pc = 0x32F638u;
    SET_GPR_U32(ctx, 31, 0x32F640u);
    ctx->pc = 0x32F63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F638u;
    // 0x32f63c: 0xff82ae80  sd          $v0, -0x5180($gp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946432), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443D30u, 0x32F638u, 0x32F640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F640u;
label_32f640:
    // 0x32f640: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x32f640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32f644:
    // 0x32f644: 0x2785ae68  addiu       $a1, $gp, -0x5198
    ctx->pc = 0x32f644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946408));
label_32f648:
    // 0x32f648: 0xc110f54  jal         func_443D50
label_32f64c:
    if (ctx->pc == 0x32F64Cu) {
        ctx->pc = 0x32F64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F648u;
        // 0x32f64c: 0x92060050  lbu         $a2, 0x50($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32F650u;
        goto label_32f650;
    }
    ctx->pc = 0x32F648u;
    SET_GPR_U32(ctx, 31, 0x32F650u);
    ctx->pc = 0x32F64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F648u;
    // 0x32f64c: 0x92060050  lbu         $a2, 0x50($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443D50u, 0x32F648u, 0x32F650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F650u;
label_32f650:
    // 0x32f650: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x32f650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_32f654:
    // 0x32f654: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x32f654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_32f658:
    // 0x32f658: 0x30620f00  andi        $v0, $v1, 0xF00
    ctx->pc = 0x32f658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3840);
label_32f65c:
    // 0x32f65c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x32f65cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_32f660:
    // 0x32f660: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
label_32f664:
    if (ctx->pc == 0x32F664u) {
        ctx->pc = 0x32F664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F660u;
        // 0x32f664: 0xff80ae60  sd          $zero, -0x51A0($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294946400), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32F668u;
        goto label_32f668;
    }
    ctx->pc = 0x32F660u;
    {
        const bool branch_taken_0x32f660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x32F664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F660u;
        // 0x32f664: 0xff80ae60  sd          $zero, -0x51A0($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294946400), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f660) {
            ctx->pc = 0x32F670u;
            goto label_32f670;
        }
    }
    ctx->pc = 0x32F668u;
label_32f668:
    // 0x32f668: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32f668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32f66c:
    // 0x32f66c: 0xff82ae60  sd          $v0, -0x51A0($gp)
    ctx->pc = 0x32f66cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946400), GPR_U64(ctx, 2));
label_32f670:
    // 0x32f670: 0x3062f000  andi        $v0, $v1, 0xF000
    ctx->pc = 0x32f670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61440);
label_32f674:
    // 0x32f674: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x32f674u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
label_32f678:
    // 0x32f678: 0x1444000c  bne         $v0, $a0, . + 4 + (0xC << 2)
label_32f67c:
    if (ctx->pc == 0x32F67Cu) {
        ctx->pc = 0x32F67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F678u;
        // 0x32f67c: 0xdf82ae48  ld          $v0, -0x51B8($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32F680u;
        goto label_32f680;
    }
    ctx->pc = 0x32F678u;
    {
        const bool branch_taken_0x32f678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x32F67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F678u;
        // 0x32f67c: 0xdf82ae48  ld          $v0, -0x51B8($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f678) {
            ctx->pc = 0x32F6ACu;
            goto label_32f6ac;
        }
    }
    ctx->pc = 0x32F680u;
label_32f680:
    // 0x32f680: 0xdf82ae60  ld          $v0, -0x51A0($gp)
    ctx->pc = 0x32f680u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946400)));
label_32f684:
    // 0x32f684: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x32f684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_32f688:
    // 0x32f688: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32f688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_32f68c:
    // 0x32f68c: 0x10000006  b           . + 4 + (0x6 << 2)
label_32f690:
    if (ctx->pc == 0x32F690u) {
        ctx->pc = 0x32F690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F68Cu;
        // 0x32f690: 0xff82ae60  sd          $v0, -0x51A0($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294946400), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32F694u;
        goto label_32f694;
    }
    ctx->pc = 0x32F68Cu;
    {
        const bool branch_taken_0x32f68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F68Cu;
        // 0x32f690: 0xff82ae60  sd          $v0, -0x51A0($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294946400), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f68c) {
            ctx->pc = 0x32F6A8u;
            goto label_32f6a8;
        }
    }
    ctx->pc = 0x32F694u;
label_32f694:
    // 0x32f694: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x32f694u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
label_32f698:
    // 0x32f698: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x32f698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_32f69c:
    // 0x32f69c: 0xaf80bec0  sw          $zero, -0x4140($gp)
    ctx->pc = 0x32f69cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950592), GPR_U32(ctx, 0));
label_32f6a0:
    // 0x32f6a0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x32f6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_32f6a4:
    // 0x32f6a4: 0xff82ae80  sd          $v0, -0x5180($gp)
    ctx->pc = 0x32f6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946432), GPR_U64(ctx, 2));
label_32f6a8:
    // 0x32f6a8: 0xdf82ae48  ld          $v0, -0x51B8($gp)
    ctx->pc = 0x32f6a8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
label_32f6ac:
    // 0x32f6ac: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x32f6acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32f6b0:
    // 0x32f6b0: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x32f6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
label_32f6b4:
    // 0x32f6b4: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
label_32f6b8:
    if (ctx->pc == 0x32F6B8u) {
        ctx->pc = 0x32F6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F6B4u;
        // 0x32f6b8: 0xff82ae48  sd          $v0, -0x51B8($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294946376), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32F6BCu;
        goto label_32f6bc;
    }
    ctx->pc = 0x32F6B4u;
    {
        const bool branch_taken_0x32f6b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F6B4u;
        // 0x32f6b8: 0xff82ae48  sd          $v0, -0x51B8($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294946376), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f6b4) {
            ctx->pc = 0x32F70Cu;
            goto label_32f70c;
        }
    }
    ctx->pc = 0x32F6BCu;
label_32f6bc:
    // 0x32f6bc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x32f6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_32f6c0:
    // 0x32f6c0: 0x37a5000c  ori         $a1, $sp, 0xC
    ctx->pc = 0x32f6c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
label_32f6c4:
    // 0x32f6c4: 0x37a60008  ori         $a2, $sp, 0x8
    ctx->pc = 0x32f6c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
label_32f6c8:
    // 0x32f6c8: 0xc110f4c  jal         func_443D30
label_32f6cc:
    if (ctx->pc == 0x32F6CCu) {
        ctx->pc = 0x32F6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F6C8u;
        // 0x32f6cc: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32F6D0u;
        goto label_32f6d0;
    }
    ctx->pc = 0x32F6C8u;
    SET_GPR_U32(ctx, 31, 0x32F6D0u);
    ctx->pc = 0x32F6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F6C8u;
    // 0x32f6cc: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443D30u, 0x32F6C8u, 0x32F6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F6D0u;
label_32f6d0:
    // 0x32f6d0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x32f6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_32f6d4:
    // 0x32f6d4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x32f6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_32f6d8:
    // 0x32f6d8: 0xc110f54  jal         func_443D50
label_32f6dc:
    if (ctx->pc == 0x32F6DCu) {
        ctx->pc = 0x32F6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F6D8u;
        // 0x32f6dc: 0x92260050  lbu         $a2, 0x50($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32F6E0u;
        goto label_32f6e0;
    }
    ctx->pc = 0x32F6D8u;
    SET_GPR_U32(ctx, 31, 0x32F6E0u);
    ctx->pc = 0x32F6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F6D8u;
    // 0x32f6dc: 0x92260050  lbu         $a2, 0x50($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443D50u, 0x32F6D8u, 0x32F6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F6E0u;
label_32f6e0:
    // 0x32f6e0: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x32f6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_32f6e4:
    // 0x32f6e4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x32f6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_32f6e8:
    // 0x32f6e8: 0x30620f00  andi        $v0, $v1, 0xF00
    ctx->pc = 0x32f6e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3840);
label_32f6ec:
    // 0x32f6ec: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x32f6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_32f6f0:
    // 0x32f6f0: 0x3063f000  andi        $v1, $v1, 0xF000
    ctx->pc = 0x32f6f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61440);
label_32f6f4:
    // 0x32f6f4: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x32f6f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_32f6f8:
    // 0x32f6f8: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x32f6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
label_32f6fc:
    // 0x32f6fc: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
label_32f700:
    if (ctx->pc == 0x32F700u) {
        ctx->pc = 0x32F700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F6FCu;
        // 0x32f700: 0x2a00b  movn        $s4, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32F704u;
        goto label_32f704;
    }
    ctx->pc = 0x32F6FCu;
    {
        const bool branch_taken_0x32f6fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x32F700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F6FCu;
        // 0x32f700: 0x2a00b  movn        $s4, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f6fc) {
            ctx->pc = 0x32F70Cu;
            goto label_32f70c;
        }
    }
    ctx->pc = 0x32F704u;
label_32f704:
    // 0x32f704: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x32f704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_32f708:
    // 0x32f708: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x32f708u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
label_32f70c:
    // 0x32f70c: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_32f710:
    if (ctx->pc == 0x32F710u) {
        ctx->pc = 0x32F710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F70Cu;
        // 0x32f710: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32F714u;
        goto label_32f714;
    }
    ctx->pc = 0x32F70Cu;
    {
        const bool branch_taken_0x32f70c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F70Cu;
        // 0x32f710: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f70c) {
            ctx->pc = 0x32F750u;
            goto label_32f750;
        }
    }
    ctx->pc = 0x32F714u;
label_32f714:
    // 0x32f714: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x32f714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32f718:
    // 0x32f718: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x32f718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_32f71c:
    // 0x32f71c: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x32f71cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
label_32f720:
    // 0x32f720: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_32f724:
    if (ctx->pc == 0x32F724u) {
        ctx->pc = 0x32F728u;
        goto label_32f728;
    }
    ctx->pc = 0x32F720u;
    {
        const bool branch_taken_0x32f720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f720) {
            ctx->pc = 0x32F750u;
            goto label_32f750;
        }
    }
    ctx->pc = 0x32F728u;
label_32f728:
    // 0x32f728: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_32f72c:
    if (ctx->pc == 0x32F72Cu) {
        ctx->pc = 0x32F730u;
        goto label_32f730;
    }
    ctx->pc = 0x32F728u;
    {
        const bool branch_taken_0x32f728 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f728) {
            ctx->pc = 0x32F750u;
            goto label_32f750;
        }
    }
    ctx->pc = 0x32F730u;
label_32f730:
    // 0x32f730: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x32f730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_32f734:
    // 0x32f734: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x32f734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_32f738:
    // 0x32f738: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x32f738u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
label_32f73c:
    // 0x32f73c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_32f740:
    if (ctx->pc == 0x32F740u) {
        ctx->pc = 0x32F744u;
        goto label_32f744;
    }
    ctx->pc = 0x32F73Cu;
    {
        const bool branch_taken_0x32f73c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f73c) {
            ctx->pc = 0x32F750u;
            goto label_32f750;
        }
    }
    ctx->pc = 0x32F744u;
label_32f744:
    // 0x32f744: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x32f744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_32f748:
    // 0x32f748: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x32f748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_32f74c:
    // 0x32f74c: 0xaf82bec0  sw          $v0, -0x4140($gp)
    ctx->pc = 0x32f74cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950592), GPR_U32(ctx, 2));
label_32f750:
    // 0x32f750: 0xc10a322  jal         func_428C88
label_32f754:
    if (ctx->pc == 0x32F754u) {
        ctx->pc = 0x32F754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F750u;
        // 0x32f754: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32F758u;
        goto label_32f758;
    }
    ctx->pc = 0x32F750u;
    SET_GPR_U32(ctx, 31, 0x32F758u);
    ctx->pc = 0x32F754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F750u;
    // 0x32f754: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x32F750u, 0x32F758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F758u;
label_32f758:
    // 0x32f758: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x32f758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_32f75c:
    // 0x32f75c: 0x3463001e  ori         $v1, $v1, 0x1E
    ctx->pc = 0x32f75cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)30);
label_32f760:
    // 0x32f760: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x32f760u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32f764:
    // 0x32f764: 0x71231b89  pcpyld      $v1, $t1, $v1
    ctx->pc = 0x32f764u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 3)));
label_32f768:
    // 0x32f768: 0x8f85be20  lw          $a1, -0x41E0($gp)
    ctx->pc = 0x32f768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_32f76c:
    // 0x32f76c: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x32f76cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
label_32f770:
    // 0x32f770: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x32f770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_32f774:
    // 0x32f774: 0xaf85be20  sw          $a1, -0x41E0($gp)
    ctx->pc = 0x32f774u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 5));
label_32f778:
    // 0x32f778: 0x3c026c07  lui         $v0, 0x6C07
    ctx->pc = 0x32f778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27655 << 16));
label_32f77c:
    // 0x32f77c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x32f77cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_32f780:
    // 0x32f780: 0x344203bc  ori         $v0, $v0, 0x3BC
    ctx->pc = 0x32f780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)956);
label_32f784:
    // 0x32f784: 0x34840101  ori         $a0, $a0, 0x101
    ctx->pc = 0x32f784u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)257);
label_32f788:
    // 0x32f788: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32f788u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32f78c:
    // 0x32f78c: 0x704414c8  ppacw       $v0, $v0, $a0
    ctx->pc = 0x32f78cu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
label_32f790:
    // 0x32f790: 0x70c61cc8  ppacw       $v1, $a2, $a2
    ctx->pc = 0x32f790u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 6), GPR_VEC(ctx, 6)));
label_32f794:
    // 0x32f794: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x32f794u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_32f798:
    // 0x32f798: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x32f798u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
label_32f79c:
    // 0x32f79c: 0x92630029  lbu         $v1, 0x29($s3)
    ctx->pc = 0x32f79cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 41)));
label_32f7a0:
    // 0x32f7a0: 0x24040258  addiu       $a0, $zero, 0x258
    ctx->pc = 0x32f7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
label_32f7a4:
    // 0x32f7a4: 0x3c083000  lui         $t0, 0x3000
    ctx->pc = 0x32f7a4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)12288 << 16));
label_32f7a8:
    // 0x32f7a8: 0x35084000  ori         $t0, $t0, 0x4000
    ctx->pc = 0x32f7a8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)16384);
label_32f7ac:
    // 0x32f7ac: 0x92620028  lbu         $v0, 0x28($s3)
    ctx->pc = 0x32f7acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 40)));
label_32f7b0:
    // 0x32f7b0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x32f7b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_32f7b4:
    // 0x32f7b4: 0x24070412  addiu       $a3, $zero, 0x412
    ctx->pc = 0x32f7b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
label_32f7b8:
    // 0x32f7b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x32f7b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_32f7bc:
    // 0x32f7bc: 0x21178  dsll        $v0, $v0, 5
    ctx->pc = 0x32f7bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 5);
label_32f7c0:
    // 0x32f7c0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32f7c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_32f7c4:
    // 0x32f7c4: 0x213f8  dsll        $v0, $v0, 15
    ctx->pc = 0x32f7c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 15);
label_32f7c8:
    // 0x32f7c8: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x32f7c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
label_32f7cc:
    // 0x32f7cc: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x32f7ccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
label_32f7d0:
    // 0x32f7d0: 0x70e81389  pcpyld      $v0, $a3, $t0
    ctx->pc = 0x32f7d0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
label_32f7d4:
    // 0x32f7d4: 0x7ca20010  sq          $v0, 0x10($a1)
    ctx->pc = 0x32f7d4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
label_32f7d8:
    // 0x32f7d8: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x32f7d8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
label_32f7dc:
    // 0x32f7dc: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x32f7dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
label_32f7e0:
    // 0x32f7e0: 0x35088002  ori         $t0, $t0, 0x8002
    ctx->pc = 0x32f7e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32770);
label_32f7e4:
    // 0x32f7e4: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x32f7e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_32f7e8:
    // 0x32f7e8: 0x70e81389  pcpyld      $v0, $a3, $t0
    ctx->pc = 0x32f7e8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
label_32f7ec:
    // 0x32f7ec: 0x7ca20020  sq          $v0, 0x20($a1)
    ctx->pc = 0x32f7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 2));
label_32f7f0:
    // 0x32f7f0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x32f7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_32f7f4:
    // 0x32f7f4: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x32f7f4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_32f7f8:
    // 0x32f7f8: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x32f7f8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_32f7fc:
    // 0x32f7fc: 0x7ca20030  sq          $v0, 0x30($a1)
    ctx->pc = 0x32f7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 2));
label_32f800:
    // 0x32f800: 0x2404003d  addiu       $a0, $zero, 0x3D
    ctx->pc = 0x32f800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
label_32f804:
    // 0x32f804: 0xdf82ae58  ld          $v0, -0x51A8($gp)
    ctx->pc = 0x32f804u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946392)));
label_32f808:
    // 0x32f808: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x32f808u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_32f80c:
    // 0x32f80c: 0x7ca20040  sq          $v0, 0x40($a1)
    ctx->pc = 0x32f80cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 64), GPR_VEC(ctx, 2));
label_32f810:
    // 0x32f810: 0x70e81389  pcpyld      $v0, $a3, $t0
    ctx->pc = 0x32f810u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
label_32f814:
    // 0x32f814: 0x7ca20050  sq          $v0, 0x50($a1)
    ctx->pc = 0x32f814u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 80), GPR_VEC(ctx, 2));
label_32f818:
    // 0x32f818: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x32f818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_32f81c:
    // 0x32f81c: 0xdfa20008  ld          $v0, 0x8($sp)
    ctx->pc = 0x32f81cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_32f820:
    // 0x32f820: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x32f820u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_32f824:
    // 0x32f824: 0x7ca20060  sq          $v0, 0x60($a1)
    ctx->pc = 0x32f824u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 96), GPR_VEC(ctx, 2));
label_32f828:
    // 0x32f828: 0x70951389  pcpyld      $v0, $a0, $s5
    ctx->pc = 0x32f828u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 21)));
label_32f82c:
    // 0x32f82c: 0x7ca20070  sq          $v0, 0x70($a1)
    ctx->pc = 0x32f82cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 112), GPR_VEC(ctx, 2));
label_32f830:
    // 0x32f830: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x32f830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
label_32f834:
    // 0x32f834: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x32f834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
label_32f838:
    // 0x32f838: 0x70c61cc8  ppacw       $v1, $a2, $a2
    ctx->pc = 0x32f838u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 6), GPR_VEC(ctx, 6)));
label_32f83c:
    // 0x32f83c: 0x704614c8  ppacw       $v0, $v0, $a2
    ctx->pc = 0x32f83cu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
label_32f840:
    // 0x32f840: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x32f840u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_32f844:
    // 0x32f844: 0x7ca20080  sq          $v0, 0x80($a1)
    ctx->pc = 0x32f844u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 128), GPR_VEC(ctx, 2));
label_32f848:
    // 0x32f848: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x32f848u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
label_32f84c:
    // 0x32f84c: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x32f84cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
label_32f850:
    // 0x32f850: 0x35088005  ori         $t0, $t0, 0x8005
    ctx->pc = 0x32f850u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32773);
label_32f854:
    // 0x32f854: 0x70e81389  pcpyld      $v0, $a3, $t0
    ctx->pc = 0x32f854u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
label_32f858:
    // 0x32f858: 0x7ca20090  sq          $v0, 0x90($a1)
    ctx->pc = 0x32f858u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 144), GPR_VEC(ctx, 2));
label_32f85c:
    // 0x32f85c: 0x24020043  addiu       $v0, $zero, 0x43
    ctx->pc = 0x32f85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
label_32f860:
    // 0x32f860: 0x70561389  pcpyld      $v0, $v0, $s6
    ctx->pc = 0x32f860u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 22)));
label_32f864:
    // 0x32f864: 0x7ca200a0  sq          $v0, 0xA0($a1)
    ctx->pc = 0x32f864u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 160), GPR_VEC(ctx, 2));
label_32f868:
    // 0x32f868: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x32f868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_32f86c:
    // 0x32f86c: 0x70541389  pcpyld      $v0, $v0, $s4
    ctx->pc = 0x32f86cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 20)));
label_32f870:
    // 0x32f870: 0x7ca200b0  sq          $v0, 0xB0($a1)
    ctx->pc = 0x32f870u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 176), GPR_VEC(ctx, 2));
label_32f874:
    // 0x32f874: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x32f874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_32f878:
    // 0x32f878: 0x70571389  pcpyld      $v0, $v0, $s7
    ctx->pc = 0x32f878u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 23)));
label_32f87c:
    // 0x32f87c: 0x7ca200c0  sq          $v0, 0xC0($a1)
    ctx->pc = 0x32f87cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 192), GPR_VEC(ctx, 2));
label_32f880:
    // 0x32f880: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x32f880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_32f884:
    // 0x32f884: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x32f884u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_32f888:
    // 0x32f888: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x32f888u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_32f88c:
    // 0x32f88c: 0x7ca200d0  sq          $v0, 0xD0($a1)
    ctx->pc = 0x32f88cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 208), GPR_VEC(ctx, 2));
label_32f890:
    // 0x32f890: 0x2402004f  addiu       $v0, $zero, 0x4F
    ctx->pc = 0x32f890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
label_32f894:
    // 0x32f894: 0x705e1389  pcpyld      $v0, $v0, $fp
    ctx->pc = 0x32f894u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 30)));
label_32f898:
    // 0x32f898: 0x7ca200e0  sq          $v0, 0xE0($a1)
    ctx->pc = 0x32f898u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 224), GPR_VEC(ctx, 2));
label_32f89c:
    // 0x32f89c: 0x24a200f0  addiu       $v0, $a1, 0xF0
    ctx->pc = 0x32f89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 240));
label_32f8a0:
    // 0x32f8a0: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x32f8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_32f8a4:
    // 0x32f8a4: 0x3c046c01  lui         $a0, 0x6C01
    ctx->pc = 0x32f8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27649 << 16));
label_32f8a8:
    // 0x32f8a8: 0x348403fa  ori         $a0, $a0, 0x3FA
    ctx->pc = 0x32f8a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1018);
label_32f8ac:
    // 0x32f8ac: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x32f8acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_32f8b0:
    // 0x32f8b0: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x32f8b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
label_32f8b4:
    // 0x32f8b4: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x32f8b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_32f8b8:
    // 0x32f8b8: 0x34840404  ori         $a0, $a0, 0x404
    ctx->pc = 0x32f8b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1028);
label_32f8bc:
    // 0x32f8bc: 0x70892389  pcpyld      $a0, $a0, $t1
    ctx->pc = 0x32f8bcu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
label_32f8c0:
    // 0x32f8c0: 0x7ca400f0  sq          $a0, 0xF0($a1)
    ctx->pc = 0x32f8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 240), GPR_VEC(ctx, 4));
label_32f8c4:
    // 0x32f8c4: 0x24a50100  addiu       $a1, $a1, 0x100
    ctx->pc = 0x32f8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 256));
label_32f8c8:
    // 0x32f8c8: 0xaf85be20  sw          $a1, -0x41E0($gp)
    ctx->pc = 0x32f8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 5));
label_32f8cc:
    // 0x32f8cc: 0x92620047  lbu         $v0, 0x47($s3)
    ctx->pc = 0x32f8ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 71)));
label_32f8d0:
    // 0x32f8d0: 0x8f83bec4  lw          $v1, -0x413C($gp)
    ctx->pc = 0x32f8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950596)));
label_32f8d4:
    // 0x32f8d4: 0x384200ff  xori        $v0, $v0, 0xFF
    ctx->pc = 0x32f8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)255);
label_32f8d8:
    // 0x32f8d8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x32f8d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_32f8dc:
    // 0x32f8dc: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x32f8dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_32f8e0:
    // 0x32f8e0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_32f8e4:
    if (ctx->pc == 0x32F8E4u) {
        ctx->pc = 0x32F8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F8E0u;
        // 0x32f8e4: 0xaf82bec8  sw          $v0, -0x4138($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950600), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32F8E8u;
        goto label_32f8e8;
    }
    ctx->pc = 0x32F8E0u;
    {
        const bool branch_taken_0x32f8e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F8E0u;
        // 0x32f8e4: 0xaf82bec8  sw          $v0, -0x4138($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950600), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f8e0) {
            ctx->pc = 0x32F8F8u;
            goto label_32f8f8;
        }
    }
    ctx->pc = 0x32F8E8u;
label_32f8e8:
    // 0x32f8e8: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x32f8e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
label_32f8ec:
    // 0x32f8ec: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x32f8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_32f8f0:
    // 0x32f8f0: 0x10000004  b           . + 4 + (0x4 << 2)
label_32f8f4:
    if (ctx->pc == 0x32F8F4u) {
        ctx->pc = 0x32F8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F8F0u;
        // 0x32f8f4: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32F8F8u;
        goto label_32f8f8;
    }
    ctx->pc = 0x32F8F0u;
    {
        const bool branch_taken_0x32f8f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F8F0u;
        // 0x32f8f4: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f8f0) {
            ctx->pc = 0x32F904u;
            goto label_32f904;
        }
    }
    ctx->pc = 0x32F8F8u;
label_32f8f8:
    // 0x32f8f8: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x32f8f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
label_32f8fc:
    // 0x32f8fc: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x32f8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
label_32f900:
    // 0x32f900: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x32f900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_32f904:
    // 0x32f904: 0xff82ae80  sd          $v0, -0x5180($gp)
    ctx->pc = 0x32f904u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946432), GPR_U64(ctx, 2));
label_32f908:
    // 0x32f908: 0x92660029  lbu         $a2, 0x29($s3)
    ctx->pc = 0x32f908u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 41)));
label_32f90c:
    // 0x32f90c: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x32f90cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_32f910:
    // 0x32f910: 0x8f82ae80  lw          $v0, -0x5180($gp)
    ctx->pc = 0x32f910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946432)));
label_32f914:
    // 0x32f914: 0x3c07fc00  lui         $a3, 0xFC00
    ctx->pc = 0x32f914u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64512 << 16));
label_32f918:
    // 0x32f918: 0x34e77fff  ori         $a3, $a3, 0x7FFF
    ctx->pc = 0x32f918u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32767);
label_32f91c:
    // 0x32f91c: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x32f91cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
label_32f920:
    // 0x32f920: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x32f920u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_32f924:
    // 0x32f924: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x32f924u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
label_32f928:
    // 0x32f928: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x32f928u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_32f92c:
    // 0x32f92c: 0xdc64d5d0  ld          $a0, -0x2A30($v1)
    ctx->pc = 0x32f92cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 4294956496)));
label_32f930:
    // 0x32f930: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x32f930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_32f934:
    // 0x32f934: 0x2463d5d0  addiu       $v1, $v1, -0x2A30
    ctx->pc = 0x32f934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956496));
label_32f938:
    // 0x32f938: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x32f938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
label_32f93c:
    // 0x32f93c: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x32f93cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
label_32f940:
    // 0x32f940: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x32f940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
label_32f944:
    // 0x32f944: 0xdc650008  ld          $a1, 0x8($v1)
    ctx->pc = 0x32f944u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 8)));
label_32f948:
    // 0x32f948: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x32f948u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_32f94c:
    // 0x32f94c: 0x70a42389  pcpyld      $a0, $a1, $a0
    ctx->pc = 0x32f94cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_32f950:
    // 0x32f950: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x32f950u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_32f954:
    // 0x32f954: 0x8f86be20  lw          $a2, -0x41E0($gp)
    ctx->pc = 0x32f954u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_32f958:
    // 0x32f958: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x32f958u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
label_32f95c:
    // 0x32f95c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x32f95cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_32f960:
    // 0x32f960: 0xaf86be20  sw          $a2, -0x41E0($gp)
    ctx->pc = 0x32f960u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 6));
label_32f964:
    // 0x32f964: 0x3c026c01  lui         $v0, 0x6C01
    ctx->pc = 0x32f964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27649 << 16));
label_32f968:
    // 0x32f968: 0x344203fb  ori         $v0, $v0, 0x3FB
    ctx->pc = 0x32f968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1019);
label_32f96c:
    // 0x32f96c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x32f96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_32f970:
    // 0x32f970: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x32f970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_32f974:
    // 0x32f974: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x32f974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_32f978:
    // 0x32f978: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x32f978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
label_32f97c:
    // 0x32f97c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32f97cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32f980:
    // 0x32f980: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x32f980u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
label_32f984:
    // 0x32f984: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x32f984u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_32f988:
    // 0x32f988: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x32f988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_32f98c:
    // 0x32f98c: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x32f98cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_32f990:
    // 0x32f990: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x32f990u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
label_32f994:
    // 0x32f994: 0xc7858054  lwc1        $f5, -0x7FAC($gp)
    ctx->pc = 0x32f994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_32f998:
    // 0x32f998: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x32f998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_32f99c:
    // 0x32f99c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_32f9a0:
    if (ctx->pc == 0x32F9A0u) {
        ctx->pc = 0x32F9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F99Cu;
        // 0x32f9a0: 0x92620044  lbu         $v0, 0x44($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32F9A4u;
        goto label_32f9a4;
    }
    ctx->pc = 0x32F99Cu;
    {
        const bool branch_taken_0x32f99c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F99Cu;
        // 0x32f9a0: 0x92620044  lbu         $v0, 0x44($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f99c) {
            ctx->pc = 0x32F9A8u;
            goto label_32f9a8;
        }
    }
    ctx->pc = 0x32F9A4u;
label_32f9a4:
    // 0x32f9a4: 0xc7858434  lwc1        $f5, -0x7BCC($gp)
    ctx->pc = 0x32f9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_32f9a8:
    // 0x32f9a8: 0x92630045  lbu         $v1, 0x45($s3)
    ctx->pc = 0x32f9a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 69)));
label_32f9ac:
    // 0x32f9ac: 0x92640046  lbu         $a0, 0x46($s3)
    ctx->pc = 0x32f9acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 70)));
label_32f9b0:
    // 0x32f9b0: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x32f9b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_32f9b4:
    // 0x32f9b4: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x32f9b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_32f9b8:
    // 0x32f9b8: 0x92650047  lbu         $a1, 0x47($s3)
    ctx->pc = 0x32f9b8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 71)));
label_32f9bc:
    // 0x32f9bc: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x32f9bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_32f9c0:
    // 0x32f9c0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x32f9c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_32f9c4:
    // 0x32f9c4: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x32f9c4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_32f9c8:
    // 0x32f9c8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x32f9c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_32f9cc:
    // 0x32f9cc: 0xc7818434  lwc1        $f1, -0x7BCC($gp)
    ctx->pc = 0x32f9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_32f9d0:
    // 0x32f9d0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x32f9d0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32f9d4:
    // 0x32f9d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32f9d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_32f9d8:
    // 0x32f9d8: 0x46010182  mul.s       $f6, $f0, $f1
    ctx->pc = 0x32f9d8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_32f9dc:
    // 0x32f9dc: 0x460519c2  mul.s       $f7, $f3, $f5
    ctx->pc = 0x32f9dcu;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
label_32f9e0:
    // 0x32f9e0: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x32f9e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_32f9e4:
    // 0x32f9e4: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x32f9e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_32f9e8:
    // 0x32f9e8: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x32f9e8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
label_32f9ec:
    // 0x32f9ec: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x32f9ecu;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
label_32f9f0:
    // 0x32f9f0: 0x46051182  mul.s       $f6, $f2, $f5
    ctx->pc = 0x32f9f0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_32f9f4:
    // 0x32f9f4: 0x460521c2  mul.s       $f7, $f4, $f5
    ctx->pc = 0x32f9f4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
label_32f9f8:
    // 0x32f9f8: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x32f9f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_32f9fc:
    // 0x32f9fc: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x32f9fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_32fa00:
    // 0x32fa00: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x32fa00u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_32fa04:
    // 0x32fa04: 0x7cc20010  sq          $v0, 0x10($a2)
    ctx->pc = 0x32fa04u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
label_32fa08:
    // 0x32fa08: 0x24c30020  addiu       $v1, $a2, 0x20
    ctx->pc = 0x32fa08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
label_32fa0c:
    // 0x32fa0c: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x32fa0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_32fa10:
    // 0x32fa10: 0x3c026c01  lui         $v0, 0x6C01
    ctx->pc = 0x32fa10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27649 << 16));
label_32fa14:
    // 0x32fa14: 0x344203fc  ori         $v0, $v0, 0x3FC
    ctx->pc = 0x32fa14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1020);
label_32fa18:
    // 0x32fa18: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x32fa18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_32fa1c:
    // 0x32fa1c: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x32fa1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_32fa20:
    // 0x32fa20: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x32fa20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_32fa24:
    // 0x32fa24: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x32fa24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
label_32fa28:
    // 0x32fa28: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x32fa28u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
label_32fa2c:
    // 0x32fa2c: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x32fa2cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 2));
label_32fa30:
    // 0x32fa30: 0x24c30030  addiu       $v1, $a2, 0x30
    ctx->pc = 0x32fa30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
label_32fa34:
    // 0x32fa34: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x32fa34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_32fa38:
    // 0x32fa38: 0x8e62003c  lw          $v0, 0x3C($s3)
    ctx->pc = 0x32fa38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
label_32fa3c:
    // 0x32fa3c: 0xc7848240  lwc1        $f4, -0x7DC0($gp)
    ctx->pc = 0x32fa3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_32fa40:
    // 0x32fa40: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x32fa40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_32fa44:
    // 0x32fa44: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x32fa44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_32fa48:
    // 0x32fa48: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x32fa48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_32fa4c:
    // 0x32fa4c: 0xc660001c  lwc1        $f0, 0x1C($s3)
    ctx->pc = 0x32fa4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32fa50:
    // 0x32fa50: 0x46040942  mul.s       $f5, $f1, $f4
    ctx->pc = 0x32fa50u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_32fa54:
    // 0x32fa54: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x32fa54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_32fa58:
    // 0x32fa58: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x32fa58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_32fa5c:
    // 0x32fa5c: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x32fa5cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
label_32fa60:
    // 0x32fa60: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x32fa60u;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
label_32fa64:
    // 0x32fa64: 0x46041982  mul.s       $f6, $f3, $f4
    ctx->pc = 0x32fa64u;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_32fa68:
    // 0x32fa68: 0x46041142  mul.s       $f5, $f2, $f4
    ctx->pc = 0x32fa68u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_32fa6c:
    // 0x32fa6c: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x32fa6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_32fa70:
    // 0x32fa70: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x32fa70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_32fa74:
    // 0x32fa74: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x32fa74u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_32fa78:
    // 0x32fa78: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x32fa78u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
label_32fa7c:
    // 0x32fa7c: 0x24c30040  addiu       $v1, $a2, 0x40
    ctx->pc = 0x32fa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
label_32fa80:
    // 0x32fa80: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x32fa80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_32fa84:
    // 0x32fa84: 0x92620028  lbu         $v0, 0x28($s3)
    ctx->pc = 0x32fa84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 40)));
label_32fa88:
    // 0x32fa88: 0x3c046c03  lui         $a0, 0x6C03
    ctx->pc = 0x32fa88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27651 << 16));
label_32fa8c:
    // 0x32fa8c: 0x348403fd  ori         $a0, $a0, 0x3FD
    ctx->pc = 0x32fa8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1021);
label_32fa90:
    // 0x32fa90: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x32fa90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_32fa94:
    // 0x32fa94: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x32fa94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
label_32fa98:
    // 0x32fa98: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x32fa98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_32fa9c:
    // 0x32fa9c: 0x34840404  ori         $a0, $a0, 0x404
    ctx->pc = 0x32fa9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1028);
label_32faa0:
    // 0x32faa0: 0x70871b89  pcpyld      $v1, $a0, $a3
    ctx->pc = 0x32faa0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
label_32faa4:
    // 0x32faa4: 0x30470007  andi        $a3, $v0, 0x7
    ctx->pc = 0x32faa4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_32faa8:
    // 0x32faa8: 0x7cc30040  sq          $v1, 0x40($a2)
    ctx->pc = 0x32faa8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), GPR_VEC(ctx, 3));
label_32faac:
    // 0x32faac: 0x24c20050  addiu       $v0, $a2, 0x50
    ctx->pc = 0x32faacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
label_32fab0:
    // 0x32fab0: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x32fab0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_32fab4:
    // 0x32fab4: 0x8f83aee0  lw          $v1, -0x5120($gp)
    ctx->pc = 0x32fab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946528)));
label_32fab8:
    // 0x32fab8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_32fabc:
    if (ctx->pc == 0x32FABCu) {
        ctx->pc = 0x32FABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FAB8u;
        // 0x32fabc: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FAC0u;
        goto label_32fac0;
    }
    ctx->pc = 0x32FAB8u;
    {
        const bool branch_taken_0x32fab8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32FABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FAB8u;
        // 0x32fabc: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fab8) {
            ctx->pc = 0x32FAC8u;
            goto label_32fac8;
        }
    }
    ctx->pc = 0x32FAC0u;
label_32fac0:
    // 0x32fac0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_32fac4:
    if (ctx->pc == 0x32FAC4u) {
        ctx->pc = 0x32FAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FAC0u;
        // 0x32fac4: 0x34e70008  ori         $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FAC8u;
        goto label_32fac8;
    }
    ctx->pc = 0x32FAC0u;
    {
        const bool branch_taken_0x32fac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32fac0) {
            ctx->pc = 0x32FAC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32FAC0u;
            // 0x32fac4: 0x34e70008  ori         $a3, $a3, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x32FAE0u;
            goto label_32fae0;
        }
    }
    ctx->pc = 0x32FAC8u;
label_32fac8:
    // 0x32fac8: 0x8f82aee4  lw          $v0, -0x511C($gp)
    ctx->pc = 0x32fac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946532)));
label_32facc:
    // 0x32facc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_32fad0:
    if (ctx->pc == 0x32FAD0u) {
        ctx->pc = 0x32FAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FACCu;
        // 0x32fad0: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FAD4u;
        goto label_32fad4;
    }
    ctx->pc = 0x32FACCu;
    {
        const bool branch_taken_0x32facc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32FAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FACCu;
        // 0x32fad0: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32facc) {
            ctx->pc = 0x32FB08u;
            goto label_32fb08;
        }
    }
    ctx->pc = 0x32FAD4u;
label_32fad4:
    // 0x32fad4: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_32fad8:
    if (ctx->pc == 0x32FAD8u) {
        ctx->pc = 0x32FAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FAD4u;
        // 0x32fad8: 0x3c03005e  lui         $v1, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FADCu;
        goto label_32fadc;
    }
    ctx->pc = 0x32FAD4u;
    {
        const bool branch_taken_0x32fad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32fad4) {
            ctx->pc = 0x32FAD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32FAD4u;
            // 0x32fad8: 0x3c03005e  lui         $v1, 0x5E (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32FB10u;
            goto label_32fb10;
        }
    }
    ctx->pc = 0x32FADCu;
label_32fadc:
    // 0x32fadc: 0x34e70008  ori         $a3, $a3, 0x8
    ctx->pc = 0x32fadcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
label_32fae0:
    // 0x32fae0: 0x8f84be20  lw          $a0, -0x41E0($gp)
    ctx->pc = 0x32fae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_32fae4:
    // 0x32fae4: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x32fae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_32fae8:
    // 0x32fae8: 0x2463d670  addiu       $v1, $v1, -0x2990
    ctx->pc = 0x32fae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956656));
label_32faec:
    // 0x32faec: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x32faecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_32faf0:
    // 0x32faf0: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x32faf0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_32faf4:
    // 0x32faf4: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x32faf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_32faf8:
    // 0x32faf8: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x32faf8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
label_32fafc:
    // 0x32fafc: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x32fafcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_32fb00:
    // 0x32fb00: 0x1000000b  b           . + 4 + (0xB << 2)
label_32fb04:
    if (ctx->pc == 0x32FB04u) {
        ctx->pc = 0x32FB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FB00u;
        // 0x32fb04: 0x2463d680  addiu       $v1, $v1, -0x2980 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FB08u;
        goto label_32fb08;
    }
    ctx->pc = 0x32FB00u;
    {
        const bool branch_taken_0x32fb00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32FB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FB00u;
        // 0x32fb04: 0x2463d680  addiu       $v1, $v1, -0x2980 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fb00) {
            ctx->pc = 0x32FB30u;
            goto label_32fb30;
        }
    }
    ctx->pc = 0x32FB08u;
label_32fb08:
    // 0x32fb08: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x32fb08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_32fb0c:
    // 0x32fb0c: 0x0  nop
    ctx->pc = 0x32fb0cu;
    // NOP
label_32fb10:
    // 0x32fb10: 0x8f84be20  lw          $a0, -0x41E0($gp)
    ctx->pc = 0x32fb10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_32fb14:
    // 0x32fb14: 0x2463d650  addiu       $v1, $v1, -0x29B0
    ctx->pc = 0x32fb14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956624));
label_32fb18:
    // 0x32fb18: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x32fb18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_32fb1c:
    // 0x32fb1c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x32fb1cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_32fb20:
    // 0x32fb20: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x32fb20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_32fb24:
    // 0x32fb24: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x32fb24u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
label_32fb28:
    // 0x32fb28: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x32fb28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_32fb2c:
    // 0x32fb2c: 0x2463d660  addiu       $v1, $v1, -0x29A0
    ctx->pc = 0x32fb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956640));
label_32fb30:
    // 0x32fb30: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x32fb30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_32fb34:
    // 0x32fb34: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x32fb34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_32fb38:
    // 0x32fb38: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x32fb38u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_32fb3c:
    // 0x32fb3c: 0xaf85be20  sw          $a1, -0x41E0($gp)
    ctx->pc = 0x32fb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 5));
label_32fb40:
    // 0x32fb40: 0x8f83becc  lw          $v1, -0x4134($gp)
    ctx->pc = 0x32fb40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950604)));
label_32fb44:
    // 0x32fb44: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x32fb44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_32fb48:
    // 0x32fb48: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_32fb4c:
    if (ctx->pc == 0x32FB4Cu) {
        ctx->pc = 0x32FB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FB48u;
        // 0x32fb4c: 0xaf80aed8  sw          $zero, -0x5128($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946520), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FB50u;
        goto label_32fb50;
    }
    ctx->pc = 0x32FB48u;
    {
        const bool branch_taken_0x32fb48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x32FB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FB48u;
        // 0x32fb4c: 0xaf80aed8  sw          $zero, -0x5128($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946520), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fb48) {
            ctx->pc = 0x32FB58u;
            goto label_32fb58;
        }
    }
    ctx->pc = 0x32FB50u;
label_32fb50:
    // 0x32fb50: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x32fb50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_32fb54:
    // 0x32fb54: 0xaf82aed8  sw          $v0, -0x5128($gp)
    ctx->pc = 0x32fb54u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946520), GPR_U32(ctx, 2));
label_32fb58:
    // 0x32fb58: 0x9f82aedc  lwu         $v0, -0x5124($gp)
    ctx->pc = 0x32fb58u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294946524)));
label_32fb5c:
    // 0x32fb5c: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x32fb5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
label_32fb60:
    // 0x32fb60: 0x9f84aed8  lwu         $a0, -0x5128($gp)
    ctx->pc = 0x32fb60u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294946520)));
label_32fb64:
    // 0x32fb64: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x32fb64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_32fb68:
    // 0x32fb68: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x32fb68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_32fb6c:
    // 0x32fb6c: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x32fb6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_32fb70:
    // 0x32fb70: 0x70831b89  pcpyld      $v1, $a0, $v1
    ctx->pc = 0x32fb70u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
label_32fb74:
    // 0x32fb74: 0x8f84be20  lw          $a0, -0x41E0($gp)
    ctx->pc = 0x32fb74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_32fb78:
    // 0x32fb78: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x32fb78u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_32fb7c:
    // 0x32fb7c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x32fb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_32fb80:
    // 0x32fb80: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x32fb80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
label_32fb84:
    // 0x32fb84: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x32fb84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_32fb88:
    // 0x32fb88: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_32fb8c:
    if (ctx->pc == 0x32FB8Cu) {
        ctx->pc = 0x32FB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FB88u;
        // 0x32fb8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FB90u;
        goto label_32fb90;
    }
    ctx->pc = 0x32FB88u;
    {
        const bool branch_taken_0x32fb88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32FB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FB88u;
        // 0x32fb8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fb88) {
            ctx->pc = 0x32FC08u;
            goto label_32fc08;
        }
    }
    ctx->pc = 0x32FB90u;
label_32fb90:
    // 0x32fb90: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x32fb90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
label_32fb94:
    // 0x32fb94: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x32fb94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_32fb98:
    // 0x32fb98: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x32fb98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_32fb9c:
    // 0x32fb9c: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x32fb9cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_32fba0:
    // 0x32fba0: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x32fba0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_32fba4:
    // 0x32fba4: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x32fba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_32fba8:
    // 0x32fba8: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x32fba8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_32fbac:
    // 0x32fbac: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x32fbacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_32fbb0:
    // 0x32fbb0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x32fbb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_32fbb4:
    // 0x32fbb4: 0x34428003  ori         $v0, $v0, 0x8003
    ctx->pc = 0x32fbb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32771);
label_32fbb8:
    // 0x32fbb8: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x32fbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_32fbbc:
    // 0x32fbbc: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x32fbbcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_32fbc0:
    // 0x32fbc0: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x32fbc0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
label_32fbc4:
    // 0x32fbc4: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x32fbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_32fbc8:
    // 0x32fbc8: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x32fbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_32fbcc:
    // 0x32fbcc: 0xdf82ae48  ld          $v0, -0x51B8($gp)
    ctx->pc = 0x32fbccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
label_32fbd0:
    // 0x32fbd0: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x32fbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_32fbd4:
    // 0x32fbd4: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x32fbd4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_32fbd8:
    // 0x32fbd8: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x32fbd8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
label_32fbdc:
    // 0x32fbdc: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x32fbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_32fbe0:
    // 0x32fbe0: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x32fbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_32fbe4:
    // 0x32fbe4: 0xdf82ae68  ld          $v0, -0x5198($gp)
    ctx->pc = 0x32fbe4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946408)));
label_32fbe8:
    // 0x32fbe8: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x32fbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_32fbec:
    // 0x32fbec: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x32fbecu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_32fbf0:
    // 0x32fbf0: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x32fbf0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
label_32fbf4:
    // 0x32fbf4: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x32fbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_32fbf8:
    // 0x32fbf8: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x32fbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_32fbfc:
    // 0x32fbfc: 0xdf82ae60  ld          $v0, -0x51A0($gp)
    ctx->pc = 0x32fbfcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946400)));
label_32fc00:
    // 0x32fc00: 0x1000001b  b           . + 4 + (0x1B << 2)
label_32fc04:
    if (ctx->pc == 0x32FC04u) {
        ctx->pc = 0x32FC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FC00u;
        // 0x32fc04: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FC08u;
        goto label_32fc08;
    }
    ctx->pc = 0x32FC00u;
    {
        const bool branch_taken_0x32fc00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32FC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FC00u;
        // 0x32fc04: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fc00) {
            ctx->pc = 0x32FC70u;
            goto label_32fc70;
        }
    }
    ctx->pc = 0x32FC08u;
label_32fc08:
    // 0x32fc08: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x32fc08u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_32fc0c:
    // 0x32fc0c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x32fc0cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_32fc10:
    // 0x32fc10: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x32fc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_32fc14:
    // 0x32fc14: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x32fc14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_32fc18:
    // 0x32fc18: 0x70001ca9  por         $v1, $zero, $zero
    ctx->pc = 0x32fc18u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_32fc1c:
    // 0x32fc1c: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x32fc1cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
label_32fc20:
    // 0x32fc20: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x32fc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_32fc24:
    // 0x32fc24: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x32fc24u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_32fc28:
    // 0x32fc28: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x32fc28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
label_32fc2c:
    // 0x32fc2c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x32fc2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_32fc30:
    // 0x32fc30: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x32fc30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_32fc34:
    // 0x32fc34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32fc34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32fc38:
    // 0x32fc38: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x32fc38u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_32fc3c:
    // 0x32fc3c: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x32fc3cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
label_32fc40:
    // 0x32fc40: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x32fc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_32fc44:
    // 0x32fc44: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x32fc44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_32fc48:
    // 0x32fc48: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x32fc48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_32fc4c:
    // 0x32fc4c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x32fc4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_32fc50:
    // 0x32fc50: 0x34428001  ori         $v0, $v0, 0x8001
    ctx->pc = 0x32fc50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
label_32fc54:
    // 0x32fc54: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x32fc54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_32fc58:
    // 0x32fc58: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x32fc58u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_32fc5c:
    // 0x32fc5c: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x32fc5cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
label_32fc60:
    // 0x32fc60: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x32fc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_32fc64:
    // 0x32fc64: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x32fc64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_32fc68:
    // 0x32fc68: 0xdf82ae48  ld          $v0, -0x51B8($gp)
    ctx->pc = 0x32fc68u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
label_32fc6c:
    // 0x32fc6c: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x32fc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_32fc70:
    // 0x32fc70: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x32fc70u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_32fc74:
    // 0x32fc74: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x32fc74u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
label_32fc78:
    // 0x32fc78: 0x24820050  addiu       $v0, $a0, 0x50
    ctx->pc = 0x32fc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
label_32fc7c:
    // 0x32fc7c: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x32fc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_32fc80:
    // 0x32fc80: 0x92630028  lbu         $v1, 0x28($s3)
    ctx->pc = 0x32fc80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 40)));
label_32fc84:
    // 0x32fc84: 0x30640010  andi        $a0, $v1, 0x10
    ctx->pc = 0x32fc84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_32fc88:
    // 0x32fc88: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x32fc88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_32fc8c:
    // 0x32fc8c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x32fc8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_32fc90:
    // 0x32fc90: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x32fc90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_32fc94:
    // 0x32fc94: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x32fc94u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_32fc98:
    // 0x32fc98: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x32fc98u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
label_32fc9c:
    // 0x32fc9c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32fc9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_32fca0:
    // 0x32fca0: 0xa262002b  sb          $v0, 0x2B($s3)
    ctx->pc = 0x32fca0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 43), (uint8_t)GPR_U32(ctx, 2));
label_32fca4:
    // 0x32fca4: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x32fca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_32fca8:
    // 0x32fca8: 0x8f85aed4  lw          $a1, -0x512C($gp)
    ctx->pc = 0x32fca8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946516)));
label_32fcac:
    // 0x32fcac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x32fcacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_32fcb0:
    // 0x32fcb0: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x32fcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_32fcb4:
    // 0x32fcb4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x32fcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_32fcb8:
    // 0x32fcb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32fcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_32fcbc:
    // 0x32fcbc: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x32fcbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32fcc0:
    // 0x32fcc0: 0x10a6000b  beq         $a1, $a2, . + 4 + (0xB << 2)
label_32fcc4:
    if (ctx->pc == 0x32FCC4u) {
        ctx->pc = 0x32FCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FCC0u;
        // 0x32fcc4: 0x6203c  dsll32      $a0, $a2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FCC8u;
        goto label_32fcc8;
    }
    ctx->pc = 0x32FCC0u;
    {
        const bool branch_taken_0x32fcc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x32FCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FCC0u;
        // 0x32fcc4: 0x6203c  dsll32      $a0, $a2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fcc0) {
            ctx->pc = 0x32FCF0u;
            goto label_32fcf0;
        }
    }
    ctx->pc = 0x32FCC8u;
label_32fcc8:
    // 0x32fcc8: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x32fcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
label_32fccc:
    // 0x32fccc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x32fcccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_32fcd0:
    // 0x32fcd0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32fcd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32fcd4:
    // 0x32fcd4: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x32fcd4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
label_32fcd8:
    // 0x32fcd8: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x32fcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_32fcdc:
    // 0x32fcdc: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x32fcdcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_32fce0:
    // 0x32fce0: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x32fce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_32fce4:
    // 0x32fce4: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x32fce4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_32fce8:
    // 0x32fce8: 0xaf86aed4  sw          $a2, -0x512C($gp)
    ctx->pc = 0x32fce8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946516), GPR_U32(ctx, 6));
label_32fcec:
    // 0x32fcec: 0x0  nop
    ctx->pc = 0x32fcecu;
    // NOP
label_32fcf0:
    // 0x32fcf0: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x32fcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_32fcf4:
    // 0x32fcf4: 0x3c070200  lui         $a3, 0x200
    ctx->pc = 0x32fcf4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)512 << 16));
label_32fcf8:
    // 0x32fcf8: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x32fcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_32fcfc:
    // 0x32fcfc: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x32fcfcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
label_32fd00:
    // 0x32fd00: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x32fd00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32fd04:
    // 0x32fd04: 0x3c060300  lui         $a2, 0x300
    ctx->pc = 0x32fd04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)768 << 16));
label_32fd08:
    // 0x32fd08: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x32fd08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_32fd0c:
    // 0x32fd0c: 0x24a90018  addiu       $t1, $a1, 0x18
    ctx->pc = 0x32fd0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
label_32fd10:
    // 0x32fd10: 0x9d240008  lwu         $a0, 0x8($t1)
    ctx->pc = 0x32fd10u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 9), 8)));
label_32fd14:
    // 0x32fd14: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x32fd14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_32fd18:
    // 0x32fd18: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x32fd18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_32fd1c:
    // 0x32fd1c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x32fd1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_32fd20:
    // 0x32fd20: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x32fd20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_32fd24:
    // 0x32fd24: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x32fd24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
label_32fd28:
    // 0x32fd28: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x32fd28u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
label_32fd2c:
    // 0x32fd2c: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x32fd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_32fd30:
    // 0x32fd30: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x32fd30u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_32fd34:
    // 0x32fd34: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x32fd34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_32fd38:
    // 0x32fd38: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x32fd38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_32fd3c:
    // 0x32fd3c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x32fd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_32fd40:
    // 0x32fd40: 0x42000039  di
    ctx->pc = 0x32fd40u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
label_32fd44:
    // 0x32fd44: 0x40f  sync.p
    ctx->pc = 0x32fd44u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_32fd48:
    // 0x32fd48: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x32fd48u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
label_32fd4c:
    // 0x32fd4c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x32fd4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_32fd50:
    // 0x32fd50: 0x0  nop
    ctx->pc = 0x32fd50u;
    // NOP
label_32fd54:
    // 0x32fd54: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_32fd58:
    if (ctx->pc == 0x32FD58u) {
        ctx->pc = 0x32FD5Cu;
        goto label_32fd5c;
    }
    ctx->pc = 0x32FD54u;
    {
        const bool branch_taken_0x32fd54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32fd54) {
            ctx->pc = 0x32FD40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32fd40;
        }
    }
    ctx->pc = 0x32FD5Cu;
label_32fd5c:
    // 0x32fd5c: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x32fd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_32fd60:
    // 0x32fd60: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32fd60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_32fd64:
    // 0x32fd64: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x32fd64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
label_32fd68:
    // 0x32fd68: 0x42000038  ei
    ctx->pc = 0x32fd68u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_32fd6c:
    // 0x32fd6c: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x32fd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_32fd70:
    // 0x32fd70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32fd70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32fd74:
    // 0x32fd74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32fd74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_32fd78:
    // 0x32fd78: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_32fd7c:
    if (ctx->pc == 0x32FD7Cu) {
        ctx->pc = 0x32FD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FD78u;
        // 0x32fd7c: 0xad220004  sw          $v0, 0x4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FD80u;
        goto label_32fd80;
    }
    ctx->pc = 0x32FD78u;
    {
        const bool branch_taken_0x32fd78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x32FD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FD78u;
        // 0x32fd7c: 0xad220004  sw          $v0, 0x4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fd78) {
            ctx->pc = 0x32FD88u;
            goto label_32fd88;
        }
    }
    ctx->pc = 0x32FD80u;
label_32fd80:
    // 0x32fd80: 0xc10a762  jal         func_429D88
label_32fd84:
    if (ctx->pc == 0x32FD84u) {
        ctx->pc = 0x32FD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FD80u;
        // 0x32fd84: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FD88u;
        goto label_32fd88;
    }
    ctx->pc = 0x32FD80u;
    SET_GPR_U32(ctx, 31, 0x32FD88u);
    ctx->pc = 0x32FD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FD80u;
    // 0x32fd84: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x429D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x429D88u, 0x32FD80u, 0x32FD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FD88u;
label_32fd88:
    // 0x32fd88: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x32fd88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32fd8c:
    // 0x32fd8c: 0xc10a322  jal         func_428C88
label_32fd90:
    if (ctx->pc == 0x32FD90u) {
        ctx->pc = 0x32FD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FD8Cu;
        // 0x32fd90: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FD94u;
        goto label_32fd94;
    }
    ctx->pc = 0x32FD8Cu;
    SET_GPR_U32(ctx, 31, 0x32FD94u);
    ctx->pc = 0x32FD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FD8Cu;
    // 0x32fd90: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x32FD8Cu, 0x32FD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FD94u;
label_32fd94:
    // 0x32fd94: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x32fd94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
label_32fd98:
    // 0x32fd98: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32fd98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32fd9c:
    // 0x32fd9c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x32fd9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_32fda0:
    // 0x32fda0: 0x70621cc8  ppacw       $v1, $v1, $v0
    ctx->pc = 0x32fda0u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_32fda4:
    // 0x32fda4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x32fda4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_32fda8:
    // 0x32fda8: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x32fda8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
label_32fdac:
    // 0x32fdac: 0x704414c8  ppacw       $v0, $v0, $a0
    ctx->pc = 0x32fdacu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
label_32fdb0:
    // 0x32fdb0: 0x70621cc8  ppacw       $v1, $v1, $v0
    ctx->pc = 0x32fdb0u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_32fdb4:
    // 0x32fdb4: 0x8f84be20  lw          $a0, -0x41E0($gp)
    ctx->pc = 0x32fdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_32fdb8:
    // 0x32fdb8: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x32fdb8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_32fdbc:
    // 0x32fdbc: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x32fdbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_32fdc0:
    // 0x32fdc0: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x32fdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
label_32fdc4:
    // 0x32fdc4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x32fdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_32fdc8:
    // 0x32fdc8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x32fdc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_32fdcc:
    // 0x32fdcc: 0x34638001  ori         $v1, $v1, 0x8001
    ctx->pc = 0x32fdccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32769);
label_32fdd0:
    // 0x32fdd0: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x32fdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_32fdd4:
    // 0x32fdd4: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x32fdd4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_32fdd8:
    // 0x32fdd8: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x32fdd8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_32fddc:
    // 0x32fddc: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x32fddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_32fde0:
    // 0x32fde0: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x32fde0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_32fde4:
    // 0x32fde4: 0x2403003d  addiu       $v1, $zero, 0x3D
    ctx->pc = 0x32fde4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
label_32fde8:
    // 0x32fde8: 0xdf82ae58  ld          $v0, -0x51A8($gp)
    ctx->pc = 0x32fde8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946392)));
label_32fdec:
    // 0x32fdec: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x32fdecu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_32fdf0:
    // 0x32fdf0: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x32fdf0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
label_32fdf4:
    // 0x32fdf4: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x32fdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_32fdf8:
    // 0x32fdf8: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x32fdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
label_32fdfc:
    // 0x32fdfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32fdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32fe00:
    // 0x32fe00: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x32fe00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_32fe04:
    // 0x32fe04: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x32fe04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_32fe08:
    // 0x32fe08: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x32fe08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_32fe0c:
    // 0x32fe0c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x32fe0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_32fe10:
    // 0x32fe10: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x32fe10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_32fe14:
    // 0x32fe14: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x32fe14u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_32fe18:
    // 0x32fe18: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x32fe18u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_32fe1c:
    // 0x32fe1c: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x32fe1cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_32fe20:
    // 0x32fe20: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x32fe20u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_32fe24:
    // 0x32fe24: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32fe24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_32fe28:
    // 0x32fe28: 0x3e00008  jr          $ra
label_32fe2c:
    if (ctx->pc == 0x32FE2Cu) {
        ctx->pc = 0x32FE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FE28u;
        // 0x32fe2c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FE30u;
        goto label_32fe30;
    }
    ctx->pc = 0x32FE28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32FE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FE28u;
        // 0x32fe2c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FE28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32FE30u;
label_32fe30:
    // 0x32fe30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32fe30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_32fe34:
    // 0x32fe34: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32fe34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_32fe38:
    // 0x32fe38: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x32fe38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_32fe3c:
    // 0x32fe3c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32fe3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32fe40:
    // 0x32fe40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32fe40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_32fe44:
    // 0x32fe44: 0x8f84a634  lw          $a0, -0x59CC($gp)
    ctx->pc = 0x32fe44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944308)));
label_32fe48:
    // 0x32fe48: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x32fe48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_32fe4c:
    // 0x32fe4c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x32fe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_32fe50:
    // 0x32fe50: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x32fe50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_32fe54:
    // 0x32fe54: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x32fe54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32fe58:
    // 0x32fe58: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_32fe5c:
    if (ctx->pc == 0x32FE5Cu) {
        ctx->pc = 0x32FE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FE58u;
        // 0x32fe5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FE60u;
        goto label_32fe60;
    }
    ctx->pc = 0x32FE58u;
    {
        const bool branch_taken_0x32fe58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32FE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FE58u;
        // 0x32fe5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fe58) {
            ctx->pc = 0x32FE64u;
            goto label_32fe64;
        }
    }
    ctx->pc = 0x32FE60u;
label_32fe60:
    // 0x32fe60: 0x8c450080  lw          $a1, 0x80($v0)
    ctx->pc = 0x32fe60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_32fe64:
    // 0x32fe64: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x32fe64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_32fe68:
    // 0x32fe68: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x32fe68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
label_32fe6c:
    // 0x32fe6c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x32fe6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_32fe70:
    // 0x32fe70: 0x24632390  addiu       $v1, $v1, 0x2390
    ctx->pc = 0x32fe70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9104));
label_32fe74:
    // 0x32fe74: 0x8cd00018  lw          $s0, 0x18($a2)
    ctx->pc = 0x32fe74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_32fe78:
    // 0x32fe78: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x32fe78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_32fe7c:
    // 0x32fe7c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x32fe7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_32fe80:
    // 0x32fe80: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x32fe80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_32fe84:
    // 0x32fe84: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x32fe84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_32fe88:
    // 0x32fe88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32fe88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32fe8c:
    // 0x32fe8c: 0x40f809  jalr        $v0
label_32fe90:
    if (ctx->pc == 0x32FE90u) {
        ctx->pc = 0x32FE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FE8Cu;
        // 0x32fe90: 0xacc50018  sw          $a1, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FE94u;
        goto label_32fe94;
    }
    ctx->pc = 0x32FE8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32FE94u);
        ctx->pc = 0x32FE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FE8Cu;
        // 0x32fe90: 0xacc50018  sw          $a1, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FE8Cu, 0x32FE94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32FE94u;
label_32fe94:
    // 0x32fe94: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x32fe94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_32fe98:
    // 0x32fe98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32fe98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_32fe9c:
    // 0x32fe9c: 0xac700018  sw          $s0, 0x18($v1)
    ctx->pc = 0x32fe9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 16));
label_32fea0:
    // 0x32fea0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x32fea0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_32fea4:
    // 0x32fea4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32fea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_32fea8:
    // 0x32fea8: 0x3e00008  jr          $ra
label_32feac:
    if (ctx->pc == 0x32FEACu) {
        ctx->pc = 0x32FEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FEA8u;
        // 0x32feac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FEB0u;
        goto label_32feb0;
    }
    ctx->pc = 0x32FEA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32FEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FEA8u;
        // 0x32feac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FEA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32FEB0u;
label_32feb0:
    // 0x32feb0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x32feb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_32feb4:
    // 0x32feb4: 0x3c06005e  lui         $a2, 0x5E
    ctx->pc = 0x32feb4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)94 << 16));
label_32feb8:
    // 0x32feb8: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x32feb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
label_32febc:
    // 0x32febc: 0x24c2ac48  addiu       $v0, $a2, -0x53B8
    ctx->pc = 0x32febcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945864));
label_32fec0:
    // 0x32fec0: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x32fec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
label_32fec4:
    // 0x32fec4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x32fec4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32fec8:
    // 0x32fec8: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x32fec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
label_32fecc:
    // 0x32fecc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x32feccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_32fed0:
    // 0x32fed0: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x32fed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
label_32fed4:
    // 0x32fed4: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x32fed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
label_32fed8:
    // 0x32fed8: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x32fed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
label_32fedc:
    // 0x32fedc: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x32fedcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_32fee0:
    // 0x32fee0: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x32fee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_32fee4:
    // 0x32fee4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x32fee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_32fee8:
    // 0x32fee8: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x32fee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
label_32feec:
    // 0x32feec: 0x8e550008  lw          $s5, 0x8($s2)
    ctx->pc = 0x32feecu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_32fef0:
    // 0x32fef0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x32fef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_32fef4:
    // 0x32fef4: 0x8ea70018  lw          $a3, 0x18($s5)
    ctx->pc = 0x32fef4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_32fef8:
    // 0x32fef8: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x32fef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_32fefc:
    // 0x32fefc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x32fefcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_32ff00:
    // 0x32ff00: 0xafa30074  sw          $v1, 0x74($sp)
    ctx->pc = 0x32ff00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 3));
label_32ff04:
    // 0x32ff04: 0x8c7e0000  lw          $fp, 0x0($v1)
    ctx->pc = 0x32ff04u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_32ff08:
    // 0x32ff08: 0x8ce30054  lw          $v1, 0x54($a3)
    ctx->pc = 0x32ff08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 84)));
label_32ff0c:
    // 0x32ff0c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x32ff0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32ff10:
    // 0x32ff10: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x32ff10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
label_32ff14:
    // 0x32ff14: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x32ff14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_32ff18:
    // 0x32ff18: 0x1044000e  beq         $v0, $a0, . + 4 + (0xE << 2)
label_32ff1c:
    if (ctx->pc == 0x32FF1Cu) {
        ctx->pc = 0x32FF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FF18u;
        // 0x32ff1c: 0xae43000c  sw          $v1, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FF20u;
        goto label_32ff20;
    }
    ctx->pc = 0x32FF18u;
    {
        const bool branch_taken_0x32ff18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x32FF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FF18u;
        // 0x32ff1c: 0xae43000c  sw          $v1, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ff18) {
            ctx->pc = 0x32FF54u;
            goto label_32ff54;
        }
    }
    ctx->pc = 0x32FF20u;
label_32ff20:
    // 0x32ff20: 0x8f82bd7c  lw          $v0, -0x4284($gp)
    ctx->pc = 0x32ff20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950268)));
label_32ff24:
    // 0x32ff24: 0x8ce40054  lw          $a0, 0x54($a3)
    ctx->pc = 0x32ff24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 84)));
label_32ff28:
    // 0x32ff28: 0x2a22821  addu        $a1, $s5, $v0
    ctx->pc = 0x32ff28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_32ff2c:
    // 0x32ff2c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x32ff2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_32ff30:
    // 0x32ff30: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_32ff34:
    if (ctx->pc == 0x32FF34u) {
        ctx->pc = 0x32FF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FF30u;
        // 0x32ff34: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FF38u;
        goto label_32ff38;
    }
    ctx->pc = 0x32FF30u;
    {
        const bool branch_taken_0x32ff30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32FF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FF30u;
        // 0x32ff34: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ff30) {
            ctx->pc = 0x32FF48u;
            goto label_32ff48;
        }
    }
    ctx->pc = 0x32FF38u;
label_32ff38:
    // 0x32ff38: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x32ff38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_32ff3c:
    // 0x32ff3c: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x32ff3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_32ff40:
    // 0x32ff40: 0x50620014  beql        $v1, $v0, . + 4 + (0x14 << 2)
label_32ff44:
    if (ctx->pc == 0x32FF44u) {
        ctx->pc = 0x32FF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FF40u;
        // 0x32ff44: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FF48u;
        goto label_32ff48;
    }
    ctx->pc = 0x32FF40u;
    {
        const bool branch_taken_0x32ff40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32ff40) {
            ctx->pc = 0x32FF44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32FF40u;
            // 0x32ff44: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32FF94u;
            goto label_32ff94;
        }
    }
    ctx->pc = 0x32FF48u;
label_32ff48:
    // 0x32ff48: 0x94850004  lhu         $a1, 0x4($a0)
    ctx->pc = 0x32ff48u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_32ff4c:
    // 0x32ff4c: 0x1000000f  b           . + 4 + (0xF << 2)
label_32ff50:
    if (ctx->pc == 0x32FF50u) {
        ctx->pc = 0x32FF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FF4Cu;
        // 0x32ff50: 0x2a62021  addu        $a0, $s5, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FF54u;
        goto label_32ff54;
    }
    ctx->pc = 0x32FF4Cu;
    {
        const bool branch_taken_0x32ff4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32FF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FF4Cu;
        // 0x32ff50: 0x2a62021  addu        $a0, $s5, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ff4c) {
            ctx->pc = 0x32FF8Cu;
            goto label_32ff8c;
        }
    }
    ctx->pc = 0x32FF54u;
label_32ff54:
    // 0x32ff54: 0x8f82bd78  lw          $v0, -0x4288($gp)
    ctx->pc = 0x32ff54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950264)));
label_32ff58:
    // 0x32ff58: 0x8ce40054  lw          $a0, 0x54($a3)
    ctx->pc = 0x32ff58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 84)));
label_32ff5c:
    // 0x32ff5c: 0xe22821  addu        $a1, $a3, $v0
    ctx->pc = 0x32ff5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_32ff60:
    // 0x32ff60: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x32ff60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_32ff64:
    // 0x32ff64: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_32ff68:
    if (ctx->pc == 0x32FF68u) {
        ctx->pc = 0x32FF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FF64u;
        // 0x32ff68: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FF6Cu;
        goto label_32ff6c;
    }
    ctx->pc = 0x32FF64u;
    {
        const bool branch_taken_0x32ff64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32FF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FF64u;
        // 0x32ff68: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ff64) {
            ctx->pc = 0x32FF84u;
            goto label_32ff84;
        }
    }
    ctx->pc = 0x32FF6Cu;
label_32ff6c:
    // 0x32ff6c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x32ff6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_32ff70:
    // 0x32ff70: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x32ff70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_32ff74:
    // 0x32ff74: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_32ff78:
    if (ctx->pc == 0x32FF78u) {
        ctx->pc = 0x32FF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FF74u;
        // 0x32ff78: 0x94850004  lhu         $a1, 0x4($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FF7Cu;
        goto label_32ff7c;
    }
    ctx->pc = 0x32FF74u;
    {
        const bool branch_taken_0x32ff74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x32ff74) {
            ctx->pc = 0x32FF78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32FF74u;
            // 0x32ff78: 0x94850004  lhu         $a1, 0x4($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32FF88u;
            goto label_32ff88;
        }
    }
    ctx->pc = 0x32FF7Cu;
label_32ff7c:
    // 0x32ff7c: 0x10000005  b           . + 4 + (0x5 << 2)
label_32ff80:
    if (ctx->pc == 0x32FF80u) {
        ctx->pc = 0x32FF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FF7Cu;
        // 0x32ff80: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FF84u;
        goto label_32ff84;
    }
    ctx->pc = 0x32FF7Cu;
    {
        const bool branch_taken_0x32ff7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32FF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FF7Cu;
        // 0x32ff80: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ff7c) {
            ctx->pc = 0x32FF94u;
            goto label_32ff94;
        }
    }
    ctx->pc = 0x32FF84u;
label_32ff84:
    // 0x32ff84: 0x94850004  lhu         $a1, 0x4($a0)
    ctx->pc = 0x32ff84u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_32ff88:
    // 0x32ff88: 0xe62021  addu        $a0, $a3, $a2
    ctx->pc = 0x32ff88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_32ff8c:
    // 0x32ff8c: 0xc0e7eec  jal         func_39FBB0
label_32ff90:
    if (ctx->pc == 0x32FF90u) {
        ctx->pc = 0x32FF94u;
        goto label_32ff94;
    }
    ctx->pc = 0x32FF8Cu;
    SET_GPR_U32(ctx, 31, 0x32FF94u);
    ctx->pc = 0x39FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39FBB0u, 0x32FF8Cu, 0x32FF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FF94u;
label_32ff94:
    // 0x32ff94: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x32ff94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32ff98:
    // 0x32ff98: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x32ff98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_32ff9c:
    // 0x32ff9c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x32ff9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_32ffa0:
    // 0x32ffa0: 0x94430004  lhu         $v1, 0x4($v0)
    ctx->pc = 0x32ffa0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_32ffa4:
    // 0x32ffa4: 0x106001c0  beqz        $v1, . + 4 + (0x1C0 << 2)
label_32ffa8:
    if (ctx->pc == 0x32FFA8u) {
        ctx->pc = 0x32FFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FFA4u;
        // 0x32ffa8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FFACu;
        goto label_32ffac;
    }
    ctx->pc = 0x32FFA4u;
    {
        const bool branch_taken_0x32ffa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32FFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FFA4u;
        // 0x32ffa8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ffa4) {
            ctx->pc = 0x3306A8u;
            goto label_3306a8;
        }
    }
    ctx->pc = 0x32FFACu;
label_32ffac:
    // 0x32ffac: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x32ffacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_32ffb0:
    // 0x32ffb0: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x32ffb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_32ffb4:
    // 0x32ffb4: 0x28640002  slti        $a0, $v1, 0x2
    ctx->pc = 0x32ffb4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_32ffb8:
    // 0x32ffb8: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_32ffbc:
    if (ctx->pc == 0x32FFBCu) {
        ctx->pc = 0x32FFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FFB8u;
        // 0x32ffbc: 0xae430020  sw          $v1, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FFC0u;
        goto label_32ffc0;
    }
    ctx->pc = 0x32FFB8u;
    {
        const bool branch_taken_0x32ffb8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x32FFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FFB8u;
        // 0x32ffbc: 0xae430020  sw          $v1, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ffb8) {
            ctx->pc = 0x32FFD8u;
            goto label_32ffd8;
        }
    }
    ctx->pc = 0x32FFC0u;
label_32ffc0:
    // 0x32ffc0: 0x26a2004c  addiu       $v0, $s5, 0x4C
    ctx->pc = 0x32ffc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 76));
label_32ffc4:
    // 0x32ffc4: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x32ffc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_32ffc8:
    // 0x32ffc8: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x32ffc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32ffcc:
    // 0x32ffcc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x32ffccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_32ffd0:
    // 0x32ffd0: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x32ffd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
label_32ffd4:
    // 0x32ffd4: 0x0  nop
    ctx->pc = 0x32ffd4u;
    // NOP
label_32ffd8:
    // 0x32ffd8: 0x8ea80018  lw          $t0, 0x18($s5)
    ctx->pc = 0x32ffd8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_32ffdc:
    // 0x32ffdc: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x32ffdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_32ffe0:
    // 0x32ffe0: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x32ffe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_32ffe4:
    // 0x32ffe4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x32ffe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_32ffe8:
    // 0x32ffe8: 0x54400041  bnel        $v0, $zero, . + 4 + (0x41 << 2)
label_32ffec:
    if (ctx->pc == 0x32FFECu) {
        ctx->pc = 0x32FFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FFE8u;
        // 0x32ffec: 0x8ea2004c  lw          $v0, 0x4C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FFF0u;
        goto label_32fff0;
    }
    ctx->pc = 0x32FFE8u;
    {
        const bool branch_taken_0x32ffe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32ffe8) {
            ctx->pc = 0x32FFECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32FFE8u;
            // 0x32ffec: 0x8ea2004c  lw          $v0, 0x4C($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3300F0u;
            goto label_3300f0;
        }
    }
    ctx->pc = 0x32FFF0u;
label_32fff0:
    // 0x32fff0: 0x8e46000c  lw          $a2, 0xC($s2)
    ctx->pc = 0x32fff0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_32fff4:
    // 0x32fff4: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x32fff4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_32fff8:
    // 0x32fff8: 0x91030008  lbu         $v1, 0x8($t0)
    ctx->pc = 0x32fff8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 8)));
label_32fffc:
    // 0x32fffc: 0x34a5fffe  ori         $a1, $a1, 0xFFFE
    ctx->pc = 0x32fffcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
label_330000:
    // 0x330000: 0x94c20006  lhu         $v0, 0x6($a2)
    ctx->pc = 0x330000u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_330004:
    // 0x330004: 0x91040018  lbu         $a0, 0x18($t0)
    ctx->pc = 0x330004u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 24)));
label_330008:
    // 0x330008: 0x3063009f  andi        $v1, $v1, 0x9F
    ctx->pc = 0x330008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)159);
label_33000c:
    // 0x33000c: 0x8e460014  lw          $a2, 0x14($s2)
    ctx->pc = 0x33000cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_330010:
    // 0x330010: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x330010u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_330014:
    // 0x330014: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x330014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_330018:
    // 0x330018: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x330018u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_33001c:
    // 0x33001c: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x33001cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_330020:
    // 0x330020: 0x8e470010  lw          $a3, 0x10($s2)
    ctx->pc = 0x330020u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_330024:
    // 0x330024: 0x442825  or          $a1, $v0, $a0
    ctx->pc = 0x330024u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_330028:
    // 0x330028: 0xae460014  sw          $a2, 0x14($s2)
    ctx->pc = 0x330028u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 6));
label_33002c:
    // 0x33002c: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x33002cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_330030:
    // 0x330030: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_330034:
    if (ctx->pc == 0x330034u) {
        ctx->pc = 0x330034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330030u;
        // 0x330034: 0xae450018  sw          $a1, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330038u;
        goto label_330038;
    }
    ctx->pc = 0x330030u;
    {
        const bool branch_taken_0x330030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x330034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330030u;
        // 0x330034: 0xae450018  sw          $a1, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330030) {
            ctx->pc = 0x3300E8u;
            goto label_3300e8;
        }
    }
    ctx->pc = 0x330038u;
label_330038:
    // 0x330038: 0x24490018  addiu       $t1, $v0, 0x18
    ctx->pc = 0x330038u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_33003c:
    // 0x33003c: 0x8d240010  lw          $a0, 0x10($t1)
    ctx->pc = 0x33003cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
label_330040:
    // 0x330040: 0x10a4000e  beq         $a1, $a0, . + 4 + (0xE << 2)
label_330044:
    if (ctx->pc == 0x330044u) {
        ctx->pc = 0x330044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330040u;
        // 0x330044: 0x26a7004c  addiu       $a3, $s5, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330048u;
        goto label_330048;
    }
    ctx->pc = 0x330040u;
    {
        const bool branch_taken_0x330040 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x330044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330040u;
        // 0x330044: 0x26a7004c  addiu       $a3, $s5, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330040) {
            ctx->pc = 0x33007Cu;
            goto label_33007c;
        }
    }
    ctx->pc = 0x330048u;
label_330048:
    // 0x330048: 0x51c02  srl         $v1, $a1, 16
    ctx->pc = 0x330048u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
label_33004c:
    // 0x33004c: 0x41402  srl         $v0, $a0, 16
    ctx->pc = 0x33004cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
label_330050:
    // 0x330050: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x330050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_330054:
    // 0x330054: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x330054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_330058:
    // 0x330058: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_33005c:
    if (ctx->pc == 0x33005Cu) {
        ctx->pc = 0x33005Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330058u;
        // 0x33005c: 0x34c20008  ori         $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x330060u;
        goto label_330060;
    }
    ctx->pc = 0x330058u;
    {
        const bool branch_taken_0x330058 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x33005Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330058u;
        // 0x33005c: 0x34c20008  ori         $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x330058) {
            ctx->pc = 0x330078u;
            goto label_330078;
        }
    }
    ctx->pc = 0x330060u;
label_330060:
    // 0x330060: 0x51e02  srl         $v1, $a1, 24
    ctx->pc = 0x330060u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
label_330064:
    // 0x330064: 0x41602  srl         $v0, $a0, 24
    ctx->pc = 0x330064u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 24));
label_330068:
    // 0x330068: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_33006c:
    if (ctx->pc == 0x33006Cu) {
        ctx->pc = 0x33006Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330068u;
        // 0x33006c: 0x34c20008  ori         $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x330070u;
        goto label_330070;
    }
    ctx->pc = 0x330068u;
    {
        const bool branch_taken_0x330068 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x33006Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330068u;
        // 0x33006c: 0x34c20008  ori         $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x330068) {
            ctx->pc = 0x330078u;
            goto label_330078;
        }
    }
    ctx->pc = 0x330070u;
label_330070:
    // 0x330070: 0x34c20004  ori         $v0, $a2, 0x4
    ctx->pc = 0x330070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4);
label_330074:
    // 0x330074: 0x0  nop
    ctx->pc = 0x330074u;
    // NOP
label_330078:
    // 0x330078: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x330078u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_33007c:
    // 0x33007c: 0x9502000c  lhu         $v0, 0xC($t0)
    ctx->pc = 0x33007cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 12)));
label_330080:
    // 0x330080: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_330084:
    if (ctx->pc == 0x330084u) {
        ctx->pc = 0x330084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330080u;
        // 0x330084: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x330088u;
        goto label_330088;
    }
    ctx->pc = 0x330080u;
    {
        const bool branch_taken_0x330080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x330084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330080u;
        // 0x330084: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x330080) {
            ctx->pc = 0x3300ACu;
            goto label_3300ac;
        }
    }
    ctx->pc = 0x330088u;
label_330088:
    // 0x330088: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_33008c:
    if (ctx->pc == 0x33008Cu) {
        ctx->pc = 0x33008Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330088u;
        // 0x33008c: 0x8e420014  lw          $v0, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330090u;
        goto label_330090;
    }
    ctx->pc = 0x330088u;
    {
        const bool branch_taken_0x330088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33008Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330088u;
        // 0x33008c: 0x8e420014  lw          $v0, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330088) {
            ctx->pc = 0x330098u;
            goto label_330098;
        }
    }
    ctx->pc = 0x330090u;
label_330090:
    // 0x330090: 0x10000005  b           . + 4 + (0x5 << 2)
label_330094:
    if (ctx->pc == 0x330094u) {
        ctx->pc = 0x330094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330090u;
        // 0x330094: 0x34420008  ori         $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x330098u;
        goto label_330098;
    }
    ctx->pc = 0x330090u;
    {
        const bool branch_taken_0x330090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330090u;
        // 0x330094: 0x34420008  ori         $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x330090) {
            ctx->pc = 0x3300A8u;
            goto label_3300a8;
        }
    }
    ctx->pc = 0x330098u;
label_330098:
    // 0x330098: 0x9503000c  lhu         $v1, 0xC($t0)
    ctx->pc = 0x330098u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 12)));
label_33009c:
    // 0x33009c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x33009cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_3300a0:
    // 0x3300a0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3300a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_3300a4:
    // 0x3300a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3300a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3300a8:
    // 0x3300a8: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x3300a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_3300ac:
    // 0x3300ac: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3300acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3300b0:
    // 0x3300b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3300b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3300b4:
    // 0x3300b4: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_3300b8:
    if (ctx->pc == 0x3300B8u) {
        ctx->pc = 0x3300B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3300B4u;
        // 0x3300b8: 0x8ea2004c  lw          $v0, 0x4C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3300BCu;
        goto label_3300bc;
    }
    ctx->pc = 0x3300B4u;
    {
        const bool branch_taken_0x3300b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3300b4) {
            ctx->pc = 0x3300B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3300B4u;
            // 0x3300b8: 0x8ea2004c  lw          $v0, 0x4C($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3300F0u;
            goto label_3300f0;
        }
    }
    ctx->pc = 0x3300BCu;
label_3300bc:
    // 0x3300bc: 0x84e30006  lh          $v1, 0x6($a3)
    ctx->pc = 0x3300bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
label_3300c0:
    // 0x3300c0: 0x8d220028  lw          $v0, 0x28($t1)
    ctx->pc = 0x3300c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 40)));
label_3300c4:
    // 0x3300c4: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
label_3300c8:
    if (ctx->pc == 0x3300C8u) {
        ctx->pc = 0x3300C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3300C4u;
        // 0x3300c8: 0x8e420014  lw          $v0, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3300CCu;
        goto label_3300cc;
    }
    ctx->pc = 0x3300C4u;
    {
        const bool branch_taken_0x3300c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3300c4) {
            ctx->pc = 0x3300C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3300C4u;
            // 0x3300c8: 0x8e420014  lw          $v0, 0x14($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3300E0u;
            goto label_3300e0;
        }
    }
    ctx->pc = 0x3300CCu;
label_3300cc:
    // 0x3300cc: 0x84e30004  lh          $v1, 0x4($a3)
    ctx->pc = 0x3300ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
label_3300d0:
    // 0x3300d0: 0x8d220024  lw          $v0, 0x24($t1)
    ctx->pc = 0x3300d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 36)));
label_3300d4:
    // 0x3300d4: 0x50430006  beql        $v0, $v1, . + 4 + (0x6 << 2)
label_3300d8:
    if (ctx->pc == 0x3300D8u) {
        ctx->pc = 0x3300D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3300D4u;
        // 0x3300d8: 0x8ea2004c  lw          $v0, 0x4C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3300DCu;
        goto label_3300dc;
    }
    ctx->pc = 0x3300D4u;
    {
        const bool branch_taken_0x3300d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3300d4) {
            ctx->pc = 0x3300D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3300D4u;
            // 0x3300d8: 0x8ea2004c  lw          $v0, 0x4C($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3300F0u;
            goto label_3300f0;
        }
    }
    ctx->pc = 0x3300DCu;
label_3300dc:
    // 0x3300dc: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x3300dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_3300e0:
    // 0x3300e0: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3300e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_3300e4:
    // 0x3300e4: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x3300e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_3300e8:
    // 0x3300e8: 0x8ea2004c  lw          $v0, 0x4C($s5)
    ctx->pc = 0x3300e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3300ec:
    // 0x3300ec: 0x0  nop
    ctx->pc = 0x3300ecu;
    // NOP
label_3300f0:
    // 0x3300f0: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x3300f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_3300f4:
    // 0x3300f4: 0x8ea40018  lw          $a0, 0x18($s5)
    ctx->pc = 0x3300f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_3300f8:
    // 0x3300f8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3300f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3300fc:
    // 0x3300fc: 0xa480000c  sh          $zero, 0xC($a0)
    ctx->pc = 0x3300fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 0));
label_330100:
    // 0x330100: 0xaea2004c  sw          $v0, 0x4C($s5)
    ctx->pc = 0x330100u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 2));
label_330104:
    // 0x330104: 0x3c110062  lui         $s1, 0x62
    ctx->pc = 0x330104u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)98 << 16));
label_330108:
    // 0x330108: 0x8e30e880  lw          $s0, -0x1780($s1)
    ctx->pc = 0x330108u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294961280)));
label_33010c:
    // 0x33010c: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x33010cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_330110:
    // 0x330110: 0xc106784  jal         func_419E10
label_330114:
    if (ctx->pc == 0x330114u) {
        ctx->pc = 0x330114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330110u;
        // 0x330114: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330118u;
        goto label_330118;
    }
    ctx->pc = 0x330110u;
    SET_GPR_U32(ctx, 31, 0x330118u);
    ctx->pc = 0x330114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330110u;
    // 0x330114: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x330110u, 0x330118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330118u;
label_330118:
    // 0x330118: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x330118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_33011c:
    // 0x33011c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x33011cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_330120:
    // 0x330120: 0xc103dd4  jal         func_40F750
label_330124:
    if (ctx->pc == 0x330124u) {
        ctx->pc = 0x330124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330120u;
        // 0x330124: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330128u;
        goto label_330128;
    }
    ctx->pc = 0x330120u;
    SET_GPR_U32(ctx, 31, 0x330128u);
    ctx->pc = 0x330124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330120u;
    // 0x330124: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F750u, 0x330120u, 0x330128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330128u;
label_330128:
    // 0x330128: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x330128u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_33012c:
    // 0x33012c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x33012cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_330130:
    // 0x330130: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x330130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_330134:
    // 0x330134: 0xc0e2048  jal         func_388120
label_330138:
    if (ctx->pc == 0x330138u) {
        ctx->pc = 0x330138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330134u;
        // 0x330138: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33013Cu;
        goto label_33013c;
    }
    ctx->pc = 0x330134u;
    SET_GPR_U32(ctx, 31, 0x33013Cu);
    ctx->pc = 0x330138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330134u;
    // 0x330138: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x388120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388120u, 0x330134u, 0x33013Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33013Cu;
label_33013c:
    // 0x33013c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x33013cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_330140:
    // 0x330140: 0x8f83bebc  lw          $v1, -0x4144($gp)
    ctx->pc = 0x330140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950588)));
label_330144:
    // 0x330144: 0x8e22e880  lw          $v0, -0x1780($s1)
    ctx->pc = 0x330144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294961280)));
label_330148:
    // 0x330148: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x330148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_33014c:
    // 0x33014c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33014cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_330150:
    // 0x330150: 0x24430060  addiu       $v1, $v0, 0x60
    ctx->pc = 0x330150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_330154:
    // 0x330154: 0x10000003  b           . + 4 + (0x3 << 2)
label_330158:
    if (ctx->pc == 0x330158u) {
        ctx->pc = 0x330158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330154u;
        // 0x330158: 0x1eb880  sll         $s7, $fp, 2 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33015Cu;
        goto label_33015c;
    }
    ctx->pc = 0x330154u;
    {
        const bool branch_taken_0x330154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330154u;
        // 0x330158: 0x1eb880  sll         $s7, $fp, 2 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330154) {
            ctx->pc = 0x330164u;
            goto label_330164;
        }
    }
    ctx->pc = 0x33015Cu;
label_33015c:
    // 0x33015c: 0x0  nop
    ctx->pc = 0x33015cu;
    // NOP
label_330160:
    // 0x330160: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x330160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
label_330164:
    // 0x330164: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x330164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_330168:
    // 0x330168: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x330168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_33016c:
    // 0x33016c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x33016cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_330170:
    // 0x330170: 0x50a20017  beql        $a1, $v0, . + 4 + (0x17 << 2)
label_330174:
    if (ctx->pc == 0x330174u) {
        ctx->pc = 0x330174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330170u;
        // 0x330174: 0x8e43000c  lw          $v1, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330178u;
        goto label_330178;
    }
    ctx->pc = 0x330170u;
    {
        const bool branch_taken_0x330170 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x330170) {
            ctx->pc = 0x330174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x330170u;
            // 0x330174: 0x8e43000c  lw          $v1, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3301D0u;
            goto label_3301d0;
        }
    }
    ctx->pc = 0x330178u;
label_330178:
    // 0x330178: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x330178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_33017c:
    // 0x33017c: 0xc4650004  lwc1        $f5, 0x4($v1)
    ctx->pc = 0x33017cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_330180:
    // 0x330180: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x330180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_330184:
    // 0x330184: 0xc4840004  lwc1        $f4, 0x4($a0)
    ctx->pc = 0x330184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_330188:
    // 0x330188: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x330188u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_33018c:
    // 0x33018c: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x33018cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_330190:
    // 0x330190: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x330190u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
label_330194:
    // 0x330194: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x330194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_330198:
    // 0x330198: 0xc465000c  lwc1        $f5, 0xC($v1)
    ctx->pc = 0x330198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_33019c:
    // 0x33019c: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x33019cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_3301a0:
    // 0x3301a0: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x3301a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3301a4:
    // 0x3301a4: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x3301a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_3301a8:
    // 0x3301a8: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x3301a8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_3301ac:
    // 0x3301ac: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x3301acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_3301b0:
    // 0x3301b0: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x3301b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
label_3301b4:
    // 0x3301b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3301b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3301b8:
    // 0x3301b8: 0x0  nop
    ctx->pc = 0x3301b8u;
    // NOP
label_3301bc:
    // 0x3301bc: 0x4500ffe8  bc1f        . + 4 + (-0x18 << 2)
label_3301c0:
    if (ctx->pc == 0x3301C0u) {
        ctx->pc = 0x3301C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3301BCu;
        // 0x3301c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3301C4u;
        goto label_3301c4;
    }
    ctx->pc = 0x3301BCu;
    {
        const bool branch_taken_0x3301bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3301C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3301BCu;
        // 0x3301c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3301bc) {
            ctx->pc = 0x330160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_330160;
        }
    }
    ctx->pc = 0x3301C4u;
label_3301c4:
    // 0x3301c4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3301c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3301c8:
    // 0x3301c8: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x3301c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_3301cc:
    // 0x3301cc: 0x0  nop
    ctx->pc = 0x3301ccu;
    // NOP
label_3301d0:
    // 0x3301d0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3301d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3301d4:
    // 0x3301d4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x3301d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3301d8:
    // 0x3301d8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_3301dc:
    if (ctx->pc == 0x3301DCu) {
        ctx->pc = 0x3301DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3301D8u;
        // 0x3301dc: 0x8fa40070  lw          $a0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3301E0u;
        goto label_3301e0;
    }
    ctx->pc = 0x3301D8u;
    {
        const bool branch_taken_0x3301d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3301DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3301D8u;
        // 0x3301dc: 0x8fa40070  lw          $a0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3301d8) {
            ctx->pc = 0x330214u;
            goto label_330214;
        }
    }
    ctx->pc = 0x3301E0u;
label_3301e0:
    // 0x3301e0: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x3301e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3301e4:
    // 0x3301e4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_3301e8:
    if (ctx->pc == 0x3301E8u) {
        ctx->pc = 0x3301E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3301E4u;
        // 0x3301e8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3301ECu;
        goto label_3301ec;
    }
    ctx->pc = 0x3301E4u;
    {
        const bool branch_taken_0x3301e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3301e4) {
            ctx->pc = 0x3301E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3301E4u;
            // 0x3301e8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3301FCu;
            goto label_3301fc;
        }
    }
    ctx->pc = 0x3301ECu;
label_3301ec:
    // 0x3301ec: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x3301ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_3301f0:
    // 0x3301f0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_3301f4:
    if (ctx->pc == 0x3301F4u) {
        ctx->pc = 0x3301F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3301F0u;
        // 0x3301f4: 0x30620010  andi        $v0, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3301F8u;
        goto label_3301f8;
    }
    ctx->pc = 0x3301F0u;
    {
        const bool branch_taken_0x3301f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3301f0) {
            ctx->pc = 0x3301F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3301F0u;
            // 0x3301f4: 0x30620010  andi        $v0, $v1, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33020Cu;
            goto label_33020c;
        }
    }
    ctx->pc = 0x3301F8u;
label_3301f8:
    // 0x3301f8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3301f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3301fc:
    // 0x3301fc: 0xa2430029  sb          $v1, 0x29($s2)
    ctx->pc = 0x3301fcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 41), (uint8_t)GPR_U32(ctx, 3));
label_330200:
    // 0x330200: 0x9382aed0  lbu         $v0, -0x5130($gp)
    ctx->pc = 0x330200u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294946512)));
label_330204:
    // 0x330204: 0x10000012  b           . + 4 + (0x12 << 2)
label_330208:
    if (ctx->pc == 0x330208u) {
        ctx->pc = 0x330208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330204u;
        // 0x330208: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x33020Cu;
        goto label_33020c;
    }
    ctx->pc = 0x330204u;
    {
        const bool branch_taken_0x330204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330204u;
        // 0x330208: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x330204) {
            ctx->pc = 0x330250u;
            goto label_330250;
        }
    }
    ctx->pc = 0x33020Cu;
label_33020c:
    // 0x33020c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_330210:
    if (ctx->pc == 0x330210u) {
        ctx->pc = 0x330210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33020Cu;
        // 0x330210: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x330214u;
        goto label_330214;
    }
    ctx->pc = 0x33020Cu;
    {
        const bool branch_taken_0x33020c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x330210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33020Cu;
        // 0x330210: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33020c) {
            ctx->pc = 0x330228u;
            goto label_330228;
        }
    }
    ctx->pc = 0x330214u;
label_330214:
    // 0x330214: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x330214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_330218:
    // 0x330218: 0xa2420029  sb          $v0, 0x29($s2)
    ctx->pc = 0x330218u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 41), (uint8_t)GPR_U32(ctx, 2));
label_33021c:
    // 0x33021c: 0x9383aed0  lbu         $v1, -0x5130($gp)
    ctx->pc = 0x33021cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294946512)));
label_330220:
    // 0x330220: 0x1000000c  b           . + 4 + (0xC << 2)
label_330224:
    if (ctx->pc == 0x330224u) {
        ctx->pc = 0x330224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330220u;
        // 0x330224: 0xa2430028  sb          $v1, 0x28($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 40), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330228u;
        goto label_330228;
    }
    ctx->pc = 0x330220u;
    {
        const bool branch_taken_0x330220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330220u;
        // 0x330224: 0xa2430028  sb          $v1, 0x28($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 40), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330220) {
            ctx->pc = 0x330254u;
            goto label_330254;
        }
    }
    ctx->pc = 0x330228u;
label_330228:
    // 0x330228: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_33022c:
    if (ctx->pc == 0x33022Cu) {
        ctx->pc = 0x33022Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330228u;
        // 0x33022c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330230u;
        goto label_330230;
    }
    ctx->pc = 0x330228u;
    {
        const bool branch_taken_0x330228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33022Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330228u;
        // 0x33022c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330228) {
            ctx->pc = 0x330240u;
            goto label_330240;
        }
    }
    ctx->pc = 0x330230u;
label_330230:
    // 0x330230: 0xa2430029  sb          $v1, 0x29($s2)
    ctx->pc = 0x330230u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 41), (uint8_t)GPR_U32(ctx, 3));
label_330234:
    // 0x330234: 0x9382aed0  lbu         $v0, -0x5130($gp)
    ctx->pc = 0x330234u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294946512)));
label_330238:
    // 0x330238: 0x10000005  b           . + 4 + (0x5 << 2)
label_33023c:
    if (ctx->pc == 0x33023Cu) {
        ctx->pc = 0x33023Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330238u;
        // 0x33023c: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x330240u;
        goto label_330240;
    }
    ctx->pc = 0x330238u;
    {
        const bool branch_taken_0x330238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33023Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330238u;
        // 0x33023c: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x330238) {
            ctx->pc = 0x330250u;
            goto label_330250;
        }
    }
    ctx->pc = 0x330240u;
label_330240:
    // 0x330240: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x330240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_330244:
    // 0x330244: 0xa2430029  sb          $v1, 0x29($s2)
    ctx->pc = 0x330244u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 41), (uint8_t)GPR_U32(ctx, 3));
label_330248:
    // 0x330248: 0x9382aed0  lbu         $v0, -0x5130($gp)
    ctx->pc = 0x330248u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294946512)));
label_33024c:
    // 0x33024c: 0x34420014  ori         $v0, $v0, 0x14
    ctx->pc = 0x33024cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20);
label_330250:
    // 0x330250: 0xa2420028  sb          $v0, 0x28($s2)
    ctx->pc = 0x330250u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 40), (uint8_t)GPR_U32(ctx, 2));
label_330254:
    // 0x330254: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x330254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_330258:
    // 0x330258: 0x50820005  beql        $a0, $v0, . + 4 + (0x5 << 2)
label_33025c:
    if (ctx->pc == 0x33025Cu) {
        ctx->pc = 0x33025Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330258u;
        // 0x33025c: 0x8ea20018  lw          $v0, 0x18($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330260u;
        goto label_330260;
    }
    ctx->pc = 0x330258u;
    {
        const bool branch_taken_0x330258 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x330258) {
            ctx->pc = 0x33025Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x330258u;
            // 0x33025c: 0x8ea20018  lw          $v0, 0x18($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x330270u;
            goto label_330270;
        }
    }
    ctx->pc = 0x330260u;
label_330260:
    // 0x330260: 0x92420028  lbu         $v0, 0x28($s2)
    ctx->pc = 0x330260u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 40)));
label_330264:
    // 0x330264: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x330264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_330268:
    // 0x330268: 0xa2420028  sb          $v0, 0x28($s2)
    ctx->pc = 0x330268u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 40), (uint8_t)GPR_U32(ctx, 2));
label_33026c:
    // 0x33026c: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x33026cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_330270:
    // 0x330270: 0x2684ac48  addiu       $a0, $s4, -0x53B8
    ctx->pc = 0x330270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294945864));
label_330274:
    // 0x330274: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x330274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_330278:
    // 0x330278: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x330278u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
label_33027c:
    // 0x33027c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x33027cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_330280:
    // 0x330280: 0xa243002a  sb          $v1, 0x2A($s2)
    ctx->pc = 0x330280u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 42), (uint8_t)GPR_U32(ctx, 3));
label_330284:
    // 0x330284: 0x8c860024  lw          $a2, 0x24($a0)
    ctx->pc = 0x330284u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_330288:
    // 0x330288: 0x50c00006  beql        $a2, $zero, . + 4 + (0x6 << 2)
label_33028c:
    if (ctx->pc == 0x33028Cu) {
        ctx->pc = 0x33028Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330288u;
        // 0x33028c: 0x8e540008  lw          $s4, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330290u;
        goto label_330290;
    }
    ctx->pc = 0x330288u;
    {
        const bool branch_taken_0x330288 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x330288) {
            ctx->pc = 0x33028Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x330288u;
            // 0x33028c: 0x8e540008  lw          $s4, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3302A4u;
            goto label_3302a4;
        }
    }
    ctx->pc = 0x330290u;
label_330290:
    // 0x330290: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x330290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_330294:
    // 0x330294: 0xc0f809  jalr        $a2
label_330298:
    if (ctx->pc == 0x330298u) {
        ctx->pc = 0x330298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330294u;
        // 0x330298: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33029Cu;
        goto label_33029c;
    }
    ctx->pc = 0x330294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x33029Cu);
        ctx->pc = 0x330298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330294u;
        // 0x330298: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330294u, 0x33029Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33029Cu;
label_33029c:
    // 0x33029c: 0x10000079  b           . + 4 + (0x79 << 2)
label_3302a0:
    if (ctx->pc == 0x3302A0u) {
        ctx->pc = 0x3302A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33029Cu;
        // 0x3302a0: 0x8fa50074  lw          $a1, 0x74($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3302A4u;
        goto label_3302a4;
    }
    ctx->pc = 0x33029Cu;
    {
        const bool branch_taken_0x33029c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3302A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33029Cu;
        // 0x3302a0: 0x8fa50074  lw          $a1, 0x74($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33029c) {
            ctx->pc = 0x330484u;
            goto label_330484;
        }
    }
    ctx->pc = 0x3302A4u;
label_3302a4:
    // 0x3302a4: 0x8e920018  lw          $s2, 0x18($s4)
    ctx->pc = 0x3302a4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_3302a8:
    // 0x3302a8: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x3302a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3302ac:
    // 0x3302ac: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3302acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_3302b0:
    // 0x3302b0: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
label_3302b4:
    if (ctx->pc == 0x3302B4u) {
        ctx->pc = 0x3302B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3302B0u;
        // 0x3302b4: 0x2623e880  addiu       $v1, $s1, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3302B8u;
        goto label_3302b8;
    }
    ctx->pc = 0x3302B0u;
    {
        const bool branch_taken_0x3302b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3302B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3302B0u;
        // 0x3302b4: 0x2623e880  addiu       $v1, $s1, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3302b0) {
            ctx->pc = 0x330480u;
            goto label_330480;
        }
    }
    ctx->pc = 0x3302B8u;
label_3302b8:
    // 0x3302b8: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x3302b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_3302bc:
    // 0x3302bc: 0x9462000a  lhu         $v0, 0xA($v1)
    ctx->pc = 0x3302bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_3302c0:
    // 0x3302c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3302c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3302c4:
    // 0x3302c4: 0xc106784  jal         func_419E10
label_3302c8:
    if (ctx->pc == 0x3302C8u) {
        ctx->pc = 0x3302C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3302C4u;
        // 0x3302c8: 0xa462000a  sh          $v0, 0xA($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3302CCu;
        goto label_3302cc;
    }
    ctx->pc = 0x3302C4u;
    SET_GPR_U32(ctx, 31, 0x3302CCu);
    ctx->pc = 0x3302C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3302C4u;
    // 0x3302c8: 0xa462000a  sh          $v0, 0xA($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x3302C4u, 0x3302CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3302CCu;
label_3302cc:
    // 0x3302cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3302ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3302d0:
    // 0x3302d0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3302d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3302d4:
    // 0x3302d4: 0xc103c28  jal         func_40F0A0
label_3302d8:
    if (ctx->pc == 0x3302D8u) {
        ctx->pc = 0x3302D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3302D4u;
        // 0x3302d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3302DCu;
        goto label_3302dc;
    }
    ctx->pc = 0x3302D4u;
    SET_GPR_U32(ctx, 31, 0x3302DCu);
    ctx->pc = 0x3302D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3302D4u;
    // 0x3302d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F0A0u, 0x3302D4u, 0x3302DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3302DCu;
label_3302dc:
    // 0x3302dc: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x3302dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3302e0:
    // 0x3302e0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3302e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3302e4:
    // 0x3302e4: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x3302e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_3302e8:
    // 0x3302e8: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
label_3302ec:
    if (ctx->pc == 0x3302ECu) {
        ctx->pc = 0x3302ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3302E8u;
        // 0x3302ec: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3302F0u;
        goto label_3302f0;
    }
    ctx->pc = 0x3302E8u;
    {
        const bool branch_taken_0x3302e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3302ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3302E8u;
        // 0x3302ec: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3302e8) {
            ctx->pc = 0x33031Cu;
            goto label_33031c;
        }
    }
    ctx->pc = 0x3302F0u;
label_3302f0:
    // 0x3302f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3302f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3302f4:
    // 0x3302f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3302f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3302f8:
    // 0x3302f8: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x3302f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_3302fc:
    // 0x3302fc: 0x10000016  b           . + 4 + (0x16 << 2)
label_330300:
    if (ctx->pc == 0x330300u) {
        ctx->pc = 0x330300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3302FCu;
        // 0x330300: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x330304u;
        goto label_330304;
    }
    ctx->pc = 0x3302FCu;
    {
        const bool branch_taken_0x3302fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3302FCu;
        // 0x330300: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3302fc) {
            ctx->pc = 0x330358u;
            goto label_330358;
        }
    }
    ctx->pc = 0x330304u;
label_330304:
    // 0x330304: 0x0  nop
    ctx->pc = 0x330304u;
    // NOP
label_330308:
    // 0x330308: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x330308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_33030c:
    // 0x33030c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x33030cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_330310:
    // 0x330310: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x330310u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_330314:
    // 0x330314: 0x10000010  b           . + 4 + (0x10 << 2)
label_330318:
    if (ctx->pc == 0x330318u) {
        ctx->pc = 0x330318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330314u;
        // 0x330318: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x33031Cu;
        goto label_33031c;
    }
    ctx->pc = 0x330314u;
    {
        const bool branch_taken_0x330314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330314u;
        // 0x330318: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x330314) {
            ctx->pc = 0x330358u;
            goto label_330358;
        }
    }
    ctx->pc = 0x33031Cu;
label_33031c:
    // 0x33031c: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x33031cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_330320:
    // 0x330320: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x330320u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_330324:
    // 0x330324: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x330324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_330328:
    // 0x330328: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x330328u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_33032c:
    // 0x33032c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x33032cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_330330:
    // 0x330330: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x330330u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_330334:
    // 0x330334: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x330334u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_330338:
    // 0x330338: 0x46000084  c1          0x84
    ctx->pc = 0x330338u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
label_33033c:
    // 0x33033c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x33033cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_330340:
    // 0x330340: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x330340u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_330344:
    // 0x330344: 0x0  nop
    ctx->pc = 0x330344u;
    // NOP
label_330348:
    // 0x330348: 0x4501ffef  bc1t        . + 4 + (-0x11 << 2)
label_33034c:
    if (ctx->pc == 0x33034Cu) {
        ctx->pc = 0x33034Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330348u;
        // 0x33034c: 0xe7a20050  swc1        $f2, 0x50($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x330350u;
        goto label_330350;
    }
    ctx->pc = 0x330348u;
    {
        const bool branch_taken_0x330348 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x33034Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330348u;
        // 0x33034c: 0xe7a20050  swc1        $f2, 0x50($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x330348) {
            ctx->pc = 0x330308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_330308;
        }
    }
    ctx->pc = 0x330350u;
label_330350:
    // 0x330350: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x330350u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_330354:
    // 0x330354: 0x0  nop
    ctx->pc = 0x330354u;
    // NOP
label_330358:
    // 0x330358: 0x8e460054  lw          $a2, 0x54($s2)
    ctx->pc = 0x330358u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_33035c:
    // 0x33035c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x33035cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
label_330360:
    // 0x330360: 0x24843b60  addiu       $a0, $a0, 0x3B60
    ctx->pc = 0x330360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15200));
label_330364:
    // 0x330364: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x330364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_330368:
    // 0x330368: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x330368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_33036c:
    // 0x33036c: 0x26960064  addiu       $s6, $s4, 0x64
    ctx->pc = 0x33036cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 100));
label_330370:
    // 0x330370: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x330370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_330374:
    // 0x330374: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x330374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_330378:
    // 0x330378: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x330378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_33037c:
    // 0x33037c: 0xc0e67d6  jal         func_399F58
label_330380:
    if (ctx->pc == 0x330380u) {
        ctx->pc = 0x330380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33037Cu;
        // 0x330380: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330384u;
        goto label_330384;
    }
    ctx->pc = 0x33037Cu;
    SET_GPR_U32(ctx, 31, 0x330384u);
    ctx->pc = 0x330380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33037Cu;
    // 0x330380: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399F58u, 0x33037Cu, 0x330384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330384u;
label_330384:
    // 0x330384: 0x8e920064  lw          $s2, 0x64($s4)
    ctx->pc = 0x330384u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 100)));
label_330388:
    // 0x330388: 0x1256003e  beq         $s2, $s6, . + 4 + (0x3E << 2)
label_33038c:
    if (ctx->pc == 0x33038Cu) {
        ctx->pc = 0x33038Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330388u;
        // 0x33038c: 0x8fa50074  lw          $a1, 0x74($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330390u;
        goto label_330390;
    }
    ctx->pc = 0x330388u;
    {
        const bool branch_taken_0x330388 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 22));
        ctx->pc = 0x33038Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330388u;
        // 0x33038c: 0x8fa50074  lw          $a1, 0x74($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330388) {
            ctx->pc = 0x330484u;
            goto label_330484;
        }
    }
    ctx->pc = 0x330390u;
label_330390:
    // 0x330390: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x330390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_330394:
    // 0x330394: 0x0  nop
    ctx->pc = 0x330394u;
    // NOP
label_330398:
    // 0x330398: 0x8c510040  lw          $s1, 0x40($v0)
    ctx->pc = 0x330398u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_33039c:
    // 0x33039c: 0x24530040  addiu       $s3, $v0, 0x40
    ctx->pc = 0x33039cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_3303a0:
    // 0x3303a0: 0x52330035  beql        $s1, $s3, . + 4 + (0x35 << 2)
label_3303a4:
    if (ctx->pc == 0x3303A4u) {
        ctx->pc = 0x3303A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3303A0u;
        // 0x3303a4: 0x8e520000  lw          $s2, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3303A8u;
        goto label_3303a8;
    }
    ctx->pc = 0x3303A0u;
    {
        const bool branch_taken_0x3303a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 19));
        if (branch_taken_0x3303a0) {
            ctx->pc = 0x3303A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3303A0u;
            // 0x3303a4: 0x8e520000  lw          $s2, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x330478u;
            goto label_330478;
        }
    }
    ctx->pc = 0x3303A8u;
label_3303a8:
    // 0x3303a8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3303a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3303ac:
    // 0x3303ac: 0x0  nop
    ctx->pc = 0x3303acu;
    // NOP
label_3303b0:
    // 0x3303b0: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
label_3303b4:
    if (ctx->pc == 0x3303B4u) {
        ctx->pc = 0x3303B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3303B0u;
        // 0x3303b4: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3303B8u;
        goto label_3303b8;
    }
    ctx->pc = 0x3303B0u;
    {
        const bool branch_taken_0x3303b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3303B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3303B0u;
        // 0x3303b4: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3303b0) {
            ctx->pc = 0x330468u;
            goto label_330468;
        }
    }
    ctx->pc = 0x3303B8u;
label_3303b8:
    // 0x3303b8: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x3303b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_3303bc:
    // 0x3303bc: 0x9445000a  lhu         $a1, 0xA($v0)
    ctx->pc = 0x3303bcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
label_3303c0:
    // 0x3303c0: 0x9462003c  lhu         $v0, 0x3C($v1)
    ctx->pc = 0x3303c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 60)));
label_3303c4:
    // 0x3303c4: 0x50450029  beql        $v0, $a1, . + 4 + (0x29 << 2)
label_3303c8:
    if (ctx->pc == 0x3303C8u) {
        ctx->pc = 0x3303C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3303C4u;
        // 0x3303c8: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3303CCu;
        goto label_3303cc;
    }
    ctx->pc = 0x3303C4u;
    {
        const bool branch_taken_0x3303c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x3303c4) {
            ctx->pc = 0x3303C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3303C4u;
            // 0x3303c8: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33046Cu;
            goto label_33046c;
        }
    }
    ctx->pc = 0x3303CCu;
label_3303cc:
    // 0x3303cc: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x3303ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_3303d0:
    // 0x3303d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3303d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3303d4:
    // 0x3303d4: 0x50400025  beql        $v0, $zero, . + 4 + (0x25 << 2)
label_3303d8:
    if (ctx->pc == 0x3303D8u) {
        ctx->pc = 0x3303D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3303D4u;
        // 0x3303d8: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3303DCu;
        goto label_3303dc;
    }
    ctx->pc = 0x3303D4u;
    {
        const bool branch_taken_0x3303d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3303d4) {
            ctx->pc = 0x3303D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3303D4u;
            // 0x3303d8: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33046Cu;
            goto label_33046c;
        }
    }
    ctx->pc = 0x3303DCu;
label_3303dc:
    // 0x3303dc: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x3303dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3303e0:
    // 0x3303e0: 0xc106784  jal         func_419E10
label_3303e4:
    if (ctx->pc == 0x3303E4u) {
        ctx->pc = 0x3303E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3303E0u;
        // 0x3303e4: 0xa465003c  sh          $a1, 0x3C($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 60), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3303E8u;
        goto label_3303e8;
    }
    ctx->pc = 0x3303E0u;
    SET_GPR_U32(ctx, 31, 0x3303E8u);
    ctx->pc = 0x3303E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3303E0u;
    // 0x3303e4: 0xa465003c  sh          $a1, 0x3C($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 60), (uint16_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x3303E0u, 0x3303E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3303E8u;
label_3303e8:
    // 0x3303e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3303e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3303ec:
    // 0x3303ec: 0xc0e2048  jal         func_388120
label_3303f0:
    if (ctx->pc == 0x3303F0u) {
        ctx->pc = 0x3303F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3303ECu;
        // 0x3303f0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3303F4u;
        goto label_3303f4;
    }
    ctx->pc = 0x3303ECu;
    SET_GPR_U32(ctx, 31, 0x3303F4u);
    ctx->pc = 0x3303F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3303ECu;
    // 0x3303f0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x388120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388120u, 0x3303ECu, 0x3303F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3303F4u;
label_3303f4:
    // 0x3303f4: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x3303f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_3303f8:
    // 0x3303f8: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x3303f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3303fc:
    // 0x3303fc: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x3303fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_330400:
    // 0x330400: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x330400u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_330404:
    // 0x330404: 0xe7a40060  swc1        $f4, 0x60($sp)
    ctx->pc = 0x330404u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_330408:
    // 0x330408: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x330408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_33040c:
    // 0x33040c: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x33040cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_330410:
    // 0x330410: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x330410u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_330414:
    // 0x330414: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x330414u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_330418:
    // 0x330418: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x330418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_33041c:
    // 0x33041c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x33041cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_330420:
    // 0x330420: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x330420u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_330424:
    // 0x330424: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x330424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_330428:
    // 0x330428: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x330428u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
label_33042c:
    // 0x33042c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x33042cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_330430:
    // 0x330430: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x330430u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_330434:
    // 0x330434: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x330434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_330438:
    // 0x330438: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x330438u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_33043c:
    // 0x33043c: 0xc4830014  lwc1        $f3, 0x14($a0)
    ctx->pc = 0x33043cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_330440:
    // 0x330440: 0x46022100  add.s       $f4, $f4, $f2
    ctx->pc = 0x330440u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
label_330444:
    // 0x330444: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x330444u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_330448:
    // 0x330448: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x330448u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_33044c:
    // 0x33044c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x33044cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_330450:
    // 0x330450: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x330450u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_330454:
    // 0x330454: 0x0  nop
    ctx->pc = 0x330454u;
    // NOP
label_330458:
    // 0x330458: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_33045c:
    if (ctx->pc == 0x33045Cu) {
        ctx->pc = 0x33045Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330458u;
        // 0x33045c: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330460u;
        goto label_330460;
    }
    ctx->pc = 0x330458u;
    {
        const bool branch_taken_0x330458 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x330458) {
            ctx->pc = 0x33045Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x330458u;
            // 0x33045c: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33046Cu;
            goto label_33046c;
        }
    }
    ctx->pc = 0x330460u;
label_330460:
    // 0x330460: 0xc0e8ed8  jal         func_3A3B60
label_330464:
    if (ctx->pc == 0x330464u) {
        ctx->pc = 0x330464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330460u;
        // 0x330464: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330468u;
        goto label_330468;
    }
    ctx->pc = 0x330460u;
    SET_GPR_U32(ctx, 31, 0x330468u);
    ctx->pc = 0x330464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330460u;
    // 0x330464: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3B60u, 0x330460u, 0x330468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330468u;
label_330468:
    // 0x330468: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x330468u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_33046c:
    // 0x33046c: 0x5633ffd0  bnel        $s1, $s3, . + 4 + (-0x30 << 2)
label_330470:
    if (ctx->pc == 0x330470u) {
        ctx->pc = 0x330470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33046Cu;
        // 0x330470: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330474u;
        goto label_330474;
    }
    ctx->pc = 0x33046Cu;
    {
        const bool branch_taken_0x33046c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        if (branch_taken_0x33046c) {
            ctx->pc = 0x330470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33046Cu;
            // 0x330470: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3303B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3303b0;
        }
    }
    ctx->pc = 0x330474u;
label_330474:
    // 0x330474: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x330474u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_330478:
    // 0x330478: 0x5656ffc7  bnel        $s2, $s6, . + 4 + (-0x39 << 2)
label_33047c:
    if (ctx->pc == 0x33047Cu) {
        ctx->pc = 0x33047Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330478u;
        // 0x33047c: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330480u;
        goto label_330480;
    }
    ctx->pc = 0x330478u;
    {
        const bool branch_taken_0x330478 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 22));
        if (branch_taken_0x330478) {
            ctx->pc = 0x33047Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x330478u;
            // 0x33047c: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x330398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_330398;
        }
    }
    ctx->pc = 0x330480u;
label_330480:
    // 0x330480: 0x8fa50074  lw          $a1, 0x74($sp)
    ctx->pc = 0x330480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_330484:
    // 0x330484: 0xc0cad12  jal         func_32B448
label_330488:
    if (ctx->pc == 0x330488u) {
        ctx->pc = 0x330488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330484u;
        // 0x330488: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33048Cu;
        goto label_33048c;
    }
    ctx->pc = 0x330484u;
    SET_GPR_U32(ctx, 31, 0x33048Cu);
    ctx->pc = 0x330488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330484u;
    // 0x330488: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B448u, 0x330484u, 0x33048Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33048Cu;
label_33048c:
    // 0x33048c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x33048cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_330490:
    // 0x330490: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x330490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_330494:
    // 0x330494: 0xc10a322  jal         func_428C88
label_330498:
    if (ctx->pc == 0x330498u) {
        ctx->pc = 0x330498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330494u;
        // 0x330498: 0x36e50002  ori         $a1, $s7, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x33049Cu;
        goto label_33049c;
    }
    ctx->pc = 0x330494u;
    SET_GPR_U32(ctx, 31, 0x33049Cu);
    ctx->pc = 0x330498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330494u;
    // 0x330498: 0x36e50002  ori         $a1, $s7, 0x2 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)2);
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x330494u, 0x33049Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33049Cu;
label_33049c:
    // 0x33049c: 0x8f88be20  lw          $t0, -0x41E0($gp)
    ctx->pc = 0x33049cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_3304a0:
    // 0x3304a0: 0x32e300ff  andi        $v1, $s7, 0xFF
    ctx->pc = 0x3304a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
label_3304a4:
    // 0x3304a4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x3304a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_3304a8:
    // 0x3304a8: 0x3c026c00  lui         $v0, 0x6C00
    ctx->pc = 0x3304a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27648 << 16));
label_3304ac:
    // 0x3304ac: 0x344202bc  ori         $v0, $v0, 0x2BC
    ctx->pc = 0x3304acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)700);
label_3304b0:
    // 0x3304b0: 0x2e42025  or          $a0, $s7, $a0
    ctx->pc = 0x3304b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) | GPR_U64(ctx, 4));
label_3304b4:
    // 0x3304b4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x3304b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_3304b8:
    // 0x3304b8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x3304b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_3304bc:
    // 0x3304bc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3304bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3304c0:
    // 0x3304c0: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x3304c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
label_3304c4:
    // 0x3304c4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x3304c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_3304c8:
    // 0x3304c8: 0x34a50101  ori         $a1, $a1, 0x101
    ctx->pc = 0x3304c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)257);
label_3304cc:
    // 0x3304cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3304ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3304d0:
    // 0x3304d0: 0x70651cc8  ppacw       $v1, $v1, $a1
    ctx->pc = 0x3304d0u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
label_3304d4:
    // 0x3304d4: 0x704414c8  ppacw       $v0, $v0, $a0
    ctx->pc = 0x3304d4u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
label_3304d8:
    // 0x3304d8: 0x70621cc8  ppacw       $v1, $v1, $v0
    ctx->pc = 0x3304d8u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_3304dc:
    // 0x3304dc: 0x7d030000  sq          $v1, 0x0($t0)
    ctx->pc = 0x3304dcu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 3));
label_3304e0:
    // 0x3304e0: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x3304e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
label_3304e4:
    // 0x3304e4: 0x13c0006e  beqz        $fp, . + 4 + (0x6E << 2)
label_3304e8:
    if (ctx->pc == 0x3304E8u) {
        ctx->pc = 0x3304E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3304E4u;
        // 0x3304e8: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3304ECu;
        goto label_3304ec;
    }
    ctx->pc = 0x3304E4u;
    {
        const bool branch_taken_0x3304e4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x3304E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3304E4u;
        // 0x3304e8: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3304e4) {
            ctx->pc = 0x3306A0u;
            goto label_3306a0;
        }
    }
    ctx->pc = 0x3304ECu;
label_3304ec:
    // 0x3304ec: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3304ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3304f0:
    // 0x3304f0: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x3304f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3304f4:
    // 0x3304f4: 0x1bc00028  blez        $fp, . + 4 + (0x28 << 2)
label_3304f8:
    if (ctx->pc == 0x3304F8u) {
        ctx->pc = 0x3304F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3304F4u;
        // 0x3304f8: 0x33c30003  andi        $v1, $fp, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3304FCu;
        goto label_3304fc;
    }
    ctx->pc = 0x3304F4u;
    {
        const bool branch_taken_0x3304f4 = (GPR_S32(ctx, 30) <= 0);
        ctx->pc = 0x3304F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3304F4u;
        // 0x3304f8: 0x33c30003  andi        $v1, $fp, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3304f4) {
            ctx->pc = 0x330598u;
            goto label_330598;
        }
    }
    ctx->pc = 0x3304FCu;
label_3304fc:
    // 0x3304fc: 0x10600038  beqz        $v1, . + 4 + (0x38 << 2)
label_330500:
    if (ctx->pc == 0x330500u) {
        ctx->pc = 0x330500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3304FCu;
        // 0x330500: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x330504u;
        goto label_330504;
    }
    ctx->pc = 0x3304FCu;
    {
        const bool branch_taken_0x3304fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x330500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3304FCu;
        // 0x330500: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3304fc) {
            ctx->pc = 0x3305E0u;
            goto label_3305e0;
        }
    }
    ctx->pc = 0x330504u;
label_330504:
    // 0x330504: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
label_330508:
    if (ctx->pc == 0x330508u) {
        ctx->pc = 0x330508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330504u;
        // 0x330508: 0x78e30010  lq          $v1, 0x10($a3) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33050Cu;
        goto label_33050c;
    }
    ctx->pc = 0x330504u;
    {
        const bool branch_taken_0x330504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x330504) {
            ctx->pc = 0x330508u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x330504u;
            // 0x330508: 0x78e30010  lq          $v1, 0x10($a3) (Delay Slot)
            SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33059Cu;
            goto label_33059c;
        }
    }
    ctx->pc = 0x33050Cu;
label_33050c:
    // 0x33050c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x33050cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_330510:
    // 0x330510: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_330514:
    if (ctx->pc == 0x330514u) {
        ctx->pc = 0x330514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330510u;
        // 0x330514: 0x78e30010  lq          $v1, 0x10($a3) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330518u;
        goto label_330518;
    }
    ctx->pc = 0x330510u;
    {
        const bool branch_taken_0x330510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x330510) {
            ctx->pc = 0x330514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x330510u;
            // 0x330514: 0x78e30010  lq          $v1, 0x10($a3) (Delay Slot)
            SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x330560u;
            goto label_330560;
        }
    }
    ctx->pc = 0x330518u;
label_330518:
    // 0x330518: 0x7a030010  lq          $v1, 0x10($s0)
    ctx->pc = 0x330518u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_33051c:
    // 0x33051c: 0x7a040020  lq          $a0, 0x20($s0)
    ctx->pc = 0x33051cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 32)));
label_330520:
    // 0x330520: 0x7a050030  lq          $a1, 0x30($s0)
    ctx->pc = 0x330520u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 16), 48)));
label_330524:
    // 0x330524: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x330524u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_330528:
    // 0x330528: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x330528u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
label_33052c:
    // 0x33052c: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x33052cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
label_330530:
    // 0x330530: 0x7d030000  sq          $v1, 0x0($t0)
    ctx->pc = 0x330530u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 3));
label_330534:
    // 0x330534: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x330534u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
label_330538:
    // 0x330538: 0x7d040000  sq          $a0, 0x0($t0)
    ctx->pc = 0x330538u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 4));
label_33053c:
    // 0x33053c: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x33053cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
label_330540:
    // 0x330540: 0x7d050000  sq          $a1, 0x0($t0)
    ctx->pc = 0x330540u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 5));
label_330544:
    // 0x330544: 0x25020010  addiu       $v0, $t0, 0x10
    ctx->pc = 0x330544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
label_330548:
    // 0x330548: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x330548u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33054c:
    // 0x33054c: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x33054cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_330550:
    // 0x330550: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x330550u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_330554:
    // 0x330554: 0x26070040  addiu       $a3, $s0, 0x40
    ctx->pc = 0x330554u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_330558:
    // 0x330558: 0x78e30010  lq          $v1, 0x10($a3)
    ctx->pc = 0x330558u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 16)));
label_33055c:
    // 0x33055c: 0x0  nop
    ctx->pc = 0x33055cu;
    // NOP
label_330560:
    // 0x330560: 0x78e40020  lq          $a0, 0x20($a3)
    ctx->pc = 0x330560u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 7), 32)));
label_330564:
    // 0x330564: 0x78e50030  lq          $a1, 0x30($a3)
    ctx->pc = 0x330564u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 7), 48)));
label_330568:
    // 0x330568: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x330568u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_33056c:
    // 0x33056c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x33056cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_330570:
    // 0x330570: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x330570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_330574:
    // 0x330574: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x330574u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
label_330578:
    // 0x330578: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x330578u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_33057c:
    // 0x33057c: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x33057cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
label_330580:
    // 0x330580: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x330580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_330584:
    // 0x330584: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x330584u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
label_330588:
    // 0x330588: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x330588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_33058c:
    // 0x33058c: 0x25080040  addiu       $t0, $t0, 0x40
    ctx->pc = 0x33058cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
label_330590:
    // 0x330590: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x330590u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_330594:
    // 0x330594: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x330594u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
label_330598:
    // 0x330598: 0x78e30010  lq          $v1, 0x10($a3)
    ctx->pc = 0x330598u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 16)));
label_33059c:
    // 0x33059c: 0x78e40020  lq          $a0, 0x20($a3)
    ctx->pc = 0x33059cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 7), 32)));
label_3305a0:
    // 0x3305a0: 0x78e50030  lq          $a1, 0x30($a3)
    ctx->pc = 0x3305a0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 7), 48)));
label_3305a4:
    // 0x3305a4: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x3305a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_3305a8:
    // 0x3305a8: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x3305a8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_3305ac:
    // 0x3305ac: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x3305acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_3305b0:
    // 0x3305b0: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x3305b0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
label_3305b4:
    // 0x3305b4: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x3305b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_3305b8:
    // 0x3305b8: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x3305b8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
label_3305bc:
    // 0x3305bc: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x3305bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_3305c0:
    // 0x3305c0: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x3305c0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
label_3305c4:
    // 0x3305c4: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x3305c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_3305c8:
    // 0x3305c8: 0x25080040  addiu       $t0, $t0, 0x40
    ctx->pc = 0x3305c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
label_3305cc:
    // 0x3305cc: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x3305ccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_3305d0:
    // 0x3305d0: 0x19e102b  sltu        $v0, $t4, $fp
    ctx->pc = 0x3305d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_3305d4:
    // 0x3305d4: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_3305d8:
    if (ctx->pc == 0x3305D8u) {
        ctx->pc = 0x3305D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3305D4u;
        // 0x3305d8: 0x24e70040  addiu       $a3, $a3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3305DCu;
        goto label_3305dc;
    }
    ctx->pc = 0x3305D4u;
    {
        const bool branch_taken_0x3305d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3305D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3305D4u;
        // 0x3305d8: 0x24e70040  addiu       $a3, $a3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3305d4) {
            ctx->pc = 0x3306A0u;
            goto label_3306a0;
        }
    }
    ctx->pc = 0x3305DCu;
label_3305dc:
    // 0x3305dc: 0x0  nop
    ctx->pc = 0x3305dcu;
    // NOP
label_3305e0:
    // 0x3305e0: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x3305e0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3305e4:
    // 0x3305e4: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x3305e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3305e8:
    // 0x3305e8: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x3305e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3305ec:
    // 0x3305ec: 0x0  nop
    ctx->pc = 0x3305ecu;
    // NOP
label_3305f0:
    // 0x3305f0: 0x79430010  lq          $v1, 0x10($t2)
    ctx->pc = 0x3305f0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 10), 16)));
label_3305f4:
    // 0x3305f4: 0x79640020  lq          $a0, 0x20($t3)
    ctx->pc = 0x3305f4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 11), 32)));
label_3305f8:
    // 0x3305f8: 0x78e50030  lq          $a1, 0x30($a3)
    ctx->pc = 0x3305f8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 7), 48)));
label_3305fc:
    // 0x3305fc: 0x79220000  lq          $v0, 0x0($t1)
    ctx->pc = 0x3305fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 9), 0)));
label_330600:
    // 0x330600: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x330600u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_330604:
    // 0x330604: 0x7cc30010  sq          $v1, 0x10($a2)
    ctx->pc = 0x330604u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 3));
label_330608:
    // 0x330608: 0x7cc40020  sq          $a0, 0x20($a2)
    ctx->pc = 0x330608u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 4));
label_33060c:
    // 0x33060c: 0x7cc50030  sq          $a1, 0x30($a2)
    ctx->pc = 0x33060cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 5));
label_330610:
    // 0x330610: 0x79220040  lq          $v0, 0x40($t1)
    ctx->pc = 0x330610u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 9), 64)));
label_330614:
    // 0x330614: 0x79430050  lq          $v1, 0x50($t2)
    ctx->pc = 0x330614u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 10), 80)));
label_330618:
    // 0x330618: 0x79640060  lq          $a0, 0x60($t3)
    ctx->pc = 0x330618u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 11), 96)));
label_33061c:
    // 0x33061c: 0x78e50070  lq          $a1, 0x70($a3)
    ctx->pc = 0x33061cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 7), 112)));
label_330620:
    // 0x330620: 0x7cc20040  sq          $v0, 0x40($a2)
    ctx->pc = 0x330620u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), GPR_VEC(ctx, 2));
label_330624:
    // 0x330624: 0x7cc30050  sq          $v1, 0x50($a2)
    ctx->pc = 0x330624u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 80), GPR_VEC(ctx, 3));
label_330628:
    // 0x330628: 0x7cc40060  sq          $a0, 0x60($a2)
    ctx->pc = 0x330628u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 96), GPR_VEC(ctx, 4));
label_33062c:
    // 0x33062c: 0x7cc50070  sq          $a1, 0x70($a2)
    ctx->pc = 0x33062cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 112), GPR_VEC(ctx, 5));
label_330630:
    // 0x330630: 0x79220080  lq          $v0, 0x80($t1)
    ctx->pc = 0x330630u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 9), 128)));
label_330634:
    // 0x330634: 0x79430090  lq          $v1, 0x90($t2)
    ctx->pc = 0x330634u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 10), 144)));
label_330638:
    // 0x330638: 0x796400a0  lq          $a0, 0xA0($t3)
    ctx->pc = 0x330638u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 11), 160)));
label_33063c:
    // 0x33063c: 0x78e500b0  lq          $a1, 0xB0($a3)
    ctx->pc = 0x33063cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 7), 176)));
label_330640:
    // 0x330640: 0x7cc20080  sq          $v0, 0x80($a2)
    ctx->pc = 0x330640u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 128), GPR_VEC(ctx, 2));
label_330644:
    // 0x330644: 0x7cc30090  sq          $v1, 0x90($a2)
    ctx->pc = 0x330644u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 144), GPR_VEC(ctx, 3));
label_330648:
    // 0x330648: 0x7cc400a0  sq          $a0, 0xA0($a2)
    ctx->pc = 0x330648u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 160), GPR_VEC(ctx, 4));
label_33064c:
    // 0x33064c: 0x7cc500b0  sq          $a1, 0xB0($a2)
    ctx->pc = 0x33064cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 176), GPR_VEC(ctx, 5));
label_330650:
    // 0x330650: 0x792200c0  lq          $v0, 0xC0($t1)
    ctx->pc = 0x330650u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 9), 192)));
label_330654:
    // 0x330654: 0x794300d0  lq          $v1, 0xD0($t2)
    ctx->pc = 0x330654u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 10), 208)));
label_330658:
    // 0x330658: 0x796400e0  lq          $a0, 0xE0($t3)
    ctx->pc = 0x330658u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 11), 224)));
label_33065c:
    // 0x33065c: 0x78e500f0  lq          $a1, 0xF0($a3)
    ctx->pc = 0x33065cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 7), 240)));
label_330660:
    // 0x330660: 0x7cc200c0  sq          $v0, 0xC0($a2)
    ctx->pc = 0x330660u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 192), GPR_VEC(ctx, 2));
label_330664:
    // 0x330664: 0x24c600d0  addiu       $a2, $a2, 0xD0
    ctx->pc = 0x330664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 208));
label_330668:
    // 0x330668: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x330668u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
label_33066c:
    // 0x33066c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x33066cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_330670:
    // 0x330670: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x330670u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
label_330674:
    // 0x330674: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x330674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_330678:
    // 0x330678: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x330678u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
label_33067c:
    // 0x33067c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x33067cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_330680:
    // 0x330680: 0x25080100  addiu       $t0, $t0, 0x100
    ctx->pc = 0x330680u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 256));
label_330684:
    // 0x330684: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x330684u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
label_330688:
    // 0x330688: 0x24e70100  addiu       $a3, $a3, 0x100
    ctx->pc = 0x330688u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 256));
label_33068c:
    // 0x33068c: 0x256b0100  addiu       $t3, $t3, 0x100
    ctx->pc = 0x33068cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 256));
label_330690:
    // 0x330690: 0x254a0100  addiu       $t2, $t2, 0x100
    ctx->pc = 0x330690u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 256));
label_330694:
    // 0x330694: 0x19e102b  sltu        $v0, $t4, $fp
    ctx->pc = 0x330694u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_330698:
    // 0x330698: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
label_33069c:
    if (ctx->pc == 0x33069Cu) {
        ctx->pc = 0x33069Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330698u;
        // 0x33069c: 0x25290100  addiu       $t1, $t1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3306A0u;
        goto label_3306a0;
    }
    ctx->pc = 0x330698u;
    {
        const bool branch_taken_0x330698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33069Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330698u;
        // 0x33069c: 0x25290100  addiu       $t1, $t1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330698) {
            ctx->pc = 0x3305F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3305f0;
        }
    }
    ctx->pc = 0x3306A0u;
label_3306a0:
    // 0x3306a0: 0xaf88be20  sw          $t0, -0x41E0($gp)
    ctx->pc = 0x3306a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 8));
label_3306a4:
    // 0x3306a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3306a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3306a8:
    // 0x3306a8: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x3306a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_3306ac:
    // 0x3306ac: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x3306acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_3306b0:
    // 0x3306b0: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x3306b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_3306b4:
    // 0x3306b4: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x3306b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3306b8:
    // 0x3306b8: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x3306b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3306bc:
    // 0x3306bc: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x3306bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3306c0:
    // 0x3306c0: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x3306c0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3306c4:
    // 0x3306c4: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x3306c4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3306c8:
    // 0x3306c8: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x3306c8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3306cc:
    // 0x3306cc: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3306ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_3306d0:
    // 0x3306d0: 0x3e00008  jr          $ra
label_3306d4:
    if (ctx->pc == 0x3306D4u) {
        ctx->pc = 0x3306D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3306D0u;
        // 0x3306d4: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3306D8u;
        goto label_3306d8;
    }
    ctx->pc = 0x3306D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3306D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3306D0u;
        // 0x3306d4: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3306D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3306D8u;
label_3306d8:
    // 0x3306d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3306d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3306dc:
    // 0x3306dc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3306dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3306e0:
    // 0x3306e0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3306e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3306e4:
    // 0x3306e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3306e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3306e8:
    // 0x3306e8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3306e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3306ec:
    // 0x3306ec: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3306ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3306f0:
    // 0x3306f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3306f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3306f4:
    // 0x3306f4: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x3306f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_3306f8:
    // 0x3306f8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3306f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3306fc:
    // 0x3306fc: 0x8c650018  lw          $a1, 0x18($v1)
    ctx->pc = 0x3306fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_330700:
    // 0x330700: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x330700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_330704:
    // 0x330704: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x330704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_330708:
    // 0x330708: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_33070c:
    if (ctx->pc == 0x33070Cu) {
        ctx->pc = 0x33070Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330708u;
        // 0x33070c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330710u;
        goto label_330710;
    }
    ctx->pc = 0x330708u;
    {
        const bool branch_taken_0x330708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33070Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330708u;
        // 0x33070c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330708) {
            ctx->pc = 0x33073Cu;
            goto label_33073c;
        }
    }
    ctx->pc = 0x330710u;
label_330710:
    // 0x330710: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x330710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_330714:
    // 0x330714: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x330714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_330718:
    // 0x330718: 0x8c43ac50  lw          $v1, -0x53B0($v0)
    ctx->pc = 0x330718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945872)));
label_33071c:
    // 0x33071c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x33071cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_330720:
    // 0x330720: 0xc0e8a96  jal         func_3A2A58
label_330724:
    if (ctx->pc == 0x330724u) {
        ctx->pc = 0x330724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330720u;
        // 0x330724: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330728u;
        goto label_330728;
    }
    ctx->pc = 0x330720u;
    SET_GPR_U32(ctx, 31, 0x330728u);
    ctx->pc = 0x330724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330720u;
    // 0x330724: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2A58u, 0x330720u, 0x330728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330728u;
label_330728:
    // 0x330728: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x330728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_33072c:
    // 0x33072c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x33072cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_330730:
    // 0x330730: 0xc0cafe6  jal         func_32BF98
label_330734:
    if (ctx->pc == 0x330734u) {
        ctx->pc = 0x330734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330730u;
        // 0x330734: 0x8e460000  lw          $a2, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330738u;
        goto label_330738;
    }
    ctx->pc = 0x330730u;
    SET_GPR_U32(ctx, 31, 0x330738u);
    ctx->pc = 0x330734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330730u;
    // 0x330734: 0x8e460000  lw          $a2, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32BF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32BF98u, 0x330730u, 0x330738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330738u;
label_330738:
    // 0x330738: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x330738u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_33073c:
    // 0x33073c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33073cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_330740:
    // 0x330740: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x330740u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_330744:
    // 0x330744: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x330744u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_330748:
    // 0x330748: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x330748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33074c:
    // 0x33074c: 0x3e00008  jr          $ra
label_330750:
    if (ctx->pc == 0x330750u) {
        ctx->pc = 0x330750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33074Cu;
        // 0x330750: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330754u;
        goto label_330754;
    }
    ctx->pc = 0x33074Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x330750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33074Cu;
        // 0x330750: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33074Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x330754u;
label_330754:
    // 0x330754: 0x0  nop
    ctx->pc = 0x330754u;
    // NOP
    ctx->pc = 0x330758u;
}
