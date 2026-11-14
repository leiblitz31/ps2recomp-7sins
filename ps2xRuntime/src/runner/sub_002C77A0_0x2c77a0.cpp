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

// Function: sub_002C77A0
// Address: 0x2c77a0 - 0x2c8490
void sub_002C77A0_0x2c77a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C77A0_0x2c77a0");
#endif

    switch (ctx->pc) {
        case 0x2c77a0u: goto label_2c77a0;
        case 0x2c77a4u: goto label_2c77a4;
        case 0x2c77a8u: goto label_2c77a8;
        case 0x2c77acu: goto label_2c77ac;
        case 0x2c77b0u: goto label_2c77b0;
        case 0x2c77b4u: goto label_2c77b4;
        case 0x2c77b8u: goto label_2c77b8;
        case 0x2c77bcu: goto label_2c77bc;
        case 0x2c77c0u: goto label_2c77c0;
        case 0x2c77c4u: goto label_2c77c4;
        case 0x2c77c8u: goto label_2c77c8;
        case 0x2c77ccu: goto label_2c77cc;
        case 0x2c77d0u: goto label_2c77d0;
        case 0x2c77d4u: goto label_2c77d4;
        case 0x2c77d8u: goto label_2c77d8;
        case 0x2c77dcu: goto label_2c77dc;
        case 0x2c77e0u: goto label_2c77e0;
        case 0x2c77e4u: goto label_2c77e4;
        case 0x2c77e8u: goto label_2c77e8;
        case 0x2c77ecu: goto label_2c77ec;
        case 0x2c77f0u: goto label_2c77f0;
        case 0x2c77f4u: goto label_2c77f4;
        case 0x2c77f8u: goto label_2c77f8;
        case 0x2c77fcu: goto label_2c77fc;
        case 0x2c7800u: goto label_2c7800;
        case 0x2c7804u: goto label_2c7804;
        case 0x2c7808u: goto label_2c7808;
        case 0x2c780cu: goto label_2c780c;
        case 0x2c7810u: goto label_2c7810;
        case 0x2c7814u: goto label_2c7814;
        case 0x2c7818u: goto label_2c7818;
        case 0x2c781cu: goto label_2c781c;
        case 0x2c7820u: goto label_2c7820;
        case 0x2c7824u: goto label_2c7824;
        case 0x2c7828u: goto label_2c7828;
        case 0x2c782cu: goto label_2c782c;
        case 0x2c7830u: goto label_2c7830;
        case 0x2c7834u: goto label_2c7834;
        case 0x2c7838u: goto label_2c7838;
        case 0x2c783cu: goto label_2c783c;
        case 0x2c7840u: goto label_2c7840;
        case 0x2c7844u: goto label_2c7844;
        case 0x2c7848u: goto label_2c7848;
        case 0x2c784cu: goto label_2c784c;
        case 0x2c7850u: goto label_2c7850;
        case 0x2c7854u: goto label_2c7854;
        case 0x2c7858u: goto label_2c7858;
        case 0x2c785cu: goto label_2c785c;
        case 0x2c7860u: goto label_2c7860;
        case 0x2c7864u: goto label_2c7864;
        case 0x2c7868u: goto label_2c7868;
        case 0x2c786cu: goto label_2c786c;
        case 0x2c7870u: goto label_2c7870;
        case 0x2c7874u: goto label_2c7874;
        case 0x2c7878u: goto label_2c7878;
        case 0x2c787cu: goto label_2c787c;
        case 0x2c7880u: goto label_2c7880;
        case 0x2c7884u: goto label_2c7884;
        case 0x2c7888u: goto label_2c7888;
        case 0x2c788cu: goto label_2c788c;
        case 0x2c7890u: goto label_2c7890;
        case 0x2c7894u: goto label_2c7894;
        case 0x2c7898u: goto label_2c7898;
        case 0x2c789cu: goto label_2c789c;
        case 0x2c78a0u: goto label_2c78a0;
        case 0x2c78a4u: goto label_2c78a4;
        case 0x2c78a8u: goto label_2c78a8;
        case 0x2c78acu: goto label_2c78ac;
        case 0x2c78b0u: goto label_2c78b0;
        case 0x2c78b4u: goto label_2c78b4;
        case 0x2c78b8u: goto label_2c78b8;
        case 0x2c78bcu: goto label_2c78bc;
        case 0x2c78c0u: goto label_2c78c0;
        case 0x2c78c4u: goto label_2c78c4;
        case 0x2c78c8u: goto label_2c78c8;
        case 0x2c78ccu: goto label_2c78cc;
        case 0x2c78d0u: goto label_2c78d0;
        case 0x2c78d4u: goto label_2c78d4;
        case 0x2c78d8u: goto label_2c78d8;
        case 0x2c78dcu: goto label_2c78dc;
        case 0x2c78e0u: goto label_2c78e0;
        case 0x2c78e4u: goto label_2c78e4;
        case 0x2c78e8u: goto label_2c78e8;
        case 0x2c78ecu: goto label_2c78ec;
        case 0x2c78f0u: goto label_2c78f0;
        case 0x2c78f4u: goto label_2c78f4;
        case 0x2c78f8u: goto label_2c78f8;
        case 0x2c78fcu: goto label_2c78fc;
        case 0x2c7900u: goto label_2c7900;
        case 0x2c7904u: goto label_2c7904;
        case 0x2c7908u: goto label_2c7908;
        case 0x2c790cu: goto label_2c790c;
        case 0x2c7910u: goto label_2c7910;
        case 0x2c7914u: goto label_2c7914;
        case 0x2c7918u: goto label_2c7918;
        case 0x2c791cu: goto label_2c791c;
        case 0x2c7920u: goto label_2c7920;
        case 0x2c7924u: goto label_2c7924;
        case 0x2c7928u: goto label_2c7928;
        case 0x2c792cu: goto label_2c792c;
        case 0x2c7930u: goto label_2c7930;
        case 0x2c7934u: goto label_2c7934;
        case 0x2c7938u: goto label_2c7938;
        case 0x2c793cu: goto label_2c793c;
        case 0x2c7940u: goto label_2c7940;
        case 0x2c7944u: goto label_2c7944;
        case 0x2c7948u: goto label_2c7948;
        case 0x2c794cu: goto label_2c794c;
        case 0x2c7950u: goto label_2c7950;
        case 0x2c7954u: goto label_2c7954;
        case 0x2c7958u: goto label_2c7958;
        case 0x2c795cu: goto label_2c795c;
        case 0x2c7960u: goto label_2c7960;
        case 0x2c7964u: goto label_2c7964;
        case 0x2c7968u: goto label_2c7968;
        case 0x2c796cu: goto label_2c796c;
        case 0x2c7970u: goto label_2c7970;
        case 0x2c7974u: goto label_2c7974;
        case 0x2c7978u: goto label_2c7978;
        case 0x2c797cu: goto label_2c797c;
        case 0x2c7980u: goto label_2c7980;
        case 0x2c7984u: goto label_2c7984;
        case 0x2c7988u: goto label_2c7988;
        case 0x2c798cu: goto label_2c798c;
        case 0x2c7990u: goto label_2c7990;
        case 0x2c7994u: goto label_2c7994;
        case 0x2c7998u: goto label_2c7998;
        case 0x2c799cu: goto label_2c799c;
        case 0x2c79a0u: goto label_2c79a0;
        case 0x2c79a4u: goto label_2c79a4;
        case 0x2c79a8u: goto label_2c79a8;
        case 0x2c79acu: goto label_2c79ac;
        case 0x2c79b0u: goto label_2c79b0;
        case 0x2c79b4u: goto label_2c79b4;
        case 0x2c79b8u: goto label_2c79b8;
        case 0x2c79bcu: goto label_2c79bc;
        case 0x2c79c0u: goto label_2c79c0;
        case 0x2c79c4u: goto label_2c79c4;
        case 0x2c79c8u: goto label_2c79c8;
        case 0x2c79ccu: goto label_2c79cc;
        case 0x2c79d0u: goto label_2c79d0;
        case 0x2c79d4u: goto label_2c79d4;
        case 0x2c79d8u: goto label_2c79d8;
        case 0x2c79dcu: goto label_2c79dc;
        case 0x2c79e0u: goto label_2c79e0;
        case 0x2c79e4u: goto label_2c79e4;
        case 0x2c79e8u: goto label_2c79e8;
        case 0x2c79ecu: goto label_2c79ec;
        case 0x2c79f0u: goto label_2c79f0;
        case 0x2c79f4u: goto label_2c79f4;
        case 0x2c79f8u: goto label_2c79f8;
        case 0x2c79fcu: goto label_2c79fc;
        case 0x2c7a00u: goto label_2c7a00;
        case 0x2c7a04u: goto label_2c7a04;
        case 0x2c7a08u: goto label_2c7a08;
        case 0x2c7a0cu: goto label_2c7a0c;
        case 0x2c7a10u: goto label_2c7a10;
        case 0x2c7a14u: goto label_2c7a14;
        case 0x2c7a18u: goto label_2c7a18;
        case 0x2c7a1cu: goto label_2c7a1c;
        case 0x2c7a20u: goto label_2c7a20;
        case 0x2c7a24u: goto label_2c7a24;
        case 0x2c7a28u: goto label_2c7a28;
        case 0x2c7a2cu: goto label_2c7a2c;
        case 0x2c7a30u: goto label_2c7a30;
        case 0x2c7a34u: goto label_2c7a34;
        case 0x2c7a38u: goto label_2c7a38;
        case 0x2c7a3cu: goto label_2c7a3c;
        case 0x2c7a40u: goto label_2c7a40;
        case 0x2c7a44u: goto label_2c7a44;
        case 0x2c7a48u: goto label_2c7a48;
        case 0x2c7a4cu: goto label_2c7a4c;
        case 0x2c7a50u: goto label_2c7a50;
        case 0x2c7a54u: goto label_2c7a54;
        case 0x2c7a58u: goto label_2c7a58;
        case 0x2c7a5cu: goto label_2c7a5c;
        case 0x2c7a60u: goto label_2c7a60;
        case 0x2c7a64u: goto label_2c7a64;
        case 0x2c7a68u: goto label_2c7a68;
        case 0x2c7a6cu: goto label_2c7a6c;
        case 0x2c7a70u: goto label_2c7a70;
        case 0x2c7a74u: goto label_2c7a74;
        case 0x2c7a78u: goto label_2c7a78;
        case 0x2c7a7cu: goto label_2c7a7c;
        case 0x2c7a80u: goto label_2c7a80;
        case 0x2c7a84u: goto label_2c7a84;
        case 0x2c7a88u: goto label_2c7a88;
        case 0x2c7a8cu: goto label_2c7a8c;
        case 0x2c7a90u: goto label_2c7a90;
        case 0x2c7a94u: goto label_2c7a94;
        case 0x2c7a98u: goto label_2c7a98;
        case 0x2c7a9cu: goto label_2c7a9c;
        case 0x2c7aa0u: goto label_2c7aa0;
        case 0x2c7aa4u: goto label_2c7aa4;
        case 0x2c7aa8u: goto label_2c7aa8;
        case 0x2c7aacu: goto label_2c7aac;
        case 0x2c7ab0u: goto label_2c7ab0;
        case 0x2c7ab4u: goto label_2c7ab4;
        case 0x2c7ab8u: goto label_2c7ab8;
        case 0x2c7abcu: goto label_2c7abc;
        case 0x2c7ac0u: goto label_2c7ac0;
        case 0x2c7ac4u: goto label_2c7ac4;
        case 0x2c7ac8u: goto label_2c7ac8;
        case 0x2c7accu: goto label_2c7acc;
        case 0x2c7ad0u: goto label_2c7ad0;
        case 0x2c7ad4u: goto label_2c7ad4;
        case 0x2c7ad8u: goto label_2c7ad8;
        case 0x2c7adcu: goto label_2c7adc;
        case 0x2c7ae0u: goto label_2c7ae0;
        case 0x2c7ae4u: goto label_2c7ae4;
        case 0x2c7ae8u: goto label_2c7ae8;
        case 0x2c7aecu: goto label_2c7aec;
        case 0x2c7af0u: goto label_2c7af0;
        case 0x2c7af4u: goto label_2c7af4;
        case 0x2c7af8u: goto label_2c7af8;
        case 0x2c7afcu: goto label_2c7afc;
        case 0x2c7b00u: goto label_2c7b00;
        case 0x2c7b04u: goto label_2c7b04;
        case 0x2c7b08u: goto label_2c7b08;
        case 0x2c7b0cu: goto label_2c7b0c;
        case 0x2c7b10u: goto label_2c7b10;
        case 0x2c7b14u: goto label_2c7b14;
        case 0x2c7b18u: goto label_2c7b18;
        case 0x2c7b1cu: goto label_2c7b1c;
        case 0x2c7b20u: goto label_2c7b20;
        case 0x2c7b24u: goto label_2c7b24;
        case 0x2c7b28u: goto label_2c7b28;
        case 0x2c7b2cu: goto label_2c7b2c;
        case 0x2c7b30u: goto label_2c7b30;
        case 0x2c7b34u: goto label_2c7b34;
        case 0x2c7b38u: goto label_2c7b38;
        case 0x2c7b3cu: goto label_2c7b3c;
        case 0x2c7b40u: goto label_2c7b40;
        case 0x2c7b44u: goto label_2c7b44;
        case 0x2c7b48u: goto label_2c7b48;
        case 0x2c7b4cu: goto label_2c7b4c;
        case 0x2c7b50u: goto label_2c7b50;
        case 0x2c7b54u: goto label_2c7b54;
        case 0x2c7b58u: goto label_2c7b58;
        case 0x2c7b5cu: goto label_2c7b5c;
        case 0x2c7b60u: goto label_2c7b60;
        case 0x2c7b64u: goto label_2c7b64;
        case 0x2c7b68u: goto label_2c7b68;
        case 0x2c7b6cu: goto label_2c7b6c;
        case 0x2c7b70u: goto label_2c7b70;
        case 0x2c7b74u: goto label_2c7b74;
        case 0x2c7b78u: goto label_2c7b78;
        case 0x2c7b7cu: goto label_2c7b7c;
        case 0x2c7b80u: goto label_2c7b80;
        case 0x2c7b84u: goto label_2c7b84;
        case 0x2c7b88u: goto label_2c7b88;
        case 0x2c7b8cu: goto label_2c7b8c;
        case 0x2c7b90u: goto label_2c7b90;
        case 0x2c7b94u: goto label_2c7b94;
        case 0x2c7b98u: goto label_2c7b98;
        case 0x2c7b9cu: goto label_2c7b9c;
        case 0x2c7ba0u: goto label_2c7ba0;
        case 0x2c7ba4u: goto label_2c7ba4;
        case 0x2c7ba8u: goto label_2c7ba8;
        case 0x2c7bacu: goto label_2c7bac;
        case 0x2c7bb0u: goto label_2c7bb0;
        case 0x2c7bb4u: goto label_2c7bb4;
        case 0x2c7bb8u: goto label_2c7bb8;
        case 0x2c7bbcu: goto label_2c7bbc;
        case 0x2c7bc0u: goto label_2c7bc0;
        case 0x2c7bc4u: goto label_2c7bc4;
        case 0x2c7bc8u: goto label_2c7bc8;
        case 0x2c7bccu: goto label_2c7bcc;
        case 0x2c7bd0u: goto label_2c7bd0;
        case 0x2c7bd4u: goto label_2c7bd4;
        case 0x2c7bd8u: goto label_2c7bd8;
        case 0x2c7bdcu: goto label_2c7bdc;
        case 0x2c7be0u: goto label_2c7be0;
        case 0x2c7be4u: goto label_2c7be4;
        case 0x2c7be8u: goto label_2c7be8;
        case 0x2c7becu: goto label_2c7bec;
        case 0x2c7bf0u: goto label_2c7bf0;
        case 0x2c7bf4u: goto label_2c7bf4;
        case 0x2c7bf8u: goto label_2c7bf8;
        case 0x2c7bfcu: goto label_2c7bfc;
        case 0x2c7c00u: goto label_2c7c00;
        case 0x2c7c04u: goto label_2c7c04;
        case 0x2c7c08u: goto label_2c7c08;
        case 0x2c7c0cu: goto label_2c7c0c;
        case 0x2c7c10u: goto label_2c7c10;
        case 0x2c7c14u: goto label_2c7c14;
        case 0x2c7c18u: goto label_2c7c18;
        case 0x2c7c1cu: goto label_2c7c1c;
        case 0x2c7c20u: goto label_2c7c20;
        case 0x2c7c24u: goto label_2c7c24;
        case 0x2c7c28u: goto label_2c7c28;
        case 0x2c7c2cu: goto label_2c7c2c;
        case 0x2c7c30u: goto label_2c7c30;
        case 0x2c7c34u: goto label_2c7c34;
        case 0x2c7c38u: goto label_2c7c38;
        case 0x2c7c3cu: goto label_2c7c3c;
        case 0x2c7c40u: goto label_2c7c40;
        case 0x2c7c44u: goto label_2c7c44;
        case 0x2c7c48u: goto label_2c7c48;
        case 0x2c7c4cu: goto label_2c7c4c;
        case 0x2c7c50u: goto label_2c7c50;
        case 0x2c7c54u: goto label_2c7c54;
        case 0x2c7c58u: goto label_2c7c58;
        case 0x2c7c5cu: goto label_2c7c5c;
        case 0x2c7c60u: goto label_2c7c60;
        case 0x2c7c64u: goto label_2c7c64;
        case 0x2c7c68u: goto label_2c7c68;
        case 0x2c7c6cu: goto label_2c7c6c;
        case 0x2c7c70u: goto label_2c7c70;
        case 0x2c7c74u: goto label_2c7c74;
        case 0x2c7c78u: goto label_2c7c78;
        case 0x2c7c7cu: goto label_2c7c7c;
        case 0x2c7c80u: goto label_2c7c80;
        case 0x2c7c84u: goto label_2c7c84;
        case 0x2c7c88u: goto label_2c7c88;
        case 0x2c7c8cu: goto label_2c7c8c;
        case 0x2c7c90u: goto label_2c7c90;
        case 0x2c7c94u: goto label_2c7c94;
        case 0x2c7c98u: goto label_2c7c98;
        case 0x2c7c9cu: goto label_2c7c9c;
        case 0x2c7ca0u: goto label_2c7ca0;
        case 0x2c7ca4u: goto label_2c7ca4;
        case 0x2c7ca8u: goto label_2c7ca8;
        case 0x2c7cacu: goto label_2c7cac;
        case 0x2c7cb0u: goto label_2c7cb0;
        case 0x2c7cb4u: goto label_2c7cb4;
        case 0x2c7cb8u: goto label_2c7cb8;
        case 0x2c7cbcu: goto label_2c7cbc;
        case 0x2c7cc0u: goto label_2c7cc0;
        case 0x2c7cc4u: goto label_2c7cc4;
        case 0x2c7cc8u: goto label_2c7cc8;
        case 0x2c7cccu: goto label_2c7ccc;
        case 0x2c7cd0u: goto label_2c7cd0;
        case 0x2c7cd4u: goto label_2c7cd4;
        case 0x2c7cd8u: goto label_2c7cd8;
        case 0x2c7cdcu: goto label_2c7cdc;
        case 0x2c7ce0u: goto label_2c7ce0;
        case 0x2c7ce4u: goto label_2c7ce4;
        case 0x2c7ce8u: goto label_2c7ce8;
        case 0x2c7cecu: goto label_2c7cec;
        case 0x2c7cf0u: goto label_2c7cf0;
        case 0x2c7cf4u: goto label_2c7cf4;
        case 0x2c7cf8u: goto label_2c7cf8;
        case 0x2c7cfcu: goto label_2c7cfc;
        case 0x2c7d00u: goto label_2c7d00;
        case 0x2c7d04u: goto label_2c7d04;
        case 0x2c7d08u: goto label_2c7d08;
        case 0x2c7d0cu: goto label_2c7d0c;
        case 0x2c7d10u: goto label_2c7d10;
        case 0x2c7d14u: goto label_2c7d14;
        case 0x2c7d18u: goto label_2c7d18;
        case 0x2c7d1cu: goto label_2c7d1c;
        case 0x2c7d20u: goto label_2c7d20;
        case 0x2c7d24u: goto label_2c7d24;
        case 0x2c7d28u: goto label_2c7d28;
        case 0x2c7d2cu: goto label_2c7d2c;
        case 0x2c7d30u: goto label_2c7d30;
        case 0x2c7d34u: goto label_2c7d34;
        case 0x2c7d38u: goto label_2c7d38;
        case 0x2c7d3cu: goto label_2c7d3c;
        case 0x2c7d40u: goto label_2c7d40;
        case 0x2c7d44u: goto label_2c7d44;
        case 0x2c7d48u: goto label_2c7d48;
        case 0x2c7d4cu: goto label_2c7d4c;
        case 0x2c7d50u: goto label_2c7d50;
        case 0x2c7d54u: goto label_2c7d54;
        case 0x2c7d58u: goto label_2c7d58;
        case 0x2c7d5cu: goto label_2c7d5c;
        case 0x2c7d60u: goto label_2c7d60;
        case 0x2c7d64u: goto label_2c7d64;
        case 0x2c7d68u: goto label_2c7d68;
        case 0x2c7d6cu: goto label_2c7d6c;
        case 0x2c7d70u: goto label_2c7d70;
        case 0x2c7d74u: goto label_2c7d74;
        case 0x2c7d78u: goto label_2c7d78;
        case 0x2c7d7cu: goto label_2c7d7c;
        case 0x2c7d80u: goto label_2c7d80;
        case 0x2c7d84u: goto label_2c7d84;
        case 0x2c7d88u: goto label_2c7d88;
        case 0x2c7d8cu: goto label_2c7d8c;
        case 0x2c7d90u: goto label_2c7d90;
        case 0x2c7d94u: goto label_2c7d94;
        case 0x2c7d98u: goto label_2c7d98;
        case 0x2c7d9cu: goto label_2c7d9c;
        case 0x2c7da0u: goto label_2c7da0;
        case 0x2c7da4u: goto label_2c7da4;
        case 0x2c7da8u: goto label_2c7da8;
        case 0x2c7dacu: goto label_2c7dac;
        case 0x2c7db0u: goto label_2c7db0;
        case 0x2c7db4u: goto label_2c7db4;
        case 0x2c7db8u: goto label_2c7db8;
        case 0x2c7dbcu: goto label_2c7dbc;
        case 0x2c7dc0u: goto label_2c7dc0;
        case 0x2c7dc4u: goto label_2c7dc4;
        case 0x2c7dc8u: goto label_2c7dc8;
        case 0x2c7dccu: goto label_2c7dcc;
        case 0x2c7dd0u: goto label_2c7dd0;
        case 0x2c7dd4u: goto label_2c7dd4;
        case 0x2c7dd8u: goto label_2c7dd8;
        case 0x2c7ddcu: goto label_2c7ddc;
        case 0x2c7de0u: goto label_2c7de0;
        case 0x2c7de4u: goto label_2c7de4;
        case 0x2c7de8u: goto label_2c7de8;
        case 0x2c7decu: goto label_2c7dec;
        case 0x2c7df0u: goto label_2c7df0;
        case 0x2c7df4u: goto label_2c7df4;
        case 0x2c7df8u: goto label_2c7df8;
        case 0x2c7dfcu: goto label_2c7dfc;
        case 0x2c7e00u: goto label_2c7e00;
        case 0x2c7e04u: goto label_2c7e04;
        case 0x2c7e08u: goto label_2c7e08;
        case 0x2c7e0cu: goto label_2c7e0c;
        case 0x2c7e10u: goto label_2c7e10;
        case 0x2c7e14u: goto label_2c7e14;
        case 0x2c7e18u: goto label_2c7e18;
        case 0x2c7e1cu: goto label_2c7e1c;
        case 0x2c7e20u: goto label_2c7e20;
        case 0x2c7e24u: goto label_2c7e24;
        case 0x2c7e28u: goto label_2c7e28;
        case 0x2c7e2cu: goto label_2c7e2c;
        case 0x2c7e30u: goto label_2c7e30;
        case 0x2c7e34u: goto label_2c7e34;
        case 0x2c7e38u: goto label_2c7e38;
        case 0x2c7e3cu: goto label_2c7e3c;
        case 0x2c7e40u: goto label_2c7e40;
        case 0x2c7e44u: goto label_2c7e44;
        case 0x2c7e48u: goto label_2c7e48;
        case 0x2c7e4cu: goto label_2c7e4c;
        case 0x2c7e50u: goto label_2c7e50;
        case 0x2c7e54u: goto label_2c7e54;
        case 0x2c7e58u: goto label_2c7e58;
        case 0x2c7e5cu: goto label_2c7e5c;
        case 0x2c7e60u: goto label_2c7e60;
        case 0x2c7e64u: goto label_2c7e64;
        case 0x2c7e68u: goto label_2c7e68;
        case 0x2c7e6cu: goto label_2c7e6c;
        case 0x2c7e70u: goto label_2c7e70;
        case 0x2c7e74u: goto label_2c7e74;
        case 0x2c7e78u: goto label_2c7e78;
        case 0x2c7e7cu: goto label_2c7e7c;
        case 0x2c7e80u: goto label_2c7e80;
        case 0x2c7e84u: goto label_2c7e84;
        case 0x2c7e88u: goto label_2c7e88;
        case 0x2c7e8cu: goto label_2c7e8c;
        case 0x2c7e90u: goto label_2c7e90;
        case 0x2c7e94u: goto label_2c7e94;
        case 0x2c7e98u: goto label_2c7e98;
        case 0x2c7e9cu: goto label_2c7e9c;
        case 0x2c7ea0u: goto label_2c7ea0;
        case 0x2c7ea4u: goto label_2c7ea4;
        case 0x2c7ea8u: goto label_2c7ea8;
        case 0x2c7eacu: goto label_2c7eac;
        case 0x2c7eb0u: goto label_2c7eb0;
        case 0x2c7eb4u: goto label_2c7eb4;
        case 0x2c7eb8u: goto label_2c7eb8;
        case 0x2c7ebcu: goto label_2c7ebc;
        case 0x2c7ec0u: goto label_2c7ec0;
        case 0x2c7ec4u: goto label_2c7ec4;
        case 0x2c7ec8u: goto label_2c7ec8;
        case 0x2c7eccu: goto label_2c7ecc;
        case 0x2c7ed0u: goto label_2c7ed0;
        case 0x2c7ed4u: goto label_2c7ed4;
        case 0x2c7ed8u: goto label_2c7ed8;
        case 0x2c7edcu: goto label_2c7edc;
        case 0x2c7ee0u: goto label_2c7ee0;
        case 0x2c7ee4u: goto label_2c7ee4;
        case 0x2c7ee8u: goto label_2c7ee8;
        case 0x2c7eecu: goto label_2c7eec;
        case 0x2c7ef0u: goto label_2c7ef0;
        case 0x2c7ef4u: goto label_2c7ef4;
        case 0x2c7ef8u: goto label_2c7ef8;
        case 0x2c7efcu: goto label_2c7efc;
        case 0x2c7f00u: goto label_2c7f00;
        case 0x2c7f04u: goto label_2c7f04;
        case 0x2c7f08u: goto label_2c7f08;
        case 0x2c7f0cu: goto label_2c7f0c;
        case 0x2c7f10u: goto label_2c7f10;
        case 0x2c7f14u: goto label_2c7f14;
        case 0x2c7f18u: goto label_2c7f18;
        case 0x2c7f1cu: goto label_2c7f1c;
        case 0x2c7f20u: goto label_2c7f20;
        case 0x2c7f24u: goto label_2c7f24;
        case 0x2c7f28u: goto label_2c7f28;
        case 0x2c7f2cu: goto label_2c7f2c;
        case 0x2c7f30u: goto label_2c7f30;
        case 0x2c7f34u: goto label_2c7f34;
        case 0x2c7f38u: goto label_2c7f38;
        case 0x2c7f3cu: goto label_2c7f3c;
        case 0x2c7f40u: goto label_2c7f40;
        case 0x2c7f44u: goto label_2c7f44;
        case 0x2c7f48u: goto label_2c7f48;
        case 0x2c7f4cu: goto label_2c7f4c;
        case 0x2c7f50u: goto label_2c7f50;
        case 0x2c7f54u: goto label_2c7f54;
        case 0x2c7f58u: goto label_2c7f58;
        case 0x2c7f5cu: goto label_2c7f5c;
        case 0x2c7f60u: goto label_2c7f60;
        case 0x2c7f64u: goto label_2c7f64;
        case 0x2c7f68u: goto label_2c7f68;
        case 0x2c7f6cu: goto label_2c7f6c;
        case 0x2c7f70u: goto label_2c7f70;
        case 0x2c7f74u: goto label_2c7f74;
        case 0x2c7f78u: goto label_2c7f78;
        case 0x2c7f7cu: goto label_2c7f7c;
        case 0x2c7f80u: goto label_2c7f80;
        case 0x2c7f84u: goto label_2c7f84;
        case 0x2c7f88u: goto label_2c7f88;
        case 0x2c7f8cu: goto label_2c7f8c;
        case 0x2c7f90u: goto label_2c7f90;
        case 0x2c7f94u: goto label_2c7f94;
        case 0x2c7f98u: goto label_2c7f98;
        case 0x2c7f9cu: goto label_2c7f9c;
        case 0x2c7fa0u: goto label_2c7fa0;
        case 0x2c7fa4u: goto label_2c7fa4;
        case 0x2c7fa8u: goto label_2c7fa8;
        case 0x2c7facu: goto label_2c7fac;
        case 0x2c7fb0u: goto label_2c7fb0;
        case 0x2c7fb4u: goto label_2c7fb4;
        case 0x2c7fb8u: goto label_2c7fb8;
        case 0x2c7fbcu: goto label_2c7fbc;
        case 0x2c7fc0u: goto label_2c7fc0;
        case 0x2c7fc4u: goto label_2c7fc4;
        case 0x2c7fc8u: goto label_2c7fc8;
        case 0x2c7fccu: goto label_2c7fcc;
        case 0x2c7fd0u: goto label_2c7fd0;
        case 0x2c7fd4u: goto label_2c7fd4;
        case 0x2c7fd8u: goto label_2c7fd8;
        case 0x2c7fdcu: goto label_2c7fdc;
        case 0x2c7fe0u: goto label_2c7fe0;
        case 0x2c7fe4u: goto label_2c7fe4;
        case 0x2c7fe8u: goto label_2c7fe8;
        case 0x2c7fecu: goto label_2c7fec;
        case 0x2c7ff0u: goto label_2c7ff0;
        case 0x2c7ff4u: goto label_2c7ff4;
        case 0x2c7ff8u: goto label_2c7ff8;
        case 0x2c7ffcu: goto label_2c7ffc;
        case 0x2c8000u: goto label_2c8000;
        case 0x2c8004u: goto label_2c8004;
        case 0x2c8008u: goto label_2c8008;
        case 0x2c800cu: goto label_2c800c;
        case 0x2c8010u: goto label_2c8010;
        case 0x2c8014u: goto label_2c8014;
        case 0x2c8018u: goto label_2c8018;
        case 0x2c801cu: goto label_2c801c;
        case 0x2c8020u: goto label_2c8020;
        case 0x2c8024u: goto label_2c8024;
        case 0x2c8028u: goto label_2c8028;
        case 0x2c802cu: goto label_2c802c;
        case 0x2c8030u: goto label_2c8030;
        case 0x2c8034u: goto label_2c8034;
        case 0x2c8038u: goto label_2c8038;
        case 0x2c803cu: goto label_2c803c;
        case 0x2c8040u: goto label_2c8040;
        case 0x2c8044u: goto label_2c8044;
        case 0x2c8048u: goto label_2c8048;
        case 0x2c804cu: goto label_2c804c;
        case 0x2c8050u: goto label_2c8050;
        case 0x2c8054u: goto label_2c8054;
        case 0x2c8058u: goto label_2c8058;
        case 0x2c805cu: goto label_2c805c;
        case 0x2c8060u: goto label_2c8060;
        case 0x2c8064u: goto label_2c8064;
        case 0x2c8068u: goto label_2c8068;
        case 0x2c806cu: goto label_2c806c;
        case 0x2c8070u: goto label_2c8070;
        case 0x2c8074u: goto label_2c8074;
        case 0x2c8078u: goto label_2c8078;
        case 0x2c807cu: goto label_2c807c;
        case 0x2c8080u: goto label_2c8080;
        case 0x2c8084u: goto label_2c8084;
        case 0x2c8088u: goto label_2c8088;
        case 0x2c808cu: goto label_2c808c;
        case 0x2c8090u: goto label_2c8090;
        case 0x2c8094u: goto label_2c8094;
        case 0x2c8098u: goto label_2c8098;
        case 0x2c809cu: goto label_2c809c;
        case 0x2c80a0u: goto label_2c80a0;
        case 0x2c80a4u: goto label_2c80a4;
        case 0x2c80a8u: goto label_2c80a8;
        case 0x2c80acu: goto label_2c80ac;
        case 0x2c80b0u: goto label_2c80b0;
        case 0x2c80b4u: goto label_2c80b4;
        case 0x2c80b8u: goto label_2c80b8;
        case 0x2c80bcu: goto label_2c80bc;
        case 0x2c80c0u: goto label_2c80c0;
        case 0x2c80c4u: goto label_2c80c4;
        case 0x2c80c8u: goto label_2c80c8;
        case 0x2c80ccu: goto label_2c80cc;
        case 0x2c80d0u: goto label_2c80d0;
        case 0x2c80d4u: goto label_2c80d4;
        case 0x2c80d8u: goto label_2c80d8;
        case 0x2c80dcu: goto label_2c80dc;
        case 0x2c80e0u: goto label_2c80e0;
        case 0x2c80e4u: goto label_2c80e4;
        case 0x2c80e8u: goto label_2c80e8;
        case 0x2c80ecu: goto label_2c80ec;
        case 0x2c80f0u: goto label_2c80f0;
        case 0x2c80f4u: goto label_2c80f4;
        case 0x2c80f8u: goto label_2c80f8;
        case 0x2c80fcu: goto label_2c80fc;
        case 0x2c8100u: goto label_2c8100;
        case 0x2c8104u: goto label_2c8104;
        case 0x2c8108u: goto label_2c8108;
        case 0x2c810cu: goto label_2c810c;
        case 0x2c8110u: goto label_2c8110;
        case 0x2c8114u: goto label_2c8114;
        case 0x2c8118u: goto label_2c8118;
        case 0x2c811cu: goto label_2c811c;
        case 0x2c8120u: goto label_2c8120;
        case 0x2c8124u: goto label_2c8124;
        case 0x2c8128u: goto label_2c8128;
        case 0x2c812cu: goto label_2c812c;
        case 0x2c8130u: goto label_2c8130;
        case 0x2c8134u: goto label_2c8134;
        case 0x2c8138u: goto label_2c8138;
        case 0x2c813cu: goto label_2c813c;
        case 0x2c8140u: goto label_2c8140;
        case 0x2c8144u: goto label_2c8144;
        case 0x2c8148u: goto label_2c8148;
        case 0x2c814cu: goto label_2c814c;
        case 0x2c8150u: goto label_2c8150;
        case 0x2c8154u: goto label_2c8154;
        case 0x2c8158u: goto label_2c8158;
        case 0x2c815cu: goto label_2c815c;
        case 0x2c8160u: goto label_2c8160;
        case 0x2c8164u: goto label_2c8164;
        case 0x2c8168u: goto label_2c8168;
        case 0x2c816cu: goto label_2c816c;
        case 0x2c8170u: goto label_2c8170;
        case 0x2c8174u: goto label_2c8174;
        case 0x2c8178u: goto label_2c8178;
        case 0x2c817cu: goto label_2c817c;
        case 0x2c8180u: goto label_2c8180;
        case 0x2c8184u: goto label_2c8184;
        case 0x2c8188u: goto label_2c8188;
        case 0x2c818cu: goto label_2c818c;
        case 0x2c8190u: goto label_2c8190;
        case 0x2c8194u: goto label_2c8194;
        case 0x2c8198u: goto label_2c8198;
        case 0x2c819cu: goto label_2c819c;
        case 0x2c81a0u: goto label_2c81a0;
        case 0x2c81a4u: goto label_2c81a4;
        case 0x2c81a8u: goto label_2c81a8;
        case 0x2c81acu: goto label_2c81ac;
        case 0x2c81b0u: goto label_2c81b0;
        case 0x2c81b4u: goto label_2c81b4;
        case 0x2c81b8u: goto label_2c81b8;
        case 0x2c81bcu: goto label_2c81bc;
        case 0x2c81c0u: goto label_2c81c0;
        case 0x2c81c4u: goto label_2c81c4;
        case 0x2c81c8u: goto label_2c81c8;
        case 0x2c81ccu: goto label_2c81cc;
        case 0x2c81d0u: goto label_2c81d0;
        case 0x2c81d4u: goto label_2c81d4;
        case 0x2c81d8u: goto label_2c81d8;
        case 0x2c81dcu: goto label_2c81dc;
        case 0x2c81e0u: goto label_2c81e0;
        case 0x2c81e4u: goto label_2c81e4;
        case 0x2c81e8u: goto label_2c81e8;
        case 0x2c81ecu: goto label_2c81ec;
        case 0x2c81f0u: goto label_2c81f0;
        case 0x2c81f4u: goto label_2c81f4;
        case 0x2c81f8u: goto label_2c81f8;
        case 0x2c81fcu: goto label_2c81fc;
        case 0x2c8200u: goto label_2c8200;
        case 0x2c8204u: goto label_2c8204;
        case 0x2c8208u: goto label_2c8208;
        case 0x2c820cu: goto label_2c820c;
        case 0x2c8210u: goto label_2c8210;
        case 0x2c8214u: goto label_2c8214;
        case 0x2c8218u: goto label_2c8218;
        case 0x2c821cu: goto label_2c821c;
        case 0x2c8220u: goto label_2c8220;
        case 0x2c8224u: goto label_2c8224;
        case 0x2c8228u: goto label_2c8228;
        case 0x2c822cu: goto label_2c822c;
        case 0x2c8230u: goto label_2c8230;
        case 0x2c8234u: goto label_2c8234;
        case 0x2c8238u: goto label_2c8238;
        case 0x2c823cu: goto label_2c823c;
        case 0x2c8240u: goto label_2c8240;
        case 0x2c8244u: goto label_2c8244;
        case 0x2c8248u: goto label_2c8248;
        case 0x2c824cu: goto label_2c824c;
        case 0x2c8250u: goto label_2c8250;
        case 0x2c8254u: goto label_2c8254;
        case 0x2c8258u: goto label_2c8258;
        case 0x2c825cu: goto label_2c825c;
        case 0x2c8260u: goto label_2c8260;
        case 0x2c8264u: goto label_2c8264;
        case 0x2c8268u: goto label_2c8268;
        case 0x2c826cu: goto label_2c826c;
        case 0x2c8270u: goto label_2c8270;
        case 0x2c8274u: goto label_2c8274;
        case 0x2c8278u: goto label_2c8278;
        case 0x2c827cu: goto label_2c827c;
        case 0x2c8280u: goto label_2c8280;
        case 0x2c8284u: goto label_2c8284;
        case 0x2c8288u: goto label_2c8288;
        case 0x2c828cu: goto label_2c828c;
        case 0x2c8290u: goto label_2c8290;
        case 0x2c8294u: goto label_2c8294;
        case 0x2c8298u: goto label_2c8298;
        case 0x2c829cu: goto label_2c829c;
        case 0x2c82a0u: goto label_2c82a0;
        case 0x2c82a4u: goto label_2c82a4;
        case 0x2c82a8u: goto label_2c82a8;
        case 0x2c82acu: goto label_2c82ac;
        case 0x2c82b0u: goto label_2c82b0;
        case 0x2c82b4u: goto label_2c82b4;
        case 0x2c82b8u: goto label_2c82b8;
        case 0x2c82bcu: goto label_2c82bc;
        case 0x2c82c0u: goto label_2c82c0;
        case 0x2c82c4u: goto label_2c82c4;
        case 0x2c82c8u: goto label_2c82c8;
        case 0x2c82ccu: goto label_2c82cc;
        case 0x2c82d0u: goto label_2c82d0;
        case 0x2c82d4u: goto label_2c82d4;
        case 0x2c82d8u: goto label_2c82d8;
        case 0x2c82dcu: goto label_2c82dc;
        case 0x2c82e0u: goto label_2c82e0;
        case 0x2c82e4u: goto label_2c82e4;
        case 0x2c82e8u: goto label_2c82e8;
        case 0x2c82ecu: goto label_2c82ec;
        case 0x2c82f0u: goto label_2c82f0;
        case 0x2c82f4u: goto label_2c82f4;
        case 0x2c82f8u: goto label_2c82f8;
        case 0x2c82fcu: goto label_2c82fc;
        case 0x2c8300u: goto label_2c8300;
        case 0x2c8304u: goto label_2c8304;
        case 0x2c8308u: goto label_2c8308;
        case 0x2c830cu: goto label_2c830c;
        case 0x2c8310u: goto label_2c8310;
        case 0x2c8314u: goto label_2c8314;
        case 0x2c8318u: goto label_2c8318;
        case 0x2c831cu: goto label_2c831c;
        case 0x2c8320u: goto label_2c8320;
        case 0x2c8324u: goto label_2c8324;
        case 0x2c8328u: goto label_2c8328;
        case 0x2c832cu: goto label_2c832c;
        case 0x2c8330u: goto label_2c8330;
        case 0x2c8334u: goto label_2c8334;
        case 0x2c8338u: goto label_2c8338;
        case 0x2c833cu: goto label_2c833c;
        case 0x2c8340u: goto label_2c8340;
        case 0x2c8344u: goto label_2c8344;
        case 0x2c8348u: goto label_2c8348;
        case 0x2c834cu: goto label_2c834c;
        case 0x2c8350u: goto label_2c8350;
        case 0x2c8354u: goto label_2c8354;
        case 0x2c8358u: goto label_2c8358;
        case 0x2c835cu: goto label_2c835c;
        case 0x2c8360u: goto label_2c8360;
        case 0x2c8364u: goto label_2c8364;
        case 0x2c8368u: goto label_2c8368;
        case 0x2c836cu: goto label_2c836c;
        case 0x2c8370u: goto label_2c8370;
        case 0x2c8374u: goto label_2c8374;
        case 0x2c8378u: goto label_2c8378;
        case 0x2c837cu: goto label_2c837c;
        case 0x2c8380u: goto label_2c8380;
        case 0x2c8384u: goto label_2c8384;
        case 0x2c8388u: goto label_2c8388;
        case 0x2c838cu: goto label_2c838c;
        case 0x2c8390u: goto label_2c8390;
        case 0x2c8394u: goto label_2c8394;
        case 0x2c8398u: goto label_2c8398;
        case 0x2c839cu: goto label_2c839c;
        case 0x2c83a0u: goto label_2c83a0;
        case 0x2c83a4u: goto label_2c83a4;
        case 0x2c83a8u: goto label_2c83a8;
        case 0x2c83acu: goto label_2c83ac;
        case 0x2c83b0u: goto label_2c83b0;
        case 0x2c83b4u: goto label_2c83b4;
        case 0x2c83b8u: goto label_2c83b8;
        case 0x2c83bcu: goto label_2c83bc;
        case 0x2c83c0u: goto label_2c83c0;
        case 0x2c83c4u: goto label_2c83c4;
        case 0x2c83c8u: goto label_2c83c8;
        case 0x2c83ccu: goto label_2c83cc;
        case 0x2c83d0u: goto label_2c83d0;
        case 0x2c83d4u: goto label_2c83d4;
        case 0x2c83d8u: goto label_2c83d8;
        case 0x2c83dcu: goto label_2c83dc;
        case 0x2c83e0u: goto label_2c83e0;
        case 0x2c83e4u: goto label_2c83e4;
        case 0x2c83e8u: goto label_2c83e8;
        case 0x2c83ecu: goto label_2c83ec;
        case 0x2c83f0u: goto label_2c83f0;
        case 0x2c83f4u: goto label_2c83f4;
        case 0x2c83f8u: goto label_2c83f8;
        case 0x2c83fcu: goto label_2c83fc;
        case 0x2c8400u: goto label_2c8400;
        case 0x2c8404u: goto label_2c8404;
        case 0x2c8408u: goto label_2c8408;
        case 0x2c840cu: goto label_2c840c;
        case 0x2c8410u: goto label_2c8410;
        case 0x2c8414u: goto label_2c8414;
        case 0x2c8418u: goto label_2c8418;
        case 0x2c841cu: goto label_2c841c;
        case 0x2c8420u: goto label_2c8420;
        case 0x2c8424u: goto label_2c8424;
        case 0x2c8428u: goto label_2c8428;
        case 0x2c842cu: goto label_2c842c;
        case 0x2c8430u: goto label_2c8430;
        case 0x2c8434u: goto label_2c8434;
        case 0x2c8438u: goto label_2c8438;
        case 0x2c843cu: goto label_2c843c;
        case 0x2c8440u: goto label_2c8440;
        case 0x2c8444u: goto label_2c8444;
        case 0x2c8448u: goto label_2c8448;
        case 0x2c844cu: goto label_2c844c;
        case 0x2c8450u: goto label_2c8450;
        case 0x2c8454u: goto label_2c8454;
        case 0x2c8458u: goto label_2c8458;
        case 0x2c845cu: goto label_2c845c;
        case 0x2c8460u: goto label_2c8460;
        case 0x2c8464u: goto label_2c8464;
        case 0x2c8468u: goto label_2c8468;
        case 0x2c846cu: goto label_2c846c;
        case 0x2c8470u: goto label_2c8470;
        case 0x2c8474u: goto label_2c8474;
        case 0x2c8478u: goto label_2c8478;
        case 0x2c847cu: goto label_2c847c;
        case 0x2c8480u: goto label_2c8480;
        case 0x2c8484u: goto label_2c8484;
        case 0x2c8488u: goto label_2c8488;
        case 0x2c848cu: goto label_2c848c;
        default: break;
    }

    ctx->pc = 0x2c77a0u;

