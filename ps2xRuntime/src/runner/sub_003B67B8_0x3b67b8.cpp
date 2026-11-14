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

// Function: sub_003B67B8
// Address: 0x3b67b8 - 0x3b6fe8
void sub_003B67B8_0x3b67b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B67B8_0x3b67b8");
#endif

    switch (ctx->pc) {
        case 0x3b67b8u: goto label_3b67b8;
        case 0x3b67bcu: goto label_3b67bc;
        case 0x3b67c0u: goto label_3b67c0;
        case 0x3b67c4u: goto label_3b67c4;
        case 0x3b67c8u: goto label_3b67c8;
        case 0x3b67ccu: goto label_3b67cc;
        case 0x3b67d0u: goto label_3b67d0;
        case 0x3b67d4u: goto label_3b67d4;
        case 0x3b67d8u: goto label_3b67d8;
        case 0x3b67dcu: goto label_3b67dc;
        case 0x3b67e0u: goto label_3b67e0;
        case 0x3b67e4u: goto label_3b67e4;
        case 0x3b67e8u: goto label_3b67e8;
        case 0x3b67ecu: goto label_3b67ec;
        case 0x3b67f0u: goto label_3b67f0;
        case 0x3b67f4u: goto label_3b67f4;
        case 0x3b67f8u: goto label_3b67f8;
        case 0x3b67fcu: goto label_3b67fc;
        case 0x3b6800u: goto label_3b6800;
        case 0x3b6804u: goto label_3b6804;
        case 0x3b6808u: goto label_3b6808;
        case 0x3b680cu: goto label_3b680c;
        case 0x3b6810u: goto label_3b6810;
        case 0x3b6814u: goto label_3b6814;
        case 0x3b6818u: goto label_3b6818;
        case 0x3b681cu: goto label_3b681c;
        case 0x3b6820u: goto label_3b6820;
        case 0x3b6824u: goto label_3b6824;
        case 0x3b6828u: goto label_3b6828;
        case 0x3b682cu: goto label_3b682c;
        case 0x3b6830u: goto label_3b6830;
        case 0x3b6834u: goto label_3b6834;
        case 0x3b6838u: goto label_3b6838;
        case 0x3b683cu: goto label_3b683c;
        case 0x3b6840u: goto label_3b6840;
        case 0x3b6844u: goto label_3b6844;
        case 0x3b6848u: goto label_3b6848;
        case 0x3b684cu: goto label_3b684c;
        case 0x3b6850u: goto label_3b6850;
        case 0x3b6854u: goto label_3b6854;
        case 0x3b6858u: goto label_3b6858;
        case 0x3b685cu: goto label_3b685c;
        case 0x3b6860u: goto label_3b6860;
        case 0x3b6864u: goto label_3b6864;
        case 0x3b6868u: goto label_3b6868;
        case 0x3b686cu: goto label_3b686c;
        case 0x3b6870u: goto label_3b6870;
        case 0x3b6874u: goto label_3b6874;
        case 0x3b6878u: goto label_3b6878;
        case 0x3b687cu: goto label_3b687c;
        case 0x3b6880u: goto label_3b6880;
        case 0x3b6884u: goto label_3b6884;
        case 0x3b6888u: goto label_3b6888;
        case 0x3b688cu: goto label_3b688c;
        case 0x3b6890u: goto label_3b6890;
        case 0x3b6894u: goto label_3b6894;
        case 0x3b6898u: goto label_3b6898;
        case 0x3b689cu: goto label_3b689c;
        case 0x3b68a0u: goto label_3b68a0;
        case 0x3b68a4u: goto label_3b68a4;
        case 0x3b68a8u: goto label_3b68a8;
        case 0x3b68acu: goto label_3b68ac;
        case 0x3b68b0u: goto label_3b68b0;
        case 0x3b68b4u: goto label_3b68b4;
        case 0x3b68b8u: goto label_3b68b8;
        case 0x3b68bcu: goto label_3b68bc;
        case 0x3b68c0u: goto label_3b68c0;
        case 0x3b68c4u: goto label_3b68c4;
        case 0x3b68c8u: goto label_3b68c8;
        case 0x3b68ccu: goto label_3b68cc;
        case 0x3b68d0u: goto label_3b68d0;
        case 0x3b68d4u: goto label_3b68d4;
        case 0x3b68d8u: goto label_3b68d8;
        case 0x3b68dcu: goto label_3b68dc;
        case 0x3b68e0u: goto label_3b68e0;
        case 0x3b68e4u: goto label_3b68e4;
        case 0x3b68e8u: goto label_3b68e8;
        case 0x3b68ecu: goto label_3b68ec;
        case 0x3b68f0u: goto label_3b68f0;
        case 0x3b68f4u: goto label_3b68f4;
        case 0x3b68f8u: goto label_3b68f8;
        case 0x3b68fcu: goto label_3b68fc;
        case 0x3b6900u: goto label_3b6900;
        case 0x3b6904u: goto label_3b6904;
        case 0x3b6908u: goto label_3b6908;
        case 0x3b690cu: goto label_3b690c;
        case 0x3b6910u: goto label_3b6910;
        case 0x3b6914u: goto label_3b6914;
        case 0x3b6918u: goto label_3b6918;
        case 0x3b691cu: goto label_3b691c;
        case 0x3b6920u: goto label_3b6920;
        case 0x3b6924u: goto label_3b6924;
        case 0x3b6928u: goto label_3b6928;
        case 0x3b692cu: goto label_3b692c;
        case 0x3b6930u: goto label_3b6930;
        case 0x3b6934u: goto label_3b6934;
        case 0x3b6938u: goto label_3b6938;
        case 0x3b693cu: goto label_3b693c;
        case 0x3b6940u: goto label_3b6940;
        case 0x3b6944u: goto label_3b6944;
        case 0x3b6948u: goto label_3b6948;
        case 0x3b694cu: goto label_3b694c;
        case 0x3b6950u: goto label_3b6950;
        case 0x3b6954u: goto label_3b6954;
        case 0x3b6958u: goto label_3b6958;
        case 0x3b695cu: goto label_3b695c;
        case 0x3b6960u: goto label_3b6960;
        case 0x3b6964u: goto label_3b6964;
        case 0x3b6968u: goto label_3b6968;
        case 0x3b696cu: goto label_3b696c;
        case 0x3b6970u: goto label_3b6970;
        case 0x3b6974u: goto label_3b6974;
        case 0x3b6978u: goto label_3b6978;
        case 0x3b697cu: goto label_3b697c;
        case 0x3b6980u: goto label_3b6980;
        case 0x3b6984u: goto label_3b6984;
        case 0x3b6988u: goto label_3b6988;
        case 0x3b698cu: goto label_3b698c;
        case 0x3b6990u: goto label_3b6990;
        case 0x3b6994u: goto label_3b6994;
        case 0x3b6998u: goto label_3b6998;
        case 0x3b699cu: goto label_3b699c;
        case 0x3b69a0u: goto label_3b69a0;
        case 0x3b69a4u: goto label_3b69a4;
        case 0x3b69a8u: goto label_3b69a8;
        case 0x3b69acu: goto label_3b69ac;
        case 0x3b69b0u: goto label_3b69b0;
        case 0x3b69b4u: goto label_3b69b4;
        case 0x3b69b8u: goto label_3b69b8;
        case 0x3b69bcu: goto label_3b69bc;
        case 0x3b69c0u: goto label_3b69c0;
        case 0x3b69c4u: goto label_3b69c4;
        case 0x3b69c8u: goto label_3b69c8;
        case 0x3b69ccu: goto label_3b69cc;
        case 0x3b69d0u: goto label_3b69d0;
        case 0x3b69d4u: goto label_3b69d4;
        case 0x3b69d8u: goto label_3b69d8;
        case 0x3b69dcu: goto label_3b69dc;
        case 0x3b69e0u: goto label_3b69e0;
        case 0x3b69e4u: goto label_3b69e4;
        case 0x3b69e8u: goto label_3b69e8;
        case 0x3b69ecu: goto label_3b69ec;
        case 0x3b69f0u: goto label_3b69f0;
        case 0x3b69f4u: goto label_3b69f4;
        case 0x3b69f8u: goto label_3b69f8;
        case 0x3b69fcu: goto label_3b69fc;
        case 0x3b6a00u: goto label_3b6a00;
        case 0x3b6a04u: goto label_3b6a04;
        case 0x3b6a08u: goto label_3b6a08;
        case 0x3b6a0cu: goto label_3b6a0c;
        case 0x3b6a10u: goto label_3b6a10;
        case 0x3b6a14u: goto label_3b6a14;
        case 0x3b6a18u: goto label_3b6a18;
        case 0x3b6a1cu: goto label_3b6a1c;
        case 0x3b6a20u: goto label_3b6a20;
        case 0x3b6a24u: goto label_3b6a24;
        case 0x3b6a28u: goto label_3b6a28;
        case 0x3b6a2cu: goto label_3b6a2c;
        case 0x3b6a30u: goto label_3b6a30;
        case 0x3b6a34u: goto label_3b6a34;
        case 0x3b6a38u: goto label_3b6a38;
        case 0x3b6a3cu: goto label_3b6a3c;
        case 0x3b6a40u: goto label_3b6a40;
        case 0x3b6a44u: goto label_3b6a44;
        case 0x3b6a48u: goto label_3b6a48;
        case 0x3b6a4cu: goto label_3b6a4c;
        case 0x3b6a50u: goto label_3b6a50;
        case 0x3b6a54u: goto label_3b6a54;
        case 0x3b6a58u: goto label_3b6a58;
        case 0x3b6a5cu: goto label_3b6a5c;
        case 0x3b6a60u: goto label_3b6a60;
        case 0x3b6a64u: goto label_3b6a64;
        case 0x3b6a68u: goto label_3b6a68;
        case 0x3b6a6cu: goto label_3b6a6c;
        case 0x3b6a70u: goto label_3b6a70;
        case 0x3b6a74u: goto label_3b6a74;
        case 0x3b6a78u: goto label_3b6a78;
        case 0x3b6a7cu: goto label_3b6a7c;
        case 0x3b6a80u: goto label_3b6a80;
        case 0x3b6a84u: goto label_3b6a84;
        case 0x3b6a88u: goto label_3b6a88;
        case 0x3b6a8cu: goto label_3b6a8c;
        case 0x3b6a90u: goto label_3b6a90;
        case 0x3b6a94u: goto label_3b6a94;
        case 0x3b6a98u: goto label_3b6a98;
        case 0x3b6a9cu: goto label_3b6a9c;
        case 0x3b6aa0u: goto label_3b6aa0;
        case 0x3b6aa4u: goto label_3b6aa4;
        case 0x3b6aa8u: goto label_3b6aa8;
        case 0x3b6aacu: goto label_3b6aac;
        case 0x3b6ab0u: goto label_3b6ab0;
        case 0x3b6ab4u: goto label_3b6ab4;
        case 0x3b6ab8u: goto label_3b6ab8;
        case 0x3b6abcu: goto label_3b6abc;
        case 0x3b6ac0u: goto label_3b6ac0;
        case 0x3b6ac4u: goto label_3b6ac4;
        case 0x3b6ac8u: goto label_3b6ac8;
        case 0x3b6accu: goto label_3b6acc;
        case 0x3b6ad0u: goto label_3b6ad0;
        case 0x3b6ad4u: goto label_3b6ad4;
        case 0x3b6ad8u: goto label_3b6ad8;
        case 0x3b6adcu: goto label_3b6adc;
        case 0x3b6ae0u: goto label_3b6ae0;
        case 0x3b6ae4u: goto label_3b6ae4;
        case 0x3b6ae8u: goto label_3b6ae8;
        case 0x3b6aecu: goto label_3b6aec;
        case 0x3b6af0u: goto label_3b6af0;
        case 0x3b6af4u: goto label_3b6af4;
        case 0x3b6af8u: goto label_3b6af8;
        case 0x3b6afcu: goto label_3b6afc;
        case 0x3b6b00u: goto label_3b6b00;
        case 0x3b6b04u: goto label_3b6b04;
        case 0x3b6b08u: goto label_3b6b08;
        case 0x3b6b0cu: goto label_3b6b0c;
        case 0x3b6b10u: goto label_3b6b10;
        case 0x3b6b14u: goto label_3b6b14;
        case 0x3b6b18u: goto label_3b6b18;
        case 0x3b6b1cu: goto label_3b6b1c;
        case 0x3b6b20u: goto label_3b6b20;
        case 0x3b6b24u: goto label_3b6b24;
        case 0x3b6b28u: goto label_3b6b28;
        case 0x3b6b2cu: goto label_3b6b2c;
        case 0x3b6b30u: goto label_3b6b30;
        case 0x3b6b34u: goto label_3b6b34;
        case 0x3b6b38u: goto label_3b6b38;
        case 0x3b6b3cu: goto label_3b6b3c;
        case 0x3b6b40u: goto label_3b6b40;
        case 0x3b6b44u: goto label_3b6b44;
        case 0x3b6b48u: goto label_3b6b48;
        case 0x3b6b4cu: goto label_3b6b4c;
        case 0x3b6b50u: goto label_3b6b50;
        case 0x3b6b54u: goto label_3b6b54;
        case 0x3b6b58u: goto label_3b6b58;
        case 0x3b6b5cu: goto label_3b6b5c;
        case 0x3b6b60u: goto label_3b6b60;
        case 0x3b6b64u: goto label_3b6b64;
        case 0x3b6b68u: goto label_3b6b68;
        case 0x3b6b6cu: goto label_3b6b6c;
        case 0x3b6b70u: goto label_3b6b70;
        case 0x3b6b74u: goto label_3b6b74;
        case 0x3b6b78u: goto label_3b6b78;
        case 0x3b6b7cu: goto label_3b6b7c;
        case 0x3b6b80u: goto label_3b6b80;
        case 0x3b6b84u: goto label_3b6b84;
        case 0x3b6b88u: goto label_3b6b88;
        case 0x3b6b8cu: goto label_3b6b8c;
        case 0x3b6b90u: goto label_3b6b90;
        case 0x3b6b94u: goto label_3b6b94;
        case 0x3b6b98u: goto label_3b6b98;
        case 0x3b6b9cu: goto label_3b6b9c;
        case 0x3b6ba0u: goto label_3b6ba0;
        case 0x3b6ba4u: goto label_3b6ba4;
        case 0x3b6ba8u: goto label_3b6ba8;
        case 0x3b6bacu: goto label_3b6bac;
        case 0x3b6bb0u: goto label_3b6bb0;
        case 0x3b6bb4u: goto label_3b6bb4;
        case 0x3b6bb8u: goto label_3b6bb8;
        case 0x3b6bbcu: goto label_3b6bbc;
        case 0x3b6bc0u: goto label_3b6bc0;
        case 0x3b6bc4u: goto label_3b6bc4;
        case 0x3b6bc8u: goto label_3b6bc8;
        case 0x3b6bccu: goto label_3b6bcc;
        case 0x3b6bd0u: goto label_3b6bd0;
        case 0x3b6bd4u: goto label_3b6bd4;
        case 0x3b6bd8u: goto label_3b6bd8;
        case 0x3b6bdcu: goto label_3b6bdc;
        case 0x3b6be0u: goto label_3b6be0;
        case 0x3b6be4u: goto label_3b6be4;
        case 0x3b6be8u: goto label_3b6be8;
        case 0x3b6becu: goto label_3b6bec;
        case 0x3b6bf0u: goto label_3b6bf0;
        case 0x3b6bf4u: goto label_3b6bf4;
        case 0x3b6bf8u: goto label_3b6bf8;
        case 0x3b6bfcu: goto label_3b6bfc;
        case 0x3b6c00u: goto label_3b6c00;
        case 0x3b6c04u: goto label_3b6c04;
        case 0x3b6c08u: goto label_3b6c08;
        case 0x3b6c0cu: goto label_3b6c0c;
        case 0x3b6c10u: goto label_3b6c10;
        case 0x3b6c14u: goto label_3b6c14;
        case 0x3b6c18u: goto label_3b6c18;
        case 0x3b6c1cu: goto label_3b6c1c;
        case 0x3b6c20u: goto label_3b6c20;
        case 0x3b6c24u: goto label_3b6c24;
        case 0x3b6c28u: goto label_3b6c28;
        case 0x3b6c2cu: goto label_3b6c2c;
        case 0x3b6c30u: goto label_3b6c30;
        case 0x3b6c34u: goto label_3b6c34;
        case 0x3b6c38u: goto label_3b6c38;
        case 0x3b6c3cu: goto label_3b6c3c;
        case 0x3b6c40u: goto label_3b6c40;
        case 0x3b6c44u: goto label_3b6c44;
        case 0x3b6c48u: goto label_3b6c48;
        case 0x3b6c4cu: goto label_3b6c4c;
        case 0x3b6c50u: goto label_3b6c50;
        case 0x3b6c54u: goto label_3b6c54;
        case 0x3b6c58u: goto label_3b6c58;
        case 0x3b6c5cu: goto label_3b6c5c;
        case 0x3b6c60u: goto label_3b6c60;
        case 0x3b6c64u: goto label_3b6c64;
        case 0x3b6c68u: goto label_3b6c68;
        case 0x3b6c6cu: goto label_3b6c6c;
        case 0x3b6c70u: goto label_3b6c70;
        case 0x3b6c74u: goto label_3b6c74;
        case 0x3b6c78u: goto label_3b6c78;
        case 0x3b6c7cu: goto label_3b6c7c;
        case 0x3b6c80u: goto label_3b6c80;
        case 0x3b6c84u: goto label_3b6c84;
        case 0x3b6c88u: goto label_3b6c88;
        case 0x3b6c8cu: goto label_3b6c8c;
        case 0x3b6c90u: goto label_3b6c90;
        case 0x3b6c94u: goto label_3b6c94;
        case 0x3b6c98u: goto label_3b6c98;
        case 0x3b6c9cu: goto label_3b6c9c;
        case 0x3b6ca0u: goto label_3b6ca0;
        case 0x3b6ca4u: goto label_3b6ca4;
        case 0x3b6ca8u: goto label_3b6ca8;
        case 0x3b6cacu: goto label_3b6cac;
        case 0x3b6cb0u: goto label_3b6cb0;
        case 0x3b6cb4u: goto label_3b6cb4;
        case 0x3b6cb8u: goto label_3b6cb8;
        case 0x3b6cbcu: goto label_3b6cbc;
        case 0x3b6cc0u: goto label_3b6cc0;
        case 0x3b6cc4u: goto label_3b6cc4;
        case 0x3b6cc8u: goto label_3b6cc8;
        case 0x3b6cccu: goto label_3b6ccc;
        case 0x3b6cd0u: goto label_3b6cd0;
        case 0x3b6cd4u: goto label_3b6cd4;
        case 0x3b6cd8u: goto label_3b6cd8;
        case 0x3b6cdcu: goto label_3b6cdc;
        case 0x3b6ce0u: goto label_3b6ce0;
        case 0x3b6ce4u: goto label_3b6ce4;
        case 0x3b6ce8u: goto label_3b6ce8;
        case 0x3b6cecu: goto label_3b6cec;
        case 0x3b6cf0u: goto label_3b6cf0;
        case 0x3b6cf4u: goto label_3b6cf4;
        case 0x3b6cf8u: goto label_3b6cf8;
        case 0x3b6cfcu: goto label_3b6cfc;
        case 0x3b6d00u: goto label_3b6d00;
        case 0x3b6d04u: goto label_3b6d04;
        case 0x3b6d08u: goto label_3b6d08;
        case 0x3b6d0cu: goto label_3b6d0c;
        case 0x3b6d10u: goto label_3b6d10;
        case 0x3b6d14u: goto label_3b6d14;
        case 0x3b6d18u: goto label_3b6d18;
        case 0x3b6d1cu: goto label_3b6d1c;
        case 0x3b6d20u: goto label_3b6d20;
        case 0x3b6d24u: goto label_3b6d24;
        case 0x3b6d28u: goto label_3b6d28;
        case 0x3b6d2cu: goto label_3b6d2c;
        case 0x3b6d30u: goto label_3b6d30;
        case 0x3b6d34u: goto label_3b6d34;
        case 0x3b6d38u: goto label_3b6d38;
        case 0x3b6d3cu: goto label_3b6d3c;
        case 0x3b6d40u: goto label_3b6d40;
        case 0x3b6d44u: goto label_3b6d44;
        case 0x3b6d48u: goto label_3b6d48;
        case 0x3b6d4cu: goto label_3b6d4c;
        case 0x3b6d50u: goto label_3b6d50;
        case 0x3b6d54u: goto label_3b6d54;
        case 0x3b6d58u: goto label_3b6d58;
        case 0x3b6d5cu: goto label_3b6d5c;
        case 0x3b6d60u: goto label_3b6d60;
        case 0x3b6d64u: goto label_3b6d64;
        case 0x3b6d68u: goto label_3b6d68;
        case 0x3b6d6cu: goto label_3b6d6c;
        case 0x3b6d70u: goto label_3b6d70;
        case 0x3b6d74u: goto label_3b6d74;
        case 0x3b6d78u: goto label_3b6d78;
        case 0x3b6d7cu: goto label_3b6d7c;
        case 0x3b6d80u: goto label_3b6d80;
        case 0x3b6d84u: goto label_3b6d84;
        case 0x3b6d88u: goto label_3b6d88;
        case 0x3b6d8cu: goto label_3b6d8c;
        case 0x3b6d90u: goto label_3b6d90;
        case 0x3b6d94u: goto label_3b6d94;
        case 0x3b6d98u: goto label_3b6d98;
        case 0x3b6d9cu: goto label_3b6d9c;
        case 0x3b6da0u: goto label_3b6da0;
        case 0x3b6da4u: goto label_3b6da4;
        case 0x3b6da8u: goto label_3b6da8;
        case 0x3b6dacu: goto label_3b6dac;
        case 0x3b6db0u: goto label_3b6db0;
        case 0x3b6db4u: goto label_3b6db4;
        case 0x3b6db8u: goto label_3b6db8;
        case 0x3b6dbcu: goto label_3b6dbc;
        case 0x3b6dc0u: goto label_3b6dc0;
        case 0x3b6dc4u: goto label_3b6dc4;
        case 0x3b6dc8u: goto label_3b6dc8;
        case 0x3b6dccu: goto label_3b6dcc;
        case 0x3b6dd0u: goto label_3b6dd0;
        case 0x3b6dd4u: goto label_3b6dd4;
        case 0x3b6dd8u: goto label_3b6dd8;
        case 0x3b6ddcu: goto label_3b6ddc;
        case 0x3b6de0u: goto label_3b6de0;
        case 0x3b6de4u: goto label_3b6de4;
        case 0x3b6de8u: goto label_3b6de8;
        case 0x3b6decu: goto label_3b6dec;
        case 0x3b6df0u: goto label_3b6df0;
        case 0x3b6df4u: goto label_3b6df4;
        case 0x3b6df8u: goto label_3b6df8;
        case 0x3b6dfcu: goto label_3b6dfc;
        case 0x3b6e00u: goto label_3b6e00;
        case 0x3b6e04u: goto label_3b6e04;
        case 0x3b6e08u: goto label_3b6e08;
        case 0x3b6e0cu: goto label_3b6e0c;
        case 0x3b6e10u: goto label_3b6e10;
        case 0x3b6e14u: goto label_3b6e14;
        case 0x3b6e18u: goto label_3b6e18;
        case 0x3b6e1cu: goto label_3b6e1c;
        case 0x3b6e20u: goto label_3b6e20;
        case 0x3b6e24u: goto label_3b6e24;
        case 0x3b6e28u: goto label_3b6e28;
        case 0x3b6e2cu: goto label_3b6e2c;
        case 0x3b6e30u: goto label_3b6e30;
        case 0x3b6e34u: goto label_3b6e34;
        case 0x3b6e38u: goto label_3b6e38;
        case 0x3b6e3cu: goto label_3b6e3c;
        case 0x3b6e40u: goto label_3b6e40;
        case 0x3b6e44u: goto label_3b6e44;
        case 0x3b6e48u: goto label_3b6e48;
        case 0x3b6e4cu: goto label_3b6e4c;
        case 0x3b6e50u: goto label_3b6e50;
        case 0x3b6e54u: goto label_3b6e54;
        case 0x3b6e58u: goto label_3b6e58;
        case 0x3b6e5cu: goto label_3b6e5c;
        case 0x3b6e60u: goto label_3b6e60;
        case 0x3b6e64u: goto label_3b6e64;
        case 0x3b6e68u: goto label_3b6e68;
        case 0x3b6e6cu: goto label_3b6e6c;
        case 0x3b6e70u: goto label_3b6e70;
        case 0x3b6e74u: goto label_3b6e74;
        case 0x3b6e78u: goto label_3b6e78;
        case 0x3b6e7cu: goto label_3b6e7c;
        case 0x3b6e80u: goto label_3b6e80;
        case 0x3b6e84u: goto label_3b6e84;
        case 0x3b6e88u: goto label_3b6e88;
        case 0x3b6e8cu: goto label_3b6e8c;
        case 0x3b6e90u: goto label_3b6e90;
        case 0x3b6e94u: goto label_3b6e94;
        case 0x3b6e98u: goto label_3b6e98;
        case 0x3b6e9cu: goto label_3b6e9c;
        case 0x3b6ea0u: goto label_3b6ea0;
        case 0x3b6ea4u: goto label_3b6ea4;
        case 0x3b6ea8u: goto label_3b6ea8;
        case 0x3b6eacu: goto label_3b6eac;
        case 0x3b6eb0u: goto label_3b6eb0;
        case 0x3b6eb4u: goto label_3b6eb4;
        case 0x3b6eb8u: goto label_3b6eb8;
        case 0x3b6ebcu: goto label_3b6ebc;
        case 0x3b6ec0u: goto label_3b6ec0;
        case 0x3b6ec4u: goto label_3b6ec4;
        case 0x3b6ec8u: goto label_3b6ec8;
        case 0x3b6eccu: goto label_3b6ecc;
        case 0x3b6ed0u: goto label_3b6ed0;
        case 0x3b6ed4u: goto label_3b6ed4;
        case 0x3b6ed8u: goto label_3b6ed8;
        case 0x3b6edcu: goto label_3b6edc;
        case 0x3b6ee0u: goto label_3b6ee0;
        case 0x3b6ee4u: goto label_3b6ee4;
        case 0x3b6ee8u: goto label_3b6ee8;
        case 0x3b6eecu: goto label_3b6eec;
        case 0x3b6ef0u: goto label_3b6ef0;
        case 0x3b6ef4u: goto label_3b6ef4;
        case 0x3b6ef8u: goto label_3b6ef8;
        case 0x3b6efcu: goto label_3b6efc;
        case 0x3b6f00u: goto label_3b6f00;
        case 0x3b6f04u: goto label_3b6f04;
        case 0x3b6f08u: goto label_3b6f08;
        case 0x3b6f0cu: goto label_3b6f0c;
        case 0x3b6f10u: goto label_3b6f10;
        case 0x3b6f14u: goto label_3b6f14;
        case 0x3b6f18u: goto label_3b6f18;
        case 0x3b6f1cu: goto label_3b6f1c;
        case 0x3b6f20u: goto label_3b6f20;
        case 0x3b6f24u: goto label_3b6f24;
        case 0x3b6f28u: goto label_3b6f28;
        case 0x3b6f2cu: goto label_3b6f2c;
        case 0x3b6f30u: goto label_3b6f30;
        case 0x3b6f34u: goto label_3b6f34;
        case 0x3b6f38u: goto label_3b6f38;
        case 0x3b6f3cu: goto label_3b6f3c;
        case 0x3b6f40u: goto label_3b6f40;
        case 0x3b6f44u: goto label_3b6f44;
        case 0x3b6f48u: goto label_3b6f48;
        case 0x3b6f4cu: goto label_3b6f4c;
        case 0x3b6f50u: goto label_3b6f50;
        case 0x3b6f54u: goto label_3b6f54;
        case 0x3b6f58u: goto label_3b6f58;
        case 0x3b6f5cu: goto label_3b6f5c;
        case 0x3b6f60u: goto label_3b6f60;
        case 0x3b6f64u: goto label_3b6f64;
        case 0x3b6f68u: goto label_3b6f68;
        case 0x3b6f6cu: goto label_3b6f6c;
        case 0x3b6f70u: goto label_3b6f70;
        case 0x3b6f74u: goto label_3b6f74;
        case 0x3b6f78u: goto label_3b6f78;
        case 0x3b6f7cu: goto label_3b6f7c;
        case 0x3b6f80u: goto label_3b6f80;
        case 0x3b6f84u: goto label_3b6f84;
        case 0x3b6f88u: goto label_3b6f88;
        case 0x3b6f8cu: goto label_3b6f8c;
        case 0x3b6f90u: goto label_3b6f90;
        case 0x3b6f94u: goto label_3b6f94;
        case 0x3b6f98u: goto label_3b6f98;
        case 0x3b6f9cu: goto label_3b6f9c;
        case 0x3b6fa0u: goto label_3b6fa0;
        case 0x3b6fa4u: goto label_3b6fa4;
        case 0x3b6fa8u: goto label_3b6fa8;
        case 0x3b6facu: goto label_3b6fac;
        case 0x3b6fb0u: goto label_3b6fb0;
        case 0x3b6fb4u: goto label_3b6fb4;
        case 0x3b6fb8u: goto label_3b6fb8;
        case 0x3b6fbcu: goto label_3b6fbc;
        case 0x3b6fc0u: goto label_3b6fc0;
        case 0x3b6fc4u: goto label_3b6fc4;
        case 0x3b6fc8u: goto label_3b6fc8;
        case 0x3b6fccu: goto label_3b6fcc;
        case 0x3b6fd0u: goto label_3b6fd0;
        case 0x3b6fd4u: goto label_3b6fd4;
        case 0x3b6fd8u: goto label_3b6fd8;
        case 0x3b6fdcu: goto label_3b6fdc;
        case 0x3b6fe0u: goto label_3b6fe0;
        case 0x3b6fe4u: goto label_3b6fe4;
        default: break;
    }

    ctx->pc = 0x3b67b8u;

