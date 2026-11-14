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

// Function: sub_0020B840
// Address: 0x20b840 - 0x20ddf0
void sub_0020B840_0x20b840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B840_0x20b840");
#endif

    switch (ctx->pc) {
        case 0x20b840u: goto label_20b840;
        case 0x20b844u: goto label_20b844;
        case 0x20b848u: goto label_20b848;
        case 0x20b84cu: goto label_20b84c;
        case 0x20b850u: goto label_20b850;
        case 0x20b854u: goto label_20b854;
        case 0x20b858u: goto label_20b858;
        case 0x20b85cu: goto label_20b85c;
        case 0x20b860u: goto label_20b860;
        case 0x20b864u: goto label_20b864;
        case 0x20b868u: goto label_20b868;
        case 0x20b86cu: goto label_20b86c;
        case 0x20b870u: goto label_20b870;
        case 0x20b874u: goto label_20b874;
        case 0x20b878u: goto label_20b878;
        case 0x20b87cu: goto label_20b87c;
        case 0x20b880u: goto label_20b880;
        case 0x20b884u: goto label_20b884;
        case 0x20b888u: goto label_20b888;
        case 0x20b88cu: goto label_20b88c;
        case 0x20b890u: goto label_20b890;
        case 0x20b894u: goto label_20b894;
        case 0x20b898u: goto label_20b898;
        case 0x20b89cu: goto label_20b89c;
        case 0x20b8a0u: goto label_20b8a0;
        case 0x20b8a4u: goto label_20b8a4;
        case 0x20b8a8u: goto label_20b8a8;
        case 0x20b8acu: goto label_20b8ac;
        case 0x20b8b0u: goto label_20b8b0;
        case 0x20b8b4u: goto label_20b8b4;
        case 0x20b8b8u: goto label_20b8b8;
        case 0x20b8bcu: goto label_20b8bc;
        case 0x20b8c0u: goto label_20b8c0;
        case 0x20b8c4u: goto label_20b8c4;
        case 0x20b8c8u: goto label_20b8c8;
        case 0x20b8ccu: goto label_20b8cc;
        case 0x20b8d0u: goto label_20b8d0;
        case 0x20b8d4u: goto label_20b8d4;
        case 0x20b8d8u: goto label_20b8d8;
        case 0x20b8dcu: goto label_20b8dc;
        case 0x20b8e0u: goto label_20b8e0;
        case 0x20b8e4u: goto label_20b8e4;
        case 0x20b8e8u: goto label_20b8e8;
        case 0x20b8ecu: goto label_20b8ec;
        case 0x20b8f0u: goto label_20b8f0;
        case 0x20b8f4u: goto label_20b8f4;
        case 0x20b8f8u: goto label_20b8f8;
        case 0x20b8fcu: goto label_20b8fc;
        case 0x20b900u: goto label_20b900;
        case 0x20b904u: goto label_20b904;
        case 0x20b908u: goto label_20b908;
        case 0x20b90cu: goto label_20b90c;
        case 0x20b910u: goto label_20b910;
        case 0x20b914u: goto label_20b914;
        case 0x20b918u: goto label_20b918;
        case 0x20b91cu: goto label_20b91c;
        case 0x20b920u: goto label_20b920;
        case 0x20b924u: goto label_20b924;
        case 0x20b928u: goto label_20b928;
        case 0x20b92cu: goto label_20b92c;
        case 0x20b930u: goto label_20b930;
        case 0x20b934u: goto label_20b934;
        case 0x20b938u: goto label_20b938;
        case 0x20b93cu: goto label_20b93c;
        case 0x20b940u: goto label_20b940;
        case 0x20b944u: goto label_20b944;
        case 0x20b948u: goto label_20b948;
        case 0x20b94cu: goto label_20b94c;
        case 0x20b950u: goto label_20b950;
        case 0x20b954u: goto label_20b954;
        case 0x20b958u: goto label_20b958;
        case 0x20b95cu: goto label_20b95c;
        case 0x20b960u: goto label_20b960;
        case 0x20b964u: goto label_20b964;
        case 0x20b968u: goto label_20b968;
        case 0x20b96cu: goto label_20b96c;
        case 0x20b970u: goto label_20b970;
        case 0x20b974u: goto label_20b974;
        case 0x20b978u: goto label_20b978;
        case 0x20b97cu: goto label_20b97c;
        case 0x20b980u: goto label_20b980;
        case 0x20b984u: goto label_20b984;
        case 0x20b988u: goto label_20b988;
        case 0x20b98cu: goto label_20b98c;
        case 0x20b990u: goto label_20b990;
        case 0x20b994u: goto label_20b994;
        case 0x20b998u: goto label_20b998;
        case 0x20b99cu: goto label_20b99c;
        case 0x20b9a0u: goto label_20b9a0;
        case 0x20b9a4u: goto label_20b9a4;
        case 0x20b9a8u: goto label_20b9a8;
        case 0x20b9acu: goto label_20b9ac;
        case 0x20b9b0u: goto label_20b9b0;
        case 0x20b9b4u: goto label_20b9b4;
        case 0x20b9b8u: goto label_20b9b8;
        case 0x20b9bcu: goto label_20b9bc;
        case 0x20b9c0u: goto label_20b9c0;
        case 0x20b9c4u: goto label_20b9c4;
        case 0x20b9c8u: goto label_20b9c8;
        case 0x20b9ccu: goto label_20b9cc;
        case 0x20b9d0u: goto label_20b9d0;
        case 0x20b9d4u: goto label_20b9d4;
        case 0x20b9d8u: goto label_20b9d8;
        case 0x20b9dcu: goto label_20b9dc;
        case 0x20b9e0u: goto label_20b9e0;
        case 0x20b9e4u: goto label_20b9e4;
        case 0x20b9e8u: goto label_20b9e8;
        case 0x20b9ecu: goto label_20b9ec;
        case 0x20b9f0u: goto label_20b9f0;
        case 0x20b9f4u: goto label_20b9f4;
        case 0x20b9f8u: goto label_20b9f8;
        case 0x20b9fcu: goto label_20b9fc;
        case 0x20ba00u: goto label_20ba00;
        case 0x20ba04u: goto label_20ba04;
        case 0x20ba08u: goto label_20ba08;
        case 0x20ba0cu: goto label_20ba0c;
        case 0x20ba10u: goto label_20ba10;
        case 0x20ba14u: goto label_20ba14;
        case 0x20ba18u: goto label_20ba18;
        case 0x20ba1cu: goto label_20ba1c;
        case 0x20ba20u: goto label_20ba20;
        case 0x20ba24u: goto label_20ba24;
        case 0x20ba28u: goto label_20ba28;
        case 0x20ba2cu: goto label_20ba2c;
        case 0x20ba30u: goto label_20ba30;
        case 0x20ba34u: goto label_20ba34;
        case 0x20ba38u: goto label_20ba38;
        case 0x20ba3cu: goto label_20ba3c;
        case 0x20ba40u: goto label_20ba40;
        case 0x20ba44u: goto label_20ba44;
        case 0x20ba48u: goto label_20ba48;
        case 0x20ba4cu: goto label_20ba4c;
        case 0x20ba50u: goto label_20ba50;
        case 0x20ba54u: goto label_20ba54;
        case 0x20ba58u: goto label_20ba58;
        case 0x20ba5cu: goto label_20ba5c;
        case 0x20ba60u: goto label_20ba60;
        case 0x20ba64u: goto label_20ba64;
        case 0x20ba68u: goto label_20ba68;
        case 0x20ba6cu: goto label_20ba6c;
        case 0x20ba70u: goto label_20ba70;
        case 0x20ba74u: goto label_20ba74;
        case 0x20ba78u: goto label_20ba78;
        case 0x20ba7cu: goto label_20ba7c;
        case 0x20ba80u: goto label_20ba80;
        case 0x20ba84u: goto label_20ba84;
        case 0x20ba88u: goto label_20ba88;
        case 0x20ba8cu: goto label_20ba8c;
        case 0x20ba90u: goto label_20ba90;
        case 0x20ba94u: goto label_20ba94;
        case 0x20ba98u: goto label_20ba98;
        case 0x20ba9cu: goto label_20ba9c;
        case 0x20baa0u: goto label_20baa0;
        case 0x20baa4u: goto label_20baa4;
        case 0x20baa8u: goto label_20baa8;
        case 0x20baacu: goto label_20baac;
        case 0x20bab0u: goto label_20bab0;
        case 0x20bab4u: goto label_20bab4;
        case 0x20bab8u: goto label_20bab8;
        case 0x20babcu: goto label_20babc;
        case 0x20bac0u: goto label_20bac0;
        case 0x20bac4u: goto label_20bac4;
        case 0x20bac8u: goto label_20bac8;
        case 0x20baccu: goto label_20bacc;
        case 0x20bad0u: goto label_20bad0;
        case 0x20bad4u: goto label_20bad4;
        case 0x20bad8u: goto label_20bad8;
        case 0x20badcu: goto label_20badc;
        case 0x20bae0u: goto label_20bae0;
        case 0x20bae4u: goto label_20bae4;
        case 0x20bae8u: goto label_20bae8;
        case 0x20baecu: goto label_20baec;
        case 0x20baf0u: goto label_20baf0;
        case 0x20baf4u: goto label_20baf4;
        case 0x20baf8u: goto label_20baf8;
        case 0x20bafcu: goto label_20bafc;
        case 0x20bb00u: goto label_20bb00;
        case 0x20bb04u: goto label_20bb04;
        case 0x20bb08u: goto label_20bb08;
        case 0x20bb0cu: goto label_20bb0c;
        case 0x20bb10u: goto label_20bb10;
        case 0x20bb14u: goto label_20bb14;
        case 0x20bb18u: goto label_20bb18;
        case 0x20bb1cu: goto label_20bb1c;
        case 0x20bb20u: goto label_20bb20;
        case 0x20bb24u: goto label_20bb24;
        case 0x20bb28u: goto label_20bb28;
        case 0x20bb2cu: goto label_20bb2c;
        case 0x20bb30u: goto label_20bb30;
        case 0x20bb34u: goto label_20bb34;
        case 0x20bb38u: goto label_20bb38;
        case 0x20bb3cu: goto label_20bb3c;
        case 0x20bb40u: goto label_20bb40;
        case 0x20bb44u: goto label_20bb44;
        case 0x20bb48u: goto label_20bb48;
        case 0x20bb4cu: goto label_20bb4c;
        case 0x20bb50u: goto label_20bb50;
        case 0x20bb54u: goto label_20bb54;
        case 0x20bb58u: goto label_20bb58;
        case 0x20bb5cu: goto label_20bb5c;
        case 0x20bb60u: goto label_20bb60;
        case 0x20bb64u: goto label_20bb64;
        case 0x20bb68u: goto label_20bb68;
        case 0x20bb6cu: goto label_20bb6c;
        case 0x20bb70u: goto label_20bb70;
        case 0x20bb74u: goto label_20bb74;
        case 0x20bb78u: goto label_20bb78;
        case 0x20bb7cu: goto label_20bb7c;
        case 0x20bb80u: goto label_20bb80;
        case 0x20bb84u: goto label_20bb84;
        case 0x20bb88u: goto label_20bb88;
        case 0x20bb8cu: goto label_20bb8c;
        case 0x20bb90u: goto label_20bb90;
        case 0x20bb94u: goto label_20bb94;
        case 0x20bb98u: goto label_20bb98;
        case 0x20bb9cu: goto label_20bb9c;
        case 0x20bba0u: goto label_20bba0;
        case 0x20bba4u: goto label_20bba4;
        case 0x20bba8u: goto label_20bba8;
        case 0x20bbacu: goto label_20bbac;
        case 0x20bbb0u: goto label_20bbb0;
        case 0x20bbb4u: goto label_20bbb4;
        case 0x20bbb8u: goto label_20bbb8;
        case 0x20bbbcu: goto label_20bbbc;
        case 0x20bbc0u: goto label_20bbc0;
        case 0x20bbc4u: goto label_20bbc4;
        case 0x20bbc8u: goto label_20bbc8;
        case 0x20bbccu: goto label_20bbcc;
        case 0x20bbd0u: goto label_20bbd0;
        case 0x20bbd4u: goto label_20bbd4;
        case 0x20bbd8u: goto label_20bbd8;
        case 0x20bbdcu: goto label_20bbdc;
        case 0x20bbe0u: goto label_20bbe0;
        case 0x20bbe4u: goto label_20bbe4;
        case 0x20bbe8u: goto label_20bbe8;
        case 0x20bbecu: goto label_20bbec;
        case 0x20bbf0u: goto label_20bbf0;
        case 0x20bbf4u: goto label_20bbf4;
        case 0x20bbf8u: goto label_20bbf8;
        case 0x20bbfcu: goto label_20bbfc;
        case 0x20bc00u: goto label_20bc00;
        case 0x20bc04u: goto label_20bc04;
        case 0x20bc08u: goto label_20bc08;
        case 0x20bc0cu: goto label_20bc0c;
        case 0x20bc10u: goto label_20bc10;
        case 0x20bc14u: goto label_20bc14;
        case 0x20bc18u: goto label_20bc18;
        case 0x20bc1cu: goto label_20bc1c;
        case 0x20bc20u: goto label_20bc20;
        case 0x20bc24u: goto label_20bc24;
        case 0x20bc28u: goto label_20bc28;
        case 0x20bc2cu: goto label_20bc2c;
        case 0x20bc30u: goto label_20bc30;
        case 0x20bc34u: goto label_20bc34;
        case 0x20bc38u: goto label_20bc38;
        case 0x20bc3cu: goto label_20bc3c;
        case 0x20bc40u: goto label_20bc40;
        case 0x20bc44u: goto label_20bc44;
        case 0x20bc48u: goto label_20bc48;
        case 0x20bc4cu: goto label_20bc4c;
        case 0x20bc50u: goto label_20bc50;
        case 0x20bc54u: goto label_20bc54;
        case 0x20bc58u: goto label_20bc58;
        case 0x20bc5cu: goto label_20bc5c;
        case 0x20bc60u: goto label_20bc60;
        case 0x20bc64u: goto label_20bc64;
        case 0x20bc68u: goto label_20bc68;
        case 0x20bc6cu: goto label_20bc6c;
        case 0x20bc70u: goto label_20bc70;
        case 0x20bc74u: goto label_20bc74;
        case 0x20bc78u: goto label_20bc78;
        case 0x20bc7cu: goto label_20bc7c;
        case 0x20bc80u: goto label_20bc80;
        case 0x20bc84u: goto label_20bc84;
        case 0x20bc88u: goto label_20bc88;
        case 0x20bc8cu: goto label_20bc8c;
        case 0x20bc90u: goto label_20bc90;
        case 0x20bc94u: goto label_20bc94;
        case 0x20bc98u: goto label_20bc98;
        case 0x20bc9cu: goto label_20bc9c;
        case 0x20bca0u: goto label_20bca0;
        case 0x20bca4u: goto label_20bca4;
        case 0x20bca8u: goto label_20bca8;
        case 0x20bcacu: goto label_20bcac;
        case 0x20bcb0u: goto label_20bcb0;
        case 0x20bcb4u: goto label_20bcb4;
        case 0x20bcb8u: goto label_20bcb8;
        case 0x20bcbcu: goto label_20bcbc;
        case 0x20bcc0u: goto label_20bcc0;
        case 0x20bcc4u: goto label_20bcc4;
        case 0x20bcc8u: goto label_20bcc8;
        case 0x20bcccu: goto label_20bccc;
        case 0x20bcd0u: goto label_20bcd0;
        case 0x20bcd4u: goto label_20bcd4;
        case 0x20bcd8u: goto label_20bcd8;
        case 0x20bcdcu: goto label_20bcdc;
        case 0x20bce0u: goto label_20bce0;
        case 0x20bce4u: goto label_20bce4;
        case 0x20bce8u: goto label_20bce8;
        case 0x20bcecu: goto label_20bcec;
        case 0x20bcf0u: goto label_20bcf0;
        case 0x20bcf4u: goto label_20bcf4;
        case 0x20bcf8u: goto label_20bcf8;
        case 0x20bcfcu: goto label_20bcfc;
        case 0x20bd00u: goto label_20bd00;
        case 0x20bd04u: goto label_20bd04;
        case 0x20bd08u: goto label_20bd08;
        case 0x20bd0cu: goto label_20bd0c;
        case 0x20bd10u: goto label_20bd10;
        case 0x20bd14u: goto label_20bd14;
        case 0x20bd18u: goto label_20bd18;
        case 0x20bd1cu: goto label_20bd1c;
        case 0x20bd20u: goto label_20bd20;
        case 0x20bd24u: goto label_20bd24;
        case 0x20bd28u: goto label_20bd28;
        case 0x20bd2cu: goto label_20bd2c;
        case 0x20bd30u: goto label_20bd30;
        case 0x20bd34u: goto label_20bd34;
        case 0x20bd38u: goto label_20bd38;
        case 0x20bd3cu: goto label_20bd3c;
        case 0x20bd40u: goto label_20bd40;
        case 0x20bd44u: goto label_20bd44;
        case 0x20bd48u: goto label_20bd48;
        case 0x20bd4cu: goto label_20bd4c;
        case 0x20bd50u: goto label_20bd50;
        case 0x20bd54u: goto label_20bd54;
        case 0x20bd58u: goto label_20bd58;
        case 0x20bd5cu: goto label_20bd5c;
        case 0x20bd60u: goto label_20bd60;
        case 0x20bd64u: goto label_20bd64;
        case 0x20bd68u: goto label_20bd68;
        case 0x20bd6cu: goto label_20bd6c;
        case 0x20bd70u: goto label_20bd70;
        case 0x20bd74u: goto label_20bd74;
        case 0x20bd78u: goto label_20bd78;
        case 0x20bd7cu: goto label_20bd7c;
        case 0x20bd80u: goto label_20bd80;
        case 0x20bd84u: goto label_20bd84;
        case 0x20bd88u: goto label_20bd88;
        case 0x20bd8cu: goto label_20bd8c;
        case 0x20bd90u: goto label_20bd90;
        case 0x20bd94u: goto label_20bd94;
        case 0x20bd98u: goto label_20bd98;
        case 0x20bd9cu: goto label_20bd9c;
        case 0x20bda0u: goto label_20bda0;
        case 0x20bda4u: goto label_20bda4;
        case 0x20bda8u: goto label_20bda8;
        case 0x20bdacu: goto label_20bdac;
        case 0x20bdb0u: goto label_20bdb0;
        case 0x20bdb4u: goto label_20bdb4;
        case 0x20bdb8u: goto label_20bdb8;
        case 0x20bdbcu: goto label_20bdbc;
        case 0x20bdc0u: goto label_20bdc0;
        case 0x20bdc4u: goto label_20bdc4;
        case 0x20bdc8u: goto label_20bdc8;
        case 0x20bdccu: goto label_20bdcc;
        case 0x20bdd0u: goto label_20bdd0;
        case 0x20bdd4u: goto label_20bdd4;
        case 0x20bdd8u: goto label_20bdd8;
        case 0x20bddcu: goto label_20bddc;
        case 0x20bde0u: goto label_20bde0;
        case 0x20bde4u: goto label_20bde4;
        case 0x20bde8u: goto label_20bde8;
        case 0x20bdecu: goto label_20bdec;
        case 0x20bdf0u: goto label_20bdf0;
        case 0x20bdf4u: goto label_20bdf4;
        case 0x20bdf8u: goto label_20bdf8;
        case 0x20bdfcu: goto label_20bdfc;
        case 0x20be00u: goto label_20be00;
        case 0x20be04u: goto label_20be04;
        case 0x20be08u: goto label_20be08;
        case 0x20be0cu: goto label_20be0c;
        case 0x20be10u: goto label_20be10;
        case 0x20be14u: goto label_20be14;
        case 0x20be18u: goto label_20be18;
        case 0x20be1cu: goto label_20be1c;
        case 0x20be20u: goto label_20be20;
        case 0x20be24u: goto label_20be24;
        case 0x20be28u: goto label_20be28;
        case 0x20be2cu: goto label_20be2c;
        case 0x20be30u: goto label_20be30;
        case 0x20be34u: goto label_20be34;
        case 0x20be38u: goto label_20be38;
        case 0x20be3cu: goto label_20be3c;
        case 0x20be40u: goto label_20be40;
        case 0x20be44u: goto label_20be44;
        case 0x20be48u: goto label_20be48;
        case 0x20be4cu: goto label_20be4c;
        case 0x20be50u: goto label_20be50;
        case 0x20be54u: goto label_20be54;
        case 0x20be58u: goto label_20be58;
        case 0x20be5cu: goto label_20be5c;
        case 0x20be60u: goto label_20be60;
        case 0x20be64u: goto label_20be64;
        case 0x20be68u: goto label_20be68;
        case 0x20be6cu: goto label_20be6c;
        case 0x20be70u: goto label_20be70;
        case 0x20be74u: goto label_20be74;
        case 0x20be78u: goto label_20be78;
        case 0x20be7cu: goto label_20be7c;
        case 0x20be80u: goto label_20be80;
        case 0x20be84u: goto label_20be84;
        case 0x20be88u: goto label_20be88;
        case 0x20be8cu: goto label_20be8c;
        case 0x20be90u: goto label_20be90;
        case 0x20be94u: goto label_20be94;
        case 0x20be98u: goto label_20be98;
        case 0x20be9cu: goto label_20be9c;
        case 0x20bea0u: goto label_20bea0;
        case 0x20bea4u: goto label_20bea4;
        case 0x20bea8u: goto label_20bea8;
        case 0x20beacu: goto label_20beac;
        case 0x20beb0u: goto label_20beb0;
        case 0x20beb4u: goto label_20beb4;
        case 0x20beb8u: goto label_20beb8;
        case 0x20bebcu: goto label_20bebc;
        case 0x20bec0u: goto label_20bec0;
        case 0x20bec4u: goto label_20bec4;
        case 0x20bec8u: goto label_20bec8;
        case 0x20beccu: goto label_20becc;
        case 0x20bed0u: goto label_20bed0;
        case 0x20bed4u: goto label_20bed4;
        case 0x20bed8u: goto label_20bed8;
        case 0x20bedcu: goto label_20bedc;
        case 0x20bee0u: goto label_20bee0;
        case 0x20bee4u: goto label_20bee4;
        case 0x20bee8u: goto label_20bee8;
        case 0x20beecu: goto label_20beec;
        case 0x20bef0u: goto label_20bef0;
        case 0x20bef4u: goto label_20bef4;
        case 0x20bef8u: goto label_20bef8;
        case 0x20befcu: goto label_20befc;
        case 0x20bf00u: goto label_20bf00;
        case 0x20bf04u: goto label_20bf04;
        case 0x20bf08u: goto label_20bf08;
        case 0x20bf0cu: goto label_20bf0c;
        case 0x20bf10u: goto label_20bf10;
        case 0x20bf14u: goto label_20bf14;
        case 0x20bf18u: goto label_20bf18;
        case 0x20bf1cu: goto label_20bf1c;
        case 0x20bf20u: goto label_20bf20;
        case 0x20bf24u: goto label_20bf24;
        case 0x20bf28u: goto label_20bf28;
        case 0x20bf2cu: goto label_20bf2c;
        case 0x20bf30u: goto label_20bf30;
        case 0x20bf34u: goto label_20bf34;
        case 0x20bf38u: goto label_20bf38;
        case 0x20bf3cu: goto label_20bf3c;
        case 0x20bf40u: goto label_20bf40;
        case 0x20bf44u: goto label_20bf44;
        case 0x20bf48u: goto label_20bf48;
        case 0x20bf4cu: goto label_20bf4c;
        case 0x20bf50u: goto label_20bf50;
        case 0x20bf54u: goto label_20bf54;
        case 0x20bf58u: goto label_20bf58;
        case 0x20bf5cu: goto label_20bf5c;
        case 0x20bf60u: goto label_20bf60;
        case 0x20bf64u: goto label_20bf64;
        case 0x20bf68u: goto label_20bf68;
        case 0x20bf6cu: goto label_20bf6c;
        case 0x20bf70u: goto label_20bf70;
        case 0x20bf74u: goto label_20bf74;
        case 0x20bf78u: goto label_20bf78;
        case 0x20bf7cu: goto label_20bf7c;
        case 0x20bf80u: goto label_20bf80;
        case 0x20bf84u: goto label_20bf84;
        case 0x20bf88u: goto label_20bf88;
        case 0x20bf8cu: goto label_20bf8c;
        case 0x20bf90u: goto label_20bf90;
        case 0x20bf94u: goto label_20bf94;
        case 0x20bf98u: goto label_20bf98;
        case 0x20bf9cu: goto label_20bf9c;
        case 0x20bfa0u: goto label_20bfa0;
        case 0x20bfa4u: goto label_20bfa4;
        case 0x20bfa8u: goto label_20bfa8;
        case 0x20bfacu: goto label_20bfac;
        case 0x20bfb0u: goto label_20bfb0;
        case 0x20bfb4u: goto label_20bfb4;
        case 0x20bfb8u: goto label_20bfb8;
        case 0x20bfbcu: goto label_20bfbc;
        case 0x20bfc0u: goto label_20bfc0;
        case 0x20bfc4u: goto label_20bfc4;
        case 0x20bfc8u: goto label_20bfc8;
        case 0x20bfccu: goto label_20bfcc;
        case 0x20bfd0u: goto label_20bfd0;
        case 0x20bfd4u: goto label_20bfd4;
        case 0x20bfd8u: goto label_20bfd8;
        case 0x20bfdcu: goto label_20bfdc;
        case 0x20bfe0u: goto label_20bfe0;
        case 0x20bfe4u: goto label_20bfe4;
        case 0x20bfe8u: goto label_20bfe8;
        case 0x20bfecu: goto label_20bfec;
        case 0x20bff0u: goto label_20bff0;
        case 0x20bff4u: goto label_20bff4;
        case 0x20bff8u: goto label_20bff8;
        case 0x20bffcu: goto label_20bffc;
        case 0x20c000u: goto label_20c000;
        case 0x20c004u: goto label_20c004;
        case 0x20c008u: goto label_20c008;
        case 0x20c00cu: goto label_20c00c;
        case 0x20c010u: goto label_20c010;
        case 0x20c014u: goto label_20c014;
        case 0x20c018u: goto label_20c018;
        case 0x20c01cu: goto label_20c01c;
        case 0x20c020u: goto label_20c020;
        case 0x20c024u: goto label_20c024;
        case 0x20c028u: goto label_20c028;
        case 0x20c02cu: goto label_20c02c;
        case 0x20c030u: goto label_20c030;
        case 0x20c034u: goto label_20c034;
        case 0x20c038u: goto label_20c038;
        case 0x20c03cu: goto label_20c03c;
        case 0x20c040u: goto label_20c040;
        case 0x20c044u: goto label_20c044;
        case 0x20c048u: goto label_20c048;
        case 0x20c04cu: goto label_20c04c;
        case 0x20c050u: goto label_20c050;
        case 0x20c054u: goto label_20c054;
        case 0x20c058u: goto label_20c058;
        case 0x20c05cu: goto label_20c05c;
        case 0x20c060u: goto label_20c060;
        case 0x20c064u: goto label_20c064;
        case 0x20c068u: goto label_20c068;
        case 0x20c06cu: goto label_20c06c;
        case 0x20c070u: goto label_20c070;
        case 0x20c074u: goto label_20c074;
        case 0x20c078u: goto label_20c078;
        case 0x20c07cu: goto label_20c07c;
        case 0x20c080u: goto label_20c080;
        case 0x20c084u: goto label_20c084;
        case 0x20c088u: goto label_20c088;
        case 0x20c08cu: goto label_20c08c;
        case 0x20c090u: goto label_20c090;
        case 0x20c094u: goto label_20c094;
        case 0x20c098u: goto label_20c098;
        case 0x20c09cu: goto label_20c09c;
        case 0x20c0a0u: goto label_20c0a0;
        case 0x20c0a4u: goto label_20c0a4;
        case 0x20c0a8u: goto label_20c0a8;
        case 0x20c0acu: goto label_20c0ac;
        case 0x20c0b0u: goto label_20c0b0;
        case 0x20c0b4u: goto label_20c0b4;
        case 0x20c0b8u: goto label_20c0b8;
        case 0x20c0bcu: goto label_20c0bc;
        case 0x20c0c0u: goto label_20c0c0;
        case 0x20c0c4u: goto label_20c0c4;
        case 0x20c0c8u: goto label_20c0c8;
        case 0x20c0ccu: goto label_20c0cc;
        case 0x20c0d0u: goto label_20c0d0;
        case 0x20c0d4u: goto label_20c0d4;
        case 0x20c0d8u: goto label_20c0d8;
        case 0x20c0dcu: goto label_20c0dc;
        case 0x20c0e0u: goto label_20c0e0;
        case 0x20c0e4u: goto label_20c0e4;
        case 0x20c0e8u: goto label_20c0e8;
        case 0x20c0ecu: goto label_20c0ec;
        case 0x20c0f0u: goto label_20c0f0;
        case 0x20c0f4u: goto label_20c0f4;
        case 0x20c0f8u: goto label_20c0f8;
        case 0x20c0fcu: goto label_20c0fc;
        case 0x20c100u: goto label_20c100;
        case 0x20c104u: goto label_20c104;
        case 0x20c108u: goto label_20c108;
        case 0x20c10cu: goto label_20c10c;
        case 0x20c110u: goto label_20c110;
        case 0x20c114u: goto label_20c114;
        case 0x20c118u: goto label_20c118;
        case 0x20c11cu: goto label_20c11c;
        case 0x20c120u: goto label_20c120;
        case 0x20c124u: goto label_20c124;
        case 0x20c128u: goto label_20c128;
        case 0x20c12cu: goto label_20c12c;
        case 0x20c130u: goto label_20c130;
        case 0x20c134u: goto label_20c134;
        case 0x20c138u: goto label_20c138;
        case 0x20c13cu: goto label_20c13c;
        case 0x20c140u: goto label_20c140;
        case 0x20c144u: goto label_20c144;
        case 0x20c148u: goto label_20c148;
        case 0x20c14cu: goto label_20c14c;
        case 0x20c150u: goto label_20c150;
        case 0x20c154u: goto label_20c154;
        case 0x20c158u: goto label_20c158;
        case 0x20c15cu: goto label_20c15c;
        case 0x20c160u: goto label_20c160;
        case 0x20c164u: goto label_20c164;
        case 0x20c168u: goto label_20c168;
        case 0x20c16cu: goto label_20c16c;
        case 0x20c170u: goto label_20c170;
        case 0x20c174u: goto label_20c174;
        case 0x20c178u: goto label_20c178;
        case 0x20c17cu: goto label_20c17c;
        case 0x20c180u: goto label_20c180;
        case 0x20c184u: goto label_20c184;
        case 0x20c188u: goto label_20c188;
        case 0x20c18cu: goto label_20c18c;
        case 0x20c190u: goto label_20c190;
        case 0x20c194u: goto label_20c194;
        case 0x20c198u: goto label_20c198;
        case 0x20c19cu: goto label_20c19c;
        case 0x20c1a0u: goto label_20c1a0;
        case 0x20c1a4u: goto label_20c1a4;
        case 0x20c1a8u: goto label_20c1a8;
        case 0x20c1acu: goto label_20c1ac;
        case 0x20c1b0u: goto label_20c1b0;
        case 0x20c1b4u: goto label_20c1b4;
        case 0x20c1b8u: goto label_20c1b8;
        case 0x20c1bcu: goto label_20c1bc;
        case 0x20c1c0u: goto label_20c1c0;
        case 0x20c1c4u: goto label_20c1c4;
        case 0x20c1c8u: goto label_20c1c8;
        case 0x20c1ccu: goto label_20c1cc;
        case 0x20c1d0u: goto label_20c1d0;
        case 0x20c1d4u: goto label_20c1d4;
        case 0x20c1d8u: goto label_20c1d8;
        case 0x20c1dcu: goto label_20c1dc;
        case 0x20c1e0u: goto label_20c1e0;
        case 0x20c1e4u: goto label_20c1e4;
        case 0x20c1e8u: goto label_20c1e8;
        case 0x20c1ecu: goto label_20c1ec;
        case 0x20c1f0u: goto label_20c1f0;
        case 0x20c1f4u: goto label_20c1f4;
        case 0x20c1f8u: goto label_20c1f8;
        case 0x20c1fcu: goto label_20c1fc;
        case 0x20c200u: goto label_20c200;
        case 0x20c204u: goto label_20c204;
        case 0x20c208u: goto label_20c208;
        case 0x20c20cu: goto label_20c20c;
        case 0x20c210u: goto label_20c210;
        case 0x20c214u: goto label_20c214;
        case 0x20c218u: goto label_20c218;
        case 0x20c21cu: goto label_20c21c;
        case 0x20c220u: goto label_20c220;
        case 0x20c224u: goto label_20c224;
        case 0x20c228u: goto label_20c228;
        case 0x20c22cu: goto label_20c22c;
        case 0x20c230u: goto label_20c230;
        case 0x20c234u: goto label_20c234;
        case 0x20c238u: goto label_20c238;
        case 0x20c23cu: goto label_20c23c;
        case 0x20c240u: goto label_20c240;
        case 0x20c244u: goto label_20c244;
        case 0x20c248u: goto label_20c248;
        case 0x20c24cu: goto label_20c24c;
        case 0x20c250u: goto label_20c250;
        case 0x20c254u: goto label_20c254;
        case 0x20c258u: goto label_20c258;
        case 0x20c25cu: goto label_20c25c;
        case 0x20c260u: goto label_20c260;
        case 0x20c264u: goto label_20c264;
        case 0x20c268u: goto label_20c268;
        case 0x20c26cu: goto label_20c26c;
        case 0x20c270u: goto label_20c270;
        case 0x20c274u: goto label_20c274;
        case 0x20c278u: goto label_20c278;
        case 0x20c27cu: goto label_20c27c;
        case 0x20c280u: goto label_20c280;
        case 0x20c284u: goto label_20c284;
        case 0x20c288u: goto label_20c288;
        case 0x20c28cu: goto label_20c28c;
        case 0x20c290u: goto label_20c290;
        case 0x20c294u: goto label_20c294;
        case 0x20c298u: goto label_20c298;
        case 0x20c29cu: goto label_20c29c;
        case 0x20c2a0u: goto label_20c2a0;
        case 0x20c2a4u: goto label_20c2a4;
        case 0x20c2a8u: goto label_20c2a8;
        case 0x20c2acu: goto label_20c2ac;
        case 0x20c2b0u: goto label_20c2b0;
        case 0x20c2b4u: goto label_20c2b4;
        case 0x20c2b8u: goto label_20c2b8;
        case 0x20c2bcu: goto label_20c2bc;
        case 0x20c2c0u: goto label_20c2c0;
        case 0x20c2c4u: goto label_20c2c4;
        case 0x20c2c8u: goto label_20c2c8;
        case 0x20c2ccu: goto label_20c2cc;
        case 0x20c2d0u: goto label_20c2d0;
        case 0x20c2d4u: goto label_20c2d4;
        case 0x20c2d8u: goto label_20c2d8;
        case 0x20c2dcu: goto label_20c2dc;
        case 0x20c2e0u: goto label_20c2e0;
        case 0x20c2e4u: goto label_20c2e4;
        case 0x20c2e8u: goto label_20c2e8;
        case 0x20c2ecu: goto label_20c2ec;
        case 0x20c2f0u: goto label_20c2f0;
        case 0x20c2f4u: goto label_20c2f4;
        case 0x20c2f8u: goto label_20c2f8;
        case 0x20c2fcu: goto label_20c2fc;
        case 0x20c300u: goto label_20c300;
        case 0x20c304u: goto label_20c304;
        case 0x20c308u: goto label_20c308;
        case 0x20c30cu: goto label_20c30c;
        case 0x20c310u: goto label_20c310;
        case 0x20c314u: goto label_20c314;
        case 0x20c318u: goto label_20c318;
        case 0x20c31cu: goto label_20c31c;
        case 0x20c320u: goto label_20c320;
        case 0x20c324u: goto label_20c324;
        case 0x20c328u: goto label_20c328;
        case 0x20c32cu: goto label_20c32c;
        case 0x20c330u: goto label_20c330;
        case 0x20c334u: goto label_20c334;
        case 0x20c338u: goto label_20c338;
        case 0x20c33cu: goto label_20c33c;
        case 0x20c340u: goto label_20c340;
        case 0x20c344u: goto label_20c344;
        case 0x20c348u: goto label_20c348;
        case 0x20c34cu: goto label_20c34c;
        case 0x20c350u: goto label_20c350;
        case 0x20c354u: goto label_20c354;
        case 0x20c358u: goto label_20c358;
        case 0x20c35cu: goto label_20c35c;
        case 0x20c360u: goto label_20c360;
        case 0x20c364u: goto label_20c364;
        case 0x20c368u: goto label_20c368;
        case 0x20c36cu: goto label_20c36c;
        case 0x20c370u: goto label_20c370;
        case 0x20c374u: goto label_20c374;
        case 0x20c378u: goto label_20c378;
        case 0x20c37cu: goto label_20c37c;
        case 0x20c380u: goto label_20c380;
        case 0x20c384u: goto label_20c384;
        case 0x20c388u: goto label_20c388;
        case 0x20c38cu: goto label_20c38c;
        case 0x20c390u: goto label_20c390;
        case 0x20c394u: goto label_20c394;
        case 0x20c398u: goto label_20c398;
        case 0x20c39cu: goto label_20c39c;
        case 0x20c3a0u: goto label_20c3a0;
        case 0x20c3a4u: goto label_20c3a4;
        case 0x20c3a8u: goto label_20c3a8;
        case 0x20c3acu: goto label_20c3ac;
        case 0x20c3b0u: goto label_20c3b0;
        case 0x20c3b4u: goto label_20c3b4;
        case 0x20c3b8u: goto label_20c3b8;
        case 0x20c3bcu: goto label_20c3bc;
        case 0x20c3c0u: goto label_20c3c0;
        case 0x20c3c4u: goto label_20c3c4;
        case 0x20c3c8u: goto label_20c3c8;
        case 0x20c3ccu: goto label_20c3cc;
        case 0x20c3d0u: goto label_20c3d0;
        case 0x20c3d4u: goto label_20c3d4;
        case 0x20c3d8u: goto label_20c3d8;
        case 0x20c3dcu: goto label_20c3dc;
        case 0x20c3e0u: goto label_20c3e0;
        case 0x20c3e4u: goto label_20c3e4;
        case 0x20c3e8u: goto label_20c3e8;
        case 0x20c3ecu: goto label_20c3ec;
        case 0x20c3f0u: goto label_20c3f0;
        case 0x20c3f4u: goto label_20c3f4;
        case 0x20c3f8u: goto label_20c3f8;
        case 0x20c3fcu: goto label_20c3fc;
        case 0x20c400u: goto label_20c400;
        case 0x20c404u: goto label_20c404;
        case 0x20c408u: goto label_20c408;
        case 0x20c40cu: goto label_20c40c;
        case 0x20c410u: goto label_20c410;
        case 0x20c414u: goto label_20c414;
        case 0x20c418u: goto label_20c418;
        case 0x20c41cu: goto label_20c41c;
        case 0x20c420u: goto label_20c420;
        case 0x20c424u: goto label_20c424;
        case 0x20c428u: goto label_20c428;
        case 0x20c42cu: goto label_20c42c;
        case 0x20c430u: goto label_20c430;
        case 0x20c434u: goto label_20c434;
        case 0x20c438u: goto label_20c438;
        case 0x20c43cu: goto label_20c43c;
        case 0x20c440u: goto label_20c440;
        case 0x20c444u: goto label_20c444;
        case 0x20c448u: goto label_20c448;
        case 0x20c44cu: goto label_20c44c;
        case 0x20c450u: goto label_20c450;
        case 0x20c454u: goto label_20c454;
        case 0x20c458u: goto label_20c458;
        case 0x20c45cu: goto label_20c45c;
        case 0x20c460u: goto label_20c460;
        case 0x20c464u: goto label_20c464;
        case 0x20c468u: goto label_20c468;
        case 0x20c46cu: goto label_20c46c;
        case 0x20c470u: goto label_20c470;
        case 0x20c474u: goto label_20c474;
        case 0x20c478u: goto label_20c478;
        case 0x20c47cu: goto label_20c47c;
        case 0x20c480u: goto label_20c480;
        case 0x20c484u: goto label_20c484;
        case 0x20c488u: goto label_20c488;
        case 0x20c48cu: goto label_20c48c;
        case 0x20c490u: goto label_20c490;
        case 0x20c494u: goto label_20c494;
        case 0x20c498u: goto label_20c498;
        case 0x20c49cu: goto label_20c49c;
        case 0x20c4a0u: goto label_20c4a0;
        case 0x20c4a4u: goto label_20c4a4;
        case 0x20c4a8u: goto label_20c4a8;
        case 0x20c4acu: goto label_20c4ac;
        case 0x20c4b0u: goto label_20c4b0;
        case 0x20c4b4u: goto label_20c4b4;
        case 0x20c4b8u: goto label_20c4b8;
        case 0x20c4bcu: goto label_20c4bc;
        case 0x20c4c0u: goto label_20c4c0;
        case 0x20c4c4u: goto label_20c4c4;
        case 0x20c4c8u: goto label_20c4c8;
        case 0x20c4ccu: goto label_20c4cc;
        case 0x20c4d0u: goto label_20c4d0;
        case 0x20c4d4u: goto label_20c4d4;
        case 0x20c4d8u: goto label_20c4d8;
        case 0x20c4dcu: goto label_20c4dc;
        case 0x20c4e0u: goto label_20c4e0;
        case 0x20c4e4u: goto label_20c4e4;
        case 0x20c4e8u: goto label_20c4e8;
        case 0x20c4ecu: goto label_20c4ec;
        case 0x20c4f0u: goto label_20c4f0;
        case 0x20c4f4u: goto label_20c4f4;
        case 0x20c4f8u: goto label_20c4f8;
        case 0x20c4fcu: goto label_20c4fc;
        case 0x20c500u: goto label_20c500;
        case 0x20c504u: goto label_20c504;
        case 0x20c508u: goto label_20c508;
        case 0x20c50cu: goto label_20c50c;
        case 0x20c510u: goto label_20c510;
        case 0x20c514u: goto label_20c514;
        case 0x20c518u: goto label_20c518;
        case 0x20c51cu: goto label_20c51c;
        case 0x20c520u: goto label_20c520;
        case 0x20c524u: goto label_20c524;
        case 0x20c528u: goto label_20c528;
        case 0x20c52cu: goto label_20c52c;
        case 0x20c530u: goto label_20c530;
        case 0x20c534u: goto label_20c534;
        case 0x20c538u: goto label_20c538;
        case 0x20c53cu: goto label_20c53c;
        case 0x20c540u: goto label_20c540;
        case 0x20c544u: goto label_20c544;
        case 0x20c548u: goto label_20c548;
        case 0x20c54cu: goto label_20c54c;
        case 0x20c550u: goto label_20c550;
        case 0x20c554u: goto label_20c554;
        case 0x20c558u: goto label_20c558;
        case 0x20c55cu: goto label_20c55c;
        case 0x20c560u: goto label_20c560;
        case 0x20c564u: goto label_20c564;
        case 0x20c568u: goto label_20c568;
        case 0x20c56cu: goto label_20c56c;
        case 0x20c570u: goto label_20c570;
        case 0x20c574u: goto label_20c574;
        case 0x20c578u: goto label_20c578;
        case 0x20c57cu: goto label_20c57c;
        case 0x20c580u: goto label_20c580;
        case 0x20c584u: goto label_20c584;
        case 0x20c588u: goto label_20c588;
        case 0x20c58cu: goto label_20c58c;
        case 0x20c590u: goto label_20c590;
        case 0x20c594u: goto label_20c594;
        case 0x20c598u: goto label_20c598;
        case 0x20c59cu: goto label_20c59c;
        case 0x20c5a0u: goto label_20c5a0;
        case 0x20c5a4u: goto label_20c5a4;
        case 0x20c5a8u: goto label_20c5a8;
        case 0x20c5acu: goto label_20c5ac;
        case 0x20c5b0u: goto label_20c5b0;
        case 0x20c5b4u: goto label_20c5b4;
        case 0x20c5b8u: goto label_20c5b8;
        case 0x20c5bcu: goto label_20c5bc;
        case 0x20c5c0u: goto label_20c5c0;
        case 0x20c5c4u: goto label_20c5c4;
        case 0x20c5c8u: goto label_20c5c8;
        case 0x20c5ccu: goto label_20c5cc;
        case 0x20c5d0u: goto label_20c5d0;
        case 0x20c5d4u: goto label_20c5d4;
        case 0x20c5d8u: goto label_20c5d8;
        case 0x20c5dcu: goto label_20c5dc;
        case 0x20c5e0u: goto label_20c5e0;
        case 0x20c5e4u: goto label_20c5e4;
        case 0x20c5e8u: goto label_20c5e8;
        case 0x20c5ecu: goto label_20c5ec;
        case 0x20c5f0u: goto label_20c5f0;
        case 0x20c5f4u: goto label_20c5f4;
        case 0x20c5f8u: goto label_20c5f8;
        case 0x20c5fcu: goto label_20c5fc;
        case 0x20c600u: goto label_20c600;
        case 0x20c604u: goto label_20c604;
        case 0x20c608u: goto label_20c608;
        case 0x20c60cu: goto label_20c60c;
        case 0x20c610u: goto label_20c610;
        case 0x20c614u: goto label_20c614;
        case 0x20c618u: goto label_20c618;
        case 0x20c61cu: goto label_20c61c;
        case 0x20c620u: goto label_20c620;
        case 0x20c624u: goto label_20c624;
        case 0x20c628u: goto label_20c628;
        case 0x20c62cu: goto label_20c62c;
        case 0x20c630u: goto label_20c630;
        case 0x20c634u: goto label_20c634;
        case 0x20c638u: goto label_20c638;
        case 0x20c63cu: goto label_20c63c;
        case 0x20c640u: goto label_20c640;
        case 0x20c644u: goto label_20c644;
        case 0x20c648u: goto label_20c648;
        case 0x20c64cu: goto label_20c64c;
        case 0x20c650u: goto label_20c650;
        case 0x20c654u: goto label_20c654;
        case 0x20c658u: goto label_20c658;
        case 0x20c65cu: goto label_20c65c;
        case 0x20c660u: goto label_20c660;
        case 0x20c664u: goto label_20c664;
        case 0x20c668u: goto label_20c668;
        case 0x20c66cu: goto label_20c66c;
        case 0x20c670u: goto label_20c670;
        case 0x20c674u: goto label_20c674;
        case 0x20c678u: goto label_20c678;
        case 0x20c67cu: goto label_20c67c;
        case 0x20c680u: goto label_20c680;
        case 0x20c684u: goto label_20c684;
        case 0x20c688u: goto label_20c688;
        case 0x20c68cu: goto label_20c68c;
        case 0x20c690u: goto label_20c690;
        case 0x20c694u: goto label_20c694;
        case 0x20c698u: goto label_20c698;
        case 0x20c69cu: goto label_20c69c;
        case 0x20c6a0u: goto label_20c6a0;
        case 0x20c6a4u: goto label_20c6a4;
        case 0x20c6a8u: goto label_20c6a8;
        case 0x20c6acu: goto label_20c6ac;
        case 0x20c6b0u: goto label_20c6b0;
        case 0x20c6b4u: goto label_20c6b4;
        case 0x20c6b8u: goto label_20c6b8;
        case 0x20c6bcu: goto label_20c6bc;
        case 0x20c6c0u: goto label_20c6c0;
        case 0x20c6c4u: goto label_20c6c4;
        case 0x20c6c8u: goto label_20c6c8;
        case 0x20c6ccu: goto label_20c6cc;
        case 0x20c6d0u: goto label_20c6d0;
        case 0x20c6d4u: goto label_20c6d4;
        case 0x20c6d8u: goto label_20c6d8;
        case 0x20c6dcu: goto label_20c6dc;
        case 0x20c6e0u: goto label_20c6e0;
        case 0x20c6e4u: goto label_20c6e4;
        case 0x20c6e8u: goto label_20c6e8;
        case 0x20c6ecu: goto label_20c6ec;
        case 0x20c6f0u: goto label_20c6f0;
        case 0x20c6f4u: goto label_20c6f4;
        case 0x20c6f8u: goto label_20c6f8;
        case 0x20c6fcu: goto label_20c6fc;
        case 0x20c700u: goto label_20c700;
        case 0x20c704u: goto label_20c704;
        case 0x20c708u: goto label_20c708;
        case 0x20c70cu: goto label_20c70c;
        case 0x20c710u: goto label_20c710;
        case 0x20c714u: goto label_20c714;
        case 0x20c718u: goto label_20c718;
        case 0x20c71cu: goto label_20c71c;
        case 0x20c720u: goto label_20c720;
        case 0x20c724u: goto label_20c724;
        case 0x20c728u: goto label_20c728;
        case 0x20c72cu: goto label_20c72c;
        case 0x20c730u: goto label_20c730;
        case 0x20c734u: goto label_20c734;
        case 0x20c738u: goto label_20c738;
        case 0x20c73cu: goto label_20c73c;
        case 0x20c740u: goto label_20c740;
        case 0x20c744u: goto label_20c744;
        case 0x20c748u: goto label_20c748;
        case 0x20c74cu: goto label_20c74c;
        case 0x20c750u: goto label_20c750;
        case 0x20c754u: goto label_20c754;
        case 0x20c758u: goto label_20c758;
        case 0x20c75cu: goto label_20c75c;
        case 0x20c760u: goto label_20c760;
        case 0x20c764u: goto label_20c764;
        case 0x20c768u: goto label_20c768;
        case 0x20c76cu: goto label_20c76c;
        case 0x20c770u: goto label_20c770;
        case 0x20c774u: goto label_20c774;
        case 0x20c778u: goto label_20c778;
        case 0x20c77cu: goto label_20c77c;
        case 0x20c780u: goto label_20c780;
        case 0x20c784u: goto label_20c784;
        case 0x20c788u: goto label_20c788;
        case 0x20c78cu: goto label_20c78c;
        case 0x20c790u: goto label_20c790;
        case 0x20c794u: goto label_20c794;
        case 0x20c798u: goto label_20c798;
        case 0x20c79cu: goto label_20c79c;
        case 0x20c7a0u: goto label_20c7a0;
        case 0x20c7a4u: goto label_20c7a4;
        case 0x20c7a8u: goto label_20c7a8;
        case 0x20c7acu: goto label_20c7ac;
        case 0x20c7b0u: goto label_20c7b0;
        case 0x20c7b4u: goto label_20c7b4;
        case 0x20c7b8u: goto label_20c7b8;
        case 0x20c7bcu: goto label_20c7bc;
        case 0x20c7c0u: goto label_20c7c0;
        case 0x20c7c4u: goto label_20c7c4;
        case 0x20c7c8u: goto label_20c7c8;
        case 0x20c7ccu: goto label_20c7cc;
        case 0x20c7d0u: goto label_20c7d0;
        case 0x20c7d4u: goto label_20c7d4;
        case 0x20c7d8u: goto label_20c7d8;
        case 0x20c7dcu: goto label_20c7dc;
        case 0x20c7e0u: goto label_20c7e0;
        case 0x20c7e4u: goto label_20c7e4;
        case 0x20c7e8u: goto label_20c7e8;
        case 0x20c7ecu: goto label_20c7ec;
        case 0x20c7f0u: goto label_20c7f0;
        case 0x20c7f4u: goto label_20c7f4;
        case 0x20c7f8u: goto label_20c7f8;
        case 0x20c7fcu: goto label_20c7fc;
        case 0x20c800u: goto label_20c800;
        case 0x20c804u: goto label_20c804;
        case 0x20c808u: goto label_20c808;
        case 0x20c80cu: goto label_20c80c;
        case 0x20c810u: goto label_20c810;
        case 0x20c814u: goto label_20c814;
        case 0x20c818u: goto label_20c818;
        case 0x20c81cu: goto label_20c81c;
        case 0x20c820u: goto label_20c820;
        case 0x20c824u: goto label_20c824;
        case 0x20c828u: goto label_20c828;
        case 0x20c82cu: goto label_20c82c;
        case 0x20c830u: goto label_20c830;
        case 0x20c834u: goto label_20c834;
        case 0x20c838u: goto label_20c838;
        case 0x20c83cu: goto label_20c83c;
        case 0x20c840u: goto label_20c840;
        case 0x20c844u: goto label_20c844;
        case 0x20c848u: goto label_20c848;
        case 0x20c84cu: goto label_20c84c;
        case 0x20c850u: goto label_20c850;
        case 0x20c854u: goto label_20c854;
        case 0x20c858u: goto label_20c858;
        case 0x20c85cu: goto label_20c85c;
        case 0x20c860u: goto label_20c860;
        case 0x20c864u: goto label_20c864;
        case 0x20c868u: goto label_20c868;
        case 0x20c86cu: goto label_20c86c;
        case 0x20c870u: goto label_20c870;
        case 0x20c874u: goto label_20c874;
        case 0x20c878u: goto label_20c878;
        case 0x20c87cu: goto label_20c87c;
        case 0x20c880u: goto label_20c880;
        case 0x20c884u: goto label_20c884;
        case 0x20c888u: goto label_20c888;
        case 0x20c88cu: goto label_20c88c;
        case 0x20c890u: goto label_20c890;
        case 0x20c894u: goto label_20c894;
        case 0x20c898u: goto label_20c898;
        case 0x20c89cu: goto label_20c89c;
        case 0x20c8a0u: goto label_20c8a0;
        case 0x20c8a4u: goto label_20c8a4;
        case 0x20c8a8u: goto label_20c8a8;
        case 0x20c8acu: goto label_20c8ac;
        case 0x20c8b0u: goto label_20c8b0;
        case 0x20c8b4u: goto label_20c8b4;
        case 0x20c8b8u: goto label_20c8b8;
        case 0x20c8bcu: goto label_20c8bc;
        case 0x20c8c0u: goto label_20c8c0;
        case 0x20c8c4u: goto label_20c8c4;
        case 0x20c8c8u: goto label_20c8c8;
        case 0x20c8ccu: goto label_20c8cc;
        case 0x20c8d0u: goto label_20c8d0;
        case 0x20c8d4u: goto label_20c8d4;
        case 0x20c8d8u: goto label_20c8d8;
        case 0x20c8dcu: goto label_20c8dc;
        case 0x20c8e0u: goto label_20c8e0;
        case 0x20c8e4u: goto label_20c8e4;
        case 0x20c8e8u: goto label_20c8e8;
        case 0x20c8ecu: goto label_20c8ec;
        case 0x20c8f0u: goto label_20c8f0;
        case 0x20c8f4u: goto label_20c8f4;
        case 0x20c8f8u: goto label_20c8f8;
        case 0x20c8fcu: goto label_20c8fc;
        case 0x20c900u: goto label_20c900;
        case 0x20c904u: goto label_20c904;
        case 0x20c908u: goto label_20c908;
        case 0x20c90cu: goto label_20c90c;
        case 0x20c910u: goto label_20c910;
        case 0x20c914u: goto label_20c914;
        case 0x20c918u: goto label_20c918;
        case 0x20c91cu: goto label_20c91c;
        case 0x20c920u: goto label_20c920;
        case 0x20c924u: goto label_20c924;
        case 0x20c928u: goto label_20c928;
        case 0x20c92cu: goto label_20c92c;
        case 0x20c930u: goto label_20c930;
        case 0x20c934u: goto label_20c934;
        case 0x20c938u: goto label_20c938;
        case 0x20c93cu: goto label_20c93c;
        case 0x20c940u: goto label_20c940;
        case 0x20c944u: goto label_20c944;
        case 0x20c948u: goto label_20c948;
        case 0x20c94cu: goto label_20c94c;
        case 0x20c950u: goto label_20c950;
        case 0x20c954u: goto label_20c954;
        case 0x20c958u: goto label_20c958;
        case 0x20c95cu: goto label_20c95c;
        case 0x20c960u: goto label_20c960;
        case 0x20c964u: goto label_20c964;
        case 0x20c968u: goto label_20c968;
        case 0x20c96cu: goto label_20c96c;
        case 0x20c970u: goto label_20c970;
        case 0x20c974u: goto label_20c974;
        case 0x20c978u: goto label_20c978;
        case 0x20c97cu: goto label_20c97c;
        case 0x20c980u: goto label_20c980;
        case 0x20c984u: goto label_20c984;
        case 0x20c988u: goto label_20c988;
        case 0x20c98cu: goto label_20c98c;
        case 0x20c990u: goto label_20c990;
        case 0x20c994u: goto label_20c994;
        case 0x20c998u: goto label_20c998;
        case 0x20c99cu: goto label_20c99c;
        case 0x20c9a0u: goto label_20c9a0;
        case 0x20c9a4u: goto label_20c9a4;
        case 0x20c9a8u: goto label_20c9a8;
        case 0x20c9acu: goto label_20c9ac;
        case 0x20c9b0u: goto label_20c9b0;
        case 0x20c9b4u: goto label_20c9b4;
        case 0x20c9b8u: goto label_20c9b8;
        case 0x20c9bcu: goto label_20c9bc;
        case 0x20c9c0u: goto label_20c9c0;
        case 0x20c9c4u: goto label_20c9c4;
        case 0x20c9c8u: goto label_20c9c8;
        case 0x20c9ccu: goto label_20c9cc;
        case 0x20c9d0u: goto label_20c9d0;
        case 0x20c9d4u: goto label_20c9d4;
        case 0x20c9d8u: goto label_20c9d8;
        case 0x20c9dcu: goto label_20c9dc;
        case 0x20c9e0u: goto label_20c9e0;
        case 0x20c9e4u: goto label_20c9e4;
        case 0x20c9e8u: goto label_20c9e8;
        case 0x20c9ecu: goto label_20c9ec;
        case 0x20c9f0u: goto label_20c9f0;
        case 0x20c9f4u: goto label_20c9f4;
        case 0x20c9f8u: goto label_20c9f8;
        case 0x20c9fcu: goto label_20c9fc;
        case 0x20ca00u: goto label_20ca00;
        case 0x20ca04u: goto label_20ca04;
        case 0x20ca08u: goto label_20ca08;
        case 0x20ca0cu: goto label_20ca0c;
        case 0x20ca10u: goto label_20ca10;
        case 0x20ca14u: goto label_20ca14;
        case 0x20ca18u: goto label_20ca18;
        case 0x20ca1cu: goto label_20ca1c;
        case 0x20ca20u: goto label_20ca20;
        case 0x20ca24u: goto label_20ca24;
        case 0x20ca28u: goto label_20ca28;
        case 0x20ca2cu: goto label_20ca2c;
        case 0x20ca30u: goto label_20ca30;
        case 0x20ca34u: goto label_20ca34;
        case 0x20ca38u: goto label_20ca38;
        case 0x20ca3cu: goto label_20ca3c;
        case 0x20ca40u: goto label_20ca40;
        case 0x20ca44u: goto label_20ca44;
        case 0x20ca48u: goto label_20ca48;
        case 0x20ca4cu: goto label_20ca4c;
        case 0x20ca50u: goto label_20ca50;
        case 0x20ca54u: goto label_20ca54;
        case 0x20ca58u: goto label_20ca58;
        case 0x20ca5cu: goto label_20ca5c;
        case 0x20ca60u: goto label_20ca60;
        case 0x20ca64u: goto label_20ca64;
        case 0x20ca68u: goto label_20ca68;
        case 0x20ca6cu: goto label_20ca6c;
        case 0x20ca70u: goto label_20ca70;
        case 0x20ca74u: goto label_20ca74;
        case 0x20ca78u: goto label_20ca78;
        case 0x20ca7cu: goto label_20ca7c;
        case 0x20ca80u: goto label_20ca80;
        case 0x20ca84u: goto label_20ca84;
        case 0x20ca88u: goto label_20ca88;
        case 0x20ca8cu: goto label_20ca8c;
        case 0x20ca90u: goto label_20ca90;
        case 0x20ca94u: goto label_20ca94;
        case 0x20ca98u: goto label_20ca98;
        case 0x20ca9cu: goto label_20ca9c;
        case 0x20caa0u: goto label_20caa0;
        case 0x20caa4u: goto label_20caa4;
        case 0x20caa8u: goto label_20caa8;
        case 0x20caacu: goto label_20caac;
        case 0x20cab0u: goto label_20cab0;
        case 0x20cab4u: goto label_20cab4;
        case 0x20cab8u: goto label_20cab8;
        case 0x20cabcu: goto label_20cabc;
        case 0x20cac0u: goto label_20cac0;
        case 0x20cac4u: goto label_20cac4;
        case 0x20cac8u: goto label_20cac8;
        case 0x20caccu: goto label_20cacc;
        case 0x20cad0u: goto label_20cad0;
        case 0x20cad4u: goto label_20cad4;
        case 0x20cad8u: goto label_20cad8;
        case 0x20cadcu: goto label_20cadc;
        case 0x20cae0u: goto label_20cae0;
        case 0x20cae4u: goto label_20cae4;
        case 0x20cae8u: goto label_20cae8;
        case 0x20caecu: goto label_20caec;
        case 0x20caf0u: goto label_20caf0;
        case 0x20caf4u: goto label_20caf4;
        case 0x20caf8u: goto label_20caf8;
        case 0x20cafcu: goto label_20cafc;
        case 0x20cb00u: goto label_20cb00;
        case 0x20cb04u: goto label_20cb04;
        case 0x20cb08u: goto label_20cb08;
        case 0x20cb0cu: goto label_20cb0c;
        case 0x20cb10u: goto label_20cb10;
        case 0x20cb14u: goto label_20cb14;
        case 0x20cb18u: goto label_20cb18;
        case 0x20cb1cu: goto label_20cb1c;
        case 0x20cb20u: goto label_20cb20;
        case 0x20cb24u: goto label_20cb24;
        case 0x20cb28u: goto label_20cb28;
        case 0x20cb2cu: goto label_20cb2c;
        case 0x20cb30u: goto label_20cb30;
        case 0x20cb34u: goto label_20cb34;
        case 0x20cb38u: goto label_20cb38;
        case 0x20cb3cu: goto label_20cb3c;
        case 0x20cb40u: goto label_20cb40;
        case 0x20cb44u: goto label_20cb44;
        case 0x20cb48u: goto label_20cb48;
        case 0x20cb4cu: goto label_20cb4c;
        case 0x20cb50u: goto label_20cb50;
        case 0x20cb54u: goto label_20cb54;
        case 0x20cb58u: goto label_20cb58;
        case 0x20cb5cu: goto label_20cb5c;
        case 0x20cb60u: goto label_20cb60;
        case 0x20cb64u: goto label_20cb64;
        case 0x20cb68u: goto label_20cb68;
        case 0x20cb6cu: goto label_20cb6c;
        case 0x20cb70u: goto label_20cb70;
        case 0x20cb74u: goto label_20cb74;
        case 0x20cb78u: goto label_20cb78;
        case 0x20cb7cu: goto label_20cb7c;
        case 0x20cb80u: goto label_20cb80;
        case 0x20cb84u: goto label_20cb84;
        case 0x20cb88u: goto label_20cb88;
        case 0x20cb8cu: goto label_20cb8c;
        case 0x20cb90u: goto label_20cb90;
        case 0x20cb94u: goto label_20cb94;
        case 0x20cb98u: goto label_20cb98;
        case 0x20cb9cu: goto label_20cb9c;
        case 0x20cba0u: goto label_20cba0;
        case 0x20cba4u: goto label_20cba4;
        case 0x20cba8u: goto label_20cba8;
        case 0x20cbacu: goto label_20cbac;
        case 0x20cbb0u: goto label_20cbb0;
        case 0x20cbb4u: goto label_20cbb4;
        case 0x20cbb8u: goto label_20cbb8;
        case 0x20cbbcu: goto label_20cbbc;
        case 0x20cbc0u: goto label_20cbc0;
        case 0x20cbc4u: goto label_20cbc4;
        case 0x20cbc8u: goto label_20cbc8;
        case 0x20cbccu: goto label_20cbcc;
        case 0x20cbd0u: goto label_20cbd0;
        case 0x20cbd4u: goto label_20cbd4;
        case 0x20cbd8u: goto label_20cbd8;
        case 0x20cbdcu: goto label_20cbdc;
        case 0x20cbe0u: goto label_20cbe0;
        case 0x20cbe4u: goto label_20cbe4;
        case 0x20cbe8u: goto label_20cbe8;
        case 0x20cbecu: goto label_20cbec;
        case 0x20cbf0u: goto label_20cbf0;
        case 0x20cbf4u: goto label_20cbf4;
        case 0x20cbf8u: goto label_20cbf8;
        case 0x20cbfcu: goto label_20cbfc;
        case 0x20cc00u: goto label_20cc00;
        case 0x20cc04u: goto label_20cc04;
        case 0x20cc08u: goto label_20cc08;
        case 0x20cc0cu: goto label_20cc0c;
        case 0x20cc10u: goto label_20cc10;
        case 0x20cc14u: goto label_20cc14;
        case 0x20cc18u: goto label_20cc18;
        case 0x20cc1cu: goto label_20cc1c;
        case 0x20cc20u: goto label_20cc20;
        case 0x20cc24u: goto label_20cc24;
        case 0x20cc28u: goto label_20cc28;
        case 0x20cc2cu: goto label_20cc2c;
        case 0x20cc30u: goto label_20cc30;
        case 0x20cc34u: goto label_20cc34;
        case 0x20cc38u: goto label_20cc38;
        case 0x20cc3cu: goto label_20cc3c;
        case 0x20cc40u: goto label_20cc40;
        case 0x20cc44u: goto label_20cc44;
        case 0x20cc48u: goto label_20cc48;
        case 0x20cc4cu: goto label_20cc4c;
        case 0x20cc50u: goto label_20cc50;
        case 0x20cc54u: goto label_20cc54;
        case 0x20cc58u: goto label_20cc58;
        case 0x20cc5cu: goto label_20cc5c;
        case 0x20cc60u: goto label_20cc60;
        case 0x20cc64u: goto label_20cc64;
        case 0x20cc68u: goto label_20cc68;
        case 0x20cc6cu: goto label_20cc6c;
        case 0x20cc70u: goto label_20cc70;
        case 0x20cc74u: goto label_20cc74;
        case 0x20cc78u: goto label_20cc78;
        case 0x20cc7cu: goto label_20cc7c;
        case 0x20cc80u: goto label_20cc80;
        case 0x20cc84u: goto label_20cc84;
        case 0x20cc88u: goto label_20cc88;
        case 0x20cc8cu: goto label_20cc8c;
        case 0x20cc90u: goto label_20cc90;
        case 0x20cc94u: goto label_20cc94;
        case 0x20cc98u: goto label_20cc98;
        case 0x20cc9cu: goto label_20cc9c;
        case 0x20cca0u: goto label_20cca0;
        case 0x20cca4u: goto label_20cca4;
        case 0x20cca8u: goto label_20cca8;
        case 0x20ccacu: goto label_20ccac;
        case 0x20ccb0u: goto label_20ccb0;
        case 0x20ccb4u: goto label_20ccb4;
        case 0x20ccb8u: goto label_20ccb8;
        case 0x20ccbcu: goto label_20ccbc;
        case 0x20ccc0u: goto label_20ccc0;
        case 0x20ccc4u: goto label_20ccc4;
        case 0x20ccc8u: goto label_20ccc8;
        case 0x20ccccu: goto label_20cccc;
        case 0x20ccd0u: goto label_20ccd0;
        case 0x20ccd4u: goto label_20ccd4;
        case 0x20ccd8u: goto label_20ccd8;
        case 0x20ccdcu: goto label_20ccdc;
        case 0x20cce0u: goto label_20cce0;
        case 0x20cce4u: goto label_20cce4;
        case 0x20cce8u: goto label_20cce8;
        case 0x20ccecu: goto label_20ccec;
        case 0x20ccf0u: goto label_20ccf0;
        case 0x20ccf4u: goto label_20ccf4;
        case 0x20ccf8u: goto label_20ccf8;
        case 0x20ccfcu: goto label_20ccfc;
        case 0x20cd00u: goto label_20cd00;
        case 0x20cd04u: goto label_20cd04;
        case 0x20cd08u: goto label_20cd08;
        case 0x20cd0cu: goto label_20cd0c;
        case 0x20cd10u: goto label_20cd10;
        case 0x20cd14u: goto label_20cd14;
        case 0x20cd18u: goto label_20cd18;
        case 0x20cd1cu: goto label_20cd1c;
        case 0x20cd20u: goto label_20cd20;
        case 0x20cd24u: goto label_20cd24;
        case 0x20cd28u: goto label_20cd28;
        case 0x20cd2cu: goto label_20cd2c;
        case 0x20cd30u: goto label_20cd30;
        case 0x20cd34u: goto label_20cd34;
        case 0x20cd38u: goto label_20cd38;
        case 0x20cd3cu: goto label_20cd3c;
        case 0x20cd40u: goto label_20cd40;
        case 0x20cd44u: goto label_20cd44;
        case 0x20cd48u: goto label_20cd48;
        case 0x20cd4cu: goto label_20cd4c;
        case 0x20cd50u: goto label_20cd50;
        case 0x20cd54u: goto label_20cd54;
        case 0x20cd58u: goto label_20cd58;
        case 0x20cd5cu: goto label_20cd5c;
        case 0x20cd60u: goto label_20cd60;
        case 0x20cd64u: goto label_20cd64;
        case 0x20cd68u: goto label_20cd68;
        case 0x20cd6cu: goto label_20cd6c;
        case 0x20cd70u: goto label_20cd70;
        case 0x20cd74u: goto label_20cd74;
        case 0x20cd78u: goto label_20cd78;
        case 0x20cd7cu: goto label_20cd7c;
        case 0x20cd80u: goto label_20cd80;
        case 0x20cd84u: goto label_20cd84;
        case 0x20cd88u: goto label_20cd88;
        case 0x20cd8cu: goto label_20cd8c;
        case 0x20cd90u: goto label_20cd90;
        case 0x20cd94u: goto label_20cd94;
        case 0x20cd98u: goto label_20cd98;
        case 0x20cd9cu: goto label_20cd9c;
        case 0x20cda0u: goto label_20cda0;
        case 0x20cda4u: goto label_20cda4;
        case 0x20cda8u: goto label_20cda8;
        case 0x20cdacu: goto label_20cdac;
        case 0x20cdb0u: goto label_20cdb0;
        case 0x20cdb4u: goto label_20cdb4;
        case 0x20cdb8u: goto label_20cdb8;
        case 0x20cdbcu: goto label_20cdbc;
        case 0x20cdc0u: goto label_20cdc0;
        case 0x20cdc4u: goto label_20cdc4;
        case 0x20cdc8u: goto label_20cdc8;
        case 0x20cdccu: goto label_20cdcc;
        case 0x20cdd0u: goto label_20cdd0;
        case 0x20cdd4u: goto label_20cdd4;
        case 0x20cdd8u: goto label_20cdd8;
        case 0x20cddcu: goto label_20cddc;
        case 0x20cde0u: goto label_20cde0;
        case 0x20cde4u: goto label_20cde4;
        case 0x20cde8u: goto label_20cde8;
        case 0x20cdecu: goto label_20cdec;
        case 0x20cdf0u: goto label_20cdf0;
        case 0x20cdf4u: goto label_20cdf4;
        case 0x20cdf8u: goto label_20cdf8;
        case 0x20cdfcu: goto label_20cdfc;
        case 0x20ce00u: goto label_20ce00;
        case 0x20ce04u: goto label_20ce04;
        case 0x20ce08u: goto label_20ce08;
        case 0x20ce0cu: goto label_20ce0c;
        case 0x20ce10u: goto label_20ce10;
        case 0x20ce14u: goto label_20ce14;
        case 0x20ce18u: goto label_20ce18;
        case 0x20ce1cu: goto label_20ce1c;
        case 0x20ce20u: goto label_20ce20;
        case 0x20ce24u: goto label_20ce24;
        case 0x20ce28u: goto label_20ce28;
        case 0x20ce2cu: goto label_20ce2c;
        case 0x20ce30u: goto label_20ce30;
        case 0x20ce34u: goto label_20ce34;
        case 0x20ce38u: goto label_20ce38;
        case 0x20ce3cu: goto label_20ce3c;
        case 0x20ce40u: goto label_20ce40;
        case 0x20ce44u: goto label_20ce44;
        case 0x20ce48u: goto label_20ce48;
        case 0x20ce4cu: goto label_20ce4c;
        case 0x20ce50u: goto label_20ce50;
        case 0x20ce54u: goto label_20ce54;
        case 0x20ce58u: goto label_20ce58;
        case 0x20ce5cu: goto label_20ce5c;
        case 0x20ce60u: goto label_20ce60;
        case 0x20ce64u: goto label_20ce64;
        case 0x20ce68u: goto label_20ce68;
        case 0x20ce6cu: goto label_20ce6c;
        case 0x20ce70u: goto label_20ce70;
        case 0x20ce74u: goto label_20ce74;
        case 0x20ce78u: goto label_20ce78;
        case 0x20ce7cu: goto label_20ce7c;
        case 0x20ce80u: goto label_20ce80;
        case 0x20ce84u: goto label_20ce84;
        case 0x20ce88u: goto label_20ce88;
        case 0x20ce8cu: goto label_20ce8c;
        case 0x20ce90u: goto label_20ce90;
        case 0x20ce94u: goto label_20ce94;
        case 0x20ce98u: goto label_20ce98;
        case 0x20ce9cu: goto label_20ce9c;
        case 0x20cea0u: goto label_20cea0;
        case 0x20cea4u: goto label_20cea4;
        case 0x20cea8u: goto label_20cea8;
        case 0x20ceacu: goto label_20ceac;
        case 0x20ceb0u: goto label_20ceb0;
        case 0x20ceb4u: goto label_20ceb4;
        case 0x20ceb8u: goto label_20ceb8;
        case 0x20cebcu: goto label_20cebc;
        case 0x20cec0u: goto label_20cec0;
        case 0x20cec4u: goto label_20cec4;
        case 0x20cec8u: goto label_20cec8;
        case 0x20ceccu: goto label_20cecc;
        case 0x20ced0u: goto label_20ced0;
        case 0x20ced4u: goto label_20ced4;
        case 0x20ced8u: goto label_20ced8;
        case 0x20cedcu: goto label_20cedc;
        case 0x20cee0u: goto label_20cee0;
        case 0x20cee4u: goto label_20cee4;
        case 0x20cee8u: goto label_20cee8;
        case 0x20ceecu: goto label_20ceec;
        case 0x20cef0u: goto label_20cef0;
        case 0x20cef4u: goto label_20cef4;
        case 0x20cef8u: goto label_20cef8;
        case 0x20cefcu: goto label_20cefc;
        case 0x20cf00u: goto label_20cf00;
        case 0x20cf04u: goto label_20cf04;
        case 0x20cf08u: goto label_20cf08;
        case 0x20cf0cu: goto label_20cf0c;
        case 0x20cf10u: goto label_20cf10;
        case 0x20cf14u: goto label_20cf14;
        case 0x20cf18u: goto label_20cf18;
        case 0x20cf1cu: goto label_20cf1c;
        case 0x20cf20u: goto label_20cf20;
        case 0x20cf24u: goto label_20cf24;
        case 0x20cf28u: goto label_20cf28;
        case 0x20cf2cu: goto label_20cf2c;
        case 0x20cf30u: goto label_20cf30;
        case 0x20cf34u: goto label_20cf34;
        case 0x20cf38u: goto label_20cf38;
        case 0x20cf3cu: goto label_20cf3c;
        case 0x20cf40u: goto label_20cf40;
        case 0x20cf44u: goto label_20cf44;
        case 0x20cf48u: goto label_20cf48;
        case 0x20cf4cu: goto label_20cf4c;
        case 0x20cf50u: goto label_20cf50;
        case 0x20cf54u: goto label_20cf54;
        case 0x20cf58u: goto label_20cf58;
        case 0x20cf5cu: goto label_20cf5c;
        case 0x20cf60u: goto label_20cf60;
        case 0x20cf64u: goto label_20cf64;
        case 0x20cf68u: goto label_20cf68;
        case 0x20cf6cu: goto label_20cf6c;
        case 0x20cf70u: goto label_20cf70;
        case 0x20cf74u: goto label_20cf74;
        case 0x20cf78u: goto label_20cf78;
        case 0x20cf7cu: goto label_20cf7c;
        case 0x20cf80u: goto label_20cf80;
        case 0x20cf84u: goto label_20cf84;
        case 0x20cf88u: goto label_20cf88;
        case 0x20cf8cu: goto label_20cf8c;
        case 0x20cf90u: goto label_20cf90;
        case 0x20cf94u: goto label_20cf94;
        case 0x20cf98u: goto label_20cf98;
        case 0x20cf9cu: goto label_20cf9c;
        case 0x20cfa0u: goto label_20cfa0;
        case 0x20cfa4u: goto label_20cfa4;
        case 0x20cfa8u: goto label_20cfa8;
        case 0x20cfacu: goto label_20cfac;
        case 0x20cfb0u: goto label_20cfb0;
        case 0x20cfb4u: goto label_20cfb4;
        case 0x20cfb8u: goto label_20cfb8;
        case 0x20cfbcu: goto label_20cfbc;
        case 0x20cfc0u: goto label_20cfc0;
        case 0x20cfc4u: goto label_20cfc4;
        case 0x20cfc8u: goto label_20cfc8;
        case 0x20cfccu: goto label_20cfcc;
        case 0x20cfd0u: goto label_20cfd0;
        case 0x20cfd4u: goto label_20cfd4;
        case 0x20cfd8u: goto label_20cfd8;
        case 0x20cfdcu: goto label_20cfdc;
        case 0x20cfe0u: goto label_20cfe0;
        case 0x20cfe4u: goto label_20cfe4;
        case 0x20cfe8u: goto label_20cfe8;
        case 0x20cfecu: goto label_20cfec;
        case 0x20cff0u: goto label_20cff0;
        case 0x20cff4u: goto label_20cff4;
        case 0x20cff8u: goto label_20cff8;
        case 0x20cffcu: goto label_20cffc;
        case 0x20d000u: goto label_20d000;
        case 0x20d004u: goto label_20d004;
        case 0x20d008u: goto label_20d008;
        case 0x20d00cu: goto label_20d00c;
        case 0x20d010u: goto label_20d010;
        case 0x20d014u: goto label_20d014;
        case 0x20d018u: goto label_20d018;
        case 0x20d01cu: goto label_20d01c;
        case 0x20d020u: goto label_20d020;
        case 0x20d024u: goto label_20d024;
        case 0x20d028u: goto label_20d028;
        case 0x20d02cu: goto label_20d02c;
        case 0x20d030u: goto label_20d030;
        case 0x20d034u: goto label_20d034;
        case 0x20d038u: goto label_20d038;
        case 0x20d03cu: goto label_20d03c;
        case 0x20d040u: goto label_20d040;
        case 0x20d044u: goto label_20d044;
        case 0x20d048u: goto label_20d048;
        case 0x20d04cu: goto label_20d04c;
        case 0x20d050u: goto label_20d050;
        case 0x20d054u: goto label_20d054;
        case 0x20d058u: goto label_20d058;
        case 0x20d05cu: goto label_20d05c;
        case 0x20d060u: goto label_20d060;
        case 0x20d064u: goto label_20d064;
        case 0x20d068u: goto label_20d068;
        case 0x20d06cu: goto label_20d06c;
        case 0x20d070u: goto label_20d070;
        case 0x20d074u: goto label_20d074;
        case 0x20d078u: goto label_20d078;
        case 0x20d07cu: goto label_20d07c;
        case 0x20d080u: goto label_20d080;
        case 0x20d084u: goto label_20d084;
        case 0x20d088u: goto label_20d088;
        case 0x20d08cu: goto label_20d08c;
        case 0x20d090u: goto label_20d090;
        case 0x20d094u: goto label_20d094;
        case 0x20d098u: goto label_20d098;
        case 0x20d09cu: goto label_20d09c;
        case 0x20d0a0u: goto label_20d0a0;
        case 0x20d0a4u: goto label_20d0a4;
        case 0x20d0a8u: goto label_20d0a8;
        case 0x20d0acu: goto label_20d0ac;
        case 0x20d0b0u: goto label_20d0b0;
        case 0x20d0b4u: goto label_20d0b4;
        case 0x20d0b8u: goto label_20d0b8;
        case 0x20d0bcu: goto label_20d0bc;
        case 0x20d0c0u: goto label_20d0c0;
        case 0x20d0c4u: goto label_20d0c4;
        case 0x20d0c8u: goto label_20d0c8;
        case 0x20d0ccu: goto label_20d0cc;
        case 0x20d0d0u: goto label_20d0d0;
        case 0x20d0d4u: goto label_20d0d4;
        case 0x20d0d8u: goto label_20d0d8;
        case 0x20d0dcu: goto label_20d0dc;
        case 0x20d0e0u: goto label_20d0e0;
        case 0x20d0e4u: goto label_20d0e4;
        case 0x20d0e8u: goto label_20d0e8;
        case 0x20d0ecu: goto label_20d0ec;
        case 0x20d0f0u: goto label_20d0f0;
        case 0x20d0f4u: goto label_20d0f4;
        case 0x20d0f8u: goto label_20d0f8;
        case 0x20d0fcu: goto label_20d0fc;
        case 0x20d100u: goto label_20d100;
        case 0x20d104u: goto label_20d104;
        case 0x20d108u: goto label_20d108;
        case 0x20d10cu: goto label_20d10c;
        case 0x20d110u: goto label_20d110;
        case 0x20d114u: goto label_20d114;
        case 0x20d118u: goto label_20d118;
        case 0x20d11cu: goto label_20d11c;
        case 0x20d120u: goto label_20d120;
        case 0x20d124u: goto label_20d124;
        case 0x20d128u: goto label_20d128;
        case 0x20d12cu: goto label_20d12c;
        case 0x20d130u: goto label_20d130;
        case 0x20d134u: goto label_20d134;
        case 0x20d138u: goto label_20d138;
        case 0x20d13cu: goto label_20d13c;
        case 0x20d140u: goto label_20d140;
        case 0x20d144u: goto label_20d144;
        case 0x20d148u: goto label_20d148;
        case 0x20d14cu: goto label_20d14c;
        case 0x20d150u: goto label_20d150;
        case 0x20d154u: goto label_20d154;
        case 0x20d158u: goto label_20d158;
        case 0x20d15cu: goto label_20d15c;
        case 0x20d160u: goto label_20d160;
        case 0x20d164u: goto label_20d164;
        case 0x20d168u: goto label_20d168;
        case 0x20d16cu: goto label_20d16c;
        case 0x20d170u: goto label_20d170;
        case 0x20d174u: goto label_20d174;
        case 0x20d178u: goto label_20d178;
        case 0x20d17cu: goto label_20d17c;
        case 0x20d180u: goto label_20d180;
        case 0x20d184u: goto label_20d184;
        case 0x20d188u: goto label_20d188;
        case 0x20d18cu: goto label_20d18c;
        case 0x20d190u: goto label_20d190;
        case 0x20d194u: goto label_20d194;
        case 0x20d198u: goto label_20d198;
        case 0x20d19cu: goto label_20d19c;
        case 0x20d1a0u: goto label_20d1a0;
        case 0x20d1a4u: goto label_20d1a4;
        case 0x20d1a8u: goto label_20d1a8;
        case 0x20d1acu: goto label_20d1ac;
        case 0x20d1b0u: goto label_20d1b0;
        case 0x20d1b4u: goto label_20d1b4;
        case 0x20d1b8u: goto label_20d1b8;
        case 0x20d1bcu: goto label_20d1bc;
        case 0x20d1c0u: goto label_20d1c0;
        case 0x20d1c4u: goto label_20d1c4;
        case 0x20d1c8u: goto label_20d1c8;
        case 0x20d1ccu: goto label_20d1cc;
        case 0x20d1d0u: goto label_20d1d0;
        case 0x20d1d4u: goto label_20d1d4;
        case 0x20d1d8u: goto label_20d1d8;
        case 0x20d1dcu: goto label_20d1dc;
        case 0x20d1e0u: goto label_20d1e0;
        case 0x20d1e4u: goto label_20d1e4;
        case 0x20d1e8u: goto label_20d1e8;
        case 0x20d1ecu: goto label_20d1ec;
        case 0x20d1f0u: goto label_20d1f0;
        case 0x20d1f4u: goto label_20d1f4;
        case 0x20d1f8u: goto label_20d1f8;
        case 0x20d1fcu: goto label_20d1fc;
        case 0x20d200u: goto label_20d200;
        case 0x20d204u: goto label_20d204;
        case 0x20d208u: goto label_20d208;
        case 0x20d20cu: goto label_20d20c;
        case 0x20d210u: goto label_20d210;
        case 0x20d214u: goto label_20d214;
        case 0x20d218u: goto label_20d218;
        case 0x20d21cu: goto label_20d21c;
        case 0x20d220u: goto label_20d220;
        case 0x20d224u: goto label_20d224;
        case 0x20d228u: goto label_20d228;
        case 0x20d22cu: goto label_20d22c;
        case 0x20d230u: goto label_20d230;
        case 0x20d234u: goto label_20d234;
        case 0x20d238u: goto label_20d238;
        case 0x20d23cu: goto label_20d23c;
        case 0x20d240u: goto label_20d240;
        case 0x20d244u: goto label_20d244;
        case 0x20d248u: goto label_20d248;
        case 0x20d24cu: goto label_20d24c;
        case 0x20d250u: goto label_20d250;
        case 0x20d254u: goto label_20d254;
        case 0x20d258u: goto label_20d258;
        case 0x20d25cu: goto label_20d25c;
        case 0x20d260u: goto label_20d260;
        case 0x20d264u: goto label_20d264;
        case 0x20d268u: goto label_20d268;
        case 0x20d26cu: goto label_20d26c;
        case 0x20d270u: goto label_20d270;
        case 0x20d274u: goto label_20d274;
        case 0x20d278u: goto label_20d278;
        case 0x20d27cu: goto label_20d27c;
        case 0x20d280u: goto label_20d280;
        case 0x20d284u: goto label_20d284;
        case 0x20d288u: goto label_20d288;
        case 0x20d28cu: goto label_20d28c;
        case 0x20d290u: goto label_20d290;
        case 0x20d294u: goto label_20d294;
        case 0x20d298u: goto label_20d298;
        case 0x20d29cu: goto label_20d29c;
        case 0x20d2a0u: goto label_20d2a0;
        case 0x20d2a4u: goto label_20d2a4;
        case 0x20d2a8u: goto label_20d2a8;
        case 0x20d2acu: goto label_20d2ac;
        case 0x20d2b0u: goto label_20d2b0;
        case 0x20d2b4u: goto label_20d2b4;
        case 0x20d2b8u: goto label_20d2b8;
        case 0x20d2bcu: goto label_20d2bc;
        case 0x20d2c0u: goto label_20d2c0;
        case 0x20d2c4u: goto label_20d2c4;
        case 0x20d2c8u: goto label_20d2c8;
        case 0x20d2ccu: goto label_20d2cc;
        case 0x20d2d0u: goto label_20d2d0;
        case 0x20d2d4u: goto label_20d2d4;
        case 0x20d2d8u: goto label_20d2d8;
        case 0x20d2dcu: goto label_20d2dc;
        case 0x20d2e0u: goto label_20d2e0;
        case 0x20d2e4u: goto label_20d2e4;
        case 0x20d2e8u: goto label_20d2e8;
        case 0x20d2ecu: goto label_20d2ec;
        case 0x20d2f0u: goto label_20d2f0;
        case 0x20d2f4u: goto label_20d2f4;
        case 0x20d2f8u: goto label_20d2f8;
        case 0x20d2fcu: goto label_20d2fc;
        case 0x20d300u: goto label_20d300;
        case 0x20d304u: goto label_20d304;
        case 0x20d308u: goto label_20d308;
        case 0x20d30cu: goto label_20d30c;
        case 0x20d310u: goto label_20d310;
        case 0x20d314u: goto label_20d314;
        case 0x20d318u: goto label_20d318;
        case 0x20d31cu: goto label_20d31c;
        case 0x20d320u: goto label_20d320;
        case 0x20d324u: goto label_20d324;
        case 0x20d328u: goto label_20d328;
        case 0x20d32cu: goto label_20d32c;
        case 0x20d330u: goto label_20d330;
        case 0x20d334u: goto label_20d334;
        case 0x20d338u: goto label_20d338;
        case 0x20d33cu: goto label_20d33c;
        case 0x20d340u: goto label_20d340;
        case 0x20d344u: goto label_20d344;
        case 0x20d348u: goto label_20d348;
        case 0x20d34cu: goto label_20d34c;
        case 0x20d350u: goto label_20d350;
        case 0x20d354u: goto label_20d354;
        case 0x20d358u: goto label_20d358;
        case 0x20d35cu: goto label_20d35c;
        case 0x20d360u: goto label_20d360;
        case 0x20d364u: goto label_20d364;
        case 0x20d368u: goto label_20d368;
        case 0x20d36cu: goto label_20d36c;
        case 0x20d370u: goto label_20d370;
        case 0x20d374u: goto label_20d374;
        case 0x20d378u: goto label_20d378;
        case 0x20d37cu: goto label_20d37c;
        case 0x20d380u: goto label_20d380;
        case 0x20d384u: goto label_20d384;
        case 0x20d388u: goto label_20d388;
        case 0x20d38cu: goto label_20d38c;
        case 0x20d390u: goto label_20d390;
        case 0x20d394u: goto label_20d394;
        case 0x20d398u: goto label_20d398;
        case 0x20d39cu: goto label_20d39c;
        case 0x20d3a0u: goto label_20d3a0;
        case 0x20d3a4u: goto label_20d3a4;
        case 0x20d3a8u: goto label_20d3a8;
        case 0x20d3acu: goto label_20d3ac;
        case 0x20d3b0u: goto label_20d3b0;
        case 0x20d3b4u: goto label_20d3b4;
        case 0x20d3b8u: goto label_20d3b8;
        case 0x20d3bcu: goto label_20d3bc;
        case 0x20d3c0u: goto label_20d3c0;
        case 0x20d3c4u: goto label_20d3c4;
        case 0x20d3c8u: goto label_20d3c8;
        case 0x20d3ccu: goto label_20d3cc;
        case 0x20d3d0u: goto label_20d3d0;
        case 0x20d3d4u: goto label_20d3d4;
        case 0x20d3d8u: goto label_20d3d8;
        case 0x20d3dcu: goto label_20d3dc;
        case 0x20d3e0u: goto label_20d3e0;
        case 0x20d3e4u: goto label_20d3e4;
        case 0x20d3e8u: goto label_20d3e8;
        case 0x20d3ecu: goto label_20d3ec;
        case 0x20d3f0u: goto label_20d3f0;
        case 0x20d3f4u: goto label_20d3f4;
        case 0x20d3f8u: goto label_20d3f8;
        case 0x20d3fcu: goto label_20d3fc;
        case 0x20d400u: goto label_20d400;
        case 0x20d404u: goto label_20d404;
        case 0x20d408u: goto label_20d408;
        case 0x20d40cu: goto label_20d40c;
        case 0x20d410u: goto label_20d410;
        case 0x20d414u: goto label_20d414;
        case 0x20d418u: goto label_20d418;
        case 0x20d41cu: goto label_20d41c;
        case 0x20d420u: goto label_20d420;
        case 0x20d424u: goto label_20d424;
        case 0x20d428u: goto label_20d428;
        case 0x20d42cu: goto label_20d42c;
        case 0x20d430u: goto label_20d430;
        case 0x20d434u: goto label_20d434;
        case 0x20d438u: goto label_20d438;
        case 0x20d43cu: goto label_20d43c;
        case 0x20d440u: goto label_20d440;
        case 0x20d444u: goto label_20d444;
        case 0x20d448u: goto label_20d448;
        case 0x20d44cu: goto label_20d44c;
        case 0x20d450u: goto label_20d450;
        case 0x20d454u: goto label_20d454;
        case 0x20d458u: goto label_20d458;
        case 0x20d45cu: goto label_20d45c;
        case 0x20d460u: goto label_20d460;
        case 0x20d464u: goto label_20d464;
        case 0x20d468u: goto label_20d468;
        case 0x20d46cu: goto label_20d46c;
        case 0x20d470u: goto label_20d470;
        case 0x20d474u: goto label_20d474;
        case 0x20d478u: goto label_20d478;
        case 0x20d47cu: goto label_20d47c;
        case 0x20d480u: goto label_20d480;
        case 0x20d484u: goto label_20d484;
        case 0x20d488u: goto label_20d488;
        case 0x20d48cu: goto label_20d48c;
        case 0x20d490u: goto label_20d490;
        case 0x20d494u: goto label_20d494;
        case 0x20d498u: goto label_20d498;
        case 0x20d49cu: goto label_20d49c;
        case 0x20d4a0u: goto label_20d4a0;
        case 0x20d4a4u: goto label_20d4a4;
        case 0x20d4a8u: goto label_20d4a8;
        case 0x20d4acu: goto label_20d4ac;
        case 0x20d4b0u: goto label_20d4b0;
        case 0x20d4b4u: goto label_20d4b4;
        case 0x20d4b8u: goto label_20d4b8;
        case 0x20d4bcu: goto label_20d4bc;
        case 0x20d4c0u: goto label_20d4c0;
        case 0x20d4c4u: goto label_20d4c4;
        case 0x20d4c8u: goto label_20d4c8;
        case 0x20d4ccu: goto label_20d4cc;
        case 0x20d4d0u: goto label_20d4d0;
        case 0x20d4d4u: goto label_20d4d4;
        case 0x20d4d8u: goto label_20d4d8;
        case 0x20d4dcu: goto label_20d4dc;
        case 0x20d4e0u: goto label_20d4e0;
        case 0x20d4e4u: goto label_20d4e4;
        case 0x20d4e8u: goto label_20d4e8;
        case 0x20d4ecu: goto label_20d4ec;
        case 0x20d4f0u: goto label_20d4f0;
        case 0x20d4f4u: goto label_20d4f4;
        case 0x20d4f8u: goto label_20d4f8;
        case 0x20d4fcu: goto label_20d4fc;
        case 0x20d500u: goto label_20d500;
        case 0x20d504u: goto label_20d504;
        case 0x20d508u: goto label_20d508;
        case 0x20d50cu: goto label_20d50c;
        case 0x20d510u: goto label_20d510;
        case 0x20d514u: goto label_20d514;
        case 0x20d518u: goto label_20d518;
        case 0x20d51cu: goto label_20d51c;
        case 0x20d520u: goto label_20d520;
        case 0x20d524u: goto label_20d524;
        case 0x20d528u: goto label_20d528;
        case 0x20d52cu: goto label_20d52c;
        case 0x20d530u: goto label_20d530;
        case 0x20d534u: goto label_20d534;
        case 0x20d538u: goto label_20d538;
        case 0x20d53cu: goto label_20d53c;
        case 0x20d540u: goto label_20d540;
        case 0x20d544u: goto label_20d544;
        case 0x20d548u: goto label_20d548;
        case 0x20d54cu: goto label_20d54c;
        case 0x20d550u: goto label_20d550;
        case 0x20d554u: goto label_20d554;
        case 0x20d558u: goto label_20d558;
        case 0x20d55cu: goto label_20d55c;
        case 0x20d560u: goto label_20d560;
        case 0x20d564u: goto label_20d564;
        case 0x20d568u: goto label_20d568;
        case 0x20d56cu: goto label_20d56c;
        case 0x20d570u: goto label_20d570;
        case 0x20d574u: goto label_20d574;
        case 0x20d578u: goto label_20d578;
        case 0x20d57cu: goto label_20d57c;
        case 0x20d580u: goto label_20d580;
        case 0x20d584u: goto label_20d584;
        case 0x20d588u: goto label_20d588;
        case 0x20d58cu: goto label_20d58c;
        case 0x20d590u: goto label_20d590;
        case 0x20d594u: goto label_20d594;
        case 0x20d598u: goto label_20d598;
        case 0x20d59cu: goto label_20d59c;
        case 0x20d5a0u: goto label_20d5a0;
        case 0x20d5a4u: goto label_20d5a4;
        case 0x20d5a8u: goto label_20d5a8;
        case 0x20d5acu: goto label_20d5ac;
        case 0x20d5b0u: goto label_20d5b0;
        case 0x20d5b4u: goto label_20d5b4;
        case 0x20d5b8u: goto label_20d5b8;
        case 0x20d5bcu: goto label_20d5bc;
        case 0x20d5c0u: goto label_20d5c0;
        case 0x20d5c4u: goto label_20d5c4;
        case 0x20d5c8u: goto label_20d5c8;
        case 0x20d5ccu: goto label_20d5cc;
        case 0x20d5d0u: goto label_20d5d0;
        case 0x20d5d4u: goto label_20d5d4;
        case 0x20d5d8u: goto label_20d5d8;
        case 0x20d5dcu: goto label_20d5dc;
        case 0x20d5e0u: goto label_20d5e0;
        case 0x20d5e4u: goto label_20d5e4;
        case 0x20d5e8u: goto label_20d5e8;
        case 0x20d5ecu: goto label_20d5ec;
        case 0x20d5f0u: goto label_20d5f0;
        case 0x20d5f4u: goto label_20d5f4;
        case 0x20d5f8u: goto label_20d5f8;
        case 0x20d5fcu: goto label_20d5fc;
        case 0x20d600u: goto label_20d600;
        case 0x20d604u: goto label_20d604;
        case 0x20d608u: goto label_20d608;
        case 0x20d60cu: goto label_20d60c;
        case 0x20d610u: goto label_20d610;
        case 0x20d614u: goto label_20d614;
        case 0x20d618u: goto label_20d618;
        case 0x20d61cu: goto label_20d61c;
        case 0x20d620u: goto label_20d620;
        case 0x20d624u: goto label_20d624;
        case 0x20d628u: goto label_20d628;
        case 0x20d62cu: goto label_20d62c;
        case 0x20d630u: goto label_20d630;
        case 0x20d634u: goto label_20d634;
        case 0x20d638u: goto label_20d638;
        case 0x20d63cu: goto label_20d63c;
        case 0x20d640u: goto label_20d640;
        case 0x20d644u: goto label_20d644;
        case 0x20d648u: goto label_20d648;
        case 0x20d64cu: goto label_20d64c;
        case 0x20d650u: goto label_20d650;
        case 0x20d654u: goto label_20d654;
        case 0x20d658u: goto label_20d658;
        case 0x20d65cu: goto label_20d65c;
        case 0x20d660u: goto label_20d660;
        case 0x20d664u: goto label_20d664;
        case 0x20d668u: goto label_20d668;
        case 0x20d66cu: goto label_20d66c;
        case 0x20d670u: goto label_20d670;
        case 0x20d674u: goto label_20d674;
        case 0x20d678u: goto label_20d678;
        case 0x20d67cu: goto label_20d67c;
        case 0x20d680u: goto label_20d680;
        case 0x20d684u: goto label_20d684;
        case 0x20d688u: goto label_20d688;
        case 0x20d68cu: goto label_20d68c;
        case 0x20d690u: goto label_20d690;
        case 0x20d694u: goto label_20d694;
        case 0x20d698u: goto label_20d698;
        case 0x20d69cu: goto label_20d69c;
        case 0x20d6a0u: goto label_20d6a0;
        case 0x20d6a4u: goto label_20d6a4;
        case 0x20d6a8u: goto label_20d6a8;
        case 0x20d6acu: goto label_20d6ac;
        case 0x20d6b0u: goto label_20d6b0;
        case 0x20d6b4u: goto label_20d6b4;
        case 0x20d6b8u: goto label_20d6b8;
        case 0x20d6bcu: goto label_20d6bc;
        case 0x20d6c0u: goto label_20d6c0;
        case 0x20d6c4u: goto label_20d6c4;
        case 0x20d6c8u: goto label_20d6c8;
        case 0x20d6ccu: goto label_20d6cc;
        case 0x20d6d0u: goto label_20d6d0;
        case 0x20d6d4u: goto label_20d6d4;
        case 0x20d6d8u: goto label_20d6d8;
        case 0x20d6dcu: goto label_20d6dc;
        case 0x20d6e0u: goto label_20d6e0;
        case 0x20d6e4u: goto label_20d6e4;
        case 0x20d6e8u: goto label_20d6e8;
        case 0x20d6ecu: goto label_20d6ec;
        case 0x20d6f0u: goto label_20d6f0;
        case 0x20d6f4u: goto label_20d6f4;
        case 0x20d6f8u: goto label_20d6f8;
        case 0x20d6fcu: goto label_20d6fc;
        case 0x20d700u: goto label_20d700;
        case 0x20d704u: goto label_20d704;
        case 0x20d708u: goto label_20d708;
        case 0x20d70cu: goto label_20d70c;
        case 0x20d710u: goto label_20d710;
        case 0x20d714u: goto label_20d714;
        case 0x20d718u: goto label_20d718;
        case 0x20d71cu: goto label_20d71c;
        case 0x20d720u: goto label_20d720;
        case 0x20d724u: goto label_20d724;
        case 0x20d728u: goto label_20d728;
        case 0x20d72cu: goto label_20d72c;
        case 0x20d730u: goto label_20d730;
        case 0x20d734u: goto label_20d734;
        case 0x20d738u: goto label_20d738;
        case 0x20d73cu: goto label_20d73c;
        case 0x20d740u: goto label_20d740;
        case 0x20d744u: goto label_20d744;
        case 0x20d748u: goto label_20d748;
        case 0x20d74cu: goto label_20d74c;
        case 0x20d750u: goto label_20d750;
        case 0x20d754u: goto label_20d754;
        case 0x20d758u: goto label_20d758;
        case 0x20d75cu: goto label_20d75c;
        case 0x20d760u: goto label_20d760;
        case 0x20d764u: goto label_20d764;
        case 0x20d768u: goto label_20d768;
        case 0x20d76cu: goto label_20d76c;
        case 0x20d770u: goto label_20d770;
        case 0x20d774u: goto label_20d774;
        case 0x20d778u: goto label_20d778;
        case 0x20d77cu: goto label_20d77c;
        case 0x20d780u: goto label_20d780;
        case 0x20d784u: goto label_20d784;
        case 0x20d788u: goto label_20d788;
        case 0x20d78cu: goto label_20d78c;
        case 0x20d790u: goto label_20d790;
        case 0x20d794u: goto label_20d794;
        case 0x20d798u: goto label_20d798;
        case 0x20d79cu: goto label_20d79c;
        case 0x20d7a0u: goto label_20d7a0;
        case 0x20d7a4u: goto label_20d7a4;
        case 0x20d7a8u: goto label_20d7a8;
        case 0x20d7acu: goto label_20d7ac;
        case 0x20d7b0u: goto label_20d7b0;
        case 0x20d7b4u: goto label_20d7b4;
        case 0x20d7b8u: goto label_20d7b8;
        case 0x20d7bcu: goto label_20d7bc;
        case 0x20d7c0u: goto label_20d7c0;
        case 0x20d7c4u: goto label_20d7c4;
        case 0x20d7c8u: goto label_20d7c8;
        case 0x20d7ccu: goto label_20d7cc;
        case 0x20d7d0u: goto label_20d7d0;
        case 0x20d7d4u: goto label_20d7d4;
        case 0x20d7d8u: goto label_20d7d8;
        case 0x20d7dcu: goto label_20d7dc;
        case 0x20d7e0u: goto label_20d7e0;
        case 0x20d7e4u: goto label_20d7e4;
        case 0x20d7e8u: goto label_20d7e8;
        case 0x20d7ecu: goto label_20d7ec;
        case 0x20d7f0u: goto label_20d7f0;
        case 0x20d7f4u: goto label_20d7f4;
        case 0x20d7f8u: goto label_20d7f8;
        case 0x20d7fcu: goto label_20d7fc;
        case 0x20d800u: goto label_20d800;
        case 0x20d804u: goto label_20d804;
        case 0x20d808u: goto label_20d808;
        case 0x20d80cu: goto label_20d80c;
        case 0x20d810u: goto label_20d810;
        case 0x20d814u: goto label_20d814;
        case 0x20d818u: goto label_20d818;
        case 0x20d81cu: goto label_20d81c;
        case 0x20d820u: goto label_20d820;
        case 0x20d824u: goto label_20d824;
        case 0x20d828u: goto label_20d828;
        case 0x20d82cu: goto label_20d82c;
        case 0x20d830u: goto label_20d830;
        case 0x20d834u: goto label_20d834;
        case 0x20d838u: goto label_20d838;
        case 0x20d83cu: goto label_20d83c;
        case 0x20d840u: goto label_20d840;
        case 0x20d844u: goto label_20d844;
        case 0x20d848u: goto label_20d848;
        case 0x20d84cu: goto label_20d84c;
        case 0x20d850u: goto label_20d850;
        case 0x20d854u: goto label_20d854;
        case 0x20d858u: goto label_20d858;
        case 0x20d85cu: goto label_20d85c;
        case 0x20d860u: goto label_20d860;
        case 0x20d864u: goto label_20d864;
        case 0x20d868u: goto label_20d868;
        case 0x20d86cu: goto label_20d86c;
        case 0x20d870u: goto label_20d870;
        case 0x20d874u: goto label_20d874;
        case 0x20d878u: goto label_20d878;
        case 0x20d87cu: goto label_20d87c;
        case 0x20d880u: goto label_20d880;
        case 0x20d884u: goto label_20d884;
        case 0x20d888u: goto label_20d888;
        case 0x20d88cu: goto label_20d88c;
        case 0x20d890u: goto label_20d890;
        case 0x20d894u: goto label_20d894;
        case 0x20d898u: goto label_20d898;
        case 0x20d89cu: goto label_20d89c;
        case 0x20d8a0u: goto label_20d8a0;
        case 0x20d8a4u: goto label_20d8a4;
        case 0x20d8a8u: goto label_20d8a8;
        case 0x20d8acu: goto label_20d8ac;
        case 0x20d8b0u: goto label_20d8b0;
        case 0x20d8b4u: goto label_20d8b4;
        case 0x20d8b8u: goto label_20d8b8;
        case 0x20d8bcu: goto label_20d8bc;
        case 0x20d8c0u: goto label_20d8c0;
        case 0x20d8c4u: goto label_20d8c4;
        case 0x20d8c8u: goto label_20d8c8;
        case 0x20d8ccu: goto label_20d8cc;
        case 0x20d8d0u: goto label_20d8d0;
        case 0x20d8d4u: goto label_20d8d4;
        case 0x20d8d8u: goto label_20d8d8;
        case 0x20d8dcu: goto label_20d8dc;
        case 0x20d8e0u: goto label_20d8e0;
        case 0x20d8e4u: goto label_20d8e4;
        case 0x20d8e8u: goto label_20d8e8;
        case 0x20d8ecu: goto label_20d8ec;
        case 0x20d8f0u: goto label_20d8f0;
        case 0x20d8f4u: goto label_20d8f4;
        case 0x20d8f8u: goto label_20d8f8;
        case 0x20d8fcu: goto label_20d8fc;
        case 0x20d900u: goto label_20d900;
        case 0x20d904u: goto label_20d904;
        case 0x20d908u: goto label_20d908;
        case 0x20d90cu: goto label_20d90c;
        case 0x20d910u: goto label_20d910;
        case 0x20d914u: goto label_20d914;
        case 0x20d918u: goto label_20d918;
        case 0x20d91cu: goto label_20d91c;
        case 0x20d920u: goto label_20d920;
        case 0x20d924u: goto label_20d924;
        case 0x20d928u: goto label_20d928;
        case 0x20d92cu: goto label_20d92c;
        case 0x20d930u: goto label_20d930;
        case 0x20d934u: goto label_20d934;
        case 0x20d938u: goto label_20d938;
        case 0x20d93cu: goto label_20d93c;
        case 0x20d940u: goto label_20d940;
        case 0x20d944u: goto label_20d944;
        case 0x20d948u: goto label_20d948;
        case 0x20d94cu: goto label_20d94c;
        case 0x20d950u: goto label_20d950;
        case 0x20d954u: goto label_20d954;
        case 0x20d958u: goto label_20d958;
        case 0x20d95cu: goto label_20d95c;
        case 0x20d960u: goto label_20d960;
        case 0x20d964u: goto label_20d964;
        case 0x20d968u: goto label_20d968;
        case 0x20d96cu: goto label_20d96c;
        case 0x20d970u: goto label_20d970;
        case 0x20d974u: goto label_20d974;
        case 0x20d978u: goto label_20d978;
        case 0x20d97cu: goto label_20d97c;
        case 0x20d980u: goto label_20d980;
        case 0x20d984u: goto label_20d984;
        case 0x20d988u: goto label_20d988;
        case 0x20d98cu: goto label_20d98c;
        case 0x20d990u: goto label_20d990;
        case 0x20d994u: goto label_20d994;
        case 0x20d998u: goto label_20d998;
        case 0x20d99cu: goto label_20d99c;
        case 0x20d9a0u: goto label_20d9a0;
        case 0x20d9a4u: goto label_20d9a4;
        case 0x20d9a8u: goto label_20d9a8;
        case 0x20d9acu: goto label_20d9ac;
        case 0x20d9b0u: goto label_20d9b0;
        case 0x20d9b4u: goto label_20d9b4;
        case 0x20d9b8u: goto label_20d9b8;
        case 0x20d9bcu: goto label_20d9bc;
        case 0x20d9c0u: goto label_20d9c0;
        case 0x20d9c4u: goto label_20d9c4;
        case 0x20d9c8u: goto label_20d9c8;
        case 0x20d9ccu: goto label_20d9cc;
        case 0x20d9d0u: goto label_20d9d0;
        case 0x20d9d4u: goto label_20d9d4;
        case 0x20d9d8u: goto label_20d9d8;
        case 0x20d9dcu: goto label_20d9dc;
        case 0x20d9e0u: goto label_20d9e0;
        case 0x20d9e4u: goto label_20d9e4;
        case 0x20d9e8u: goto label_20d9e8;
        case 0x20d9ecu: goto label_20d9ec;
        case 0x20d9f0u: goto label_20d9f0;
        case 0x20d9f4u: goto label_20d9f4;
        case 0x20d9f8u: goto label_20d9f8;
        case 0x20d9fcu: goto label_20d9fc;
        case 0x20da00u: goto label_20da00;
        case 0x20da04u: goto label_20da04;
        case 0x20da08u: goto label_20da08;
        case 0x20da0cu: goto label_20da0c;
        case 0x20da10u: goto label_20da10;
        case 0x20da14u: goto label_20da14;
        case 0x20da18u: goto label_20da18;
        case 0x20da1cu: goto label_20da1c;
        case 0x20da20u: goto label_20da20;
        case 0x20da24u: goto label_20da24;
        case 0x20da28u: goto label_20da28;
        case 0x20da2cu: goto label_20da2c;
        case 0x20da30u: goto label_20da30;
        case 0x20da34u: goto label_20da34;
        case 0x20da38u: goto label_20da38;
        case 0x20da3cu: goto label_20da3c;
        case 0x20da40u: goto label_20da40;
        case 0x20da44u: goto label_20da44;
        case 0x20da48u: goto label_20da48;
        case 0x20da4cu: goto label_20da4c;
        case 0x20da50u: goto label_20da50;
        case 0x20da54u: goto label_20da54;
        case 0x20da58u: goto label_20da58;
        case 0x20da5cu: goto label_20da5c;
        case 0x20da60u: goto label_20da60;
        case 0x20da64u: goto label_20da64;
        case 0x20da68u: goto label_20da68;
        case 0x20da6cu: goto label_20da6c;
        case 0x20da70u: goto label_20da70;
        case 0x20da74u: goto label_20da74;
        case 0x20da78u: goto label_20da78;
        case 0x20da7cu: goto label_20da7c;
        case 0x20da80u: goto label_20da80;
        case 0x20da84u: goto label_20da84;
        case 0x20da88u: goto label_20da88;
        case 0x20da8cu: goto label_20da8c;
        case 0x20da90u: goto label_20da90;
        case 0x20da94u: goto label_20da94;
        case 0x20da98u: goto label_20da98;
        case 0x20da9cu: goto label_20da9c;
        case 0x20daa0u: goto label_20daa0;
        case 0x20daa4u: goto label_20daa4;
        case 0x20daa8u: goto label_20daa8;
        case 0x20daacu: goto label_20daac;
        case 0x20dab0u: goto label_20dab0;
        case 0x20dab4u: goto label_20dab4;
        case 0x20dab8u: goto label_20dab8;
        case 0x20dabcu: goto label_20dabc;
        case 0x20dac0u: goto label_20dac0;
        case 0x20dac4u: goto label_20dac4;
        case 0x20dac8u: goto label_20dac8;
        case 0x20daccu: goto label_20dacc;
        case 0x20dad0u: goto label_20dad0;
        case 0x20dad4u: goto label_20dad4;
        case 0x20dad8u: goto label_20dad8;
        case 0x20dadcu: goto label_20dadc;
        case 0x20dae0u: goto label_20dae0;
        case 0x20dae4u: goto label_20dae4;
        case 0x20dae8u: goto label_20dae8;
        case 0x20daecu: goto label_20daec;
        case 0x20daf0u: goto label_20daf0;
        case 0x20daf4u: goto label_20daf4;
        case 0x20daf8u: goto label_20daf8;
        case 0x20dafcu: goto label_20dafc;
        case 0x20db00u: goto label_20db00;
        case 0x20db04u: goto label_20db04;
        case 0x20db08u: goto label_20db08;
        case 0x20db0cu: goto label_20db0c;
        case 0x20db10u: goto label_20db10;
        case 0x20db14u: goto label_20db14;
        case 0x20db18u: goto label_20db18;
        case 0x20db1cu: goto label_20db1c;
        case 0x20db20u: goto label_20db20;
        case 0x20db24u: goto label_20db24;
        case 0x20db28u: goto label_20db28;
        case 0x20db2cu: goto label_20db2c;
        case 0x20db30u: goto label_20db30;
        case 0x20db34u: goto label_20db34;
        case 0x20db38u: goto label_20db38;
        case 0x20db3cu: goto label_20db3c;
        case 0x20db40u: goto label_20db40;
        case 0x20db44u: goto label_20db44;
        case 0x20db48u: goto label_20db48;
        case 0x20db4cu: goto label_20db4c;
        case 0x20db50u: goto label_20db50;
        case 0x20db54u: goto label_20db54;
        case 0x20db58u: goto label_20db58;
        case 0x20db5cu: goto label_20db5c;
        case 0x20db60u: goto label_20db60;
        case 0x20db64u: goto label_20db64;
        case 0x20db68u: goto label_20db68;
        case 0x20db6cu: goto label_20db6c;
        case 0x20db70u: goto label_20db70;
        case 0x20db74u: goto label_20db74;
        case 0x20db78u: goto label_20db78;
        case 0x20db7cu: goto label_20db7c;
        case 0x20db80u: goto label_20db80;
        case 0x20db84u: goto label_20db84;
        case 0x20db88u: goto label_20db88;
        case 0x20db8cu: goto label_20db8c;
        case 0x20db90u: goto label_20db90;
        case 0x20db94u: goto label_20db94;
        case 0x20db98u: goto label_20db98;
        case 0x20db9cu: goto label_20db9c;
        case 0x20dba0u: goto label_20dba0;
        case 0x20dba4u: goto label_20dba4;
        case 0x20dba8u: goto label_20dba8;
        case 0x20dbacu: goto label_20dbac;
        case 0x20dbb0u: goto label_20dbb0;
        case 0x20dbb4u: goto label_20dbb4;
        case 0x20dbb8u: goto label_20dbb8;
        case 0x20dbbcu: goto label_20dbbc;
        case 0x20dbc0u: goto label_20dbc0;
        case 0x20dbc4u: goto label_20dbc4;
        case 0x20dbc8u: goto label_20dbc8;
        case 0x20dbccu: goto label_20dbcc;
        case 0x20dbd0u: goto label_20dbd0;
        case 0x20dbd4u: goto label_20dbd4;
        case 0x20dbd8u: goto label_20dbd8;
        case 0x20dbdcu: goto label_20dbdc;
        case 0x20dbe0u: goto label_20dbe0;
        case 0x20dbe4u: goto label_20dbe4;
        case 0x20dbe8u: goto label_20dbe8;
        case 0x20dbecu: goto label_20dbec;
        case 0x20dbf0u: goto label_20dbf0;
        case 0x20dbf4u: goto label_20dbf4;
        case 0x20dbf8u: goto label_20dbf8;
        case 0x20dbfcu: goto label_20dbfc;
        case 0x20dc00u: goto label_20dc00;
        case 0x20dc04u: goto label_20dc04;
        case 0x20dc08u: goto label_20dc08;
        case 0x20dc0cu: goto label_20dc0c;
        case 0x20dc10u: goto label_20dc10;
        case 0x20dc14u: goto label_20dc14;
        case 0x20dc18u: goto label_20dc18;
        case 0x20dc1cu: goto label_20dc1c;
        case 0x20dc20u: goto label_20dc20;
        case 0x20dc24u: goto label_20dc24;
        case 0x20dc28u: goto label_20dc28;
        case 0x20dc2cu: goto label_20dc2c;
        case 0x20dc30u: goto label_20dc30;
        case 0x20dc34u: goto label_20dc34;
        case 0x20dc38u: goto label_20dc38;
        case 0x20dc3cu: goto label_20dc3c;
        case 0x20dc40u: goto label_20dc40;
        case 0x20dc44u: goto label_20dc44;
        case 0x20dc48u: goto label_20dc48;
        case 0x20dc4cu: goto label_20dc4c;
        case 0x20dc50u: goto label_20dc50;
        case 0x20dc54u: goto label_20dc54;
        case 0x20dc58u: goto label_20dc58;
        case 0x20dc5cu: goto label_20dc5c;
        case 0x20dc60u: goto label_20dc60;
        case 0x20dc64u: goto label_20dc64;
        case 0x20dc68u: goto label_20dc68;
        case 0x20dc6cu: goto label_20dc6c;
        case 0x20dc70u: goto label_20dc70;
        case 0x20dc74u: goto label_20dc74;
        case 0x20dc78u: goto label_20dc78;
        case 0x20dc7cu: goto label_20dc7c;
        case 0x20dc80u: goto label_20dc80;
        case 0x20dc84u: goto label_20dc84;
        case 0x20dc88u: goto label_20dc88;
        case 0x20dc8cu: goto label_20dc8c;
        case 0x20dc90u: goto label_20dc90;
        case 0x20dc94u: goto label_20dc94;
        case 0x20dc98u: goto label_20dc98;
        case 0x20dc9cu: goto label_20dc9c;
        case 0x20dca0u: goto label_20dca0;
        case 0x20dca4u: goto label_20dca4;
        case 0x20dca8u: goto label_20dca8;
        case 0x20dcacu: goto label_20dcac;
        case 0x20dcb0u: goto label_20dcb0;
        case 0x20dcb4u: goto label_20dcb4;
        case 0x20dcb8u: goto label_20dcb8;
        case 0x20dcbcu: goto label_20dcbc;
        case 0x20dcc0u: goto label_20dcc0;
        case 0x20dcc4u: goto label_20dcc4;
        case 0x20dcc8u: goto label_20dcc8;
        case 0x20dcccu: goto label_20dccc;
        case 0x20dcd0u: goto label_20dcd0;
        case 0x20dcd4u: goto label_20dcd4;
        case 0x20dcd8u: goto label_20dcd8;
        case 0x20dcdcu: goto label_20dcdc;
        case 0x20dce0u: goto label_20dce0;
        case 0x20dce4u: goto label_20dce4;
        case 0x20dce8u: goto label_20dce8;
        case 0x20dcecu: goto label_20dcec;
        case 0x20dcf0u: goto label_20dcf0;
        case 0x20dcf4u: goto label_20dcf4;
        case 0x20dcf8u: goto label_20dcf8;
        case 0x20dcfcu: goto label_20dcfc;
        case 0x20dd00u: goto label_20dd00;
        case 0x20dd04u: goto label_20dd04;
        case 0x20dd08u: goto label_20dd08;
        case 0x20dd0cu: goto label_20dd0c;
        case 0x20dd10u: goto label_20dd10;
        case 0x20dd14u: goto label_20dd14;
        case 0x20dd18u: goto label_20dd18;
        case 0x20dd1cu: goto label_20dd1c;
        case 0x20dd20u: goto label_20dd20;
        case 0x20dd24u: goto label_20dd24;
        case 0x20dd28u: goto label_20dd28;
        case 0x20dd2cu: goto label_20dd2c;
        case 0x20dd30u: goto label_20dd30;
        case 0x20dd34u: goto label_20dd34;
        case 0x20dd38u: goto label_20dd38;
        case 0x20dd3cu: goto label_20dd3c;
        case 0x20dd40u: goto label_20dd40;
        case 0x20dd44u: goto label_20dd44;
        case 0x20dd48u: goto label_20dd48;
        case 0x20dd4cu: goto label_20dd4c;
        case 0x20dd50u: goto label_20dd50;
        case 0x20dd54u: goto label_20dd54;
        case 0x20dd58u: goto label_20dd58;
        case 0x20dd5cu: goto label_20dd5c;
        case 0x20dd60u: goto label_20dd60;
        case 0x20dd64u: goto label_20dd64;
        case 0x20dd68u: goto label_20dd68;
        case 0x20dd6cu: goto label_20dd6c;
        case 0x20dd70u: goto label_20dd70;
        case 0x20dd74u: goto label_20dd74;
        case 0x20dd78u: goto label_20dd78;
        case 0x20dd7cu: goto label_20dd7c;
        case 0x20dd80u: goto label_20dd80;
        case 0x20dd84u: goto label_20dd84;
        case 0x20dd88u: goto label_20dd88;
        case 0x20dd8cu: goto label_20dd8c;
        case 0x20dd90u: goto label_20dd90;
        case 0x20dd94u: goto label_20dd94;
        case 0x20dd98u: goto label_20dd98;
        case 0x20dd9cu: goto label_20dd9c;
        case 0x20dda0u: goto label_20dda0;
        case 0x20dda4u: goto label_20dda4;
        case 0x20dda8u: goto label_20dda8;
        case 0x20ddacu: goto label_20ddac;
        case 0x20ddb0u: goto label_20ddb0;
        case 0x20ddb4u: goto label_20ddb4;
        case 0x20ddb8u: goto label_20ddb8;
        case 0x20ddbcu: goto label_20ddbc;
        case 0x20ddc0u: goto label_20ddc0;
        case 0x20ddc4u: goto label_20ddc4;
        case 0x20ddc8u: goto label_20ddc8;
        case 0x20ddccu: goto label_20ddcc;
        case 0x20ddd0u: goto label_20ddd0;
        case 0x20ddd4u: goto label_20ddd4;
        case 0x20ddd8u: goto label_20ddd8;
        case 0x20dddcu: goto label_20dddc;
        case 0x20dde0u: goto label_20dde0;
        case 0x20dde4u: goto label_20dde4;
        case 0x20dde8u: goto label_20dde8;
        case 0x20ddecu: goto label_20ddec;
        default: break;
    }

    ctx->pc = 0x20b840u;

label_20b840:
    // 0x20b840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20b840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20b844:
    // 0x20b844: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20b844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20b848:
    // 0x20b848: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x20b848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_20b84c:
    // 0x20b84c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x20b84cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_20b850:
    // 0x20b850: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x20b850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_20b854:
    // 0x20b854: 0xc083f3c  jal         func_20FCF0
label_20b858:
    if (ctx->pc == 0x20B858u) {
        ctx->pc = 0x20B85Cu;
        goto label_20b85c;
    }
    ctx->pc = 0x20B854u;
    SET_GPR_U32(ctx, 31, 0x20B85Cu);
    ctx->pc = 0x20FCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FCF0u, 0x20B854u, 0x20B85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B85Cu;
label_20b85c:
    // 0x20b85c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20b85cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20b860:
    // 0x20b860: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x20b860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_20b864:
    // 0x20b864: 0x3e00008  jr          $ra
label_20b868:
    if (ctx->pc == 0x20B868u) {
        ctx->pc = 0x20B86Cu;
        goto label_20b86c;
    }
    ctx->pc = 0x20B864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20B86Cu;
label_20b86c:
    // 0x20b86c: 0x0  nop
    ctx->pc = 0x20b86cu;
    // NOP
label_20b870:
    // 0x20b870: 0x27bdfe00  addiu       $sp, $sp, -0x200
    ctx->pc = 0x20b870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966784));
label_20b874:
    // 0x20b874: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x20b874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_20b878:
    // 0x20b878: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x20b878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_20b87c:
    // 0x20b87c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x20b87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_20b880:
    // 0x20b880: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x20b880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_20b884:
    // 0x20b884: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x20b884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_20b888:
    // 0x20b888: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x20b888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_20b88c:
    // 0x20b88c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x20b88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_20b890:
    // 0x20b890: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x20b890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_20b894:
    // 0x20b894: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x20b894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_20b898:
    // 0x20b898: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20b898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_20b89c:
    // 0x20b89c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x20b89cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_20b8a0:
    // 0x20b8a0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x20b8a0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_20b8a4:
    // 0x20b8a4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x20b8a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_20b8a8:
    // 0x20b8a8: 0xafa401f0  sw          $a0, 0x1F0($sp)
    ctx->pc = 0x20b8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 4));
label_20b8ac:
    // 0x20b8ac: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x20b8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20b8b0:
    // 0x20b8b0: 0xc442004c  lwc1        $f2, 0x4C($v0)
    ctx->pc = 0x20b8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20b8b4:
    // 0x20b8b4: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x20b8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20b8b8:
    // 0x20b8b8: 0xc4810054  lwc1        $f1, 0x54($a0)
    ctx->pc = 0x20b8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20b8bc:
    // 0x20b8bc: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x20b8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_20b8c0:
    // 0x20b8c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20b8c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20b8c4:
    // 0x20b8c4: 0x0  nop
    ctx->pc = 0x20b8c4u;
    // NOP
label_20b8c8:
    // 0x20b8c8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x20b8c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_20b8cc:
    // 0x20b8cc: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x20b8ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20b8d0:
    // 0x20b8d0: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_20b8d4:
    if (ctx->pc == 0x20B8D4u) {
        ctx->pc = 0x20B8D8u;
        goto label_20b8d8;
    }
    ctx->pc = 0x20B8D0u;
    {
        const bool branch_taken_0x20b8d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20b8d0) {
            ctx->pc = 0x20B900u;
            goto label_20b900;
        }
    }
    ctx->pc = 0x20B8D8u;
label_20b8d8:
    // 0x20b8d8: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x20b8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20b8dc:
    // 0x20b8dc: 0xc46300dc  lwc1        $f3, 0xDC($v1)
    ctx->pc = 0x20b8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_20b8e0:
    // 0x20b8e0: 0xc78282e4  lwc1        $f2, -0x7D1C($gp)
    ctx->pc = 0x20b8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20b8e4:
    // 0x20b8e4: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x20b8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20b8e8:
    // 0x20b8e8: 0xc46100dc  lwc1        $f1, 0xDC($v1)
    ctx->pc = 0x20b8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20b8ec:
    // 0x20b8ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20b8ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20b8f0:
    // 0x20b8f0: 0x0  nop
    ctx->pc = 0x20b8f0u;
    // NOP
label_20b8f4:
    // 0x20b8f4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x20b8f4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_20b8f8:
    // 0x20b8f8: 0x4603105d  msub.s      $f1, $f2, $f3
    ctx->pc = 0x20b8f8u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_20b8fc:
    // 0x20b8fc: 0xe46100dc  swc1        $f1, 0xDC($v1)
    ctx->pc = 0x20b8fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 220), bits); }
label_20b900:
    // 0x20b900: 0xc12242c  jal         func_4890B0
label_20b904:
    if (ctx->pc == 0x20B904u) {
        ctx->pc = 0x20B908u;
        goto label_20b908;
    }
    ctx->pc = 0x20B900u;
    SET_GPR_U32(ctx, 31, 0x20B908u);
    ctx->pc = 0x4890B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890B0u, 0x20B900u, 0x20B908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B908u;
label_20b908:
    // 0x20b908: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x20b908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
label_20b90c:
    // 0x20b90c: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x20b90cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20b910:
    // 0x20b910: 0xc06479c  jal         func_191E70
label_20b914:
    if (ctx->pc == 0x20B914u) {
        ctx->pc = 0x20B918u;
        goto label_20b918;
    }
    ctx->pc = 0x20B910u;
    SET_GPR_U32(ctx, 31, 0x20B918u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x20B910u, 0x20B918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B918u;
label_20b918:
    // 0x20b918: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x20b918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_20b91c:
    // 0x20b91c: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x20b91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20b920:
    // 0x20b920: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x20b920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_20b924:
    // 0x20b924: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x20b924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20b928:
    // 0x20b928: 0xc05612c  jal         func_1584B0
label_20b92c:
    if (ctx->pc == 0x20B92Cu) {
        ctx->pc = 0x20B930u;
        goto label_20b930;
    }
    ctx->pc = 0x20B928u;
    SET_GPR_U32(ctx, 31, 0x20B930u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x20B928u, 0x20B930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B930u;
label_20b930:
    // 0x20b930: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20b930u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20b934:
    // 0x20b934: 0x7ba400f0  lq          $a0, 0xF0($sp)
    ctx->pc = 0x20b934u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_20b938:
    // 0x20b938: 0x27a601d8  addiu       $a2, $sp, 0x1D8
    ctx->pc = 0x20b938u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
label_20b93c:
    // 0x20b93c: 0xc08c704  jal         func_231C10
label_20b940:
    if (ctx->pc == 0x20B940u) {
        ctx->pc = 0x20B944u;
        goto label_20b944;
    }
    ctx->pc = 0x20B93Cu;
    SET_GPR_U32(ctx, 31, 0x20B944u);
    ctx->pc = 0x231C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C10u, 0x20B93Cu, 0x20B944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B944u;
label_20b944:
    // 0x20b944: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x20b944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20b948:
    // 0x20b948: 0xc06479c  jal         func_191E70
label_20b94c:
    if (ctx->pc == 0x20B94Cu) {
        ctx->pc = 0x20B950u;
        goto label_20b950;
    }
    ctx->pc = 0x20B948u;
    SET_GPR_U32(ctx, 31, 0x20B950u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x20B948u, 0x20B950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B950u;
label_20b950:
    // 0x20b950: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x20b950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_20b954:
    // 0x20b954: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x20b954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20b958:
    // 0x20b958: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x20b958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_20b95c:
    // 0x20b95c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x20b95cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20b960:
    // 0x20b960: 0xc05612c  jal         func_1584B0
label_20b964:
    if (ctx->pc == 0x20B964u) {
        ctx->pc = 0x20B968u;
        goto label_20b968;
    }
    ctx->pc = 0x20B960u;
    SET_GPR_U32(ctx, 31, 0x20B968u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x20B960u, 0x20B968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B968u;
label_20b968:
    // 0x20b968: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20b968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20b96c:
    // 0x20b96c: 0x7ba400e0  lq          $a0, 0xE0($sp)
    ctx->pc = 0x20b96cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_20b970:
    // 0x20b970: 0x27a601d0  addiu       $a2, $sp, 0x1D0
    ctx->pc = 0x20b970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_20b974:
    // 0x20b974: 0xc08c6c8  jal         func_231B20
label_20b978:
    if (ctx->pc == 0x20B978u) {
        ctx->pc = 0x20B97Cu;
        goto label_20b97c;
    }
    ctx->pc = 0x20B974u;
    SET_GPR_U32(ctx, 31, 0x20B97Cu);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x20B974u, 0x20B97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B97Cu;
label_20b97c:
    // 0x20b97c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x20b97cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20b980:
    // 0x20b980: 0x8fb501f0  lw          $s5, 0x1F0($sp)
    ctx->pc = 0x20b980u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20b984:
    // 0x20b984: 0x26a40120  addiu       $a0, $s5, 0x120
    ctx->pc = 0x20b984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 288));
label_20b988:
    // 0x20b988: 0xc082dbc  jal         func_20B6F0
label_20b98c:
    if (ctx->pc == 0x20B98Cu) {
        ctx->pc = 0x20B990u;
        goto label_20b990;
    }
    ctx->pc = 0x20B988u;
    SET_GPR_U32(ctx, 31, 0x20B990u);
    ctx->pc = 0x20B6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B6F0u, 0x20B988u, 0x20B990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B990u;
label_20b990:
    // 0x20b990: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x20b990u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20b994:
    // 0x20b994: 0x1000005a  b           . + 4 + (0x5A << 2)
label_20b998:
    if (ctx->pc == 0x20B998u) {
        ctx->pc = 0x20B99Cu;
        goto label_20b99c;
    }
    ctx->pc = 0x20B994u;
    {
        const bool branch_taken_0x20b994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b994) {
            ctx->pc = 0x20BB00u;
            goto label_20bb00;
        }
    }
    ctx->pc = 0x20B99Cu;
label_20b99c:
    // 0x20b99c: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x20b99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20b9a0:
    // 0x20b9a0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x20b9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20b9a4:
    // 0x20b9a4: 0x246500a4  addiu       $a1, $v1, 0xA4
    ctx->pc = 0x20b9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 164));
label_20b9a8:
    // 0x20b9a8: 0xc083b98  jal         func_20EE60
label_20b9ac:
    if (ctx->pc == 0x20B9ACu) {
        ctx->pc = 0x20B9B0u;
        goto label_20b9b0;
    }
    ctx->pc = 0x20B9A8u;
    SET_GPR_U32(ctx, 31, 0x20B9B0u);
    ctx->pc = 0x20EE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EE60u, 0x20B9A8u, 0x20B9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B9B0u;
label_20b9b0:
    // 0x20b9b0: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_20b9b4:
    if (ctx->pc == 0x20B9B4u) {
        ctx->pc = 0x20B9B8u;
        goto label_20b9b8;
    }
    ctx->pc = 0x20B9B0u;
    {
        const bool branch_taken_0x20b9b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20b9b0) {
            ctx->pc = 0x20B9FCu;
            goto label_20b9fc;
        }
    }
    ctx->pc = 0x20B9B8u;
label_20b9b8:
    // 0x20b9b8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x20b9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20b9bc:
    // 0x20b9bc: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_20b9c0:
    if (ctx->pc == 0x20B9C0u) {
        ctx->pc = 0x20B9C4u;
        goto label_20b9c4;
    }
    ctx->pc = 0x20B9BCu;
    {
        const bool branch_taken_0x20b9bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b9bc) {
            ctx->pc = 0x20B9E4u;
            goto label_20b9e4;
        }
    }
    ctx->pc = 0x20B9C4u;
label_20b9c4:
    // 0x20b9c4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x20b9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20b9c8:
    // 0x20b9c8: 0xc082db0  jal         func_20B6C0
label_20b9cc:
    if (ctx->pc == 0x20B9CCu) {
        ctx->pc = 0x20B9D0u;
        goto label_20b9d0;
    }
    ctx->pc = 0x20B9C8u;
    SET_GPR_U32(ctx, 31, 0x20B9D0u);
    ctx->pc = 0x20B6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B6C0u, 0x20B9C8u, 0x20B9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B9D0u;
label_20b9d0:
    // 0x20b9d0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x20b9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20b9d4:
    // 0x20b9d4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x20b9d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20b9d8:
    // 0x20b9d8: 0xc119c5c  jal         func_467170
label_20b9dc:
    if (ctx->pc == 0x20B9DCu) {
        ctx->pc = 0x20B9E0u;
        goto label_20b9e0;
    }
    ctx->pc = 0x20B9D8u;
    SET_GPR_U32(ctx, 31, 0x20B9E0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x20B9D8u, 0x20B9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B9E0u;
label_20b9e0:
    // 0x20b9e0: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x20b9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_20b9e4:
    // 0x20b9e4: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x20b9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20b9e8:
    // 0x20b9e8: 0xc08385c  jal         func_20E170
label_20b9ec:
    if (ctx->pc == 0x20B9ECu) {
        ctx->pc = 0x20B9F0u;
        goto label_20b9f0;
    }
    ctx->pc = 0x20B9E8u;
    SET_GPR_U32(ctx, 31, 0x20B9F0u);
    ctx->pc = 0x20E170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E170u, 0x20B9E8u, 0x20B9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B9F0u;
label_20b9f0:
    // 0x20b9f0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x20b9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_20b9f4:
    // 0x20b9f4: 0x10000042  b           . + 4 + (0x42 << 2)
label_20b9f8:
    if (ctx->pc == 0x20B9F8u) {
        ctx->pc = 0x20B9FCu;
        goto label_20b9fc;
    }
    ctx->pc = 0x20B9F4u;
    {
        const bool branch_taken_0x20b9f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b9f4) {
            ctx->pc = 0x20BB00u;
            goto label_20bb00;
        }
    }
    ctx->pc = 0x20B9FCu;
label_20b9fc:
    // 0x20b9fc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x20b9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20ba00:
    // 0x20ba00: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x20ba00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_20ba04:
    // 0x20ba04: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
label_20ba08:
    if (ctx->pc == 0x20BA08u) {
        ctx->pc = 0x20BA0Cu;
        goto label_20ba0c;
    }
    ctx->pc = 0x20BA04u;
    {
        const bool branch_taken_0x20ba04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ba04) {
            ctx->pc = 0x20BAFCu;
            goto label_20bafc;
        }
    }
    ctx->pc = 0x20BA0Cu;
label_20ba0c:
    // 0x20ba0c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x20ba0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20ba10:
    // 0x20ba10: 0xc444003c  lwc1        $f4, 0x3C($v0)
    ctx->pc = 0x20ba10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_20ba14:
    // 0x20ba14: 0x3c043e80  lui         $a0, 0x3E80
    ctx->pc = 0x20ba14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16000 << 16));
label_20ba18:
    // 0x20ba18: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x20ba18u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_20ba1c:
    // 0x20ba1c: 0xc7a201d0  lwc1        $f2, 0x1D0($sp)
    ctx->pc = 0x20ba1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20ba20:
    // 0x20ba20: 0xc7a101d8  lwc1        $f1, 0x1D8($sp)
    ctx->pc = 0x20ba20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20ba24:
    // 0x20ba24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20ba24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20ba28:
    // 0x20ba28: 0x0  nop
    ctx->pc = 0x20ba28u;
    // NOP
label_20ba2c:
    // 0x20ba2c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x20ba2cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_20ba30:
    // 0x20ba30: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x20ba30u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_20ba34:
    // 0x20ba34: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x20ba34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20ba38:
    // 0x20ba38: 0x45010030  bc1t        . + 4 + (0x30 << 2)
label_20ba3c:
    if (ctx->pc == 0x20BA3Cu) {
        ctx->pc = 0x20BA40u;
        goto label_20ba40;
    }
    ctx->pc = 0x20BA38u;
    {
        const bool branch_taken_0x20ba38 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20ba38) {
            ctx->pc = 0x20BAFCu;
            goto label_20bafc;
        }
    }
    ctx->pc = 0x20BA40u;
label_20ba40:
    // 0x20ba40: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x20ba40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20ba44:
    // 0x20ba44: 0xc444003c  lwc1        $f4, 0x3C($v0)
    ctx->pc = 0x20ba44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_20ba48:
    // 0x20ba48: 0x3c043f40  lui         $a0, 0x3F40
    ctx->pc = 0x20ba48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16192 << 16));
label_20ba4c:
    // 0x20ba4c: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x20ba4cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_20ba50:
    // 0x20ba50: 0xc7a201d0  lwc1        $f2, 0x1D0($sp)
    ctx->pc = 0x20ba50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20ba54:
    // 0x20ba54: 0xc7a101d8  lwc1        $f1, 0x1D8($sp)
    ctx->pc = 0x20ba54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20ba58:
    // 0x20ba58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20ba58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20ba5c:
    // 0x20ba5c: 0x0  nop
    ctx->pc = 0x20ba5cu;
    // NOP
label_20ba60:
    // 0x20ba60: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x20ba60u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_20ba64:
    // 0x20ba64: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x20ba64u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_20ba68:
    // 0x20ba68: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x20ba68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20ba6c:
    // 0x20ba6c: 0x45000023  bc1f        . + 4 + (0x23 << 2)
label_20ba70:
    if (ctx->pc == 0x20BA70u) {
        ctx->pc = 0x20BA74u;
        goto label_20ba74;
    }
    ctx->pc = 0x20BA6Cu;
    {
        const bool branch_taken_0x20ba6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20ba6c) {
            ctx->pc = 0x20BAFCu;
            goto label_20bafc;
        }
    }
    ctx->pc = 0x20BA74u;
label_20ba74:
    // 0x20ba74: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x20ba74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20ba78:
    // 0x20ba78: 0xc4a40040  lwc1        $f4, 0x40($a1)
    ctx->pc = 0x20ba78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_20ba7c:
    // 0x20ba7c: 0x3c063e80  lui         $a2, 0x3E80
    ctx->pc = 0x20ba7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16000 << 16));
label_20ba80:
    // 0x20ba80: 0x44861800  mtc1        $a2, $f3
    ctx->pc = 0x20ba80u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_20ba84:
    // 0x20ba84: 0xc7a201d4  lwc1        $f2, 0x1D4($sp)
    ctx->pc = 0x20ba84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20ba88:
    // 0x20ba88: 0xc7a101dc  lwc1        $f1, 0x1DC($sp)
    ctx->pc = 0x20ba88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20ba8c:
    // 0x20ba8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20ba8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20ba90:
    // 0x20ba90: 0x0  nop
    ctx->pc = 0x20ba90u;
    // NOP
label_20ba94:
    // 0x20ba94: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x20ba94u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_20ba98:
    // 0x20ba98: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x20ba98u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_20ba9c:
    // 0x20ba9c: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x20ba9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20baa0:
    // 0x20baa0: 0x45010016  bc1t        . + 4 + (0x16 << 2)
label_20baa4:
    if (ctx->pc == 0x20BAA4u) {
        ctx->pc = 0x20BAA8u;
        goto label_20baa8;
    }
    ctx->pc = 0x20BAA0u;
    {
        const bool branch_taken_0x20baa0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20baa0) {
            ctx->pc = 0x20BAFCu;
            goto label_20bafc;
        }
    }
    ctx->pc = 0x20BAA8u;
label_20baa8:
    // 0x20baa8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x20baa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20baac:
    // 0x20baac: 0xc4440040  lwc1        $f4, 0x40($v0)
    ctx->pc = 0x20baacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_20bab0:
    // 0x20bab0: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x20bab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
label_20bab4:
    // 0x20bab4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x20bab4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_20bab8:
    // 0x20bab8: 0xc7a201d4  lwc1        $f2, 0x1D4($sp)
    ctx->pc = 0x20bab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20babc:
    // 0x20babc: 0xc7a101dc  lwc1        $f1, 0x1DC($sp)
    ctx->pc = 0x20babcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20bac0:
    // 0x20bac0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20bac0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20bac4:
    // 0x20bac4: 0x0  nop
    ctx->pc = 0x20bac4u;
    // NOP
label_20bac8:
    // 0x20bac8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x20bac8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_20bacc:
    // 0x20bacc: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x20baccu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_20bad0:
    // 0x20bad0: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x20bad0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20bad4:
    // 0x20bad4: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_20bad8:
    if (ctx->pc == 0x20BAD8u) {
        ctx->pc = 0x20BADCu;
        goto label_20badc;
    }
    ctx->pc = 0x20BAD4u;
    {
        const bool branch_taken_0x20bad4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20bad4) {
            ctx->pc = 0x20BAFCu;
            goto label_20bafc;
        }
    }
    ctx->pc = 0x20BADCu;
label_20badc:
    // 0x20badc: 0x16e00005  bnez        $s7, . + 4 + (0x5 << 2)
label_20bae0:
    if (ctx->pc == 0x20BAE0u) {
        ctx->pc = 0x20BAE4u;
        goto label_20bae4;
    }
    ctx->pc = 0x20BADCu;
    {
        const bool branch_taken_0x20badc = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x20badc) {
            ctx->pc = 0x20BAF4u;
            goto label_20baf4;
        }
    }
    ctx->pc = 0x20BAE4u;
label_20bae4:
    // 0x20bae4: 0x93829af8  lbu         $v0, -0x6508($gp)
    ctx->pc = 0x20bae4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941432)));
label_20bae8:
    // 0x20bae8: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x20bae8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_20baec:
    // 0x20baec: 0x38620001  xori        $v0, $v1, 0x1
    ctx->pc = 0x20baecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_20baf0:
    // 0x20baf0: 0xa3829af8  sb          $v0, -0x6508($gp)
    ctx->pc = 0x20baf0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941432), (uint8_t)GPR_U32(ctx, 2));
label_20baf4:
    // 0x20baf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20baf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20baf8:
    // 0x20baf8: 0x305700ff  andi        $s7, $v0, 0xFF
    ctx->pc = 0x20baf8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_20bafc:
    // 0x20bafc: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x20bafcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_20bb00:
    // 0x20bb00: 0x8fa501f0  lw          $a1, 0x1F0($sp)
    ctx->pc = 0x20bb00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20bb04:
    // 0x20bb04: 0x24a60120  addiu       $a2, $a1, 0x120
    ctx->pc = 0x20bb04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
label_20bb08:
    // 0x20bb08: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x20bb08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_20bb0c:
    // 0x20bb0c: 0xc082da8  jal         func_20B6A0
label_20bb10:
    if (ctx->pc == 0x20BB10u) {
        ctx->pc = 0x20BB14u;
        goto label_20bb14;
    }
    ctx->pc = 0x20BB0Cu;
    SET_GPR_U32(ctx, 31, 0x20BB14u);
    ctx->pc = 0x20B6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B6A0u, 0x20BB0Cu, 0x20BB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BB14u;
label_20bb14:
    // 0x20bb14: 0x1622ffa1  bne         $s1, $v0, . + 4 + (-0x5F << 2)
label_20bb18:
    if (ctx->pc == 0x20BB18u) {
        ctx->pc = 0x20BB1Cu;
        goto label_20bb1c;
    }
    ctx->pc = 0x20BB14u;
    {
        const bool branch_taken_0x20bb14 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x20bb14) {
            ctx->pc = 0x20B99Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20b99c;
        }
    }
    ctx->pc = 0x20BB1Cu;
label_20bb1c:
    // 0x20bb1c: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x20bb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_20bb20:
    // 0x20bb20: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x20bb20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_20bb24:
    // 0x20bb24: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_20bb28:
    if (ctx->pc == 0x20BB28u) {
        ctx->pc = 0x20BB2Cu;
        goto label_20bb2c;
    }
    ctx->pc = 0x20BB24u;
    {
        const bool branch_taken_0x20bb24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20bb24) {
            ctx->pc = 0x20BB7Cu;
            goto label_20bb7c;
        }
    }
    ctx->pc = 0x20BB2Cu;
label_20bb2c:
    // 0x20bb2c: 0x16e00003  bnez        $s7, . + 4 + (0x3 << 2)
label_20bb30:
    if (ctx->pc == 0x20BB30u) {
        ctx->pc = 0x20BB34u;
        goto label_20bb34;
    }
    ctx->pc = 0x20BB2Cu;
    {
        const bool branch_taken_0x20bb2c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x20bb2c) {
            ctx->pc = 0x20BB3Cu;
            goto label_20bb3c;
        }
    }
    ctx->pc = 0x20BB34u;
label_20bb34:
    // 0x20bb34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20bb34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20bb38:
    // 0x20bb38: 0xa3829af8  sb          $v0, -0x6508($gp)
    ctx->pc = 0x20bb38u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941432), (uint8_t)GPR_U32(ctx, 2));
label_20bb3c:
    // 0x20bb3c: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x20bb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20bb40:
    // 0x20bb40: 0xc06479c  jal         func_191E70
label_20bb44:
    if (ctx->pc == 0x20BB44u) {
        ctx->pc = 0x20BB48u;
        goto label_20bb48;
    }
    ctx->pc = 0x20BB40u;
    SET_GPR_U32(ctx, 31, 0x20BB48u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x20BB40u, 0x20BB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BB48u;
label_20bb48:
    // 0x20bb48: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x20bb48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_20bb4c:
    // 0x20bb4c: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x20bb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20bb50:
    // 0x20bb50: 0x24850040  addiu       $a1, $a0, 0x40
    ctx->pc = 0x20bb50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_20bb54:
    // 0x20bb54: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x20bb54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20bb58:
    // 0x20bb58: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x20bb58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20bb5c:
    // 0x20bb5c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x20bb5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_20bb60:
    // 0x20bb60: 0xc05612c  jal         func_1584B0
label_20bb64:
    if (ctx->pc == 0x20BB64u) {
        ctx->pc = 0x20BB68u;
        goto label_20bb68;
    }
    ctx->pc = 0x20BB60u;
    SET_GPR_U32(ctx, 31, 0x20BB68u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x20BB60u, 0x20BB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BB68u;
label_20bb68:
    // 0x20bb68: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20bb68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20bb6c:
    // 0x20bb6c: 0x7ba400d0  lq          $a0, 0xD0($sp)
    ctx->pc = 0x20bb6cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_20bb70:
    // 0x20bb70: 0x93869af8  lbu         $a2, -0x6508($gp)
    ctx->pc = 0x20bb70u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941432)));
label_20bb74:
    // 0x20bb74: 0xc08c8dc  jal         func_232370
label_20bb78:
    if (ctx->pc == 0x20BB78u) {
        ctx->pc = 0x20BB7Cu;
        goto label_20bb7c;
    }
    ctx->pc = 0x20BB74u;
    SET_GPR_U32(ctx, 31, 0x20BB7Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x20BB74u, 0x20BB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BB7Cu;
label_20bb7c:
    // 0x20bb7c: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x20bb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20bb80:
    // 0x20bb80: 0xc44c00e4  lwc1        $f12, 0xE4($v0)
    ctx->pc = 0x20bb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_20bb84:
    // 0x20bb84: 0xc0c38f0  jal         func_30E3C0
label_20bb88:
    if (ctx->pc == 0x20BB88u) {
        ctx->pc = 0x20BB8Cu;
        goto label_20bb8c;
    }
    ctx->pc = 0x20BB84u;
    SET_GPR_U32(ctx, 31, 0x20BB8Cu);
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x20BB84u, 0x20BB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BB8Cu;
label_20bb8c:
    // 0x20bb8c: 0xe7a001c8  swc1        $f0, 0x1C8($sp)
    ctx->pc = 0x20bb8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
label_20bb90:
    // 0x20bb90: 0x8fa501f0  lw          $a1, 0x1F0($sp)
    ctx->pc = 0x20bb90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20bb94:
    // 0x20bb94: 0xc4ac00e4  lwc1        $f12, 0xE4($a1)
    ctx->pc = 0x20bb94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_20bb98:
    // 0x20bb98: 0xc0c3966  jal         func_30E598
label_20bb9c:
    if (ctx->pc == 0x20BB9Cu) {
        ctx->pc = 0x20BBA0u;
        goto label_20bba0;
    }
    ctx->pc = 0x20BB98u;
    SET_GPR_U32(ctx, 31, 0x20BBA0u);
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x20BB98u, 0x20BBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BBA0u;
label_20bba0:
    // 0x20bba0: 0xe7a001cc  swc1        $f0, 0x1CC($sp)
    ctx->pc = 0x20bba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 460), bits); }
label_20bba4:
    // 0x20bba4: 0x8f86bb70  lw          $a2, -0x4490($gp)
    ctx->pc = 0x20bba4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_20bba8:
    // 0x20bba8: 0x3c07447a  lui         $a3, 0x447A
    ctx->pc = 0x20bba8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17530 << 16));
label_20bbac:
    // 0x20bbac: 0x44871800  mtc1        $a3, $f3
    ctx->pc = 0x20bbacu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_20bbb0:
    // 0x20bbb0: 0xc4c2000c  lwc1        $f2, 0xC($a2)
    ctx->pc = 0x20bbb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20bbb4:
    // 0x20bbb4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x20bbb4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_20bbb8:
    // 0x20bbb8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x20bbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_20bbbc:
    // 0x20bbbc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20bbbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20bbc0:
    // 0x20bbc0: 0x0  nop
    ctx->pc = 0x20bbc0u;
    // NOP
label_20bbc4:
    // 0x20bbc4: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x20bbc4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20bbc8:
    // 0x20bbc8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_20bbcc:
    if (ctx->pc == 0x20BBCCu) {
        ctx->pc = 0x20BBD0u;
        goto label_20bbd0;
    }
    ctx->pc = 0x20BBC8u;
    {
        const bool branch_taken_0x20bbc8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20bbc8) {
            ctx->pc = 0x20BBE0u;
            goto label_20bbe0;
        }
    }
    ctx->pc = 0x20BBD0u;
label_20bbd0:
    // 0x20bbd0: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x20bbd0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_20bbd4:
    // 0x20bbd4: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x20bbd4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_20bbd8:
    // 0x20bbd8: 0x10000008  b           . + 4 + (0x8 << 2)
label_20bbdc:
    if (ctx->pc == 0x20BBDCu) {
        ctx->pc = 0x20BBE0u;
        goto label_20bbe0;
    }
    ctx->pc = 0x20BBD8u;
    {
        const bool branch_taken_0x20bbd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20bbd8) {
            ctx->pc = 0x20BBFCu;
            goto label_20bbfc;
        }
    }
    ctx->pc = 0x20BBE0u;
label_20bbe0:
    // 0x20bbe0: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x20bbe0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_20bbe4:
    // 0x20bbe4: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x20bbe4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_20bbe8:
    // 0x20bbe8: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x20bbe8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_20bbec:
    // 0x20bbec: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x20bbecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_20bbf0:
    // 0x20bbf0: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x20bbf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_20bbf4:
    // 0x20bbf4: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x20bbf4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_20bbf8:
    // 0x20bbf8: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x20bbf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_20bbfc:
    // 0x20bbfc: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x20bbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20bc00:
    // 0x20bc00: 0x8c440110  lw          $a0, 0x110($v0)
    ctx->pc = 0x20bc00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
label_20bc04:
    // 0x20bc04: 0xc123260  jal         func_48C980
label_20bc08:
    if (ctx->pc == 0x20BC08u) {
        ctx->pc = 0x20BC0Cu;
        goto label_20bc0c;
    }
    ctx->pc = 0x20BC04u;
    SET_GPR_U32(ctx, 31, 0x20BC0Cu);
    ctx->pc = 0x48C980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C980u, 0x20BC04u, 0x20BC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BC0Cu;
label_20bc0c:
    // 0x20bc0c: 0x3c053f00  lui         $a1, 0x3F00
    ctx->pc = 0x20bc0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16128 << 16));
label_20bc10:
    // 0x20bc10: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x20bc10u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20bc14:
    // 0x20bc14: 0x0  nop
    ctx->pc = 0x20bc14u;
    // NOP
label_20bc18:
    // 0x20bc18: 0x46010004  c1          0x10004
    ctx->pc = 0x20bc18u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_20bc1c:
    // 0x20bc1c: 0xe7a001ec  swc1        $f0, 0x1EC($sp)
    ctx->pc = 0x20bc1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 492), bits); }
label_20bc20:
    // 0x20bc20: 0x8fa601f0  lw          $a2, 0x1F0($sp)
    ctx->pc = 0x20bc20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20bc24:
    // 0x20bc24: 0x24c700c4  addiu       $a3, $a2, 0xC4
    ctx->pc = 0x20bc24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 196));
label_20bc28:
    // 0x20bc28: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x20bc28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_20bc2c:
    // 0x20bc2c: 0xc082b70  jal         func_20ADC0
label_20bc30:
    if (ctx->pc == 0x20BC30u) {
        ctx->pc = 0x20BC34u;
        goto label_20bc34;
    }
    ctx->pc = 0x20BC2Cu;
    SET_GPR_U32(ctx, 31, 0x20BC34u);
    ctx->pc = 0x20ADC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20ADC0u, 0x20BC2Cu, 0x20BC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BC34u;
label_20bc34:
    // 0x20bc34: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x20bc34u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20bc38:
    // 0x20bc38: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x20bc38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20bc3c:
    // 0x20bc3c: 0x1000035b  b           . + 4 + (0x35B << 2)
label_20bc40:
    if (ctx->pc == 0x20BC40u) {
        ctx->pc = 0x20BC44u;
        goto label_20bc44;
    }
    ctx->pc = 0x20BC3Cu;
    {
        const bool branch_taken_0x20bc3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20bc3c) {
            ctx->pc = 0x20C9ACu;
            goto label_20c9ac;
        }
    }
    ctx->pc = 0x20BC44u;
label_20bc44:
    // 0x20bc44: 0x8f84bb70  lw          $a0, -0x4490($gp)
    ctx->pc = 0x20bc44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_20bc48:
    // 0x20bc48: 0xc494000c  lwc1        $f20, 0xC($a0)
    ctx->pc = 0x20bc48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_20bc4c:
    // 0x20bc4c: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x20bc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20bc50:
    // 0x20bc50: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x20bc50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_20bc54:
    // 0x20bc54: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x20bc54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_20bc58:
    // 0x20bc58: 0x244400b8  addiu       $a0, $v0, 0xB8
    ctx->pc = 0x20bc58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
label_20bc5c:
    // 0x20bc5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20bc5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20bc60:
    // 0x20bc60: 0xc05f1a8  jal         func_17C6A0
label_20bc64:
    if (ctx->pc == 0x20BC64u) {
        ctx->pc = 0x20BC68u;
        goto label_20bc68;
    }
    ctx->pc = 0x20BC60u;
    SET_GPR_U32(ctx, 31, 0x20BC68u);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x20BC60u, 0x20BC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BC68u;
label_20bc68:
    // 0x20bc68: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x20bc68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20bc6c:
    // 0x20bc6c: 0x46140300  add.s       $f12, $f0, $f20
    ctx->pc = 0x20bc6cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_20bc70:
    // 0x20bc70: 0xe44c0000  swc1        $f12, 0x0($v0)
    ctx->pc = 0x20bc70u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_20bc74:
    // 0x20bc74: 0x8fa601f0  lw          $a2, 0x1F0($sp)
    ctx->pc = 0x20bc74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20bc78:
    // 0x20bc78: 0x24c700d0  addiu       $a3, $a2, 0xD0
    ctx->pc = 0x20bc78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 208));
label_20bc7c:
    // 0x20bc7c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x20bc7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_20bc80:
    // 0x20bc80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20bc80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20bc84:
    // 0x20bc84: 0xc082aa4  jal         func_20AA90
label_20bc88:
    if (ctx->pc == 0x20BC88u) {
        ctx->pc = 0x20BC8Cu;
        goto label_20bc8c;
    }
    ctx->pc = 0x20BC84u;
    SET_GPR_U32(ctx, 31, 0x20BC8Cu);
    ctx->pc = 0x20AA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AA90u, 0x20BC84u, 0x20BC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BC8Cu;
label_20bc8c:
    // 0x20bc8c: 0xc4540000  lwc1        $f20, 0x0($v0)
    ctx->pc = 0x20bc8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_20bc90:
    // 0x20bc90: 0x8fa601f0  lw          $a2, 0x1F0($sp)
    ctx->pc = 0x20bc90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20bc94:
    // 0x20bc94: 0x24c400b8  addiu       $a0, $a2, 0xB8
    ctx->pc = 0x20bc94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 184));
label_20bc98:
    // 0x20bc98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20bc98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20bc9c:
    // 0x20bc9c: 0xc05f1a8  jal         func_17C6A0
label_20bca0:
    if (ctx->pc == 0x20BCA0u) {
        ctx->pc = 0x20BCA4u;
        goto label_20bca4;
    }
    ctx->pc = 0x20BC9Cu;
    SET_GPR_U32(ctx, 31, 0x20BCA4u);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x20BC9Cu, 0x20BCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BCA4u;
label_20bca4:
    // 0x20bca4: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x20bca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20bca8:
    // 0x20bca8: 0x8fb101f0  lw          $s1, 0x1F0($sp)
    ctx->pc = 0x20bca8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20bcac:
    // 0x20bcac: 0xc62100e8  lwc1        $f1, 0xE8($s1)
    ctx->pc = 0x20bcacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20bcb0:
    // 0x20bcb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20bcb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20bcb4:
    // 0x20bcb4: 0x0  nop
    ctx->pc = 0x20bcb4u;
    // NOP
label_20bcb8:
    // 0x20bcb8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x20bcb8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_20bcbc:
    // 0x20bcbc: 0x4602a51c  madd.s      $f20, $f20, $f2
    ctx->pc = 0x20bcbcu;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[20], ctx->f[2]));
label_20bcc0:
    // 0x20bcc0: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x20bcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20bcc4:
    // 0x20bcc4: 0x244400c4  addiu       $a0, $v0, 0xC4
    ctx->pc = 0x20bcc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 196));
label_20bcc8:
    // 0x20bcc8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20bcc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20bccc:
    // 0x20bccc: 0xc082aa4  jal         func_20AA90
label_20bcd0:
    if (ctx->pc == 0x20BCD0u) {
        ctx->pc = 0x20BCD4u;
        goto label_20bcd4;
    }
    ctx->pc = 0x20BCCCu;
    SET_GPR_U32(ctx, 31, 0x20BCD4u);
    ctx->pc = 0x20AA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AA90u, 0x20BCCCu, 0x20BCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BCD4u;
label_20bcd4:
    // 0x20bcd4: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x20bcd4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_20bcd8:
    // 0x20bcd8: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x20bcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20bcdc:
    // 0x20bcdc: 0x244500b8  addiu       $a1, $v0, 0xB8
    ctx->pc = 0x20bcdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
label_20bce0:
    // 0x20bce0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x20bce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20bce4:
    // 0x20bce4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20bce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20bce8:
    // 0x20bce8: 0xc05f1a8  jal         func_17C6A0
label_20bcec:
    if (ctx->pc == 0x20BCECu) {
        ctx->pc = 0x20BCF0u;
        goto label_20bcf0;
    }
    ctx->pc = 0x20BCE8u;
    SET_GPR_U32(ctx, 31, 0x20BCF0u);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x20BCE8u, 0x20BCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BCF0u;
label_20bcf0:
    // 0x20bcf0: 0x3c03c2c8  lui         $v1, 0xC2C8
    ctx->pc = 0x20bcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49864 << 16));
label_20bcf4:
    // 0x20bcf4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20bcf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20bcf8:
    // 0x20bcf8: 0xc44d0000  lwc1        $f13, 0x0($v0)
    ctx->pc = 0x20bcf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_20bcfc:
    // 0x20bcfc: 0x460d0582  mul.s       $f22, $f0, $f13
    ctx->pc = 0x20bcfcu;
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
label_20bd00:
    // 0x20bd00: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x20bd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20bd04:
    // 0x20bd04: 0x244400b8  addiu       $a0, $v0, 0xB8
    ctx->pc = 0x20bd04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
label_20bd08:
    // 0x20bd08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20bd08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20bd0c:
    // 0x20bd0c: 0xc05f1a8  jal         func_17C6A0
label_20bd10:
    if (ctx->pc == 0x20BD10u) {
        ctx->pc = 0x20BD14u;
        goto label_20bd14;
    }
    ctx->pc = 0x20BD0Cu;
    SET_GPR_U32(ctx, 31, 0x20BD14u);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x20BD0Cu, 0x20BD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BD14u;
label_20bd14:
    // 0x20bd14: 0xc4550000  lwc1        $f21, 0x0($v0)
    ctx->pc = 0x20bd14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_20bd18:
    // 0x20bd18: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x20bd18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20bd1c:
    // 0x20bd1c: 0x246400d0  addiu       $a0, $v1, 0xD0
    ctx->pc = 0x20bd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
label_20bd20:
    // 0x20bd20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20bd20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20bd24:
    // 0x20bd24: 0xc082aa4  jal         func_20AA90
label_20bd28:
    if (ctx->pc == 0x20BD28u) {
        ctx->pc = 0x20BD2Cu;
        goto label_20bd2c;
    }
    ctx->pc = 0x20BD24u;
    SET_GPR_U32(ctx, 31, 0x20BD2Cu);
    ctx->pc = 0x20AA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AA90u, 0x20BD24u, 0x20BD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BD2Cu;
label_20bd2c:
    // 0x20bd2c: 0xc4540004  lwc1        $f20, 0x4($v0)
    ctx->pc = 0x20bd2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_20bd30:
    // 0x20bd30: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x20bd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20bd34:
    // 0x20bd34: 0x244300b8  addiu       $v1, $v0, 0xB8
    ctx->pc = 0x20bd34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
label_20bd38:
    // 0x20bd38: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x20bd38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_20bd3c:
    // 0x20bd3c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20bd3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20bd40:
    // 0x20bd40: 0xc05f1a8  jal         func_17C6A0
label_20bd44:
    if (ctx->pc == 0x20BD44u) {
        ctx->pc = 0x20BD48u;
        goto label_20bd48;
    }
    ctx->pc = 0x20BD40u;
    SET_GPR_U32(ctx, 31, 0x20BD48u);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x20BD40u, 0x20BD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BD48u;
label_20bd48:
    // 0x20bd48: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x20bd48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_20bd4c:
    // 0x20bd4c: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x20bd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20bd50:
    // 0x20bd50: 0xc46200ec  lwc1        $f2, 0xEC($v1)
    ctx->pc = 0x20bd50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20bd54:
    // 0x20bd54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20bd54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20bd58:
    // 0x20bd58: 0x0  nop
    ctx->pc = 0x20bd58u;
    // NOP
label_20bd5c:
    // 0x20bd5c: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x20bd5cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[2]));
label_20bd60:
    // 0x20bd60: 0x4603a05c  madd.s      $f1, $f20, $f3
    ctx->pc = 0x20bd60u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[20], ctx->f[3]));
label_20bd64:
    // 0x20bd64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20bd64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20bd68:
    // 0x20bd68: 0x0  nop
    ctx->pc = 0x20bd68u;
    // NOP
label_20bd6c:
    // 0x20bd6c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x20bd6cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_20bd70:
    // 0x20bd70: 0x4615b51c  madd.s      $f20, $f22, $f21
    ctx->pc = 0x20bd70u;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[22], ctx->f[21]));
label_20bd74:
    // 0x20bd74: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x20bd74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20bd78:
    // 0x20bd78: 0x244400c4  addiu       $a0, $v0, 0xC4
    ctx->pc = 0x20bd78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 196));
label_20bd7c:
    // 0x20bd7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20bd7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20bd80:
    // 0x20bd80: 0xc082aa4  jal         func_20AA90
label_20bd84:
    if (ctx->pc == 0x20BD84u) {
        ctx->pc = 0x20BD88u;
        goto label_20bd88;
    }
    ctx->pc = 0x20BD80u;
    SET_GPR_U32(ctx, 31, 0x20BD88u);
    ctx->pc = 0x20AA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AA90u, 0x20BD80u, 0x20BD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BD88u;
label_20bd88:
    // 0x20bd88: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x20bd88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_20bd8c:
    // 0x20bd8c: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x20bd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20bd90:
    // 0x20bd90: 0x248500d0  addiu       $a1, $a0, 0xD0
    ctx->pc = 0x20bd90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
label_20bd94:
    // 0x20bd94: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x20bd94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20bd98:
    // 0x20bd98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20bd98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20bd9c:
    // 0x20bd9c: 0xc082aa4  jal         func_20AA90
label_20bda0:
    if (ctx->pc == 0x20BDA0u) {
        ctx->pc = 0x20BDA4u;
        goto label_20bda4;
    }
    ctx->pc = 0x20BD9Cu;
    SET_GPR_U32(ctx, 31, 0x20BDA4u);
    ctx->pc = 0x20AA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AA90u, 0x20BD9Cu, 0x20BDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BDA4u;
label_20bda4:
    // 0x20bda4: 0xc4540008  lwc1        $f20, 0x8($v0)
    ctx->pc = 0x20bda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_20bda8:
    // 0x20bda8: 0x8fa701f0  lw          $a3, 0x1F0($sp)
    ctx->pc = 0x20bda8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20bdac:
    // 0x20bdac: 0x24e400b8  addiu       $a0, $a3, 0xB8
    ctx->pc = 0x20bdacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 184));
label_20bdb0:
    // 0x20bdb0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20bdb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20bdb4:
    // 0x20bdb4: 0xc05f1a8  jal         func_17C6A0
label_20bdb8:
    if (ctx->pc == 0x20BDB8u) {
        ctx->pc = 0x20BDBCu;
        goto label_20bdbc;
    }
    ctx->pc = 0x20BDB4u;
    SET_GPR_U32(ctx, 31, 0x20BDBCu);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x20BDB4u, 0x20BDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BDBCu;
label_20bdbc:
    // 0x20bdbc: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x20bdbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20bdc0:
    // 0x20bdc0: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x20bdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20bdc4:
    // 0x20bdc4: 0xc46100f0  lwc1        $f1, 0xF0($v1)
    ctx->pc = 0x20bdc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20bdc8:
    // 0x20bdc8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20bdc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20bdcc:
    // 0x20bdcc: 0x0  nop
    ctx->pc = 0x20bdccu;
    // NOP
label_20bdd0:
    // 0x20bdd0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x20bdd0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_20bdd4:
    // 0x20bdd4: 0x4602a51c  madd.s      $f20, $f20, $f2
    ctx->pc = 0x20bdd4u;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[20], ctx->f[2]));
label_20bdd8:
    // 0x20bdd8: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x20bdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20bddc:
    // 0x20bddc: 0x244400c4  addiu       $a0, $v0, 0xC4
    ctx->pc = 0x20bddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 196));
label_20bde0:
    // 0x20bde0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20bde0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20bde4:
    // 0x20bde4: 0xc082aa4  jal         func_20AA90
label_20bde8:
    if (ctx->pc == 0x20BDE8u) {
        ctx->pc = 0x20BDECu;
        goto label_20bdec;
    }
    ctx->pc = 0x20BDE4u;
    SET_GPR_U32(ctx, 31, 0x20BDECu);
    ctx->pc = 0x20AA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AA90u, 0x20BDE4u, 0x20BDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BDECu;
label_20bdec:
    // 0x20bdec: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x20bdecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_20bdf0:
    // 0x20bdf0: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x20bdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20bdf4:
    // 0x20bdf4: 0x248500c4  addiu       $a1, $a0, 0xC4
    ctx->pc = 0x20bdf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 196));
label_20bdf8:
    // 0x20bdf8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x20bdf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20bdfc:
    // 0x20bdfc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20bdfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20be00:
    // 0x20be00: 0xc082aa4  jal         func_20AA90
label_20be04:
    if (ctx->pc == 0x20BE04u) {
        ctx->pc = 0x20BE08u;
        goto label_20be08;
    }
    ctx->pc = 0x20BE00u;
    SET_GPR_U32(ctx, 31, 0x20BE08u);
    ctx->pc = 0x20AA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AA90u, 0x20BE00u, 0x20BE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BE08u;
label_20be08:
    // 0x20be08: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x20be08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20be0c:
    // 0x20be0c: 0x8fb601f0  lw          $s6, 0x1F0($sp)
    ctx->pc = 0x20be0cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20be10:
    // 0x20be10: 0xc6c000a8  lwc1        $f0, 0xA8($s6)
    ctx->pc = 0x20be10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20be14:
    // 0x20be14: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20be14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20be18:
    // 0x20be18: 0x450002e2  bc1f        . + 4 + (0x2E2 << 2)
label_20be1c:
    if (ctx->pc == 0x20BE1Cu) {
        ctx->pc = 0x20BE20u;
        goto label_20be20;
    }
    ctx->pc = 0x20BE18u;
    {
        const bool branch_taken_0x20be18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20be18) {
            ctx->pc = 0x20C9A4u;
            goto label_20c9a4;
        }
    }
    ctx->pc = 0x20BE20u;
label_20be20:
    // 0x20be20: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x20be20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20be24:
    // 0x20be24: 0x246500c4  addiu       $a1, $v1, 0xC4
    ctx->pc = 0x20be24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 196));
label_20be28:
    // 0x20be28: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x20be28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20be2c:
    // 0x20be2c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20be2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20be30:
    // 0x20be30: 0xc082aa4  jal         func_20AA90
label_20be34:
    if (ctx->pc == 0x20BE34u) {
        ctx->pc = 0x20BE38u;
        goto label_20be38;
    }
    ctx->pc = 0x20BE30u;
    SET_GPR_U32(ctx, 31, 0x20BE38u);
    ctx->pc = 0x20AA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AA90u, 0x20BE30u, 0x20BE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BE38u;
label_20be38:
    // 0x20be38: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x20be38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_20be3c:
    // 0x20be3c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20be3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20be40:
    // 0x20be40: 0x27a601e0  addiu       $a2, $sp, 0x1E0
    ctx->pc = 0x20be40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_20be44:
    // 0x20be44: 0xc122db4  jal         func_48B6D0
label_20be48:
    if (ctx->pc == 0x20BE48u) {
        ctx->pc = 0x20BE4Cu;
        goto label_20be4c;
    }
    ctx->pc = 0x20BE44u;
    SET_GPR_U32(ctx, 31, 0x20BE4Cu);
    ctx->pc = 0x48B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B6D0u, 0x20BE44u, 0x20BE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BE4Cu;
label_20be4c:
    // 0x20be4c: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x20be4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20be50:
    // 0x20be50: 0x8c640110  lw          $a0, 0x110($v1)
    ctx->pc = 0x20be50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
label_20be54:
    // 0x20be54: 0xc123428  jal         func_48D0A0
label_20be58:
    if (ctx->pc == 0x20BE58u) {
        ctx->pc = 0x20BE5Cu;
        goto label_20be5c;
    }
    ctx->pc = 0x20BE54u;
    SET_GPR_U32(ctx, 31, 0x20BE5Cu);
    ctx->pc = 0x48D0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48D0A0u, 0x20BE54u, 0x20BE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BE5Cu;
label_20be5c:
    // 0x20be5c: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x20be5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
label_20be60:
    // 0x20be60: 0x8fa601f0  lw          $a2, 0x1F0($sp)
    ctx->pc = 0x20be60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20be64:
    // 0x20be64: 0x24c700c4  addiu       $a3, $a2, 0xC4
    ctx->pc = 0x20be64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 196));
label_20be68:
    // 0x20be68: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x20be68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_20be6c:
    // 0x20be6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20be6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20be70:
    // 0x20be70: 0xc082aa4  jal         func_20AA90
label_20be74:
    if (ctx->pc == 0x20BE74u) {
        ctx->pc = 0x20BE78u;
        goto label_20be78;
    }
    ctx->pc = 0x20BE70u;
    SET_GPR_U32(ctx, 31, 0x20BE78u);
    ctx->pc = 0x20AA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AA90u, 0x20BE70u, 0x20BE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BE78u;
label_20be78:
    // 0x20be78: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x20be78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_20be7c:
    // 0x20be7c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20be7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20be80:
    // 0x20be80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20be80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20be84:
    // 0x20be84: 0xc106598  jal         func_419660
label_20be88:
    if (ctx->pc == 0x20BE88u) {
        ctx->pc = 0x20BE8Cu;
        goto label_20be8c;
    }
    ctx->pc = 0x20BE84u;
    SET_GPR_U32(ctx, 31, 0x20BE8Cu);
    ctx->pc = 0x419660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419660u, 0x20BE84u, 0x20BE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BE8Cu;
label_20be8c:
    // 0x20be8c: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x20be8cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20be90:
    // 0x20be90: 0x8f85bb80  lw          $a1, -0x4480($gp)
    ctx->pc = 0x20be90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_20be94:
    // 0x20be94: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x20be94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_20be98:
    // 0x20be98: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_20be9c:
    if (ctx->pc == 0x20BE9Cu) {
        ctx->pc = 0x20BEA0u;
        goto label_20bea0;
    }
    ctx->pc = 0x20BE98u;
    {
        const bool branch_taken_0x20be98 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x20be98) {
            ctx->pc = 0x20BEB4u;
            goto label_20beb4;
        }
    }
    ctx->pc = 0x20BEA0u;
label_20bea0:
    // 0x20bea0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20bea0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20bea4:
    // 0x20bea4: 0x0  nop
    ctx->pc = 0x20bea4u;
    // NOP
label_20bea8:
    // 0x20bea8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x20bea8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_20beac:
    // 0x20beac: 0x10000008  b           . + 4 + (0x8 << 2)
label_20beb0:
    if (ctx->pc == 0x20BEB0u) {
        ctx->pc = 0x20BEB4u;
        goto label_20beb4;
    }
    ctx->pc = 0x20BEACu;
    {
        const bool branch_taken_0x20beac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20beac) {
            ctx->pc = 0x20BED0u;
            goto label_20bed0;
        }
    }
    ctx->pc = 0x20BEB4u;
label_20beb4:
    // 0x20beb4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x20beb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_20beb8:
    // 0x20beb8: 0x30440001  andi        $a0, $v0, 0x1
    ctx->pc = 0x20beb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_20bebc:
    // 0x20bebc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x20bebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_20bec0:
    // 0x20bec0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20bec0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20bec4:
    // 0x20bec4: 0x0  nop
    ctx->pc = 0x20bec4u;
    // NOP
label_20bec8:
    // 0x20bec8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x20bec8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_20becc:
    // 0x20becc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x20beccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_20bed0:
    // 0x20bed0: 0x3c054420  lui         $a1, 0x4420
    ctx->pc = 0x20bed0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17440 << 16));
label_20bed4:
    // 0x20bed4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x20bed4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20bed8:
    // 0x20bed8: 0x0  nop
    ctx->pc = 0x20bed8u;
    // NOP
label_20bedc:
    // 0x20bedc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x20bedcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_20bee0:
    // 0x20bee0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x20bee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_20bee4:
    // 0x20bee4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20bee4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20bee8:
    // 0x20bee8: 0x0  nop
    ctx->pc = 0x20bee8u;
    // NOP
label_20beec:
    // 0x20beec: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x20beecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_20bef0:
    // 0x20bef0: 0xc7a001e0  lwc1        $f0, 0x1E0($sp)
    ctx->pc = 0x20bef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20bef4:
    // 0x20bef4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x20bef4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20bef8:
    // 0x20bef8: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
label_20befc:
    if (ctx->pc == 0x20BEFCu) {
        ctx->pc = 0x20BF00u;
        goto label_20bf00;
    }
    ctx->pc = 0x20BEF8u;
    {
        const bool branch_taken_0x20bef8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20bef8) {
            ctx->pc = 0x20BF70u;
            goto label_20bf70;
        }
    }
    ctx->pc = 0x20BF00u;
label_20bf00:
    // 0x20bf00: 0x8f91bb80  lw          $s1, -0x4480($gp)
    ctx->pc = 0x20bf00u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_20bf04:
    // 0x20bf04: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x20bf04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_20bf08:
    // 0x20bf08: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_20bf0c:
    if (ctx->pc == 0x20BF0Cu) {
        ctx->pc = 0x20BF10u;
        goto label_20bf10;
    }
    ctx->pc = 0x20BF08u;
    {
        const bool branch_taken_0x20bf08 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x20bf08) {
            ctx->pc = 0x20BF24u;
            goto label_20bf24;
        }
    }
    ctx->pc = 0x20BF10u;
label_20bf10:
    // 0x20bf10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20bf10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20bf14:
    // 0x20bf14: 0x0  nop
    ctx->pc = 0x20bf14u;
    // NOP
label_20bf18:
    // 0x20bf18: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x20bf18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_20bf1c:
    // 0x20bf1c: 0x10000008  b           . + 4 + (0x8 << 2)
label_20bf20:
    if (ctx->pc == 0x20BF20u) {
        ctx->pc = 0x20BF24u;
        goto label_20bf24;
    }
    ctx->pc = 0x20BF1Cu;
    {
        const bool branch_taken_0x20bf1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20bf1c) {
            ctx->pc = 0x20BF40u;
            goto label_20bf40;
        }
    }
    ctx->pc = 0x20BF24u;
label_20bf24:
    // 0x20bf24: 0x22042  srl         $a0, $v0, 1
    ctx->pc = 0x20bf24u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_20bf28:
    // 0x20bf28: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20bf28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_20bf2c:
    // 0x20bf2c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x20bf2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_20bf30:
    // 0x20bf30: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x20bf30u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20bf34:
    // 0x20bf34: 0x0  nop
    ctx->pc = 0x20bf34u;
    // NOP
label_20bf38:
    // 0x20bf38: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x20bf38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_20bf3c:
    // 0x20bf3c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x20bf3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_20bf40:
    // 0x20bf40: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x20bf40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
label_20bf44:
    // 0x20bf44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20bf44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20bf48:
    // 0x20bf48: 0x0  nop
    ctx->pc = 0x20bf48u;
    // NOP
label_20bf4c:
    // 0x20bf4c: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x20bf4cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_20bf50:
    // 0x20bf50: 0x3c0443dc  lui         $a0, 0x43DC
    ctx->pc = 0x20bf50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17372 << 16));
label_20bf54:
    // 0x20bf54: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x20bf54u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_20bf58:
    // 0x20bf58: 0x0  nop
    ctx->pc = 0x20bf58u;
    // NOP
label_20bf5c:
    // 0x20bf5c: 0x46031042  mul.s       $f1, $f2, $f3
    ctx->pc = 0x20bf5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_20bf60:
    // 0x20bf60: 0xc7a001e0  lwc1        $f0, 0x1E0($sp)
    ctx->pc = 0x20bf60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20bf64:
    // 0x20bf64: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x20bf64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20bf68:
    // 0x20bf68: 0x450100a9  bc1t        . + 4 + (0xA9 << 2)
label_20bf6c:
    if (ctx->pc == 0x20BF6Cu) {
        ctx->pc = 0x20BF70u;
        goto label_20bf70;
    }
    ctx->pc = 0x20BF68u;
    {
        const bool branch_taken_0x20bf68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20bf68) {
            ctx->pc = 0x20C210u;
            goto label_20c210;
        }
    }
    ctx->pc = 0x20BF70u;
label_20bf70:
    // 0x20bf70: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x20bf70u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20bf74:
    // 0x20bf74: 0x8f82bb68  lw          $v0, -0x4498($gp)
    ctx->pc = 0x20bf74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949736)));
label_20bf78:
    // 0x20bf78: 0x14400099  bnez        $v0, . + 4 + (0x99 << 2)
label_20bf7c:
    if (ctx->pc == 0x20BF7Cu) {
        ctx->pc = 0x20BF80u;
        goto label_20bf80;
    }
    ctx->pc = 0x20BF78u;
    {
        const bool branch_taken_0x20bf78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20bf78) {
            ctx->pc = 0x20C1E0u;
            goto label_20c1e0;
        }
    }
    ctx->pc = 0x20BF80u;
label_20bf80:
    // 0x20bf80: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x20bf80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20bf84:
    // 0x20bf84: 0x246400c4  addiu       $a0, $v1, 0xC4
    ctx->pc = 0x20bf84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 196));
label_20bf88:
    // 0x20bf88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20bf88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20bf8c:
    // 0x20bf8c: 0xc082aa4  jal         func_20AA90
label_20bf90:
    if (ctx->pc == 0x20BF90u) {
        ctx->pc = 0x20BF94u;
        goto label_20bf94;
    }
    ctx->pc = 0x20BF8Cu;
    SET_GPR_U32(ctx, 31, 0x20BF94u);
    ctx->pc = 0x20AA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AA90u, 0x20BF8Cu, 0x20BF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BF94u;
label_20bf94:
    // 0x20bf94: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x20bf94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20bf98:
    // 0x20bf98: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x20bf98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_20bf9c:
    // 0x20bf9c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x20bf9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_20bfa0:
    // 0x20bfa0: 0x0  nop
    ctx->pc = 0x20bfa0u;
    // NOP
label_20bfa4:
    // 0x20bfa4: 0x46030081  sub.s       $f2, $f0, $f3
    ctx->pc = 0x20bfa4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_20bfa8:
    // 0x20bfa8: 0xe7a201b8  swc1        $f2, 0x1B8($sp)
    ctx->pc = 0x20bfa8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
label_20bfac:
    // 0x20bfac: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x20bfacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20bfb0:
    // 0x20bfb0: 0xc46100a8  lwc1        $f1, 0xA8($v1)
    ctx->pc = 0x20bfb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20bfb4:
    // 0x20bfb4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20bfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_20bfb8:
    // 0x20bfb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20bfb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20bfbc:
    // 0x20bfbc: 0x0  nop
    ctx->pc = 0x20bfbcu;
    // NOP
label_20bfc0:
    // 0x20bfc0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20bfc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_20bfc4:
    // 0x20bfc4: 0xe7a001bc  swc1        $f0, 0x1BC($sp)
    ctx->pc = 0x20bfc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 444), bits); }
label_20bfc8:
    // 0x20bfc8: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x20bfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20bfcc:
    // 0x20bfcc: 0x248400c4  addiu       $a0, $a0, 0xC4
    ctx->pc = 0x20bfccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 196));
label_20bfd0:
    // 0x20bfd0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20bfd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20bfd4:
    // 0x20bfd4: 0xc082aa4  jal         func_20AA90
label_20bfd8:
    if (ctx->pc == 0x20BFD8u) {
        ctx->pc = 0x20BFDCu;
        goto label_20bfdc;
    }
    ctx->pc = 0x20BFD4u;
    SET_GPR_U32(ctx, 31, 0x20BFDCu);
    ctx->pc = 0x20AA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AA90u, 0x20BFD4u, 0x20BFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BFDCu;
label_20bfdc:
    // 0x20bfdc: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x20bfdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20bfe0:
    // 0x20bfe0: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x20bfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_20bfe4:
    // 0x20bfe4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x20bfe4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20bfe8:
    // 0x20bfe8: 0x0  nop
    ctx->pc = 0x20bfe8u;
    // NOP
label_20bfec:
    // 0x20bfec: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x20bfecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_20bff0:
    // 0x20bff0: 0xe7a001c0  swc1        $f0, 0x1C0($sp)
    ctx->pc = 0x20bff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
label_20bff4:
    // 0x20bff4: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x20bff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20bff8:
    // 0x20bff8: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x20bff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_20bffc:
    // 0x20bffc: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x20bffcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_20c000:
    // 0x20c000: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x20c000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_20c004:
    // 0x20c004: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x20c004u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_20c008:
    // 0x20c008: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x20c008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20c00c:
    // 0x20c00c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x20c00cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_20c010:
    // 0x20c010: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x20c010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20c014:
    // 0x20c014: 0x8c820100  lw          $v0, 0x100($a0)
    ctx->pc = 0x20c014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
label_20c018:
    // 0x20c018: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x20c018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20c01c:
    // 0x20c01c: 0x27a501b8  addiu       $a1, $sp, 0x1B8
    ctx->pc = 0x20c01cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
label_20c020:
    // 0x20c020: 0xc041d58  jal         func_107560
label_20c024:
    if (ctx->pc == 0x20C024u) {
        ctx->pc = 0x20C028u;
        goto label_20c028;
    }
    ctx->pc = 0x20C020u;
    SET_GPR_U32(ctx, 31, 0x20C028u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x20C020u, 0x20C028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C028u;
label_20c028:
    // 0x20c028: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x20c028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20c02c:
    // 0x20c02c: 0x244400c4  addiu       $a0, $v0, 0xC4
    ctx->pc = 0x20c02cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 196));
label_20c030:
    // 0x20c030: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20c030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20c034:
    // 0x20c034: 0xc082aa4  jal         func_20AA90
label_20c038:
    if (ctx->pc == 0x20C038u) {
        ctx->pc = 0x20C03Cu;
        goto label_20c03c;
    }
    ctx->pc = 0x20C034u;
    SET_GPR_U32(ctx, 31, 0x20C03Cu);
    ctx->pc = 0x20AA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AA90u, 0x20C034u, 0x20C03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C03Cu;
label_20c03c:
    // 0x20c03c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x20c03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20c040:
    // 0x20c040: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x20c040u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_20c044:
    // 0x20c044: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x20c044u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20c048:
    // 0x20c048: 0x0  nop
    ctx->pc = 0x20c048u;
    // NOP
label_20c04c:
    // 0x20c04c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x20c04cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_20c050:
    // 0x20c050: 0xe7a001a8  swc1        $f0, 0x1A8($sp)
    ctx->pc = 0x20c050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
label_20c054:
    // 0x20c054: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x20c054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20c058:
    // 0x20c058: 0xc44100a8  lwc1        $f1, 0xA8($v0)
    ctx->pc = 0x20c058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20c05c:
    // 0x20c05c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20c05cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_20c060:
    // 0x20c060: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20c060u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20c064:
    // 0x20c064: 0x0  nop
    ctx->pc = 0x20c064u;
    // NOP
label_20c068:
    // 0x20c068: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20c068u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_20c06c:
    // 0x20c06c: 0xe7a001ac  swc1        $f0, 0x1AC($sp)
    ctx->pc = 0x20c06cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 428), bits); }
label_20c070:
    // 0x20c070: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x20c070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20c074:
    // 0x20c074: 0x244400c4  addiu       $a0, $v0, 0xC4
    ctx->pc = 0x20c074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 196));
label_20c078:
    // 0x20c078: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20c078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20c07c:
    // 0x20c07c: 0xc082aa4  jal         func_20AA90
label_20c080:
    if (ctx->pc == 0x20C080u) {
        ctx->pc = 0x20C084u;
        goto label_20c084;
    }
    ctx->pc = 0x20C07Cu;
    SET_GPR_U32(ctx, 31, 0x20C084u);
    ctx->pc = 0x20AA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AA90u, 0x20C07Cu, 0x20C084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C084u;
label_20c084:
    // 0x20c084: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x20c084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20c088:
    // 0x20c088: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x20c088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
label_20c08c:
    // 0x20c08c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20c08cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20c090:
    // 0x20c090: 0x0  nop
    ctx->pc = 0x20c090u;
    // NOP
label_20c094:
    // 0x20c094: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20c094u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_20c098:
    // 0x20c098: 0xe7a001b0  swc1        $f0, 0x1B0($sp)
    ctx->pc = 0x20c098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
label_20c09c:
    // 0x20c09c: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x20c09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20c0a0:
    // 0x20c0a0: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x20c0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_20c0a4:
    // 0x20c0a4: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x20c0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_20c0a8:
    // 0x20c0a8: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x20c0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_20c0ac:
    // 0x20c0ac: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x20c0acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20c0b0:
    // 0x20c0b0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x20c0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_20c0b4:
    // 0x20c0b4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x20c0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20c0b8:
    // 0x20c0b8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x20c0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_20c0bc:
    // 0x20c0bc: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x20c0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20c0c0:
    // 0x20c0c0: 0x8c830100  lw          $v1, 0x100($a0)
    ctx->pc = 0x20c0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
label_20c0c4:
    // 0x20c0c4: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x20c0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20c0c8:
    // 0x20c0c8: 0x27a501a8  addiu       $a1, $sp, 0x1A8
    ctx->pc = 0x20c0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
label_20c0cc:
    // 0x20c0cc: 0xc041d58  jal         func_107560
label_20c0d0:
    if (ctx->pc == 0x20C0D0u) {
        ctx->pc = 0x20C0D4u;
        goto label_20c0d4;
    }
    ctx->pc = 0x20C0CCu;
    SET_GPR_U32(ctx, 31, 0x20C0D4u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x20C0CCu, 0x20C0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C0D4u;
label_20c0d4:
    // 0x20c0d4: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x20c0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20c0d8:
    // 0x20c0d8: 0x244400c4  addiu       $a0, $v0, 0xC4
    ctx->pc = 0x20c0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 196));
label_20c0dc:
    // 0x20c0dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20c0dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20c0e0:
    // 0x20c0e0: 0xc082aa4  jal         func_20AA90
label_20c0e4:
    if (ctx->pc == 0x20C0E4u) {
        ctx->pc = 0x20C0E8u;
        goto label_20c0e8;
    }
    ctx->pc = 0x20C0E0u;
    SET_GPR_U32(ctx, 31, 0x20C0E8u);
    ctx->pc = 0x20AA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AA90u, 0x20C0E0u, 0x20C0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C0E8u;
label_20c0e8:
    // 0x20c0e8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x20c0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20c0ec:
    // 0x20c0ec: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x20c0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
label_20c0f0:
    // 0x20c0f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20c0f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20c0f4:
    // 0x20c0f4: 0x0  nop
    ctx->pc = 0x20c0f4u;
    // NOP
label_20c0f8:
    // 0x20c0f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20c0f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_20c0fc:
    // 0x20c0fc: 0xe7a00198  swc1        $f0, 0x198($sp)
    ctx->pc = 0x20c0fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
label_20c100:
    // 0x20c100: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x20c100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20c104:
    // 0x20c104: 0xc44100a8  lwc1        $f1, 0xA8($v0)
    ctx->pc = 0x20c104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20c108:
    // 0x20c108: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x20c108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_20c10c:
    // 0x20c10c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20c10cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20c110:
    // 0x20c110: 0x0  nop
    ctx->pc = 0x20c110u;
    // NOP
label_20c114:
    // 0x20c114: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20c114u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_20c118:
    // 0x20c118: 0xe7a0019c  swc1        $f0, 0x19C($sp)
    ctx->pc = 0x20c118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 412), bits); }
label_20c11c:
    // 0x20c11c: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x20c11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20c120:
    // 0x20c120: 0x244400c4  addiu       $a0, $v0, 0xC4
    ctx->pc = 0x20c120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 196));
label_20c124:
    // 0x20c124: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20c124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20c128:
    // 0x20c128: 0xc082aa4  jal         func_20AA90
label_20c12c:
    if (ctx->pc == 0x20C12Cu) {
        ctx->pc = 0x20C130u;
        goto label_20c130;
    }
    ctx->pc = 0x20C128u;
    SET_GPR_U32(ctx, 31, 0x20C130u);
    ctx->pc = 0x20AA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AA90u, 0x20C128u, 0x20C130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C130u;
label_20c130:
    // 0x20c130: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x20c130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20c134:
    // 0x20c134: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x20c134u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_20c138:
    // 0x20c138: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x20c138u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20c13c:
    // 0x20c13c: 0x0  nop
    ctx->pc = 0x20c13cu;
    // NOP
label_20c140:
    // 0x20c140: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x20c140u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_20c144:
    // 0x20c144: 0xe7a001a0  swc1        $f0, 0x1A0($sp)
    ctx->pc = 0x20c144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_20c148:
    // 0x20c148: 0x8fa601f0  lw          $a2, 0x1F0($sp)
    ctx->pc = 0x20c148u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20c14c:
    // 0x20c14c: 0x8cc7010c  lw          $a3, 0x10C($a2)
    ctx->pc = 0x20c14cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 268)));
label_20c150:
    // 0x20c150: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x20c150u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_20c154:
    // 0x20c154: 0x472021  addu        $a0, $v0, $a3
    ctx->pc = 0x20c154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_20c158:
    // 0x20c158: 0x24850002  addiu       $a1, $a0, 0x2
    ctx->pc = 0x20c158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_20c15c:
    // 0x20c15c: 0x530c0  sll         $a2, $a1, 3
    ctx->pc = 0x20c15cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_20c160:
    // 0x20c160: 0xc53821  addu        $a3, $a2, $a1
    ctx->pc = 0x20c160u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_20c164:
    // 0x20c164: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x20c164u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_20c168:
    // 0x20c168: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x20c168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20c16c:
    // 0x20c16c: 0x8c640100  lw          $a0, 0x100($v1)
    ctx->pc = 0x20c16cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
label_20c170:
    // 0x20c170: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x20c170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_20c174:
    // 0x20c174: 0x27a50198  addiu       $a1, $sp, 0x198
    ctx->pc = 0x20c174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
label_20c178:
    // 0x20c178: 0xc041d58  jal         func_107560
label_20c17c:
    if (ctx->pc == 0x20C17Cu) {
        ctx->pc = 0x20C180u;
        goto label_20c180;
    }
    ctx->pc = 0x20C178u;
    SET_GPR_U32(ctx, 31, 0x20C180u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x20C178u, 0x20C180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C180u;
label_20c180:
    // 0x20c180: 0x3c04437f  lui         $a0, 0x437F
    ctx->pc = 0x20c180u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17279 << 16));
label_20c184:
    // 0x20c184: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x20c184u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20c188:
    // 0x20c188: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x20c188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20c18c:
    // 0x20c18c: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x20c18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20c190:
    // 0x20c190: 0x8c63010c  lw          $v1, 0x10C($v1)
    ctx->pc = 0x20c190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_20c194:
    // 0x20c194: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20c194u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_20c198:
    // 0x20c198: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x20c198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
label_20c19c:
    // 0x20c19c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20c19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20c1a0:
    // 0x20c1a0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x20c1a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_20c1a4:
    // 0x20c1a4: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x20c1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20c1a8:
    // 0x20c1a8: 0x8c44010c  lw          $a0, 0x10C($v0)
    ctx->pc = 0x20c1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_20c1ac:
    // 0x20c1ac: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x20c1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_20c1b0:
    // 0x20c1b0: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x20c1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_20c1b4:
    // 0x20c1b4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x20c1b4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_20c1b8:
    // 0x20c1b8: 0x1810  mfhi        $v1
    ctx->pc = 0x20c1b8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_20c1bc:
    // 0x20c1bc: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x20c1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20c1c0:
    // 0x20c1c0: 0xac43010c  sw          $v1, 0x10C($v0)
    ctx->pc = 0x20c1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 268), GPR_U32(ctx, 3));
label_20c1c4:
    // 0x20c1c4: 0x8f84bb68  lw          $a0, -0x4498($gp)
    ctx->pc = 0x20c1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949736)));
label_20c1c8:
    // 0x20c1c8: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x20c1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_20c1cc:
    // 0x20c1cc: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x20c1ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_20c1d0:
    // 0x20c1d0: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x20c1d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_20c1d4:
    // 0x20c1d4: 0xaf82bb68  sw          $v0, -0x4498($gp)
    ctx->pc = 0x20c1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949736), GPR_U32(ctx, 2));
label_20c1d8:
    // 0x20c1d8: 0x10000084  b           . + 4 + (0x84 << 2)
label_20c1dc:
    if (ctx->pc == 0x20C1DCu) {
        ctx->pc = 0x20C1E0u;
        goto label_20c1e0;
    }
    ctx->pc = 0x20C1D8u;
    {
        const bool branch_taken_0x20c1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c1d8) {
            ctx->pc = 0x20C3ECu;
            goto label_20c3ec;
        }
    }
    ctx->pc = 0x20C1E0u;
label_20c1e0:
    // 0x20c1e0: 0x8f82bb68  lw          $v0, -0x4498($gp)
    ctx->pc = 0x20c1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949736)));
label_20c1e4:
    // 0x20c1e4: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x20c1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_20c1e8:
    // 0x20c1e8: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
label_20c1ec:
    if (ctx->pc == 0x20C1ECu) {
        ctx->pc = 0x20C1F0u;
        goto label_20c1f0;
    }
    ctx->pc = 0x20C1E8u;
    {
        const bool branch_taken_0x20c1e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x20c1e8) {
            ctx->pc = 0x20C1FCu;
            goto label_20c1fc;
        }
    }
    ctx->pc = 0x20C1F0u;
label_20c1f0:
    // 0x20c1f0: 0xaf80bb68  sw          $zero, -0x4498($gp)
    ctx->pc = 0x20c1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949736), GPR_U32(ctx, 0));
label_20c1f4:
    // 0x20c1f4: 0x1000007d  b           . + 4 + (0x7D << 2)
label_20c1f8:
    if (ctx->pc == 0x20C1F8u) {
        ctx->pc = 0x20C1FCu;
        goto label_20c1fc;
    }
    ctx->pc = 0x20C1F4u;
    {
        const bool branch_taken_0x20c1f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c1f4) {
            ctx->pc = 0x20C3ECu;
            goto label_20c3ec;
        }
    }
    ctx->pc = 0x20C1FCu;
label_20c1fc:
    // 0x20c1fc: 0x8f85bb68  lw          $a1, -0x4498($gp)
    ctx->pc = 0x20c1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949736)));
label_20c200:
    // 0x20c200: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x20c200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_20c204:
    // 0x20c204: 0xaf82bb68  sw          $v0, -0x4498($gp)
    ctx->pc = 0x20c204u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949736), GPR_U32(ctx, 2));
label_20c208:
    // 0x20c208: 0x10000078  b           . + 4 + (0x78 << 2)
label_20c20c:
    if (ctx->pc == 0x20C20Cu) {
        ctx->pc = 0x20C210u;
        goto label_20c210;
    }
    ctx->pc = 0x20C208u;
    {
        const bool branch_taken_0x20c208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c208) {
            ctx->pc = 0x20C3ECu;
            goto label_20c3ec;
        }
    }
    ctx->pc = 0x20C210u;
label_20c210:
    // 0x20c210: 0x8f85bb80  lw          $a1, -0x4480($gp)
    ctx->pc = 0x20c210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_20c214:
    // 0x20c214: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x20c214u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_20c218:
    // 0x20c218: 0x4c00006  bltz        $a2, . + 4 + (0x6 << 2)
label_20c21c:
    if (ctx->pc == 0x20C21Cu) {
        ctx->pc = 0x20C220u;
        goto label_20c220;
    }
    ctx->pc = 0x20C218u;
    {
        const bool branch_taken_0x20c218 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x20c218) {
            ctx->pc = 0x20C234u;
            goto label_20c234;
        }
    }
    ctx->pc = 0x20C220u;
label_20c220:
    // 0x20c220: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x20c220u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20c224:
    // 0x20c224: 0x0  nop
    ctx->pc = 0x20c224u;
    // NOP
label_20c228:
    // 0x20c228: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x20c228u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_20c22c:
    // 0x20c22c: 0x10000008  b           . + 4 + (0x8 << 2)
label_20c230:
    if (ctx->pc == 0x20C230u) {
        ctx->pc = 0x20C234u;
        goto label_20c234;
    }
    ctx->pc = 0x20C22Cu;
    {
        const bool branch_taken_0x20c22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c22c) {
            ctx->pc = 0x20C250u;
            goto label_20c250;
        }
    }
    ctx->pc = 0x20C234u;
label_20c234:
    // 0x20c234: 0x61042  srl         $v0, $a2, 1
    ctx->pc = 0x20c234u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
label_20c238:
    // 0x20c238: 0x30c40001  andi        $a0, $a2, 0x1
    ctx->pc = 0x20c238u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_20c23c:
    // 0x20c23c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x20c23cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_20c240:
    // 0x20c240: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20c240u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20c244:
    // 0x20c244: 0x0  nop
    ctx->pc = 0x20c244u;
    // NOP
label_20c248:
    // 0x20c248: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x20c248u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_20c24c:
    // 0x20c24c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x20c24cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_20c250:
    // 0x20c250: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x20c250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
label_20c254:
    // 0x20c254: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x20c254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_20c258:
    // 0x20c258: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x20c258u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_20c25c:
    // 0x20c25c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20c25cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20c260:
    // 0x20c260: 0x0  nop
    ctx->pc = 0x20c260u;
    // NOP
label_20c264:
    // 0x20c264: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x20c264u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_20c268:
    // 0x20c268: 0x3c02438c  lui         $v0, 0x438C
    ctx->pc = 0x20c268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17292 << 16));
label_20c26c:
    // 0x20c26c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20c26cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20c270:
    // 0x20c270: 0x0  nop
    ctx->pc = 0x20c270u;
    // NOP
label_20c274:
    // 0x20c274: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x20c274u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_20c278:
    // 0x20c278: 0xc7a001e0  lwc1        $f0, 0x1E0($sp)
    ctx->pc = 0x20c278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20c27c:
    // 0x20c27c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x20c27cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20c280:
    // 0x20c280: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
label_20c284:
    if (ctx->pc == 0x20C284u) {
        ctx->pc = 0x20C288u;
        goto label_20c288;
    }
    ctx->pc = 0x20C280u;
    {
        const bool branch_taken_0x20c280 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20c280) {
            ctx->pc = 0x20C2F8u;
            goto label_20c2f8;
        }
    }
    ctx->pc = 0x20C288u;
label_20c288:
    // 0x20c288: 0x8f84bb80  lw          $a0, -0x4480($gp)
    ctx->pc = 0x20c288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_20c28c:
    // 0x20c28c: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x20c28cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_20c290:
    // 0x20c290: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_20c294:
    if (ctx->pc == 0x20C294u) {
        ctx->pc = 0x20C298u;
        goto label_20c298;
    }
    ctx->pc = 0x20C290u;
    {
        const bool branch_taken_0x20c290 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x20c290) {
            ctx->pc = 0x20C2ACu;
            goto label_20c2ac;
        }
    }
    ctx->pc = 0x20C298u;
label_20c298:
    // 0x20c298: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x20c298u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20c29c:
    // 0x20c29c: 0x0  nop
    ctx->pc = 0x20c29cu;
    // NOP
label_20c2a0:
    // 0x20c2a0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x20c2a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_20c2a4:
    // 0x20c2a4: 0x10000008  b           . + 4 + (0x8 << 2)
label_20c2a8:
    if (ctx->pc == 0x20C2A8u) {
        ctx->pc = 0x20C2ACu;
        goto label_20c2ac;
    }
    ctx->pc = 0x20C2A4u;
    {
        const bool branch_taken_0x20c2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c2a4) {
            ctx->pc = 0x20C2C8u;
            goto label_20c2c8;
        }
    }
    ctx->pc = 0x20C2ACu;
label_20c2ac:
    // 0x20c2ac: 0x51042  srl         $v0, $a1, 1
    ctx->pc = 0x20c2acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
label_20c2b0:
    // 0x20c2b0: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x20c2b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_20c2b4:
    // 0x20c2b4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x20c2b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_20c2b8:
    // 0x20c2b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20c2b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20c2bc:
    // 0x20c2bc: 0x0  nop
    ctx->pc = 0x20c2bcu;
    // NOP
label_20c2c0:
    // 0x20c2c0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x20c2c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_20c2c4:
    // 0x20c2c4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x20c2c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_20c2c8:
    // 0x20c2c8: 0x3c064420  lui         $a2, 0x4420
    ctx->pc = 0x20c2c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17440 << 16));
label_20c2cc:
    // 0x20c2cc: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x20c2ccu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20c2d0:
    // 0x20c2d0: 0x0  nop
    ctx->pc = 0x20c2d0u;
    // NOP
label_20c2d4:
    // 0x20c2d4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x20c2d4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_20c2d8:
    // 0x20c2d8: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x20c2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
label_20c2dc:
    // 0x20c2dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20c2dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20c2e0:
    // 0x20c2e0: 0x0  nop
    ctx->pc = 0x20c2e0u;
    // NOP
label_20c2e4:
    // 0x20c2e4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x20c2e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_20c2e8:
    // 0x20c2e8: 0xc7a001e0  lwc1        $f0, 0x1E0($sp)
    ctx->pc = 0x20c2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20c2ec:
    // 0x20c2ec: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x20c2ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20c2f0:
    // 0x20c2f0: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_20c2f4:
    if (ctx->pc == 0x20C2F4u) {
        ctx->pc = 0x20C2F8u;
        goto label_20c2f8;
    }
    ctx->pc = 0x20C2F0u;
    {
        const bool branch_taken_0x20c2f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20c2f0) {
            ctx->pc = 0x20C304u;
            goto label_20c304;
        }
    }
    ctx->pc = 0x20C2F8u;
label_20c2f8:
    // 0x20c2f8: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x20c2f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c2fc:
    // 0x20c2fc: 0x1000003b  b           . + 4 + (0x3B << 2)
label_20c300:
    if (ctx->pc == 0x20C300u) {
        ctx->pc = 0x20C304u;
        goto label_20c304;
    }
    ctx->pc = 0x20C2FCu;
    {
        const bool branch_taken_0x20c2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c2fc) {
            ctx->pc = 0x20C3ECu;
            goto label_20c3ec;
        }
    }
    ctx->pc = 0x20C304u;
label_20c304:
    // 0x20c304: 0x8f84bb80  lw          $a0, -0x4480($gp)
    ctx->pc = 0x20c304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_20c308:
    // 0x20c308: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x20c308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_20c30c:
    // 0x20c30c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_20c310:
    if (ctx->pc == 0x20C310u) {
        ctx->pc = 0x20C314u;
        goto label_20c314;
    }
    ctx->pc = 0x20C30Cu;
    {
        const bool branch_taken_0x20c30c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x20c30c) {
            ctx->pc = 0x20C328u;
            goto label_20c328;
        }
    }
    ctx->pc = 0x20C314u;
label_20c314:
    // 0x20c314: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20c314u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20c318:
    // 0x20c318: 0x0  nop
    ctx->pc = 0x20c318u;
    // NOP
label_20c31c:
    // 0x20c31c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x20c31cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_20c320:
    // 0x20c320: 0x10000008  b           . + 4 + (0x8 << 2)
label_20c324:
    if (ctx->pc == 0x20C324u) {
        ctx->pc = 0x20C328u;
        goto label_20c328;
    }
    ctx->pc = 0x20C320u;
    {
        const bool branch_taken_0x20c320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c320) {
            ctx->pc = 0x20C344u;
            goto label_20c344;
        }
    }
    ctx->pc = 0x20C328u;
label_20c328:
    // 0x20c328: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x20c328u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_20c32c:
    // 0x20c32c: 0x30440001  andi        $a0, $v0, 0x1
    ctx->pc = 0x20c32cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_20c330:
    // 0x20c330: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x20c330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_20c334:
    // 0x20c334: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20c334u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20c338:
    // 0x20c338: 0x0  nop
    ctx->pc = 0x20c338u;
    // NOP
label_20c33c:
    // 0x20c33c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x20c33cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_20c340:
    // 0x20c340: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x20c340u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_20c344:
    // 0x20c344: 0x3c054420  lui         $a1, 0x4420
    ctx->pc = 0x20c344u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17440 << 16));
label_20c348:
    // 0x20c348: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x20c348u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20c34c:
    // 0x20c34c: 0x0  nop
    ctx->pc = 0x20c34cu;
    // NOP
label_20c350:
    // 0x20c350: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x20c350u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_20c354:
    // 0x20c354: 0x3c02432a  lui         $v0, 0x432A
    ctx->pc = 0x20c354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17194 << 16));
label_20c358:
    // 0x20c358: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20c358u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20c35c:
    // 0x20c35c: 0x0  nop
    ctx->pc = 0x20c35cu;
    // NOP
label_20c360:
    // 0x20c360: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x20c360u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_20c364:
    // 0x20c364: 0xc7a001e4  lwc1        $f0, 0x1E4($sp)
    ctx->pc = 0x20c364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20c368:
    // 0x20c368: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x20c368u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20c36c:
    // 0x20c36c: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
label_20c370:
    if (ctx->pc == 0x20C370u) {
        ctx->pc = 0x20C374u;
        goto label_20c374;
    }
    ctx->pc = 0x20C36Cu;
    {
        const bool branch_taken_0x20c36c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20c36c) {
            ctx->pc = 0x20C3E4u;
            goto label_20c3e4;
        }
    }
    ctx->pc = 0x20C374u;
label_20c374:
    // 0x20c374: 0x8f83bb80  lw          $v1, -0x4480($gp)
    ctx->pc = 0x20c374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_20c378:
    // 0x20c378: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x20c378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_20c37c:
    // 0x20c37c: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
label_20c380:
    if (ctx->pc == 0x20C380u) {
        ctx->pc = 0x20C384u;
        goto label_20c384;
    }
    ctx->pc = 0x20C37Cu;
    {
        const bool branch_taken_0x20c37c = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x20c37c) {
            ctx->pc = 0x20C398u;
            goto label_20c398;
        }
    }
    ctx->pc = 0x20C384u;
label_20c384:
    // 0x20c384: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x20c384u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20c388:
    // 0x20c388: 0x0  nop
    ctx->pc = 0x20c388u;
    // NOP
label_20c38c:
    // 0x20c38c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x20c38cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_20c390:
    // 0x20c390: 0x10000008  b           . + 4 + (0x8 << 2)
label_20c394:
    if (ctx->pc == 0x20C394u) {
        ctx->pc = 0x20C398u;
        goto label_20c398;
    }
    ctx->pc = 0x20C390u;
    {
        const bool branch_taken_0x20c390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c390) {
            ctx->pc = 0x20C3B4u;
            goto label_20c3b4;
        }
    }
    ctx->pc = 0x20C398u;
label_20c398:
    // 0x20c398: 0x41042  srl         $v0, $a0, 1
    ctx->pc = 0x20c398u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_20c39c:
    // 0x20c39c: 0x30850001  andi        $a1, $a0, 0x1
    ctx->pc = 0x20c39cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_20c3a0:
    // 0x20c3a0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x20c3a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_20c3a4:
    // 0x20c3a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20c3a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20c3a8:
    // 0x20c3a8: 0x0  nop
    ctx->pc = 0x20c3a8u;
    // NOP
label_20c3ac:
    // 0x20c3ac: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x20c3acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_20c3b0:
    // 0x20c3b0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x20c3b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_20c3b4:
    // 0x20c3b4: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x20c3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
label_20c3b8:
    // 0x20c3b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20c3b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20c3bc:
    // 0x20c3bc: 0x0  nop
    ctx->pc = 0x20c3bcu;
    // NOP
label_20c3c0:
    // 0x20c3c0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x20c3c0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_20c3c4:
    // 0x20c3c4: 0x3c044387  lui         $a0, 0x4387
    ctx->pc = 0x20c3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17287 << 16));
label_20c3c8:
    // 0x20c3c8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x20c3c8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20c3cc:
    // 0x20c3cc: 0x0  nop
    ctx->pc = 0x20c3ccu;
    // NOP
label_20c3d0:
    // 0x20c3d0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x20c3d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_20c3d4:
    // 0x20c3d4: 0xc7a001e4  lwc1        $f0, 0x1E4($sp)
    ctx->pc = 0x20c3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20c3d8:
    // 0x20c3d8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x20c3d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20c3dc:
    // 0x20c3dc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_20c3e0:
    if (ctx->pc == 0x20C3E0u) {
        ctx->pc = 0x20C3E4u;
        goto label_20c3e4;
    }
    ctx->pc = 0x20C3DCu;
    {
        const bool branch_taken_0x20c3dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20c3dc) {
            ctx->pc = 0x20C3ECu;
            goto label_20c3ec;
        }
    }
    ctx->pc = 0x20C3E4u;
label_20c3e4:
    // 0x20c3e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c3e8:
    // 0x20c3e8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x20c3e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20c3ec:
    // 0x20c3ec: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x20c3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20c3f0:
    // 0x20c3f0: 0x8c42013c  lw          $v0, 0x13C($v0)
    ctx->pc = 0x20c3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 316)));
label_20c3f4:
    // 0x20c3f4: 0x1055006c  beq         $v0, $s5, . + 4 + (0x6C << 2)
label_20c3f8:
    if (ctx->pc == 0x20C3F8u) {
        ctx->pc = 0x20C3FCu;
        goto label_20c3fc;
    }
    ctx->pc = 0x20C3F4u;
    {
        const bool branch_taken_0x20c3f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x20c3f4) {
            ctx->pc = 0x20C5A8u;
            goto label_20c5a8;
        }
    }
    ctx->pc = 0x20C3FCu;
label_20c3fc:
    // 0x20c3fc: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x20c3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20c400:
    // 0x20c400: 0x8c440118  lw          $a0, 0x118($v0)
    ctx->pc = 0x20c400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 280)));
label_20c404:
    // 0x20c404: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_20c408:
    if (ctx->pc == 0x20C408u) {
        ctx->pc = 0x20C40Cu;
        goto label_20c40c;
    }
    ctx->pc = 0x20C404u;
    {
        const bool branch_taken_0x20c404 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c404) {
            ctx->pc = 0x20C424u;
            goto label_20c424;
        }
    }
    ctx->pc = 0x20C40Cu;
label_20c40c:
    // 0x20c40c: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x20c40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20c410:
    // 0x20c410: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x20c410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_20c414:
    // 0x20c414: 0x8c450118  lw          $a1, 0x118($v0)
    ctx->pc = 0x20c414u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 280)));
label_20c418:
    // 0x20c418: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20c418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c41c:
    // 0x20c41c: 0xc08f71c  jal         func_23DC70
label_20c420:
    if (ctx->pc == 0x20C420u) {
        ctx->pc = 0x20C424u;
        goto label_20c424;
    }
    ctx->pc = 0x20C41Cu;
    SET_GPR_U32(ctx, 31, 0x20C424u);
    ctx->pc = 0x23DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DC70u, 0x20C41Cu, 0x20C424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C424u;
label_20c424:
    // 0x20c424: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x20c424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20c428:
    // 0x20c428: 0xac55013c  sw          $s5, 0x13C($v0)
    ctx->pc = 0x20c428u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 316), GPR_U32(ctx, 21));
label_20c42c:
    // 0x20c42c: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x20c42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20c430:
    // 0x20c430: 0x8c43013c  lw          $v1, 0x13C($v0)
    ctx->pc = 0x20c430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 316)));
label_20c434:
    // 0x20c434: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20c434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20c438:
    // 0x20c438: 0x1062003a  beq         $v1, $v0, . + 4 + (0x3A << 2)
label_20c43c:
    if (ctx->pc == 0x20C43Cu) {
        ctx->pc = 0x20C440u;
        goto label_20c440;
    }
    ctx->pc = 0x20C438u;
    {
        const bool branch_taken_0x20c438 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x20c438) {
            ctx->pc = 0x20C524u;
            goto label_20c524;
        }
    }
    ctx->pc = 0x20C440u;
label_20c440:
    // 0x20c440: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c444:
    // 0x20c444: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
label_20c448:
    if (ctx->pc == 0x20C448u) {
        ctx->pc = 0x20C44Cu;
        goto label_20c44c;
    }
    ctx->pc = 0x20C444u;
    {
        const bool branch_taken_0x20c444 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x20c444) {
            ctx->pc = 0x20C498u;
            goto label_20c498;
        }
    }
    ctx->pc = 0x20C44Cu;
label_20c44c:
    // 0x20c44c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_20c450:
    if (ctx->pc == 0x20C450u) {
        ctx->pc = 0x20C454u;
        goto label_20c454;
    }
    ctx->pc = 0x20C44Cu;
    {
        const bool branch_taken_0x20c44c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c44c) {
            ctx->pc = 0x20C45Cu;
            goto label_20c45c;
        }
    }
    ctx->pc = 0x20C454u;
label_20c454:
    // 0x20c454: 0x10000054  b           . + 4 + (0x54 << 2)
label_20c458:
    if (ctx->pc == 0x20C458u) {
        ctx->pc = 0x20C45Cu;
        goto label_20c45c;
    }
    ctx->pc = 0x20C454u;
    {
        const bool branch_taken_0x20c454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c454) {
            ctx->pc = 0x20C5A8u;
            goto label_20c5a8;
        }
    }
    ctx->pc = 0x20C45Cu;
label_20c45c:
    // 0x20c45c: 0x3c173f80  lui         $s7, 0x3F80
    ctx->pc = 0x20c45cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)16256 << 16));
label_20c460:
    // 0x20c460: 0x44976000  mtc1        $s7, $f12
    ctx->pc = 0x20c460u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20c464:
    // 0x20c464: 0x8f91bbec  lw          $s1, -0x4414($gp)
    ctx->pc = 0x20c464u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_20c468:
    // 0x20c468: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20c468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20c46c:
    // 0x20c46c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x20c46cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_20c470:
    // 0x20c470: 0x24a59430  addiu       $a1, $a1, -0x6BD0
    ctx->pc = 0x20c470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939696));
label_20c474:
    // 0x20c474: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20c474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c478:
    // 0x20c478: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20c478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20c47c:
    // 0x20c47c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x20c47cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20c480:
    // 0x20c480: 0xc08f558  jal         func_23D560
label_20c484:
    if (ctx->pc == 0x20C484u) {
        ctx->pc = 0x20C488u;
        goto label_20c488;
    }
    ctx->pc = 0x20C480u;
    SET_GPR_U32(ctx, 31, 0x20C488u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x20C480u, 0x20C488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C488u;
label_20c488:
    // 0x20c488: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x20c488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20c48c:
    // 0x20c48c: 0xac620118  sw          $v0, 0x118($v1)
    ctx->pc = 0x20c48cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 280), GPR_U32(ctx, 2));
label_20c490:
    // 0x20c490: 0x10000045  b           . + 4 + (0x45 << 2)
label_20c494:
    if (ctx->pc == 0x20C494u) {
        ctx->pc = 0x20C498u;
        goto label_20c498;
    }
    ctx->pc = 0x20C490u;
    {
        const bool branch_taken_0x20c490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c490) {
            ctx->pc = 0x20C5A8u;
            goto label_20c5a8;
        }
    }
    ctx->pc = 0x20C498u;
label_20c498:
    // 0x20c498: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x20c498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20c49c:
    // 0x20c49c: 0x90440138  lbu         $a0, 0x138($v0)
    ctx->pc = 0x20c49cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 312)));
label_20c4a0:
    // 0x20c4a0: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
label_20c4a4:
    if (ctx->pc == 0x20C4A4u) {
        ctx->pc = 0x20C4A8u;
        goto label_20c4a8;
    }
    ctx->pc = 0x20C4A0u;
    {
        const bool branch_taken_0x20c4a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c4a0) {
            ctx->pc = 0x20C4ECu;
            goto label_20c4ec;
        }
    }
    ctx->pc = 0x20C4A8u;
label_20c4a8:
    // 0x20c4a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20c4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_20c4ac:
    // 0x20c4ac: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x20c4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_20c4b0:
    // 0x20c4b0: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x20c4b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_20c4b4:
    // 0x20c4b4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20c4b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20c4b8:
    // 0x20c4b8: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x20c4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_20c4bc:
    // 0x20c4bc: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x20c4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_20c4c0:
    // 0x20c4c0: 0x24a59440  addiu       $a1, $a1, -0x6BC0
    ctx->pc = 0x20c4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939712));
label_20c4c4:
    // 0x20c4c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20c4c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c4c8:
    // 0x20c4c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20c4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20c4cc:
    // 0x20c4cc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x20c4ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20c4d0:
    // 0x20c4d0: 0xc08f558  jal         func_23D560
label_20c4d4:
    if (ctx->pc == 0x20C4D4u) {
        ctx->pc = 0x20C4D8u;
        goto label_20c4d8;
    }
    ctx->pc = 0x20C4D0u;
    SET_GPR_U32(ctx, 31, 0x20C4D8u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x20C4D0u, 0x20C4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C4D8u;
label_20c4d8:
    // 0x20c4d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20c4d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20c4dc:
    // 0x20c4dc: 0x8fa601f0  lw          $a2, 0x1F0($sp)
    ctx->pc = 0x20c4dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20c4e0:
    // 0x20c4e0: 0xacc50118  sw          $a1, 0x118($a2)
    ctx->pc = 0x20c4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 280), GPR_U32(ctx, 5));
label_20c4e4:
    // 0x20c4e4: 0x10000030  b           . + 4 + (0x30 << 2)
label_20c4e8:
    if (ctx->pc == 0x20C4E8u) {
        ctx->pc = 0x20C4ECu;
        goto label_20c4ec;
    }
    ctx->pc = 0x20C4E4u;
    {
        const bool branch_taken_0x20c4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c4e4) {
            ctx->pc = 0x20C5A8u;
            goto label_20c5a8;
        }
    }
    ctx->pc = 0x20C4ECu;
label_20c4ec:
    // 0x20c4ec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20c4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_20c4f0:
    // 0x20c4f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20c4f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20c4f4:
    // 0x20c4f4: 0x8f82bbec  lw          $v0, -0x4414($gp)
    ctx->pc = 0x20c4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_20c4f8:
    // 0x20c4f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20c4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20c4fc:
    // 0x20c4fc: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x20c4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_20c500:
    // 0x20c500: 0x24a59450  addiu       $a1, $a1, -0x6BB0
    ctx->pc = 0x20c500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939728));
label_20c504:
    // 0x20c504: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20c504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c508:
    // 0x20c508: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x20c508u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20c50c:
    // 0x20c50c: 0xc08f558  jal         func_23D560
label_20c510:
    if (ctx->pc == 0x20C510u) {
        ctx->pc = 0x20C514u;
        goto label_20c514;
    }
    ctx->pc = 0x20C50Cu;
    SET_GPR_U32(ctx, 31, 0x20C514u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x20C50Cu, 0x20C514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C514u;
label_20c514:
    // 0x20c514: 0x8fa501f0  lw          $a1, 0x1F0($sp)
    ctx->pc = 0x20c514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20c518:
    // 0x20c518: 0xaca20118  sw          $v0, 0x118($a1)
    ctx->pc = 0x20c518u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 280), GPR_U32(ctx, 2));
label_20c51c:
    // 0x20c51c: 0x10000022  b           . + 4 + (0x22 << 2)
label_20c520:
    if (ctx->pc == 0x20C520u) {
        ctx->pc = 0x20C524u;
        goto label_20c524;
    }
    ctx->pc = 0x20C51Cu;
    {
        const bool branch_taken_0x20c51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c51c) {
            ctx->pc = 0x20C5A8u;
            goto label_20c5a8;
        }
    }
    ctx->pc = 0x20C524u;
label_20c524:
    // 0x20c524: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x20c524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20c528:
    // 0x20c528: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x20c528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_20c52c:
    // 0x20c52c: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x20c52cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_20c530:
    // 0x20c530: 0x90420138  lbu         $v0, 0x138($v0)
    ctx->pc = 0x20c530u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 312)));
label_20c534:
    // 0x20c534: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_20c538:
    if (ctx->pc == 0x20C538u) {
        ctx->pc = 0x20C53Cu;
        goto label_20c53c;
    }
    ctx->pc = 0x20C534u;
    {
        const bool branch_taken_0x20c534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c534) {
            ctx->pc = 0x20C574u;
            goto label_20c574;
        }
    }
    ctx->pc = 0x20C53Cu;
label_20c53c:
    // 0x20c53c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x20c53cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_20c540:
    // 0x20c540: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x20c540u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20c544:
    // 0x20c544: 0x8f82bbec  lw          $v0, -0x4414($gp)
    ctx->pc = 0x20c544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_20c548:
    // 0x20c548: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20c548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20c54c:
    // 0x20c54c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x20c54cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_20c550:
    // 0x20c550: 0x24a59440  addiu       $a1, $a1, -0x6BC0
    ctx->pc = 0x20c550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939712));
label_20c554:
    // 0x20c554: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20c554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c558:
    // 0x20c558: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x20c558u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20c55c:
    // 0x20c55c: 0xc08f558  jal         func_23D560
label_20c560:
    if (ctx->pc == 0x20C560u) {
        ctx->pc = 0x20C564u;
        goto label_20c564;
    }
    ctx->pc = 0x20C55Cu;
    SET_GPR_U32(ctx, 31, 0x20C564u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x20C55Cu, 0x20C564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C564u;
label_20c564:
    // 0x20c564: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x20c564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20c568:
    // 0x20c568: 0xac820118  sw          $v0, 0x118($a0)
    ctx->pc = 0x20c568u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 280), GPR_U32(ctx, 2));
label_20c56c:
    // 0x20c56c: 0x1000000e  b           . + 4 + (0xE << 2)
label_20c570:
    if (ctx->pc == 0x20C570u) {
        ctx->pc = 0x20C574u;
        goto label_20c574;
    }
    ctx->pc = 0x20C56Cu;
    {
        const bool branch_taken_0x20c56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c56c) {
            ctx->pc = 0x20C5A8u;
            goto label_20c5a8;
        }
    }
    ctx->pc = 0x20C574u;
label_20c574:
    // 0x20c574: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20c574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_20c578:
    // 0x20c578: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x20c578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_20c57c:
    // 0x20c57c: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x20c57cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_20c580:
    // 0x20c580: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20c580u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20c584:
    // 0x20c584: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x20c584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_20c588:
    // 0x20c588: 0x27829b00  addiu       $v0, $gp, -0x6500
    ctx->pc = 0x20c588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941440));
label_20c58c:
    // 0x20c58c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20c58cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20c590:
    // 0x20c590: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20c590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c594:
    // 0x20c594: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x20c594u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20c598:
    // 0x20c598: 0xc08f558  jal         func_23D560
label_20c59c:
    if (ctx->pc == 0x20C59Cu) {
        ctx->pc = 0x20C5A0u;
        goto label_20c5a0;
    }
    ctx->pc = 0x20C598u;
    SET_GPR_U32(ctx, 31, 0x20C5A0u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x20C598u, 0x20C5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C5A0u;
label_20c5a0:
    // 0x20c5a0: 0x8fa601f0  lw          $a2, 0x1F0($sp)
    ctx->pc = 0x20c5a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20c5a4:
    // 0x20c5a4: 0xacc20118  sw          $v0, 0x118($a2)
    ctx->pc = 0x20c5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 280), GPR_U32(ctx, 2));
label_20c5a8:
    // 0x20c5a8: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x20c5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20c5ac:
    // 0x20c5ac: 0x24820120  addiu       $v0, $a0, 0x120
    ctx->pc = 0x20c5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
label_20c5b0:
    // 0x20c5b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20c5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20c5b4:
    // 0x20c5b4: 0xc082dbc  jal         func_20B6F0
label_20c5b8:
    if (ctx->pc == 0x20C5B8u) {
        ctx->pc = 0x20C5BCu;
        goto label_20c5bc;
    }
    ctx->pc = 0x20C5B4u;
    SET_GPR_U32(ctx, 31, 0x20C5BCu);
    ctx->pc = 0x20B6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B6F0u, 0x20C5B4u, 0x20C5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C5BCu;
label_20c5bc:
    // 0x20c5bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x20c5bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20c5c0:
    // 0x20c5c0: 0x1000007c  b           . + 4 + (0x7C << 2)
label_20c5c4:
    if (ctx->pc == 0x20C5C4u) {
        ctx->pc = 0x20C5C8u;
        goto label_20c5c8;
    }
    ctx->pc = 0x20C5C0u;
    {
        const bool branch_taken_0x20c5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c5c0) {
            ctx->pc = 0x20C7B4u;
            goto label_20c7b4;
        }
    }
    ctx->pc = 0x20C5C8u;
label_20c5c8:
    // 0x20c5c8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x20c5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20c5cc:
    // 0x20c5cc: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x20c5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_20c5d0:
    // 0x20c5d0: 0x10800077  beqz        $a0, . + 4 + (0x77 << 2)
label_20c5d4:
    if (ctx->pc == 0x20C5D4u) {
        ctx->pc = 0x20C5D8u;
        goto label_20c5d8;
    }
    ctx->pc = 0x20C5D0u;
    {
        const bool branch_taken_0x20c5d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c5d0) {
            ctx->pc = 0x20C7B0u;
            goto label_20c7b0;
        }
    }
    ctx->pc = 0x20C5D8u;
label_20c5d8:
    // 0x20c5d8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x20c5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20c5dc:
    // 0x20c5dc: 0xc442003c  lwc1        $f2, 0x3C($v0)
    ctx->pc = 0x20c5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20c5e0:
    // 0x20c5e0: 0xc7a101e0  lwc1        $f1, 0x1E0($sp)
    ctx->pc = 0x20c5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20c5e4:
    // 0x20c5e4: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x20c5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
label_20c5e8:
    // 0x20c5e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20c5e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20c5ec:
    // 0x20c5ec: 0x0  nop
    ctx->pc = 0x20c5ecu;
    // NOP
label_20c5f0:
    // 0x20c5f0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x20c5f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_20c5f4:
    // 0x20c5f4: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x20c5f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20c5f8:
    // 0x20c5f8: 0x4501006d  bc1t        . + 4 + (0x6D << 2)
label_20c5fc:
    if (ctx->pc == 0x20C5FCu) {
        ctx->pc = 0x20C600u;
        goto label_20c600;
    }
    ctx->pc = 0x20C5F8u;
    {
        const bool branch_taken_0x20c5f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20c5f8) {
            ctx->pc = 0x20C7B0u;
            goto label_20c7b0;
        }
    }
    ctx->pc = 0x20C600u;
label_20c600:
    // 0x20c600: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x20c600u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20c604:
    // 0x20c604: 0xc4a2003c  lwc1        $f2, 0x3C($a1)
    ctx->pc = 0x20c604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20c608:
    // 0x20c608: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x20c608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
label_20c60c:
    // 0x20c60c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20c60cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20c610:
    // 0x20c610: 0xc7a001e0  lwc1        $f0, 0x1E0($sp)
    ctx->pc = 0x20c610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20c614:
    // 0x20c614: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x20c614u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_20c618:
    // 0x20c618: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x20c618u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20c61c:
    // 0x20c61c: 0x45000064  bc1f        . + 4 + (0x64 << 2)
label_20c620:
    if (ctx->pc == 0x20C620u) {
        ctx->pc = 0x20C624u;
        goto label_20c624;
    }
    ctx->pc = 0x20C61Cu;
    {
        const bool branch_taken_0x20c61c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20c61c) {
            ctx->pc = 0x20C7B0u;
            goto label_20c7b0;
        }
    }
    ctx->pc = 0x20C624u;
label_20c624:
    // 0x20c624: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x20c624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20c628:
    // 0x20c628: 0xc4620040  lwc1        $f2, 0x40($v1)
    ctx->pc = 0x20c628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20c62c:
    // 0x20c62c: 0xc7a101e4  lwc1        $f1, 0x1E4($sp)
    ctx->pc = 0x20c62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20c630:
    // 0x20c630: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x20c630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
label_20c634:
    // 0x20c634: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20c634u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20c638:
    // 0x20c638: 0x0  nop
    ctx->pc = 0x20c638u;
    // NOP
label_20c63c:
    // 0x20c63c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x20c63cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_20c640:
    // 0x20c640: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x20c640u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20c644:
    // 0x20c644: 0x4501005a  bc1t        . + 4 + (0x5A << 2)
label_20c648:
    if (ctx->pc == 0x20C648u) {
        ctx->pc = 0x20C64Cu;
        goto label_20c64c;
    }
    ctx->pc = 0x20C644u;
    {
        const bool branch_taken_0x20c644 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20c644) {
            ctx->pc = 0x20C7B0u;
            goto label_20c7b0;
        }
    }
    ctx->pc = 0x20C64Cu;
label_20c64c:
    // 0x20c64c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x20c64cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20c650:
    // 0x20c650: 0xc4820040  lwc1        $f2, 0x40($a0)
    ctx->pc = 0x20c650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20c654:
    // 0x20c654: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x20c654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
label_20c658:
    // 0x20c658: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20c658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20c65c:
    // 0x20c65c: 0xc7a001e4  lwc1        $f0, 0x1E4($sp)
    ctx->pc = 0x20c65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20c660:
    // 0x20c660: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x20c660u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_20c664:
    // 0x20c664: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x20c664u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20c668:
    // 0x20c668: 0x45000051  bc1f        . + 4 + (0x51 << 2)
label_20c66c:
    if (ctx->pc == 0x20C66Cu) {
        ctx->pc = 0x20C670u;
        goto label_20c670;
    }
    ctx->pc = 0x20C668u;
    {
        const bool branch_taken_0x20c668 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20c668) {
            ctx->pc = 0x20C7B0u;
            goto label_20c7b0;
        }
    }
    ctx->pc = 0x20C670u;
label_20c670:
    // 0x20c670: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x20c670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20c674:
    // 0x20c674: 0x8c640044  lw          $a0, 0x44($v1)
    ctx->pc = 0x20c674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_20c678:
    // 0x20c678: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20c678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20c67c:
    // 0x20c67c: 0x1482001b  bne         $a0, $v0, . + 4 + (0x1B << 2)
label_20c680:
    if (ctx->pc == 0x20C680u) {
        ctx->pc = 0x20C684u;
        goto label_20c684;
    }
    ctx->pc = 0x20C67Cu;
    {
        const bool branch_taken_0x20c67c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x20c67c) {
            ctx->pc = 0x20C6ECu;
            goto label_20c6ec;
        }
    }
    ctx->pc = 0x20C684u;
label_20c684:
    // 0x20c684: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x20c684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20c688:
    // 0x20c688: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x20c688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_20c68c:
    // 0x20c68c: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x20c68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20c690:
    // 0x20c690: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20c690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20c694:
    // 0x20c694: 0xc46c0018  lwc1        $f12, 0x18($v1)
    ctx->pc = 0x20c694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_20c698:
    // 0x20c698: 0xc064d10  jal         func_193440
label_20c69c:
    if (ctx->pc == 0x20C69Cu) {
        ctx->pc = 0x20C6A0u;
        goto label_20c6a0;
    }
    ctx->pc = 0x20C698u;
    SET_GPR_U32(ctx, 31, 0x20C6A0u);
    ctx->pc = 0x193440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193440u, 0x20C698u, 0x20C6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C6A0u;
label_20c6a0:
    // 0x20c6a0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x20c6a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20c6a4:
    // 0x20c6a4: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x20c6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20c6a8:
    // 0x20c6a8: 0x8c44005c  lw          $a0, 0x5C($v0)
    ctx->pc = 0x20c6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_20c6ac:
    // 0x20c6ac: 0x14800034  bnez        $a0, . + 4 + (0x34 << 2)
label_20c6b0:
    if (ctx->pc == 0x20C6B0u) {
        ctx->pc = 0x20C6B4u;
        goto label_20c6b4;
    }
    ctx->pc = 0x20C6ACu;
    {
        const bool branch_taken_0x20c6ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c6ac) {
            ctx->pc = 0x20C780u;
            goto label_20c780;
        }
    }
    ctx->pc = 0x20C6B4u;
label_20c6b4:
    // 0x20c6b4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20c6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_20c6b8:
    // 0x20c6b8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20c6b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20c6bc:
    // 0x20c6bc: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x20c6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_20c6c0:
    // 0x20c6c0: 0x27859b08  addiu       $a1, $gp, -0x64F8
    ctx->pc = 0x20c6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941448));
label_20c6c4:
    // 0x20c6c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c6c8:
    // 0x20c6c8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x20c6c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20c6cc:
    // 0x20c6cc: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x20c6ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20c6d0:
    // 0x20c6d0: 0xc08f558  jal         func_23D560
label_20c6d4:
    if (ctx->pc == 0x20C6D4u) {
        ctx->pc = 0x20C6D8u;
        goto label_20c6d8;
    }
    ctx->pc = 0x20C6D0u;
    SET_GPR_U32(ctx, 31, 0x20C6D8u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x20C6D0u, 0x20C6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C6D8u;
label_20c6d8:
    // 0x20c6d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20c6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20c6dc:
    // 0x20c6dc: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x20c6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20c6e0:
    // 0x20c6e0: 0xac44005c  sw          $a0, 0x5C($v0)
    ctx->pc = 0x20c6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 4));
label_20c6e4:
    // 0x20c6e4: 0x10000026  b           . + 4 + (0x26 << 2)
label_20c6e8:
    if (ctx->pc == 0x20C6E8u) {
        ctx->pc = 0x20C6ECu;
        goto label_20c6ec;
    }
    ctx->pc = 0x20C6E4u;
    {
        const bool branch_taken_0x20c6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c6e4) {
            ctx->pc = 0x20C780u;
            goto label_20c780;
        }
    }
    ctx->pc = 0x20C6ECu;
label_20c6ec:
    // 0x20c6ec: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x20c6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20c6f0:
    // 0x20c6f0: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x20c6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_20c6f4:
    // 0x20c6f4: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x20c6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20c6f8:
    // 0x20c6f8: 0xc44c0014  lwc1        $f12, 0x14($v0)
    ctx->pc = 0x20c6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_20c6fc:
    // 0x20c6fc: 0xc064d10  jal         func_193440
label_20c700:
    if (ctx->pc == 0x20C700u) {
        ctx->pc = 0x20C704u;
        goto label_20c704;
    }
    ctx->pc = 0x20C6FCu;
    SET_GPR_U32(ctx, 31, 0x20C704u);
    ctx->pc = 0x193440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193440u, 0x20C6FCu, 0x20C704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C704u;
label_20c704:
    // 0x20c704: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x20c704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20c708:
    // 0x20c708: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x20c708u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_20c70c:
    // 0x20c70c: 0x24a59460  addiu       $a1, $a1, -0x6BA0
    ctx->pc = 0x20c70cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939744));
label_20c710:
    // 0x20c710: 0xc064d48  jal         func_193520
label_20c714:
    if (ctx->pc == 0x20C714u) {
        ctx->pc = 0x20C718u;
        goto label_20c718;
    }
    ctx->pc = 0x20C710u;
    SET_GPR_U32(ctx, 31, 0x20C718u);
    ctx->pc = 0x193520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193520u, 0x20C710u, 0x20C718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C718u;
label_20c718:
    // 0x20c718: 0x3c163f80  lui         $s6, 0x3F80
    ctx->pc = 0x20c718u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)16256 << 16));
label_20c71c:
    // 0x20c71c: 0x44966000  mtc1        $s6, $f12
    ctx->pc = 0x20c71cu;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20c720:
    // 0x20c720: 0x8f83bbec  lw          $v1, -0x4414($gp)
    ctx->pc = 0x20c720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_20c724:
    // 0x20c724: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x20c724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_20c728:
    // 0x20c728: 0x27859b10  addiu       $a1, $gp, -0x64F0
    ctx->pc = 0x20c728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941456));
label_20c72c:
    // 0x20c72c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20c72cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20c730:
    // 0x20c730: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20c730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20c734:
    // 0x20c734: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x20c734u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20c738:
    // 0x20c738: 0xc08f558  jal         func_23D560
label_20c73c:
    if (ctx->pc == 0x20C73Cu) {
        ctx->pc = 0x20C740u;
        goto label_20c740;
    }
    ctx->pc = 0x20C738u;
    SET_GPR_U32(ctx, 31, 0x20C740u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x20C738u, 0x20C740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C740u;
label_20c740:
    // 0x20c740: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20c740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20c744:
    // 0x20c744: 0x8fa601f0  lw          $a2, 0x1F0($sp)
    ctx->pc = 0x20c744u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20c748:
    // 0x20c748: 0x8cc2005c  lw          $v0, 0x5C($a2)
    ctx->pc = 0x20c748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 92)));
label_20c74c:
    // 0x20c74c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_20c750:
    if (ctx->pc == 0x20C750u) {
        ctx->pc = 0x20C754u;
        goto label_20c754;
    }
    ctx->pc = 0x20C74Cu;
    {
        const bool branch_taken_0x20c74c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c74c) {
            ctx->pc = 0x20C780u;
            goto label_20c780;
        }
    }
    ctx->pc = 0x20C754u;
label_20c754:
    // 0x20c754: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x20c754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_20c758:
    // 0x20c758: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x20c758u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20c75c:
    // 0x20c75c: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x20c75cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_20c760:
    // 0x20c760: 0x27829b08  addiu       $v0, $gp, -0x64F8
    ctx->pc = 0x20c760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941448));
label_20c764:
    // 0x20c764: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20c764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20c768:
    // 0x20c768: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20c768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c76c:
    // 0x20c76c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x20c76cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20c770:
    // 0x20c770: 0xc08f558  jal         func_23D560
label_20c774:
    if (ctx->pc == 0x20C774u) {
        ctx->pc = 0x20C778u;
        goto label_20c778;
    }
    ctx->pc = 0x20C770u;
    SET_GPR_U32(ctx, 31, 0x20C778u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x20C770u, 0x20C778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C778u;
label_20c778:
    // 0x20c778: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x20c778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20c77c:
    // 0x20c77c: 0xac82005c  sw          $v0, 0x5C($a0)
    ctx->pc = 0x20c77cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 2));
label_20c780:
    // 0x20c780: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20c780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_20c784:
    // 0x20c784: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20c784u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20c788:
    // 0x20c788: 0x8fb501f0  lw          $s5, 0x1F0($sp)
    ctx->pc = 0x20c788u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20c78c:
    // 0x20c78c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x20c78cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_20c790:
    // 0x20c790: 0x24050096  addiu       $a1, $zero, 0x96
    ctx->pc = 0x20c790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
label_20c794:
    // 0x20c794: 0xc064df0  jal         func_1937C0
label_20c798:
    if (ctx->pc == 0x20C798u) {
        ctx->pc = 0x20C79Cu;
        goto label_20c79c;
    }
    ctx->pc = 0x20C794u;
    SET_GPR_U32(ctx, 31, 0x20C79Cu);
    ctx->pc = 0x1937C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1937C0u, 0x20C794u, 0x20C79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C79Cu;
label_20c79c:
    // 0x20c79c: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x20c79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20c7a0:
    // 0x20c7a0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x20c7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20c7a4:
    // 0x20c7a4: 0x246500a4  addiu       $a1, $v1, 0xA4
    ctx->pc = 0x20c7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 164));
label_20c7a8:
    // 0x20c7a8: 0xc083e18  jal         func_20F860
label_20c7ac:
    if (ctx->pc == 0x20C7ACu) {
        ctx->pc = 0x20C7B0u;
        goto label_20c7b0;
    }
    ctx->pc = 0x20C7A8u;
    SET_GPR_U32(ctx, 31, 0x20C7B0u);
    ctx->pc = 0x20F860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F860u, 0x20C7A8u, 0x20C7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C7B0u;
label_20c7b0:
    // 0x20c7b0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x20c7b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_20c7b4:
    // 0x20c7b4: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x20c7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20c7b8:
    // 0x20c7b8: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x20c7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_20c7bc:
    // 0x20c7bc: 0xc082da8  jal         func_20B6A0
label_20c7c0:
    if (ctx->pc == 0x20C7C0u) {
        ctx->pc = 0x20C7C4u;
        goto label_20c7c4;
    }
    ctx->pc = 0x20C7BCu;
    SET_GPR_U32(ctx, 31, 0x20C7C4u);
    ctx->pc = 0x20B6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B6A0u, 0x20C7BCu, 0x20C7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C7C4u;
label_20c7c4:
    // 0x20c7c4: 0x1622ff80  bne         $s1, $v0, . + 4 + (-0x80 << 2)
label_20c7c8:
    if (ctx->pc == 0x20C7C8u) {
        ctx->pc = 0x20C7CCu;
        goto label_20c7cc;
    }
    ctx->pc = 0x20C7C4u;
    {
        const bool branch_taken_0x20c7c4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x20c7c4) {
            ctx->pc = 0x20C5C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20c5c8;
        }
    }
    ctx->pc = 0x20C7CCu;
label_20c7cc:
    // 0x20c7cc: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x20c7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20c7d0:
    // 0x20c7d0: 0x244400b8  addiu       $a0, $v0, 0xB8
    ctx->pc = 0x20c7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
label_20c7d4:
    // 0x20c7d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20c7d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20c7d8:
    // 0x20c7d8: 0xc05f1a8  jal         func_17C6A0
label_20c7dc:
    if (ctx->pc == 0x20C7DCu) {
        ctx->pc = 0x20C7E0u;
        goto label_20c7e0;
    }
    ctx->pc = 0x20C7D8u;
    SET_GPR_U32(ctx, 31, 0x20C7E0u);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x20C7D8u, 0x20C7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C7E0u;
label_20c7e0:
    // 0x20c7e0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x20c7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20c7e4:
    // 0x20c7e4: 0xc7a001ec  lwc1        $f0, 0x1EC($sp)
    ctx->pc = 0x20c7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20c7e8:
    // 0x20c7e8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x20c7e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_20c7ec:
    // 0x20c7ec: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x20c7ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_20c7f0:
    // 0x20c7f0: 0xc0de0d2  jal         func_378348
label_20c7f4:
    if (ctx->pc == 0x20C7F4u) {
        ctx->pc = 0x20C7F8u;
        goto label_20c7f8;
    }
    ctx->pc = 0x20C7F0u;
    SET_GPR_U32(ctx, 31, 0x20C7F8u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x20C7F0u, 0x20C7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C7F8u;
label_20c7f8:
    // 0x20c7f8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x20c7f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20c7fc:
    // 0x20c7fc: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
label_20c800:
    if (ctx->pc == 0x20C800u) {
        ctx->pc = 0x20C804u;
        goto label_20c804;
    }
    ctx->pc = 0x20C7FCu;
    {
        const bool branch_taken_0x20c7fc = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x20c7fc) {
            ctx->pc = 0x20C818u;
            goto label_20c818;
        }
    }
    ctx->pc = 0x20C804u;
label_20c804:
    // 0x20c804: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20c804u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20c808:
    // 0x20c808: 0x0  nop
    ctx->pc = 0x20c808u;
    // NOP
label_20c80c:
    // 0x20c80c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x20c80cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_20c810:
    // 0x20c810: 0x10000008  b           . + 4 + (0x8 << 2)
label_20c814:
    if (ctx->pc == 0x20C814u) {
        ctx->pc = 0x20C818u;
        goto label_20c818;
    }
    ctx->pc = 0x20C810u;
    {
        const bool branch_taken_0x20c810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c810) {
            ctx->pc = 0x20C834u;
            goto label_20c834;
        }
    }
    ctx->pc = 0x20C818u;
label_20c818:
    // 0x20c818: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x20c818u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_20c81c:
    // 0x20c81c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x20c81cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_20c820:
    // 0x20c820: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x20c820u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_20c824:
    // 0x20c824: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x20c824u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20c828:
    // 0x20c828: 0x0  nop
    ctx->pc = 0x20c828u;
    // NOP
label_20c82c:
    // 0x20c82c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x20c82cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_20c830:
    // 0x20c830: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x20c830u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_20c834:
    // 0x20c834: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x20c834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_20c838:
    // 0x20c838: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20c838u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20c83c:
    // 0x20c83c: 0x0  nop
    ctx->pc = 0x20c83cu;
    // NOP
label_20c840:
    // 0x20c840: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x20c840u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_20c844:
    // 0x20c844: 0xc7828044  lwc1        $f2, -0x7FBC($gp)
    ctx->pc = 0x20c844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20c848:
    // 0x20c848: 0xc7a101c8  lwc1        $f1, 0x1C8($sp)
    ctx->pc = 0x20c848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20c84c:
    // 0x20c84c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20c84cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20c850:
    // 0x20c850: 0x0  nop
    ctx->pc = 0x20c850u;
    // NOP
label_20c854:
    // 0x20c854: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x20c854u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_20c858:
    // 0x20c858: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x20c858u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_20c85c:
    // 0x20c85c: 0xc7808308  lwc1        $f0, -0x7CF8($gp)
    ctx->pc = 0x20c85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20c860:
    // 0x20c860: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x20c860u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_20c864:
    // 0x20c864: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x20c864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20c868:
    // 0x20c868: 0xc46000dc  lwc1        $f0, 0xDC($v1)
    ctx->pc = 0x20c868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20c86c:
    // 0x20c86c: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x20c86cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_20c870:
    // 0x20c870: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x20c870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20c874:
    // 0x20c874: 0x244400d0  addiu       $a0, $v0, 0xD0
    ctx->pc = 0x20c874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
label_20c878:
    // 0x20c878: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20c878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20c87c:
    // 0x20c87c: 0xc082aa4  jal         func_20AA90
label_20c880:
    if (ctx->pc == 0x20C880u) {
        ctx->pc = 0x20C884u;
        goto label_20c884;
    }
    ctx->pc = 0x20C87Cu;
    SET_GPR_U32(ctx, 31, 0x20C884u);
    ctx->pc = 0x20AA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AA90u, 0x20C87Cu, 0x20C884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C884u;
label_20c884:
    // 0x20c884: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20c884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20c888:
    // 0x20c888: 0xe4940000  swc1        $f20, 0x0($a0)
    ctx->pc = 0x20c888u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_20c88c:
    // 0x20c88c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x20c88cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_20c890:
    // 0x20c890: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x20c890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20c894:
    // 0x20c894: 0x244400d0  addiu       $a0, $v0, 0xD0
    ctx->pc = 0x20c894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
label_20c898:
    // 0x20c898: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20c898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20c89c:
    // 0x20c89c: 0xc082aa4  jal         func_20AA90
label_20c8a0:
    if (ctx->pc == 0x20C8A0u) {
        ctx->pc = 0x20C8A4u;
        goto label_20c8a4;
    }
    ctx->pc = 0x20C89Cu;
    SET_GPR_U32(ctx, 31, 0x20C8A4u);
    ctx->pc = 0x20AA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AA90u, 0x20C89Cu, 0x20C8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C8A4u;
label_20c8a4:
    // 0x20c8a4: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x20c8a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_20c8a8:
    // 0x20c8a8: 0xc0de0d2  jal         func_378348
label_20c8ac:
    if (ctx->pc == 0x20C8ACu) {
        ctx->pc = 0x20C8B0u;
        goto label_20c8b0;
    }
    ctx->pc = 0x20C8A8u;
    SET_GPR_U32(ctx, 31, 0x20C8B0u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x20C8A8u, 0x20C8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C8B0u;
label_20c8b0:
    // 0x20c8b0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x20c8b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20c8b4:
    // 0x20c8b4: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
label_20c8b8:
    if (ctx->pc == 0x20C8B8u) {
        ctx->pc = 0x20C8BCu;
        goto label_20c8bc;
    }
    ctx->pc = 0x20C8B4u;
    {
        const bool branch_taken_0x20c8b4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x20c8b4) {
            ctx->pc = 0x20C8D0u;
            goto label_20c8d0;
        }
    }
    ctx->pc = 0x20C8BCu;
label_20c8bc:
    // 0x20c8bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20c8bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20c8c0:
    // 0x20c8c0: 0x0  nop
    ctx->pc = 0x20c8c0u;
    // NOP
label_20c8c4:
    // 0x20c8c4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x20c8c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_20c8c8:
    // 0x20c8c8: 0x10000008  b           . + 4 + (0x8 << 2)
label_20c8cc:
    if (ctx->pc == 0x20C8CCu) {
        ctx->pc = 0x20C8D0u;
        goto label_20c8d0;
    }
    ctx->pc = 0x20C8C8u;
    {
        const bool branch_taken_0x20c8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c8c8) {
            ctx->pc = 0x20C8ECu;
            goto label_20c8ec;
        }
    }
    ctx->pc = 0x20C8D0u;
label_20c8d0:
    // 0x20c8d0: 0x32842  srl         $a1, $v1, 1
    ctx->pc = 0x20c8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_20c8d4:
    // 0x20c8d4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x20c8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_20c8d8:
    // 0x20c8d8: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x20c8d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_20c8dc:
    // 0x20c8dc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x20c8dcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20c8e0:
    // 0x20c8e0: 0x0  nop
    ctx->pc = 0x20c8e0u;
    // NOP
label_20c8e4:
    // 0x20c8e4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x20c8e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_20c8e8:
    // 0x20c8e8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x20c8e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_20c8ec:
    // 0x20c8ec: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x20c8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_20c8f0:
    // 0x20c8f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20c8f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20c8f4:
    // 0x20c8f4: 0x0  nop
    ctx->pc = 0x20c8f4u;
    // NOP
label_20c8f8:
    // 0x20c8f8: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x20c8f8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_20c8fc:
    // 0x20c8fc: 0xc7828044  lwc1        $f2, -0x7FBC($gp)
    ctx->pc = 0x20c8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20c900:
    // 0x20c900: 0xc7a101cc  lwc1        $f1, 0x1CC($sp)
    ctx->pc = 0x20c900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20c904:
    // 0x20c904: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20c904u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20c908:
    // 0x20c908: 0x0  nop
    ctx->pc = 0x20c908u;
    // NOP
label_20c90c:
    // 0x20c90c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x20c90cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_20c910:
    // 0x20c910: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x20c910u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_20c914:
    // 0x20c914: 0xc7808308  lwc1        $f0, -0x7CF8($gp)
    ctx->pc = 0x20c914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20c918:
    // 0x20c918: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x20c918u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_20c91c:
    // 0x20c91c: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x20c91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20c920:
    // 0x20c920: 0xc44000dc  lwc1        $f0, 0xDC($v0)
    ctx->pc = 0x20c920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20c924:
    // 0x20c924: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x20c924u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_20c928:
    // 0x20c928: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x20c928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20c92c:
    // 0x20c92c: 0x246400d0  addiu       $a0, $v1, 0xD0
    ctx->pc = 0x20c92cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
label_20c930:
    // 0x20c930: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20c930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20c934:
    // 0x20c934: 0xc082aa4  jal         func_20AA90
label_20c938:
    if (ctx->pc == 0x20C938u) {
        ctx->pc = 0x20C93Cu;
        goto label_20c93c;
    }
    ctx->pc = 0x20C934u;
    SET_GPR_U32(ctx, 31, 0x20C93Cu);
    ctx->pc = 0x20AA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AA90u, 0x20C934u, 0x20C93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C93Cu;
label_20c93c:
    // 0x20c93c: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x20c93cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_20c940:
    // 0x20c940: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x20c940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20c944:
    // 0x20c944: 0xc49400e8  lwc1        $f20, 0xE8($a0)
    ctx->pc = 0x20c944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_20c948:
    // 0x20c948: 0x8fa501f0  lw          $a1, 0x1F0($sp)
    ctx->pc = 0x20c948u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20c94c:
    // 0x20c94c: 0x24a200c4  addiu       $v0, $a1, 0xC4
    ctx->pc = 0x20c94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 196));
label_20c950:
    // 0x20c950: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20c950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20c954:
    // 0x20c954: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20c954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20c958:
    // 0x20c958: 0xc082aa4  jal         func_20AA90
label_20c95c:
    if (ctx->pc == 0x20C95Cu) {
        ctx->pc = 0x20C960u;
        goto label_20c960;
    }
    ctx->pc = 0x20C958u;
    SET_GPR_U32(ctx, 31, 0x20C960u);
    ctx->pc = 0x20AA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AA90u, 0x20C958u, 0x20C960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C960u;
label_20c960:
    // 0x20c960: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x20c960u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_20c964:
    // 0x20c964: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x20c964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20c968:
    // 0x20c968: 0xc49400ec  lwc1        $f20, 0xEC($a0)
    ctx->pc = 0x20c968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_20c96c:
    // 0x20c96c: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x20c96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20c970:
    // 0x20c970: 0x244400c4  addiu       $a0, $v0, 0xC4
    ctx->pc = 0x20c970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 196));
label_20c974:
    // 0x20c974: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20c974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20c978:
    // 0x20c978: 0xc082aa4  jal         func_20AA90
label_20c97c:
    if (ctx->pc == 0x20C97Cu) {
        ctx->pc = 0x20C980u;
        goto label_20c980;
    }
    ctx->pc = 0x20C978u;
    SET_GPR_U32(ctx, 31, 0x20C980u);
    ctx->pc = 0x20AA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AA90u, 0x20C978u, 0x20C980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C980u;
label_20c980:
    // 0x20c980: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x20c980u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_20c984:
    // 0x20c984: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x20c984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20c988:
    // 0x20c988: 0xc45400f0  lwc1        $f20, 0xF0($v0)
    ctx->pc = 0x20c988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_20c98c:
    // 0x20c98c: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x20c98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20c990:
    // 0x20c990: 0x244400c4  addiu       $a0, $v0, 0xC4
    ctx->pc = 0x20c990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 196));
label_20c994:
    // 0x20c994: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20c994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20c998:
    // 0x20c998: 0xc082aa4  jal         func_20AA90
label_20c99c:
    if (ctx->pc == 0x20C99Cu) {
        ctx->pc = 0x20C9A0u;
        goto label_20c9a0;
    }
    ctx->pc = 0x20C998u;
    SET_GPR_U32(ctx, 31, 0x20C9A0u);
    ctx->pc = 0x20AA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AA90u, 0x20C998u, 0x20C9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C9A0u;
label_20c9a0:
    // 0x20c9a0: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x20c9a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_20c9a4:
    // 0x20c9a4: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x20c9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_20c9a8:
    // 0x20c9a8: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x20c9a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_20c9ac:
    // 0x20c9ac: 0x21e102b  sltu        $v0, $s0, $fp
    ctx->pc = 0x20c9acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_20c9b0:
    // 0x20c9b0: 0x1440fca4  bnez        $v0, . + 4 + (-0x35C << 2)
label_20c9b4:
    if (ctx->pc == 0x20C9B4u) {
        ctx->pc = 0x20C9B8u;
        goto label_20c9b8;
    }
    ctx->pc = 0x20C9B0u;
    {
        const bool branch_taken_0x20c9b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c9b0) {
            ctx->pc = 0x20BC44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20bc44;
        }
    }
    ctx->pc = 0x20C9B8u;
label_20c9b8:
    // 0x20c9b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x20c9b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20c9bc:
    // 0x20c9bc: 0x100000e4  b           . + 4 + (0xE4 << 2)
label_20c9c0:
    if (ctx->pc == 0x20C9C0u) {
        ctx->pc = 0x20C9C4u;
        goto label_20c9c4;
    }
    ctx->pc = 0x20C9BCu;
    {
        const bool branch_taken_0x20c9bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c9bc) {
            ctx->pc = 0x20CD50u;
            goto label_20cd50;
        }
    }
    ctx->pc = 0x20C9C4u;
label_20c9c4:
    // 0x20c9c4: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x20c9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20c9c8:
    // 0x20c9c8: 0x246400c4  addiu       $a0, $v1, 0xC4
    ctx->pc = 0x20c9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 196));
label_20c9cc:
    // 0x20c9cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20c9ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20c9d0:
    // 0x20c9d0: 0xc082aa4  jal         func_20AA90
label_20c9d4:
    if (ctx->pc == 0x20C9D4u) {
        ctx->pc = 0x20C9D8u;
        goto label_20c9d8;
    }
    ctx->pc = 0x20C9D0u;
    SET_GPR_U32(ctx, 31, 0x20C9D8u);
    ctx->pc = 0x20AA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AA90u, 0x20C9D0u, 0x20C9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C9D8u;
label_20c9d8:
    // 0x20c9d8: 0x27a30188  addiu       $v1, $sp, 0x188
    ctx->pc = 0x20c9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
label_20c9dc:
    // 0x20c9dc: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x20c9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20c9e0:
    // 0x20c9e0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x20c9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20c9e4:
    // 0x20c9e4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x20c9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20c9e8:
    // 0x20c9e8: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x20c9e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_20c9ec:
    // 0x20c9ec: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x20c9ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_20c9f0:
    // 0x20c9f0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x20c9f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_20c9f4:
    // 0x20c9f4: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x20c9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20c9f8:
    // 0x20c9f8: 0x244400c4  addiu       $a0, $v0, 0xC4
    ctx->pc = 0x20c9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 196));
label_20c9fc:
    // 0x20c9fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20c9fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20ca00:
    // 0x20ca00: 0xc082aa4  jal         func_20AA90
label_20ca04:
    if (ctx->pc == 0x20CA04u) {
        ctx->pc = 0x20CA08u;
        goto label_20ca08;
    }
    ctx->pc = 0x20CA00u;
    SET_GPR_U32(ctx, 31, 0x20CA08u);
    ctx->pc = 0x20AA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AA90u, 0x20CA00u, 0x20CA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CA08u;
label_20ca08:
    // 0x20ca08: 0x27a40178  addiu       $a0, $sp, 0x178
    ctx->pc = 0x20ca08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
label_20ca0c:
    // 0x20ca0c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x20ca0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20ca10:
    // 0x20ca10: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x20ca10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20ca14:
    // 0x20ca14: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x20ca14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20ca18:
    // 0x20ca18: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x20ca18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_20ca1c:
    // 0x20ca1c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x20ca1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_20ca20:
    // 0x20ca20: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x20ca20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_20ca24:
    // 0x20ca24: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x20ca24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20ca28:
    // 0x20ca28: 0x246400c4  addiu       $a0, $v1, 0xC4
    ctx->pc = 0x20ca28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 196));
label_20ca2c:
    // 0x20ca2c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20ca2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20ca30:
    // 0x20ca30: 0xc082aa4  jal         func_20AA90
label_20ca34:
    if (ctx->pc == 0x20CA34u) {
        ctx->pc = 0x20CA38u;
        goto label_20ca38;
    }
    ctx->pc = 0x20CA30u;
    SET_GPR_U32(ctx, 31, 0x20CA38u);
    ctx->pc = 0x20AA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AA90u, 0x20CA30u, 0x20CA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CA38u;
label_20ca38:
    // 0x20ca38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20ca38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20ca3c:
    // 0x20ca3c: 0x27a20168  addiu       $v0, $sp, 0x168
    ctx->pc = 0x20ca3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
label_20ca40:
    // 0x20ca40: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x20ca40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20ca44:
    // 0x20ca44: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x20ca44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20ca48:
    // 0x20ca48: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x20ca48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20ca4c:
    // 0x20ca4c: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x20ca4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_20ca50:
    // 0x20ca50: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x20ca50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_20ca54:
    // 0x20ca54: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x20ca54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_20ca58:
    // 0x20ca58: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x20ca58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20ca5c:
    // 0x20ca5c: 0x244400c4  addiu       $a0, $v0, 0xC4
    ctx->pc = 0x20ca5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 196));
label_20ca60:
    // 0x20ca60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20ca60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20ca64:
    // 0x20ca64: 0xc082aa4  jal         func_20AA90
label_20ca68:
    if (ctx->pc == 0x20CA68u) {
        ctx->pc = 0x20CA6Cu;
        goto label_20ca6c;
    }
    ctx->pc = 0x20CA64u;
    SET_GPR_U32(ctx, 31, 0x20CA6Cu);
    ctx->pc = 0x20AA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AA90u, 0x20CA64u, 0x20CA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CA6Cu;
label_20ca6c:
    // 0x20ca6c: 0x27a30158  addiu       $v1, $sp, 0x158
    ctx->pc = 0x20ca6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
label_20ca70:
    // 0x20ca70: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x20ca70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20ca74:
    // 0x20ca74: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x20ca74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20ca78:
    // 0x20ca78: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x20ca78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20ca7c:
    // 0x20ca7c: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x20ca7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_20ca80:
    // 0x20ca80: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x20ca80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_20ca84:
    // 0x20ca84: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x20ca84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_20ca88:
    // 0x20ca88: 0xc7a10188  lwc1        $f1, 0x188($sp)
    ctx->pc = 0x20ca88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20ca8c:
    // 0x20ca8c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20ca8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_20ca90:
    // 0x20ca90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20ca90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20ca94:
    // 0x20ca94: 0x0  nop
    ctx->pc = 0x20ca94u;
    // NOP
label_20ca98:
    // 0x20ca98: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x20ca98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_20ca9c:
    // 0x20ca9c: 0xe7a00188  swc1        $f0, 0x188($sp)
    ctx->pc = 0x20ca9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_20caa0:
    // 0x20caa0: 0xc7a10178  lwc1        $f1, 0x178($sp)
    ctx->pc = 0x20caa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20caa4:
    // 0x20caa4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x20caa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_20caa8:
    // 0x20caa8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20caa8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20caac:
    // 0x20caac: 0x0  nop
    ctx->pc = 0x20caacu;
    // NOP
label_20cab0:
    // 0x20cab0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x20cab0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_20cab4:
    // 0x20cab4: 0xe7a00178  swc1        $f0, 0x178($sp)
    ctx->pc = 0x20cab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_20cab8:
    // 0x20cab8: 0xc7a10170  lwc1        $f1, 0x170($sp)
    ctx->pc = 0x20cab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20cabc:
    // 0x20cabc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20cabcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_20cac0:
    // 0x20cac0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20cac0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20cac4:
    // 0x20cac4: 0x0  nop
    ctx->pc = 0x20cac4u;
    // NOP
label_20cac8:
    // 0x20cac8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x20cac8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_20cacc:
    // 0x20cacc: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x20caccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_20cad0:
    // 0x20cad0: 0xc7a20160  lwc1        $f2, 0x160($sp)
    ctx->pc = 0x20cad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20cad4:
    // 0x20cad4: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x20cad4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_20cad8:
    // 0x20cad8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x20cad8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20cadc:
    // 0x20cadc: 0x0  nop
    ctx->pc = 0x20cadcu;
    // NOP
label_20cae0:
    // 0x20cae0: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x20cae0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_20cae4:
    // 0x20cae4: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x20cae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_20cae8:
    // 0x20cae8: 0x27a20178  addiu       $v0, $sp, 0x178
    ctx->pc = 0x20cae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
label_20caec:
    // 0x20caec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20caecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20caf0:
    // 0x20caf0: 0x27a50188  addiu       $a1, $sp, 0x188
    ctx->pc = 0x20caf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
label_20caf4:
    // 0x20caf4: 0x2786b6b4  addiu       $a2, $gp, -0x494C
    ctx->pc = 0x20caf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948532));
label_20caf8:
    // 0x20caf8: 0x2787b6b4  addiu       $a3, $gp, -0x494C
    ctx->pc = 0x20caf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948532));
label_20cafc:
    // 0x20cafc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20cafcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20cb00:
    // 0x20cb00: 0xc11f1cc  jal         func_47C730
label_20cb04:
    if (ctx->pc == 0x20CB04u) {
        ctx->pc = 0x20CB08u;
        goto label_20cb08;
    }
    ctx->pc = 0x20CB00u;
    SET_GPR_U32(ctx, 31, 0x20CB08u);
    ctx->pc = 0x47C730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C730u, 0x20CB00u, 0x20CB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CB08u;
label_20cb08:
    // 0x20cb08: 0x27a40158  addiu       $a0, $sp, 0x158
    ctx->pc = 0x20cb08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
label_20cb0c:
    // 0x20cb0c: 0x27a50168  addiu       $a1, $sp, 0x168
    ctx->pc = 0x20cb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
label_20cb10:
    // 0x20cb10: 0x2786b6b4  addiu       $a2, $gp, -0x494C
    ctx->pc = 0x20cb10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948532));
label_20cb14:
    // 0x20cb14: 0x2787b6b4  addiu       $a3, $gp, -0x494C
    ctx->pc = 0x20cb14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948532));
label_20cb18:
    // 0x20cb18: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20cb18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20cb1c:
    // 0x20cb1c: 0xc11f1cc  jal         func_47C730
label_20cb20:
    if (ctx->pc == 0x20CB20u) {
        ctx->pc = 0x20CB24u;
        goto label_20cb24;
    }
    ctx->pc = 0x20CB1Cu;
    SET_GPR_U32(ctx, 31, 0x20CB24u);
    ctx->pc = 0x47C730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C730u, 0x20CB1Cu, 0x20CB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CB24u;
label_20cb24:
    // 0x20cb24: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x20cb24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20cb28:
    // 0x20cb28: 0x246400c4  addiu       $a0, $v1, 0xC4
    ctx->pc = 0x20cb28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 196));
label_20cb2c:
    // 0x20cb2c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20cb2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20cb30:
    // 0x20cb30: 0xc082aa4  jal         func_20AA90
label_20cb34:
    if (ctx->pc == 0x20CB34u) {
        ctx->pc = 0x20CB38u;
        goto label_20cb38;
    }
    ctx->pc = 0x20CB30u;
    SET_GPR_U32(ctx, 31, 0x20CB38u);
    ctx->pc = 0x20AA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AA90u, 0x20CB30u, 0x20CB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CB38u;
label_20cb38:
    // 0x20cb38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20cb38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20cb3c:
    // 0x20cb3c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x20cb3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20cb40:
    // 0x20cb40: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x20cb40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_20cb44:
    // 0x20cb44: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x20cb44u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_20cb48:
    // 0x20cb48: 0x0  nop
    ctx->pc = 0x20cb48u;
    // NOP
label_20cb4c:
    // 0x20cb4c: 0x46030081  sub.s       $f2, $f0, $f3
    ctx->pc = 0x20cb4cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_20cb50:
    // 0x20cb50: 0xe7a20148  swc1        $f2, 0x148($sp)
    ctx->pc = 0x20cb50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_20cb54:
    // 0x20cb54: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x20cb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20cb58:
    // 0x20cb58: 0x244400c4  addiu       $a0, $v0, 0xC4
    ctx->pc = 0x20cb58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 196));
label_20cb5c:
    // 0x20cb5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20cb5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20cb60:
    // 0x20cb60: 0xc082aa4  jal         func_20AA90
label_20cb64:
    if (ctx->pc == 0x20CB64u) {
        ctx->pc = 0x20CB68u;
        goto label_20cb68;
    }
    ctx->pc = 0x20CB60u;
    SET_GPR_U32(ctx, 31, 0x20CB68u);
    ctx->pc = 0x20AA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AA90u, 0x20CB60u, 0x20CB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CB68u;
label_20cb68:
    // 0x20cb68: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x20cb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20cb6c:
    // 0x20cb6c: 0xe7a1014c  swc1        $f1, 0x14C($sp)
    ctx->pc = 0x20cb6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_20cb70:
    // 0x20cb70: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x20cb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20cb74:
    // 0x20cb74: 0x244400c4  addiu       $a0, $v0, 0xC4
    ctx->pc = 0x20cb74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 196));
label_20cb78:
    // 0x20cb78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20cb78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20cb7c:
    // 0x20cb7c: 0xc082aa4  jal         func_20AA90
label_20cb80:
    if (ctx->pc == 0x20CB80u) {
        ctx->pc = 0x20CB84u;
        goto label_20cb84;
    }
    ctx->pc = 0x20CB7Cu;
    SET_GPR_U32(ctx, 31, 0x20CB84u);
    ctx->pc = 0x20AA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AA90u, 0x20CB7Cu, 0x20CB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CB84u;
label_20cb84:
    // 0x20cb84: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x20cb84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20cb88:
    // 0x20cb88: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x20cb88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_20cb8c:
    // 0x20cb8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20cb8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20cb90:
    // 0x20cb90: 0x0  nop
    ctx->pc = 0x20cb90u;
    // NOP
label_20cb94:
    // 0x20cb94: 0x46000901  sub.s       $f4, $f1, $f0
    ctx->pc = 0x20cb94u;
    ctx->f[4] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_20cb98:
    // 0x20cb98: 0xe7a40150  swc1        $f4, 0x150($sp)
    ctx->pc = 0x20cb98u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_20cb9c:
    // 0x20cb9c: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x20cb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20cba0:
    // 0x20cba0: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x20cba0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_20cba4:
    // 0x20cba4: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x20cba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_20cba8:
    // 0x20cba8: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x20cba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_20cbac:
    // 0x20cbac: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x20cbacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_20cbb0:
    // 0x20cbb0: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x20cbb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_20cbb4:
    // 0x20cbb4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x20cbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_20cbb8:
    // 0x20cbb8: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x20cbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_20cbbc:
    // 0x20cbbc: 0x8c6500f8  lw          $a1, 0xF8($v1)
    ctx->pc = 0x20cbbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 248)));
label_20cbc0:
    // 0x20cbc0: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x20cbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_20cbc4:
    // 0x20cbc4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20cbc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20cbc8:
    // 0x20cbc8: 0x27a50148  addiu       $a1, $sp, 0x148
    ctx->pc = 0x20cbc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
label_20cbcc:
    // 0x20cbcc: 0xc041d58  jal         func_107560
label_20cbd0:
    if (ctx->pc == 0x20CBD0u) {
        ctx->pc = 0x20CBD4u;
        goto label_20cbd4;
    }
    ctx->pc = 0x20CBCCu;
    SET_GPR_U32(ctx, 31, 0x20CBD4u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x20CBCCu, 0x20CBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CBD4u;
label_20cbd4:
    // 0x20cbd4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x20cbd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20cbd8:
    // 0x20cbd8: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x20cbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20cbdc:
    // 0x20cbdc: 0x244400c4  addiu       $a0, $v0, 0xC4
    ctx->pc = 0x20cbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 196));
label_20cbe0:
    // 0x20cbe0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20cbe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20cbe4:
    // 0x20cbe4: 0xc082aa4  jal         func_20AA90
label_20cbe8:
    if (ctx->pc == 0x20CBE8u) {
        ctx->pc = 0x20CBECu;
        goto label_20cbec;
    }
    ctx->pc = 0x20CBE4u;
    SET_GPR_U32(ctx, 31, 0x20CBECu);
    ctx->pc = 0x20AA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AA90u, 0x20CBE4u, 0x20CBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CBECu;
label_20cbec:
    // 0x20cbec: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x20cbecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_20cbf0:
    // 0x20cbf0: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x20cbf0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_20cbf4:
    // 0x20cbf4: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x20cbf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_20cbf8:
    // 0x20cbf8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20cbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_20cbfc:
    // 0x20cbfc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x20cbfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_20cc00:
    // 0x20cc00: 0x0  nop
    ctx->pc = 0x20cc00u;
    // NOP
label_20cc04:
    // 0x20cc04: 0x46021841  sub.s       $f1, $f3, $f2
    ctx->pc = 0x20cc04u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_20cc08:
    // 0x20cc08: 0xe7a10138  swc1        $f1, 0x138($sp)
    ctx->pc = 0x20cc08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_20cc0c:
    // 0x20cc0c: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x20cc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20cc10:
    // 0x20cc10: 0x248500c4  addiu       $a1, $a0, 0xC4
    ctx->pc = 0x20cc10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 196));
label_20cc14:
    // 0x20cc14: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x20cc14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20cc18:
    // 0x20cc18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20cc18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20cc1c:
    // 0x20cc1c: 0xc082aa4  jal         func_20AA90
label_20cc20:
    if (ctx->pc == 0x20CC20u) {
        ctx->pc = 0x20CC24u;
        goto label_20cc24;
    }
    ctx->pc = 0x20CC1Cu;
    SET_GPR_U32(ctx, 31, 0x20CC24u);
    ctx->pc = 0x20AA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AA90u, 0x20CC1Cu, 0x20CC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CC24u;
label_20cc24:
    // 0x20cc24: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x20cc24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20cc28:
    // 0x20cc28: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x20cc28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_20cc2c:
    // 0x20cc2c: 0x8fa501f0  lw          $a1, 0x1F0($sp)
    ctx->pc = 0x20cc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20cc30:
    // 0x20cc30: 0x24a600c4  addiu       $a2, $a1, 0xC4
    ctx->pc = 0x20cc30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 196));
label_20cc34:
    // 0x20cc34: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x20cc34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_20cc38:
    // 0x20cc38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20cc38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20cc3c:
    // 0x20cc3c: 0xc082aa4  jal         func_20AA90
label_20cc40:
    if (ctx->pc == 0x20CC40u) {
        ctx->pc = 0x20CC44u;
        goto label_20cc44;
    }
    ctx->pc = 0x20CC3Cu;
    SET_GPR_U32(ctx, 31, 0x20CC44u);
    ctx->pc = 0x20AA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AA90u, 0x20CC3Cu, 0x20CC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CC44u;
label_20cc44:
    // 0x20cc44: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x20cc44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20cc48:
    // 0x20cc48: 0x3c154040  lui         $s5, 0x4040
    ctx->pc = 0x20cc48u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)16448 << 16));
label_20cc4c:
    // 0x20cc4c: 0x44952000  mtc1        $s5, $f4
    ctx->pc = 0x20cc4cu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_20cc50:
    // 0x20cc50: 0x0  nop
    ctx->pc = 0x20cc50u;
    // NOP
label_20cc54:
    // 0x20cc54: 0x460020c0  add.s       $f3, $f4, $f0
    ctx->pc = 0x20cc54u;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_20cc58:
    // 0x20cc58: 0xe7a30140  swc1        $f3, 0x140($sp)
    ctx->pc = 0x20cc58u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_20cc5c:
    // 0x20cc5c: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x20cc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_20cc60:
    // 0x20cc60: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x20cc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_20cc64:
    // 0x20cc64: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x20cc64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20cc68:
    // 0x20cc68: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x20cc68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_20cc6c:
    // 0x20cc6c: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x20cc6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_20cc70:
    // 0x20cc70: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x20cc70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_20cc74:
    // 0x20cc74: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x20cc74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20cc78:
    // 0x20cc78: 0x8c6400f8  lw          $a0, 0xF8($v1)
    ctx->pc = 0x20cc78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 248)));
label_20cc7c:
    // 0x20cc7c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x20cc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_20cc80:
    // 0x20cc80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20cc80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20cc84:
    // 0x20cc84: 0x27a50138  addiu       $a1, $sp, 0x138
    ctx->pc = 0x20cc84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
label_20cc88:
    // 0x20cc88: 0xc041d58  jal         func_107560
label_20cc8c:
    if (ctx->pc == 0x20CC8Cu) {
        ctx->pc = 0x20CC90u;
        goto label_20cc90;
    }
    ctx->pc = 0x20CC88u;
    SET_GPR_U32(ctx, 31, 0x20CC90u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x20CC88u, 0x20CC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CC90u;
label_20cc90:
    // 0x20cc90: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x20cc90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20cc94:
    // 0x20cc94: 0x248200c4  addiu       $v0, $a0, 0xC4
    ctx->pc = 0x20cc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 196));
label_20cc98:
    // 0x20cc98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20cc98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20cc9c:
    // 0x20cc9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20cc9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20cca0:
    // 0x20cca0: 0xc082aa4  jal         func_20AA90
label_20cca4:
    if (ctx->pc == 0x20CCA4u) {
        ctx->pc = 0x20CCA8u;
        goto label_20cca8;
    }
    ctx->pc = 0x20CCA0u;
    SET_GPR_U32(ctx, 31, 0x20CCA8u);
    ctx->pc = 0x20AA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AA90u, 0x20CCA0u, 0x20CCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CCA8u;
label_20cca8:
    // 0x20cca8: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x20cca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20ccac:
    // 0x20ccac: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x20ccacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_20ccb0:
    // 0x20ccb0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20ccb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20ccb4:
    // 0x20ccb4: 0x0  nop
    ctx->pc = 0x20ccb4u;
    // NOP
label_20ccb8:
    // 0x20ccb8: 0x46020800  add.s       $f0, $f1, $f2
    ctx->pc = 0x20ccb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_20ccbc:
    // 0x20ccbc: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x20ccbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_20ccc0:
    // 0x20ccc0: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x20ccc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20ccc4:
    // 0x20ccc4: 0x244400c4  addiu       $a0, $v0, 0xC4
    ctx->pc = 0x20ccc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 196));
label_20ccc8:
    // 0x20ccc8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20ccc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20cccc:
    // 0x20cccc: 0xc082aa4  jal         func_20AA90
label_20ccd0:
    if (ctx->pc == 0x20CCD0u) {
        ctx->pc = 0x20CCD4u;
        goto label_20ccd4;
    }
    ctx->pc = 0x20CCCCu;
    SET_GPR_U32(ctx, 31, 0x20CCD4u);
    ctx->pc = 0x20AA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AA90u, 0x20CCCCu, 0x20CCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CCD4u;
label_20ccd4:
    // 0x20ccd4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x20ccd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20ccd8:
    // 0x20ccd8: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x20ccd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_20ccdc:
    // 0x20ccdc: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x20ccdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20cce0:
    // 0x20cce0: 0x248500c4  addiu       $a1, $a0, 0xC4
    ctx->pc = 0x20cce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 196));
label_20cce4:
    // 0x20cce4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x20cce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20cce8:
    // 0x20cce8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20cce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20ccec:
    // 0x20ccec: 0xc082aa4  jal         func_20AA90
label_20ccf0:
    if (ctx->pc == 0x20CCF0u) {
        ctx->pc = 0x20CCF4u;
        goto label_20ccf4;
    }
    ctx->pc = 0x20CCECu;
    SET_GPR_U32(ctx, 31, 0x20CCF4u);
    ctx->pc = 0x20AA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AA90u, 0x20CCECu, 0x20CCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CCF4u;
label_20ccf4:
    // 0x20ccf4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x20ccf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20ccf8:
    // 0x20ccf8: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x20ccf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_20ccfc:
    // 0x20ccfc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20ccfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_20cd00:
    // 0x20cd00: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x20cd00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_20cd04:
    // 0x20cd04: 0x0  nop
    ctx->pc = 0x20cd04u;
    // NOP
label_20cd08:
    // 0x20cd08: 0x46032081  sub.s       $f2, $f4, $f3
    ctx->pc = 0x20cd08u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_20cd0c:
    // 0x20cd0c: 0xe7a20130  swc1        $f2, 0x130($sp)
    ctx->pc = 0x20cd0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_20cd10:
    // 0x20cd10: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x20cd10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_20cd14:
    // 0x20cd14: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x20cd14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_20cd18:
    // 0x20cd18: 0x24430002  addiu       $v1, $v0, 0x2
    ctx->pc = 0x20cd18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_20cd1c:
    // 0x20cd1c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x20cd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_20cd20:
    // 0x20cd20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20cd20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20cd24:
    // 0x20cd24: 0x2b880  sll         $s7, $v0, 2
    ctx->pc = 0x20cd24u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_20cd28:
    // 0x20cd28: 0x8fb101f0  lw          $s1, 0x1F0($sp)
    ctx->pc = 0x20cd28u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20cd2c:
    // 0x20cd2c: 0x8e2500f8  lw          $a1, 0xF8($s1)
    ctx->pc = 0x20cd2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
label_20cd30:
    // 0x20cd30: 0xb73021  addu        $a2, $a1, $s7
    ctx->pc = 0x20cd30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
label_20cd34:
    // 0x20cd34: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x20cd34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_20cd38:
    // 0x20cd38: 0x27a20128  addiu       $v0, $sp, 0x128
    ctx->pc = 0x20cd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
label_20cd3c:
    // 0x20cd3c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20cd3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20cd40:
    // 0x20cd40: 0xc041d58  jal         func_107560
label_20cd44:
    if (ctx->pc == 0x20CD44u) {
        ctx->pc = 0x20CD48u;
        goto label_20cd48;
    }
    ctx->pc = 0x20CD40u;
    SET_GPR_U32(ctx, 31, 0x20CD48u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x20CD40u, 0x20CD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CD48u;
label_20cd48:
    // 0x20cd48: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x20cd48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_20cd4c:
    // 0x20cd4c: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x20cd4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_20cd50:
    // 0x20cd50: 0x21e102b  sltu        $v0, $s0, $fp
    ctx->pc = 0x20cd50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_20cd54:
    // 0x20cd54: 0x1440ff1b  bnez        $v0, . + 4 + (-0xE5 << 2)
label_20cd58:
    if (ctx->pc == 0x20CD58u) {
        ctx->pc = 0x20CD5Cu;
        goto label_20cd5c;
    }
    ctx->pc = 0x20CD54u;
    {
        const bool branch_taken_0x20cd54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20cd54) {
            ctx->pc = 0x20C9C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20c9c4;
        }
    }
    ctx->pc = 0x20CD5Cu;
label_20cd5c:
    // 0x20cd5c: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x20cd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20cd60:
    // 0x20cd60: 0xc48100dc  lwc1        $f1, 0xDC($a0)
    ctx->pc = 0x20cd60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20cd64:
    // 0x20cd64: 0xc7a001c8  lwc1        $f0, 0x1C8($sp)
    ctx->pc = 0x20cd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20cd68:
    // 0x20cd68: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x20cd68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_20cd6c:
    // 0x20cd6c: 0xc7a401ec  lwc1        $f4, 0x1EC($sp)
    ctx->pc = 0x20cd6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_20cd70:
    // 0x20cd70: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x20cd70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20cd74:
    // 0x20cd74: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x20cd74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_20cd78:
    // 0x20cd78: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x20cd78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_20cd7c:
    // 0x20cd7c: 0xc44300e8  lwc1        $f3, 0xE8($v0)
    ctx->pc = 0x20cd7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_20cd80:
    // 0x20cd80: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x20cd80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20cd84:
    // 0x20cd84: 0x0  nop
    ctx->pc = 0x20cd84u;
    // NOP
label_20cd88:
    // 0x20cd88: 0x46030818  adda.s      $f1, $f3
    ctx->pc = 0x20cd88u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[3]));
label_20cd8c:
    // 0x20cd8c: 0x4600209c  madd.s      $f2, $f4, $f0
    ctx->pc = 0x20cd8cu;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[0]));
label_20cd90:
    // 0x20cd90: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x20cd90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20cd94:
    // 0x20cd94: 0xe4820140  swc1        $f2, 0x140($a0)
    ctx->pc = 0x20cd94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 320), bits); }
label_20cd98:
    // 0x20cd98: 0x8fa501f0  lw          $a1, 0x1F0($sp)
    ctx->pc = 0x20cd98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20cd9c:
    // 0x20cd9c: 0xc4a100ec  lwc1        $f1, 0xEC($a1)
    ctx->pc = 0x20cd9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20cda0:
    // 0x20cda0: 0x3c064248  lui         $a2, 0x4248
    ctx->pc = 0x20cda0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16968 << 16));
label_20cda4:
    // 0x20cda4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x20cda4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20cda8:
    // 0x20cda8: 0x0  nop
    ctx->pc = 0x20cda8u;
    // NOP
label_20cdac:
    // 0x20cdac: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x20cdacu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_20cdb0:
    // 0x20cdb0: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x20cdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20cdb4:
    // 0x20cdb4: 0xe44c0144  swc1        $f12, 0x144($v0)
    ctx->pc = 0x20cdb4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 324), bits); }
label_20cdb8:
    // 0x20cdb8: 0x8fa501f0  lw          $a1, 0x1F0($sp)
    ctx->pc = 0x20cdb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20cdbc:
    // 0x20cdbc: 0xc4a000dc  lwc1        $f0, 0xDC($a1)
    ctx->pc = 0x20cdbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20cdc0:
    // 0x20cdc0: 0xc7ac01cc  lwc1        $f12, 0x1CC($sp)
    ctx->pc = 0x20cdc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_20cdc4:
    // 0x20cdc4: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x20cdc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_20cdc8:
    // 0x20cdc8: 0xc7a301ec  lwc1        $f3, 0x1EC($sp)
    ctx->pc = 0x20cdc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_20cdcc:
    // 0x20cdcc: 0x8fa601f0  lw          $a2, 0x1F0($sp)
    ctx->pc = 0x20cdccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20cdd0:
    // 0x20cdd0: 0xc4c200f0  lwc1        $f2, 0xF0($a2)
    ctx->pc = 0x20cdd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20cdd4:
    // 0x20cdd4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x20cdd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20cdd8:
    // 0x20cdd8: 0x0  nop
    ctx->pc = 0x20cdd8u;
    // NOP
label_20cddc:
    // 0x20cddc: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x20cddcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[2]));
label_20cde0:
    // 0x20cde0: 0x4600189c  madd.s      $f2, $f3, $f0
    ctx->pc = 0x20cde0u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_20cde4:
    // 0x20cde4: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x20cde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20cde8:
    // 0x20cde8: 0xe4420148  swc1        $f2, 0x148($v0)
    ctx->pc = 0x20cde8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 328), bits); }
label_20cdec:
    // 0x20cdec: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x20cdecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20cdf0:
    // 0x20cdf0: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x20cdf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_20cdf4:
    // 0x20cdf4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x20cdf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20cdf8:
    // 0x20cdf8: 0x24460140  addiu       $a2, $v0, 0x140
    ctx->pc = 0x20cdf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
label_20cdfc:
    // 0x20cdfc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x20cdfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_20ce00:
    // 0x20ce00: 0x27a701e0  addiu       $a3, $sp, 0x1E0
    ctx->pc = 0x20ce00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_20ce04:
    // 0x20ce04: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x20ce04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_20ce08:
    // 0x20ce08: 0xc122db4  jal         func_48B6D0
label_20ce0c:
    if (ctx->pc == 0x20CE0Cu) {
        ctx->pc = 0x20CE10u;
        goto label_20ce10;
    }
    ctx->pc = 0x20CE08u;
    SET_GPR_U32(ctx, 31, 0x20CE10u);
    ctx->pc = 0x48B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B6D0u, 0x20CE08u, 0x20CE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CE10u;
label_20ce10:
    // 0x20ce10: 0x8fa501f0  lw          $a1, 0x1F0($sp)
    ctx->pc = 0x20ce10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20ce14:
    // 0x20ce14: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x20ce14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20ce18:
    // 0x20ce18: 0xc06479c  jal         func_191E70
label_20ce1c:
    if (ctx->pc == 0x20CE1Cu) {
        ctx->pc = 0x20CE20u;
        goto label_20ce20;
    }
    ctx->pc = 0x20CE18u;
    SET_GPR_U32(ctx, 31, 0x20CE20u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x20CE18u, 0x20CE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CE20u;
label_20ce20:
    // 0x20ce20: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x20ce20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_20ce24:
    // 0x20ce24: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x20ce24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20ce28:
    // 0x20ce28: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x20ce28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_20ce2c:
    // 0x20ce2c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20ce2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20ce30:
    // 0x20ce30: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20ce30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20ce34:
    // 0x20ce34: 0xc05612c  jal         func_1584B0
label_20ce38:
    if (ctx->pc == 0x20CE38u) {
        ctx->pc = 0x20CE3Cu;
        goto label_20ce3c;
    }
    ctx->pc = 0x20CE34u;
    SET_GPR_U32(ctx, 31, 0x20CE3Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x20CE34u, 0x20CE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CE3Cu;
label_20ce3c:
    // 0x20ce3c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20ce3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20ce40:
    // 0x20ce40: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x20ce40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20ce44:
    // 0x20ce44: 0x7ba400c0  lq          $a0, 0xC0($sp)
    ctx->pc = 0x20ce44u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_20ce48:
    // 0x20ce48: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x20ce48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_20ce4c:
    // 0x20ce4c: 0x27a70120  addiu       $a3, $sp, 0x120
    ctx->pc = 0x20ce4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_20ce50:
    // 0x20ce50: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x20ce50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_20ce54:
    // 0x20ce54: 0xc08c744  jal         func_231D10
label_20ce58:
    if (ctx->pc == 0x20CE58u) {
        ctx->pc = 0x20CE5Cu;
        goto label_20ce5c;
    }
    ctx->pc = 0x20CE54u;
    SET_GPR_U32(ctx, 31, 0x20CE5Cu);
    ctx->pc = 0x231D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231D10u, 0x20CE54u, 0x20CE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CE5Cu;
label_20ce5c:
    // 0x20ce5c: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x20ce5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20ce60:
    // 0x20ce60: 0xc06479c  jal         func_191E70
label_20ce64:
    if (ctx->pc == 0x20CE64u) {
        ctx->pc = 0x20CE68u;
        goto label_20ce68;
    }
    ctx->pc = 0x20CE60u;
    SET_GPR_U32(ctx, 31, 0x20CE68u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x20CE60u, 0x20CE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CE68u;
label_20ce68:
    // 0x20ce68: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x20ce68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_20ce6c:
    // 0x20ce6c: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x20ce6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20ce70:
    // 0x20ce70: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x20ce70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_20ce74:
    // 0x20ce74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20ce74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20ce78:
    // 0x20ce78: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x20ce78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20ce7c:
    // 0x20ce7c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x20ce7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_20ce80:
    // 0x20ce80: 0xc05612c  jal         func_1584B0
label_20ce84:
    if (ctx->pc == 0x20CE84u) {
        ctx->pc = 0x20CE88u;
        goto label_20ce88;
    }
    ctx->pc = 0x20CE80u;
    SET_GPR_U32(ctx, 31, 0x20CE88u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x20CE80u, 0x20CE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CE88u;
label_20ce88:
    // 0x20ce88: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x20ce88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20ce8c:
    // 0x20ce8c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x20ce8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_20ce90:
    // 0x20ce90: 0x7ba400b0  lq          $a0, 0xB0($sp)
    ctx->pc = 0x20ce90u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_20ce94:
    // 0x20ce94: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20ce94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20ce98:
    // 0x20ce98: 0x27a60118  addiu       $a2, $sp, 0x118
    ctx->pc = 0x20ce98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
label_20ce9c:
    // 0x20ce9c: 0xc08c6c8  jal         func_231B20
label_20cea0:
    if (ctx->pc == 0x20CEA0u) {
        ctx->pc = 0x20CEA4u;
        goto label_20cea4;
    }
    ctx->pc = 0x20CE9Cu;
    SET_GPR_U32(ctx, 31, 0x20CEA4u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x20CE9Cu, 0x20CEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CEA4u;
label_20cea4:
    // 0x20cea4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20cea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20cea8:
    // 0x20cea8: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x20cea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20ceac:
    // 0x20ceac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20ceacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20ceb0:
    // 0x20ceb0: 0xc06479c  jal         func_191E70
label_20ceb4:
    if (ctx->pc == 0x20CEB4u) {
        ctx->pc = 0x20CEB8u;
        goto label_20ceb8;
    }
    ctx->pc = 0x20CEB0u;
    SET_GPR_U32(ctx, 31, 0x20CEB8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x20CEB0u, 0x20CEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CEB8u;
label_20ceb8:
    // 0x20ceb8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x20ceb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20cebc:
    // 0x20cebc: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x20cebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20cec0:
    // 0x20cec0: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x20cec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_20cec4:
    // 0x20cec4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20cec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20cec8:
    // 0x20cec8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20cec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20cecc:
    // 0x20cecc: 0xc05612c  jal         func_1584B0
label_20ced0:
    if (ctx->pc == 0x20CED0u) {
        ctx->pc = 0x20CED4u;
        goto label_20ced4;
    }
    ctx->pc = 0x20CECCu;
    SET_GPR_U32(ctx, 31, 0x20CED4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x20CECCu, 0x20CED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CED4u;
label_20ced4:
    // 0x20ced4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20ced4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20ced8:
    // 0x20ced8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x20ced8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_20cedc:
    // 0x20cedc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x20cedcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_20cee0:
    // 0x20cee0: 0xc7a10118  lwc1        $f1, 0x118($sp)
    ctx->pc = 0x20cee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20cee4:
    // 0x20cee4: 0xc7a001e0  lwc1        $f0, 0x1E0($sp)
    ctx->pc = 0x20cee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20cee8:
    // 0x20cee8: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x20cee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_20ceec:
    // 0x20ceec: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x20ceecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_20cef0:
    // 0x20cef0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x20cef0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_20cef4:
    // 0x20cef4: 0x0  nop
    ctx->pc = 0x20cef4u;
    // NOP
label_20cef8:
    // 0x20cef8: 0x4600a018  adda.s      $f20, $f0
    ctx->pc = 0x20cef8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[20], ctx->f[0]));
label_20cefc:
    // 0x20cefc: 0x4601131d  msub.s      $f12, $f2, $f1
    ctx->pc = 0x20cefcu;
    ctx->f[12] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[1]));
label_20cf00:
    // 0x20cf00: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x20cf00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_20cf04:
    // 0x20cf04: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x20cf04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_20cf08:
    // 0x20cf08: 0xc7a1011c  lwc1        $f1, 0x11C($sp)
    ctx->pc = 0x20cf08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20cf0c:
    // 0x20cf0c: 0xc7b401e4  lwc1        $f20, 0x1E4($sp)
    ctx->pc = 0x20cf0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_20cf10:
    // 0x20cf10: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x20cf10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20cf14:
    // 0x20cf14: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x20cf14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_20cf18:
    // 0x20cf18: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x20cf18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_20cf1c:
    // 0x20cf1c: 0x0  nop
    ctx->pc = 0x20cf1cu;
    // NOP
label_20cf20:
    // 0x20cf20: 0x4600b018  adda.s      $f22, $f0
    ctx->pc = 0x20cf20u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[22], ctx->f[0]));
label_20cf24:
    // 0x20cf24: 0x4601135d  msub.s      $f13, $f2, $f1
    ctx->pc = 0x20cf24u;
    ctx->f[13] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[1]));
label_20cf28:
    // 0x20cf28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20cf28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20cf2c:
    // 0x20cf2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20cf2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20cf30:
    // 0x20cf30: 0xc08c208  jal         func_230820
label_20cf34:
    if (ctx->pc == 0x20CF34u) {
        ctx->pc = 0x20CF38u;
        goto label_20cf38;
    }
    ctx->pc = 0x20CF30u;
    SET_GPR_U32(ctx, 31, 0x20CF38u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x20CF30u, 0x20CF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CF38u;
label_20cf38:
    // 0x20cf38: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x20cf38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20cf3c:
    // 0x20cf3c: 0x100000dc  b           . + 4 + (0xDC << 2)
label_20cf40:
    if (ctx->pc == 0x20CF40u) {
        ctx->pc = 0x20CF44u;
        goto label_20cf44;
    }
    ctx->pc = 0x20CF3Cu;
    {
        const bool branch_taken_0x20cf3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20cf3c) {
            ctx->pc = 0x20D2B0u;
            goto label_20d2b0;
        }
    }
    ctx->pc = 0x20CF44u;
label_20cf44:
    // 0x20cf44: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x20cf44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20cf48:
    // 0x20cf48: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x20cf48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_20cf4c:
    // 0x20cf4c: 0x8c830108  lw          $v1, 0x108($a0)
    ctx->pc = 0x20cf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 264)));
label_20cf50:
    // 0x20cf50: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x20cf50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20cf54:
    // 0x20cf54: 0xc4950000  lwc1        $f21, 0x0($a0)
    ctx->pc = 0x20cf54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_20cf58:
    // 0x20cf58: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x20cf58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_20cf5c:
    // 0x20cf5c: 0x0  nop
    ctx->pc = 0x20cf5cu;
    // NOP
label_20cf60:
    // 0x20cf60: 0x4614a836  c.le.s      $f21, $f20
    ctx->pc = 0x20cf60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20cf64:
    // 0x20cf64: 0x450100d0  bc1t        . + 4 + (0xD0 << 2)
label_20cf68:
    if (ctx->pc == 0x20CF68u) {
        ctx->pc = 0x20CF6Cu;
        goto label_20cf6c;
    }
    ctx->pc = 0x20CF64u;
    {
        const bool branch_taken_0x20cf64 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20cf64) {
            ctx->pc = 0x20D2A8u;
            goto label_20d2a8;
        }
    }
    ctx->pc = 0x20CF6Cu;
label_20cf6c:
    // 0x20cf6c: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x20cf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_20cf70:
    // 0x20cf70: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x20cf70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_20cf74:
    // 0x20cf74: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x20cf74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_20cf78:
    // 0x20cf78: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x20cf78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_20cf7c:
    // 0x20cf7c: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x20cf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20cf80:
    // 0x20cf80: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x20cf80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_20cf84:
    // 0x20cf84: 0x8c630108  lw          $v1, 0x108($v1)
    ctx->pc = 0x20cf84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_20cf88:
    // 0x20cf88: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x20cf88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20cf8c:
    // 0x20cf8c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x20cf8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20cf90:
    // 0x20cf90: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x20cf90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_20cf94:
    // 0x20cf94: 0x0  nop
    ctx->pc = 0x20cf94u;
    // NOP
label_20cf98:
    // 0x20cf98: 0x4601a018  adda.s      $f20, $f1
    ctx->pc = 0x20cf98u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[20], ctx->f[1]));
label_20cf9c:
    // 0x20cf9c: 0x4603101d  msub.s      $f0, $f2, $f3
    ctx->pc = 0x20cf9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_20cfa0:
    // 0x20cfa0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x20cfa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_20cfa4:
    // 0x20cfa4: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x20cfa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20cfa8:
    // 0x20cfa8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x20cfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_20cfac:
    // 0x20cfac: 0x8c840108  lw          $a0, 0x108($a0)
    ctx->pc = 0x20cfacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 264)));
label_20cfb0:
    // 0x20cfb0: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x20cfb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_20cfb4:
    // 0x20cfb4: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x20cfb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20cfb8:
    // 0x20cfb8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x20cfb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_20cfbc:
    // 0x20cfbc: 0x0  nop
    ctx->pc = 0x20cfbcu;
    // NOP
label_20cfc0:
    // 0x20cfc0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x20cfc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20cfc4:
    // 0x20cfc4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_20cfc8:
    if (ctx->pc == 0x20CFC8u) {
        ctx->pc = 0x20CFCCu;
        goto label_20cfcc;
    }
    ctx->pc = 0x20CFC4u;
    {
        const bool branch_taken_0x20cfc4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20cfc4) {
            ctx->pc = 0x20CFE4u;
            goto label_20cfe4;
        }
    }
    ctx->pc = 0x20CFCCu;
label_20cfcc:
    // 0x20cfcc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x20cfccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_20cfd0:
    // 0x20cfd0: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x20cfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20cfd4:
    // 0x20cfd4: 0x103880  sll         $a3, $s0, 2
    ctx->pc = 0x20cfd4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_20cfd8:
    // 0x20cfd8: 0x8c440108  lw          $a0, 0x108($v0)
    ctx->pc = 0x20cfd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
label_20cfdc:
    // 0x20cfdc: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x20cfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_20cfe0:
    // 0x20cfe0: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x20cfe0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_20cfe4:
    // 0x20cfe4: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x20cfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20cfe8:
    // 0x20cfe8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x20cfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_20cfec:
    // 0x20cfec: 0x8c640108  lw          $a0, 0x108($v1)
    ctx->pc = 0x20cfecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_20cff0:
    // 0x20cff0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x20cff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_20cff4:
    // 0x20cff4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x20cff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20cff8:
    // 0x20cff8: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x20cff8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
label_20cffc:
    // 0x20cffc: 0x4484a000  mtc1        $a0, $f20
    ctx->pc = 0x20cffcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_20d000:
    // 0x20d000: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x20d000u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_20d004:
    // 0x20d004: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x20d004u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20d008:
    // 0x20d008: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_20d00c:
    if (ctx->pc == 0x20D00Cu) {
        ctx->pc = 0x20D010u;
        goto label_20d010;
    }
    ctx->pc = 0x20D008u;
    {
        const bool branch_taken_0x20d008 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20d008) {
            ctx->pc = 0x20D020u;
            goto label_20d020;
        }
    }
    ctx->pc = 0x20D010u;
label_20d010:
    // 0x20d010: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x20d010u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_20d014:
    // 0x20d014: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x20d014u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_20d018:
    // 0x20d018: 0x10000006  b           . + 4 + (0x6 << 2)
label_20d01c:
    if (ctx->pc == 0x20D01Cu) {
        ctx->pc = 0x20D020u;
        goto label_20d020;
    }
    ctx->pc = 0x20D018u;
    {
        const bool branch_taken_0x20d018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d018) {
            ctx->pc = 0x20D034u;
            goto label_20d034;
        }
    }
    ctx->pc = 0x20D020u;
label_20d020:
    // 0x20d020: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x20d020u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_20d024:
    // 0x20d024: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x20d024u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_20d028:
    // 0x20d028: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x20d028u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_20d02c:
    // 0x20d02c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x20d02cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_20d030:
    // 0x20d030: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x20d030u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_20d034:
    // 0x20d034: 0x30b600ff  andi        $s6, $a1, 0xFF
    ctx->pc = 0x20d034u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_20d038:
    // 0x20d038: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x20d038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20d03c:
    // 0x20d03c: 0x102840  sll         $a1, $s0, 1
    ctx->pc = 0x20d03cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_20d040:
    // 0x20d040: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x20d040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_20d044:
    // 0x20d044: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x20d044u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_20d048:
    // 0x20d048: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x20d048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_20d04c:
    // 0x20d04c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x20d04cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_20d050:
    // 0x20d050: 0x8c630100  lw          $v1, 0x100($v1)
    ctx->pc = 0x20d050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
label_20d054:
    // 0x20d054: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x20d054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20d058:
    // 0x20d058: 0x2482000c  addiu       $v0, $a0, 0xC
    ctx->pc = 0x20d058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_20d05c:
    // 0x20d05c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x20d05cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20d060:
    // 0x20d060: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x20d060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_20d064:
    // 0x20d064: 0xa2860000  sb          $a2, 0x0($s4)
    ctx->pc = 0x20d064u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 6));
label_20d068:
    // 0x20d068: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x20d068u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_20d06c:
    // 0x20d06c: 0xa2870001  sb          $a3, 0x1($s4)
    ctx->pc = 0x20d06cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 7));
label_20d070:
    // 0x20d070: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x20d070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_20d074:
    // 0x20d074: 0xa2820002  sb          $v0, 0x2($s4)
    ctx->pc = 0x20d074u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2), (uint8_t)GPR_U32(ctx, 2));
label_20d078:
    // 0x20d078: 0xa2960003  sb          $s6, 0x3($s4)
    ctx->pc = 0x20d078u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 3), (uint8_t)GPR_U32(ctx, 22));
label_20d07c:
    // 0x20d07c: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x20d07cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_20d080:
    // 0x20d080: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x20d080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_20d084:
    // 0x20d084: 0x24550001  addiu       $s5, $v0, 0x1
    ctx->pc = 0x20d084u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20d088:
    // 0x20d088: 0x1528c0  sll         $a1, $s5, 3
    ctx->pc = 0x20d088u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
label_20d08c:
    // 0x20d08c: 0xb51021  addu        $v0, $a1, $s5
    ctx->pc = 0x20d08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
label_20d090:
    // 0x20d090: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x20d090u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_20d094:
    // 0x20d094: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x20d094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20d098:
    // 0x20d098: 0x8c850100  lw          $a1, 0x100($a0)
    ctx->pc = 0x20d098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
label_20d09c:
    // 0x20d09c: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x20d09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_20d0a0:
    // 0x20d0a0: 0x2451000c  addiu       $s1, $v0, 0xC
    ctx->pc = 0x20d0a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_20d0a4:
    // 0x20d0a4: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x20d0a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20d0a8:
    // 0x20d0a8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x20d0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_20d0ac:
    // 0x20d0ac: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x20d0acu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_20d0b0:
    // 0x20d0b0: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x20d0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_20d0b4:
    // 0x20d0b4: 0xa2640001  sb          $a0, 0x1($s3)
    ctx->pc = 0x20d0b4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 4));
label_20d0b8:
    // 0x20d0b8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x20d0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_20d0bc:
    // 0x20d0bc: 0xa2620002  sb          $v0, 0x2($s3)
    ctx->pc = 0x20d0bcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 2));
label_20d0c0:
    // 0x20d0c0: 0xa2760003  sb          $s6, 0x3($s3)
    ctx->pc = 0x20d0c0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 22));
label_20d0c4:
    // 0x20d0c4: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x20d0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_20d0c8:
    // 0x20d0c8: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x20d0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_20d0cc:
    // 0x20d0cc: 0x24820002  addiu       $v0, $a0, 0x2
    ctx->pc = 0x20d0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_20d0d0:
    // 0x20d0d0: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x20d0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_20d0d4:
    // 0x20d0d4: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x20d0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20d0d8:
    // 0x20d0d8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x20d0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_20d0dc:
    // 0x20d0dc: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x20d0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20d0e0:
    // 0x20d0e0: 0x8c630100  lw          $v1, 0x100($v1)
    ctx->pc = 0x20d0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
label_20d0e4:
    // 0x20d0e4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x20d0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20d0e8:
    // 0x20d0e8: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x20d0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_20d0ec:
    // 0x20d0ec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x20d0ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20d0f0:
    // 0x20d0f0: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x20d0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_20d0f4:
    // 0x20d0f4: 0xa2440000  sb          $a0, 0x0($s2)
    ctx->pc = 0x20d0f4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 4));
label_20d0f8:
    // 0x20d0f8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x20d0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_20d0fc:
    // 0x20d0fc: 0xa2420001  sb          $v0, 0x1($s2)
    ctx->pc = 0x20d0fcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
label_20d100:
    // 0x20d100: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x20d100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_20d104:
    // 0x20d104: 0xa2440002  sb          $a0, 0x2($s2)
    ctx->pc = 0x20d104u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 4));
label_20d108:
    // 0x20d108: 0xa2560003  sb          $s6, 0x3($s2)
    ctx->pc = 0x20d108u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 22));
label_20d10c:
    // 0x20d10c: 0x6c00006  bltz        $s6, . + 4 + (0x6 << 2)
label_20d110:
    if (ctx->pc == 0x20D110u) {
        ctx->pc = 0x20D114u;
        goto label_20d114;
    }
    ctx->pc = 0x20D10Cu;
    {
        const bool branch_taken_0x20d10c = (GPR_S32(ctx, 22) < 0);
        if (branch_taken_0x20d10c) {
            ctx->pc = 0x20D128u;
            goto label_20d128;
        }
    }
    ctx->pc = 0x20D114u;
label_20d114:
    // 0x20d114: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x20d114u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20d118:
    // 0x20d118: 0x0  nop
    ctx->pc = 0x20d118u;
    // NOP
label_20d11c:
    // 0x20d11c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x20d11cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_20d120:
    // 0x20d120: 0x10000008  b           . + 4 + (0x8 << 2)
label_20d124:
    if (ctx->pc == 0x20D124u) {
        ctx->pc = 0x20D128u;
        goto label_20d128;
    }
    ctx->pc = 0x20D120u;
    {
        const bool branch_taken_0x20d120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d120) {
            ctx->pc = 0x20D144u;
            goto label_20d144;
        }
    }
    ctx->pc = 0x20D128u;
label_20d128:
    // 0x20d128: 0x161042  srl         $v0, $s6, 1
    ctx->pc = 0x20d128u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 22), 1));
label_20d12c:
    // 0x20d12c: 0x32c30001  andi        $v1, $s6, 0x1
    ctx->pc = 0x20d12cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
label_20d130:
    // 0x20d130: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x20d130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_20d134:
    // 0x20d134: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20d134u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20d138:
    // 0x20d138: 0x0  nop
    ctx->pc = 0x20d138u;
    // NOP
label_20d13c:
    // 0x20d13c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x20d13cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_20d140:
    // 0x20d140: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x20d140u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_20d144:
    // 0x20d144: 0xc7808048  lwc1        $f0, -0x7FB8($gp)
    ctx->pc = 0x20d144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20d148:
    // 0x20d148: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x20d148u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_20d14c:
    // 0x20d14c: 0xe7a001e8  swc1        $f0, 0x1E8($sp)
    ctx->pc = 0x20d14cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
label_20d150:
    // 0x20d150: 0x8fa501f0  lw          $a1, 0x1F0($sp)
    ctx->pc = 0x20d150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20d154:
    // 0x20d154: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x20d154u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_20d158:
    // 0x20d158: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x20d158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_20d15c:
    // 0x20d15c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x20d15cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_20d160:
    // 0x20d160: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x20d160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20d164:
    // 0x20d164: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x20d164u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_20d168:
    // 0x20d168: 0x8ca20100  lw          $v0, 0x100($a1)
    ctx->pc = 0x20d168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 256)));
label_20d16c:
    // 0x20d16c: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x20d16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_20d170:
    // 0x20d170: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x20d170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20d174:
    // 0x20d174: 0xc7a101e8  lwc1        $f1, 0x1E8($sp)
    ctx->pc = 0x20d174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20d178:
    // 0x20d178: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x20d178u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_20d17c:
    // 0x20d17c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x20d17cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_20d180:
    // 0x20d180: 0x8fa501f0  lw          $a1, 0x1F0($sp)
    ctx->pc = 0x20d180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20d184:
    // 0x20d184: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x20d184u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_20d188:
    // 0x20d188: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x20d188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_20d18c:
    // 0x20d18c: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x20d18cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_20d190:
    // 0x20d190: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x20d190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_20d194:
    // 0x20d194: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x20d194u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_20d198:
    // 0x20d198: 0x8ca20100  lw          $v0, 0x100($a1)
    ctx->pc = 0x20d198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 256)));
label_20d19c:
    // 0x20d19c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x20d19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_20d1a0:
    // 0x20d1a0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x20d1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20d1a4:
    // 0x20d1a4: 0xc7a001e8  lwc1        $f0, 0x1E8($sp)
    ctx->pc = 0x20d1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20d1a8:
    // 0x20d1a8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x20d1a8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_20d1ac:
    // 0x20d1ac: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x20d1acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_20d1b0:
    // 0x20d1b0: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x20d1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_20d1b4:
    // 0x20d1b4: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x20d1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_20d1b8:
    // 0x20d1b8: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x20d1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_20d1bc:
    // 0x20d1bc: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x20d1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_20d1c0:
    // 0x20d1c0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x20d1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20d1c4:
    // 0x20d1c4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x20d1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_20d1c8:
    // 0x20d1c8: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x20d1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20d1cc:
    // 0x20d1cc: 0x8c820100  lw          $v0, 0x100($a0)
    ctx->pc = 0x20d1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
label_20d1d0:
    // 0x20d1d0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x20d1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20d1d4:
    // 0x20d1d4: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x20d1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20d1d8:
    // 0x20d1d8: 0xc7a001e8  lwc1        $f0, 0x1E8($sp)
    ctx->pc = 0x20d1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20d1dc:
    // 0x20d1dc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x20d1dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_20d1e0:
    // 0x20d1e0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x20d1e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_20d1e4:
    // 0x20d1e4: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x20d1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_20d1e8:
    // 0x20d1e8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x20d1e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_20d1ec:
    // 0x20d1ec: 0xc7a201e8  lwc1        $f2, 0x1E8($sp)
    ctx->pc = 0x20d1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20d1f0:
    // 0x20d1f0: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x20d1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_20d1f4:
    // 0x20d1f4: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x20d1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_20d1f8:
    // 0x20d1f8: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x20d1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20d1fc:
    // 0x20d1fc: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x20d1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_20d200:
    // 0x20d200: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x20d200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_20d204:
    // 0x20d204: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x20d204u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_20d208:
    // 0x20d208: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x20d208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20d20c:
    // 0x20d20c: 0x8c420100  lw          $v0, 0x100($v0)
    ctx->pc = 0x20d20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
label_20d210:
    // 0x20d210: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x20d210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_20d214:
    // 0x20d214: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x20d214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20d218:
    // 0x20d218: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20d218u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20d21c:
    // 0x20d21c: 0x0  nop
    ctx->pc = 0x20d21cu;
    // NOP
label_20d220:
    // 0x20d220: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x20d220u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_20d224:
    // 0x20d224: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x20d224u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_20d228:
    // 0x20d228: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x20d228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_20d22c:
    // 0x20d22c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x20d22cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_20d230:
    // 0x20d230: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x20d230u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_20d234:
    // 0x20d234: 0xc7a201e8  lwc1        $f2, 0x1E8($sp)
    ctx->pc = 0x20d234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20d238:
    // 0x20d238: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x20d238u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_20d23c:
    // 0x20d23c: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x20d23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_20d240:
    // 0x20d240: 0x24430002  addiu       $v1, $v0, 0x2
    ctx->pc = 0x20d240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_20d244:
    // 0x20d244: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x20d244u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_20d248:
    // 0x20d248: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x20d248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20d24c:
    // 0x20d24c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x20d24cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_20d250:
    // 0x20d250: 0x8fa501f0  lw          $a1, 0x1F0($sp)
    ctx->pc = 0x20d250u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20d254:
    // 0x20d254: 0x8ca60100  lw          $a2, 0x100($a1)
    ctx->pc = 0x20d254u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 256)));
label_20d258:
    // 0x20d258: 0xc23821  addu        $a3, $a2, $v0
    ctx->pc = 0x20d258u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_20d25c:
    // 0x20d25c: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x20d25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20d260:
    // 0x20d260: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20d260u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20d264:
    // 0x20d264: 0x0  nop
    ctx->pc = 0x20d264u;
    // NOP
label_20d268:
    // 0x20d268: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x20d268u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_20d26c:
    // 0x20d26c: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x20d26cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_20d270:
    // 0x20d270: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x20d270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_20d274:
    // 0x20d274: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x20d274u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_20d278:
    // 0x20d278: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x20d278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_20d27c:
    // 0x20d27c: 0x24850002  addiu       $a1, $a0, 0x2
    ctx->pc = 0x20d27cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_20d280:
    // 0x20d280: 0x530c0  sll         $a2, $a1, 3
    ctx->pc = 0x20d280u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_20d284:
    // 0x20d284: 0xc53821  addu        $a3, $a2, $a1
    ctx->pc = 0x20d284u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_20d288:
    // 0x20d288: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x20d288u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_20d28c:
    // 0x20d28c: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x20d28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20d290:
    // 0x20d290: 0x8c640100  lw          $a0, 0x100($v1)
    ctx->pc = 0x20d290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
label_20d294:
    // 0x20d294: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x20d294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_20d298:
    // 0x20d298: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x20d298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20d29c:
    // 0x20d29c: 0xc7a001e8  lwc1        $f0, 0x1E8($sp)
    ctx->pc = 0x20d29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20d2a0:
    // 0x20d2a0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x20d2a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_20d2a4:
    // 0x20d2a4: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x20d2a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_20d2a8:
    // 0x20d2a8: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x20d2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_20d2ac:
    // 0x20d2ac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x20d2acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20d2b0:
    // 0x20d2b0: 0x2e020064  sltiu       $v0, $s0, 0x64
    ctx->pc = 0x20d2b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)100) ? 1 : 0);
label_20d2b4:
    // 0x20d2b4: 0x1440ff23  bnez        $v0, . + 4 + (-0xDD << 2)
label_20d2b8:
    if (ctx->pc == 0x20D2B8u) {
        ctx->pc = 0x20D2BCu;
        goto label_20d2bc;
    }
    ctx->pc = 0x20D2B4u;
    {
        const bool branch_taken_0x20d2b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20d2b4) {
            ctx->pc = 0x20CF44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20cf44;
        }
    }
    ctx->pc = 0x20D2BCu;
label_20d2bc:
    // 0x20d2bc: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x20d2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20d2c0:
    // 0x20d2c0: 0xc064cb0  jal         func_1932C0
label_20d2c4:
    if (ctx->pc == 0x20D2C4u) {
        ctx->pc = 0x20D2C8u;
        goto label_20d2c8;
    }
    ctx->pc = 0x20D2C0u;
    SET_GPR_U32(ctx, 31, 0x20D2C8u);
    ctx->pc = 0x1932C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1932C0u, 0x20D2C0u, 0x20D2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D2C8u;
label_20d2c8:
    // 0x20d2c8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x20d2c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_20d2cc:
    // 0x20d2cc: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x20d2ccu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_20d2d0:
    // 0x20d2d0: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x20d2d0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_20d2d4:
    // 0x20d2d4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x20d2d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_20d2d8:
    // 0x20d2d8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x20d2d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_20d2dc:
    // 0x20d2dc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x20d2dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_20d2e0:
    // 0x20d2e0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x20d2e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_20d2e4:
    // 0x20d2e4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x20d2e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20d2e8:
    // 0x20d2e8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x20d2e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20d2ec:
    // 0x20d2ec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20d2ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20d2f0:
    // 0x20d2f0: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x20d2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_20d2f4:
    // 0x20d2f4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x20d2f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_20d2f8:
    // 0x20d2f8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x20d2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_20d2fc:
    // 0x20d2fc: 0x27bd0200  addiu       $sp, $sp, 0x200
    ctx->pc = 0x20d2fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_20d300:
    // 0x20d300: 0x3e00008  jr          $ra
label_20d304:
    if (ctx->pc == 0x20D304u) {
        ctx->pc = 0x20D308u;
        goto label_20d308;
    }
    ctx->pc = 0x20D300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D308u;
label_20d308:
    // 0x20d308: 0x0  nop
    ctx->pc = 0x20d308u;
    // NOP
label_20d30c:
    // 0x20d30c: 0x0  nop
    ctx->pc = 0x20d30cu;
    // NOP
label_20d310:
    // 0x20d310: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x20d310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_20d314:
    // 0x20d314: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20d314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_20d318:
    // 0x20d318: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20d318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_20d31c:
    // 0x20d31c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20d31cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_20d320:
    // 0x20d320: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x20d320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
label_20d324:
    // 0x20d324: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x20d324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_20d328:
    // 0x20d328: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x20d328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20d32c:
    // 0x20d32c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x20d32cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_20d330:
    // 0x20d330: 0xc085538  jal         func_2154E0
label_20d334:
    if (ctx->pc == 0x20D334u) {
        ctx->pc = 0x20D338u;
        goto label_20d338;
    }
    ctx->pc = 0x20D330u;
    SET_GPR_U32(ctx, 31, 0x20D338u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x20D330u, 0x20D338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D338u;
label_20d338:
    // 0x20d338: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20d338u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20d33c:
    // 0x20d33c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x20d33cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_20d340:
    // 0x20d340: 0xc050530  jal         func_1414C0
label_20d344:
    if (ctx->pc == 0x20D344u) {
        ctx->pc = 0x20D348u;
        goto label_20d348;
    }
    ctx->pc = 0x20D340u;
    SET_GPR_U32(ctx, 31, 0x20D348u);
    ctx->pc = 0x1414C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1414C0u, 0x20D340u, 0x20D348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D348u;
label_20d348:
    // 0x20d348: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x20d348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_20d34c:
    // 0x20d34c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20d34cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20d350:
    // 0x20d350: 0x0  nop
    ctx->pc = 0x20d350u;
    // NOP
label_20d354:
    // 0x20d354: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x20d354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_20d358:
    // 0x20d358: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x20d358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
label_20d35c:
    // 0x20d35c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20d35cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20d360:
    // 0x20d360: 0x0  nop
    ctx->pc = 0x20d360u;
    // NOP
label_20d364:
    // 0x20d364: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x20d364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_20d368:
    // 0x20d368: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x20d368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_20d36c:
    // 0x20d36c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20d36cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20d370:
    // 0x20d370: 0x0  nop
    ctx->pc = 0x20d370u;
    // NOP
label_20d374:
    // 0x20d374: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x20d374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_20d378:
    // 0x20d378: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20d378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20d37c:
    // 0x20d37c: 0xc091008  jal         func_244020
label_20d380:
    if (ctx->pc == 0x20D380u) {
        ctx->pc = 0x20D384u;
        goto label_20d384;
    }
    ctx->pc = 0x20D37Cu;
    SET_GPR_U32(ctx, 31, 0x20D384u);
    ctx->pc = 0x244020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244020u, 0x20D37Cu, 0x20D384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D384u;
label_20d384:
    // 0x20d384: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x20d384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_20d388:
    // 0x20d388: 0xc7ac003c  lwc1        $f12, 0x3C($sp)
    ctx->pc = 0x20d388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_20d38c:
    // 0x20d38c: 0xc0bec3e  jal         func_2FB0F8
label_20d390:
    if (ctx->pc == 0x20D390u) {
        ctx->pc = 0x20D394u;
        goto label_20d394;
    }
    ctx->pc = 0x20D38Cu;
    SET_GPR_U32(ctx, 31, 0x20D394u);
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x20D38Cu, 0x20D394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D394u;
label_20d394:
    // 0x20d394: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20d394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20d398:
    // 0x20d398: 0xc0c3808  jal         func_30E020
label_20d39c:
    if (ctx->pc == 0x20D39Cu) {
        ctx->pc = 0x20D3A0u;
        goto label_20d3a0;
    }
    ctx->pc = 0x20D398u;
    SET_GPR_U32(ctx, 31, 0x20D3A0u);
    ctx->pc = 0x30E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E020u, 0x20D398u, 0x20D3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D3A0u;
label_20d3a0:
    // 0x20d3a0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x20d3a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20d3a4:
    // 0x20d3a4: 0x2404005a  addiu       $a0, $zero, 0x5A
    ctx->pc = 0x20d3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_20d3a8:
    // 0x20d3a8: 0xc0beeea  jal         func_2FBBA8
label_20d3ac:
    if (ctx->pc == 0x20D3ACu) {
        ctx->pc = 0x20D3B0u;
        goto label_20d3b0;
    }
    ctx->pc = 0x20D3A8u;
    SET_GPR_U32(ctx, 31, 0x20D3B0u);
    ctx->pc = 0x2FBBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBBA8u, 0x20D3A8u, 0x20D3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D3B0u;
label_20d3b0:
    // 0x20d3b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20d3b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20d3b4:
    // 0x20d3b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20d3b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20d3b8:
    // 0x20d3b8: 0xc0bed82  jal         func_2FB608
label_20d3bc:
    if (ctx->pc == 0x20D3BCu) {
        ctx->pc = 0x20D3C0u;
        goto label_20d3c0;
    }
    ctx->pc = 0x20D3B8u;
    SET_GPR_U32(ctx, 31, 0x20D3C0u);
    ctx->pc = 0x2FB608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB608u, 0x20D3B8u, 0x20D3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D3C0u;
label_20d3c0:
    // 0x20d3c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20d3c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20d3c4:
    // 0x20d3c4: 0xc0c3808  jal         func_30E020
label_20d3c8:
    if (ctx->pc == 0x20D3C8u) {
        ctx->pc = 0x20D3CCu;
        goto label_20d3cc;
    }
    ctx->pc = 0x20D3C4u;
    SET_GPR_U32(ctx, 31, 0x20D3CCu);
    ctx->pc = 0x30E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E020u, 0x20D3C4u, 0x20D3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D3CCu;
label_20d3cc:
    // 0x20d3cc: 0xdf858018  ld          $a1, -0x7FE8($gp)
    ctx->pc = 0x20d3ccu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294934552)));
label_20d3d0:
    // 0x20d3d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20d3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20d3d4:
    // 0x20d3d4: 0xc09007c  jal         func_2401F0
label_20d3d8:
    if (ctx->pc == 0x20D3D8u) {
        ctx->pc = 0x20D3DCu;
        goto label_20d3dc;
    }
    ctx->pc = 0x20D3D4u;
    SET_GPR_U32(ctx, 31, 0x20D3DCu);
    ctx->pc = 0x2401F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2401F0u, 0x20D3D4u, 0x20D3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D3DCu;
label_20d3dc:
    // 0x20d3dc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_20d3e0:
    if (ctx->pc == 0x20D3E0u) {
        ctx->pc = 0x20D3E4u;
        goto label_20d3e4;
    }
    ctx->pc = 0x20D3DCu;
    {
        const bool branch_taken_0x20d3dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d3dc) {
            ctx->pc = 0x20D3FCu;
            goto label_20d3fc;
        }
    }
    ctx->pc = 0x20D3E4u;
label_20d3e4:
    // 0x20d3e4: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x20d3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20d3e8:
    // 0x20d3e8: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x20d3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_20d3ec:
    // 0x20d3ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20d3ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20d3f0:
    // 0x20d3f0: 0x0  nop
    ctx->pc = 0x20d3f0u;
    // NOP
label_20d3f4:
    // 0x20d3f4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x20d3f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_20d3f8:
    // 0x20d3f8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x20d3f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_20d3fc:
    // 0x20d3fc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x20d3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_20d400:
    // 0x20d400: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20d400u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20d404:
    // 0x20d404: 0x0  nop
    ctx->pc = 0x20d404u;
    // NOP
label_20d408:
    // 0x20d408: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x20d408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_20d40c:
    // 0x20d40c: 0x3c024296  lui         $v0, 0x4296
    ctx->pc = 0x20d40cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17046 << 16));
label_20d410:
    // 0x20d410: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20d410u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20d414:
    // 0x20d414: 0x0  nop
    ctx->pc = 0x20d414u;
    // NOP
label_20d418:
    // 0x20d418: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x20d418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_20d41c:
    // 0x20d41c: 0x3c024296  lui         $v0, 0x4296
    ctx->pc = 0x20d41cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17046 << 16));
label_20d420:
    // 0x20d420: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20d420u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20d424:
    // 0x20d424: 0x0  nop
    ctx->pc = 0x20d424u;
    // NOP
label_20d428:
    // 0x20d428: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x20d428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_20d42c:
    // 0x20d42c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x20d42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_20d430:
    // 0x20d430: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20d430u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20d434:
    // 0x20d434: 0x0  nop
    ctx->pc = 0x20d434u;
    // NOP
label_20d438:
    // 0x20d438: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x20d438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_20d43c:
    // 0x20d43c: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x20d43cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_20d440:
    // 0x20d440: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x20d440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_20d444:
    // 0x20d444: 0xc050194  jal         func_140650
label_20d448:
    if (ctx->pc == 0x20D448u) {
        ctx->pc = 0x20D44Cu;
        goto label_20d44c;
    }
    ctx->pc = 0x20D444u;
    SET_GPR_U32(ctx, 31, 0x20D44Cu);
    ctx->pc = 0x140650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140650u, 0x20D444u, 0x20D44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D44Cu;
label_20d44c:
    // 0x20d44c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20d44cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_20d450:
    // 0x20d450: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20d450u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20d454:
    // 0x20d454: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20d454u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20d458:
    // 0x20d458: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x20d458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_20d45c:
    // 0x20d45c: 0x3e00008  jr          $ra
label_20d460:
    if (ctx->pc == 0x20D460u) {
        ctx->pc = 0x20D464u;
        goto label_20d464;
    }
    ctx->pc = 0x20D45Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D45Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D464u;
label_20d464:
    // 0x20d464: 0x0  nop
    ctx->pc = 0x20d464u;
    // NOP
label_20d468:
    // 0x20d468: 0x0  nop
    ctx->pc = 0x20d468u;
    // NOP
label_20d46c:
    // 0x20d46c: 0x0  nop
    ctx->pc = 0x20d46cu;
    // NOP
label_20d470:
    // 0x20d470: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x20d470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_20d474:
    // 0x20d474: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20d474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_20d478:
    // 0x20d478: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20d478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_20d47c:
    // 0x20d47c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20d47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_20d480:
    // 0x20d480: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x20d480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
label_20d484:
    // 0x20d484: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x20d484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_20d488:
    // 0x20d488: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x20d488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20d48c:
    // 0x20d48c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x20d48cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_20d490:
    // 0x20d490: 0xc085538  jal         func_2154E0
label_20d494:
    if (ctx->pc == 0x20D494u) {
        ctx->pc = 0x20D498u;
        goto label_20d498;
    }
    ctx->pc = 0x20D490u;
    SET_GPR_U32(ctx, 31, 0x20D498u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x20D490u, 0x20D498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D498u;
label_20d498:
    // 0x20d498: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20d498u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20d49c:
    // 0x20d49c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x20d49cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_20d4a0:
    // 0x20d4a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20d4a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20d4a4:
    // 0x20d4a4: 0xc090f80  jal         func_243E00
label_20d4a8:
    if (ctx->pc == 0x20D4A8u) {
        ctx->pc = 0x20D4ACu;
        goto label_20d4ac;
    }
    ctx->pc = 0x20D4A4u;
    SET_GPR_U32(ctx, 31, 0x20D4ACu);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x20D4A4u, 0x20D4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D4ACu;
label_20d4ac:
    // 0x20d4ac: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x20d4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_20d4b0:
    // 0x20d4b0: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x20d4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_20d4b4:
    // 0x20d4b4: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x20d4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20d4b8:
    // 0x20d4b8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x20d4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20d4bc:
    // 0x20d4bc: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x20d4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20d4c0:
    // 0x20d4c0: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x20d4c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_20d4c4:
    // 0x20d4c4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x20d4c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_20d4c8:
    // 0x20d4c8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x20d4c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_20d4cc:
    // 0x20d4cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20d4ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20d4d0:
    // 0x20d4d0: 0xc091008  jal         func_244020
label_20d4d4:
    if (ctx->pc == 0x20D4D4u) {
        ctx->pc = 0x20D4D8u;
        goto label_20d4d8;
    }
    ctx->pc = 0x20D4D0u;
    SET_GPR_U32(ctx, 31, 0x20D4D8u);
    ctx->pc = 0x244020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244020u, 0x20D4D0u, 0x20D4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D4D8u;
label_20d4d8:
    // 0x20d4d8: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x20d4d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_20d4dc:
    // 0x20d4dc: 0xc7ac004c  lwc1        $f12, 0x4C($sp)
    ctx->pc = 0x20d4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_20d4e0:
    // 0x20d4e0: 0xc0bec3e  jal         func_2FB0F8
label_20d4e4:
    if (ctx->pc == 0x20D4E4u) {
        ctx->pc = 0x20D4E8u;
        goto label_20d4e8;
    }
    ctx->pc = 0x20D4E0u;
    SET_GPR_U32(ctx, 31, 0x20D4E8u);
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x20D4E0u, 0x20D4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D4E8u;
label_20d4e8:
    // 0x20d4e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20d4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20d4ec:
    // 0x20d4ec: 0xc0c3808  jal         func_30E020
label_20d4f0:
    if (ctx->pc == 0x20D4F0u) {
        ctx->pc = 0x20D4F4u;
        goto label_20d4f4;
    }
    ctx->pc = 0x20D4ECu;
    SET_GPR_U32(ctx, 31, 0x20D4F4u);
    ctx->pc = 0x30E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E020u, 0x20D4ECu, 0x20D4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D4F4u;
label_20d4f4:
    // 0x20d4f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x20d4f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20d4f8:
    // 0x20d4f8: 0x2404005a  addiu       $a0, $zero, 0x5A
    ctx->pc = 0x20d4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_20d4fc:
    // 0x20d4fc: 0xc0beeea  jal         func_2FBBA8
label_20d500:
    if (ctx->pc == 0x20D500u) {
        ctx->pc = 0x20D504u;
        goto label_20d504;
    }
    ctx->pc = 0x20D4FCu;
    SET_GPR_U32(ctx, 31, 0x20D504u);
    ctx->pc = 0x2FBBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBBA8u, 0x20D4FCu, 0x20D504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D504u;
label_20d504:
    // 0x20d504: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20d504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20d508:
    // 0x20d508: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20d508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20d50c:
    // 0x20d50c: 0xc0bed82  jal         func_2FB608
label_20d510:
    if (ctx->pc == 0x20D510u) {
        ctx->pc = 0x20D514u;
        goto label_20d514;
    }
    ctx->pc = 0x20D50Cu;
    SET_GPR_U32(ctx, 31, 0x20D514u);
    ctx->pc = 0x2FB608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB608u, 0x20D50Cu, 0x20D514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D514u;
label_20d514:
    // 0x20d514: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20d514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20d518:
    // 0x20d518: 0xc0c3808  jal         func_30E020
label_20d51c:
    if (ctx->pc == 0x20D51Cu) {
        ctx->pc = 0x20D520u;
        goto label_20d520;
    }
    ctx->pc = 0x20D518u;
    SET_GPR_U32(ctx, 31, 0x20D520u);
    ctx->pc = 0x30E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E020u, 0x20D518u, 0x20D520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D520u;
label_20d520:
    // 0x20d520: 0xdf858018  ld          $a1, -0x7FE8($gp)
    ctx->pc = 0x20d520u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294934552)));
label_20d524:
    // 0x20d524: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20d524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20d528:
    // 0x20d528: 0xc09007c  jal         func_2401F0
label_20d52c:
    if (ctx->pc == 0x20D52Cu) {
        ctx->pc = 0x20D530u;
        goto label_20d530;
    }
    ctx->pc = 0x20D528u;
    SET_GPR_U32(ctx, 31, 0x20D530u);
    ctx->pc = 0x2401F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2401F0u, 0x20D528u, 0x20D530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D530u;
label_20d530:
    // 0x20d530: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_20d534:
    if (ctx->pc == 0x20D534u) {
        ctx->pc = 0x20D538u;
        goto label_20d538;
    }
    ctx->pc = 0x20D530u;
    {
        const bool branch_taken_0x20d530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d530) {
            ctx->pc = 0x20D550u;
            goto label_20d550;
        }
    }
    ctx->pc = 0x20D538u;
label_20d538:
    // 0x20d538: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x20d538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20d53c:
    // 0x20d53c: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x20d53cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_20d540:
    // 0x20d540: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20d540u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20d544:
    // 0x20d544: 0x0  nop
    ctx->pc = 0x20d544u;
    // NOP
label_20d548:
    // 0x20d548: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x20d548u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_20d54c:
    // 0x20d54c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x20d54cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_20d550:
    // 0x20d550: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x20d550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20d554:
    // 0x20d554: 0xc780825c  lwc1        $f0, -0x7DA4($gp)
    ctx->pc = 0x20d554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20d558:
    // 0x20d558: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x20d558u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_20d55c:
    // 0x20d55c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x20d55cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_20d560:
    // 0x20d560: 0xc7ac004c  lwc1        $f12, 0x4C($sp)
    ctx->pc = 0x20d560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_20d564:
    // 0x20d564: 0xc0c38f0  jal         func_30E3C0
label_20d568:
    if (ctx->pc == 0x20D568u) {
        ctx->pc = 0x20D56Cu;
        goto label_20d56c;
    }
    ctx->pc = 0x20D564u;
    SET_GPR_U32(ctx, 31, 0x20D56Cu);
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x20D564u, 0x20D56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D56Cu;
label_20d56c:
    // 0x20d56c: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x20d56cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_20d570:
    // 0x20d570: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x20d570u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_20d574:
    // 0x20d574: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x20d574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20d578:
    // 0x20d578: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x20d578u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20d57c:
    // 0x20d57c: 0x0  nop
    ctx->pc = 0x20d57cu;
    // NOP
label_20d580:
    // 0x20d580: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x20d580u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[2]));
label_20d584:
    // 0x20d584: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x20d584u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_20d588:
    // 0x20d588: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x20d588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_20d58c:
    // 0x20d58c: 0xc7ac004c  lwc1        $f12, 0x4C($sp)
    ctx->pc = 0x20d58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_20d590:
    // 0x20d590: 0xc0c3966  jal         func_30E598
label_20d594:
    if (ctx->pc == 0x20D594u) {
        ctx->pc = 0x20D598u;
        goto label_20d598;
    }
    ctx->pc = 0x20D590u;
    SET_GPR_U32(ctx, 31, 0x20D598u);
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x20D590u, 0x20D598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D598u;
label_20d598:
    // 0x20d598: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x20d598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_20d59c:
    // 0x20d59c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x20d59cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_20d5a0:
    // 0x20d5a0: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x20d5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20d5a4:
    // 0x20d5a4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x20d5a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20d5a8:
    // 0x20d5a8: 0x0  nop
    ctx->pc = 0x20d5a8u;
    // NOP
label_20d5ac:
    // 0x20d5ac: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x20d5acu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[2]));
label_20d5b0:
    // 0x20d5b0: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x20d5b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_20d5b4:
    // 0x20d5b4: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x20d5b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_20d5b8:
    // 0x20d5b8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x20d5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_20d5bc:
    // 0x20d5bc: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x20d5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_20d5c0:
    // 0x20d5c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20d5c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d5c4:
    // 0x20d5c4: 0xc106598  jal         func_419660
label_20d5c8:
    if (ctx->pc == 0x20D5C8u) {
        ctx->pc = 0x20D5CCu;
        goto label_20d5cc;
    }
    ctx->pc = 0x20D5C4u;
    SET_GPR_U32(ctx, 31, 0x20D5CCu);
    ctx->pc = 0x419660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419660u, 0x20D5C4u, 0x20D5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D5CCu;
label_20d5cc:
    // 0x20d5cc: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x20d5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_20d5d0:
    // 0x20d5d0: 0xc106794  jal         func_419E50
label_20d5d4:
    if (ctx->pc == 0x20D5D4u) {
        ctx->pc = 0x20D5D8u;
        goto label_20d5d8;
    }
    ctx->pc = 0x20D5D0u;
    SET_GPR_U32(ctx, 31, 0x20D5D8u);
    ctx->pc = 0x419E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E50u, 0x20D5D0u, 0x20D5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D5D8u;
label_20d5d8:
    // 0x20d5d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20d5d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_20d5dc:
    // 0x20d5dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20d5dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20d5e0:
    // 0x20d5e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20d5e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20d5e4:
    // 0x20d5e4: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x20d5e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_20d5e8:
    // 0x20d5e8: 0x3e00008  jr          $ra
label_20d5ec:
    if (ctx->pc == 0x20D5ECu) {
        ctx->pc = 0x20D5F0u;
        goto label_20d5f0;
    }
    ctx->pc = 0x20D5E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D5E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D5F0u;
label_20d5f0:
    // 0x20d5f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20d5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_20d5f4:
    // 0x20d5f4: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x20d5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_20d5f8:
    // 0x20d5f8: 0x24429470  addiu       $v0, $v0, -0x6B90
    ctx->pc = 0x20d5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939760));
label_20d5fc:
    // 0x20d5fc: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x20d5fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_20d600:
    // 0x20d600: 0x3e00008  jr          $ra
label_20d604:
    if (ctx->pc == 0x20D604u) {
        ctx->pc = 0x20D608u;
        goto label_20d608;
    }
    ctx->pc = 0x20D600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D608u;
label_20d608:
    // 0x20d608: 0x0  nop
    ctx->pc = 0x20d608u;
    // NOP
label_20d60c:
    // 0x20d60c: 0x0  nop
    ctx->pc = 0x20d60cu;
    // NOP
label_20d610:
    // 0x20d610: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20d610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20d614:
    // 0x20d614: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x20d614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_20d618:
    // 0x20d618: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x20d618u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_20d61c:
    // 0x20d61c: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x20d61cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
label_20d620:
    // 0x20d620: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x20d620u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20d624:
    // 0x20d624: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x20d624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20d628:
    // 0x20d628: 0x460008c2  mul.s       $f3, $f1, $f0
    ctx->pc = 0x20d628u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_20d62c:
    // 0x20d62c: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x20d62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_20d630:
    // 0x20d630: 0xc462000c  lwc1        $f2, 0xC($v1)
    ctx->pc = 0x20d630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20d634:
    // 0x20d634: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x20d634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_20d638:
    // 0x20d638: 0xc46100dc  lwc1        $f1, 0xDC($v1)
    ctx->pc = 0x20d638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20d63c:
    // 0x20d63c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20d63cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20d640:
    // 0x20d640: 0x0  nop
    ctx->pc = 0x20d640u;
    // NOP
label_20d644:
    // 0x20d644: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x20d644u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_20d648:
    // 0x20d648: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x20d648u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_20d64c:
    // 0x20d64c: 0xe46000dc  swc1        $f0, 0xDC($v1)
    ctx->pc = 0x20d64cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 220), bits); }
label_20d650:
    // 0x20d650: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x20d650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_20d654:
    // 0x20d654: 0xc46100dc  lwc1        $f1, 0xDC($v1)
    ctx->pc = 0x20d654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20d658:
    // 0x20d658: 0x3c03430c  lui         $v1, 0x430C
    ctx->pc = 0x20d658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17164 << 16));
label_20d65c:
    // 0x20d65c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20d65cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20d660:
    // 0x20d660: 0x0  nop
    ctx->pc = 0x20d660u;
    // NOP
label_20d664:
    // 0x20d664: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x20d664u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20d668:
    // 0x20d668: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_20d66c:
    if (ctx->pc == 0x20D66Cu) {
        ctx->pc = 0x20D670u;
        goto label_20d670;
    }
    ctx->pc = 0x20D668u;
    {
        const bool branch_taken_0x20d668 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20d668) {
            ctx->pc = 0x20D680u;
            goto label_20d680;
        }
    }
    ctx->pc = 0x20D670u;
label_20d670:
    // 0x20d670: 0x3c03430c  lui         $v1, 0x430C
    ctx->pc = 0x20d670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17164 << 16));
label_20d674:
    // 0x20d674: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20d674u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20d678:
    // 0x20d678: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x20d678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_20d67c:
    // 0x20d67c: 0xe46000dc  swc1        $f0, 0xDC($v1)
    ctx->pc = 0x20d67cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 220), bits); }
label_20d680:
    // 0x20d680: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x20d680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_20d684:
    // 0x20d684: 0x3e00008  jr          $ra
label_20d688:
    if (ctx->pc == 0x20D688u) {
        ctx->pc = 0x20D68Cu;
        goto label_20d68c;
    }
    ctx->pc = 0x20D684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D68Cu;
label_20d68c:
    // 0x20d68c: 0x0  nop
    ctx->pc = 0x20d68cu;
    // NOP
label_20d690:
    // 0x20d690: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20d690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20d694:
    // 0x20d694: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x20d694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_20d698:
    // 0x20d698: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x20d698u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_20d69c:
    // 0x20d69c: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x20d69cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
label_20d6a0:
    // 0x20d6a0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x20d6a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20d6a4:
    // 0x20d6a4: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x20d6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20d6a8:
    // 0x20d6a8: 0x460008c2  mul.s       $f3, $f1, $f0
    ctx->pc = 0x20d6a8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_20d6ac:
    // 0x20d6ac: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x20d6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_20d6b0:
    // 0x20d6b0: 0xc462000c  lwc1        $f2, 0xC($v1)
    ctx->pc = 0x20d6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20d6b4:
    // 0x20d6b4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x20d6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_20d6b8:
    // 0x20d6b8: 0xc46100dc  lwc1        $f1, 0xDC($v1)
    ctx->pc = 0x20d6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20d6bc:
    // 0x20d6bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20d6bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20d6c0:
    // 0x20d6c0: 0x0  nop
    ctx->pc = 0x20d6c0u;
    // NOP
label_20d6c4:
    // 0x20d6c4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x20d6c4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_20d6c8:
    // 0x20d6c8: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x20d6c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_20d6cc:
    // 0x20d6cc: 0xe46000dc  swc1        $f0, 0xDC($v1)
    ctx->pc = 0x20d6ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 220), bits); }
label_20d6d0:
    // 0x20d6d0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x20d6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_20d6d4:
    // 0x20d6d4: 0xc46100dc  lwc1        $f1, 0xDC($v1)
    ctx->pc = 0x20d6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20d6d8:
    // 0x20d6d8: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x20d6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
label_20d6dc:
    // 0x20d6dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20d6dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20d6e0:
    // 0x20d6e0: 0x0  nop
    ctx->pc = 0x20d6e0u;
    // NOP
label_20d6e4:
    // 0x20d6e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20d6e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20d6e8:
    // 0x20d6e8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_20d6ec:
    if (ctx->pc == 0x20D6ECu) {
        ctx->pc = 0x20D6F0u;
        goto label_20d6f0;
    }
    ctx->pc = 0x20D6E8u;
    {
        const bool branch_taken_0x20d6e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20d6e8) {
            ctx->pc = 0x20D700u;
            goto label_20d700;
        }
    }
    ctx->pc = 0x20D6F0u;
label_20d6f0:
    // 0x20d6f0: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x20d6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
label_20d6f4:
    // 0x20d6f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20d6f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20d6f8:
    // 0x20d6f8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x20d6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_20d6fc:
    // 0x20d6fc: 0xe46000dc  swc1        $f0, 0xDC($v1)
    ctx->pc = 0x20d6fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 220), bits); }
label_20d700:
    // 0x20d700: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x20d700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_20d704:
    // 0x20d704: 0x3e00008  jr          $ra
label_20d708:
    if (ctx->pc == 0x20D708u) {
        ctx->pc = 0x20D70Cu;
        goto label_20d70c;
    }
    ctx->pc = 0x20D704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D70Cu;
label_20d70c:
    // 0x20d70c: 0x0  nop
    ctx->pc = 0x20d70cu;
    // NOP
label_20d710:
    // 0x20d710: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20d710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20d714:
    // 0x20d714: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x20d714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_20d718:
    // 0x20d718: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x20d718u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_20d71c:
    // 0x20d71c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x20d71cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_20d720:
    // 0x20d720: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x20d720u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20d724:
    // 0x20d724: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x20d724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20d728:
    // 0x20d728: 0x460008c2  mul.s       $f3, $f1, $f0
    ctx->pc = 0x20d728u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_20d72c:
    // 0x20d72c: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x20d72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_20d730:
    // 0x20d730: 0xc462000c  lwc1        $f2, 0xC($v1)
    ctx->pc = 0x20d730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20d734:
    // 0x20d734: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x20d734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_20d738:
    // 0x20d738: 0xc46100e4  lwc1        $f1, 0xE4($v1)
    ctx->pc = 0x20d738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20d73c:
    // 0x20d73c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20d73cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20d740:
    // 0x20d740: 0x0  nop
    ctx->pc = 0x20d740u;
    // NOP
label_20d744:
    // 0x20d744: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x20d744u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_20d748:
    // 0x20d748: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x20d748u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_20d74c:
    // 0x20d74c: 0xe46000e4  swc1        $f0, 0xE4($v1)
    ctx->pc = 0x20d74cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 228), bits); }
label_20d750:
    // 0x20d750: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x20d750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_20d754:
    // 0x20d754: 0xc46200e4  lwc1        $f2, 0xE4($v1)
    ctx->pc = 0x20d754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20d758:
    // 0x20d758: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x20d758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_20d75c:
    // 0x20d75c: 0xc46100e0  lwc1        $f1, 0xE0($v1)
    ctx->pc = 0x20d75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20d760:
    // 0x20d760: 0xc78082fc  lwc1        $f0, -0x7D04($gp)
    ctx->pc = 0x20d760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20d764:
    // 0x20d764: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x20d764u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_20d768:
    // 0x20d768: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x20d768u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20d76c:
    // 0x20d76c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_20d770:
    if (ctx->pc == 0x20D770u) {
        ctx->pc = 0x20D774u;
        goto label_20d774;
    }
    ctx->pc = 0x20D76Cu;
    {
        const bool branch_taken_0x20d76c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20d76c) {
            ctx->pc = 0x20D78Cu;
            goto label_20d78c;
        }
    }
    ctx->pc = 0x20D774u;
label_20d774:
    // 0x20d774: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x20d774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_20d778:
    // 0x20d778: 0xc46100e0  lwc1        $f1, 0xE0($v1)
    ctx->pc = 0x20d778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20d77c:
    // 0x20d77c: 0xc78082fc  lwc1        $f0, -0x7D04($gp)
    ctx->pc = 0x20d77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20d780:
    // 0x20d780: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x20d780u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_20d784:
    // 0x20d784: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x20d784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_20d788:
    // 0x20d788: 0xe46000e4  swc1        $f0, 0xE4($v1)
    ctx->pc = 0x20d788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 228), bits); }
label_20d78c:
    // 0x20d78c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x20d78cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_20d790:
    // 0x20d790: 0x3e00008  jr          $ra
label_20d794:
    if (ctx->pc == 0x20D794u) {
        ctx->pc = 0x20D798u;
        goto label_20d798;
    }
    ctx->pc = 0x20D790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D798u;
label_20d798:
    // 0x20d798: 0x0  nop
    ctx->pc = 0x20d798u;
    // NOP
label_20d79c:
    // 0x20d79c: 0x0  nop
    ctx->pc = 0x20d79cu;
    // NOP
label_20d7a0:
    // 0x20d7a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20d7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20d7a4:
    // 0x20d7a4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x20d7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_20d7a8:
    // 0x20d7a8: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x20d7a8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_20d7ac:
    // 0x20d7ac: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x20d7acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_20d7b0:
    // 0x20d7b0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x20d7b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20d7b4:
    // 0x20d7b4: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x20d7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20d7b8:
    // 0x20d7b8: 0x460008c2  mul.s       $f3, $f1, $f0
    ctx->pc = 0x20d7b8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_20d7bc:
    // 0x20d7bc: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x20d7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_20d7c0:
    // 0x20d7c0: 0xc462000c  lwc1        $f2, 0xC($v1)
    ctx->pc = 0x20d7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20d7c4:
    // 0x20d7c4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x20d7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_20d7c8:
    // 0x20d7c8: 0xc46100e4  lwc1        $f1, 0xE4($v1)
    ctx->pc = 0x20d7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20d7cc:
    // 0x20d7cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20d7ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20d7d0:
    // 0x20d7d0: 0x0  nop
    ctx->pc = 0x20d7d0u;
    // NOP
label_20d7d4:
    // 0x20d7d4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x20d7d4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_20d7d8:
    // 0x20d7d8: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x20d7d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_20d7dc:
    // 0x20d7dc: 0xe46000e4  swc1        $f0, 0xE4($v1)
    ctx->pc = 0x20d7dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 228), bits); }
label_20d7e0:
    // 0x20d7e0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x20d7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_20d7e4:
    // 0x20d7e4: 0xc46200e4  lwc1        $f2, 0xE4($v1)
    ctx->pc = 0x20d7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20d7e8:
    // 0x20d7e8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x20d7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_20d7ec:
    // 0x20d7ec: 0xc46100e0  lwc1        $f1, 0xE0($v1)
    ctx->pc = 0x20d7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20d7f0:
    // 0x20d7f0: 0xc78082fc  lwc1        $f0, -0x7D04($gp)
    ctx->pc = 0x20d7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20d7f4:
    // 0x20d7f4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20d7f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_20d7f8:
    // 0x20d7f8: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x20d7f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20d7fc:
    // 0x20d7fc: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_20d800:
    if (ctx->pc == 0x20D800u) {
        ctx->pc = 0x20D804u;
        goto label_20d804;
    }
    ctx->pc = 0x20D7FCu;
    {
        const bool branch_taken_0x20d7fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20d7fc) {
            ctx->pc = 0x20D81Cu;
            goto label_20d81c;
        }
    }
    ctx->pc = 0x20D804u;
label_20d804:
    // 0x20d804: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x20d804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_20d808:
    // 0x20d808: 0xc46100e0  lwc1        $f1, 0xE0($v1)
    ctx->pc = 0x20d808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20d80c:
    // 0x20d80c: 0xc78082fc  lwc1        $f0, -0x7D04($gp)
    ctx->pc = 0x20d80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20d810:
    // 0x20d810: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20d810u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_20d814:
    // 0x20d814: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x20d814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_20d818:
    // 0x20d818: 0xe46000e4  swc1        $f0, 0xE4($v1)
    ctx->pc = 0x20d818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 228), bits); }
label_20d81c:
    // 0x20d81c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x20d81cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_20d820:
    // 0x20d820: 0x3e00008  jr          $ra
label_20d824:
    if (ctx->pc == 0x20D824u) {
        ctx->pc = 0x20D828u;
        goto label_20d828;
    }
    ctx->pc = 0x20D820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D828u;
label_20d828:
    // 0x20d828: 0x0  nop
    ctx->pc = 0x20d828u;
    // NOP
label_20d82c:
    // 0x20d82c: 0x0  nop
    ctx->pc = 0x20d82cu;
    // NOP
label_20d830:
    // 0x20d830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20d830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20d834:
    // 0x20d834: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x20d834u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_20d838:
    // 0x20d838: 0x3e00008  jr          $ra
label_20d83c:
    if (ctx->pc == 0x20D83Cu) {
        ctx->pc = 0x20D840u;
        goto label_20d840;
    }
    ctx->pc = 0x20D838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D840u;
label_20d840:
    // 0x20d840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20d840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20d844:
    // 0x20d844: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x20d844u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_20d848:
    // 0x20d848: 0x3e00008  jr          $ra
label_20d84c:
    if (ctx->pc == 0x20D84Cu) {
        ctx->pc = 0x20D850u;
        goto label_20d850;
    }
    ctx->pc = 0x20D848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D850u;
label_20d850:
    // 0x20d850: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x20d850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_20d854:
    // 0x20d854: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x20d854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_20d858:
    // 0x20d858: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x20d858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_20d85c:
    // 0x20d85c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20d85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_20d860:
    // 0x20d860: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20d860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_20d864:
    // 0x20d864: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20d864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_20d868:
    // 0x20d868: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x20d868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
label_20d86c:
    // 0x20d86c: 0xc11c448  jal         func_471120
label_20d870:
    if (ctx->pc == 0x20D870u) {
        ctx->pc = 0x20D874u;
        goto label_20d874;
    }
    ctx->pc = 0x20D86Cu;
    SET_GPR_U32(ctx, 31, 0x20D874u);
    ctx->pc = 0x471120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x471120u, 0x20D86Cu, 0x20D874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D874u;
label_20d874:
    // 0x20d874: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x20d874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_20d878:
    // 0x20d878: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x20d878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20d87c:
    // 0x20d87c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x20d87cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_20d880:
    // 0x20d880: 0xc085538  jal         func_2154E0
label_20d884:
    if (ctx->pc == 0x20D884u) {
        ctx->pc = 0x20D888u;
        goto label_20d888;
    }
    ctx->pc = 0x20D880u;
    SET_GPR_U32(ctx, 31, 0x20D888u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x20D880u, 0x20D888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D888u;
label_20d888:
    // 0x20d888: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x20d888u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20d88c:
    // 0x20d88c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x20d88cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_20d890:
    // 0x20d890: 0xc0a80a0  jal         func_2A0280
label_20d894:
    if (ctx->pc == 0x20D894u) {
        ctx->pc = 0x20D898u;
        goto label_20d898;
    }
    ctx->pc = 0x20D890u;
    SET_GPR_U32(ctx, 31, 0x20D898u);
    ctx->pc = 0x2A0280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0280u, 0x20D890u, 0x20D898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D898u;
label_20d898:
    // 0x20d898: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20d898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20d89c:
    // 0x20d89c: 0xc0e6f1a  jal         func_39BC68
label_20d8a0:
    if (ctx->pc == 0x20D8A0u) {
        ctx->pc = 0x20D8A4u;
        goto label_20d8a4;
    }
    ctx->pc = 0x20D89Cu;
    SET_GPR_U32(ctx, 31, 0x20D8A4u);
    ctx->pc = 0x39BC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BC68u, 0x20D89Cu, 0x20D8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D8A4u;
label_20d8a4:
    // 0x20d8a4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x20d8a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20d8a8:
    // 0x20d8a8: 0xc12242c  jal         func_4890B0
label_20d8ac:
    if (ctx->pc == 0x20D8ACu) {
        ctx->pc = 0x20D8B0u;
        goto label_20d8b0;
    }
    ctx->pc = 0x20D8A8u;
    SET_GPR_U32(ctx, 31, 0x20D8B0u);
    ctx->pc = 0x4890B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890B0u, 0x20D8A8u, 0x20D8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D8B0u;
label_20d8b0:
    // 0x20d8b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x20d8b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20d8b4:
    // 0x20d8b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20d8b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20d8b8:
    // 0x20d8b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20d8b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20d8bc:
    // 0x20d8bc: 0xc0e6e40  jal         func_39B900
label_20d8c0:
    if (ctx->pc == 0x20D8C0u) {
        ctx->pc = 0x20D8C4u;
        goto label_20d8c4;
    }
    ctx->pc = 0x20D8BCu;
    SET_GPR_U32(ctx, 31, 0x20D8C4u);
    ctx->pc = 0x39B900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B900u, 0x20D8BCu, 0x20D8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D8C4u;
label_20d8c4:
    // 0x20d8c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20d8c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20d8c8:
    // 0x20d8c8: 0xc105f96  jal         func_417E58
label_20d8cc:
    if (ctx->pc == 0x20D8CCu) {
        ctx->pc = 0x20D8D0u;
        goto label_20d8d0;
    }
    ctx->pc = 0x20D8C8u;
    SET_GPR_U32(ctx, 31, 0x20D8D0u);
    ctx->pc = 0x417E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417E58u, 0x20D8C8u, 0x20D8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D8D0u;
label_20d8d0:
    // 0x20d8d0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x20d8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_20d8d4:
    // 0x20d8d4: 0x8c440110  lw          $a0, 0x110($v0)
    ctx->pc = 0x20d8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
label_20d8d8:
    // 0x20d8d8: 0xc12334c  jal         func_48CD30
label_20d8dc:
    if (ctx->pc == 0x20D8DCu) {
        ctx->pc = 0x20D8E0u;
        goto label_20d8e0;
    }
    ctx->pc = 0x20D8D8u;
    SET_GPR_U32(ctx, 31, 0x20D8E0u);
    ctx->pc = 0x48CD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CD30u, 0x20D8D8u, 0x20D8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D8E0u;
label_20d8e0:
    // 0x20d8e0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x20d8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_20d8e4:
    // 0x20d8e4: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x20d8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_20d8e8:
    // 0x20d8e8: 0xc082dbc  jal         func_20B6F0
label_20d8ec:
    if (ctx->pc == 0x20D8ECu) {
        ctx->pc = 0x20D8F0u;
        goto label_20d8f0;
    }
    ctx->pc = 0x20D8E8u;
    SET_GPR_U32(ctx, 31, 0x20D8F0u);
    ctx->pc = 0x20B6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B6F0u, 0x20D8E8u, 0x20D8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D8F0u;
label_20d8f0:
    // 0x20d8f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20d8f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20d8f4:
    // 0x20d8f4: 0x1000000b  b           . + 4 + (0xB << 2)
label_20d8f8:
    if (ctx->pc == 0x20D8F8u) {
        ctx->pc = 0x20D8FCu;
        goto label_20d8fc;
    }
    ctx->pc = 0x20D8F4u;
    {
        const bool branch_taken_0x20d8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d8f4) {
            ctx->pc = 0x20D924u;
            goto label_20d924;
        }
    }
    ctx->pc = 0x20D8FCu;
label_20d8fc:
    // 0x20d8fc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x20d8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20d900:
    // 0x20d900: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x20d900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_20d904:
    // 0x20d904: 0x90420034  lbu         $v0, 0x34($v0)
    ctx->pc = 0x20d904u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 52)));
label_20d908:
    // 0x20d908: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_20d90c:
    if (ctx->pc == 0x20D90Cu) {
        ctx->pc = 0x20D910u;
        goto label_20d910;
    }
    ctx->pc = 0x20D908u;
    {
        const bool branch_taken_0x20d908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20d908) {
            ctx->pc = 0x20D920u;
            goto label_20d920;
        }
    }
    ctx->pc = 0x20D910u;
label_20d910:
    // 0x20d910: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x20d910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20d914:
    // 0x20d914: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x20d914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20d918:
    // 0x20d918: 0xc0e26d4  jal         func_389B50
label_20d91c:
    if (ctx->pc == 0x20D91Cu) {
        ctx->pc = 0x20D920u;
        goto label_20d920;
    }
    ctx->pc = 0x20D918u;
    SET_GPR_U32(ctx, 31, 0x20D920u);
    ctx->pc = 0x389B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389B50u, 0x20D918u, 0x20D920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D920u;
label_20d920:
    // 0x20d920: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x20d920u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_20d924:
    // 0x20d924: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x20d924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_20d928:
    // 0x20d928: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x20d928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_20d92c:
    // 0x20d92c: 0xc082da8  jal         func_20B6A0
label_20d930:
    if (ctx->pc == 0x20D930u) {
        ctx->pc = 0x20D934u;
        goto label_20d934;
    }
    ctx->pc = 0x20D92Cu;
    SET_GPR_U32(ctx, 31, 0x20D934u);
    ctx->pc = 0x20B6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B6A0u, 0x20D92Cu, 0x20D934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D934u;
label_20d934:
    // 0x20d934: 0x1602fff1  bne         $s0, $v0, . + 4 + (-0xF << 2)
label_20d938:
    if (ctx->pc == 0x20D938u) {
        ctx->pc = 0x20D93Cu;
        goto label_20d93c;
    }
    ctx->pc = 0x20D934u;
    {
        const bool branch_taken_0x20d934 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x20d934) {
            ctx->pc = 0x20D8FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20d8fc;
        }
    }
    ctx->pc = 0x20D93Cu;
label_20d93c:
    // 0x20d93c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20d93cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_20d940:
    // 0x20d940: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20d940u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20d944:
    // 0x20d944: 0x0  nop
    ctx->pc = 0x20d944u;
    // NOP
label_20d948:
    // 0x20d948: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x20d948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_20d94c:
    // 0x20d94c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x20d94cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_20d950:
    // 0x20d950: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x20d950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_20d954:
    // 0x20d954: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20d954u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20d958:
    // 0x20d958: 0x0  nop
    ctx->pc = 0x20d958u;
    // NOP
label_20d95c:
    // 0x20d95c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x20d95cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_20d960:
    // 0x20d960: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x20d960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_20d964:
    // 0x20d964: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x20d964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_20d968:
    // 0x20d968: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20d968u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20d96c:
    // 0x20d96c: 0x0  nop
    ctx->pc = 0x20d96cu;
    // NOP
label_20d970:
    // 0x20d970: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x20d970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_20d974:
    // 0x20d974: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x20d974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_20d978:
    // 0x20d978: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x20d978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_20d97c:
    // 0x20d97c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20d97cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20d980:
    // 0x20d980: 0x0  nop
    ctx->pc = 0x20d980u;
    // NOP
label_20d984:
    // 0x20d984: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x20d984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_20d988:
    // 0x20d988: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x20d988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_20d98c:
    // 0x20d98c: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x20d98cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_20d990:
    // 0x20d990: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x20d990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_20d994:
    // 0x20d994: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x20d994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_20d998:
    // 0x20d998: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x20d998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
label_20d99c:
    // 0x20d99c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x20d99cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_20d9a0:
    // 0x20d9a0: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x20d9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
label_20d9a4:
    // 0x20d9a4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x20d9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20d9a8:
    // 0x20d9a8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x20d9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20d9ac:
    // 0x20d9ac: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x20d9acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_20d9b0:
    // 0x20d9b0: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x20d9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_20d9b4:
    // 0x20d9b4: 0x40f809  jalr        $v0
label_20d9b8:
    if (ctx->pc == 0x20D9B8u) {
        ctx->pc = 0x20D9BCu;
        goto label_20d9bc;
    }
    ctx->pc = 0x20D9B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20D9BCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D9B4u, 0x20D9BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20D9BCu;
label_20d9bc:
    // 0x20d9bc: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x20d9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_20d9c0:
    // 0x20d9c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20d9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20d9c4:
    // 0x20d9c4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x20d9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_20d9c8:
    // 0x20d9c8: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x20d9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_20d9cc:
    // 0x20d9cc: 0x40f809  jalr        $v0
label_20d9d0:
    if (ctx->pc == 0x20D9D0u) {
        ctx->pc = 0x20D9D4u;
        goto label_20d9d4;
    }
    ctx->pc = 0x20D9CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20D9D4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D9CCu, 0x20D9D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20D9D4u;
label_20d9d4:
    // 0x20d9d4: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x20d9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_20d9d8:
    // 0x20d9d8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x20d9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20d9dc:
    // 0x20d9dc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x20d9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_20d9e0:
    // 0x20d9e0: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x20d9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_20d9e4:
    // 0x20d9e4: 0x40f809  jalr        $v0
label_20d9e8:
    if (ctx->pc == 0x20D9E8u) {
        ctx->pc = 0x20D9ECu;
        goto label_20d9ec;
    }
    ctx->pc = 0x20D9E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20D9ECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D9E4u, 0x20D9ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20D9ECu;
label_20d9ec:
    // 0x20d9ec: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x20d9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_20d9f0:
    // 0x20d9f0: 0x8c4200fc  lw          $v0, 0xFC($v0)
    ctx->pc = 0x20d9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_20d9f4:
    // 0x20d9f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20d9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20d9f8:
    // 0x20d9f8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20d9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20d9fc:
    // 0x20d9fc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x20d9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_20da00:
    // 0x20da00: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x20da00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_20da04:
    // 0x20da04: 0x40f809  jalr        $v0
label_20da08:
    if (ctx->pc == 0x20DA08u) {
        ctx->pc = 0x20DA0Cu;
        goto label_20da0c;
    }
    ctx->pc = 0x20DA04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20DA0Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DA04u, 0x20DA0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20DA0Cu;
label_20da0c:
    // 0x20da0c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x20da0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_20da10:
    // 0x20da10: 0x8c4400f8  lw          $a0, 0xF8($v0)
    ctx->pc = 0x20da10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 248)));
label_20da14:
    // 0x20da14: 0x240500e1  addiu       $a1, $zero, 0xE1
    ctx->pc = 0x20da14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 225));
label_20da18:
    // 0x20da18: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x20da18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_20da1c:
    // 0x20da1c: 0x24070009  addiu       $a3, $zero, 0x9
    ctx->pc = 0x20da1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_20da20:
    // 0x20da20: 0xc1111fe  jal         func_4447F8
label_20da24:
    if (ctx->pc == 0x20DA24u) {
        ctx->pc = 0x20DA28u;
        goto label_20da28;
    }
    ctx->pc = 0x20DA20u;
    SET_GPR_U32(ctx, 31, 0x20DA28u);
    ctx->pc = 0x4447F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4447F8u, 0x20DA20u, 0x20DA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DA28u;
label_20da28:
    // 0x20da28: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x20da28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20da2c:
    // 0x20da2c: 0xc1110a8  jal         func_4442A0
label_20da30:
    if (ctx->pc == 0x20DA30u) {
        ctx->pc = 0x20DA34u;
        goto label_20da34;
    }
    ctx->pc = 0x20DA2Cu;
    SET_GPR_U32(ctx, 31, 0x20DA34u);
    ctx->pc = 0x4442A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4442A0u, 0x20DA2Cu, 0x20DA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DA34u;
label_20da34:
    // 0x20da34: 0xc111228  jal         func_4448A0
label_20da38:
    if (ctx->pc == 0x20DA38u) {
        ctx->pc = 0x20DA3Cu;
        goto label_20da3c;
    }
    ctx->pc = 0x20DA34u;
    SET_GPR_U32(ctx, 31, 0x20DA3Cu);
    ctx->pc = 0x4448A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4448A0u, 0x20DA34u, 0x20DA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DA3Cu;
label_20da3c:
    // 0x20da3c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x20da3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_20da40:
    // 0x20da40: 0x8c420104  lw          $v0, 0x104($v0)
    ctx->pc = 0x20da40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
label_20da44:
    // 0x20da44: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20da44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20da48:
    // 0x20da48: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20da48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20da4c:
    // 0x20da4c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x20da4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_20da50:
    // 0x20da50: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x20da50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_20da54:
    // 0x20da54: 0x40f809  jalr        $v0
label_20da58:
    if (ctx->pc == 0x20DA58u) {
        ctx->pc = 0x20DA5Cu;
        goto label_20da5c;
    }
    ctx->pc = 0x20DA54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20DA5Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DA54u, 0x20DA5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20DA5Cu;
label_20da5c:
    // 0x20da5c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x20da5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_20da60:
    // 0x20da60: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20da60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20da64:
    // 0x20da64: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x20da64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_20da68:
    // 0x20da68: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x20da68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_20da6c:
    // 0x20da6c: 0x40f809  jalr        $v0
label_20da70:
    if (ctx->pc == 0x20DA70u) {
        ctx->pc = 0x20DA74u;
        goto label_20da74;
    }
    ctx->pc = 0x20DA6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20DA74u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DA6Cu, 0x20DA74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20DA74u;
label_20da74:
    // 0x20da74: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x20da74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_20da78:
    // 0x20da78: 0x8c440100  lw          $a0, 0x100($v0)
    ctx->pc = 0x20da78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
label_20da7c:
    // 0x20da7c: 0x2405012c  addiu       $a1, $zero, 0x12C
    ctx->pc = 0x20da7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
label_20da80:
    // 0x20da80: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x20da80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_20da84:
    // 0x20da84: 0x24070009  addiu       $a3, $zero, 0x9
    ctx->pc = 0x20da84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_20da88:
    // 0x20da88: 0xc1111fe  jal         func_4447F8
label_20da8c:
    if (ctx->pc == 0x20DA8Cu) {
        ctx->pc = 0x20DA90u;
        goto label_20da90;
    }
    ctx->pc = 0x20DA88u;
    SET_GPR_U32(ctx, 31, 0x20DA90u);
    ctx->pc = 0x4447F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4447F8u, 0x20DA88u, 0x20DA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DA90u;
label_20da90:
    // 0x20da90: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x20da90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20da94:
    // 0x20da94: 0xc1110a8  jal         func_4442A0
label_20da98:
    if (ctx->pc == 0x20DA98u) {
        ctx->pc = 0x20DA9Cu;
        goto label_20da9c;
    }
    ctx->pc = 0x20DA94u;
    SET_GPR_U32(ctx, 31, 0x20DA9Cu);
    ctx->pc = 0x4442A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4442A0u, 0x20DA94u, 0x20DA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DA9Cu;
label_20da9c:
    // 0x20da9c: 0xc111228  jal         func_4448A0
label_20daa0:
    if (ctx->pc == 0x20DAA0u) {
        ctx->pc = 0x20DAA4u;
        goto label_20daa4;
    }
    ctx->pc = 0x20DA9Cu;
    SET_GPR_U32(ctx, 31, 0x20DAA4u);
    ctx->pc = 0x4448A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4448A0u, 0x20DA9Cu, 0x20DAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DAA4u;
label_20daa4:
    // 0x20daa4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x20daa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_20daa8:
    // 0x20daa8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20daa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20daac:
    // 0x20daac: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x20daacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_20dab0:
    // 0x20dab0: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x20dab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_20dab4:
    // 0x20dab4: 0x40f809  jalr        $v0
label_20dab8:
    if (ctx->pc == 0x20DAB8u) {
        ctx->pc = 0x20DABCu;
        goto label_20dabc;
    }
    ctx->pc = 0x20DAB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20DABCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DAB4u, 0x20DABCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20DABCu;
label_20dabc:
    // 0x20dabc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20dabcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20dac0:
    // 0x20dac0: 0xc105f9e  jal         func_417E78
label_20dac4:
    if (ctx->pc == 0x20DAC4u) {
        ctx->pc = 0x20DAC8u;
        goto label_20dac8;
    }
    ctx->pc = 0x20DAC0u;
    SET_GPR_U32(ctx, 31, 0x20DAC8u);
    ctx->pc = 0x417E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417E78u, 0x20DAC0u, 0x20DAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DAC8u;
label_20dac8:
    // 0x20dac8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20dac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20dacc:
    // 0x20dacc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20daccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20dad0:
    // 0x20dad0: 0xc0e6e36  jal         func_39B8D8
label_20dad4:
    if (ctx->pc == 0x20DAD4u) {
        ctx->pc = 0x20DAD8u;
        goto label_20dad8;
    }
    ctx->pc = 0x20DAD0u;
    SET_GPR_U32(ctx, 31, 0x20DAD8u);
    ctx->pc = 0x39B8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B8D8u, 0x20DAD0u, 0x20DAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DAD8u;
label_20dad8:
    // 0x20dad8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20dad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20dadc:
    // 0x20dadc: 0xc11c38c  jal         func_470E30
label_20dae0:
    if (ctx->pc == 0x20DAE0u) {
        ctx->pc = 0x20DAE4u;
        goto label_20dae4;
    }
    ctx->pc = 0x20DADCu;
    SET_GPR_U32(ctx, 31, 0x20DAE4u);
    ctx->pc = 0x470E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x470E30u, 0x20DADCu, 0x20DAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DAE4u;
label_20dae4:
    // 0x20dae4: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x20dae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_20dae8:
    // 0x20dae8: 0xc064aec  jal         func_192BB0
label_20daec:
    if (ctx->pc == 0x20DAECu) {
        ctx->pc = 0x20DAF0u;
        goto label_20daf0;
    }
    ctx->pc = 0x20DAE8u;
    SET_GPR_U32(ctx, 31, 0x20DAF0u);
    ctx->pc = 0x192BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192BB0u, 0x20DAE8u, 0x20DAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DAF0u;
label_20daf0:
    // 0x20daf0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x20daf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_20daf4:
    // 0x20daf4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x20daf4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20daf8:
    // 0x20daf8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20daf8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20dafc:
    // 0x20dafc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20dafcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20db00:
    // 0x20db00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20db00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20db04:
    // 0x20db04: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x20db04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_20db08:
    // 0x20db08: 0x3e00008  jr          $ra
label_20db0c:
    if (ctx->pc == 0x20DB0Cu) {
        ctx->pc = 0x20DB10u;
        goto label_20db10;
    }
    ctx->pc = 0x20DB08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DB08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20DB10u;
label_20db10:
    // 0x20db10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x20db10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_20db14:
    // 0x20db14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20db14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_20db18:
    // 0x20db18: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20db18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_20db1c:
    // 0x20db1c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x20db1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_20db20:
    // 0x20db20: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x20db20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_20db24:
    // 0x20db24: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x20db24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_20db28:
    // 0x20db28: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x20db28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20db2c:
    // 0x20db2c: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
label_20db30:
    if (ctx->pc == 0x20DB30u) {
        ctx->pc = 0x20DB34u;
        goto label_20db34;
    }
    ctx->pc = 0x20DB2Cu;
    {
        const bool branch_taken_0x20db2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20db2c) {
            ctx->pc = 0x20DB8Cu;
            goto label_20db8c;
        }
    }
    ctx->pc = 0x20DB34u;
label_20db34:
    // 0x20db34: 0x8f83bcc4  lw          $v1, -0x433C($gp)
    ctx->pc = 0x20db34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_20db38:
    // 0x20db38: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x20db38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20db3c:
    // 0x20db3c: 0x10030013  beq         $zero, $v1, . + 4 + (0x13 << 2)
label_20db40:
    if (ctx->pc == 0x20DB40u) {
        ctx->pc = 0x20DB44u;
        goto label_20db44;
    }
    ctx->pc = 0x20DB3Cu;
    {
        const bool branch_taken_0x20db3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x20db3c) {
            ctx->pc = 0x20DB8Cu;
            goto label_20db8c;
        }
    }
    ctx->pc = 0x20DB44u;
label_20db44:
    // 0x20db44: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x20db44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_20db48:
    // 0x20db48: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x20db48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20db4c:
    // 0x20db4c: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x20db4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_20db50:
    // 0x20db50: 0xc085538  jal         func_2154E0
label_20db54:
    if (ctx->pc == 0x20DB54u) {
        ctx->pc = 0x20DB58u;
        goto label_20db58;
    }
    ctx->pc = 0x20DB50u;
    SET_GPR_U32(ctx, 31, 0x20DB58u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x20DB50u, 0x20DB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DB58u;
label_20db58:
    // 0x20db58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20db58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20db5c:
    // 0x20db5c: 0x1010000b  beq         $zero, $s0, . + 4 + (0xB << 2)
label_20db60:
    if (ctx->pc == 0x20DB60u) {
        ctx->pc = 0x20DB64u;
        goto label_20db64;
    }
    ctx->pc = 0x20DB5Cu;
    {
        const bool branch_taken_0x20db5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        if (branch_taken_0x20db5c) {
            ctx->pc = 0x20DB8Cu;
            goto label_20db8c;
        }
    }
    ctx->pc = 0x20DB64u;
label_20db64:
    // 0x20db64: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x20db64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_20db68:
    // 0x20db68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20db68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20db6c:
    // 0x20db6c: 0xc040aa8  jal         func_102AA0
label_20db70:
    if (ctx->pc == 0x20DB70u) {
        ctx->pc = 0x20DB74u;
        goto label_20db74;
    }
    ctx->pc = 0x20DB6Cu;
    SET_GPR_U32(ctx, 31, 0x20DB74u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x20DB6Cu, 0x20DB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DB74u;
label_20db74:
    // 0x20db74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20db74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20db78:
    // 0x20db78: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20db78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20db7c:
    // 0x20db7c: 0xc040a90  jal         func_102A40
label_20db80:
    if (ctx->pc == 0x20DB80u) {
        ctx->pc = 0x20DB84u;
        goto label_20db84;
    }
    ctx->pc = 0x20DB7Cu;
    SET_GPR_U32(ctx, 31, 0x20DB84u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x20DB7Cu, 0x20DB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DB84u;
label_20db84:
    // 0x20db84: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20db84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20db88:
    // 0x20db88: 0xe4740008  swc1        $f20, 0x8($v1)
    ctx->pc = 0x20db88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_20db8c:
    // 0x20db8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20db8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_20db90:
    // 0x20db90: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20db90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20db94:
    // 0x20db94: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x20db94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_20db98:
    // 0x20db98: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x20db98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_20db9c:
    // 0x20db9c: 0x3e00008  jr          $ra
label_20dba0:
    if (ctx->pc == 0x20DBA0u) {
        ctx->pc = 0x20DBA4u;
        goto label_20dba4;
    }
    ctx->pc = 0x20DB9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DB9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20DBA4u;
label_20dba4:
    // 0x20dba4: 0x0  nop
    ctx->pc = 0x20dba4u;
    // NOP
label_20dba8:
    // 0x20dba8: 0x0  nop
    ctx->pc = 0x20dba8u;
    // NOP
label_20dbac:
    // 0x20dbac: 0x0  nop
    ctx->pc = 0x20dbacu;
    // NOP
label_20dbb0:
    // 0x20dbb0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x20dbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_20dbb4:
    // 0x20dbb4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x20dbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_20dbb8:
    // 0x20dbb8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20dbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_20dbbc:
    // 0x20dbbc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20dbbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_20dbc0:
    // 0x20dbc0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20dbc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_20dbc4:
    // 0x20dbc4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x20dbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_20dbc8:
    // 0x20dbc8: 0xa3a50050  sb          $a1, 0x50($sp)
    ctx->pc = 0x20dbc8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 5));
label_20dbcc:
    // 0x20dbcc: 0xafa60060  sw          $a2, 0x60($sp)
    ctx->pc = 0x20dbccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
label_20dbd0:
    // 0x20dbd0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x20dbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_20dbd4:
    // 0x20dbd4: 0x93a50050  lbu         $a1, 0x50($sp)
    ctx->pc = 0x20dbd4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
label_20dbd8:
    // 0x20dbd8: 0x8fa60060  lw          $a2, 0x60($sp)
    ctx->pc = 0x20dbd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_20dbdc:
    // 0x20dbdc: 0xc064a4c  jal         func_192930
label_20dbe0:
    if (ctx->pc == 0x20DBE0u) {
        ctx->pc = 0x20DBE4u;
        goto label_20dbe4;
    }
    ctx->pc = 0x20DBDCu;
    SET_GPR_U32(ctx, 31, 0x20DBE4u);
    ctx->pc = 0x192930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192930u, 0x20DBDCu, 0x20DBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DBE4u;
label_20dbe4:
    // 0x20dbe4: 0xc090864  jal         func_242190
label_20dbe8:
    if (ctx->pc == 0x20DBE8u) {
        ctx->pc = 0x20DBECu;
        goto label_20dbec;
    }
    ctx->pc = 0x20DBE4u;
    SET_GPR_U32(ctx, 31, 0x20DBECu);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x20DBE4u, 0x20DBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DBECu;
label_20dbec:
    // 0x20dbec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20dbecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20dbf0:
    // 0x20dbf0: 0xc090590  jal         func_241640
label_20dbf4:
    if (ctx->pc == 0x20DBF4u) {
        ctx->pc = 0x20DBF8u;
        goto label_20dbf8;
    }
    ctx->pc = 0x20DBF0u;
    SET_GPR_U32(ctx, 31, 0x20DBF8u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x20DBF0u, 0x20DBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DBF8u;
label_20dbf8:
    // 0x20dbf8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20dbf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20dbfc:
    // 0x20dbfc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x20dbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_20dc00:
    // 0x20dc00: 0xc09157c  jal         func_2455F0
label_20dc04:
    if (ctx->pc == 0x20DC04u) {
        ctx->pc = 0x20DC08u;
        goto label_20dc08;
    }
    ctx->pc = 0x20DC00u;
    SET_GPR_U32(ctx, 31, 0x20DC08u);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x20DC00u, 0x20DC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DC08u;
label_20dc08:
    // 0x20dc08: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x20dc08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20dc0c:
    // 0x20dc0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20dc0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20dc10:
    // 0x20dc10: 0xc040e7c  jal         func_1039F0
label_20dc14:
    if (ctx->pc == 0x20DC14u) {
        ctx->pc = 0x20DC18u;
        goto label_20dc18;
    }
    ctx->pc = 0x20DC10u;
    SET_GPR_U32(ctx, 31, 0x20DC18u);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x20DC10u, 0x20DC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DC18u;
label_20dc18:
    // 0x20dc18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20dc18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20dc1c:
    // 0x20dc1c: 0x10000014  b           . + 4 + (0x14 << 2)
label_20dc20:
    if (ctx->pc == 0x20DC20u) {
        ctx->pc = 0x20DC24u;
        goto label_20dc24;
    }
    ctx->pc = 0x20DC1Cu;
    {
        const bool branch_taken_0x20dc1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20dc1c) {
            ctx->pc = 0x20DC70u;
            goto label_20dc70;
        }
    }
    ctx->pc = 0x20DC24u;
label_20dc24:
    // 0x20dc24: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x20dc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_20dc28:
    // 0x20dc28: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20dc28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20dc2c:
    // 0x20dc2c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x20dc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20dc30:
    // 0x20dc30: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_20dc34:
    if (ctx->pc == 0x20DC34u) {
        ctx->pc = 0x20DC38u;
        goto label_20dc38;
    }
    ctx->pc = 0x20DC30u;
    {
        const bool branch_taken_0x20dc30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x20dc30) {
            ctx->pc = 0x20DC6Cu;
            goto label_20dc6c;
        }
    }
    ctx->pc = 0x20DC38u;
label_20dc38:
    // 0x20dc38: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x20dc38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20dc3c:
    // 0x20dc3c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x20dc3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_20dc40:
    // 0x20dc40: 0xc085538  jal         func_2154E0
label_20dc44:
    if (ctx->pc == 0x20DC44u) {
        ctx->pc = 0x20DC48u;
        goto label_20dc48;
    }
    ctx->pc = 0x20DC40u;
    SET_GPR_U32(ctx, 31, 0x20DC48u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x20DC40u, 0x20DC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DC48u;
label_20dc48:
    // 0x20dc48: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x20dc48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20dc4c:
    // 0x20dc4c: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
label_20dc50:
    if (ctx->pc == 0x20DC50u) {
        ctx->pc = 0x20DC54u;
        goto label_20dc54;
    }
    ctx->pc = 0x20DC4Cu;
    {
        const bool branch_taken_0x20dc4c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x20dc4c) {
            ctx->pc = 0x20DC6Cu;
            goto label_20dc6c;
        }
    }
    ctx->pc = 0x20DC54u;
label_20dc54:
    // 0x20dc54: 0x93a20050  lbu         $v0, 0x50($sp)
    ctx->pc = 0x20dc54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
label_20dc58:
    // 0x20dc58: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x20dc58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_20dc5c:
    // 0x20dc5c: 0x38450001  xori        $a1, $v0, 0x1
    ctx->pc = 0x20dc5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_20dc60:
    // 0x20dc60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20dc60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20dc64:
    // 0x20dc64: 0xc0a85cc  jal         func_2A1730
label_20dc68:
    if (ctx->pc == 0x20DC68u) {
        ctx->pc = 0x20DC6Cu;
        goto label_20dc6c;
    }
    ctx->pc = 0x20DC64u;
    SET_GPR_U32(ctx, 31, 0x20DC6Cu);
    ctx->pc = 0x2A1730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1730u, 0x20DC64u, 0x20DC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DC6Cu;
label_20dc6c:
    // 0x20dc6c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x20dc6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_20dc70:
    // 0x20dc70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20dc70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20dc74:
    // 0x20dc74: 0xc04147c  jal         func_1051F0
label_20dc78:
    if (ctx->pc == 0x20DC78u) {
        ctx->pc = 0x20DC7Cu;
        goto label_20dc7c;
    }
    ctx->pc = 0x20DC74u;
    SET_GPR_U32(ctx, 31, 0x20DC7Cu);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x20DC74u, 0x20DC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DC7Cu;
label_20dc7c:
    // 0x20dc7c: 0x1602ffe9  bne         $s0, $v0, . + 4 + (-0x17 << 2)
label_20dc80:
    if (ctx->pc == 0x20DC80u) {
        ctx->pc = 0x20DC84u;
        goto label_20dc84;
    }
    ctx->pc = 0x20DC7Cu;
    {
        const bool branch_taken_0x20dc7c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x20dc7c) {
            ctx->pc = 0x20DC24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20dc24;
        }
    }
    ctx->pc = 0x20DC84u;
label_20dc84:
    // 0x20dc84: 0x93a30050  lbu         $v1, 0x50($sp)
    ctx->pc = 0x20dc84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
label_20dc88:
    // 0x20dc88: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_20dc8c:
    if (ctx->pc == 0x20DC8Cu) {
        ctx->pc = 0x20DC90u;
        goto label_20dc90;
    }
    ctx->pc = 0x20DC88u;
    {
        const bool branch_taken_0x20dc88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20dc88) {
            ctx->pc = 0x20DCA4u;
            goto label_20dca4;
        }
    }
    ctx->pc = 0x20DC90u;
label_20dc90:
    // 0x20dc90: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x20dc90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_20dc94:
    // 0x20dc94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20dc94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20dc98:
    // 0x20dc98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20dc98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20dc9c:
    // 0x20dc9c: 0xc08f740  jal         func_23DD00
label_20dca0:
    if (ctx->pc == 0x20DCA0u) {
        ctx->pc = 0x20DCA4u;
        goto label_20dca4;
    }
    ctx->pc = 0x20DC9Cu;
    SET_GPR_U32(ctx, 31, 0x20DCA4u);
    ctx->pc = 0x23DD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DD00u, 0x20DC9Cu, 0x20DCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DCA4u;
label_20dca4:
    // 0x20dca4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x20dca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_20dca8:
    // 0x20dca8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20dca8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20dcac:
    // 0x20dcac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20dcacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20dcb0:
    // 0x20dcb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20dcb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20dcb4:
    // 0x20dcb4: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x20dcb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_20dcb8:
    // 0x20dcb8: 0x3e00008  jr          $ra
label_20dcbc:
    if (ctx->pc == 0x20DCBCu) {
        ctx->pc = 0x20DCC0u;
        goto label_20dcc0;
    }
    ctx->pc = 0x20DCB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DCB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20DCC0u;
label_20dcc0:
    // 0x20dcc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x20dcc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_20dcc4:
    // 0x20dcc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20dcc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_20dcc8:
    // 0x20dcc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20dcc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_20dccc:
    // 0x20dccc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20dcccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_20dcd0:
    // 0x20dcd0: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x20dcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_20dcd4:
    // 0x20dcd4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x20dcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_20dcd8:
    // 0x20dcd8: 0x90420138  lbu         $v0, 0x138($v0)
    ctx->pc = 0x20dcd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 312)));
label_20dcdc:
    // 0x20dcdc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_20dce0:
    if (ctx->pc == 0x20DCE0u) {
        ctx->pc = 0x20DCE4u;
        goto label_20dce4;
    }
    ctx->pc = 0x20DCDCu;
    {
        const bool branch_taken_0x20dcdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20dcdc) {
            ctx->pc = 0x20DD04u;
            goto label_20dd04;
        }
    }
    ctx->pc = 0x20DCE4u;
label_20dce4:
    // 0x20dce4: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x20dce4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
label_20dce8:
    // 0x20dce8: 0x248494a0  addiu       $a0, $a0, -0x6B60
    ctx->pc = 0x20dce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939808));
label_20dcec:
    // 0x20dcec: 0xc0ac004  jal         func_2B0010
label_20dcf0:
    if (ctx->pc == 0x20DCF0u) {
        ctx->pc = 0x20DCF4u;
        goto label_20dcf4;
    }
    ctx->pc = 0x20DCECu;
    SET_GPR_U32(ctx, 31, 0x20DCF4u);
    ctx->pc = 0x2B0010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0010u, 0x20DCECu, 0x20DCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DCF4u;
label_20dcf4:
    // 0x20dcf4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x20dcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_20dcf8:
    // 0x20dcf8: 0xac620114  sw          $v0, 0x114($v1)
    ctx->pc = 0x20dcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 276), GPR_U32(ctx, 2));
label_20dcfc:
    // 0x20dcfc: 0x10000007  b           . + 4 + (0x7 << 2)
label_20dd00:
    if (ctx->pc == 0x20DD00u) {
        ctx->pc = 0x20DD04u;
        goto label_20dd04;
    }
    ctx->pc = 0x20DCFCu;
    {
        const bool branch_taken_0x20dcfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20dcfc) {
            ctx->pc = 0x20DD1Cu;
            goto label_20dd1c;
        }
    }
    ctx->pc = 0x20DD04u;
label_20dd04:
    // 0x20dd04: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x20dd04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
label_20dd08:
    // 0x20dd08: 0x248494d0  addiu       $a0, $a0, -0x6B30
    ctx->pc = 0x20dd08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939856));
label_20dd0c:
    // 0x20dd0c: 0xc0ac004  jal         func_2B0010
label_20dd10:
    if (ctx->pc == 0x20DD10u) {
        ctx->pc = 0x20DD14u;
        goto label_20dd14;
    }
    ctx->pc = 0x20DD0Cu;
    SET_GPR_U32(ctx, 31, 0x20DD14u);
    ctx->pc = 0x2B0010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0010u, 0x20DD0Cu, 0x20DD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DD14u;
label_20dd14:
    // 0x20dd14: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x20dd14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_20dd18:
    // 0x20dd18: 0xac620114  sw          $v0, 0x114($v1)
    ctx->pc = 0x20dd18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 276), GPR_U32(ctx, 2));
label_20dd1c:
    // 0x20dd1c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x20dd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_20dd20:
    // 0x20dd20: 0x90420138  lbu         $v0, 0x138($v0)
    ctx->pc = 0x20dd20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 312)));
label_20dd24:
    // 0x20dd24: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_20dd28:
    if (ctx->pc == 0x20DD28u) {
        ctx->pc = 0x20DD2Cu;
        goto label_20dd2c;
    }
    ctx->pc = 0x20DD24u;
    {
        const bool branch_taken_0x20dd24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20dd24) {
            ctx->pc = 0x20DD60u;
            goto label_20dd60;
        }
    }
    ctx->pc = 0x20DD2Cu;
label_20dd2c:
    // 0x20dd2c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20dd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_20dd30:
    // 0x20dd30: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20dd30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20dd34:
    // 0x20dd34: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x20dd34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_20dd38:
    // 0x20dd38: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x20dd38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_20dd3c:
    // 0x20dd3c: 0x24a59430  addiu       $a1, $a1, -0x6BD0
    ctx->pc = 0x20dd3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939696));
label_20dd40:
    // 0x20dd40: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20dd40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20dd44:
    // 0x20dd44: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x20dd44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20dd48:
    // 0x20dd48: 0xc08f558  jal         func_23D560
label_20dd4c:
    if (ctx->pc == 0x20DD4Cu) {
        ctx->pc = 0x20DD50u;
        goto label_20dd50;
    }
    ctx->pc = 0x20DD48u;
    SET_GPR_U32(ctx, 31, 0x20DD50u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x20DD48u, 0x20DD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DD50u;
label_20dd50:
    // 0x20dd50: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x20dd50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_20dd54:
    // 0x20dd54: 0xac620118  sw          $v0, 0x118($v1)
    ctx->pc = 0x20dd54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 280), GPR_U32(ctx, 2));
label_20dd58:
    // 0x20dd58: 0x1000000b  b           . + 4 + (0xB << 2)
label_20dd5c:
    if (ctx->pc == 0x20DD5Cu) {
        ctx->pc = 0x20DD60u;
        goto label_20dd60;
    }
    ctx->pc = 0x20DD58u;
    {
        const bool branch_taken_0x20dd58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20dd58) {
            ctx->pc = 0x20DD88u;
            goto label_20dd88;
        }
    }
    ctx->pc = 0x20DD60u;
label_20dd60:
    // 0x20dd60: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20dd60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_20dd64:
    // 0x20dd64: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20dd64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20dd68:
    // 0x20dd68: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x20dd68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_20dd6c:
    // 0x20dd6c: 0x27859b00  addiu       $a1, $gp, -0x6500
    ctx->pc = 0x20dd6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941440));
label_20dd70:
    // 0x20dd70: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20dd70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20dd74:
    // 0x20dd74: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x20dd74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20dd78:
    // 0x20dd78: 0xc08f558  jal         func_23D560
label_20dd7c:
    if (ctx->pc == 0x20DD7Cu) {
        ctx->pc = 0x20DD80u;
        goto label_20dd80;
    }
    ctx->pc = 0x20DD78u;
    SET_GPR_U32(ctx, 31, 0x20DD80u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x20DD78u, 0x20DD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DD80u;
label_20dd80:
    // 0x20dd80: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x20dd80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_20dd84:
    // 0x20dd84: 0xac620118  sw          $v0, 0x118($v1)
    ctx->pc = 0x20dd84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 280), GPR_U32(ctx, 2));
label_20dd88:
    // 0x20dd88: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x20dd88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20dd8c:
    // 0x20dd8c: 0x1000000c  b           . + 4 + (0xC << 2)
label_20dd90:
    if (ctx->pc == 0x20DD90u) {
        ctx->pc = 0x20DD94u;
        goto label_20dd94;
    }
    ctx->pc = 0x20DD8Cu;
    {
        const bool branch_taken_0x20dd8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20dd8c) {
            ctx->pc = 0x20DDC0u;
            goto label_20ddc0;
        }
    }
    ctx->pc = 0x20DD94u;
label_20dd94:
    // 0x20dd94: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x20dd94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_20dd98:
    // 0x20dd98: 0xc08385c  jal         func_20E170
label_20dd9c:
    if (ctx->pc == 0x20DD9Cu) {
        ctx->pc = 0x20DDA0u;
        goto label_20dda0;
    }
    ctx->pc = 0x20DD98u;
    SET_GPR_U32(ctx, 31, 0x20DDA0u);
    ctx->pc = 0x20E170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E170u, 0x20DD98u, 0x20DDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DDA0u;
label_20dda0:
    // 0x20dda0: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x20dda0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
label_20dda4:
    // 0x20dda4: 0x27b1003c  addiu       $s1, $sp, 0x3C
    ctx->pc = 0x20dda4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_20dda8:
    // 0x20dda8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x20dda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_20ddac:
    // 0x20ddac: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x20ddacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_20ddb0:
    // 0x20ddb0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20ddb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20ddb4:
    // 0x20ddb4: 0xc08377c  jal         func_20DDF0
label_20ddb8:
    if (ctx->pc == 0x20DDB8u) {
        ctx->pc = 0x20DDBCu;
        goto label_20ddbc;
    }
    ctx->pc = 0x20DDB4u;
    SET_GPR_U32(ctx, 31, 0x20DDBCu);
    ctx->pc = 0x20DDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DDF0u, 0x20DDB4u, 0x20DDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DDBCu;
label_20ddbc:
    // 0x20ddbc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x20ddbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_20ddc0:
    // 0x20ddc0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x20ddc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_20ddc4:
    // 0x20ddc4: 0x8c6300b4  lw          $v1, 0xB4($v1)
    ctx->pc = 0x20ddc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
label_20ddc8:
    // 0x20ddc8: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x20ddc8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_20ddcc:
    // 0x20ddcc: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_20ddd0:
    if (ctx->pc == 0x20DDD0u) {
        ctx->pc = 0x20DDD4u;
        goto label_20ddd4;
    }
    ctx->pc = 0x20DDCCu;
    {
        const bool branch_taken_0x20ddcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20ddcc) {
            ctx->pc = 0x20DD94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20dd94;
        }
    }
    ctx->pc = 0x20DDD4u;
label_20ddd4:
    // 0x20ddd4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20ddd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_20ddd8:
    // 0x20ddd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20ddd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20dddc:
    // 0x20dddc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20dddcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20dde0:
    // 0x20dde0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x20dde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_20dde4:
    // 0x20dde4: 0x3e00008  jr          $ra
label_20dde8:
    if (ctx->pc == 0x20DDE8u) {
        ctx->pc = 0x20DDECu;
        goto label_20ddec;
    }
    ctx->pc = 0x20DDE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DDE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20DDECu;
label_20ddec:
    // 0x20ddec: 0x0  nop
    ctx->pc = 0x20ddecu;
    // NOP
    ctx->pc = 0x20ddf0u;
}