label_2c77a0:
    // 0x2c77a0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x2c77a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_2c77a4:
    // 0x2c77a4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2c77a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_2c77a8:
    // 0x2c77a8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x2c77a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_2c77ac:
    // 0x2c77ac: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2c77acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_2c77b0:
    // 0x2c77b0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2c77b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_2c77b4:
    // 0x2c77b4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2c77b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_2c77b8:
    // 0x2c77b8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2c77b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2c77bc:
    // 0x2c77bc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2c77bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2c77c0:
    // 0x2c77c0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2c77c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2c77c4:
    // 0x2c77c4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2c77c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2c77c8:
    // 0x2c77c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2c77c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2c77cc:
    // 0x2c77cc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2c77ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2c77d0:
    // 0x2c77d0: 0xafa40170  sw          $a0, 0x170($sp)
    ctx->pc = 0x2c77d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 4));
label_2c77d4:
    // 0x2c77d4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2c77d4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c77d8:
    // 0x2c77d8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2c77d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c77dc:
    // 0x2c77dc: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2c77dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_2c77e0:
    // 0x2c77e0: 0x24440084  addiu       $a0, $v0, 0x84
    ctx->pc = 0x2c77e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
label_2c77e4:
    // 0x2c77e4: 0xc0b1110  jal         func_2C4440