label_3b67b8:
    // 0x3b67b8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3b67b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_3b67bc:
    // 0x3b67bc: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x3b67bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_3b67c0:
    // 0x3b67c0: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x3b67c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_3b67c4:
    // 0x3b67c4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3b67c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3b67c8:
    // 0x3b67c8: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x3b67c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_3b67cc:
    // 0x3b67cc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3b67ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b67d0:
    // 0x3b67d0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3b67d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3b67d4:
    // 0x3b67d4: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x3b67d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_3b67d8:
    // 0x3b67d8: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x3b67d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_3b67dc:
    // 0x3b67dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3b67dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b67e0:
    // 0x3b67e0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3b67e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_3b67e4:
    // 0x3b67e4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3b67e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3b67e8:
    // 0x3b67e8: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x3b67e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_3b67ec:
    // 0x3b67ec: 0xc10480a  jal         func_412028
label_3b67f0:
    if (ctx->pc == 0x3B67F0u) {
        ctx->pc = 0x3B67F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B67ECu;
        // 0x3b67f0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B67F4u;
        goto label_3b67f4;
    }
    ctx->pc = 0x3B67ECu;
    SET_GPR_U32(ctx, 31, 0x3B67F4u);
    ctx->pc = 0x3B67F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B67ECu;
    // 0x3b67f0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x3B67ECu, 0x3B67F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B67F4u;