label_2c77e8:
    if (ctx->pc == 0x2C77E8u) {
        ctx->pc = 0x2C77ECu;
        goto label_2c77ec;
    }
    ctx->pc = 0x2C77E4u;
    SET_GPR_U32(ctx, 31, 0x2C77ECu);
    ctx->pc = 0x2C4440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4440u, 0x2C77E4u, 0x2C77ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C77ECu;
label_2c77ec:
    // 0x2c77ec: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_2c77f0:
    if (ctx->pc == 0x2C77F0u) {
        ctx->pc = 0x2C77F4u;
        goto label_2c77f4;
    }
    ctx->pc = 0x2C77ECu;
    {
        const bool branch_taken_0x2c77ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c77ec) {
            ctx->pc = 0x2C7830u;
            goto label_2c7830;
        }
    }
    ctx->pc = 0x2C77F4u;
label_2c77f4:
    // 0x2c77f4: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2c77f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_2c77f8:
    // 0x2c77f8: 0x24440084  addiu       $a0, $v0, 0x84
    ctx->pc = 0x2c77f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
label_2c77fc:
    // 0x2c77fc: 0xc0b1104  jal         func_2C4410
label_2c7800:
    if (ctx->pc == 0x2C7800u) {
        ctx->pc = 0x2C7804u;
        goto label_2c7804;
    }
    ctx->pc = 0x2C77FCu;
    SET_GPR_U32(ctx, 31, 0x2C7804u);
    ctx->pc = 0x2C4410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4410u, 0x2C77FCu, 0x2C7804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7804u;
label_2c7804:
    // 0x2c7804: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2c7804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c7808:
    // 0x2c7808: 0x8c85002c  lw          $a1, 0x2C($a0)
    ctx->pc = 0x2c7808u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_2c780c:
    // 0x2c780c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2c780cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c7810:
    // 0x2c7810: 0xc0913e4  jal         func_244F90
label_2c7814:
    if (ctx->pc == 0x2C7814u) {
        ctx->pc = 0x2C7818u;
        goto label_2c7818;
    }
    ctx->pc = 0x2C7810u;
    SET_GPR_U32(ctx, 31, 0x2C7818u);
    ctx->pc = 0x244F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244F90u, 0x2C7810u, 0x2C7818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7818u;
label_2c7818:
    // 0x2c7818: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2c7818u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c781c:
    // 0x2c781c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2c781cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2c7820:
    // 0x2c7820: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x2c7820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_2c7824:
    // 0x2c7824: 0xc085538  jal         func_2154E0
label_2c7828:
    if (ctx->pc == 0x2C7828u) {
        ctx->pc = 0x2C782Cu;
        goto label_2c782c;
    }
    ctx->pc = 0x2C7824u;
    SET_GPR_U32(ctx, 31, 0x2C782Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C7824u, 0x2C782Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C782Cu;
label_2c782c:
    // 0x2c782c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2c782cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c7830:
    // 0x2c7830: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c7830u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7834:
    // 0x2c7834: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2c7834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_2c7838:
    // 0x2c7838: 0x24440084  addiu       $a0, $v0, 0x84
    ctx->pc = 0x2c7838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
label_2c783c:
    // 0x2c783c: 0xc068ea0  jal         func_1A3A80
label_2c7840:
    if (ctx->pc == 0x2C7840u) {
        ctx->pc = 0x2C7844u;
        goto label_2c7844;
    }
    ctx->pc = 0x2C783Cu;
    SET_GPR_U32(ctx, 31, 0x2C7844u);
    ctx->pc = 0x1A3A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3A80u, 0x2C783Cu, 0x2C7844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7844u;
label_2c7844:
    // 0x2c7844: 0xafa2016c  sw          $v0, 0x16C($sp)
    ctx->pc = 0x2c7844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 2));
label_2c7848:
    // 0x2c7848: 0x100002f9  b           . + 4 + (0x2F9 << 2)
label_2c784c:
    if (ctx->pc == 0x2C784Cu) {
        ctx->pc = 0x2C7850u;
        goto label_2c7850;
    }
    ctx->pc = 0x2C7848u;
    {
        const bool branch_taken_0x2c7848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7848) {
            ctx->pc = 0x2C8430u;
            goto label_2c8430;
        }
    }
    ctx->pc = 0x2C7850u;
label_2c7850:
    // 0x2c7850: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x2c7850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_2c7854:
    // 0x2c7854: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2c7854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_2c7858:
    // 0x2c7858: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2c7858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_2c785c:
    // 0x2c785c: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
label_2c7860:
    if (ctx->pc == 0x2C7860u) {
        ctx->pc = 0x2C7864u;
        goto label_2c7864;
    }
    ctx->pc = 0x2C785Cu;
    {
        const bool branch_taken_0x2c785c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c785c) {
            ctx->pc = 0x2C793Cu;
            goto label_2c793c;
        }
    }
    ctx->pc = 0x2C7864u;
label_2c7864:
    // 0x2c7864: 0x8f82bca8  lw          $v0, -0x4358($gp)
    ctx->pc = 0x2c7864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950056)));
label_2c7868:
    // 0x2c7868: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_2c786c:
    if (ctx->pc == 0x2C786Cu) {
        ctx->pc = 0x2C7870u;
        goto label_2c7870;
    }
    ctx->pc = 0x2C7868u;
    {
        const bool branch_taken_0x2c7868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7868) {
            ctx->pc = 0x2C7898u;
            goto label_2c7898;
        }
    }
    ctx->pc = 0x2C7870u;
label_2c7870:
    // 0x2c7870: 0x8fa4016c  lw          $a0, 0x16C($sp)
    ctx->pc = 0x2c7870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
label_2c7874:
    // 0x2c7874: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c7874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c7878:
    // 0x2c7878: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x2c7878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_2c787c:
    // 0x2c787c: 0x8f83bcc4  lw          $v1, -0x433C($gp)
    ctx->pc = 0x2c787cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_2c7880:
    // 0x2c7880: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2c7880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2c7884:
    // 0x2c7884: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_2c7888:
    if (ctx->pc == 0x2C7888u) {
        ctx->pc = 0x2C788Cu;
        goto label_2c788c;
    }
    ctx->pc = 0x2C7884u;
    {
        const bool branch_taken_0x2c7884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c7884) {
            ctx->pc = 0x2C7898u;
            goto label_2c7898;
        }
    }
    ctx->pc = 0x2C788Cu;
label_2c788c:
    // 0x2c788c: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x2c788cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_2c7890:
    // 0x2c7890: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2c7890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c7894:
    // 0x2c7894: 0xaf84bca8  sw          $a0, -0x4358($gp)
    ctx->pc = 0x2c7894u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950056), GPR_U32(ctx, 4));
label_2c7898:
    // 0x2c7898: 0x8f85bca8  lw          $a1, -0x4358($gp)
    ctx->pc = 0x2c7898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950056)));
label_2c789c:
    // 0x2c789c: 0x10a00027  beqz        $a1, . + 4 + (0x27 << 2)
label_2c78a0:
    if (ctx->pc == 0x2C78A0u) {
        ctx->pc = 0x2C78A4u;
        goto label_2c78a4;
    }
    ctx->pc = 0x2C789Cu;
    {
        const bool branch_taken_0x2c789c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c789c) {
            ctx->pc = 0x2C793Cu;
            goto label_2c793c;
        }
    }
    ctx->pc = 0x2C78A4u;
label_2c78a4:
    // 0x2c78a4: 0x8fa2016c  lw          $v0, 0x16C($sp)
    ctx->pc = 0x2c78a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
label_2c78a8:
    // 0x2c78a8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c78a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c78ac:
    // 0x2c78ac: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x2c78acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_2c78b0:
    // 0x2c78b0: 0x8f83bcc4  lw          $v1, -0x433C($gp)
    ctx->pc = 0x2c78b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_2c78b4:
    // 0x2c78b4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2c78b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2c78b8:
    // 0x2c78b8: 0x10430020  beq         $v0, $v1, . + 4 + (0x20 << 2)
label_2c78bc:
    if (ctx->pc == 0x2C78BCu) {
        ctx->pc = 0x2C78C0u;
        goto label_2c78c0;
    }
    ctx->pc = 0x2C78B8u;
    {
        const bool branch_taken_0x2c78b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c78b8) {
            ctx->pc = 0x2C793Cu;
            goto label_2c793c;
        }
    }
    ctx->pc = 0x2C78C0u;
label_2c78c0:
    // 0x2c78c0: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x2c78c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_2c78c4:
    // 0x2c78c4: 0xc0b06c4  jal         func_2C1B10
label_2c78c8:
    if (ctx->pc == 0x2C78C8u) {
        ctx->pc = 0x2C78CCu;
        goto label_2c78cc;
    }
    ctx->pc = 0x2C78C4u;
    SET_GPR_U32(ctx, 31, 0x2C78CCu);
    ctx->pc = 0x2C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B10u, 0x2C78C4u, 0x2C78CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C78CCu;
label_2c78cc:
    // 0x2c78cc: 0x8fa3016c  lw          $v1, 0x16C($sp)
    ctx->pc = 0x2c78ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
label_2c78d0:
    // 0x2c78d0: 0x8c730000  lw          $s3, 0x0($v1)
    ctx->pc = 0x2c78d0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2c78d4:
    // 0x2c78d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c78d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c78d8:
    // 0x2c78d8: 0x8e65002c  lw          $a1, 0x2C($s3)
    ctx->pc = 0x2c78d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_2c78dc:
    // 0x2c78dc: 0xc0b4aac  jal         func_2D2AB0
label_2c78e0:
    if (ctx->pc == 0x2C78E0u) {
        ctx->pc = 0x2C78E4u;
        goto label_2c78e4;
    }
    ctx->pc = 0x2C78DCu;
    SET_GPR_U32(ctx, 31, 0x2C78E4u);
    ctx->pc = 0x2D2AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2AB0u, 0x2C78DCu, 0x2C78E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C78E4u;
label_2c78e4:
    // 0x2c78e4: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_2c78e8:
    if (ctx->pc == 0x2C78E8u) {
        ctx->pc = 0x2C78ECu;
        goto label_2c78ec;
    }
    ctx->pc = 0x2C78E4u;
    {
        const bool branch_taken_0x2c78e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c78e4) {
            ctx->pc = 0x2C793Cu;
            goto label_2c793c;
        }
    }
    ctx->pc = 0x2C78ECu;
label_2c78ec:
    // 0x2c78ec: 0x8fa4016c  lw          $a0, 0x16C($sp)
    ctx->pc = 0x2c78ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
label_2c78f0:
    // 0x2c78f0: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2c78f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c78f4:
    // 0x2c78f4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2c78f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c78f8:
    // 0x2c78f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c78f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c78fc:
    // 0x2c78fc: 0xc0ae044  jal         func_2B8110
label_2c7900:
    if (ctx->pc == 0x2C7900u) {
        ctx->pc = 0x2C7904u;
        goto label_2c7904;
    }
    ctx->pc = 0x2C78FCu;
    SET_GPR_U32(ctx, 31, 0x2C7904u);
    ctx->pc = 0x2B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8110u, 0x2C78FCu, 0x2C7904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7904u;
label_2c7904:
    // 0x2c7904: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x2c7904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_2c7908:
    // 0x2c7908: 0xc0b06c4  jal         func_2C1B10
label_2c790c:
    if (ctx->pc == 0x2C790Cu) {
        ctx->pc = 0x2C7910u;
        goto label_2c7910;
    }
    ctx->pc = 0x2C7908u;
    SET_GPR_U32(ctx, 31, 0x2C7910u);
    ctx->pc = 0x2C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B10u, 0x2C7908u, 0x2C7910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7910u;
label_2c7910:
    // 0x2c7910: 0x8fa5016c  lw          $a1, 0x16C($sp)
    ctx->pc = 0x2c7910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
label_2c7914:
    // 0x2c7914: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2c7914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2c7918:
    // 0x2c7918: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c7918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c791c:
    // 0x2c791c: 0x8c65002c  lw          $a1, 0x2C($v1)
    ctx->pc = 0x2c791cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2c7920:
    // 0x2c7920: 0x8f86bca8  lw          $a2, -0x4358($gp)
    ctx->pc = 0x2c7920u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950056)));
label_2c7924:
    // 0x2c7924: 0xc0b4784  jal         func_2D1E10
label_2c7928:
    if (ctx->pc == 0x2C7928u) {
        ctx->pc = 0x2C792Cu;
        goto label_2c792c;
    }
    ctx->pc = 0x2C7924u;
    SET_GPR_U32(ctx, 31, 0x2C792Cu);
    ctx->pc = 0x2D1E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1E10u, 0x2C7924u, 0x2C792Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C792Cu;
label_2c792c:
    // 0x2c792c: 0x8fa5016c  lw          $a1, 0x16C($sp)
    ctx->pc = 0x2c792cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
label_2c7930:
    // 0x2c7930: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2c7930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2c7934:
    // 0x2c7934: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2c7934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_2c7938:
    // 0x2c7938: 0xaf84bca8  sw          $a0, -0x4358($gp)
    ctx->pc = 0x2c7938u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950056), GPR_U32(ctx, 4));
label_2c793c:
    // 0x2c793c: 0x8fa2016c  lw          $v0, 0x16C($sp)
    ctx->pc = 0x2c793cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
label_2c7940:
    // 0x2c7940: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c7940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c7944:
    // 0x2c7944: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2c7944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_2c7948:
    // 0x2c7948: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2c7948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2c794c:
    // 0x2c794c: 0xc085538  jal         func_2154E0
label_2c7950:
    if (ctx->pc == 0x2C7950u) {
        ctx->pc = 0x2C7954u;
        goto label_2c7954;
    }
    ctx->pc = 0x2C794Cu;
    SET_GPR_U32(ctx, 31, 0x2C7954u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C794Cu, 0x2C7954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7954u;
label_2c7954:
    // 0x2c7954: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c7954u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c7958:
    // 0x2c7958: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c7958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c795c:
    // 0x2c795c: 0xc096e38  jal         func_25B8E0
label_2c7960:
    if (ctx->pc == 0x2C7960u) {
        ctx->pc = 0x2C7964u;
        goto label_2c7964;
    }
    ctx->pc = 0x2C795Cu;
    SET_GPR_U32(ctx, 31, 0x2C7964u);
    ctx->pc = 0x25B8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B8E0u, 0x2C795Cu, 0x2C7964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7964u;
label_2c7964:
    // 0x2c7964: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_2c7968:
    if (ctx->pc == 0x2C7968u) {
        ctx->pc = 0x2C796Cu;
        goto label_2c796c;
    }
    ctx->pc = 0x2C7964u;
    {
        const bool branch_taken_0x2c7964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7964) {
            ctx->pc = 0x2C79C4u;
            goto label_2c79c4;
        }
    }
    ctx->pc = 0x2C796Cu;
label_2c796c:
    // 0x2c796c: 0x2402d8f0  addiu       $v0, $zero, -0x2710
    ctx->pc = 0x2c796cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957296));
label_2c7970:
    // 0x2c7970: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c7970u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c7974:
    // 0x2c7974: 0x0  nop
    ctx->pc = 0x2c7974u;
    // NOP
label_2c7978:
    // 0x2c7978: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x2c7978u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_2c797c:
    // 0x2c797c: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x2c797cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_2c7980:
    // 0x2c7980: 0x24840034  addiu       $a0, $a0, 0x34
    ctx->pc = 0x2c7980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 52));
label_2c7984:
    // 0x2c7984: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c7984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c7988:
    // 0x2c7988: 0xc069d88  jal         func_1A7620
label_2c798c:
    if (ctx->pc == 0x2C798Cu) {
        ctx->pc = 0x2C7990u;
        goto label_2c7990;
    }
    ctx->pc = 0x2C7988u;
    SET_GPR_U32(ctx, 31, 0x2C7990u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x2C7988u, 0x2C7990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7990u;
label_2c7990:
    // 0x2c7990: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x2c7990u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2c7994:
    // 0x2c7994: 0x2402d8f0  addiu       $v0, $zero, -0x2710
    ctx->pc = 0x2c7994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957296));
label_2c7998:
    // 0x2c7998: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c7998u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c799c:
    // 0x2c799c: 0x0  nop
    ctx->pc = 0x2c799cu;
    // NOP
label_2c79a0:
    // 0x2c79a0: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x2c79a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_2c79a4:
    // 0x2c79a4: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2c79a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_2c79a8:
    // 0x2c79a8: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x2c79a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