label_3b67f4:
    // 0x3b67f4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3b67f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3b67f8:
    // 0x3b67f8: 0x144301a4  bne         $v0, $v1, . + 4 + (0x1A4 << 2)
label_3b67fc:
    if (ctx->pc == 0x3B67FCu) {
        ctx->pc = 0x3B67FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B67F8u;
        // 0x3b67fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6800u;
        goto label_3b6800;
    }
    ctx->pc = 0x3B67F8u;
    {
        const bool branch_taken_0x3b67f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3B67FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B67F8u;
        // 0x3b67fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b67f8) {
            ctx->pc = 0x3B6E8Cu;
            goto label_3b6e8c;
        }
    }
    ctx->pc = 0x3B6800u;
label_3b6800:
    // 0x3b6800: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x3b6800u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_3b6804:
    // 0x3b6804: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3b6804u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3b6808:
    // 0x3b6808: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3b6808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3b680c:
    // 0x3b680c: 0x34a50190  ori         $a1, $a1, 0x190
    ctx->pc = 0x3b680cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
label_3b6810:
    // 0x3b6810: 0xc103642  jal         func_40D908
label_3b6814:
    if (ctx->pc == 0x3B6814u) {
        ctx->pc = 0x3B6814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6810u;
        // 0x3b6814: 0xae5000b4  sw          $s0, 0xB4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6818u;
        goto label_3b6818;
    }
    ctx->pc = 0x3B6810u;
    SET_GPR_U32(ctx, 31, 0x3B6818u);
    ctx->pc = 0x3B6814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6810u;
    // 0x3b6814: 0xae5000b4  sw          $s0, 0xB4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D908u, 0x3B6810u, 0x3B6818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6818u;
label_3b6818:
    // 0x3b6818: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_3b681c:
    if (ctx->pc == 0x3B681Cu) {
        ctx->pc = 0x3B681Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6818u;
        // 0x3b681c: 0xae4200b0  sw          $v0, 0xB0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6820u;
        goto label_3b6820;
    }
    ctx->pc = 0x3B6818u;
    {
        const bool branch_taken_0x3b6818 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B681Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6818u;
        // 0x3b681c: 0xae4200b0  sw          $v0, 0xB0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6818) {
            ctx->pc = 0x3B684Cu;
            goto label_3b684c;
        }
    }
    ctx->pc = 0x3B6820u;
label_3b6820:
    // 0x3b6820: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x3b6820u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
label_3b6824:
    // 0x3b6824: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3b6824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b6828:
    // 0x3b6828: 0x34c60190  ori         $a2, $a2, 0x190
    ctx->pc = 0x3b6828u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)400);
label_3b682c:
    // 0x3b682c: 0xc103722  jal         func_40DC88
label_3b6830:
    if (ctx->pc == 0x3B6830u) {
        ctx->pc = 0x3B6830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B682Cu;
        // 0x3b6830: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6834u;
        goto label_3b6834;
    }
    ctx->pc = 0x3B682Cu;
    SET_GPR_U32(ctx, 31, 0x3B6834u);
    ctx->pc = 0x3B6830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B682Cu;
    // 0x3b6830: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DC88u, 0x3B682Cu, 0x3B6834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6834u;
label_3b6834:
    // 0x3b6834: 0xc1036d2  jal         func_40DB48
label_3b6838:
    if (ctx->pc == 0x3B6838u) {
        ctx->pc = 0x3B6838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6834u;
        // 0x3b6838: 0x8e4400b0  lw          $a0, 0xB0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B683Cu;
        goto label_3b683c;
    }
    ctx->pc = 0x3B6834u;
    SET_GPR_U32(ctx, 31, 0x3B683Cu);
    ctx->pc = 0x3B6838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6834u;
    // 0x3b6838: 0x8e4400b0  lw          $a0, 0xB0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3B6834u, 0x3B683Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B683Cu;
label_3b683c:
    // 0x3b683c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b683cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b6840:
    // 0x3b6840: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x3b6840u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_3b6844:
    // 0x3b6844: 0xc0bb7e6  jal         func_2EDF98
label_3b6848:
    if (ctx->pc == 0x3B6848u) {
        ctx->pc = 0x3B6848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6844u;
        // 0x3b6848: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B684Cu;
        goto label_3b684c;
    }
    ctx->pc = 0x3B6844u;
    SET_GPR_U32(ctx, 31, 0x3B684Cu);
    ctx->pc = 0x3B6848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6844u;
    // 0x3b6848: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3B6844u, 0x3B684Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B684Cu;
label_3b684c:
    // 0x3b684c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x3b684cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3b6850:
    // 0x3b6850: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b6850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b6854:
    // 0x3b6854: 0xae4000b8  sw          $zero, 0xB8($s2)
    ctx->pc = 0x3b6854u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 184), GPR_U32(ctx, 0));
label_3b6858:
    // 0x3b6858: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3b6858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_3b685c:
    // 0x3b685c: 0xae4000bc  sw          $zero, 0xBC($s2)
    ctx->pc = 0x3b685cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 188), GPR_U32(ctx, 0));
label_3b6860:
    // 0x3b6860: 0xc0ed542  jal         func_3B5508
label_3b6864:
    if (ctx->pc == 0x3B6864u) {
        ctx->pc = 0x3B6864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6860u;
        // 0x3b6864: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6868u;
        goto label_3b6868;
    }
    ctx->pc = 0x3B6860u;
    SET_GPR_U32(ctx, 31, 0x3B6868u);
    ctx->pc = 0x3B6864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6860u;
    // 0x3b6864: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5508u, 0x3B6860u, 0x3B6868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6868u;
label_3b6868:
    // 0x3b6868: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
label_3b686c:
    if (ctx->pc == 0x3B686Cu) {
        ctx->pc = 0x3B686Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6868u;
        // 0x3b686c: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6870u;
        goto label_3b6870;
    }
    ctx->pc = 0x3B6868u;
    {
        const bool branch_taken_0x3b6868 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B686Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6868u;
        // 0x3b686c: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6868) {
            ctx->pc = 0x3B68C8u;
            goto label_3b68c8;
        }
    }
    ctx->pc = 0x3B6870u;
label_3b6870:
    // 0x3b6870: 0x8e4400b0  lw          $a0, 0xB0($s2)
    ctx->pc = 0x3b6870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_3b6874:
    // 0x3b6874: 0xafb30000  sw          $s3, 0x0($sp)
    ctx->pc = 0x3b6874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
label_3b6878:
    // 0x3b6878: 0x24548048  addiu       $s4, $v0, -0x7FB8
    ctx->pc = 0x3b6878u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934600));
label_3b687c:
    // 0x3b687c: 0xafb10004  sw          $s1, 0x4($sp)
    ctx->pc = 0x3b687cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 17));
label_3b6880:
    // 0x3b6880: 0xc1036d2  jal         func_40DB48
label_3b6884:
    if (ctx->pc == 0x3B6884u) {
        ctx->pc = 0x3B6884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6880u;
        // 0x3b6884: 0x3a0982d  daddu       $s3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6888u;
        goto label_3b6888;
    }
    ctx->pc = 0x3B6880u;
    SET_GPR_U32(ctx, 31, 0x3B6888u);
    ctx->pc = 0x3B6884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6880u;
    // 0x3b6884: 0x3a0982d  daddu       $s3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3B6880u, 0x3B6888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6888u;
label_3b6888:
    // 0x3b6888: 0x8e4400b4  lw          $a0, 0xB4($s2)
    ctx->pc = 0x3b6888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
label_3b688c:
    // 0x3b688c: 0x24030110  addiu       $v1, $zero, 0x110
    ctx->pc = 0x3b688cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_3b6890:
    // 0x3b6890: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b6890u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b6894:
    // 0x3b6894: 0x832818  mult        $a1, $a0, $v1
    ctx->pc = 0x3b6894u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_3b6898:
    // 0x3b6898: 0xa28821  addu        $s1, $a1, $v0
    ctx->pc = 0x3b6898u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3b689c:
    // 0x3b689c: 0x1211006c  beq         $s0, $s1, . + 4 + (0x6C << 2)
label_3b68a0:
    if (ctx->pc == 0x3B68A0u) {
        ctx->pc = 0x3B68A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B689Cu;
        // 0x3b68a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B68A4u;
        goto label_3b68a4;
    }
    ctx->pc = 0x3B689Cu;
    {
        const bool branch_taken_0x3b689c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x3B68A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B689Cu;
        // 0x3b68a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b689c) {
            ctx->pc = 0x3B6A50u;
            goto label_3b6a50;
        }
    }
    ctx->pc = 0x3B68A4u;
label_3b68a4:
    // 0x3b68a4: 0x0  nop
    ctx->pc = 0x3b68a4u;
    // NOP
label_3b68a8:
    // 0x3b68a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3b68a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b68ac:
    // 0x3b68ac: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3b68acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b68b0:
    // 0x3b68b0: 0x280f809  jalr        $s4
label_3b68b4:
    if (ctx->pc == 0x3B68B4u) {
        ctx->pc = 0x3B68B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B68B0u;
        // 0x3b68b4: 0x26100110  addiu       $s0, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B68B8u;
        goto label_3b68b8;
    }
    ctx->pc = 0x3B68B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x3B68B8u);
        ctx->pc = 0x3B68B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B68B0u;
        // 0x3b68b4: 0x26100110  addiu       $s0, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B68B0u, 0x3B68B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B68B8u;
label_3b68b8:
    // 0x3b68b8: 0x1611fffb  bne         $s0, $s1, . + 4 + (-0x5 << 2)
label_3b68bc:
    if (ctx->pc == 0x3B68BCu) {
        ctx->pc = 0x3B68BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B68B8u;
        // 0x3b68bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B68C0u;
        goto label_3b68c0;
    }
    ctx->pc = 0x3B68B8u;
    {
        const bool branch_taken_0x3b68b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x3B68BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B68B8u;
        // 0x3b68bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b68b8) {
            ctx->pc = 0x3B68A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b68a8;
        }
    }
    ctx->pc = 0x3B68C0u;
label_3b68c0:
    // 0x3b68c0: 0x10000063  b           . + 4 + (0x63 << 2)
label_3b68c4:
    if (ctx->pc == 0x3B68C4u) {
        ctx->pc = 0x3B68C8u;
        goto label_3b68c8;
    }
    ctx->pc = 0x3B68C0u;
    {
        const bool branch_taken_0x3b68c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b68c0) {
            ctx->pc = 0x3B6A50u;
            goto label_3b6a50;
        }
    }
    ctx->pc = 0x3B68C8u;
label_3b68c8:
    // 0x3b68c8: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x3b68c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3b68cc:
    // 0x3b68cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3b68ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b68d0:
    // 0x3b68d0: 0x27a50054  addiu       $a1, $sp, 0x54
    ctx->pc = 0x3b68d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_3b68d4:
    // 0x3b68d4: 0xc103468  jal         func_40D1A0
label_3b68d8:
    if (ctx->pc == 0x3B68D8u) {
        ctx->pc = 0x3B68D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B68D4u;
        // 0x3b68d8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B68DCu;
        goto label_3b68dc;
    }
    ctx->pc = 0x3B68D4u;
    SET_GPR_U32(ctx, 31, 0x3B68DCu);
    ctx->pc = 0x3B68D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B68D4u;
    // 0x3b68d8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x3B68D4u, 0x3B68DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B68DCu;
label_3b68dc:
    // 0x3b68dc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3b68e0:
    if (ctx->pc == 0x3B68E0u) {
        ctx->pc = 0x3B68E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B68DCu;
        // 0x3b68e0: 0x8fa40054  lw          $a0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B68E4u;
        goto label_3b68e4;
    }
    ctx->pc = 0x3B68DCu;
    {
        const bool branch_taken_0x3b68dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B68E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B68DCu;
        // 0x3b68e0: 0x8fa40054  lw          $a0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b68dc) {
            ctx->pc = 0x3B68ECu;
            goto label_3b68ec;
        }
    }
    ctx->pc = 0x3B68E4u;
label_3b68e4:
    // 0x3b68e4: 0x1000002b  b           . + 4 + (0x2B << 2)
label_3b68e8:
    if (ctx->pc == 0x3B68E8u) {
        ctx->pc = 0x3B68E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B68E4u;
        // 0x3b68e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B68ECu;
        goto label_3b68ec;
    }
    ctx->pc = 0x3B68E4u;
    {
        const bool branch_taken_0x3b68e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B68E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B68E4u;
        // 0x3b68e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b68e4) {
            ctx->pc = 0x3B6994u;
            goto label_3b6994;
        }
    }
    ctx->pc = 0x3B68ECu;
label_3b68ec:
    // 0x3b68ec: 0x10800027  beqz        $a0, . + 4 + (0x27 << 2)
label_3b68f0:
    if (ctx->pc == 0x3B68F0u) {
        ctx->pc = 0x3B68F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B68ECu;
        // 0x3b68f0: 0xafa40014  sw          $a0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B68F4u;
        goto label_3b68f4;
    }
    ctx->pc = 0x3B68ECu;
    {
        const bool branch_taken_0x3b68ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B68F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B68ECu;
        // 0x3b68f0: 0xafa40014  sw          $a0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b68ec) {
            ctx->pc = 0x3B698Cu;
            goto label_3b698c;
        }
    }
    ctx->pc = 0x3B68F4u;
label_3b68f4:
    // 0x3b68f4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3b68f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3b68f8:
    // 0x3b68f8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3b68f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3b68fc:
    // 0x3b68fc: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x3b68fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_3b6900:
    // 0x3b6900: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3b6900u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3b6904:
    // 0x3b6904: 0x40f809  jalr        $v0
label_3b6908:
    if (ctx->pc == 0x3B6908u) {
        ctx->pc = 0x3B6908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6904u;
        // 0x3b6908: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B690Cu;
        goto label_3b690c;
    }
    ctx->pc = 0x3B6904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B690Cu);
        ctx->pc = 0x3B6908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6904u;
        // 0x3b6908: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B6904u, 0x3B690Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B690Cu;