label_2c79ac:
    // 0x2c79ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c79acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c79b0:
    // 0x2c79b0: 0xc069d88  jal         func_1A7620
label_2c79b4:
    if (ctx->pc == 0x2C79B4u) {
        ctx->pc = 0x2C79B8u;
        goto label_2c79b8;
    }
    ctx->pc = 0x2C79B0u;
    SET_GPR_U32(ctx, 31, 0x2C79B8u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x2C79B0u, 0x2C79B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C79B8u;
label_2c79b8:
    // 0x2c79b8: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x2c79b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_2c79bc:
    // 0x2c79bc: 0x1000004a  b           . + 4 + (0x4A << 2)
label_2c79c0:
    if (ctx->pc == 0x2C79C0u) {
        ctx->pc = 0x2C79C4u;
        goto label_2c79c4;
    }
    ctx->pc = 0x2C79BCu;
    {
        const bool branch_taken_0x2c79bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c79bc) {
            ctx->pc = 0x2C7AE8u;
            goto label_2c7ae8;
        }
    }
    ctx->pc = 0x2C79C4u;
label_2c79c4:
    // 0x2c79c4: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2c79c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_2c79c8:
    // 0x2c79c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c79c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c79cc:
    // 0x2c79cc: 0xc096a08  jal         func_25A820
label_2c79d0:
    if (ctx->pc == 0x2C79D0u) {
        ctx->pc = 0x2C79D4u;
        goto label_2c79d4;
    }
    ctx->pc = 0x2C79CCu;
    SET_GPR_U32(ctx, 31, 0x2C79D4u);
    ctx->pc = 0x25A820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A820u, 0x2C79CCu, 0x2C79D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C79D4u;
label_2c79d4:
    // 0x2c79d4: 0x27a30110  addiu       $v1, $sp, 0x110
    ctx->pc = 0x2c79d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_2c79d8:
    // 0x2c79d8: 0x27a20150  addiu       $v0, $sp, 0x150
    ctx->pc = 0x2c79d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_2c79dc:
    // 0x2c79dc: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2c79dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2c79e0:
    // 0x2c79e0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2c79e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c79e4:
    // 0x2c79e4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2c79e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c79e8:
    // 0x2c79e8: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2c79e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2c79ec:
    // 0x2c79ec: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2c79ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_2c79f0:
    // 0x2c79f0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2c79f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2c79f4:
    // 0x2c79f4: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2c79f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_2c79f8:
    // 0x2c79f8: 0x24430034  addiu       $v1, $v0, 0x34
    ctx->pc = 0x2c79f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
label_2c79fc:
    // 0x2c79fc: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2c79fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2c7a00:
    // 0x2c7a00: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c7a00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c7a04:
    // 0x2c7a04: 0xc069d88  jal         func_1A7620
label_2c7a08:
    if (ctx->pc == 0x2C7A08u) {
        ctx->pc = 0x2C7A0Cu;
        goto label_2c7a0c;
    }
    ctx->pc = 0x2C7A04u;
    SET_GPR_U32(ctx, 31, 0x2C7A0Cu);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x2C7A04u, 0x2C7A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7A0Cu;
label_2c7a0c:
    // 0x2c7a0c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2c7a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c7a10:
    // 0x2c7a10: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x2c7a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c7a14:
    // 0x2c7a14: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2c7a14u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c7a18:
    // 0x2c7a18: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_2c7a1c:
    if (ctx->pc == 0x2C7A1Cu) {
        ctx->pc = 0x2C7A20u;
        goto label_2c7a20;
    }
    ctx->pc = 0x2C7A18u;
    {
        const bool branch_taken_0x2c7a18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c7a18) {
            ctx->pc = 0x2C7A4Cu;
            goto label_2c7a4c;
        }
    }
    ctx->pc = 0x2C7A20u;
label_2c7a20:
    // 0x2c7a20: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x2c7a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_2c7a24:
    // 0x2c7a24: 0x24850034  addiu       $a1, $a0, 0x34
    ctx->pc = 0x2c7a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 52));
label_2c7a28:
    // 0x2c7a28: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2c7a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c7a2c:
    // 0x2c7a2c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c7a2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c7a30:
    // 0x2c7a30: 0xc069d88  jal         func_1A7620
label_2c7a34:
    if (ctx->pc == 0x2C7A34u) {
        ctx->pc = 0x2C7A38u;
        goto label_2c7a38;
    }
    ctx->pc = 0x2C7A30u;
    SET_GPR_U32(ctx, 31, 0x2C7A38u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x2C7A30u, 0x2C7A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7A38u;
label_2c7a38:
    // 0x2c7a38: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2c7a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c7a3c:
    // 0x2c7a3c: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x2c7a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c7a40:
    // 0x2c7a40: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2c7a40u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c7a44:
    // 0x2c7a44: 0x45010028  bc1t        . + 4 + (0x28 << 2)
label_2c7a48:
    if (ctx->pc == 0x2C7A48u) {
        ctx->pc = 0x2C7A4Cu;
        goto label_2c7a4c;
    }
    ctx->pc = 0x2C7A44u;
    {
        const bool branch_taken_0x2c7a44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c7a44) {
            ctx->pc = 0x2C7AE8u;
            goto label_2c7ae8;
        }
    }
    ctx->pc = 0x2C7A4Cu;
label_2c7a4c:
    // 0x2c7a4c: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2c7a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_2c7a50:
    // 0x2c7a50: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x2c7a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
label_2c7a54:
    // 0x2c7a54: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c7a54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c7a58:
    // 0x2c7a58: 0xc069d88  jal         func_1A7620
label_2c7a5c:
    if (ctx->pc == 0x2C7A5Cu) {
        ctx->pc = 0x2C7A60u;
        goto label_2c7a60;
    }
    ctx->pc = 0x2C7A58u;
    SET_GPR_U32(ctx, 31, 0x2C7A60u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x2C7A58u, 0x2C7A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7A60u;
label_2c7a60:
    // 0x2c7a60: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2c7a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c7a64:
    // 0x2c7a64: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x2c7a64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_2c7a68:
    // 0x2c7a68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c7a68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c7a6c:
    // 0x2c7a6c: 0x0  nop
    ctx->pc = 0x2c7a6cu;
    // NOP
label_2c7a70:
    // 0x2c7a70: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x2c7a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_2c7a74:
    // 0x2c7a74: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x2c7a74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_2c7a78:
    // 0x2c7a78: 0x24a40034  addiu       $a0, $a1, 0x34
    ctx->pc = 0x2c7a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 52));
label_2c7a7c:
    // 0x2c7a7c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c7a7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c7a80:
    // 0x2c7a80: 0xc069d88  jal         func_1A7620
label_2c7a84:
    if (ctx->pc == 0x2C7A84u) {
        ctx->pc = 0x2C7A88u;
        goto label_2c7a88;
    }
    ctx->pc = 0x2C7A80u;
    SET_GPR_U32(ctx, 31, 0x2C7A88u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x2C7A80u, 0x2C7A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7A88u;
label_2c7a88:
    // 0x2c7a88: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2c7a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c7a8c:
    // 0x2c7a8c: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x2c7a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_2c7a90:
    // 0x2c7a90: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c7a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2c7a94:
    // 0x2c7a94: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x2c7a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_2c7a98:
    // 0x2c7a98: 0xc0b76a0  jal         func_2DDA80
label_2c7a9c:
    if (ctx->pc == 0x2C7A9Cu) {
        ctx->pc = 0x2C7AA0u;
        goto label_2c7aa0;
    }
    ctx->pc = 0x2C7A98u;
    SET_GPR_U32(ctx, 31, 0x2C7AA0u);
    ctx->pc = 0x2DDA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDA80u, 0x2C7A98u, 0x2C7AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7AA0u;
label_2c7aa0:
    // 0x2c7aa0: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x2c7aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2c7aa4:
    // 0x2c7aa4: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2c7aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_2c7aa8:
    // 0x2c7aa8: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x2c7aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
label_2c7aac:
    // 0x2c7aac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c7aacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c7ab0:
    // 0x2c7ab0: 0xc069d88  jal         func_1A7620
label_2c7ab4:
    if (ctx->pc == 0x2C7AB4u) {
        ctx->pc = 0x2C7AB8u;
        goto label_2c7ab8;
    }
    ctx->pc = 0x2C7AB0u;
    SET_GPR_U32(ctx, 31, 0x2C7AB8u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x2C7AB0u, 0x2C7AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7AB8u;
label_2c7ab8:
    // 0x2c7ab8: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x2c7ab8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2c7abc:
    // 0x2c7abc: 0xc7b40158  lwc1        $f20, 0x158($sp)
    ctx->pc = 0x2c7abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2c7ac0:
    // 0x2c7ac0: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x2c7ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_2c7ac4:
    // 0x2c7ac4: 0x24a40034  addiu       $a0, $a1, 0x34
    ctx->pc = 0x2c7ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 52));
label_2c7ac8:
    // 0x2c7ac8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c7ac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c7acc:
    // 0x2c7acc: 0xc069d88  jal         func_1A7620
label_2c7ad0:
    if (ctx->pc == 0x2C7AD0u) {
        ctx->pc = 0x2C7AD4u;
        goto label_2c7ad4;
    }
    ctx->pc = 0x2C7ACCu;
    SET_GPR_U32(ctx, 31, 0x2C7AD4u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x2C7ACCu, 0x2C7AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7AD4u;
label_2c7ad4:
    // 0x2c7ad4: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x2c7ad4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_2c7ad8:
    // 0x2c7ad8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c7ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2c7adc:
    // 0x2c7adc: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x2c7adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_2c7ae0:
    // 0x2c7ae0: 0xc0b7684  jal         func_2DDA10
label_2c7ae4:
    if (ctx->pc == 0x2C7AE4u) {
        ctx->pc = 0x2C7AE8u;
        goto label_2c7ae8;
    }
    ctx->pc = 0x2C7AE0u;
    SET_GPR_U32(ctx, 31, 0x2C7AE8u);
    ctx->pc = 0x2DDA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDA10u, 0x2C7AE0u, 0x2C7AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7AE8u;
label_2c7ae8:
    // 0x2c7ae8: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x2c7ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2c7aec:
    // 0x2c7aec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c7aecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c7af0:
    // 0x2c7af0: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x2c7af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_2c7af4:
    // 0x2c7af4: 0x27a5016c  addiu       $a1, $sp, 0x16C
    ctx->pc = 0x2c7af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 364));
label_2c7af8:
    // 0x2c7af8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2c7af8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c7afc:
    // 0x2c7afc: 0xc0b287c  jal         func_2CA1F0
label_2c7b00:
    if (ctx->pc == 0x2C7B00u) {
        ctx->pc = 0x2C7B04u;
        goto label_2c7b04;
    }
    ctx->pc = 0x2C7AFCu;
    SET_GPR_U32(ctx, 31, 0x2C7B04u);
    ctx->pc = 0x2CA1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA1F0u, 0x2C7AFCu, 0x2C7B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7B04u;
label_2c7b04:
    // 0x2c7b04: 0xc08ef50  jal         func_23BD40
label_2c7b08:
    if (ctx->pc == 0x2C7B08u) {
        ctx->pc = 0x2C7B0Cu;
        goto label_2c7b0c;
    }
    ctx->pc = 0x2C7B04u;
    SET_GPR_U32(ctx, 31, 0x2C7B0Cu);
    ctx->pc = 0x23BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BD40u, 0x2C7B04u, 0x2C7B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7B0Cu;
label_2c7b0c:
    // 0x2c7b0c: 0xafa20168  sw          $v0, 0x168($sp)
    ctx->pc = 0x2c7b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 2));
label_2c7b10:
    // 0x2c7b10: 0x8f82ba74  lw          $v0, -0x458C($gp)
    ctx->pc = 0x2c7b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949492)));
label_2c7b14:
    // 0x2c7b14: 0x104001e0  beqz        $v0, . + 4 + (0x1E0 << 2)
label_2c7b18:
    if (ctx->pc == 0x2C7B18u) {
        ctx->pc = 0x2C7B1Cu;
        goto label_2c7b1c;
    }
    ctx->pc = 0x2C7B14u;
    {
        const bool branch_taken_0x2c7b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7b14) {
            ctx->pc = 0x2C8298u;
            goto label_2c8298;
        }
    }
    ctx->pc = 0x2C7B1Cu;
label_2c7b1c:
    // 0x2c7b1c: 0x8f82ba74  lw          $v0, -0x458C($gp)
    ctx->pc = 0x2c7b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949492)));
label_2c7b20:
    // 0x2c7b20: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x2c7b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_2c7b24:
    // 0x2c7b24: 0x7ba400e0  lq          $a0, 0xE0($sp)
    ctx->pc = 0x2c7b24u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2c7b28:
    // 0x2c7b28: 0xc04e308  jal         func_138C20
label_2c7b2c:
    if (ctx->pc == 0x2C7B2Cu) {
        ctx->pc = 0x2C7B30u;
        goto label_2c7b30;
    }
    ctx->pc = 0x2C7B28u;
    SET_GPR_U32(ctx, 31, 0x2C7B30u);
    ctx->pc = 0x138C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138C20u, 0x2C7B28u, 0x2C7B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7B30u;
label_2c7b30:
    // 0x2c7b30: 0x144001d9  bnez        $v0, . + 4 + (0x1D9 << 2)
label_2c7b34:
    if (ctx->pc == 0x2C7B34u) {
        ctx->pc = 0x2C7B38u;
        goto label_2c7b38;
    }
    ctx->pc = 0x2C7B30u;
    {
        const bool branch_taken_0x2c7b30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7b30) {
            ctx->pc = 0x2C8298u;
            goto label_2c8298;
        }
    }
    ctx->pc = 0x2C7B38u;
label_2c7b38:
    // 0x2c7b38: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x2c7b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_2c7b3c:
    // 0x2c7b3c: 0xc0406f0  jal         func_101BC0
label_2c7b40:
    if (ctx->pc == 0x2C7B40u) {
        ctx->pc = 0x2C7B44u;
        goto label_2c7b44;
    }
    ctx->pc = 0x2C7B3Cu;
    SET_GPR_U32(ctx, 31, 0x2C7B44u);
    ctx->pc = 0x101BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101BC0u, 0x2C7B3Cu, 0x2C7B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7B44u;
label_2c7b44:
    // 0x2c7b44: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2c7b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2c7b48:
    // 0x2c7b48: 0x104301d3  beq         $v0, $v1, . + 4 + (0x1D3 << 2)
label_2c7b4c:
    if (ctx->pc == 0x2C7B4Cu) {
        ctx->pc = 0x2C7B50u;
        goto label_2c7b50;
    }
    ctx->pc = 0x2C7B48u;
    {
        const bool branch_taken_0x2c7b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c7b48) {
            ctx->pc = 0x2C8298u;
            goto label_2c8298;
        }
    }
    ctx->pc = 0x2C7B50u;
label_2c7b50:
    // 0x2c7b50: 0x8fa2016c  lw          $v0, 0x16C($sp)
    ctx->pc = 0x2c7b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
label_2c7b54:
    // 0x2c7b54: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2c7b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c7b58:
    // 0x2c7b58: 0xc0ae154  jal         func_2B8550
label_2c7b5c:
    if (ctx->pc == 0x2C7B5Cu) {
        ctx->pc = 0x2C7B60u;
        goto label_2c7b60;
    }
    ctx->pc = 0x2C7B58u;
    SET_GPR_U32(ctx, 31, 0x2C7B60u);
    ctx->pc = 0x2B8550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8550u, 0x2C7B58u, 0x2C7B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7B60u;
label_2c7b60:
    // 0x2c7b60: 0x10400174  beqz        $v0, . + 4 + (0x174 << 2)
label_2c7b64:
    if (ctx->pc == 0x2C7B64u) {
        ctx->pc = 0x2C7B68u;
        goto label_2c7b68;
    }
    ctx->pc = 0x2C7B60u;
    {
        const bool branch_taken_0x2c7b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7b60) {
            ctx->pc = 0x2C8134u;
            goto label_2c8134;
        }
    }
    ctx->pc = 0x2C7B68u;
label_2c7b68:
    // 0x2c7b68: 0x8fa2016c  lw          $v0, 0x16C($sp)
    ctx->pc = 0x2c7b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
label_2c7b6c:
    // 0x2c7b6c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2c7b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c7b70:
    // 0x2c7b70: 0xc063dd0  jal         func_18F740
label_2c7b74:
    if (ctx->pc == 0x2C7B74u) {
        ctx->pc = 0x2C7B78u;
        goto label_2c7b78;
    }
    ctx->pc = 0x2C7B70u;
    SET_GPR_U32(ctx, 31, 0x2C7B78u);
    ctx->pc = 0x18F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F740u, 0x2C7B70u, 0x2C7B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7B78u;
label_2c7b78:
    // 0x2c7b78: 0x1440016e  bnez        $v0, . + 4 + (0x16E << 2)
label_2c7b7c:
    if (ctx->pc == 0x2C7B7Cu) {
        ctx->pc = 0x2C7B80u;
        goto label_2c7b80;
    }
    ctx->pc = 0x2C7B78u;
    {
        const bool branch_taken_0x2c7b78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7b78) {
            ctx->pc = 0x2C8134u;
            goto label_2c8134;
        }
    }
    ctx->pc = 0x2C7B80u;
label_2c7b80:
    // 0x2c7b80: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2c7b80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7b84:
    // 0x2c7b84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c7b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c7b88:
    // 0x2c7b88: 0xc096874  jal         func_25A1D0
label_2c7b8c:
    if (ctx->pc == 0x2C7B8Cu) {
        ctx->pc = 0x2C7B90u;
        goto label_2c7b90;
    }
    ctx->pc = 0x2C7B88u;
    SET_GPR_U32(ctx, 31, 0x2C7B90u);
    ctx->pc = 0x25A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A1D0u, 0x2C7B88u, 0x2C7B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7B90u;
label_2c7b90:
    // 0x2c7b90: 0x144000ec  bnez        $v0, . + 4 + (0xEC << 2)
label_2c7b94:
    if (ctx->pc == 0x2C7B94u) {
        ctx->pc = 0x2C7B98u;
        goto label_2c7b98;
    }
    ctx->pc = 0x2C7B90u;
    {
        const bool branch_taken_0x2c7b90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7b90) {
            ctx->pc = 0x2C7F44u;
            goto label_2c7f44;
        }
    }
    ctx->pc = 0x2C7B98u;
label_2c7b98:
    // 0x2c7b98: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x2c7b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_2c7b9c:
    // 0x2c7b9c: 0x8fa2016c  lw          $v0, 0x16C($sp)
    ctx->pc = 0x2c7b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
label_2c7ba0:
    // 0x2c7ba0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c7ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c7ba4:
    // 0x2c7ba4: 0x8c640094  lw          $a0, 0x94($v1)
    ctx->pc = 0x2c7ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_2c7ba8:
    // 0x2c7ba8: 0x8c45002c  lw          $a1, 0x2C($v0)
    ctx->pc = 0x2c7ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_2c7bac:
    // 0x2c7bac: 0xc0b4aac  jal         func_2D2AB0
label_2c7bb0:
    if (ctx->pc == 0x2C7BB0u) {
        ctx->pc = 0x2C7BB4u;
        goto label_2c7bb4;
    }
    ctx->pc = 0x2C7BACu;
    SET_GPR_U32(ctx, 31, 0x2C7BB4u);
    ctx->pc = 0x2D2AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2AB0u, 0x2C7BACu, 0x2C7BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7BB4u;
label_2c7bb4:
    // 0x2c7bb4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2c7bb8:
    if (ctx->pc == 0x2C7BB8u) {
        ctx->pc = 0x2C7BBCu;
        goto label_2c7bbc;
    }
    ctx->pc = 0x2C7BB4u;
    {
        const bool branch_taken_0x2c7bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7bb4) {
            ctx->pc = 0x2C7BE4u;
            goto label_2c7be4;
        }
    }
    ctx->pc = 0x2C7BBCu;
label_2c7bbc:
    // 0x2c7bbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c7bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c7bc0:
    // 0x2c7bc0: 0xc0480fc  jal         func_1203F0
label_2c7bc4:
    if (ctx->pc == 0x2C7BC4u) {
        ctx->pc = 0x2C7BC8u;
        goto label_2c7bc8;
    }
    ctx->pc = 0x2C7BC0u;
    SET_GPR_U32(ctx, 31, 0x2C7BC8u);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x2C7BC0u, 0x2C7BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7BC8u;
label_2c7bc8:
    // 0x2c7bc8: 0x104000de  beqz        $v0, . + 4 + (0xDE << 2)
label_2c7bcc:
    if (ctx->pc == 0x2C7BCCu) {
        ctx->pc = 0x2C7BD0u;
        goto label_2c7bd0;
    }
    ctx->pc = 0x2C7BC8u;
    {
        const bool branch_taken_0x2c7bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7bc8) {
            ctx->pc = 0x2C7F44u;
            goto label_2c7f44;
        }
    }
    ctx->pc = 0x2C7BD0u;
label_2c7bd0:
    // 0x2c7bd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c7bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c7bd4:
    // 0x2c7bd4: 0xc0969dc  jal         func_25A770
label_2c7bd8:
    if (ctx->pc == 0x2C7BD8u) {
        ctx->pc = 0x2C7BDCu;
        goto label_2c7bdc;
    }
    ctx->pc = 0x2C7BD4u;
    SET_GPR_U32(ctx, 31, 0x2C7BDCu);
    ctx->pc = 0x25A770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A770u, 0x2C7BD4u, 0x2C7BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7BDCu;
label_2c7bdc:
    // 0x2c7bdc: 0x144000d9  bnez        $v0, . + 4 + (0xD9 << 2)
label_2c7be0:
    if (ctx->pc == 0x2C7BE0u) {
        ctx->pc = 0x2C7BE4u;
        goto label_2c7be4;
    }
    ctx->pc = 0x2C7BDCu;
    {
        const bool branch_taken_0x2c7bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7bdc) {
            ctx->pc = 0x2C7F44u;
            goto label_2c7f44;
        }
    }
    ctx->pc = 0x2C7BE4u;
label_2c7be4:
    // 0x2c7be4: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x2c7be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_2c7be8:
    // 0x2c7be8: 0x8fa2016c  lw          $v0, 0x16C($sp)
    ctx->pc = 0x2c7be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
label_2c7bec:
    // 0x2c7bec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c7becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c7bf0:
    // 0x2c7bf0: 0x8c640094  lw          $a0, 0x94($v1)
    ctx->pc = 0x2c7bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_2c7bf4:
    // 0x2c7bf4: 0x8c45002c  lw          $a1, 0x2C($v0)
    ctx->pc = 0x2c7bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_2c7bf8:
    // 0x2c7bf8: 0xc0b4db0  jal         func_2D36C0
label_2c7bfc:
    if (ctx->pc == 0x2C7BFCu) {
        ctx->pc = 0x2C7C00u;
        goto label_2c7c00;
    }
    ctx->pc = 0x2C7BF8u;
    SET_GPR_U32(ctx, 31, 0x2C7C00u);
    ctx->pc = 0x2D36C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D36C0u, 0x2C7BF8u, 0x2C7C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7C00u;
label_2c7c00:
    // 0x2c7c00: 0x144000d0  bnez        $v0, . + 4 + (0xD0 << 2)
label_2c7c04:
    if (ctx->pc == 0x2C7C04u) {
        ctx->pc = 0x2C7C08u;
        goto label_2c7c08;
    }
    ctx->pc = 0x2C7C00u;
    {
        const bool branch_taken_0x2c7c00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7c00) {
            ctx->pc = 0x2C7F44u;
            goto label_2c7f44;
        }
    }
    ctx->pc = 0x2C7C08u;
label_2c7c08:
    // 0x2c7c08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c7c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c7c0c:
    // 0x2c7c0c: 0xc096e38  jal         func_25B8E0
label_2c7c10:
    if (ctx->pc == 0x2C7C10u) {
        ctx->pc = 0x2C7C14u;
        goto label_2c7c14;
    }
    ctx->pc = 0x2C7C0Cu;
    SET_GPR_U32(ctx, 31, 0x2C7C14u);
    ctx->pc = 0x25B8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B8E0u, 0x2C7C0Cu, 0x2C7C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7C14u;
label_2c7c14:
    // 0x2c7c14: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2c7c18:
    if (ctx->pc == 0x2C7C18u) {
        ctx->pc = 0x2C7C1Cu;
        goto label_2c7c1c;
    }
    ctx->pc = 0x2C7C14u;
    {
        const bool branch_taken_0x2c7c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7c14) {
            ctx->pc = 0x2C7C2Cu;
            goto label_2c7c2c;
        }
    }
    ctx->pc = 0x2C7C1Cu;
label_2c7c1c:
    // 0x2c7c1c: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x2c7c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_2c7c20:
    // 0x2c7c20: 0xafa20164  sw          $v0, 0x164($sp)
    ctx->pc = 0x2c7c20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 2));
label_2c7c24:
    // 0x2c7c24: 0x100001ff  b           . + 4 + (0x1FF << 2)
label_2c7c28:
    if (ctx->pc == 0x2C7C28u) {
        ctx->pc = 0x2C7C2Cu;
        goto label_2c7c2c;
    }
    ctx->pc = 0x2C7C24u;
    {
        const bool branch_taken_0x2c7c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7c24) {
            ctx->pc = 0x2C8424u;
            goto label_2c8424;
        }
    }
    ctx->pc = 0x2C7C2Cu;
label_2c7c2c:
    // 0x2c7c2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c7c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c7c30:
    // 0x2c7c30: 0xc096fbc  jal         func_25BEF0
label_2c7c34:
    if (ctx->pc == 0x2C7C34u) {
        ctx->pc = 0x2C7C38u;
        goto label_2c7c38;
    }
    ctx->pc = 0x2C7C30u;
    SET_GPR_U32(ctx, 31, 0x2C7C38u);
    ctx->pc = 0x25BEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEF0u, 0x2C7C30u, 0x2C7C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7C38u;
label_2c7c38:
    // 0x2c7c38: 0x1440008d  bnez        $v0, . + 4 + (0x8D << 2)
label_2c7c3c:
    if (ctx->pc == 0x2C7C3Cu) {
        ctx->pc = 0x2C7C40u;
        goto label_2c7c40;
    }
    ctx->pc = 0x2C7C38u;
    {
        const bool branch_taken_0x2c7c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7c38) {
            ctx->pc = 0x2C7E70u;
            goto label_2c7e70;
        }
    }
    ctx->pc = 0x2C7C40u;
label_2c7c40:
    // 0x2c7c40: 0x8fa2016c  lw          $v0, 0x16C($sp)
    ctx->pc = 0x2c7c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
label_2c7c44:
    // 0x2c7c44: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c7c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c7c48:
    // 0x2c7c48: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x2c7c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_2c7c4c:
    // 0x2c7c4c: 0x8c45002c  lw          $a1, 0x2C($v0)
    ctx->pc = 0x2c7c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_2c7c50:
    // 0x2c7c50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c7c50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7c54:
    // 0x2c7c54: 0xc0af798  jal         func_2BDE60
label_2c7c58:
    if (ctx->pc == 0x2C7C58u) {
        ctx->pc = 0x2C7C5Cu;
        goto label_2c7c5c;
    }
    ctx->pc = 0x2C7C54u;
    SET_GPR_U32(ctx, 31, 0x2C7C5Cu);
    ctx->pc = 0x2BDE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDE60u, 0x2C7C54u, 0x2C7C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7C5Cu;
label_2c7c5c:
    // 0x2c7c5c: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x2c7c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_2c7c60:
    // 0x2c7c60: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c7c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2c7c64:
    // 0x2c7c64: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2c7c68:
    if (ctx->pc == 0x2C7C68u) {
        ctx->pc = 0x2C7C6Cu;
        goto label_2c7c6c;
    }
    ctx->pc = 0x2C7C64u;
    {
        const bool branch_taken_0x2c7c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7c64) {
            ctx->pc = 0x2C7C8Cu;
            goto label_2c7c8c;
        }
    }
    ctx->pc = 0x2C7C6Cu;
label_2c7c6c:
    // 0x2c7c6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c7c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c7c70:
    // 0x2c7c70: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x2c7c70u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2c7c74:
    // 0x2c7c74: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x2c7c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_2c7c78:
    // 0x2c7c78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c7c78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c7c7c:
    // 0x2c7c7c: 0xc0b277c  jal         func_2C9DF0
label_2c7c80:
    if (ctx->pc == 0x2C7C80u) {
        ctx->pc = 0x2C7C84u;
        goto label_2c7c84;
    }
    ctx->pc = 0x2C7C7Cu;
    SET_GPR_U32(ctx, 31, 0x2C7C84u);
    ctx->pc = 0x2C9DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9DF0u, 0x2C7C7Cu, 0x2C7C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7C84u;
label_2c7c84:
    // 0x2c7c84: 0x100000af  b           . + 4 + (0xAF << 2)
label_2c7c88:
    if (ctx->pc == 0x2C7C88u) {
        ctx->pc = 0x2C7C8Cu;
        goto label_2c7c8c;
    }
    ctx->pc = 0x2C7C84u;
    {
        const bool branch_taken_0x2c7c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7c84) {
            ctx->pc = 0x2C7F44u;
            goto label_2c7f44;
        }
    }
    ctx->pc = 0x2C7C8Cu;
label_2c7c8c:
    // 0x2c7c8c: 0x9202007c  lbu         $v0, 0x7C($s0)
    ctx->pc = 0x2c7c8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 124)));
label_2c7c90:
    // 0x2c7c90: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c7c90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2c7c94:
    // 0x2c7c94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c7c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c7c98:
    // 0x2c7c98: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_2c7c9c:
    if (ctx->pc == 0x2C7C9Cu) {
        ctx->pc = 0x2C7CA0u;
        goto label_2c7ca0;
    }
    ctx->pc = 0x2C7C98u;
    {
        const bool branch_taken_0x2c7c98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c7c98) {
            ctx->pc = 0x2C7CACu;
            goto label_2c7cac;
        }
    }
    ctx->pc = 0x2C7CA0u;
label_2c7ca0:
    // 0x2c7ca0: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x2c7ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
label_2c7ca4:
    // 0x2c7ca4: 0x100000a7  b           . + 4 + (0xA7 << 2)
label_2c7ca8:
    if (ctx->pc == 0x2C7CA8u) {
        ctx->pc = 0x2C7CACu;
        goto label_2c7cac;
    }
    ctx->pc = 0x2C7CA4u;
    {
        const bool branch_taken_0x2c7ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7ca4) {
            ctx->pc = 0x2C7F44u;
            goto label_2c7f44;
        }
    }
    ctx->pc = 0x2C7CACu;
label_2c7cac:
    // 0x2c7cac: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x2c7cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_2c7cb0:
    // 0x2c7cb0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c7cb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c7cb4:
    // 0x2c7cb4: 0xc0b27f0  jal         func_2C9FC0
label_2c7cb8:
    if (ctx->pc == 0x2C7CB8u) {
        ctx->pc = 0x2C7CBCu;
        goto label_2c7cbc;
    }
    ctx->pc = 0x2C7CB4u;
    SET_GPR_U32(ctx, 31, 0x2C7CBCu);
    ctx->pc = 0x2C9FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9FC0u, 0x2C7CB4u, 0x2C7CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7CBCu;
label_2c7cbc:
    // 0x2c7cbc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2c7cc0:
    if (ctx->pc == 0x2C7CC0u) {
        ctx->pc = 0x2C7CC4u;
        goto label_2c7cc4;
    }
    ctx->pc = 0x2C7CBCu;
    {
        const bool branch_taken_0x2c7cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7cbc) {
            ctx->pc = 0x2C7CD4u;
            goto label_2c7cd4;
        }
    }
    ctx->pc = 0x2C7CC4u;
label_2c7cc4:
    // 0x2c7cc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c7cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c7cc8:
    // 0x2c7cc8: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x2c7cc8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2c7ccc:
    // 0x2c7ccc: 0x1000009d  b           . + 4 + (0x9D << 2)
label_2c7cd0:
    if (ctx->pc == 0x2C7CD0u) {
        ctx->pc = 0x2C7CD4u;
        goto label_2c7cd4;
    }
    ctx->pc = 0x2C7CCCu;
    {
        const bool branch_taken_0x2c7ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7ccc) {
            ctx->pc = 0x2C7F44u;
            goto label_2c7f44;
        }
    }
    ctx->pc = 0x2C7CD4u;
label_2c7cd4:
    // 0x2c7cd4: 0x92020054  lbu         $v0, 0x54($s0)
    ctx->pc = 0x2c7cd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 84)));
label_2c7cd8:
    // 0x2c7cd8: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
label_2c7cdc:
    if (ctx->pc == 0x2C7CDCu) {
        ctx->pc = 0x2C7CE0u;
        goto label_2c7ce0;
    }
    ctx->pc = 0x2C7CD8u;
    {
        const bool branch_taken_0x2c7cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7cd8) {
            ctx->pc = 0x2C7E18u;
            goto label_2c7e18;
        }
    }
    ctx->pc = 0x2C7CE0u;
label_2c7ce0:
    // 0x2c7ce0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c7ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c7ce4:
    // 0x2c7ce4: 0xc096880  jal         func_25A200
label_2c7ce8:
    if (ctx->pc == 0x2C7CE8u) {
        ctx->pc = 0x2C7CECu;
        goto label_2c7cec;
    }
    ctx->pc = 0x2C7CE4u;
    SET_GPR_U32(ctx, 31, 0x2C7CECu);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x2C7CE4u, 0x2C7CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7CECu;
label_2c7cec:
    // 0x2c7cec: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
label_2c7cf0:
    if (ctx->pc == 0x2C7CF0u) {
        ctx->pc = 0x2C7CF4u;
        goto label_2c7cf4;
    }
    ctx->pc = 0x2C7CECu;
    {
        const bool branch_taken_0x2c7cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7cec) {
            ctx->pc = 0x2C7E18u;
            goto label_2c7e18;
        }
    }
    ctx->pc = 0x2C7CF4u;
label_2c7cf4:
    // 0x2c7cf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c7cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c7cf8:
    // 0x2c7cf8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c7cf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7cfc:
    // 0x2c7cfc: 0xc0968d8  jal         func_25A360
label_2c7d00:
    if (ctx->pc == 0x2C7D00u) {
        ctx->pc = 0x2C7D04u;
        goto label_2c7d04;
    }
    ctx->pc = 0x2C7CFCu;
    SET_GPR_U32(ctx, 31, 0x2C7D04u);
    ctx->pc = 0x25A360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A360u, 0x2C7CFCu, 0x2C7D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7D04u;
label_2c7d04:
    // 0x2c7d04: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2c7d04u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c7d08:
    // 0x2c7d08: 0x2ac20012  slti        $v0, $s6, 0x12
    ctx->pc = 0x2c7d08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)18) ? 1 : 0);
label_2c7d0c:
    // 0x2c7d0c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2c7d10:
    if (ctx->pc == 0x2C7D10u) {
        ctx->pc = 0x2C7D14u;
        goto label_2c7d14;
    }
    ctx->pc = 0x2C7D0Cu;
    {
        const bool branch_taken_0x2c7d0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7d0c) {
            ctx->pc = 0x2C7D20u;
            goto label_2c7d20;
        }
    }
    ctx->pc = 0x2C7D14u;
label_2c7d14:
    // 0x2c7d14: 0x2ac10017  slti        $at, $s6, 0x17
    ctx->pc = 0x2c7d14u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)23) ? 1 : 0);
label_2c7d18:
    // 0x2c7d18: 0x14200029  bnez        $at, . + 4 + (0x29 << 2)
label_2c7d1c:
    if (ctx->pc == 0x2C7D1Cu) {
        ctx->pc = 0x2C7D20u;
        goto label_2c7d20;
    }
    ctx->pc = 0x2C7D18u;
    {
        const bool branch_taken_0x2c7d18 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7d18) {
            ctx->pc = 0x2C7DC0u;
            goto label_2c7dc0;
        }
    }
    ctx->pc = 0x2C7D20u;
label_2c7d20:
    // 0x2c7d20: 0x8fa2016c  lw          $v0, 0x16C($sp)
    ctx->pc = 0x2c7d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
label_2c7d24:
    // 0x2c7d24: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c7d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c7d28:
    // 0x2c7d28: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x2c7d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_2c7d2c:
    // 0x2c7d2c: 0x8c45002c  lw          $a1, 0x2C($v0)
    ctx->pc = 0x2c7d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_2c7d30:
    // 0x2c7d30: 0xc0b00d8  jal         func_2C0360
label_2c7d34:
    if (ctx->pc == 0x2C7D34u) {
        ctx->pc = 0x2C7D38u;
        goto label_2c7d38;
    }
    ctx->pc = 0x2C7D30u;
    SET_GPR_U32(ctx, 31, 0x2C7D38u);
    ctx->pc = 0x2C0360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0360u, 0x2C7D30u, 0x2C7D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7D38u;
label_2c7d38:
    // 0x2c7d38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c7d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c7d3c:
    // 0x2c7d3c: 0xc096ec0  jal         func_25BB00
label_2c7d40:
    if (ctx->pc == 0x2C7D40u) {
        ctx->pc = 0x2C7D44u;
        goto label_2c7d44;
    }
    ctx->pc = 0x2C7D3Cu;
    SET_GPR_U32(ctx, 31, 0x2C7D44u);
    ctx->pc = 0x25BB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BB00u, 0x2C7D3Cu, 0x2C7D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7D44u;
label_2c7d44:
    // 0x2c7d44: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_2c7d48:
    if (ctx->pc == 0x2C7D48u) {
        ctx->pc = 0x2C7D4Cu;
        goto label_2c7d4c;
    }
    ctx->pc = 0x2C7D44u;
    {
        const bool branch_taken_0x2c7d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7d44) {
            ctx->pc = 0x2C7DC0u;
            goto label_2c7dc0;
        }
    }
    ctx->pc = 0x2C7D4Cu;
label_2c7d4c:
    // 0x2c7d4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c7d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c7d50:
    // 0x2c7d50: 0xc096ec0  jal         func_25BB00
label_2c7d54:
    if (ctx->pc == 0x2C7D54u) {
        ctx->pc = 0x2C7D58u;
        goto label_2c7d58;
    }
    ctx->pc = 0x2C7D50u;
    SET_GPR_U32(ctx, 31, 0x2C7D58u);
    ctx->pc = 0x25BB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BB00u, 0x2C7D50u, 0x2C7D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7D58u;
label_2c7d58:
    // 0x2c7d58: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x2c7d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_2c7d5c:
    // 0x2c7d5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c7d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c7d60:
    // 0x2c7d60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c7d60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7d64:
    // 0x2c7d64: 0xc0968d8  jal         func_25A360
label_2c7d68:
    if (ctx->pc == 0x2C7D68u) {
        ctx->pc = 0x2C7D6Cu;
        goto label_2c7d6c;
    }
    ctx->pc = 0x2C7D64u;
    SET_GPR_U32(ctx, 31, 0x2C7D6Cu);
    ctx->pc = 0x25A360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A360u, 0x2C7D64u, 0x2C7D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7D6Cu;
label_2c7d6c:
    // 0x2c7d6c: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x2c7d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_2c7d70:
    // 0x2c7d70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c7d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c7d74:
    // 0x2c7d74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c7d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c7d78:
    // 0x2c7d78: 0xc0968d8  jal         func_25A360
label_2c7d7c:
    if (ctx->pc == 0x2C7D7Cu) {
        ctx->pc = 0x2C7D80u;
        goto label_2c7d80;
    }
    ctx->pc = 0x2C7D78u;
    SET_GPR_U32(ctx, 31, 0x2C7D80u);
    ctx->pc = 0x25A360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A360u, 0x2C7D78u, 0x2C7D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7D80u;
label_2c7d80:
    // 0x2c7d80: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x2c7d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_2c7d84:
    // 0x2c7d84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c7d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c7d88:
    // 0x2c7d88: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2c7d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2c7d8c:
    // 0x2c7d8c: 0xc0968d8  jal         func_25A360
label_2c7d90:
    if (ctx->pc == 0x2C7D90u) {
        ctx->pc = 0x2C7D94u;
        goto label_2c7d94;
    }
    ctx->pc = 0x2C7D8Cu;
    SET_GPR_U32(ctx, 31, 0x2C7D94u);
    ctx->pc = 0x25A360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A360u, 0x2C7D8Cu, 0x2C7D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7D94u;
label_2c7d94:
    // 0x2c7d94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c7d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c7d98:
    // 0x2c7d98: 0x7ba500d0  lq          $a1, 0xD0($sp)
    ctx->pc = 0x2c7d98u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2c7d9c:
    // 0x2c7d9c: 0x7ba600c0  lq          $a2, 0xC0($sp)
    ctx->pc = 0x2c7d9cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2c7da0:
    // 0x2c7da0: 0x7ba700b0  lq          $a3, 0xB0($sp)
    ctx->pc = 0x2c7da0u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2c7da4:
    // 0x2c7da4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2c7da4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c7da8:
    // 0x2c7da8: 0xc0968e8  jal         func_25A3A0
label_2c7dac:
    if (ctx->pc == 0x2C7DACu) {
        ctx->pc = 0x2C7DB0u;
        goto label_2c7db0;
    }
    ctx->pc = 0x2C7DA8u;
    SET_GPR_U32(ctx, 31, 0x2C7DB0u);
    ctx->pc = 0x25A3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3A0u, 0x2C7DA8u, 0x2C7DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7DB0u;
label_2c7db0:
    // 0x2c7db0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c7db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c7db4:
    // 0x2c7db4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c7db4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7db8:
    // 0x2c7db8: 0xc096eac  jal         func_25BAB0
label_2c7dbc:
    if (ctx->pc == 0x2C7DBCu) {
        ctx->pc = 0x2C7DC0u;
        goto label_2c7dc0;
    }
    ctx->pc = 0x2C7DB8u;
    SET_GPR_U32(ctx, 31, 0x2C7DC0u);
    ctx->pc = 0x25BAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BAB0u, 0x2C7DB8u, 0x2C7DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7DC0u;
label_2c7dc0:
    // 0x2c7dc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c7dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c7dc4:
    // 0x2c7dc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c7dc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7dc8:
    // 0x2c7dc8: 0xc0968d8  jal         func_25A360