label_3b690c:
    // 0x3b690c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_3b6910:
    if (ctx->pc == 0x3B6910u) {
        ctx->pc = 0x3B6910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B690Cu;
        // 0x3b6910: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6914u;
        goto label_3b6914;
    }
    ctx->pc = 0x3B690Cu;
    {
        const bool branch_taken_0x3b690c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B6910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B690Cu;
        // 0x3b6910: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b690c) {
            ctx->pc = 0x3B6948u;
            goto label_3b6948;
        }
    }
    ctx->pc = 0x3B6914u;
label_3b6914:
    // 0x3b6914: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x3b6914u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_3b6918:
    // 0x3b6918: 0x24020190  addiu       $v0, $zero, 0x190
    ctx->pc = 0x3b6918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_3b691c:
    // 0x3b691c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3b691cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_3b6920:
    // 0x3b6920: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x3b6920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_3b6924:
    // 0x3b6924: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3b6924u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3b6928:
    // 0x3b6928: 0xc1035f6  jal         func_40D7D8
label_3b692c:
    if (ctx->pc == 0x3B692Cu) {
        ctx->pc = 0x3B692Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6928u;
        // 0x3b692c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6930u;
        goto label_3b6930;
    }
    ctx->pc = 0x3B6928u;
    SET_GPR_U32(ctx, 31, 0x3B6930u);
    ctx->pc = 0x3B692Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6928u;
    // 0x3b692c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x3B6928u, 0x3B6930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6930u;
label_3b6930:
    // 0x3b6930: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x3b6930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_3b6934:
    // 0x3b6934: 0xc103628  jal         func_40D8A0
label_3b6938:
    if (ctx->pc == 0x3B6938u) {
        ctx->pc = 0x3B6938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6934u;
        // 0x3b6938: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B693Cu;
        goto label_3b693c;
    }
    ctx->pc = 0x3B6934u;
    SET_GPR_U32(ctx, 31, 0x3B693Cu);
    ctx->pc = 0x3B6938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6934u;
    // 0x3b6938: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x3B6934u, 0x3B693Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B693Cu;
label_3b693c:
    // 0x3b693c: 0x10000015  b           . + 4 + (0x15 << 2)
label_3b6940:
    if (ctx->pc == 0x3B6940u) {
        ctx->pc = 0x3B6940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B693Cu;
        // 0x3b6940: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6944u;
        goto label_3b6944;
    }
    ctx->pc = 0x3B693Cu;
    {
        const bool branch_taken_0x3b693c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B693Cu;
        // 0x3b6940: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b693c) {
            ctx->pc = 0x3B6994u;
            goto label_3b6994;
        }
    }
    ctx->pc = 0x3B6944u;
label_3b6944:
    // 0x3b6944: 0x0  nop
    ctx->pc = 0x3b6944u;
    // NOP
label_3b6948:
    // 0x3b6948: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x3b6948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_3b694c:
    // 0x3b694c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_3b6950:
    if (ctx->pc == 0x3B6950u) {
        ctx->pc = 0x3B6950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B694Cu;
        // 0x3b6950: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6954u;
        goto label_3b6954;
    }
    ctx->pc = 0x3B694Cu;
    {
        const bool branch_taken_0x3b694c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B694Cu;
        // 0x3b6950: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b694c) {
            ctx->pc = 0x3B6990u;
            goto label_3b6990;
        }
    }
    ctx->pc = 0x3B6954u;
label_3b6954:
    // 0x3b6954: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3b6954u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b6958:
    // 0x3b6958: 0xc0ee1f6  jal         func_3B87D8
label_3b695c:
    if (ctx->pc == 0x3B695Cu) {
        ctx->pc = 0x3B695Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6958u;
        // 0x3b695c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6960u;
        goto label_3b6960;
    }
    ctx->pc = 0x3B6958u;
    SET_GPR_U32(ctx, 31, 0x3B6960u);
    ctx->pc = 0x3B695Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6958u;
    // 0x3b695c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B87D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B87D8u, 0x3B6958u, 0x3B6960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6960u;
label_3b6960:
    // 0x3b6960: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x3b6960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3b6964:
    // 0x3b6964: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x3b6964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_3b6968:
    // 0x3b6968: 0x1040ffde  beqz        $v0, . + 4 + (-0x22 << 2)
label_3b696c:
    if (ctx->pc == 0x3B696Cu) {
        ctx->pc = 0x3B696Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6968u;
        // 0x3b696c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6970u;
        goto label_3b6970;
    }
    ctx->pc = 0x3B6968u;
    {
        const bool branch_taken_0x3b6968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B696Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6968u;
        // 0x3b696c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6968) {
            ctx->pc = 0x3B68E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b68e4;
        }
    }
    ctx->pc = 0x3B6970u;
label_3b6970:
    // 0x3b6970: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x3b6970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_3b6974:
    // 0x3b6974: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3b6974u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3b6978:
    // 0x3b6978: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x3b6978u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3b697c:
    // 0x3b697c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_3b6980:
    if (ctx->pc == 0x3B6980u) {
        ctx->pc = 0x3B6980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B697Cu;
        // 0x3b6980: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6984u;
        goto label_3b6984;
    }
    ctx->pc = 0x3B697Cu;
    {
        const bool branch_taken_0x3b697c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B6980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B697Cu;
        // 0x3b6980: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b697c) {
            ctx->pc = 0x3B6958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b6958;
        }
    }
    ctx->pc = 0x3B6984u;
label_3b6984:
    // 0x3b6984: 0x10000003  b           . + 4 + (0x3 << 2)
label_3b6988:
    if (ctx->pc == 0x3B6988u) {
        ctx->pc = 0x3B6988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6984u;
        // 0x3b6988: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B698Cu;
        goto label_3b698c;
    }
    ctx->pc = 0x3B6984u;
    {
        const bool branch_taken_0x3b6984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6984u;
        // 0x3b6988: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6984) {
            ctx->pc = 0x3B6994u;
            goto label_3b6994;
        }
    }
    ctx->pc = 0x3B698Cu;
label_3b698c:
    // 0x3b698c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x3b698cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_3b6990:
    // 0x3b6990: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x3b6990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3b6994:
    // 0x3b6994: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_3b6998:
    if (ctx->pc == 0x3B6998u) {
        ctx->pc = 0x3B6998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6994u;
        // 0x3b6998: 0x8e4400b0  lw          $a0, 0xB0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B699Cu;
        goto label_3b699c;
    }
    ctx->pc = 0x3B6994u;
    {
        const bool branch_taken_0x3b6994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b6994) {
            ctx->pc = 0x3B6998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B6994u;
            // 0x3b6998: 0x8e4400b0  lw          $a0, 0xB0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B69A4u;
            goto label_3b69a4;
        }
    }
    ctx->pc = 0x3B699Cu;
label_3b699c:
    // 0x3b699c: 0x1000013b  b           . + 4 + (0x13B << 2)
label_3b69a0:
    if (ctx->pc == 0x3B69A0u) {
        ctx->pc = 0x3B69A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B699Cu;
        // 0x3b69a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B69A4u;
        goto label_3b69a4;
    }
    ctx->pc = 0x3B699Cu;
    {
        const bool branch_taken_0x3b699c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B69A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B699Cu;
        // 0x3b69a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b699c) {
            ctx->pc = 0x3B6E8Cu;
            goto label_3b6e8c;
        }
    }
    ctx->pc = 0x3B69A4u;
label_3b69a4:
    // 0x3b69a4: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x3b69a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3b69a8:
    // 0x3b69a8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x3b69a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_3b69ac:
    // 0x3b69ac: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x3b69acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
label_3b69b0:
    // 0x3b69b0: 0x24548048  addiu       $s4, $v0, -0x7FB8
    ctx->pc = 0x3b69b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934600));
label_3b69b4:
    // 0x3b69b4: 0xc1036d2  jal         func_40DB48
label_3b69b8:
    if (ctx->pc == 0x3B69B8u) {
        ctx->pc = 0x3B69B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B69B4u;
        // 0x3b69b8: 0xafb30020  sw          $s3, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B69BCu;
        goto label_3b69bc;
    }
    ctx->pc = 0x3B69B4u;
    SET_GPR_U32(ctx, 31, 0x3B69BCu);
    ctx->pc = 0x3B69B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B69B4u;
    // 0x3b69b8: 0xafb30020  sw          $s3, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3B69B4u, 0x3B69BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B69BCu;
label_3b69bc:
    // 0x3b69bc: 0x8e4400b4  lw          $a0, 0xB4($s2)
    ctx->pc = 0x3b69bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
label_3b69c0:
    // 0x3b69c0: 0x24030110  addiu       $v1, $zero, 0x110
    ctx->pc = 0x3b69c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_3b69c4:
    // 0x3b69c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b69c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b69c8:
    // 0x3b69c8: 0x832818  mult        $a1, $a0, $v1
    ctx->pc = 0x3b69c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_3b69cc:
    // 0x3b69cc: 0xa28821  addu        $s1, $a1, $v0
    ctx->pc = 0x3b69ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3b69d0:
    // 0x3b69d0: 0x1211000a  beq         $s0, $s1, . + 4 + (0xA << 2)
label_3b69d4:
    if (ctx->pc == 0x3B69D4u) {
        ctx->pc = 0x3B69D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B69D0u;
        // 0x3b69d4: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B69D8u;
        goto label_3b69d8;
    }
    ctx->pc = 0x3B69D0u;
    {
        const bool branch_taken_0x3b69d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x3B69D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B69D0u;
        // 0x3b69d4: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b69d0) {
            ctx->pc = 0x3B69FCu;
            goto label_3b69fc;
        }
    }
    ctx->pc = 0x3B69D8u;
label_3b69d8:
    // 0x3b69d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b69d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b69dc:
    // 0x3b69dc: 0x0  nop
    ctx->pc = 0x3b69dcu;
    // NOP
label_3b69e0:
    // 0x3b69e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3b69e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b69e4:
    // 0x3b69e4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3b69e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b69e8:
    // 0x3b69e8: 0x280f809  jalr        $s4
label_3b69ec:
    if (ctx->pc == 0x3B69ECu) {
        ctx->pc = 0x3B69ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B69E8u;
        // 0x3b69ec: 0x26100110  addiu       $s0, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B69F0u;
        goto label_3b69f0;
    }
    ctx->pc = 0x3B69E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x3B69F0u);
        ctx->pc = 0x3B69ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B69E8u;
        // 0x3b69ec: 0x26100110  addiu       $s0, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B69E8u, 0x3B69F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B69F0u;
label_3b69f0:
    // 0x3b69f0: 0x1611fffb  bne         $s0, $s1, . + 4 + (-0x5 << 2)
label_3b69f4:
    if (ctx->pc == 0x3B69F4u) {
        ctx->pc = 0x3B69F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B69F0u;
        // 0x3b69f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B69F8u;
        goto label_3b69f8;
    }
    ctx->pc = 0x3B69F0u;
    {
        const bool branch_taken_0x3b69f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x3B69F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B69F0u;
        // 0x3b69f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b69f0) {
            ctx->pc = 0x3B69E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b69e0;
        }
    }
    ctx->pc = 0x3B69F8u;
label_3b69f8:
    // 0x3b69f8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x3b69f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_3b69fc:
    // 0x3b69fc: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_3b6a00:
    if (ctx->pc == 0x3B6A00u) {
        ctx->pc = 0x3B6A04u;
        goto label_3b6a04;
    }
    ctx->pc = 0x3B69FCu;
    {
        const bool branch_taken_0x3b69fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b69fc) {
            ctx->pc = 0x3B6A50u;
            goto label_3b6a50;
        }
    }
    ctx->pc = 0x3B6A04u;
label_3b6a04:
    // 0x3b6a04: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_3b6a08:
    if (ctx->pc == 0x3B6A08u) {
        ctx->pc = 0x3B6A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6A04u;
        // 0x3b6a08: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6A0Cu;
        goto label_3b6a0c;
    }
    ctx->pc = 0x3B6A04u;
    {
        const bool branch_taken_0x3b6a04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6A04u;
        // 0x3b6a08: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6a04) {
            ctx->pc = 0x3B6A3Cu;
            goto label_3b6a3c;
        }
    }
    ctx->pc = 0x3B6A0Cu;
label_3b6a0c:
    // 0x3b6a0c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3b6a0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b6a10:
    // 0x3b6a10: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x3b6a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3b6a14:
    // 0x3b6a14: 0x0  nop
    ctx->pc = 0x3b6a14u;
    // NOP
label_3b6a18:
    // 0x3b6a18: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3b6a18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3b6a1c:
    // 0x3b6a1c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3b6a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_3b6a20:
    // 0x3b6a20: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3b6a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3b6a24:
    // 0x3b6a24: 0xc0ee520  jal         func_3B9480
label_3b6a28:
    if (ctx->pc == 0x3B6A28u) {
        ctx->pc = 0x3B6A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6A24u;
        // 0x3b6a28: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6A2Cu;
        goto label_3b6a2c;
    }
    ctx->pc = 0x3B6A24u;
    SET_GPR_U32(ctx, 31, 0x3B6A2Cu);
    ctx->pc = 0x3B6A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6A24u;
    // 0x3b6a28: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9480u, 0x3B6A24u, 0x3B6A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6A2Cu;
label_3b6a2c:
    // 0x3b6a2c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x3b6a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_3b6a30:
    // 0x3b6a30: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x3b6a30u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3b6a34:
    // 0x3b6a34: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_3b6a38:
    if (ctx->pc == 0x3B6A38u) {
        ctx->pc = 0x3B6A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6A34u;
        // 0x3b6a38: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6A3Cu;
        goto label_3b6a3c;
    }
    ctx->pc = 0x3B6A34u;
    {
        const bool branch_taken_0x3b6a34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B6A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6A34u;
        // 0x3b6a38: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6a34) {
            ctx->pc = 0x3B6A18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b6a18;
        }
    }
    ctx->pc = 0x3B6A3Cu;
label_3b6a3c:
    // 0x3b6a3c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3b6a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3b6a40:
    // 0x3b6a40: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x3b6a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_3b6a44:
    // 0x3b6a44: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x3b6a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_3b6a48:
    // 0x3b6a48: 0x60f809  jalr        $v1
label_3b6a4c:
    if (ctx->pc == 0x3B6A4Cu) {
        ctx->pc = 0x3B6A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6A48u;
        // 0x3b6a4c: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6A50u;
        goto label_3b6a50;
    }
    ctx->pc = 0x3B6A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3B6A50u);
        ctx->pc = 0x3B6A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6A48u;
        // 0x3b6a4c: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B6A48u, 0x3B6A50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B6A50u;
label_3b6a50:
    // 0x3b6a50: 0xc1036d2  jal         func_40DB48
label_3b6a54:
    if (ctx->pc == 0x3B6A54u) {
        ctx->pc = 0x3B6A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6A50u;
        // 0x3b6a54: 0x8e4400b8  lw          $a0, 0xB8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6A58u;
        goto label_3b6a58;
    }
    ctx->pc = 0x3B6A50u;
    SET_GPR_U32(ctx, 31, 0x3B6A58u);
    ctx->pc = 0x3B6A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6A50u;
    // 0x3b6a54: 0x8e4400b8  lw          $a0, 0xB8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3B6A50u, 0x3B6A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6A58u;
label_3b6a58:
    // 0x3b6a58: 0x8e4300b4  lw          $v1, 0xB4($s2)
    ctx->pc = 0x3b6a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
label_3b6a5c:
    // 0x3b6a5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b6a5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b6a60:
    // 0x3b6a60: 0x8e4400b0  lw          $a0, 0xB0($s2)
    ctx->pc = 0x3b6a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_3b6a64:
    // 0x3b6a64: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3b6a64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_3b6a68:
    // 0x3b6a68: 0xc1036d2  jal         func_40DB48
label_3b6a6c:
    if (ctx->pc == 0x3B6A6Cu) {
        ctx->pc = 0x3B6A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6A68u;
        // 0x3b6a6c: 0x438821  addu        $s1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6A70u;
        goto label_3b6a70;
    }
    ctx->pc = 0x3B6A68u;
    SET_GPR_U32(ctx, 31, 0x3B6A70u);
    ctx->pc = 0x3B6A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6A68u;
    // 0x3b6a6c: 0x438821  addu        $s1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3B6A68u, 0x3B6A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6A70u;
label_3b6a70:
    // 0x3b6a70: 0x12110028  beq         $s0, $s1, . + 4 + (0x28 << 2)
label_3b6a74:
    if (ctx->pc == 0x3B6A74u) {
        ctx->pc = 0x3B6A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6A70u;
        // 0x3b6a74: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6A78u;
        goto label_3b6a78;
    }
    ctx->pc = 0x3B6A70u;
    {
        const bool branch_taken_0x3b6a70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x3B6A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6A70u;
        // 0x3b6a74: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6a70) {
            ctx->pc = 0x3B6B14u;
            goto label_3b6b14;
        }
    }
    ctx->pc = 0x3B6A78u;
label_3b6a78:
    // 0x3b6a78: 0x2301023  subu        $v0, $s1, $s0
    ctx->pc = 0x3b6a78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_3b6a7c:
    // 0x3b6a7c: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x3b6a7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_3b6a80:
    // 0x3b6a80: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
label_3b6a84:
    if (ctx->pc == 0x3B6A84u) {
        ctx->pc = 0x3B6A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6A80u;
        // 0x3b6a84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6A88u;
        goto label_3b6a88;
    }
    ctx->pc = 0x3B6A80u;
    {
        const bool branch_taken_0x3b6a80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6A80u;
        // 0x3b6a84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6a80) {
            ctx->pc = 0x3B6AE0u;
            goto label_3b6ae0;
        }
    }
    ctx->pc = 0x3B6A88u;
label_3b6a88:
    // 0x3b6a88: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x3b6a88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
label_3b6a8c:
    // 0x3b6a8c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_3b6a90:
    if (ctx->pc == 0x3B6A90u) {
        ctx->pc = 0x3B6A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6A8Cu;
        // 0x3b6a90: 0xac860000  sw          $a2, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6A94u;
        goto label_3b6a94;
    }
    ctx->pc = 0x3B6A8Cu;
    {
        const bool branch_taken_0x3b6a8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b6a8c) {
            ctx->pc = 0x3B6A90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B6A8Cu;
            // 0x3b6a90: 0xac860000  sw          $a2, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B6AD0u;
            goto label_3b6ad0;
        }
    }
    ctx->pc = 0x3B6A94u;
label_3b6a94:
    // 0x3b6a94: 0x28620011  slti        $v0, $v1, 0x11
    ctx->pc = 0x3b6a94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)17) ? 1 : 0);
label_3b6a98:
    // 0x3b6a98: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_3b6a9c:
    if (ctx->pc == 0x3B6A9Cu) {
        ctx->pc = 0x3B6A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6A98u;
        // 0x3b6a9c: 0xac860000  sw          $a2, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6AA0u;
        goto label_3b6aa0;
    }
    ctx->pc = 0x3B6A98u;
    {
        const bool branch_taken_0x3b6a98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b6a98) {
            ctx->pc = 0x3B6A9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B6A98u;
            // 0x3b6a9c: 0xac860000  sw          $a2, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B6AC0u;
            goto label_3b6ac0;
        }
    }
    ctx->pc = 0x3B6AA0u;
label_3b6aa0:
    // 0x3b6aa0: 0x28620019  slti        $v0, $v1, 0x19
    ctx->pc = 0x3b6aa0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)25) ? 1 : 0);
label_3b6aa4:
    // 0x3b6aa4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_3b6aa8:
    if (ctx->pc == 0x3B6AA8u) {
        ctx->pc = 0x3B6AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6AA4u;
        // 0x3b6aa8: 0x26020008  addiu       $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6AACu;
        goto label_3b6aac;
    }
    ctx->pc = 0x3B6AA4u;
    {
        const bool branch_taken_0x3b6aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6AA4u;
        // 0x3b6aa8: 0x26020008  addiu       $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6aa4) {
            ctx->pc = 0x3B6AE0u;
            goto label_3b6ae0;
        }
    }
    ctx->pc = 0x3B6AACu;
label_3b6aac:
    // 0x3b6aac: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x3b6aacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
label_3b6ab0:
    // 0x3b6ab0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b6ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b6ab4:
    // 0x3b6ab4: 0x24c60110  addiu       $a2, $a2, 0x110
    ctx->pc = 0x3b6ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 272));
label_3b6ab8:
    // 0x3b6ab8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b6ab8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b6abc:
    // 0x3b6abc: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x3b6abcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
label_3b6ac0:
    // 0x3b6ac0: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x3b6ac0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_3b6ac4:
    // 0x3b6ac4: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x3b6ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_3b6ac8:
    // 0x3b6ac8: 0x24c60110  addiu       $a2, $a2, 0x110
    ctx->pc = 0x3b6ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 272));
label_3b6acc:
    // 0x3b6acc: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x3b6accu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
label_3b6ad0:
    // 0x3b6ad0: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x3b6ad0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_3b6ad4:
    // 0x3b6ad4: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x3b6ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_3b6ad8:
    // 0x3b6ad8: 0x1211000e  beq         $s0, $s1, . + 4 + (0xE << 2)
label_3b6adc:
    if (ctx->pc == 0x3B6ADCu) {
        ctx->pc = 0x3B6ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6AD8u;
        // 0x3b6adc: 0x24c60110  addiu       $a2, $a2, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6AE0u;
        goto label_3b6ae0;
    }
    ctx->pc = 0x3B6AD8u;
    {
        const bool branch_taken_0x3b6ad8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x3B6ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6AD8u;
        // 0x3b6adc: 0x24c60110  addiu       $a2, $a2, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6ad8) {
            ctx->pc = 0x3B6B14u;
            goto label_3b6b14;
        }
    }
    ctx->pc = 0x3B6AE0u;
label_3b6ae0:
    // 0x3b6ae0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3b6ae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b6ae4:
    // 0x3b6ae4: 0x0  nop
    ctx->pc = 0x3b6ae4u;
    // NOP
label_3b6ae8:
    // 0x3b6ae8: 0x24c20110  addiu       $v0, $a2, 0x110
    ctx->pc = 0x3b6ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 272));
label_3b6aec:
    // 0x3b6aec: 0x24c30220  addiu       $v1, $a2, 0x220
    ctx->pc = 0x3b6aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 544));
label_3b6af0:
    // 0x3b6af0: 0x24c40330  addiu       $a0, $a2, 0x330
    ctx->pc = 0x3b6af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 816));
label_3b6af4:
    // 0x3b6af4: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x3b6af4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_3b6af8:
    // 0x3b6af8: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x3b6af8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_3b6afc:
    // 0x3b6afc: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x3b6afcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_3b6b00:
    // 0x3b6b00: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x3b6b00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
label_3b6b04:
    // 0x3b6b04: 0x24c60440  addiu       $a2, $a2, 0x440
    ctx->pc = 0x3b6b04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1088));
label_3b6b08:
    // 0x3b6b08: 0xaca40018  sw          $a0, 0x18($a1)
    ctx->pc = 0x3b6b08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 4));
label_3b6b0c:
    // 0x3b6b0c: 0x1611fff6  bne         $s0, $s1, . + 4 + (-0xA << 2)
label_3b6b10:
    if (ctx->pc == 0x3B6B10u) {
        ctx->pc = 0x3B6B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6B0Cu;
        // 0x3b6b10: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6B14u;
        goto label_3b6b14;
    }
    ctx->pc = 0x3B6B0Cu;
    {
        const bool branch_taken_0x3b6b0c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x3B6B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6B0Cu;
        // 0x3b6b10: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6b0c) {
            ctx->pc = 0x3B6AE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b6ae8;
        }
    }
    ctx->pc = 0x3B6B14u;
label_3b6b14:
    // 0x3b6b14: 0xc1036d2  jal         func_40DB48
label_3b6b18:
    if (ctx->pc == 0x3B6B18u) {
        ctx->pc = 0x3B6B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6B14u;
        // 0x3b6b18: 0x8e4400b8  lw          $a0, 0xB8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6B1Cu;
        goto label_3b6b1c;
    }
    ctx->pc = 0x3B6B14u;
    SET_GPR_U32(ctx, 31, 0x3B6B1Cu);
    ctx->pc = 0x3B6B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6B14u;
    // 0x3b6b18: 0x8e4400b8  lw          $a0, 0xB8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3B6B14u, 0x3B6B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6B1Cu;
label_3b6b1c:
    // 0x3b6b1c: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x3b6b1cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b6b20:
    // 0x3b6b20: 0x8e4200b4  lw          $v0, 0xB4($s2)
    ctx->pc = 0x3b6b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
label_3b6b24:
    // 0x3b6b24: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3b6b24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3b6b28:
    // 0x3b6b28: 0x1625021  addu        $t2, $t3, $v0
    ctx->pc = 0x3b6b28u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_3b6b2c:
    // 0x3b6b2c: 0x116a00d2  beq         $t3, $t2, . + 4 + (0xD2 << 2)
label_3b6b30:
    if (ctx->pc == 0x3B6B30u) {
        ctx->pc = 0x3B6B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6B2Cu;
        // 0x3b6b30: 0x254cfff8  addiu       $t4, $t2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6B34u;
        goto label_3b6b34;
    }
    ctx->pc = 0x3B6B2Cu;
    {
        const bool branch_taken_0x3b6b2c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 10));
        ctx->pc = 0x3B6B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6B2Cu;
        // 0x3b6b30: 0x254cfff8  addiu       $t4, $t2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6b2c) {
            ctx->pc = 0x3B6E78u;
            goto label_3b6e78;
        }
    }
    ctx->pc = 0x3B6B34u;
label_3b6b34:
    // 0x3b6b34: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x3b6b34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_3b6b38:
    // 0x3b6b38: 0x1471023  subu        $v0, $t2, $a3
    ctx->pc = 0x3b6b38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
label_3b6b3c:
    // 0x3b6b3c: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x3b6b3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_3b6b40:
    // 0x3b6b40: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
label_3b6b44:
    if (ctx->pc == 0x3B6B44u) {
        ctx->pc = 0x3B6B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6B40u;
        // 0x3b6b44: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6B48u;
        goto label_3b6b48;
    }
    ctx->pc = 0x3B6B40u;
    {
        const bool branch_taken_0x3b6b40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6B40u;
        // 0x3b6b44: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6b40) {
            ctx->pc = 0x3B6BACu;
            goto label_3b6bac;
        }
    }
    ctx->pc = 0x3B6B48u;
label_3b6b48:
    // 0x3b6b48: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x3b6b48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
label_3b6b4c:
    // 0x3b6b4c: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_3b6b50:
    if (ctx->pc == 0x3B6B50u) {
        ctx->pc = 0x3B6B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6B4Cu;
        // 0x3b6b50: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6B54u;
        goto label_3b6b54;
    }
    ctx->pc = 0x3B6B4Cu;
    {
        const bool branch_taken_0x3b6b4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b6b4c) {
            ctx->pc = 0x3B6B50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B6B4Cu;
            // 0x3b6b50: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B6B98u;
            goto label_3b6b98;
        }
    }
    ctx->pc = 0x3B6B54u;
label_3b6b54:
    // 0x3b6b54: 0x28620011  slti        $v0, $v1, 0x11
    ctx->pc = 0x3b6b54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)17) ? 1 : 0);
label_3b6b58:
    // 0x3b6b58: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_3b6b5c:
    if (ctx->pc == 0x3B6B5Cu) {
        ctx->pc = 0x3B6B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6B58u;
        // 0x3b6b5c: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6B60u;
        goto label_3b6b60;
    }
    ctx->pc = 0x3B6B58u;
    {
        const bool branch_taken_0x3b6b58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b6b58) {
            ctx->pc = 0x3B6B5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B6B58u;
            // 0x3b6b5c: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B6B84u;
            goto label_3b6b84;
        }
    }
    ctx->pc = 0x3B6B60u;
label_3b6b60:
    // 0x3b6b60: 0x28620019  slti        $v0, $v1, 0x19
    ctx->pc = 0x3b6b60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)25) ? 1 : 0);
label_3b6b64:
    // 0x3b6b64: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_3b6b68:
    if (ctx->pc == 0x3B6B68u) {
        ctx->pc = 0x3B6B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6B64u;
        // 0x3b6b68: 0x24e30008  addiu       $v1, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6B6Cu;
        goto label_3b6b6c;
    }
    ctx->pc = 0x3B6B64u;
    {
        const bool branch_taken_0x3b6b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6B64u;
        // 0x3b6b68: 0x24e30008  addiu       $v1, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6b64) {
            ctx->pc = 0x3B6BACu;
            goto label_3b6bac;
        }
    }
    ctx->pc = 0x3B6B6Cu;
label_3b6b6c:
    // 0x3b6b6c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3b6b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3b6b70:
    // 0x3b6b70: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x3b6b70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3b6b74:
    // 0x3b6b74: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3b6b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3b6b78:
    // 0x3b6b78: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x3b6b78u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
label_3b6b7c:
    // 0x3b6b7c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x3b6b7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3b6b80:
    // 0x3b6b80: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3b6b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3b6b84:
    // 0x3b6b84: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x3b6b84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_3b6b88:
    // 0x3b6b88: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3b6b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3b6b8c:
    // 0x3b6b8c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x3b6b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_3b6b90:
    // 0x3b6b90: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x3b6b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_3b6b94:
    // 0x3b6b94: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3b6b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3b6b98:
    // 0x3b6b98: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x3b6b98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_3b6b9c:
    // 0x3b6b9c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3b6b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3b6ba0:
    // 0x3b6ba0: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x3b6ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_3b6ba4:
    // 0x3b6ba4: 0x10ea0014  beq         $a3, $t2, . + 4 + (0x14 << 2)
label_3b6ba8:
    if (ctx->pc == 0x3B6BA8u) {
        ctx->pc = 0x3B6BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6BA4u;
        // 0x3b6ba8: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6BACu;
        goto label_3b6bac;
    }
    ctx->pc = 0x3B6BA4u;
    {
        const bool branch_taken_0x3b6ba4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 10));
        ctx->pc = 0x3B6BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6BA4u;
        // 0x3b6ba8: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6ba4) {
            ctx->pc = 0x3B6BF8u;
            goto label_3b6bf8;
        }
    }
    ctx->pc = 0x3B6BACu;
label_3b6bac:
    // 0x3b6bac: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x3b6bacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3b6bb0:
    // 0x3b6bb0: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x3b6bb0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3b6bb4:
    // 0x3b6bb4: 0x0  nop
    ctx->pc = 0x3b6bb4u;
    // NOP
label_3b6bb8:
    // 0x3b6bb8: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x3b6bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_3b6bbc:
    // 0x3b6bbc: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x3b6bbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