label_2c7dcc:
    if (ctx->pc == 0x2C7DCCu) {
        ctx->pc = 0x2C7DD0u;
        goto label_2c7dd0;
    }
    ctx->pc = 0x2C7DC8u;
    SET_GPR_U32(ctx, 31, 0x2C7DD0u);
    ctx->pc = 0x25A360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A360u, 0x2C7DC8u, 0x2C7DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7DD0u;
label_2c7dd0:
    // 0x2c7dd0: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
label_2c7dd4:
    if (ctx->pc == 0x2C7DD4u) {
        ctx->pc = 0x2C7DD8u;
        goto label_2c7dd8;
    }
    ctx->pc = 0x2C7DD0u;
    {
        const bool branch_taken_0x2c7dd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7dd0) {
            ctx->pc = 0x2C7F44u;
            goto label_2c7f44;
        }
    }
    ctx->pc = 0x2C7DD8u;
label_2c7dd8:
    // 0x2c7dd8: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x2c7dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_2c7ddc:
    // 0x2c7ddc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c7ddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c7de0:
    // 0x2c7de0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c7de0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7de4:
    // 0x2c7de4: 0xc0b0a90  jal         func_2C2A40
label_2c7de8:
    if (ctx->pc == 0x2C7DE8u) {
        ctx->pc = 0x2C7DECu;
        goto label_2c7dec;
    }
    ctx->pc = 0x2C7DE4u;
    SET_GPR_U32(ctx, 31, 0x2C7DECu);
    ctx->pc = 0x2C2A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A40u, 0x2C7DE4u, 0x2C7DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7DECu;
label_2c7dec:
    // 0x2c7dec: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x2c7decu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2c7df0:
    // 0x2c7df0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c7df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c7df4:
    // 0x2c7df4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c7df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7df8:
    // 0x2c7df8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c7df8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7dfc:
    // 0x2c7dfc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c7dfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7e00:
    // 0x2c7e00: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2c7e00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7e04:
    // 0x2c7e04: 0xc0968e8  jal         func_25A3A0
label_2c7e08:
    if (ctx->pc == 0x2C7E08u) {
        ctx->pc = 0x2C7E0Cu;
        goto label_2c7e0c;
    }
    ctx->pc = 0x2C7E04u;
    SET_GPR_U32(ctx, 31, 0x2C7E0Cu);
    ctx->pc = 0x25A3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3A0u, 0x2C7E04u, 0x2C7E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7E0Cu;
label_2c7e0c:
    // 0x2c7e0c: 0xa2000054  sb          $zero, 0x54($s0)
    ctx->pc = 0x2c7e0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 84), (uint8_t)GPR_U32(ctx, 0));
label_2c7e10:
    // 0x2c7e10: 0x1000004c  b           . + 4 + (0x4C << 2)
label_2c7e14:
    if (ctx->pc == 0x2C7E14u) {
        ctx->pc = 0x2C7E18u;
        goto label_2c7e18;
    }
    ctx->pc = 0x2C7E10u;
    {
        const bool branch_taken_0x2c7e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7e10) {
            ctx->pc = 0x2C7F44u;
            goto label_2c7f44;
        }
    }
    ctx->pc = 0x2C7E18u;
label_2c7e18:
    // 0x2c7e18: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x2c7e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_2c7e1c:
    // 0x2c7e1c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c7e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c7e20:
    // 0x2c7e20: 0xc0b2668  jal         func_2C99A0
label_2c7e24:
    if (ctx->pc == 0x2C7E24u) {
        ctx->pc = 0x2C7E28u;
        goto label_2c7e28;
    }
    ctx->pc = 0x2C7E20u;
    SET_GPR_U32(ctx, 31, 0x2C7E28u);
    ctx->pc = 0x2C99A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C99A0u, 0x2C7E20u, 0x2C7E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7E28u;
label_2c7e28:
    // 0x2c7e28: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2c7e2c:
    if (ctx->pc == 0x2C7E2Cu) {
        ctx->pc = 0x2C7E30u;
        goto label_2c7e30;
    }
    ctx->pc = 0x2C7E28u;
    {
        const bool branch_taken_0x2c7e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7e28) {
            ctx->pc = 0x2C7E40u;
            goto label_2c7e40;
        }
    }
    ctx->pc = 0x2C7E30u;
label_2c7e30:
    // 0x2c7e30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c7e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c7e34:
    // 0x2c7e34: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x2c7e34u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2c7e38:
    // 0x2c7e38: 0x10000042  b           . + 4 + (0x42 << 2)
label_2c7e3c:
    if (ctx->pc == 0x2C7E3Cu) {
        ctx->pc = 0x2C7E40u;
        goto label_2c7e40;
    }
    ctx->pc = 0x2C7E38u;
    {
        const bool branch_taken_0x2c7e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7e38) {
            ctx->pc = 0x2C7F44u;
            goto label_2c7f44;
        }
    }
    ctx->pc = 0x2C7E40u;
label_2c7e40:
    // 0x2c7e40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c7e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c7e44:
    // 0x2c7e44: 0xc096880  jal         func_25A200
label_2c7e48:
    if (ctx->pc == 0x2C7E48u) {
        ctx->pc = 0x2C7E4Cu;
        goto label_2c7e4c;
    }
    ctx->pc = 0x2C7E44u;
    SET_GPR_U32(ctx, 31, 0x2C7E4Cu);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x2C7E44u, 0x2C7E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7E4Cu;
label_2c7e4c:
    // 0x2c7e4c: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
label_2c7e50:
    if (ctx->pc == 0x2C7E50u) {
        ctx->pc = 0x2C7E54u;
        goto label_2c7e54;
    }
    ctx->pc = 0x2C7E4Cu;
    {
        const bool branch_taken_0x2c7e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7e4c) {
            ctx->pc = 0x2C7F44u;
            goto label_2c7f44;
        }
    }
    ctx->pc = 0x2C7E54u;
label_2c7e54:
    // 0x2c7e54: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x2c7e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_2c7e58:
    // 0x2c7e58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c7e58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c7e5c:
    // 0x2c7e5c: 0xc0b07c0  jal         func_2C1F00
label_2c7e60:
    if (ctx->pc == 0x2C7E60u) {
        ctx->pc = 0x2C7E64u;
        goto label_2c7e64;
    }
    ctx->pc = 0x2C7E5Cu;
    SET_GPR_U32(ctx, 31, 0x2C7E64u);
    ctx->pc = 0x2C1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1F00u, 0x2C7E5Cu, 0x2C7E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7E64u;
label_2c7e64:
    // 0x2c7e64: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x2c7e64u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2c7e68:
    // 0x2c7e68: 0x10000036  b           . + 4 + (0x36 << 2)
label_2c7e6c:
    if (ctx->pc == 0x2C7E6Cu) {
        ctx->pc = 0x2C7E70u;
        goto label_2c7e70;
    }
    ctx->pc = 0x2C7E68u;
    {
        const bool branch_taken_0x2c7e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7e68) {
            ctx->pc = 0x2C7F44u;
            goto label_2c7f44;
        }
    }
    ctx->pc = 0x2C7E70u;
label_2c7e70:
    // 0x2c7e70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c7e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c7e74:
    // 0x2c7e74: 0xc0480fc  jal         func_1203F0
label_2c7e78:
    if (ctx->pc == 0x2C7E78u) {
        ctx->pc = 0x2C7E7Cu;
        goto label_2c7e7c;
    }
    ctx->pc = 0x2C7E74u;
    SET_GPR_U32(ctx, 31, 0x2C7E7Cu);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x2C7E74u, 0x2C7E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7E7Cu;
label_2c7e7c:
    // 0x2c7e7c: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
label_2c7e80:
    if (ctx->pc == 0x2C7E80u) {
        ctx->pc = 0x2C7E84u;
        goto label_2c7e84;
    }
    ctx->pc = 0x2C7E7Cu;
    {
        const bool branch_taken_0x2c7e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7e7c) {
            ctx->pc = 0x2C7F44u;
            goto label_2c7f44;
        }
    }
    ctx->pc = 0x2C7E84u;
label_2c7e84:
    // 0x2c7e84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c7e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c7e88:
    // 0x2c7e88: 0xc096fbc  jal         func_25BEF0
label_2c7e8c:
    if (ctx->pc == 0x2C7E8Cu) {
        ctx->pc = 0x2C7E90u;
        goto label_2c7e90;
    }
    ctx->pc = 0x2C7E88u;
    SET_GPR_U32(ctx, 31, 0x2C7E90u);
    ctx->pc = 0x25BEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEF0u, 0x2C7E88u, 0x2C7E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7E90u;
label_2c7e90:
    // 0x2c7e90: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2c7e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_2c7e94:
    // 0x2c7e94: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2c7e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2c7e98:
    // 0x2c7e98: 0xc085538  jal         func_2154E0
label_2c7e9c:
    if (ctx->pc == 0x2C7E9Cu) {
        ctx->pc = 0x2C7EA0u;
        goto label_2c7ea0;
    }
    ctx->pc = 0x2C7E98u;
    SET_GPR_U32(ctx, 31, 0x2C7EA0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C7E98u, 0x2C7EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7EA0u;
label_2c7ea0:
    // 0x2c7ea0: 0xafa20160  sw          $v0, 0x160($sp)
    ctx->pc = 0x2c7ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
label_2c7ea4:
    // 0x2c7ea4: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x2c7ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_2c7ea8:
    // 0x2c7ea8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2c7ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2c7eac:
    // 0x2c7eac: 0xc085538  jal         func_2154E0
label_2c7eb0:
    if (ctx->pc == 0x2C7EB0u) {
        ctx->pc = 0x2C7EB4u;
        goto label_2c7eb4;
    }
    ctx->pc = 0x2C7EACu;
    SET_GPR_U32(ctx, 31, 0x2C7EB4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C7EACu, 0x2C7EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7EB4u;
label_2c7eb4:
    // 0x2c7eb4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2c7eb4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c7eb8:
    // 0x2c7eb8: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2c7eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_2c7ebc:
    // 0x2c7ebc: 0x8fa50160  lw          $a1, 0x160($sp)
    ctx->pc = 0x2c7ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_2c7ec0:
    // 0x2c7ec0: 0xc090f80  jal         func_243E00
label_2c7ec4:
    if (ctx->pc == 0x2C7EC4u) {
        ctx->pc = 0x2C7EC8u;
        goto label_2c7ec8;
    }
    ctx->pc = 0x2C7EC0u;
    SET_GPR_U32(ctx, 31, 0x2C7EC8u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2C7EC0u, 0x2C7EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7EC8u;
label_2c7ec8:
    // 0x2c7ec8: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x2c7ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_2c7ecc:
    // 0x2c7ecc: 0x27a20130  addiu       $v0, $sp, 0x130
    ctx->pc = 0x2c7eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_2c7ed0:
    // 0x2c7ed0: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2c7ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2c7ed4:
    // 0x2c7ed4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2c7ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c7ed8:
    // 0x2c7ed8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2c7ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c7edc:
    // 0x2c7edc: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2c7edcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2c7ee0:
    // 0x2c7ee0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2c7ee0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_2c7ee4:
    // 0x2c7ee4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2c7ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2c7ee8:
    // 0x2c7ee8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2c7ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2c7eec:
    // 0x2c7eec: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2c7eecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2c7ef0:
    // 0x2c7ef0: 0xc090f80  jal         func_243E00
label_2c7ef4:
    if (ctx->pc == 0x2C7EF4u) {
        ctx->pc = 0x2C7EF8u;
        goto label_2c7ef8;
    }
    ctx->pc = 0x2C7EF0u;
    SET_GPR_U32(ctx, 31, 0x2C7EF8u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2C7EF0u, 0x2C7EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7EF8u;
label_2c7ef8:
    // 0x2c7ef8: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x2c7ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2c7efc:
    // 0x2c7efc: 0x27a20120  addiu       $v0, $sp, 0x120
    ctx->pc = 0x2c7efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_2c7f00:
    // 0x2c7f00: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2c7f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2c7f04:
    // 0x2c7f04: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2c7f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c7f08:
    // 0x2c7f08: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2c7f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c7f0c:
    // 0x2c7f0c: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2c7f0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2c7f10:
    // 0x2c7f10: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2c7f10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_2c7f14:
    // 0x2c7f14: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2c7f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2c7f18:
    // 0x2c7f18: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x2c7f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_2c7f1c:
    // 0x2c7f1c: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x2c7f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_2c7f20:
    // 0x2c7f20: 0xc0b5f04  jal         func_2D7C10
label_2c7f24:
    if (ctx->pc == 0x2C7F24u) {
        ctx->pc = 0x2C7F28u;
        goto label_2c7f28;
    }
    ctx->pc = 0x2C7F20u;
    SET_GPR_U32(ctx, 31, 0x2C7F28u);
    ctx->pc = 0x2D7C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7C10u, 0x2C7F20u, 0x2C7F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7F28u;
label_2c7f28:
    // 0x2c7f28: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2c7f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_2c7f2c:
    // 0x2c7f2c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2c7f2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2c7f30:
    // 0x2c7f30: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2c7f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2c7f34:
    // 0x2c7f34: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2c7f34u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2c7f38:
    // 0x2c7f38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c7f38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7f3c:
    // 0x2c7f3c: 0xc090fe0  jal         func_243F80
label_2c7f40:
    if (ctx->pc == 0x2C7F40u) {
        ctx->pc = 0x2C7F44u;
        goto label_2c7f44;
    }
    ctx->pc = 0x2C7F3Cu;
    SET_GPR_U32(ctx, 31, 0x2C7F44u);
    ctx->pc = 0x243F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243F80u, 0x2C7F3Cu, 0x2C7F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7F44u;
label_2c7f44:
    // 0x2c7f44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c7f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c7f48:
    // 0x2c7f48: 0xc096874  jal         func_25A1D0
label_2c7f4c:
    if (ctx->pc == 0x2C7F4Cu) {
        ctx->pc = 0x2C7F50u;
        goto label_2c7f50;
    }
    ctx->pc = 0x2C7F48u;
    SET_GPR_U32(ctx, 31, 0x2C7F50u);
    ctx->pc = 0x25A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A1D0u, 0x2C7F48u, 0x2C7F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7F50u;
label_2c7f50:
    // 0x2c7f50: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_2c7f54:
    if (ctx->pc == 0x2C7F54u) {
        ctx->pc = 0x2C7F58u;
        goto label_2c7f58;
    }
    ctx->pc = 0x2C7F50u;
    {
        const bool branch_taken_0x2c7f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7f50) {
            ctx->pc = 0x2C7FD8u;
            goto label_2c7fd8;
        }
    }
    ctx->pc = 0x2C7F58u;
label_2c7f58:
    // 0x2c7f58: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2c7f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_2c7f5c:
    // 0x2c7f5c: 0x8c4200b0  lw          $v0, 0xB0($v0)
    ctx->pc = 0x2c7f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
label_2c7f60:
    // 0x2c7f60: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_2c7f64:
    if (ctx->pc == 0x2C7F64u) {
        ctx->pc = 0x2C7F68u;
        goto label_2c7f68;
    }
    ctx->pc = 0x2C7F60u;
    {
        const bool branch_taken_0x2c7f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7f60) {
            ctx->pc = 0x2C7FD8u;
            goto label_2c7fd8;
        }
    }
    ctx->pc = 0x2C7F68u;
label_2c7f68:
    // 0x2c7f68: 0x8f84bcc4  lw          $a0, -0x433C($gp)
    ctx->pc = 0x2c7f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_2c7f6c:
    // 0x2c7f6c: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x2c7f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_2c7f70:
    // 0x2c7f70: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x2c7f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_2c7f74:
    // 0x2c7f74: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2c7f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_2c7f78:
    // 0x2c7f78: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2c7f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c7f7c:
    // 0x2c7f7c: 0x8ca500b0  lw          $a1, 0xB0($a1)
    ctx->pc = 0x2c7f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 176)));
label_2c7f80:
    // 0x2c7f80: 0x906600b8  lbu         $a2, 0xB8($v1)
    ctx->pc = 0x2c7f80u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 184)));
label_2c7f84:
    // 0x2c7f84: 0x8c4700b4  lw          $a3, 0xB4($v0)
    ctx->pc = 0x2c7f84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_2c7f88:
    // 0x2c7f88: 0xc0af028  jal         func_2BC0A0
label_2c7f8c:
    if (ctx->pc == 0x2C7F8Cu) {
        ctx->pc = 0x2C7F90u;
        goto label_2c7f90;
    }
    ctx->pc = 0x2C7F88u;
    SET_GPR_U32(ctx, 31, 0x2C7F90u);
    ctx->pc = 0x2BC0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC0A0u, 0x2C7F88u, 0x2C7F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7F90u;
label_2c7f90:
    // 0x2c7f90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c7f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c7f94:
    // 0x2c7f94: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x2c7f94u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2c7f98:
    // 0x2c7f98: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2c7f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_2c7f9c:
    // 0x2c7f9c: 0x8c4200b0  lw          $v0, 0xB0($v0)
    ctx->pc = 0x2c7f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
label_2c7fa0:
    // 0x2c7fa0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2c7fa4:
    if (ctx->pc == 0x2C7FA4u) {
        ctx->pc = 0x2C7FA8u;
        goto label_2c7fa8;
    }
    ctx->pc = 0x2C7FA0u;
    {
        const bool branch_taken_0x2c7fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7fa0) {
            ctx->pc = 0x2C7FD0u;
            goto label_2c7fd0;
        }
    }
    ctx->pc = 0x2C7FA8u;
label_2c7fa8:
    // 0x2c7fa8: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2c7fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_2c7fac:
    // 0x2c7fac: 0x8c4400b0  lw          $a0, 0xB0($v0)
    ctx->pc = 0x2c7facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
label_2c7fb0:
    // 0x2c7fb0: 0xc0962ac  jal         func_258AB0
label_2c7fb4:
    if (ctx->pc == 0x2C7FB4u) {
        ctx->pc = 0x2C7FB8u;
        goto label_2c7fb8;
    }
    ctx->pc = 0x2C7FB0u;
    SET_GPR_U32(ctx, 31, 0x2C7FB8u);
    ctx->pc = 0x258AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258AB0u, 0x2C7FB0u, 0x2C7FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7FB8u;
label_2c7fb8:
    // 0x2c7fb8: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2c7fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_2c7fbc:
    // 0x2c7fbc: 0x8c4400b0  lw          $a0, 0xB0($v0)
    ctx->pc = 0x2c7fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
label_2c7fc0:
    // 0x2c7fc0: 0xc119c5c  jal         func_467170
label_2c7fc4:
    if (ctx->pc == 0x2C7FC4u) {
        ctx->pc = 0x2C7FC8u;
        goto label_2c7fc8;
    }
    ctx->pc = 0x2C7FC0u;
    SET_GPR_U32(ctx, 31, 0x2C7FC8u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2C7FC0u, 0x2C7FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7FC8u;
label_2c7fc8:
    // 0x2c7fc8: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2c7fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_2c7fcc:
    // 0x2c7fcc: 0xac4000b0  sw          $zero, 0xB0($v0)
    ctx->pc = 0x2c7fccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 0));
label_2c7fd0:
    // 0x2c7fd0: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2c7fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_2c7fd4:
    // 0x2c7fd4: 0xac4000b4  sw          $zero, 0xB4($v0)
    ctx->pc = 0x2c7fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 180), GPR_U32(ctx, 0));
label_2c7fd8:
    // 0x2c7fd8: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_2c7fdc:
    if (ctx->pc == 0x2C7FDCu) {
        ctx->pc = 0x2C7FE0u;
        goto label_2c7fe0;
    }
    ctx->pc = 0x2C7FD8u;
    {
        const bool branch_taken_0x2c7fd8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7fd8) {
            ctx->pc = 0x2C7FECu;
            goto label_2c7fec;
        }
    }
    ctx->pc = 0x2C7FE0u;
label_2c7fe0:
    // 0x2c7fe0: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x2c7fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
label_2c7fe4:
    // 0x2c7fe4: 0x100000bf  b           . + 4 + (0xBF << 2)
label_2c7fe8:
    if (ctx->pc == 0x2C7FE8u) {
        ctx->pc = 0x2C7FECu;
        goto label_2c7fec;
    }
    ctx->pc = 0x2C7FE4u;
    {
        const bool branch_taken_0x2c7fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7fe4) {
            ctx->pc = 0x2C82E4u;
            goto label_2c82e4;
        }
    }
    ctx->pc = 0x2C7FECu;
label_2c7fec:
    // 0x2c7fec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c7fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c7ff0:
    // 0x2c7ff0: 0xc096874  jal         func_25A1D0
label_2c7ff4:
    if (ctx->pc == 0x2C7FF4u) {
        ctx->pc = 0x2C7FF8u;
        goto label_2c7ff8;
    }
    ctx->pc = 0x2C7FF0u;
    SET_GPR_U32(ctx, 31, 0x2C7FF8u);
    ctx->pc = 0x25A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A1D0u, 0x2C7FF0u, 0x2C7FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7FF8u;
label_2c7ff8:
    // 0x2c7ff8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2c7ffc:
    if (ctx->pc == 0x2C7FFCu) {
        ctx->pc = 0x2C8000u;
        goto label_2c8000;
    }
    ctx->pc = 0x2C7FF8u;
    {
        const bool branch_taken_0x2c7ff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7ff8) {
            ctx->pc = 0x2C8014u;
            goto label_2c8014;
        }
    }
    ctx->pc = 0x2C8000u;