label_3b6bc0:
    // 0x3b6bc0: 0x8d240008  lw          $a0, 0x8($t1)
    ctx->pc = 0x3b6bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
label_3b6bc4:
    // 0x3b6bc4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3b6bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3b6bc8:
    // 0x3b6bc8: 0x8d250010  lw          $a1, 0x10($t1)
    ctx->pc = 0x3b6bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
label_3b6bcc:
    // 0x3b6bcc: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x3b6bccu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
label_3b6bd0:
    // 0x3b6bd0: 0x8d260018  lw          $a2, 0x18($t1)
    ctx->pc = 0x3b6bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
label_3b6bd4:
    // 0x3b6bd4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3b6bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3b6bd8:
    // 0x3b6bd8: 0x25290020  addiu       $t1, $t1, 0x20
    ctx->pc = 0x3b6bd8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
label_3b6bdc:
    // 0x3b6bdc: 0xad03000c  sw          $v1, 0xC($t0)
    ctx->pc = 0x3b6bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 3));
label_3b6be0:
    // 0x3b6be0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3b6be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_3b6be4:
    // 0x3b6be4: 0xad020014  sw          $v0, 0x14($t0)
    ctx->pc = 0x3b6be4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 2));
label_3b6be8:
    // 0x3b6be8: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x3b6be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_3b6bec:
    // 0x3b6bec: 0xad03001c  sw          $v1, 0x1C($t0)
    ctx->pc = 0x3b6becu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 3));
label_3b6bf0:
    // 0x3b6bf0: 0x14eafff1  bne         $a3, $t2, . + 4 + (-0xF << 2)
label_3b6bf4:
    if (ctx->pc == 0x3B6BF4u) {
        ctx->pc = 0x3B6BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6BF0u;
        // 0x3b6bf4: 0x25080020  addiu       $t0, $t0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6BF8u;
        goto label_3b6bf8;
    }
    ctx->pc = 0x3B6BF0u;
    {
        const bool branch_taken_0x3b6bf0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 10));
        ctx->pc = 0x3B6BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6BF0u;
        // 0x3b6bf4: 0x25080020  addiu       $t0, $t0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6bf0) {
            ctx->pc = 0x3B6BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b6bb8;
        }
    }
    ctx->pc = 0x3B6BF8u;
label_3b6bf8:
    // 0x3b6bf8: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x3b6bf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_3b6bfc:
    // 0x3b6bfc: 0xec102b  sltu        $v0, $a3, $t4
    ctx->pc = 0x3b6bfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
label_3b6c00:
    // 0x3b6c00: 0x5040009e  beql        $v0, $zero, . + 4 + (0x9E << 2)
label_3b6c04:
    if (ctx->pc == 0x3B6C04u) {
        ctx->pc = 0x3B6C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6C00u;
        // 0x3b6c04: 0x8e430008  lw          $v1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6C08u;
        goto label_3b6c08;
    }
    ctx->pc = 0x3B6C00u;
    {
        const bool branch_taken_0x3b6c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b6c00) {
            ctx->pc = 0x3B6C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B6C00u;
            // 0x3b6c04: 0x8e430008  lw          $v1, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B6E7Cu;
            goto label_3b6e7c;
        }
    }
    ctx->pc = 0x3B6C08u;
label_3b6c08:
    // 0x3b6c08: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x3b6c08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_3b6c0c:
    // 0x3b6c0c: 0x24e60008  addiu       $a2, $a3, 0x8
    ctx->pc = 0x3b6c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_3b6c10:
    // 0x3b6c10: 0xca102b  sltu        $v0, $a2, $t2
    ctx->pc = 0x3b6c10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
label_3b6c14:
    // 0x3b6c14: 0x10400094  beqz        $v0, . + 4 + (0x94 << 2)
label_3b6c18:
    if (ctx->pc == 0x3B6C18u) {
        ctx->pc = 0x3B6C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6C14u;
        // 0x3b6c18: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6C1Cu;
        goto label_3b6c1c;
    }
    ctx->pc = 0x3B6C14u;
    {
        const bool branch_taken_0x3b6c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6C14u;
        // 0x3b6c18: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6c14) {
            ctx->pc = 0x3B6E68u;
            goto label_3b6e68;
        }
    }
    ctx->pc = 0x3B6C1Cu;
label_3b6c1c:
    // 0x3b6c1c: 0x1481823  subu        $v1, $t2, $t0
    ctx->pc = 0x3b6c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
label_3b6c20:
    // 0x3b6c20: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x3b6c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3b6c24:
    // 0x3b6c24: 0x10a102a  slt         $v0, $t0, $t2
    ctx->pc = 0x3b6c24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_3b6c28:
    // 0x3b6c28: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_3b6c2c:
    if (ctx->pc == 0x3B6C2Cu) {
        ctx->pc = 0x3B6C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6C28u;
        // 0x3b6c2c: 0x3063001f  andi        $v1, $v1, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6C30u;
        goto label_3b6c30;
    }
    ctx->pc = 0x3B6C28u;
    {
        const bool branch_taken_0x3b6c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6C28u;
        // 0x3b6c2c: 0x3063001f  andi        $v1, $v1, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6c28) {
            ctx->pc = 0x3B6CF4u;
            goto label_3b6cf4;
        }
    }
    ctx->pc = 0x3B6C30u;
label_3b6c30:
    // 0x3b6c30: 0x10600044  beqz        $v1, . + 4 + (0x44 << 2)
label_3b6c34:
    if (ctx->pc == 0x3B6C34u) {
        ctx->pc = 0x3B6C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6C30u;
        // 0x3b6c34: 0x28620009  slti        $v0, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6C38u;
        goto label_3b6c38;
    }
    ctx->pc = 0x3B6C30u;
    {
        const bool branch_taken_0x3b6c30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6C30u;
        // 0x3b6c34: 0x28620009  slti        $v0, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6c30) {
            ctx->pc = 0x3B6D44u;
            goto label_3b6d44;
        }
    }
    ctx->pc = 0x3B6C38u;
label_3b6c38:
    // 0x3b6c38: 0x5440002f  bnel        $v0, $zero, . + 4 + (0x2F << 2)
label_3b6c3c:
    if (ctx->pc == 0x3B6C3Cu) {
        ctx->pc = 0x3B6C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6C38u;
        // 0x3b6c3c: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6C40u;
        goto label_3b6c40;
    }
    ctx->pc = 0x3B6C38u;
    {
        const bool branch_taken_0x3b6c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b6c38) {
            ctx->pc = 0x3B6C3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B6C38u;
            // 0x3b6c3c: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B6CF8u;
            goto label_3b6cf8;
        }
    }
    ctx->pc = 0x3B6C40u;
label_3b6c40:
    // 0x3b6c40: 0x28620011  slti        $v0, $v1, 0x11
    ctx->pc = 0x3b6c40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)17) ? 1 : 0);
label_3b6c44:
    // 0x3b6c44: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_3b6c48:
    if (ctx->pc == 0x3B6C48u) {
        ctx->pc = 0x3B6C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6C44u;
        // 0x3b6c48: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6C4Cu;
        goto label_3b6c4c;
    }
    ctx->pc = 0x3B6C44u;
    {
        const bool branch_taken_0x3b6c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b6c44) {
            ctx->pc = 0x3B6C48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B6C44u;
            // 0x3b6c48: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B6CACu;
            goto label_3b6cac;
        }
    }
    ctx->pc = 0x3B6C4Cu;
label_3b6c4c:
    // 0x3b6c4c: 0x28620019  slti        $v0, $v1, 0x19
    ctx->pc = 0x3b6c4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)25) ? 1 : 0);
label_3b6c50:
    // 0x3b6c50: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
label_3b6c54:
    if (ctx->pc == 0x3B6C54u) {
        ctx->pc = 0x3B6C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6C50u;
        // 0x3b6c54: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6C58u;
        goto label_3b6c58;
    }
    ctx->pc = 0x3B6C50u;
    {
        const bool branch_taken_0x3b6c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6C50u;
        // 0x3b6c54: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6c50) {
            ctx->pc = 0x3B6D48u;
            goto label_3b6d48;
        }
    }
    ctx->pc = 0x3B6C58u;
label_3b6c58:
    // 0x3b6c58: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x3b6c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_3b6c5c:
    // 0x3b6c5c: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x3b6c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_3b6c60:
    // 0x3b6c60: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3b6c60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3b6c64:
    // 0x3b6c64: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_3b6c68:
    if (ctx->pc == 0x3B6C68u) {
        ctx->pc = 0x3B6C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6C64u;
        // 0x3b6c68: 0x24e20010  addiu       $v0, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6C6Cu;
        goto label_3b6c6c;
    }
    ctx->pc = 0x3B6C64u;
    {
        const bool branch_taken_0x3b6c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6C64u;
        // 0x3b6c68: 0x24e20010  addiu       $v0, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6c64) {
            ctx->pc = 0x3B6CA0u;
            goto label_3b6ca0;
        }
    }
    ctx->pc = 0x3B6C6Cu;
label_3b6c6c:
    // 0x3b6c6c: 0x68eb0007  ldl         $t3, 0x7($a3)
    ctx->pc = 0x3b6c6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_3b6c70:
    // 0x3b6c70: 0x6ceb0000  ldr         $t3, 0x0($a3)
    ctx->pc = 0x3b6c70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_3b6c74:
    // 0x3b6c74: 0xb3ab0047  sdl         $t3, 0x47($sp)
    ctx->pc = 0x3b6c74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b6c78:
    // 0x3b6c78: 0xb7ab0040  sdr         $t3, 0x40($sp)
    ctx->pc = 0x3b6c78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b6c7c:
    // 0x3b6c7c: 0x68e4000f  ldl         $a0, 0xF($a3)
    ctx->pc = 0x3b6c7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_3b6c80:
    // 0x3b6c80: 0x6ce40008  ldr         $a0, 0x8($a3)
    ctx->pc = 0x3b6c80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_3b6c84:
    // 0x3b6c84: 0xb0e40007  sdl         $a0, 0x7($a3)
    ctx->pc = 0x3b6c84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b6c88:
    // 0x3b6c88: 0xb4e40000  sdr         $a0, 0x0($a3)
    ctx->pc = 0x3b6c88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b6c8c:
    // 0x3b6c8c: 0x6ba20047  ldl         $v0, 0x47($sp)
    ctx->pc = 0x3b6c8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_3b6c90:
    // 0x3b6c90: 0x6fa20040  ldr         $v0, 0x40($sp)
    ctx->pc = 0x3b6c90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_3b6c94:
    // 0x3b6c94: 0xb0e2000f  sdl         $v0, 0xF($a3)
    ctx->pc = 0x3b6c94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b6c98:
    // 0x3b6c98: 0xb4e20008  sdr         $v0, 0x8($a3)
    ctx->pc = 0x3b6c98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b6c9c:
    // 0x3b6c9c: 0x24e20010  addiu       $v0, $a3, 0x10
    ctx->pc = 0x3b6c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_3b6ca0:
    // 0x3b6ca0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b6ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b6ca4:
    // 0x3b6ca4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3b6ca4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b6ca8:
    // 0x3b6ca8: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x3b6ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_3b6cac:
    // 0x3b6cac: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3b6cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3b6cb0:
    // 0x3b6cb0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3b6cb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3b6cb4:
    // 0x3b6cb4: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_3b6cb8:
    if (ctx->pc == 0x3B6CB8u) {
        ctx->pc = 0x3B6CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6CB4u;
        // 0x3b6cb8: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6CBCu;
        goto label_3b6cbc;
    }
    ctx->pc = 0x3B6CB4u;
    {
        const bool branch_taken_0x3b6cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b6cb4) {
            ctx->pc = 0x3B6CB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B6CB4u;
            // 0x3b6cb8: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B6CF0u;
            goto label_3b6cf0;
        }
    }
    ctx->pc = 0x3B6CBCu;
label_3b6cbc:
    // 0x3b6cbc: 0x68eb0007  ldl         $t3, 0x7($a3)
    ctx->pc = 0x3b6cbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_3b6cc0:
    // 0x3b6cc0: 0x6ceb0000  ldr         $t3, 0x0($a3)
    ctx->pc = 0x3b6cc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_3b6cc4:
    // 0x3b6cc4: 0xb3ab0047  sdl         $t3, 0x47($sp)
    ctx->pc = 0x3b6cc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b6cc8:
    // 0x3b6cc8: 0xb7ab0040  sdr         $t3, 0x40($sp)
    ctx->pc = 0x3b6cc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b6ccc:
    // 0x3b6ccc: 0x68850007  ldl         $a1, 0x7($a0)
    ctx->pc = 0x3b6cccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_3b6cd0:
    // 0x3b6cd0: 0x6c850000  ldr         $a1, 0x0($a0)
    ctx->pc = 0x3b6cd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_3b6cd4:
    // 0x3b6cd4: 0xb0e50007  sdl         $a1, 0x7($a3)
    ctx->pc = 0x3b6cd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b6cd8:
    // 0x3b6cd8: 0xb4e50000  sdr         $a1, 0x0($a3)
    ctx->pc = 0x3b6cd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b6cdc:
    // 0x3b6cdc: 0x6ba30047  ldl         $v1, 0x47($sp)
    ctx->pc = 0x3b6cdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_3b6ce0:
    // 0x3b6ce0: 0x6fa30040  ldr         $v1, 0x40($sp)
    ctx->pc = 0x3b6ce0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_3b6ce4:
    // 0x3b6ce4: 0xb0830007  sdl         $v1, 0x7($a0)
    ctx->pc = 0x3b6ce4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b6ce8:
    // 0x3b6ce8: 0xb4830000  sdr         $v1, 0x0($a0)
    ctx->pc = 0x3b6ce8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b6cec:
    // 0x3b6cec: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x3b6cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_3b6cf0:
    // 0x3b6cf0: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x3b6cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_3b6cf4:
    // 0x3b6cf4: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x3b6cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_3b6cf8:
    // 0x3b6cf8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3b6cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3b6cfc:
    // 0x3b6cfc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3b6cfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3b6d00:
    // 0x3b6d00: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_3b6d04:
    if (ctx->pc == 0x3B6D04u) {
        ctx->pc = 0x3B6D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6D00u;
        // 0x3b6d04: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6D08u;
        goto label_3b6d08;
    }
    ctx->pc = 0x3B6D00u;
    {
        const bool branch_taken_0x3b6d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6D00u;
        // 0x3b6d04: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6d00) {
            ctx->pc = 0x3B6D38u;
            goto label_3b6d38;
        }
    }
    ctx->pc = 0x3B6D08u;