label_2c8000:
    // 0x2c8000: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c8000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c8004:
    // 0x2c8004: 0xc096880  jal         func_25A200
label_2c8008:
    if (ctx->pc == 0x2C8008u) {
        ctx->pc = 0x2C800Cu;
        goto label_2c800c;
    }
    ctx->pc = 0x2C8004u;
    SET_GPR_U32(ctx, 31, 0x2C800Cu);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x2C8004u, 0x2C800Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C800Cu;
label_2c800c:
    // 0x2c800c: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_2c8010:
    if (ctx->pc == 0x2C8010u) {
        ctx->pc = 0x2C8014u;
        goto label_2c8014;
    }
    ctx->pc = 0x2C800Cu;
    {
        const bool branch_taken_0x2c800c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c800c) {
            ctx->pc = 0x2C8074u;
            goto label_2c8074;
        }
    }
    ctx->pc = 0x2C8014u;
label_2c8014:
    // 0x2c8014: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c8014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c8018:
    // 0x2c8018: 0xc096874  jal         func_25A1D0
label_2c801c:
    if (ctx->pc == 0x2C801Cu) {
        ctx->pc = 0x2C8020u;
        goto label_2c8020;
    }
    ctx->pc = 0x2C8018u;
    SET_GPR_U32(ctx, 31, 0x2C8020u);
    ctx->pc = 0x25A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A1D0u, 0x2C8018u, 0x2C8020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8020u;
label_2c8020:
    // 0x2c8020: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2c8024:
    if (ctx->pc == 0x2C8024u) {
        ctx->pc = 0x2C8028u;
        goto label_2c8028;
    }
    ctx->pc = 0x2C8020u;
    {
        const bool branch_taken_0x2c8020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8020) {
            ctx->pc = 0x2C805Cu;
            goto label_2c805c;
        }
    }
    ctx->pc = 0x2C8028u;
label_2c8028:
    // 0x2c8028: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2c8028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_2c802c:
    // 0x2c802c: 0x90420048  lbu         $v0, 0x48($v0)
    ctx->pc = 0x2c802cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 72)));
label_2c8030:
    // 0x2c8030: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2c8034:
    if (ctx->pc == 0x2C8034u) {
        ctx->pc = 0x2C8038u;
        goto label_2c8038;
    }
    ctx->pc = 0x2C8030u;
    {
        const bool branch_taken_0x2c8030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8030) {
            ctx->pc = 0x2C805Cu;
            goto label_2c805c;
        }
    }
    ctx->pc = 0x2C8038u;
label_2c8038:
    // 0x2c8038: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x2c8038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_2c803c:
    // 0x2c803c: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x2c803cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_2c8040:
    // 0x2c8040: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2c8040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c8044:
    // 0x2c8044: 0xc0b1704  jal         func_2C5C10
label_2c8048:
    if (ctx->pc == 0x2C8048u) {
        ctx->pc = 0x2C804Cu;
        goto label_2c804c;
    }
    ctx->pc = 0x2C8044u;
    SET_GPR_U32(ctx, 31, 0x2C804Cu);
    ctx->pc = 0x2C5C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5C10u, 0x2C8044u, 0x2C804Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C804Cu;
label_2c804c:
    // 0x2c804c: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2c804cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_2c8050:
    // 0x2c8050: 0xa0400048  sb          $zero, 0x48($v0)
    ctx->pc = 0x2c8050u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 72), (uint8_t)GPR_U32(ctx, 0));
label_2c8054:
    // 0x2c8054: 0x100000a3  b           . + 4 + (0xA3 << 2)
label_2c8058:
    if (ctx->pc == 0x2C8058u) {
        ctx->pc = 0x2C805Cu;
        goto label_2c805c;
    }
    ctx->pc = 0x2C8054u;
    {
        const bool branch_taken_0x2c8054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8054) {
            ctx->pc = 0x2C82E4u;
            goto label_2c82e4;
        }
    }
    ctx->pc = 0x2C805Cu;
label_2c805c:
    // 0x2c805c: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x2c805cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_2c8060:
    // 0x2c8060: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c8060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c8064:
    // 0x2c8064: 0xc0b0a44  jal         func_2C2910
label_2c8068:
    if (ctx->pc == 0x2C8068u) {
        ctx->pc = 0x2C806Cu;
        goto label_2c806c;
    }
    ctx->pc = 0x2C8064u;
    SET_GPR_U32(ctx, 31, 0x2C806Cu);
    ctx->pc = 0x2C2910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2910u, 0x2C8064u, 0x2C806Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C806Cu;
label_2c806c:
    // 0x2c806c: 0x1000009d  b           . + 4 + (0x9D << 2)
label_2c8070:
    if (ctx->pc == 0x2C8070u) {
        ctx->pc = 0x2C8074u;
        goto label_2c8074;
    }
    ctx->pc = 0x2C806Cu;
    {
        const bool branch_taken_0x2c806c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c806c) {
            ctx->pc = 0x2C82E4u;
            goto label_2c82e4;
        }
    }
    ctx->pc = 0x2C8074u;
label_2c8074:
    // 0x2c8074: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x2c8074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_2c8078:
    // 0x2c8078: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x2c8078u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2c807c:
    // 0x2c807c: 0x14200020  bnez        $at, . + 4 + (0x20 << 2)
label_2c8080:
    if (ctx->pc == 0x2C8080u) {
        ctx->pc = 0x2C8084u;
        goto label_2c8084;
    }
    ctx->pc = 0x2C807Cu;
    {
        const bool branch_taken_0x2c807c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c807c) {
            ctx->pc = 0x2C8100u;
            goto label_2c8100;
        }
    }
    ctx->pc = 0x2C8084u;
label_2c8084:
    // 0x2c8084: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x2c8084u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
label_2c8088:
    // 0x2c8088: 0x8fa4016c  lw          $a0, 0x16C($sp)
    ctx->pc = 0x2c8088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
label_2c808c:
    // 0x2c808c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c808cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c8090:
    // 0x2c8090: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x2c8090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_2c8094:
    // 0x2c8094: 0x8c45002c  lw          $a1, 0x2C($v0)
    ctx->pc = 0x2c8094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_2c8098:
    // 0x2c8098: 0xc0b00d8  jal         func_2C0360
label_2c809c:
    if (ctx->pc == 0x2C809Cu) {
        ctx->pc = 0x2C80A0u;
        goto label_2c80a0;
    }
    ctx->pc = 0x2C8098u;
    SET_GPR_U32(ctx, 31, 0x2C80A0u);
    ctx->pc = 0x2C0360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0360u, 0x2C8098u, 0x2C80A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C80A0u;
label_2c80a0:
    // 0x2c80a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c80a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c80a4:
    // 0x2c80a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c80a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c80a8:
    // 0x2c80a8: 0xc0968d8  jal         func_25A360
label_2c80ac:
    if (ctx->pc == 0x2C80ACu) {
        ctx->pc = 0x2C80B0u;
        goto label_2c80b0;
    }
    ctx->pc = 0x2C80A8u;
    SET_GPR_U32(ctx, 31, 0x2C80B0u);
    ctx->pc = 0x25A360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A360u, 0x2C80A8u, 0x2C80B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C80B0u;
label_2c80b0:
    // 0x2c80b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c80b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c80b4:
    // 0x2c80b4: 0x10a0008b  beqz        $a1, . + 4 + (0x8B << 2)
label_2c80b8:
    if (ctx->pc == 0x2C80B8u) {
        ctx->pc = 0x2C80BCu;
        goto label_2c80bc;
    }
    ctx->pc = 0x2C80B4u;
    {
        const bool branch_taken_0x2c80b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c80b4) {
            ctx->pc = 0x2C82E4u;
            goto label_2c82e4;
        }
    }
    ctx->pc = 0x2C80BCu;
label_2c80bc:
    // 0x2c80bc: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2c80bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_2c80c0:
    // 0x2c80c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c80c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c80c4:
    // 0x2c80c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c80c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c80c8:
    // 0x2c80c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c80c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c80cc:
    // 0x2c80cc: 0xc0b0a90  jal         func_2C2A40
label_2c80d0:
    if (ctx->pc == 0x2C80D0u) {
        ctx->pc = 0x2C80D4u;
        goto label_2c80d4;
    }
    ctx->pc = 0x2C80CCu;
    SET_GPR_U32(ctx, 31, 0x2C80D4u);
    ctx->pc = 0x2C2A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A40u, 0x2C80CCu, 0x2C80D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C80D4u;
label_2c80d4:
    // 0x2c80d4: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2c80d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2c80d8:
    // 0x2c80d8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2c80d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c80dc:
    // 0x2c80dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c80dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c80e0:
    // 0x2c80e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c80e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c80e4:
    // 0x2c80e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c80e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c80e8:
    // 0x2c80e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c80e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c80ec:
    // 0x2c80ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2c80ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c80f0:
    // 0x2c80f0: 0xc0968e8  jal         func_25A3A0
label_2c80f4:
    if (ctx->pc == 0x2C80F4u) {
        ctx->pc = 0x2C80F8u;
        goto label_2c80f8;
    }
    ctx->pc = 0x2C80F0u;
    SET_GPR_U32(ctx, 31, 0x2C80F8u);
    ctx->pc = 0x25A3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3A0u, 0x2C80F0u, 0x2C80F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C80F8u;
label_2c80f8:
    // 0x2c80f8: 0x1000007a  b           . + 4 + (0x7A << 2)
label_2c80fc:
    if (ctx->pc == 0x2C80FCu) {
        ctx->pc = 0x2C8100u;
        goto label_2c8100;
    }
    ctx->pc = 0x2C80F8u;
    {
        const bool branch_taken_0x2c80f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c80f8) {
            ctx->pc = 0x2C82E4u;
            goto label_2c82e4;
        }
    }
    ctx->pc = 0x2C8100u;
label_2c8100:
    // 0x2c8100: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x2c8100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_2c8104:
    // 0x2c8104: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c8104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c8108:
    // 0x2c8108: 0xc0b080c  jal         func_2C2030
label_2c810c:
    if (ctx->pc == 0x2C810Cu) {
        ctx->pc = 0x2C8110u;
        goto label_2c8110;
    }
    ctx->pc = 0x2C8108u;
    SET_GPR_U32(ctx, 31, 0x2C8110u);
    ctx->pc = 0x2C2030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2030u, 0x2C8108u, 0x2C8110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8110u;
label_2c8110:
    // 0x2c8110: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x2c8110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_2c8114:
    // 0x2c8114: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2c8114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2c8118:
    // 0x2c8118: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x2c8118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
label_2c811c:
    // 0x2c811c: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x2c811cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_2c8120:
    // 0x2c8120: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c8120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c8124:
    // 0x2c8124: 0xc0b0a44  jal         func_2C2910
label_2c8128:
    if (ctx->pc == 0x2C8128u) {
        ctx->pc = 0x2C812Cu;
        goto label_2c812c;
    }
    ctx->pc = 0x2C8124u;
    SET_GPR_U32(ctx, 31, 0x2C812Cu);
    ctx->pc = 0x2C2910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2910u, 0x2C8124u, 0x2C812Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C812Cu;
label_2c812c:
    // 0x2c812c: 0x1000006d  b           . + 4 + (0x6D << 2)
label_2c8130:
    if (ctx->pc == 0x2C8130u) {
        ctx->pc = 0x2C8134u;
        goto label_2c8134;
    }
    ctx->pc = 0x2C812Cu;
    {
        const bool branch_taken_0x2c812c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c812c) {
            ctx->pc = 0x2C82E4u;
            goto label_2c82e4;
        }
    }
    ctx->pc = 0x2C8134u;
label_2c8134:
    // 0x2c8134: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c8134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c8138:
    // 0x2c8138: 0xc096978  jal         func_25A5E0
label_2c813c:
    if (ctx->pc == 0x2C813Cu) {
        ctx->pc = 0x2C8140u;
        goto label_2c8140;
    }
    ctx->pc = 0x2C8138u;
    SET_GPR_U32(ctx, 31, 0x2C8140u);
    ctx->pc = 0x25A5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5E0u, 0x2C8138u, 0x2C8140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8140u;
label_2c8140:
    // 0x2c8140: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2c8140u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2c8144:
    // 0x2c8144: 0x0  nop
    ctx->pc = 0x2c8144u;
    // NOP
label_2c8148:
    // 0x2c8148: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2c8148u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c814c:
    // 0x2c814c: 0x45010065  bc1t        . + 4 + (0x65 << 2)
label_2c8150:
    if (ctx->pc == 0x2C8150u) {
        ctx->pc = 0x2C8154u;
        goto label_2c8154;
    }
    ctx->pc = 0x2C814Cu;
    {
        const bool branch_taken_0x2c814c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c814c) {
            ctx->pc = 0x2C82E4u;
            goto label_2c82e4;
        }
    }
    ctx->pc = 0x2C8154u;
label_2c8154:
    // 0x2c8154: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c8154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c8158:
    // 0x2c8158: 0xc096874  jal         func_25A1D0
label_2c815c:
    if (ctx->pc == 0x2C815Cu) {
        ctx->pc = 0x2C8160u;
        goto label_2c8160;
    }
    ctx->pc = 0x2C8158u;
    SET_GPR_U32(ctx, 31, 0x2C8160u);
    ctx->pc = 0x25A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A1D0u, 0x2C8158u, 0x2C8160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8160u;
label_2c8160:
    // 0x2c8160: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2c8164:
    if (ctx->pc == 0x2C8164u) {
        ctx->pc = 0x2C8168u;
        goto label_2c8168;
    }
    ctx->pc = 0x2C8160u;
    {
        const bool branch_taken_0x2c8160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8160) {
            ctx->pc = 0x2C819Cu;
            goto label_2c819c;
        }
    }
    ctx->pc = 0x2C8168u;
label_2c8168:
    // 0x2c8168: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x2c8168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_2c816c:
    // 0x2c816c: 0x90630048  lbu         $v1, 0x48($v1)
    ctx->pc = 0x2c816cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 72)));
label_2c8170:
    // 0x2c8170: 0x1060005c  beqz        $v1, . + 4 + (0x5C << 2)
label_2c8174:
    if (ctx->pc == 0x2C8174u) {
        ctx->pc = 0x2C8178u;
        goto label_2c8178;
    }
    ctx->pc = 0x2C8170u;
    {
        const bool branch_taken_0x2c8170 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8170) {
            ctx->pc = 0x2C82E4u;
            goto label_2c82e4;
        }
    }
    ctx->pc = 0x2C8178u;
label_2c8178:
    // 0x2c8178: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x2c8178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_2c817c:
    // 0x2c817c: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x2c817cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_2c8180:
    // 0x2c8180: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2c8180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c8184:
    // 0x2c8184: 0xc0b1704  jal         func_2C5C10
label_2c8188:
    if (ctx->pc == 0x2C8188u) {
        ctx->pc = 0x2C818Cu;
        goto label_2c818c;
    }
    ctx->pc = 0x2C8184u;
    SET_GPR_U32(ctx, 31, 0x2C818Cu);
    ctx->pc = 0x2C5C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5C10u, 0x2C8184u, 0x2C818Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C818Cu;
label_2c818c:
    // 0x2c818c: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2c818cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_2c8190:
    // 0x2c8190: 0xa0400048  sb          $zero, 0x48($v0)
    ctx->pc = 0x2c8190u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 72), (uint8_t)GPR_U32(ctx, 0));
label_2c8194:
    // 0x2c8194: 0x10000053  b           . + 4 + (0x53 << 2)
label_2c8198:
    if (ctx->pc == 0x2C8198u) {
        ctx->pc = 0x2C819Cu;
        goto label_2c819c;
    }
    ctx->pc = 0x2C8194u;
    {
        const bool branch_taken_0x2c8194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8194) {
            ctx->pc = 0x2C82E4u;
            goto label_2c82e4;
        }
    }
    ctx->pc = 0x2C819Cu;
label_2c819c:
    // 0x2c819c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c819cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c81a0:
    // 0x2c81a0: 0xc096d84  jal         func_25B610
label_2c81a4:
    if (ctx->pc == 0x2C81A4u) {
        ctx->pc = 0x2C81A8u;
        goto label_2c81a8;
    }
    ctx->pc = 0x2C81A0u;
    SET_GPR_U32(ctx, 31, 0x2C81A8u);
    ctx->pc = 0x25B610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B610u, 0x2C81A0u, 0x2C81A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C81A8u;
label_2c81a8:
    // 0x2c81a8: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
label_2c81ac:
    if (ctx->pc == 0x2C81ACu) {
        ctx->pc = 0x2C81B0u;
        goto label_2c81b0;
    }
    ctx->pc = 0x2C81A8u;
    {
        const bool branch_taken_0x2c81a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c81a8) {
            ctx->pc = 0x2C82E4u;
            goto label_2c82e4;
        }
    }
    ctx->pc = 0x2C81B0u;
label_2c81b0:
    // 0x2c81b0: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x2c81b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_2c81b4:
    // 0x2c81b4: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x2c81b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2c81b8:
    // 0x2c81b8: 0x1460004a  bnez        $v1, . + 4 + (0x4A << 2)
label_2c81bc:
    if (ctx->pc == 0x2C81BCu) {
        ctx->pc = 0x2C81C0u;
        goto label_2c81c0;
    }
    ctx->pc = 0x2C81B8u;
    {
        const bool branch_taken_0x2c81b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c81b8) {
            ctx->pc = 0x2C82E4u;
            goto label_2c82e4;
        }
    }
    ctx->pc = 0x2C81C0u;
label_2c81c0:
    // 0x2c81c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c81c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c81c4:
    // 0x2c81c4: 0xc096d7c  jal         func_25B5F0
label_2c81c8:
    if (ctx->pc == 0x2C81C8u) {
        ctx->pc = 0x2C81CCu;
        goto label_2c81cc;
    }
    ctx->pc = 0x2C81C4u;
    SET_GPR_U32(ctx, 31, 0x2C81CCu);
    ctx->pc = 0x25B5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B5F0u, 0x2C81C4u, 0x2C81CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C81CCu;
label_2c81cc:
    // 0x2c81cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c81ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c81d0:
    // 0x2c81d0: 0xafa4015c  sw          $a0, 0x15C($sp)
    ctx->pc = 0x2c81d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 4));
label_2c81d4:
    // 0x2c81d4: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x2c81d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_2c81d8:
    // 0x2c81d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c81d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c81dc:
    // 0x2c81dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c81dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c81e0:
    // 0x2c81e0: 0xc0966fc  jal         func_259BF0
label_2c81e4:
    if (ctx->pc == 0x2C81E4u) {
        ctx->pc = 0x2C81E8u;
        goto label_2c81e8;
    }
    ctx->pc = 0x2C81E0u;
    SET_GPR_U32(ctx, 31, 0x2C81E8u);
    ctx->pc = 0x259BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259BF0u, 0x2C81E0u, 0x2C81E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C81E8u;
label_2c81e8:
    // 0x2c81e8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c81e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c81ec:
    // 0x2c81ec: 0x8c730000  lw          $s3, 0x0($v1)
    ctx->pc = 0x2c81ecu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2c81f0:
    // 0x2c81f0: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x2c81f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2c81f4:
    // 0x2c81f4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2c81f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2c81f8:
    // 0x2c81f8: 0x14a2003a  bne         $a1, $v0, . + 4 + (0x3A << 2)
label_2c81fc:
    if (ctx->pc == 0x2C81FCu) {
        ctx->pc = 0x2C8200u;
        goto label_2c8200;
    }
    ctx->pc = 0x2C81F8u;
    {
        const bool branch_taken_0x2c81f8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c81f8) {
            ctx->pc = 0x2C82E4u;
            goto label_2c82e4;
        }
    }
    ctx->pc = 0x2C8200u;
label_2c8200:
    // 0x2c8200: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x2c8200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_2c8204:
    // 0x2c8204: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2c8204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_2c8208:
    // 0x2c8208: 0xc085538  jal         func_2154E0
label_2c820c:
    if (ctx->pc == 0x2C820Cu) {
        ctx->pc = 0x2C8210u;
        goto label_2c8210;
    }
    ctx->pc = 0x2C8208u;
    SET_GPR_U32(ctx, 31, 0x2C8210u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C8208u, 0x2C8210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8210u;
label_2c8210:
    // 0x2c8210: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c8210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8214:
    // 0x2c8214: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x2c8214u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c8218:
    // 0x2c8218: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2c8218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2c821c:
    // 0x2c821c: 0xc0ae184  jal         func_2B8610
label_2c8220:
    if (ctx->pc == 0x2C8220u) {
        ctx->pc = 0x2C8224u;
        goto label_2c8224;
    }
    ctx->pc = 0x2C821Cu;
    SET_GPR_U32(ctx, 31, 0x2C8224u);
    ctx->pc = 0x2B8610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8610u, 0x2C821Cu, 0x2C8224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8224u;
label_2c8224:
    // 0x2c8224: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_2c8228:
    if (ctx->pc == 0x2C8228u) {
        ctx->pc = 0x2C822Cu;
        goto label_2c822c;
    }
    ctx->pc = 0x2C8224u;
    {
        const bool branch_taken_0x2c8224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8224) {
            ctx->pc = 0x2C82E4u;
            goto label_2c82e4;
        }
    }
    ctx->pc = 0x2C822Cu;
label_2c822c:
    // 0x2c822c: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x2c822cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_2c8230:
    // 0x2c8230: 0x8c820094  lw          $v0, 0x94($a0)
    ctx->pc = 0x2c8230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