label_3b6d08:
    // 0x3b6d08: 0x68e20007  ldl         $v0, 0x7($a3)
    ctx->pc = 0x3b6d08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_3b6d0c:
    // 0x3b6d0c: 0x6ce20000  ldr         $v0, 0x0($a3)
    ctx->pc = 0x3b6d0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_3b6d10:
    // 0x3b6d10: 0xb3a20047  sdl         $v0, 0x47($sp)
    ctx->pc = 0x3b6d10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b6d14:
    // 0x3b6d14: 0xb7a20040  sdr         $v0, 0x40($sp)
    ctx->pc = 0x3b6d14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b6d18:
    // 0x3b6d18: 0x688c0007  ldl         $t4, 0x7($a0)
    ctx->pc = 0x3b6d18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_3b6d1c:
    // 0x3b6d1c: 0x6c8c0000  ldr         $t4, 0x0($a0)
    ctx->pc = 0x3b6d1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_3b6d20:
    // 0x3b6d20: 0xb0ec0007  sdl         $t4, 0x7($a3)
    ctx->pc = 0x3b6d20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b6d24:
    // 0x3b6d24: 0xb4ec0000  sdr         $t4, 0x0($a3)
    ctx->pc = 0x3b6d24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b6d28:
    // 0x3b6d28: 0x6bab0047  ldl         $t3, 0x47($sp)
    ctx->pc = 0x3b6d28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_3b6d2c:
    // 0x3b6d2c: 0x6fab0040  ldr         $t3, 0x40($sp)
    ctx->pc = 0x3b6d2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_3b6d30:
    // 0x3b6d30: 0xb08b0007  sdl         $t3, 0x7($a0)
    ctx->pc = 0x3b6d30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b6d34:
    // 0x3b6d34: 0xb48b0000  sdr         $t3, 0x0($a0)
    ctx->pc = 0x3b6d34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b6d38:
    // 0x3b6d38: 0xca102b  sltu        $v0, $a2, $t2
    ctx->pc = 0x3b6d38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
label_3b6d3c:
    // 0x3b6d3c: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
label_3b6d40:
    if (ctx->pc == 0x3B6D40u) {
        ctx->pc = 0x3B6D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6D3Cu;
        // 0x3b6d40: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6D44u;
        goto label_3b6d44;
    }
    ctx->pc = 0x3B6D3Cu;
    {
        const bool branch_taken_0x3b6d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6D3Cu;
        // 0x3b6d40: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6d3c) {
            ctx->pc = 0x3B6E68u;
            goto label_3b6e68;
        }
    }
    ctx->pc = 0x3B6D44u;
label_3b6d44:
    // 0x3b6d44: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3b6d44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b6d48:
    // 0x3b6d48: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x3b6d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_3b6d4c:
    // 0x3b6d4c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3b6d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_3b6d50:
    // 0x3b6d50: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3b6d50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3b6d54:
    // 0x3b6d54: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_3b6d58:
    if (ctx->pc == 0x3B6D58u) {
        ctx->pc = 0x3B6D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6D54u;
        // 0x3b6d58: 0x8ca2000c  lw          $v0, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6D5Cu;
        goto label_3b6d5c;
    }
    ctx->pc = 0x3B6D54u;
    {
        const bool branch_taken_0x3b6d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b6d54) {
            ctx->pc = 0x3B6D58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B6D54u;
            // 0x3b6d58: 0x8ca2000c  lw          $v0, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B6D94u;
            goto label_3b6d94;
        }
    }
    ctx->pc = 0x3B6D5Cu;
label_3b6d5c:
    // 0x3b6d5c: 0x68eb0007  ldl         $t3, 0x7($a3)
    ctx->pc = 0x3b6d5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_3b6d60:
    // 0x3b6d60: 0x6ceb0000  ldr         $t3, 0x0($a3)
    ctx->pc = 0x3b6d60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_3b6d64:
    // 0x3b6d64: 0xb3ab0047  sdl         $t3, 0x47($sp)
    ctx->pc = 0x3b6d64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b6d68:
    // 0x3b6d68: 0xb7ab0040  sdr         $t3, 0x40($sp)
    ctx->pc = 0x3b6d68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b6d6c:
    // 0x3b6d6c: 0x688b0007  ldl         $t3, 0x7($a0)
    ctx->pc = 0x3b6d6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_3b6d70:
    // 0x3b6d70: 0x6c8b0000  ldr         $t3, 0x0($a0)
    ctx->pc = 0x3b6d70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_3b6d74:
    // 0x3b6d74: 0xb0eb0007  sdl         $t3, 0x7($a3)
    ctx->pc = 0x3b6d74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b6d78:
    // 0x3b6d78: 0xb4eb0000  sdr         $t3, 0x0($a3)
    ctx->pc = 0x3b6d78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b6d7c:
    // 0x3b6d7c: 0x6bab0047  ldl         $t3, 0x47($sp)
    ctx->pc = 0x3b6d7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_3b6d80:
    // 0x3b6d80: 0x6fab0040  ldr         $t3, 0x40($sp)
    ctx->pc = 0x3b6d80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_3b6d84:
    // 0x3b6d84: 0xb08b0007  sdl         $t3, 0x7($a0)
    ctx->pc = 0x3b6d84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b6d88:
    // 0x3b6d88: 0xb48b0000  sdr         $t3, 0x0($a0)
    ctx->pc = 0x3b6d88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b6d8c:
    // 0x3b6d8c: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x3b6d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_3b6d90:
    // 0x3b6d90: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x3b6d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_3b6d94:
    // 0x3b6d94: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3b6d94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3b6d98:
    // 0x3b6d98: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_3b6d9c:
    if (ctx->pc == 0x3B6D9Cu) {
        ctx->pc = 0x3B6D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6D98u;
        // 0x3b6d9c: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6DA0u;
        goto label_3b6da0;
    }
    ctx->pc = 0x3B6D98u;
    {
        const bool branch_taken_0x3b6d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b6d98) {
            ctx->pc = 0x3B6D9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B6D98u;
            // 0x3b6d9c: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B6DD4u;
            goto label_3b6dd4;
        }
    }
    ctx->pc = 0x3B6DA0u;
label_3b6da0:
    // 0x3b6da0: 0x68eb0007  ldl         $t3, 0x7($a3)
    ctx->pc = 0x3b6da0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_3b6da4:
    // 0x3b6da4: 0x6ceb0000  ldr         $t3, 0x0($a3)
    ctx->pc = 0x3b6da4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_3b6da8:
    // 0x3b6da8: 0xb3ab0047  sdl         $t3, 0x47($sp)
    ctx->pc = 0x3b6da8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b6dac:
    // 0x3b6dac: 0xb7ab0040  sdr         $t3, 0x40($sp)
    ctx->pc = 0x3b6dacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b6db0:
    // 0x3b6db0: 0x688b000f  ldl         $t3, 0xF($a0)
    ctx->pc = 0x3b6db0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_3b6db4:
    // 0x3b6db4: 0x6c8b0008  ldr         $t3, 0x8($a0)
    ctx->pc = 0x3b6db4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_3b6db8:
    // 0x3b6db8: 0xb0eb0007  sdl         $t3, 0x7($a3)
    ctx->pc = 0x3b6db8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b6dbc:
    // 0x3b6dbc: 0xb4eb0000  sdr         $t3, 0x0($a3)
    ctx->pc = 0x3b6dbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b6dc0:
    // 0x3b6dc0: 0x6bab0047  ldl         $t3, 0x47($sp)
    ctx->pc = 0x3b6dc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_3b6dc4:
    // 0x3b6dc4: 0x6fab0040  ldr         $t3, 0x40($sp)
    ctx->pc = 0x3b6dc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_3b6dc8:
    // 0x3b6dc8: 0xb08b000f  sdl         $t3, 0xF($a0)
    ctx->pc = 0x3b6dc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b6dcc:
    // 0x3b6dcc: 0xb48b0008  sdr         $t3, 0x8($a0)
    ctx->pc = 0x3b6dccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b6dd0:
    // 0x3b6dd0: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x3b6dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_3b6dd4:
    // 0x3b6dd4: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x3b6dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_3b6dd8:
    // 0x3b6dd8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3b6dd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3b6ddc:
    // 0x3b6ddc: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_3b6de0:
    if (ctx->pc == 0x3B6DE0u) {
        ctx->pc = 0x3B6DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6DDCu;
        // 0x3b6de0: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6DE4u;
        goto label_3b6de4;
    }
    ctx->pc = 0x3B6DDCu;
    {
        const bool branch_taken_0x3b6ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b6ddc) {
            ctx->pc = 0x3B6DE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B6DDCu;
            // 0x3b6de0: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B6E18u;
            goto label_3b6e18;
        }
    }
    ctx->pc = 0x3B6DE4u;
label_3b6de4:
    // 0x3b6de4: 0x68eb0007  ldl         $t3, 0x7($a3)
    ctx->pc = 0x3b6de4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_3b6de8:
    // 0x3b6de8: 0x6ceb0000  ldr         $t3, 0x0($a3)
    ctx->pc = 0x3b6de8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_3b6dec:
    // 0x3b6dec: 0xb3ab0047  sdl         $t3, 0x47($sp)
    ctx->pc = 0x3b6decu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b6df0:
    // 0x3b6df0: 0xb7ab0040  sdr         $t3, 0x40($sp)
    ctx->pc = 0x3b6df0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b6df4:
    // 0x3b6df4: 0x688b0017  ldl         $t3, 0x17($a0)
    ctx->pc = 0x3b6df4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_3b6df8:
    // 0x3b6df8: 0x6c8b0010  ldr         $t3, 0x10($a0)
    ctx->pc = 0x3b6df8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_3b6dfc:
    // 0x3b6dfc: 0xb0eb0007  sdl         $t3, 0x7($a3)
    ctx->pc = 0x3b6dfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b6e00:
    // 0x3b6e00: 0xb4eb0000  sdr         $t3, 0x0($a3)
    ctx->pc = 0x3b6e00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b6e04:
    // 0x3b6e04: 0x6bab0047  ldl         $t3, 0x47($sp)
    ctx->pc = 0x3b6e04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_3b6e08:
    // 0x3b6e08: 0x6fab0040  ldr         $t3, 0x40($sp)
    ctx->pc = 0x3b6e08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_3b6e0c:
    // 0x3b6e0c: 0xb08b0017  sdl         $t3, 0x17($a0)
    ctx->pc = 0x3b6e0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b6e10:
    // 0x3b6e10: 0xb48b0010  sdr         $t3, 0x10($a0)
    ctx->pc = 0x3b6e10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b6e14:
    // 0x3b6e14: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x3b6e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_3b6e18:
    // 0x3b6e18: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x3b6e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_3b6e1c:
    // 0x3b6e1c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3b6e1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3b6e20:
    // 0x3b6e20: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_3b6e24:
    if (ctx->pc == 0x3B6E24u) {
        ctx->pc = 0x3B6E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6E20u;
        // 0x3b6e24: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6E28u;
        goto label_3b6e28;
    }
    ctx->pc = 0x3B6E20u;
    {
        const bool branch_taken_0x3b6e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6E20u;
        // 0x3b6e24: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6e20) {
            ctx->pc = 0x3B6E58u;
            goto label_3b6e58;
        }
    }
    ctx->pc = 0x3B6E28u;
label_3b6e28:
    // 0x3b6e28: 0x68eb0007  ldl         $t3, 0x7($a3)
    ctx->pc = 0x3b6e28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_3b6e2c:
    // 0x3b6e2c: 0x6ceb0000  ldr         $t3, 0x0($a3)
    ctx->pc = 0x3b6e2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_3b6e30:
    // 0x3b6e30: 0xb3ab0047  sdl         $t3, 0x47($sp)
    ctx->pc = 0x3b6e30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b6e34:
    // 0x3b6e34: 0xb7ab0040  sdr         $t3, 0x40($sp)
    ctx->pc = 0x3b6e34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b6e38:
    // 0x3b6e38: 0x688b001f  ldl         $t3, 0x1F($a0)
    ctx->pc = 0x3b6e38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_3b6e3c:
    // 0x3b6e3c: 0x6c8b0018  ldr         $t3, 0x18($a0)
    ctx->pc = 0x3b6e3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_3b6e40:
    // 0x3b6e40: 0xb0eb0007  sdl         $t3, 0x7($a3)
    ctx->pc = 0x3b6e40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b6e44:
    // 0x3b6e44: 0xb4eb0000  sdr         $t3, 0x0($a3)
    ctx->pc = 0x3b6e44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b6e48:
    // 0x3b6e48: 0x6bab0047  ldl         $t3, 0x47($sp)
    ctx->pc = 0x3b6e48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_3b6e4c:
    // 0x3b6e4c: 0x6fab0040  ldr         $t3, 0x40($sp)
    ctx->pc = 0x3b6e4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_3b6e50:
    // 0x3b6e50: 0xb08b001f  sdl         $t3, 0x1F($a0)
    ctx->pc = 0x3b6e50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b6e54:
    // 0x3b6e54: 0xb48b0018  sdr         $t3, 0x18($a0)
    ctx->pc = 0x3b6e54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b6e58:
    // 0x3b6e58: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x3b6e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_3b6e5c:
    // 0x3b6e5c: 0xca102b  sltu        $v0, $a2, $t2
    ctx->pc = 0x3b6e5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
label_3b6e60:
    // 0x3b6e60: 0x1440ffb9  bnez        $v0, . + 4 + (-0x47 << 2)
label_3b6e64:
    if (ctx->pc == 0x3B6E64u) {
        ctx->pc = 0x3B6E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6E60u;
        // 0x3b6e64: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6E68u;
        goto label_3b6e68;
    }
    ctx->pc = 0x3B6E60u;
    {
        const bool branch_taken_0x3b6e60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B6E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6E60u;
        // 0x3b6e64: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6e60) {
            ctx->pc = 0x3B6D48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b6d48;
        }
    }
    ctx->pc = 0x3B6E68u;
label_3b6e68:
    // 0x3b6e68: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x3b6e68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3b6e6c:
    // 0x3b6e6c: 0xe9102b  sltu        $v0, $a3, $t1
    ctx->pc = 0x3b6e6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_3b6e70:
    // 0x3b6e70: 0x5440ff67  bnel        $v0, $zero, . + 4 + (-0x99 << 2)
label_3b6e74:
    if (ctx->pc == 0x3B6E74u) {
        ctx->pc = 0x3B6E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6E70u;
        // 0x3b6e74: 0x24e60008  addiu       $a2, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6E78u;
        goto label_3b6e78;
    }
    ctx->pc = 0x3B6E70u;
    {
        const bool branch_taken_0x3b6e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b6e70) {
            ctx->pc = 0x3B6E74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B6E70u;
            // 0x3b6e74: 0x24e60008  addiu       $a2, $a3, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B6C10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b6c10;
        }
    }
    ctx->pc = 0x3B6E78u;
label_3b6e78:
    // 0x3b6e78: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x3b6e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3b6e7c:
    // 0x3b6e7c: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x3b6e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_3b6e80:
    // 0x3b6e80: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3b6e80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b6e84:
    // 0x3b6e84: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3b6e84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_3b6e88:
    // 0x3b6e88: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x3b6e88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_3b6e8c:
    // 0x3b6e8c: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x3b6e8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3b6e90:
    // 0x3b6e90: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x3b6e90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3b6e94:
    // 0x3b6e94: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x3b6e94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b6e98:
    // 0x3b6e98: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x3b6e98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b6e9c:
    // 0x3b6e9c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x3b6e9cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3b6ea0:
    // 0x3b6ea0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3b6ea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3b6ea4:
    // 0x3b6ea4: 0x3e00008  jr          $ra
label_3b6ea8:
    if (ctx->pc == 0x3B6EA8u) {
        ctx->pc = 0x3B6EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6EA4u;
        // 0x3b6ea8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6EACu;
        goto label_3b6eac;
    }
    ctx->pc = 0x3B6EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B6EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6EA4u;
        // 0x3b6ea8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B6EA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B6EACu;