label_2c8234:
    // 0x2c8234: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c8234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8238:
    // 0x2c8238: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x2c8238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_2c823c:
    // 0x2c823c: 0xc0b4db0  jal         func_2D36C0
label_2c8240:
    if (ctx->pc == 0x2C8240u) {
        ctx->pc = 0x2C8244u;
        goto label_2c8244;
    }
    ctx->pc = 0x2C823Cu;
    SET_GPR_U32(ctx, 31, 0x2C8244u);
    ctx->pc = 0x2D36C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D36C0u, 0x2C823Cu, 0x2C8244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8244u;
label_2c8244:
    // 0x2c8244: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c8244u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8248:
    // 0x2c8248: 0x14600026  bnez        $v1, . + 4 + (0x26 << 2)
label_2c824c:
    if (ctx->pc == 0x2C824Cu) {
        ctx->pc = 0x2C8250u;
        goto label_2c8250;
    }
    ctx->pc = 0x2C8248u;
    {
        const bool branch_taken_0x2c8248 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8248) {
            ctx->pc = 0x2C82E4u;
            goto label_2c82e4;
        }
    }
    ctx->pc = 0x2C8250u;
label_2c8250:
    // 0x2c8250: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c8250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c8254:
    // 0x2c8254: 0xc096880  jal         func_25A200
label_2c8258:
    if (ctx->pc == 0x2C8258u) {
        ctx->pc = 0x2C825Cu;
        goto label_2c825c;
    }
    ctx->pc = 0x2C8254u;
    SET_GPR_U32(ctx, 31, 0x2C825Cu);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x2C8254u, 0x2C825Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C825Cu;
label_2c825c:
    // 0x2c825c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c825cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8260:
    // 0x2c8260: 0x14a00020  bnez        $a1, . + 4 + (0x20 << 2)
label_2c8264:
    if (ctx->pc == 0x2C8264u) {
        ctx->pc = 0x2C8268u;
        goto label_2c8268;
    }
    ctx->pc = 0x2C8260u;
    {
        const bool branch_taken_0x2c8260 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8260) {
            ctx->pc = 0x2C82E4u;
            goto label_2c82e4;
        }
    }
    ctx->pc = 0x2C8268u;
label_2c8268:
    // 0x2c8268: 0x8fa6016c  lw          $a2, 0x16C($sp)
    ctx->pc = 0x2c8268u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
label_2c826c:
    // 0x2c826c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2c826cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2c8270:
    // 0x2c8270: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c8270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8274:
    // 0x2c8274: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c8274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c8278:
    // 0x2c8278: 0xc0ae044  jal         func_2B8110
label_2c827c:
    if (ctx->pc == 0x2C827Cu) {
        ctx->pc = 0x2C8280u;
        goto label_2c8280;
    }
    ctx->pc = 0x2C8278u;
    SET_GPR_U32(ctx, 31, 0x2C8280u);
    ctx->pc = 0x2B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8110u, 0x2C8278u, 0x2C8280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8280u;
label_2c8280:
    // 0x2c8280: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x2c8280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_2c8284:
    // 0x2c8284: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c8284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c8288:
    // 0x2c8288: 0xc0b07c0  jal         func_2C1F00
label_2c828c:
    if (ctx->pc == 0x2C828Cu) {
        ctx->pc = 0x2C8290u;
        goto label_2c8290;
    }
    ctx->pc = 0x2C8288u;
    SET_GPR_U32(ctx, 31, 0x2C8290u);
    ctx->pc = 0x2C1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1F00u, 0x2C8288u, 0x2C8290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8290u;
label_2c8290:
    // 0x2c8290: 0x10000014  b           . + 4 + (0x14 << 2)
label_2c8294:
    if (ctx->pc == 0x2C8294u) {
        ctx->pc = 0x2C8298u;
        goto label_2c8298;
    }
    ctx->pc = 0x2C8290u;
    {
        const bool branch_taken_0x2c8290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8290) {
            ctx->pc = 0x2C82E4u;
            goto label_2c82e4;
        }
    }
    ctx->pc = 0x2C8298u;
label_2c8298:
    // 0x2c8298: 0x8fa2016c  lw          $v0, 0x16C($sp)
    ctx->pc = 0x2c8298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
label_2c829c:
    // 0x2c829c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2c829cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c82a0:
    // 0x2c82a0: 0xc0ae154  jal         func_2B8550
label_2c82a4:
    if (ctx->pc == 0x2C82A4u) {
        ctx->pc = 0x2C82A8u;
        goto label_2c82a8;
    }
    ctx->pc = 0x2C82A0u;
    SET_GPR_U32(ctx, 31, 0x2C82A8u);
    ctx->pc = 0x2B8550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8550u, 0x2C82A0u, 0x2C82A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C82A8u;
label_2c82a8:
    // 0x2c82a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c82a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c82ac:
    // 0x2c82ac: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
label_2c82b0:
    if (ctx->pc == 0x2C82B0u) {
        ctx->pc = 0x2C82B4u;
        goto label_2c82b4;
    }
    ctx->pc = 0x2C82ACu;
    {
        const bool branch_taken_0x2c82ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c82ac) {
            ctx->pc = 0x2C82E4u;
            goto label_2c82e4;
        }
    }
    ctx->pc = 0x2C82B4u;
label_2c82b4:
    // 0x2c82b4: 0x8fa2016c  lw          $v0, 0x16C($sp)
    ctx->pc = 0x2c82b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
label_2c82b8:
    // 0x2c82b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c82b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c82bc:
    // 0x2c82bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c82bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c82c0:
    // 0x2c82c0: 0xc063dd0  jal         func_18F740
label_2c82c4:
    if (ctx->pc == 0x2C82C4u) {
        ctx->pc = 0x2C82C8u;
        goto label_2c82c8;
    }
    ctx->pc = 0x2C82C0u;
    SET_GPR_U32(ctx, 31, 0x2C82C8u);
    ctx->pc = 0x18F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F740u, 0x2C82C0u, 0x2C82C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C82C8u;
label_2c82c8:
    // 0x2c82c8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2c82cc:
    if (ctx->pc == 0x2C82CCu) {
        ctx->pc = 0x2C82D0u;
        goto label_2c82d0;
    }
    ctx->pc = 0x2C82C8u;
    {
        const bool branch_taken_0x2c82c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c82c8) {
            ctx->pc = 0x2C82E4u;
            goto label_2c82e4;
        }
    }
    ctx->pc = 0x2C82D0u;
label_2c82d0:
    // 0x2c82d0: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x2c82d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_2c82d4:
    // 0x2c82d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c82d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c82d8:
    // 0x2c82d8: 0xc0b0a44  jal         func_2C2910
label_2c82dc:
    if (ctx->pc == 0x2C82DCu) {
        ctx->pc = 0x2C82E0u;
        goto label_2c82e0;
    }
    ctx->pc = 0x2C82D8u;
    SET_GPR_U32(ctx, 31, 0x2C82E0u);
    ctx->pc = 0x2C2910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2910u, 0x2C82D8u, 0x2C82E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C82E0u;
label_2c82e0:
    // 0x2c82e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c82e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c82e4:
    // 0x2c82e4: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x2c82e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_2c82e8:
    // 0x2c82e8: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x2c82e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c82ec:
    // 0x2c82ec: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2c82ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_2c82f0:
    // 0x2c82f0: 0xc4400064  lwc1        $f0, 0x64($v0)
    ctx->pc = 0x2c82f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c82f4:
    // 0x2c82f4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c82f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2c82f8:
    // 0x2c82f8: 0xe4400064  swc1        $f0, 0x64($v0)
    ctx->pc = 0x2c82f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
label_2c82fc:
    // 0x2c82fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c82fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c8300:
    // 0x2c8300: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2c8300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_2c8304:
    // 0x2c8304: 0xe4400064  swc1        $f0, 0x64($v0)
    ctx->pc = 0x2c8304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
label_2c8308:
    // 0x2c8308: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c8308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c830c:
    // 0x2c830c: 0xc096874  jal         func_25A1D0
label_2c8310:
    if (ctx->pc == 0x2C8310u) {
        ctx->pc = 0x2C8314u;
        goto label_2c8314;
    }
    ctx->pc = 0x2C830Cu;
    SET_GPR_U32(ctx, 31, 0x2C8314u);
    ctx->pc = 0x25A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A1D0u, 0x2C830Cu, 0x2C8314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8314u;
label_2c8314:
    // 0x2c8314: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c8314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8318:
    // 0x2c8318: 0x1080003b  beqz        $a0, . + 4 + (0x3B << 2)
label_2c831c:
    if (ctx->pc == 0x2C831Cu) {
        ctx->pc = 0x2C8320u;
        goto label_2c8320;
    }
    ctx->pc = 0x2C8318u;
    {
        const bool branch_taken_0x2c8318 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8318) {
            ctx->pc = 0x2C8408u;
            goto label_2c8408;
        }
    }
    ctx->pc = 0x2C8320u;
label_2c8320:
    // 0x2c8320: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x2c8320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_2c8324:
    // 0x2c8324: 0x90440008  lbu         $a0, 0x8($v0)
    ctx->pc = 0x2c8324u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
label_2c8328:
    // 0x2c8328: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2c8328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_2c832c:
    // 0x2c832c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c832cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c8330:
    // 0x2c8330: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
label_2c8334:
    if (ctx->pc == 0x2C8334u) {
        ctx->pc = 0x2C8338u;
        goto label_2c8338;
    }
    ctx->pc = 0x2C8330u;
    {
        const bool branch_taken_0x2c8330 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c8330) {
            ctx->pc = 0x2C8364u;
            goto label_2c8364;
        }
    }
    ctx->pc = 0x2C8338u;
label_2c8338:
    // 0x2c8338: 0x8fa2016c  lw          $v0, 0x16C($sp)
    ctx->pc = 0x2c8338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
label_2c833c:
    // 0x2c833c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2c833cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c8340:
    // 0x2c8340: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2c8340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_2c8344:
    // 0x2c8344: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x2c8344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_2c8348:
    // 0x2c8348: 0x8c65002c  lw          $a1, 0x2C($v1)
    ctx->pc = 0x2c8348u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2c834c:
    // 0x2c834c: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x2c834cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_2c8350:
    // 0x2c8350: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2c8350u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8354:
    // 0x2c8354: 0xc0af798  jal         func_2BDE60
label_2c8358:
    if (ctx->pc == 0x2C8358u) {
        ctx->pc = 0x2C835Cu;
        goto label_2c835c;
    }
    ctx->pc = 0x2C8354u;
    SET_GPR_U32(ctx, 31, 0x2C835Cu);
    ctx->pc = 0x2BDE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDE60u, 0x2C8354u, 0x2C835Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C835Cu;
label_2c835c:
    // 0x2c835c: 0x1000002a  b           . + 4 + (0x2A << 2)
label_2c8360:
    if (ctx->pc == 0x2C8360u) {
        ctx->pc = 0x2C8364u;
        goto label_2c8364;
    }
    ctx->pc = 0x2C835Cu;
    {
        const bool branch_taken_0x2c835c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c835c) {
            ctx->pc = 0x2C8408u;
            goto label_2c8408;
        }
    }
    ctx->pc = 0x2C8364u;
label_2c8364:
    // 0x2c8364: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c8364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c8368:
    // 0x2c8368: 0xc096814  jal         func_25A050
label_2c836c:
    if (ctx->pc == 0x2C836Cu) {
        ctx->pc = 0x2C8370u;
        goto label_2c8370;
    }
    ctx->pc = 0x2C8368u;
    SET_GPR_U32(ctx, 31, 0x2C8370u);
    ctx->pc = 0x25A050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A050u, 0x2C8368u, 0x2C8370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8370u;
label_2c8370:
    // 0x2c8370: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c8370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8374:
    // 0x2c8374: 0xc09d3d0  jal         func_274F40
label_2c8378:
    if (ctx->pc == 0x2C8378u) {
        ctx->pc = 0x2C837Cu;
        goto label_2c837c;
    }
    ctx->pc = 0x2C8374u;
    SET_GPR_U32(ctx, 31, 0x2C837Cu);
    ctx->pc = 0x274F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274F40u, 0x2C8374u, 0x2C837Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C837Cu;
label_2c837c:
    // 0x2c837c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c837cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c8380:
    // 0x2c8380: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c8380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c8384:
    // 0x2c8384: 0xc09681c  jal         func_25A070
label_2c8388:
    if (ctx->pc == 0x2C8388u) {
        ctx->pc = 0x2C838Cu;
        goto label_2c838c;
    }
    ctx->pc = 0x2C8384u;
    SET_GPR_U32(ctx, 31, 0x2C838Cu);
    ctx->pc = 0x25A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A070u, 0x2C8384u, 0x2C838Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C838Cu;
label_2c838c:
    // 0x2c838c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c838cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8390:
    // 0x2c8390: 0xc09d3d0  jal         func_274F40
label_2c8394:
    if (ctx->pc == 0x2C8394u) {
        ctx->pc = 0x2C8398u;
        goto label_2c8398;
    }
    ctx->pc = 0x2C8390u;
    SET_GPR_U32(ctx, 31, 0x2C8398u);
    ctx->pc = 0x274F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274F40u, 0x2C8390u, 0x2C8398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8398u;
label_2c8398:
    // 0x2c8398: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c8398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c839c:
    // 0x2c839c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2c839cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2c83a0:
    // 0x2c83a0: 0xc09681c  jal         func_25A070
label_2c83a4:
    if (ctx->pc == 0x2C83A4u) {
        ctx->pc = 0x2C83A8u;
        goto label_2c83a8;
    }
    ctx->pc = 0x2C83A0u;
    SET_GPR_U32(ctx, 31, 0x2C83A8u);
    ctx->pc = 0x25A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A070u, 0x2C83A0u, 0x2C83A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C83A8u;
label_2c83a8:
    // 0x2c83a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c83a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c83ac:
    // 0x2c83ac: 0xc09d3d0  jal         func_274F40
label_2c83b0:
    if (ctx->pc == 0x2C83B0u) {
        ctx->pc = 0x2C83B4u;
        goto label_2c83b4;
    }
    ctx->pc = 0x2C83ACu;
    SET_GPR_U32(ctx, 31, 0x2C83B4u);
    ctx->pc = 0x274F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274F40u, 0x2C83ACu, 0x2C83B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C83B4u;
label_2c83b4:
    // 0x2c83b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c83b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c83b8:
    // 0x2c83b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c83b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c83bc:
    // 0x2c83bc: 0xc09681c  jal         func_25A070
label_2c83c0:
    if (ctx->pc == 0x2C83C0u) {
        ctx->pc = 0x2C83C4u;
        goto label_2c83c4;
    }
    ctx->pc = 0x2C83BCu;
    SET_GPR_U32(ctx, 31, 0x2C83C4u);
    ctx->pc = 0x25A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A070u, 0x2C83BCu, 0x2C83C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C83C4u;
label_2c83c4:
    // 0x2c83c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c83c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c83c8:
    // 0x2c83c8: 0xc09d3d0  jal         func_274F40
label_2c83cc:
    if (ctx->pc == 0x2C83CCu) {
        ctx->pc = 0x2C83D0u;
        goto label_2c83d0;
    }
    ctx->pc = 0x2C83C8u;
    SET_GPR_U32(ctx, 31, 0x2C83D0u);
    ctx->pc = 0x274F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274F40u, 0x2C83C8u, 0x2C83D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C83D0u;
label_2c83d0:
    // 0x2c83d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c83d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c83d4:
    // 0x2c83d4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2c83d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2c83d8:
    // 0x2c83d8: 0xc09681c  jal         func_25A070
label_2c83dc:
    if (ctx->pc == 0x2C83DCu) {
        ctx->pc = 0x2C83E0u;
        goto label_2c83e0;
    }
    ctx->pc = 0x2C83D8u;
    SET_GPR_U32(ctx, 31, 0x2C83E0u);
    ctx->pc = 0x25A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A070u, 0x2C83D8u, 0x2C83E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C83E0u;
label_2c83e0:
    // 0x2c83e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c83e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c83e4:
    // 0x2c83e4: 0xc09d3d0  jal         func_274F40
label_2c83e8:
    if (ctx->pc == 0x2C83E8u) {
        ctx->pc = 0x2C83ECu;
        goto label_2c83ec;
    }
    ctx->pc = 0x2C83E4u;
    SET_GPR_U32(ctx, 31, 0x2C83ECu);
    ctx->pc = 0x274F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274F40u, 0x2C83E4u, 0x2C83ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C83ECu;
label_2c83ec:
    // 0x2c83ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c83ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c83f0:
    // 0x2c83f0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2c83f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2c83f4:
    // 0x2c83f4: 0xc09681c  jal         func_25A070
label_2c83f8:
    if (ctx->pc == 0x2C83F8u) {
        ctx->pc = 0x2C83FCu;
        goto label_2c83fc;
    }
    ctx->pc = 0x2C83F4u;
    SET_GPR_U32(ctx, 31, 0x2C83FCu);
    ctx->pc = 0x25A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A070u, 0x2C83F4u, 0x2C83FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C83FCu;
label_2c83fc:
    // 0x2c83fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c83fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8400:
    // 0x2c8400: 0xc09d3d0  jal         func_274F40
label_2c8404:
    if (ctx->pc == 0x2C8404u) {
        ctx->pc = 0x2C8408u;
        goto label_2c8408;
    }
    ctx->pc = 0x2C8400u;
    SET_GPR_U32(ctx, 31, 0x2C8408u);
    ctx->pc = 0x274F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274F40u, 0x2C8400u, 0x2C8408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8408u;
label_2c8408:
    // 0x2c8408: 0x8fa4016c  lw          $a0, 0x16C($sp)
    ctx->pc = 0x2c8408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
label_2c840c:
    // 0x2c840c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2c840cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c8410:
    // 0x2c8410: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2c8410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c8414:
    // 0x2c8414: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c8414u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c8418:
    // 0x2c8418: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x2c8418u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_2c841c:
    // 0x2c841c: 0x320f809  jalr        $t9
label_2c8420:
    if (ctx->pc == 0x2C8420u) {
        ctx->pc = 0x2C8424u;
        goto label_2c8424;
    }
    ctx->pc = 0x2C841Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C8424u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C841Cu, 0x2C8424u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C8424u;
label_2c8424:
    // 0x2c8424: 0x8fa2016c  lw          $v0, 0x16C($sp)
    ctx->pc = 0x2c8424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
label_2c8428:
    // 0x2c8428: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2c8428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_2c842c:
    // 0x2c842c: 0xafa2016c  sw          $v0, 0x16C($sp)
    ctx->pc = 0x2c842cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 2));
label_2c8430:
    // 0x2c8430: 0x8fa2016c  lw          $v0, 0x16C($sp)
    ctx->pc = 0x2c8430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
label_2c8434:
    // 0x2c8434: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x2c8434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_2c8438:
    // 0x2c8438: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2c8438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_2c843c:
    // 0x2c843c: 0x24440084  addiu       $a0, $v0, 0x84
    ctx->pc = 0x2c843cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
label_2c8440:
    // 0x2c8440: 0xc068e98  jal         func_1A3A60
label_2c8444:
    if (ctx->pc == 0x2C8444u) {
        ctx->pc = 0x2C8448u;
        goto label_2c8448;
    }
    ctx->pc = 0x2C8440u;
    SET_GPR_U32(ctx, 31, 0x2C8448u);
    ctx->pc = 0x1A3A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3A60u, 0x2C8440u, 0x2C8448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8448u;
label_2c8448:
    // 0x2c8448: 0x7ba300e0  lq          $v1, 0xE0($sp)
    ctx->pc = 0x2c8448u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2c844c:
    // 0x2c844c: 0x1462fd00  bne         $v1, $v0, . + 4 + (-0x300 << 2)
label_2c8450:
    if (ctx->pc == 0x2C8450u) {
        ctx->pc = 0x2C8454u;
        goto label_2c8454;
    }
    ctx->pc = 0x2C844Cu;
    {
        const bool branch_taken_0x2c844c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c844c) {
            ctx->pc = 0x2C7850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c7850;
        }
    }
    ctx->pc = 0x2C8454u;
label_2c8454:
    // 0x2c8454: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2c8454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2c8458:
    // 0x2c8458: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x2c8458u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2c845c:
    // 0x2c845c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2c845cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2c8460:
    // 0x2c8460: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2c8460u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2c8464:
    // 0x2c8464: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2c8464u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2c8468:
    // 0x2c8468: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2c8468u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2c846c:
    // 0x2c846c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2c846cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2c8470:
    // 0x2c8470: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2c8470u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2c8474:
    // 0x2c8474: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2c8474u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2c8478:
    // 0x2c8478: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2c8478u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c847c:
    // 0x2c847c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2c847cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2c8480:
    // 0x2c8480: 0x27bd0180  addiu       $sp, $sp, 0x180
    ctx->pc = 0x2c8480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_2c8484:
    // 0x2c8484: 0x3e00008  jr          $ra
label_2c8488:
    if (ctx->pc == 0x2C8488u) {
        ctx->pc = 0x2C848Cu;
        goto label_2c848c;
    }
    ctx->pc = 0x2C8484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C848Cu;
label_2c848c:
    // 0x2c848c: 0x0  nop
    ctx->pc = 0x2c848cu;
    // NOP
    ctx->pc = 0x2c8490u;
}