label_3b6eac:
    // 0x3b6eac: 0x0  nop
    ctx->pc = 0x3b6eacu;
    // NOP
label_3b6eb0:
    // 0x3b6eb0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3b6eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3b6eb4:
    // 0x3b6eb4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3b6eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3b6eb8:
    // 0x3b6eb8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3b6eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3b6ebc:
    // 0x3b6ebc: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3b6ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3b6ec0:
    // 0x3b6ec0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3b6ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3b6ec4:
    // 0x3b6ec4: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x3b6ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_3b6ec8:
    // 0x3b6ec8: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x3b6ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_3b6ecc:
    // 0x3b6ecc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b6eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3b6ed0:
    // 0x3b6ed0: 0xc0ed294  jal         func_3B4A50
label_3b6ed4:
    if (ctx->pc == 0x3B6ED4u) {
        ctx->pc = 0x3B6ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6ED0u;
        // 0x3b6ed4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6ED8u;
        goto label_3b6ed8;
    }
    ctx->pc = 0x3B6ED0u;
    SET_GPR_U32(ctx, 31, 0x3B6ED8u);
    ctx->pc = 0x3B6ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6ED0u;
    // 0x3b6ed4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4A50u, 0x3B6ED0u, 0x3B6ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6ED8u;
label_3b6ed8:
    // 0x3b6ed8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3b6ed8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b6edc:
    // 0x3b6edc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3b6edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b6ee0:
    // 0x3b6ee0: 0xc0ed13c  jal         func_3B44F0
label_3b6ee4:
    if (ctx->pc == 0x3B6EE4u) {
        ctx->pc = 0x3B6EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6EE0u;
        // 0x3b6ee4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6EE8u;
        goto label_3b6ee8;
    }
    ctx->pc = 0x3B6EE0u;
    SET_GPR_U32(ctx, 31, 0x3B6EE8u);
    ctx->pc = 0x3B6EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6EE0u;
    // 0x3b6ee4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B44F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B44F0u, 0x3B6EE0u, 0x3B6EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6EE8u;
label_3b6ee8:
    // 0x3b6ee8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b6ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b6eec:
    // 0x3b6eec: 0xc0ed340  jal         func_3B4D00
label_3b6ef0:
    if (ctx->pc == 0x3B6EF0u) {
        ctx->pc = 0x3B6EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6EECu;
        // 0x3b6ef0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6EF4u;
        goto label_3b6ef4;
    }
    ctx->pc = 0x3B6EECu;
    SET_GPR_U32(ctx, 31, 0x3B6EF4u);
    ctx->pc = 0x3B6EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6EECu;
    // 0x3b6ef0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4D00u, 0x3B6EECu, 0x3B6EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6EF4u;
label_3b6ef4:
    // 0x3b6ef4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3b6ef8:
    if (ctx->pc == 0x3B6EF8u) {
        ctx->pc = 0x3B6EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6EF4u;
        // 0x3b6ef8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6EFCu;
        goto label_3b6efc;
    }
    ctx->pc = 0x3B6EF4u;
    {
        const bool branch_taken_0x3b6ef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B6EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6EF4u;
        // 0x3b6ef8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6ef4) {
            ctx->pc = 0x3B6F04u;
            goto label_3b6f04;
        }
    }
    ctx->pc = 0x3B6EFCu;
label_3b6efc:
    // 0x3b6efc: 0x10000031  b           . + 4 + (0x31 << 2)
label_3b6f00:
    if (ctx->pc == 0x3B6F00u) {
        ctx->pc = 0x3B6F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6EFCu;
        // 0x3b6f00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6F04u;
        goto label_3b6f04;
    }
    ctx->pc = 0x3B6EFCu;
    {
        const bool branch_taken_0x3b6efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6EFCu;
        // 0x3b6f00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6efc) {
            ctx->pc = 0x3B6FC4u;
            goto label_3b6fc4;
        }
    }
    ctx->pc = 0x3B6F04u;
label_3b6f04:
    // 0x3b6f04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b6f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b6f08:
    // 0x3b6f08: 0xc0ed9ee  jal         func_3B67B8
label_3b6f0c:
    if (ctx->pc == 0x3B6F0Cu) {
        ctx->pc = 0x3B6F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6F08u;
        // 0x3b6f0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6F10u;
        goto label_3b6f10;
    }
    ctx->pc = 0x3B6F08u;
    SET_GPR_U32(ctx, 31, 0x3B6F10u);
    ctx->pc = 0x3B6F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6F08u;
    // 0x3b6f0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B67B8u;
    goto label_3b67b8;
    ctx->pc = 0x3B6F10u;
label_3b6f10:
    // 0x3b6f10: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3b6f10u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b6f14:
    // 0x3b6f14: 0x16a0002b  bnez        $s5, . + 4 + (0x2B << 2)
label_3b6f18:
    if (ctx->pc == 0x3B6F18u) {
        ctx->pc = 0x3B6F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6F14u;
        // 0x3b6f18: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6F1Cu;
        goto label_3b6f1c;
    }
    ctx->pc = 0x3B6F14u;
    {
        const bool branch_taken_0x3b6f14 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B6F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6F14u;
        // 0x3b6f18: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6f14) {
            ctx->pc = 0x3B6FC4u;
            goto label_3b6fc4;
        }
    }
    ctx->pc = 0x3B6F1Cu;
label_3b6f1c:
    // 0x3b6f1c: 0x1220002a  beqz        $s1, . + 4 + (0x2A << 2)
label_3b6f20:
    if (ctx->pc == 0x3B6F20u) {
        ctx->pc = 0x3B6F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6F1Cu;
        // 0x3b6f20: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6F24u;
        goto label_3b6f24;
    }
    ctx->pc = 0x3B6F1Cu;
    {
        const bool branch_taken_0x3b6f1c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6F1Cu;
        // 0x3b6f20: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6f1c) {
            ctx->pc = 0x3B6FC8u;
            goto label_3b6fc8;
        }
    }
    ctx->pc = 0x3B6F24u;
label_3b6f24:
    // 0x3b6f24: 0x8e2400b8  lw          $a0, 0xB8($s1)
    ctx->pc = 0x3b6f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_3b6f28:
    // 0x3b6f28: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_3b6f2c:
    if (ctx->pc == 0x3B6F2Cu) {
        ctx->pc = 0x3B6F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6F28u;
        // 0x3b6f2c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6F30u;
        goto label_3b6f30;
    }
    ctx->pc = 0x3B6F28u;
    {
        const bool branch_taken_0x3b6f28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6F28u;
        // 0x3b6f2c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6f28) {
            ctx->pc = 0x3B6F3Cu;
            goto label_3b6f3c;
        }
    }
    ctx->pc = 0x3B6F30u;
label_3b6f30:
    // 0x3b6f30: 0xc103684  jal         func_40DA10
label_3b6f34:
    if (ctx->pc == 0x3B6F34u) {
        ctx->pc = 0x3B6F38u;
        goto label_3b6f38;
    }
    ctx->pc = 0x3B6F30u;
    SET_GPR_U32(ctx, 31, 0x3B6F38u);
    ctx->pc = 0x40DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DA10u, 0x3B6F30u, 0x3B6F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6F38u;
label_3b6f38:
    // 0x3b6f38: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3b6f38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b6f3c:
    // 0x3b6f3c: 0xc1036d2  jal         func_40DB48
label_3b6f40:
    if (ctx->pc == 0x3B6F40u) {
        ctx->pc = 0x3B6F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6F3Cu;
        // 0x3b6f40: 0x8e2400b0  lw          $a0, 0xB0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6F44u;
        goto label_3b6f44;
    }
    ctx->pc = 0x3B6F3Cu;
    SET_GPR_U32(ctx, 31, 0x3B6F44u);
    ctx->pc = 0x3B6F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6F3Cu;
    // 0x3b6f40: 0x8e2400b0  lw          $a0, 0xB0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3B6F3Cu, 0x3B6F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6F44u;
label_3b6f44:
    // 0x3b6f44: 0x8e2300b4  lw          $v1, 0xB4($s1)
    ctx->pc = 0x3b6f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
label_3b6f48:
    // 0x3b6f48: 0x24050110  addiu       $a1, $zero, 0x110
    ctx->pc = 0x3b6f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_3b6f4c:
    // 0x3b6f4c: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x3b6f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_3b6f50:
    // 0x3b6f50: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x3b6f50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3b6f54:
    // 0x3b6f54: 0xc1036d2  jal         func_40DB48
label_3b6f58:
    if (ctx->pc == 0x3B6F58u) {
        ctx->pc = 0x3B6F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6F54u;
        // 0x3b6f58: 0x439021  addu        $s2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6F5Cu;
        goto label_3b6f5c;
    }
    ctx->pc = 0x3B6F54u;
    SET_GPR_U32(ctx, 31, 0x3B6F5Cu);
    ctx->pc = 0x3B6F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6F54u;
    // 0x3b6f58: 0x439021  addu        $s2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3B6F54u, 0x3B6F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6F5Cu;
label_3b6f5c:
    // 0x3b6f5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b6f5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b6f60:
    // 0x3b6f60: 0x1212000b  beq         $s0, $s2, . + 4 + (0xB << 2)
label_3b6f64:
    if (ctx->pc == 0x3B6F64u) {
        ctx->pc = 0x3B6F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6F60u;
        // 0x3b6f64: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6F68u;
        goto label_3b6f68;
    }
    ctx->pc = 0x3B6F60u;
    {
        const bool branch_taken_0x3b6f60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x3B6F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6F60u;
        // 0x3b6f64: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6f60) {
            ctx->pc = 0x3B6F90u;
            goto label_3b6f90;
        }
    }
    ctx->pc = 0x3B6F68u;
label_3b6f68:
    // 0x3b6f68: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_3b6f6c:
    if (ctx->pc == 0x3B6F6Cu) {
        ctx->pc = 0x3B6F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6F68u;
        // 0x3b6f6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6F70u;
        goto label_3b6f70;
    }
    ctx->pc = 0x3B6F68u;
    {
        const bool branch_taken_0x3b6f68 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6F68u;
        // 0x3b6f6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6f68) {
            ctx->pc = 0x3B6F84u;
            goto label_3b6f84;
        }
    }
    ctx->pc = 0x3B6F70u;
label_3b6f70:
    // 0x3b6f70: 0xc0ed2d0  jal         func_3B4B40
label_3b6f74:
    if (ctx->pc == 0x3B6F74u) {
        ctx->pc = 0x3B6F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6F70u;
        // 0x3b6f74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6F78u;
        goto label_3b6f78;
    }
    ctx->pc = 0x3B6F70u;
    SET_GPR_U32(ctx, 31, 0x3B6F78u);
    ctx->pc = 0x3B6F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6F70u;
    // 0x3b6f74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4B40u, 0x3B6F70u, 0x3B6F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6F78u;
label_3b6f78:
    // 0x3b6f78: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3b6f78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b6f7c:
    // 0x3b6f7c: 0x282180b  movn        $v1, $s4, $v0
    ctx->pc = 0x3b6f7cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 20));
label_3b6f80:
    // 0x3b6f80: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3b6f80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3b6f84:
    // 0x3b6f84: 0x26100110  addiu       $s0, $s0, 0x110
    ctx->pc = 0x3b6f84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
label_3b6f88:
    // 0x3b6f88: 0x1612fff7  bne         $s0, $s2, . + 4 + (-0x9 << 2)
label_3b6f8c:
    if (ctx->pc == 0x3B6F8Cu) {
        ctx->pc = 0x3B6F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6F88u;
        // 0x3b6f8c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6F90u;
        goto label_3b6f90;
    }
    ctx->pc = 0x3B6F88u;
    {
        const bool branch_taken_0x3b6f88 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x3B6F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6F88u;
        // 0x3b6f8c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6f88) {
            ctx->pc = 0x3B6F68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b6f68;
        }
    }
    ctx->pc = 0x3B6F90u;
label_3b6f90:
    // 0x3b6f90: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
label_3b6f94:
    if (ctx->pc == 0x3B6F94u) {
        ctx->pc = 0x3B6F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6F90u;
        // 0x3b6f94: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6F98u;
        goto label_3b6f98;
    }
    ctx->pc = 0x3B6F90u;
    {
        const bool branch_taken_0x3b6f90 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6F90u;
        // 0x3b6f94: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6f90) {
            ctx->pc = 0x3B6FA4u;
            goto label_3b6fa4;
        }
    }
    ctx->pc = 0x3B6F98u;
label_3b6f98:
    // 0x3b6f98: 0xc103684  jal         func_40DA10
label_3b6f9c:
    if (ctx->pc == 0x3B6F9Cu) {
        ctx->pc = 0x3B6F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6F98u;
        // 0x3b6f9c: 0x8e2400b0  lw          $a0, 0xB0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6FA0u;
        goto label_3b6fa0;
    }
    ctx->pc = 0x3B6F98u;
    SET_GPR_U32(ctx, 31, 0x3B6FA0u);
    ctx->pc = 0x3B6F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6F98u;
    // 0x3b6f9c: 0x8e2400b0  lw          $a0, 0xB0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DA10u, 0x3B6F98u, 0x3B6FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6FA0u;
label_3b6fa0:
    // 0x3b6fa0: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3b6fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3b6fa4:
    // 0x3b6fa4: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x3b6fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
label_3b6fa8:
    // 0x3b6fa8: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x3b6fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_3b6fac:
    // 0x3b6fac: 0x24c6ce80  addiu       $a2, $a2, -0x3180
    ctx->pc = 0x3b6facu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954624));
label_3b6fb0:
    // 0x3b6fb0: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x3b6fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_3b6fb4:
    // 0x3b6fb4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b6fb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b6fb8:
    // 0x3b6fb8: 0x40f809  jalr        $v0
label_3b6fbc:
    if (ctx->pc == 0x3B6FBCu) {
        ctx->pc = 0x3B6FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6FB8u;
        // 0x3b6fbc: 0x8cc4052c  lw          $a0, 0x52C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1324)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6FC0u;
        goto label_3b6fc0;
    }
    ctx->pc = 0x3B6FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B6FC0u);
        ctx->pc = 0x3B6FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6FB8u;
        // 0x3b6fbc: 0x8cc4052c  lw          $a0, 0x52C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1324)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B6FB8u, 0x3B6FC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B6FC0u;
label_3b6fc0:
    // 0x3b6fc0: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x3b6fc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b6fc4:
    // 0x3b6fc4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3b6fc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3b6fc8:
    // 0x3b6fc8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3b6fc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3b6fcc:
    // 0x3b6fcc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3b6fccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3b6fd0:
    // 0x3b6fd0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3b6fd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3b6fd4:
    // 0x3b6fd4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x3b6fd4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b6fd8:
    // 0x3b6fd8: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x3b6fd8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b6fdc:
    // 0x3b6fdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b6fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b6fe0:
    // 0x3b6fe0: 0x3e00008  jr          $ra
label_3b6fe4:
    if (ctx->pc == 0x3B6FE4u) {
        ctx->pc = 0x3B6FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6FE0u;
        // 0x3b6fe4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6FE8u;
        goto label_fallthrough_0x3b6fe0;
    }
    ctx->pc = 0x3B6FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B6FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6FE0u;
        // 0x3b6fe4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B6FE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3b6fe0:
    ctx->pc = 0x3B6FE8u;
}
