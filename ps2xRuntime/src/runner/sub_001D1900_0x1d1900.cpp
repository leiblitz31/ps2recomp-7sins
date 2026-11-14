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

// Function: sub_001D1900
// Address: 0x1d1900 - 0x1d35a0
void sub_001D1900_0x1d1900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D1900_0x1d1900");
#endif

    switch (ctx->pc) {
        case 0x1d1900u: goto label_1d1900;
        case 0x1d1904u: goto label_1d1904;
        case 0x1d1908u: goto label_1d1908;
        case 0x1d190cu: goto label_1d190c;
        case 0x1d1910u: goto label_1d1910;
        case 0x1d1914u: goto label_1d1914;
        case 0x1d1918u: goto label_1d1918;
        case 0x1d191cu: goto label_1d191c;
        case 0x1d1920u: goto label_1d1920;
        case 0x1d1924u: goto label_1d1924;
        case 0x1d1928u: goto label_1d1928;
        case 0x1d192cu: goto label_1d192c;
        case 0x1d1930u: goto label_1d1930;
        case 0x1d1934u: goto label_1d1934;
        case 0x1d1938u: goto label_1d1938;
        case 0x1d193cu: goto label_1d193c;
        case 0x1d1940u: goto label_1d1940;
        case 0x1d1944u: goto label_1d1944;
        case 0x1d1948u: goto label_1d1948;
        case 0x1d194cu: goto label_1d194c;
        case 0x1d1950u: goto label_1d1950;
        case 0x1d1954u: goto label_1d1954;
        case 0x1d1958u: goto label_1d1958;
        case 0x1d195cu: goto label_1d195c;
        case 0x1d1960u: goto label_1d1960;
        case 0x1d1964u: goto label_1d1964;
        case 0x1d1968u: goto label_1d1968;
        case 0x1d196cu: goto label_1d196c;
        case 0x1d1970u: goto label_1d1970;
        case 0x1d1974u: goto label_1d1974;
        case 0x1d1978u: goto label_1d1978;
        case 0x1d197cu: goto label_1d197c;
        case 0x1d1980u: goto label_1d1980;
        case 0x1d1984u: goto label_1d1984;
        case 0x1d1988u: goto label_1d1988;
        case 0x1d198cu: goto label_1d198c;
        case 0x1d1990u: goto label_1d1990;
        case 0x1d1994u: goto label_1d1994;
        case 0x1d1998u: goto label_1d1998;
        case 0x1d199cu: goto label_1d199c;
        case 0x1d19a0u: goto label_1d19a0;
        case 0x1d19a4u: goto label_1d19a4;
        case 0x1d19a8u: goto label_1d19a8;
        case 0x1d19acu: goto label_1d19ac;
        case 0x1d19b0u: goto label_1d19b0;
        case 0x1d19b4u: goto label_1d19b4;
        case 0x1d19b8u: goto label_1d19b8;
        case 0x1d19bcu: goto label_1d19bc;
        case 0x1d19c0u: goto label_1d19c0;
        case 0x1d19c4u: goto label_1d19c4;
        case 0x1d19c8u: goto label_1d19c8;
        case 0x1d19ccu: goto label_1d19cc;
        case 0x1d19d0u: goto label_1d19d0;
        case 0x1d19d4u: goto label_1d19d4;
        case 0x1d19d8u: goto label_1d19d8;
        case 0x1d19dcu: goto label_1d19dc;
        case 0x1d19e0u: goto label_1d19e0;
        case 0x1d19e4u: goto label_1d19e4;
        case 0x1d19e8u: goto label_1d19e8;
        case 0x1d19ecu: goto label_1d19ec;
        case 0x1d19f0u: goto label_1d19f0;
        case 0x1d19f4u: goto label_1d19f4;
        case 0x1d19f8u: goto label_1d19f8;
        case 0x1d19fcu: goto label_1d19fc;
        case 0x1d1a00u: goto label_1d1a00;
        case 0x1d1a04u: goto label_1d1a04;
        case 0x1d1a08u: goto label_1d1a08;
        case 0x1d1a0cu: goto label_1d1a0c;
        case 0x1d1a10u: goto label_1d1a10;
        case 0x1d1a14u: goto label_1d1a14;
        case 0x1d1a18u: goto label_1d1a18;
        case 0x1d1a1cu: goto label_1d1a1c;
        case 0x1d1a20u: goto label_1d1a20;
        case 0x1d1a24u: goto label_1d1a24;
        case 0x1d1a28u: goto label_1d1a28;
        case 0x1d1a2cu: goto label_1d1a2c;
        case 0x1d1a30u: goto label_1d1a30;
        case 0x1d1a34u: goto label_1d1a34;
        case 0x1d1a38u: goto label_1d1a38;
        case 0x1d1a3cu: goto label_1d1a3c;
        case 0x1d1a40u: goto label_1d1a40;
        case 0x1d1a44u: goto label_1d1a44;
        case 0x1d1a48u: goto label_1d1a48;
        case 0x1d1a4cu: goto label_1d1a4c;
        case 0x1d1a50u: goto label_1d1a50;
        case 0x1d1a54u: goto label_1d1a54;
        case 0x1d1a58u: goto label_1d1a58;
        case 0x1d1a5cu: goto label_1d1a5c;
        case 0x1d1a60u: goto label_1d1a60;
        case 0x1d1a64u: goto label_1d1a64;
        case 0x1d1a68u: goto label_1d1a68;
        case 0x1d1a6cu: goto label_1d1a6c;
        case 0x1d1a70u: goto label_1d1a70;
        case 0x1d1a74u: goto label_1d1a74;
        case 0x1d1a78u: goto label_1d1a78;
        case 0x1d1a7cu: goto label_1d1a7c;
        case 0x1d1a80u: goto label_1d1a80;
        case 0x1d1a84u: goto label_1d1a84;
        case 0x1d1a88u: goto label_1d1a88;
        case 0x1d1a8cu: goto label_1d1a8c;
        case 0x1d1a90u: goto label_1d1a90;
        case 0x1d1a94u: goto label_1d1a94;
        case 0x1d1a98u: goto label_1d1a98;
        case 0x1d1a9cu: goto label_1d1a9c;
        case 0x1d1aa0u: goto label_1d1aa0;
        case 0x1d1aa4u: goto label_1d1aa4;
        case 0x1d1aa8u: goto label_1d1aa8;
        case 0x1d1aacu: goto label_1d1aac;
        case 0x1d1ab0u: goto label_1d1ab0;
        case 0x1d1ab4u: goto label_1d1ab4;
        case 0x1d1ab8u: goto label_1d1ab8;
        case 0x1d1abcu: goto label_1d1abc;
        case 0x1d1ac0u: goto label_1d1ac0;
        case 0x1d1ac4u: goto label_1d1ac4;
        case 0x1d1ac8u: goto label_1d1ac8;
        case 0x1d1accu: goto label_1d1acc;
        case 0x1d1ad0u: goto label_1d1ad0;
        case 0x1d1ad4u: goto label_1d1ad4;
        case 0x1d1ad8u: goto label_1d1ad8;
        case 0x1d1adcu: goto label_1d1adc;
        case 0x1d1ae0u: goto label_1d1ae0;
        case 0x1d1ae4u: goto label_1d1ae4;
        case 0x1d1ae8u: goto label_1d1ae8;
        case 0x1d1aecu: goto label_1d1aec;
        case 0x1d1af0u: goto label_1d1af0;
        case 0x1d1af4u: goto label_1d1af4;
        case 0x1d1af8u: goto label_1d1af8;
        case 0x1d1afcu: goto label_1d1afc;
        case 0x1d1b00u: goto label_1d1b00;
        case 0x1d1b04u: goto label_1d1b04;
        case 0x1d1b08u: goto label_1d1b08;
        case 0x1d1b0cu: goto label_1d1b0c;
        case 0x1d1b10u: goto label_1d1b10;
        case 0x1d1b14u: goto label_1d1b14;
        case 0x1d1b18u: goto label_1d1b18;
        case 0x1d1b1cu: goto label_1d1b1c;
        case 0x1d1b20u: goto label_1d1b20;
        case 0x1d1b24u: goto label_1d1b24;
        case 0x1d1b28u: goto label_1d1b28;
        case 0x1d1b2cu: goto label_1d1b2c;
        case 0x1d1b30u: goto label_1d1b30;
        case 0x1d1b34u: goto label_1d1b34;
        case 0x1d1b38u: goto label_1d1b38;
        case 0x1d1b3cu: goto label_1d1b3c;
        case 0x1d1b40u: goto label_1d1b40;
        case 0x1d1b44u: goto label_1d1b44;
        case 0x1d1b48u: goto label_1d1b48;
        case 0x1d1b4cu: goto label_1d1b4c;
        case 0x1d1b50u: goto label_1d1b50;
        case 0x1d1b54u: goto label_1d1b54;
        case 0x1d1b58u: goto label_1d1b58;
        case 0x1d1b5cu: goto label_1d1b5c;
        case 0x1d1b60u: goto label_1d1b60;
        case 0x1d1b64u: goto label_1d1b64;
        case 0x1d1b68u: goto label_1d1b68;
        case 0x1d1b6cu: goto label_1d1b6c;
        case 0x1d1b70u: goto label_1d1b70;
        case 0x1d1b74u: goto label_1d1b74;
        case 0x1d1b78u: goto label_1d1b78;
        case 0x1d1b7cu: goto label_1d1b7c;
        case 0x1d1b80u: goto label_1d1b80;
        case 0x1d1b84u: goto label_1d1b84;
        case 0x1d1b88u: goto label_1d1b88;
        case 0x1d1b8cu: goto label_1d1b8c;
        case 0x1d1b90u: goto label_1d1b90;
        case 0x1d1b94u: goto label_1d1b94;
        case 0x1d1b98u: goto label_1d1b98;
        case 0x1d1b9cu: goto label_1d1b9c;
        case 0x1d1ba0u: goto label_1d1ba0;
        case 0x1d1ba4u: goto label_1d1ba4;
        case 0x1d1ba8u: goto label_1d1ba8;
        case 0x1d1bacu: goto label_1d1bac;
        case 0x1d1bb0u: goto label_1d1bb0;
        case 0x1d1bb4u: goto label_1d1bb4;
        case 0x1d1bb8u: goto label_1d1bb8;
        case 0x1d1bbcu: goto label_1d1bbc;
        case 0x1d1bc0u: goto label_1d1bc0;
        case 0x1d1bc4u: goto label_1d1bc4;
        case 0x1d1bc8u: goto label_1d1bc8;
        case 0x1d1bccu: goto label_1d1bcc;
        case 0x1d1bd0u: goto label_1d1bd0;
        case 0x1d1bd4u: goto label_1d1bd4;
        case 0x1d1bd8u: goto label_1d1bd8;
        case 0x1d1bdcu: goto label_1d1bdc;
        case 0x1d1be0u: goto label_1d1be0;
        case 0x1d1be4u: goto label_1d1be4;
        case 0x1d1be8u: goto label_1d1be8;
        case 0x1d1becu: goto label_1d1bec;
        case 0x1d1bf0u: goto label_1d1bf0;
        case 0x1d1bf4u: goto label_1d1bf4;
        case 0x1d1bf8u: goto label_1d1bf8;
        case 0x1d1bfcu: goto label_1d1bfc;
        case 0x1d1c00u: goto label_1d1c00;
        case 0x1d1c04u: goto label_1d1c04;
        case 0x1d1c08u: goto label_1d1c08;
        case 0x1d1c0cu: goto label_1d1c0c;
        case 0x1d1c10u: goto label_1d1c10;
        case 0x1d1c14u: goto label_1d1c14;
        case 0x1d1c18u: goto label_1d1c18;
        case 0x1d1c1cu: goto label_1d1c1c;
        case 0x1d1c20u: goto label_1d1c20;
        case 0x1d1c24u: goto label_1d1c24;
        case 0x1d1c28u: goto label_1d1c28;
        case 0x1d1c2cu: goto label_1d1c2c;
        case 0x1d1c30u: goto label_1d1c30;
        case 0x1d1c34u: goto label_1d1c34;
        case 0x1d1c38u: goto label_1d1c38;
        case 0x1d1c3cu: goto label_1d1c3c;
        case 0x1d1c40u: goto label_1d1c40;
        case 0x1d1c44u: goto label_1d1c44;
        case 0x1d1c48u: goto label_1d1c48;
        case 0x1d1c4cu: goto label_1d1c4c;
        case 0x1d1c50u: goto label_1d1c50;
        case 0x1d1c54u: goto label_1d1c54;
        case 0x1d1c58u: goto label_1d1c58;
        case 0x1d1c5cu: goto label_1d1c5c;
        case 0x1d1c60u: goto label_1d1c60;
        case 0x1d1c64u: goto label_1d1c64;
        case 0x1d1c68u: goto label_1d1c68;
        case 0x1d1c6cu: goto label_1d1c6c;
        case 0x1d1c70u: goto label_1d1c70;
        case 0x1d1c74u: goto label_1d1c74;
        case 0x1d1c78u: goto label_1d1c78;
        case 0x1d1c7cu: goto label_1d1c7c;
        case 0x1d1c80u: goto label_1d1c80;
        case 0x1d1c84u: goto label_1d1c84;
        case 0x1d1c88u: goto label_1d1c88;
        case 0x1d1c8cu: goto label_1d1c8c;
        case 0x1d1c90u: goto label_1d1c90;
        case 0x1d1c94u: goto label_1d1c94;
        case 0x1d1c98u: goto label_1d1c98;
        case 0x1d1c9cu: goto label_1d1c9c;
        case 0x1d1ca0u: goto label_1d1ca0;
        case 0x1d1ca4u: goto label_1d1ca4;
        case 0x1d1ca8u: goto label_1d1ca8;
        case 0x1d1cacu: goto label_1d1cac;
        case 0x1d1cb0u: goto label_1d1cb0;
        case 0x1d1cb4u: goto label_1d1cb4;
        case 0x1d1cb8u: goto label_1d1cb8;
        case 0x1d1cbcu: goto label_1d1cbc;
        case 0x1d1cc0u: goto label_1d1cc0;
        case 0x1d1cc4u: goto label_1d1cc4;
        case 0x1d1cc8u: goto label_1d1cc8;
        case 0x1d1cccu: goto label_1d1ccc;
        case 0x1d1cd0u: goto label_1d1cd0;
        case 0x1d1cd4u: goto label_1d1cd4;
        case 0x1d1cd8u: goto label_1d1cd8;
        case 0x1d1cdcu: goto label_1d1cdc;
        case 0x1d1ce0u: goto label_1d1ce0;
        case 0x1d1ce4u: goto label_1d1ce4;
        case 0x1d1ce8u: goto label_1d1ce8;
        case 0x1d1cecu: goto label_1d1cec;
        case 0x1d1cf0u: goto label_1d1cf0;
        case 0x1d1cf4u: goto label_1d1cf4;
        case 0x1d1cf8u: goto label_1d1cf8;
        case 0x1d1cfcu: goto label_1d1cfc;
        case 0x1d1d00u: goto label_1d1d00;
        case 0x1d1d04u: goto label_1d1d04;
        case 0x1d1d08u: goto label_1d1d08;
        case 0x1d1d0cu: goto label_1d1d0c;
        case 0x1d1d10u: goto label_1d1d10;
        case 0x1d1d14u: goto label_1d1d14;
        case 0x1d1d18u: goto label_1d1d18;
        case 0x1d1d1cu: goto label_1d1d1c;
        case 0x1d1d20u: goto label_1d1d20;
        case 0x1d1d24u: goto label_1d1d24;
        case 0x1d1d28u: goto label_1d1d28;
        case 0x1d1d2cu: goto label_1d1d2c;
        case 0x1d1d30u: goto label_1d1d30;
        case 0x1d1d34u: goto label_1d1d34;
        case 0x1d1d38u: goto label_1d1d38;
        case 0x1d1d3cu: goto label_1d1d3c;
        case 0x1d1d40u: goto label_1d1d40;
        case 0x1d1d44u: goto label_1d1d44;
        case 0x1d1d48u: goto label_1d1d48;
        case 0x1d1d4cu: goto label_1d1d4c;
        case 0x1d1d50u: goto label_1d1d50;
        case 0x1d1d54u: goto label_1d1d54;
        case 0x1d1d58u: goto label_1d1d58;
        case 0x1d1d5cu: goto label_1d1d5c;
        case 0x1d1d60u: goto label_1d1d60;
        case 0x1d1d64u: goto label_1d1d64;
        case 0x1d1d68u: goto label_1d1d68;
        case 0x1d1d6cu: goto label_1d1d6c;
        case 0x1d1d70u: goto label_1d1d70;
        case 0x1d1d74u: goto label_1d1d74;
        case 0x1d1d78u: goto label_1d1d78;
        case 0x1d1d7cu: goto label_1d1d7c;
        case 0x1d1d80u: goto label_1d1d80;
        case 0x1d1d84u: goto label_1d1d84;
        case 0x1d1d88u: goto label_1d1d88;
        case 0x1d1d8cu: goto label_1d1d8c;
        case 0x1d1d90u: goto label_1d1d90;
        case 0x1d1d94u: goto label_1d1d94;
        case 0x1d1d98u: goto label_1d1d98;
        case 0x1d1d9cu: goto label_1d1d9c;
        case 0x1d1da0u: goto label_1d1da0;
        case 0x1d1da4u: goto label_1d1da4;
        case 0x1d1da8u: goto label_1d1da8;
        case 0x1d1dacu: goto label_1d1dac;
        case 0x1d1db0u: goto label_1d1db0;
        case 0x1d1db4u: goto label_1d1db4;
        case 0x1d1db8u: goto label_1d1db8;
        case 0x1d1dbcu: goto label_1d1dbc;
        case 0x1d1dc0u: goto label_1d1dc0;
        case 0x1d1dc4u: goto label_1d1dc4;
        case 0x1d1dc8u: goto label_1d1dc8;
        case 0x1d1dccu: goto label_1d1dcc;
        case 0x1d1dd0u: goto label_1d1dd0;
        case 0x1d1dd4u: goto label_1d1dd4;
        case 0x1d1dd8u: goto label_1d1dd8;
        case 0x1d1ddcu: goto label_1d1ddc;
        case 0x1d1de0u: goto label_1d1de0;
        case 0x1d1de4u: goto label_1d1de4;
        case 0x1d1de8u: goto label_1d1de8;
        case 0x1d1decu: goto label_1d1dec;
        case 0x1d1df0u: goto label_1d1df0;
        case 0x1d1df4u: goto label_1d1df4;
        case 0x1d1df8u: goto label_1d1df8;
        case 0x1d1dfcu: goto label_1d1dfc;
        case 0x1d1e00u: goto label_1d1e00;
        case 0x1d1e04u: goto label_1d1e04;
        case 0x1d1e08u: goto label_1d1e08;
        case 0x1d1e0cu: goto label_1d1e0c;
        case 0x1d1e10u: goto label_1d1e10;
        case 0x1d1e14u: goto label_1d1e14;
        case 0x1d1e18u: goto label_1d1e18;
        case 0x1d1e1cu: goto label_1d1e1c;
        case 0x1d1e20u: goto label_1d1e20;
        case 0x1d1e24u: goto label_1d1e24;
        case 0x1d1e28u: goto label_1d1e28;
        case 0x1d1e2cu: goto label_1d1e2c;
        case 0x1d1e30u: goto label_1d1e30;
        case 0x1d1e34u: goto label_1d1e34;
        case 0x1d1e38u: goto label_1d1e38;
        case 0x1d1e3cu: goto label_1d1e3c;
        case 0x1d1e40u: goto label_1d1e40;
        case 0x1d1e44u: goto label_1d1e44;
        case 0x1d1e48u: goto label_1d1e48;
        case 0x1d1e4cu: goto label_1d1e4c;
        case 0x1d1e50u: goto label_1d1e50;
        case 0x1d1e54u: goto label_1d1e54;
        case 0x1d1e58u: goto label_1d1e58;
        case 0x1d1e5cu: goto label_1d1e5c;
        case 0x1d1e60u: goto label_1d1e60;
        case 0x1d1e64u: goto label_1d1e64;
        case 0x1d1e68u: goto label_1d1e68;
        case 0x1d1e6cu: goto label_1d1e6c;
        case 0x1d1e70u: goto label_1d1e70;
        case 0x1d1e74u: goto label_1d1e74;
        case 0x1d1e78u: goto label_1d1e78;
        case 0x1d1e7cu: goto label_1d1e7c;
        case 0x1d1e80u: goto label_1d1e80;
        case 0x1d1e84u: goto label_1d1e84;
        case 0x1d1e88u: goto label_1d1e88;
        case 0x1d1e8cu: goto label_1d1e8c;
        case 0x1d1e90u: goto label_1d1e90;
        case 0x1d1e94u: goto label_1d1e94;
        case 0x1d1e98u: goto label_1d1e98;
        case 0x1d1e9cu: goto label_1d1e9c;
        case 0x1d1ea0u: goto label_1d1ea0;
        case 0x1d1ea4u: goto label_1d1ea4;
        case 0x1d1ea8u: goto label_1d1ea8;
        case 0x1d1eacu: goto label_1d1eac;
        case 0x1d1eb0u: goto label_1d1eb0;
        case 0x1d1eb4u: goto label_1d1eb4;
        case 0x1d1eb8u: goto label_1d1eb8;
        case 0x1d1ebcu: goto label_1d1ebc;
        case 0x1d1ec0u: goto label_1d1ec0;
        case 0x1d1ec4u: goto label_1d1ec4;
        case 0x1d1ec8u: goto label_1d1ec8;
        case 0x1d1eccu: goto label_1d1ecc;
        case 0x1d1ed0u: goto label_1d1ed0;
        case 0x1d1ed4u: goto label_1d1ed4;
        case 0x1d1ed8u: goto label_1d1ed8;
        case 0x1d1edcu: goto label_1d1edc;
        case 0x1d1ee0u: goto label_1d1ee0;
        case 0x1d1ee4u: goto label_1d1ee4;
        case 0x1d1ee8u: goto label_1d1ee8;
        case 0x1d1eecu: goto label_1d1eec;
        case 0x1d1ef0u: goto label_1d1ef0;
        case 0x1d1ef4u: goto label_1d1ef4;
        case 0x1d1ef8u: goto label_1d1ef8;
        case 0x1d1efcu: goto label_1d1efc;
        case 0x1d1f00u: goto label_1d1f00;
        case 0x1d1f04u: goto label_1d1f04;
        case 0x1d1f08u: goto label_1d1f08;
        case 0x1d1f0cu: goto label_1d1f0c;
        case 0x1d1f10u: goto label_1d1f10;
        case 0x1d1f14u: goto label_1d1f14;
        case 0x1d1f18u: goto label_1d1f18;
        case 0x1d1f1cu: goto label_1d1f1c;
        case 0x1d1f20u: goto label_1d1f20;
        case 0x1d1f24u: goto label_1d1f24;
        case 0x1d1f28u: goto label_1d1f28;
        case 0x1d1f2cu: goto label_1d1f2c;
        case 0x1d1f30u: goto label_1d1f30;
        case 0x1d1f34u: goto label_1d1f34;
        case 0x1d1f38u: goto label_1d1f38;
        case 0x1d1f3cu: goto label_1d1f3c;
        case 0x1d1f40u: goto label_1d1f40;
        case 0x1d1f44u: goto label_1d1f44;
        case 0x1d1f48u: goto label_1d1f48;
        case 0x1d1f4cu: goto label_1d1f4c;
        case 0x1d1f50u: goto label_1d1f50;
        case 0x1d1f54u: goto label_1d1f54;
        case 0x1d1f58u: goto label_1d1f58;
        case 0x1d1f5cu: goto label_1d1f5c;
        case 0x1d1f60u: goto label_1d1f60;
        case 0x1d1f64u: goto label_1d1f64;
        case 0x1d1f68u: goto label_1d1f68;
        case 0x1d1f6cu: goto label_1d1f6c;
        case 0x1d1f70u: goto label_1d1f70;
        case 0x1d1f74u: goto label_1d1f74;
        case 0x1d1f78u: goto label_1d1f78;
        case 0x1d1f7cu: goto label_1d1f7c;
        case 0x1d1f80u: goto label_1d1f80;
        case 0x1d1f84u: goto label_1d1f84;
        case 0x1d1f88u: goto label_1d1f88;
        case 0x1d1f8cu: goto label_1d1f8c;
        case 0x1d1f90u: goto label_1d1f90;
        case 0x1d1f94u: goto label_1d1f94;
        case 0x1d1f98u: goto label_1d1f98;
        case 0x1d1f9cu: goto label_1d1f9c;
        case 0x1d1fa0u: goto label_1d1fa0;
        case 0x1d1fa4u: goto label_1d1fa4;
        case 0x1d1fa8u: goto label_1d1fa8;
        case 0x1d1facu: goto label_1d1fac;
        case 0x1d1fb0u: goto label_1d1fb0;
        case 0x1d1fb4u: goto label_1d1fb4;
        case 0x1d1fb8u: goto label_1d1fb8;
        case 0x1d1fbcu: goto label_1d1fbc;
        case 0x1d1fc0u: goto label_1d1fc0;
        case 0x1d1fc4u: goto label_1d1fc4;
        case 0x1d1fc8u: goto label_1d1fc8;
        case 0x1d1fccu: goto label_1d1fcc;
        case 0x1d1fd0u: goto label_1d1fd0;
        case 0x1d1fd4u: goto label_1d1fd4;
        case 0x1d1fd8u: goto label_1d1fd8;
        case 0x1d1fdcu: goto label_1d1fdc;
        case 0x1d1fe0u: goto label_1d1fe0;
        case 0x1d1fe4u: goto label_1d1fe4;
        case 0x1d1fe8u: goto label_1d1fe8;
        case 0x1d1fecu: goto label_1d1fec;
        case 0x1d1ff0u: goto label_1d1ff0;
        case 0x1d1ff4u: goto label_1d1ff4;
        case 0x1d1ff8u: goto label_1d1ff8;
        case 0x1d1ffcu: goto label_1d1ffc;
        case 0x1d2000u: goto label_1d2000;
        case 0x1d2004u: goto label_1d2004;
        case 0x1d2008u: goto label_1d2008;
        case 0x1d200cu: goto label_1d200c;
        case 0x1d2010u: goto label_1d2010;
        case 0x1d2014u: goto label_1d2014;
        case 0x1d2018u: goto label_1d2018;
        case 0x1d201cu: goto label_1d201c;
        case 0x1d2020u: goto label_1d2020;
        case 0x1d2024u: goto label_1d2024;
        case 0x1d2028u: goto label_1d2028;
        case 0x1d202cu: goto label_1d202c;
        case 0x1d2030u: goto label_1d2030;
        case 0x1d2034u: goto label_1d2034;
        case 0x1d2038u: goto label_1d2038;
        case 0x1d203cu: goto label_1d203c;
        case 0x1d2040u: goto label_1d2040;
        case 0x1d2044u: goto label_1d2044;
        case 0x1d2048u: goto label_1d2048;
        case 0x1d204cu: goto label_1d204c;
        case 0x1d2050u: goto label_1d2050;
        case 0x1d2054u: goto label_1d2054;
        case 0x1d2058u: goto label_1d2058;
        case 0x1d205cu: goto label_1d205c;
        case 0x1d2060u: goto label_1d2060;
        case 0x1d2064u: goto label_1d2064;
        case 0x1d2068u: goto label_1d2068;
        case 0x1d206cu: goto label_1d206c;
        case 0x1d2070u: goto label_1d2070;
        case 0x1d2074u: goto label_1d2074;
        case 0x1d2078u: goto label_1d2078;
        case 0x1d207cu: goto label_1d207c;
        case 0x1d2080u: goto label_1d2080;
        case 0x1d2084u: goto label_1d2084;
        case 0x1d2088u: goto label_1d2088;
        case 0x1d208cu: goto label_1d208c;
        case 0x1d2090u: goto label_1d2090;
        case 0x1d2094u: goto label_1d2094;
        case 0x1d2098u: goto label_1d2098;
        case 0x1d209cu: goto label_1d209c;
        case 0x1d20a0u: goto label_1d20a0;
        case 0x1d20a4u: goto label_1d20a4;
        case 0x1d20a8u: goto label_1d20a8;
        case 0x1d20acu: goto label_1d20ac;
        case 0x1d20b0u: goto label_1d20b0;
        case 0x1d20b4u: goto label_1d20b4;
        case 0x1d20b8u: goto label_1d20b8;
        case 0x1d20bcu: goto label_1d20bc;
        case 0x1d20c0u: goto label_1d20c0;
        case 0x1d20c4u: goto label_1d20c4;
        case 0x1d20c8u: goto label_1d20c8;
        case 0x1d20ccu: goto label_1d20cc;
        case 0x1d20d0u: goto label_1d20d0;
        case 0x1d20d4u: goto label_1d20d4;
        case 0x1d20d8u: goto label_1d20d8;
        case 0x1d20dcu: goto label_1d20dc;
        case 0x1d20e0u: goto label_1d20e0;
        case 0x1d20e4u: goto label_1d20e4;
        case 0x1d20e8u: goto label_1d20e8;
        case 0x1d20ecu: goto label_1d20ec;
        case 0x1d20f0u: goto label_1d20f0;
        case 0x1d20f4u: goto label_1d20f4;
        case 0x1d20f8u: goto label_1d20f8;
        case 0x1d20fcu: goto label_1d20fc;
        case 0x1d2100u: goto label_1d2100;
        case 0x1d2104u: goto label_1d2104;
        case 0x1d2108u: goto label_1d2108;
        case 0x1d210cu: goto label_1d210c;
        case 0x1d2110u: goto label_1d2110;
        case 0x1d2114u: goto label_1d2114;
        case 0x1d2118u: goto label_1d2118;
        case 0x1d211cu: goto label_1d211c;
        case 0x1d2120u: goto label_1d2120;
        case 0x1d2124u: goto label_1d2124;
        case 0x1d2128u: goto label_1d2128;
        case 0x1d212cu: goto label_1d212c;
        case 0x1d2130u: goto label_1d2130;
        case 0x1d2134u: goto label_1d2134;
        case 0x1d2138u: goto label_1d2138;
        case 0x1d213cu: goto label_1d213c;
        case 0x1d2140u: goto label_1d2140;
        case 0x1d2144u: goto label_1d2144;
        case 0x1d2148u: goto label_1d2148;
        case 0x1d214cu: goto label_1d214c;
        case 0x1d2150u: goto label_1d2150;
        case 0x1d2154u: goto label_1d2154;
        case 0x1d2158u: goto label_1d2158;
        case 0x1d215cu: goto label_1d215c;
        case 0x1d2160u: goto label_1d2160;
        case 0x1d2164u: goto label_1d2164;
        case 0x1d2168u: goto label_1d2168;
        case 0x1d216cu: goto label_1d216c;
        case 0x1d2170u: goto label_1d2170;
        case 0x1d2174u: goto label_1d2174;
        case 0x1d2178u: goto label_1d2178;
        case 0x1d217cu: goto label_1d217c;
        case 0x1d2180u: goto label_1d2180;
        case 0x1d2184u: goto label_1d2184;
        case 0x1d2188u: goto label_1d2188;
        case 0x1d218cu: goto label_1d218c;
        case 0x1d2190u: goto label_1d2190;
        case 0x1d2194u: goto label_1d2194;
        case 0x1d2198u: goto label_1d2198;
        case 0x1d219cu: goto label_1d219c;
        case 0x1d21a0u: goto label_1d21a0;
        case 0x1d21a4u: goto label_1d21a4;
        case 0x1d21a8u: goto label_1d21a8;
        case 0x1d21acu: goto label_1d21ac;
        case 0x1d21b0u: goto label_1d21b0;
        case 0x1d21b4u: goto label_1d21b4;
        case 0x1d21b8u: goto label_1d21b8;
        case 0x1d21bcu: goto label_1d21bc;
        case 0x1d21c0u: goto label_1d21c0;
        case 0x1d21c4u: goto label_1d21c4;
        case 0x1d21c8u: goto label_1d21c8;
        case 0x1d21ccu: goto label_1d21cc;
        case 0x1d21d0u: goto label_1d21d0;
        case 0x1d21d4u: goto label_1d21d4;
        case 0x1d21d8u: goto label_1d21d8;
        case 0x1d21dcu: goto label_1d21dc;
        case 0x1d21e0u: goto label_1d21e0;
        case 0x1d21e4u: goto label_1d21e4;
        case 0x1d21e8u: goto label_1d21e8;
        case 0x1d21ecu: goto label_1d21ec;
        case 0x1d21f0u: goto label_1d21f0;
        case 0x1d21f4u: goto label_1d21f4;
        case 0x1d21f8u: goto label_1d21f8;
        case 0x1d21fcu: goto label_1d21fc;
        case 0x1d2200u: goto label_1d2200;
        case 0x1d2204u: goto label_1d2204;
        case 0x1d2208u: goto label_1d2208;
        case 0x1d220cu: goto label_1d220c;
        case 0x1d2210u: goto label_1d2210;
        case 0x1d2214u: goto label_1d2214;
        case 0x1d2218u: goto label_1d2218;
        case 0x1d221cu: goto label_1d221c;
        case 0x1d2220u: goto label_1d2220;
        case 0x1d2224u: goto label_1d2224;
        case 0x1d2228u: goto label_1d2228;
        case 0x1d222cu: goto label_1d222c;
        case 0x1d2230u: goto label_1d2230;
        case 0x1d2234u: goto label_1d2234;
        case 0x1d2238u: goto label_1d2238;
        case 0x1d223cu: goto label_1d223c;
        case 0x1d2240u: goto label_1d2240;
        case 0x1d2244u: goto label_1d2244;
        case 0x1d2248u: goto label_1d2248;
        case 0x1d224cu: goto label_1d224c;
        case 0x1d2250u: goto label_1d2250;
        case 0x1d2254u: goto label_1d2254;
        case 0x1d2258u: goto label_1d2258;
        case 0x1d225cu: goto label_1d225c;
        case 0x1d2260u: goto label_1d2260;
        case 0x1d2264u: goto label_1d2264;
        case 0x1d2268u: goto label_1d2268;
        case 0x1d226cu: goto label_1d226c;
        case 0x1d2270u: goto label_1d2270;
        case 0x1d2274u: goto label_1d2274;
        case 0x1d2278u: goto label_1d2278;
        case 0x1d227cu: goto label_1d227c;
        case 0x1d2280u: goto label_1d2280;
        case 0x1d2284u: goto label_1d2284;
        case 0x1d2288u: goto label_1d2288;
        case 0x1d228cu: goto label_1d228c;
        case 0x1d2290u: goto label_1d2290;
        case 0x1d2294u: goto label_1d2294;
        case 0x1d2298u: goto label_1d2298;
        case 0x1d229cu: goto label_1d229c;
        case 0x1d22a0u: goto label_1d22a0;
        case 0x1d22a4u: goto label_1d22a4;
        case 0x1d22a8u: goto label_1d22a8;
        case 0x1d22acu: goto label_1d22ac;
        case 0x1d22b0u: goto label_1d22b0;
        case 0x1d22b4u: goto label_1d22b4;
        case 0x1d22b8u: goto label_1d22b8;
        case 0x1d22bcu: goto label_1d22bc;
        case 0x1d22c0u: goto label_1d22c0;
        case 0x1d22c4u: goto label_1d22c4;
        case 0x1d22c8u: goto label_1d22c8;
        case 0x1d22ccu: goto label_1d22cc;
        case 0x1d22d0u: goto label_1d22d0;
        case 0x1d22d4u: goto label_1d22d4;
        case 0x1d22d8u: goto label_1d22d8;
        case 0x1d22dcu: goto label_1d22dc;
        case 0x1d22e0u: goto label_1d22e0;
        case 0x1d22e4u: goto label_1d22e4;
        case 0x1d22e8u: goto label_1d22e8;
        case 0x1d22ecu: goto label_1d22ec;
        case 0x1d22f0u: goto label_1d22f0;
        case 0x1d22f4u: goto label_1d22f4;
        case 0x1d22f8u: goto label_1d22f8;
        case 0x1d22fcu: goto label_1d22fc;
        case 0x1d2300u: goto label_1d2300;
        case 0x1d2304u: goto label_1d2304;
        case 0x1d2308u: goto label_1d2308;
        case 0x1d230cu: goto label_1d230c;
        case 0x1d2310u: goto label_1d2310;
        case 0x1d2314u: goto label_1d2314;
        case 0x1d2318u: goto label_1d2318;
        case 0x1d231cu: goto label_1d231c;
        case 0x1d2320u: goto label_1d2320;
        case 0x1d2324u: goto label_1d2324;
        case 0x1d2328u: goto label_1d2328;
        case 0x1d232cu: goto label_1d232c;
        case 0x1d2330u: goto label_1d2330;
        case 0x1d2334u: goto label_1d2334;
        case 0x1d2338u: goto label_1d2338;
        case 0x1d233cu: goto label_1d233c;
        case 0x1d2340u: goto label_1d2340;
        case 0x1d2344u: goto label_1d2344;
        case 0x1d2348u: goto label_1d2348;
        case 0x1d234cu: goto label_1d234c;
        case 0x1d2350u: goto label_1d2350;
        case 0x1d2354u: goto label_1d2354;
        case 0x1d2358u: goto label_1d2358;
        case 0x1d235cu: goto label_1d235c;
        case 0x1d2360u: goto label_1d2360;
        case 0x1d2364u: goto label_1d2364;
        case 0x1d2368u: goto label_1d2368;
        case 0x1d236cu: goto label_1d236c;
        case 0x1d2370u: goto label_1d2370;
        case 0x1d2374u: goto label_1d2374;
        case 0x1d2378u: goto label_1d2378;
        case 0x1d237cu: goto label_1d237c;
        case 0x1d2380u: goto label_1d2380;
        case 0x1d2384u: goto label_1d2384;
        case 0x1d2388u: goto label_1d2388;
        case 0x1d238cu: goto label_1d238c;
        case 0x1d2390u: goto label_1d2390;
        case 0x1d2394u: goto label_1d2394;
        case 0x1d2398u: goto label_1d2398;
        case 0x1d239cu: goto label_1d239c;
        case 0x1d23a0u: goto label_1d23a0;
        case 0x1d23a4u: goto label_1d23a4;
        case 0x1d23a8u: goto label_1d23a8;
        case 0x1d23acu: goto label_1d23ac;
        case 0x1d23b0u: goto label_1d23b0;
        case 0x1d23b4u: goto label_1d23b4;
        case 0x1d23b8u: goto label_1d23b8;
        case 0x1d23bcu: goto label_1d23bc;
        case 0x1d23c0u: goto label_1d23c0;
        case 0x1d23c4u: goto label_1d23c4;
        case 0x1d23c8u: goto label_1d23c8;
        case 0x1d23ccu: goto label_1d23cc;
        case 0x1d23d0u: goto label_1d23d0;
        case 0x1d23d4u: goto label_1d23d4;
        case 0x1d23d8u: goto label_1d23d8;
        case 0x1d23dcu: goto label_1d23dc;
        case 0x1d23e0u: goto label_1d23e0;
        case 0x1d23e4u: goto label_1d23e4;
        case 0x1d23e8u: goto label_1d23e8;
        case 0x1d23ecu: goto label_1d23ec;
        case 0x1d23f0u: goto label_1d23f0;
        case 0x1d23f4u: goto label_1d23f4;
        case 0x1d23f8u: goto label_1d23f8;
        case 0x1d23fcu: goto label_1d23fc;
        case 0x1d2400u: goto label_1d2400;
        case 0x1d2404u: goto label_1d2404;
        case 0x1d2408u: goto label_1d2408;
        case 0x1d240cu: goto label_1d240c;
        case 0x1d2410u: goto label_1d2410;
        case 0x1d2414u: goto label_1d2414;
        case 0x1d2418u: goto label_1d2418;
        case 0x1d241cu: goto label_1d241c;
        case 0x1d2420u: goto label_1d2420;
        case 0x1d2424u: goto label_1d2424;
        case 0x1d2428u: goto label_1d2428;
        case 0x1d242cu: goto label_1d242c;
        case 0x1d2430u: goto label_1d2430;
        case 0x1d2434u: goto label_1d2434;
        case 0x1d2438u: goto label_1d2438;
        case 0x1d243cu: goto label_1d243c;
        case 0x1d2440u: goto label_1d2440;
        case 0x1d2444u: goto label_1d2444;
        case 0x1d2448u: goto label_1d2448;
        case 0x1d244cu: goto label_1d244c;
        case 0x1d2450u: goto label_1d2450;
        case 0x1d2454u: goto label_1d2454;
        case 0x1d2458u: goto label_1d2458;
        case 0x1d245cu: goto label_1d245c;
        case 0x1d2460u: goto label_1d2460;
        case 0x1d2464u: goto label_1d2464;
        case 0x1d2468u: goto label_1d2468;
        case 0x1d246cu: goto label_1d246c;
        case 0x1d2470u: goto label_1d2470;
        case 0x1d2474u: goto label_1d2474;
        case 0x1d2478u: goto label_1d2478;
        case 0x1d247cu: goto label_1d247c;
        case 0x1d2480u: goto label_1d2480;
        case 0x1d2484u: goto label_1d2484;
        case 0x1d2488u: goto label_1d2488;
        case 0x1d248cu: goto label_1d248c;
        case 0x1d2490u: goto label_1d2490;
        case 0x1d2494u: goto label_1d2494;
        case 0x1d2498u: goto label_1d2498;
        case 0x1d249cu: goto label_1d249c;
        case 0x1d24a0u: goto label_1d24a0;
        case 0x1d24a4u: goto label_1d24a4;
        case 0x1d24a8u: goto label_1d24a8;
        case 0x1d24acu: goto label_1d24ac;
        case 0x1d24b0u: goto label_1d24b0;
        case 0x1d24b4u: goto label_1d24b4;
        case 0x1d24b8u: goto label_1d24b8;
        case 0x1d24bcu: goto label_1d24bc;
        case 0x1d24c0u: goto label_1d24c0;
        case 0x1d24c4u: goto label_1d24c4;
        case 0x1d24c8u: goto label_1d24c8;
        case 0x1d24ccu: goto label_1d24cc;
        case 0x1d24d0u: goto label_1d24d0;
        case 0x1d24d4u: goto label_1d24d4;
        case 0x1d24d8u: goto label_1d24d8;
        case 0x1d24dcu: goto label_1d24dc;
        case 0x1d24e0u: goto label_1d24e0;
        case 0x1d24e4u: goto label_1d24e4;
        case 0x1d24e8u: goto label_1d24e8;
        case 0x1d24ecu: goto label_1d24ec;
        case 0x1d24f0u: goto label_1d24f0;
        case 0x1d24f4u: goto label_1d24f4;
        case 0x1d24f8u: goto label_1d24f8;
        case 0x1d24fcu: goto label_1d24fc;
        case 0x1d2500u: goto label_1d2500;
        case 0x1d2504u: goto label_1d2504;
        case 0x1d2508u: goto label_1d2508;
        case 0x1d250cu: goto label_1d250c;
        case 0x1d2510u: goto label_1d2510;
        case 0x1d2514u: goto label_1d2514;
        case 0x1d2518u: goto label_1d2518;
        case 0x1d251cu: goto label_1d251c;
        case 0x1d2520u: goto label_1d2520;
        case 0x1d2524u: goto label_1d2524;
        case 0x1d2528u: goto label_1d2528;
        case 0x1d252cu: goto label_1d252c;
        case 0x1d2530u: goto label_1d2530;
        case 0x1d2534u: goto label_1d2534;
        case 0x1d2538u: goto label_1d2538;
        case 0x1d253cu: goto label_1d253c;
        case 0x1d2540u: goto label_1d2540;
        case 0x1d2544u: goto label_1d2544;
        case 0x1d2548u: goto label_1d2548;
        case 0x1d254cu: goto label_1d254c;
        case 0x1d2550u: goto label_1d2550;
        case 0x1d2554u: goto label_1d2554;
        case 0x1d2558u: goto label_1d2558;
        case 0x1d255cu: goto label_1d255c;
        case 0x1d2560u: goto label_1d2560;
        case 0x1d2564u: goto label_1d2564;
        case 0x1d2568u: goto label_1d2568;
        case 0x1d256cu: goto label_1d256c;
        case 0x1d2570u: goto label_1d2570;
        case 0x1d2574u: goto label_1d2574;
        case 0x1d2578u: goto label_1d2578;
        case 0x1d257cu: goto label_1d257c;
        case 0x1d2580u: goto label_1d2580;
        case 0x1d2584u: goto label_1d2584;
        case 0x1d2588u: goto label_1d2588;
        case 0x1d258cu: goto label_1d258c;
        case 0x1d2590u: goto label_1d2590;
        case 0x1d2594u: goto label_1d2594;
        case 0x1d2598u: goto label_1d2598;
        case 0x1d259cu: goto label_1d259c;
        case 0x1d25a0u: goto label_1d25a0;
        case 0x1d25a4u: goto label_1d25a4;
        case 0x1d25a8u: goto label_1d25a8;
        case 0x1d25acu: goto label_1d25ac;
        case 0x1d25b0u: goto label_1d25b0;
        case 0x1d25b4u: goto label_1d25b4;
        case 0x1d25b8u: goto label_1d25b8;
        case 0x1d25bcu: goto label_1d25bc;
        case 0x1d25c0u: goto label_1d25c0;
        case 0x1d25c4u: goto label_1d25c4;
        case 0x1d25c8u: goto label_1d25c8;
        case 0x1d25ccu: goto label_1d25cc;
        case 0x1d25d0u: goto label_1d25d0;
        case 0x1d25d4u: goto label_1d25d4;
        case 0x1d25d8u: goto label_1d25d8;
        case 0x1d25dcu: goto label_1d25dc;
        case 0x1d25e0u: goto label_1d25e0;
        case 0x1d25e4u: goto label_1d25e4;
        case 0x1d25e8u: goto label_1d25e8;
        case 0x1d25ecu: goto label_1d25ec;
        case 0x1d25f0u: goto label_1d25f0;
        case 0x1d25f4u: goto label_1d25f4;
        case 0x1d25f8u: goto label_1d25f8;
        case 0x1d25fcu: goto label_1d25fc;
        case 0x1d2600u: goto label_1d2600;
        case 0x1d2604u: goto label_1d2604;
        case 0x1d2608u: goto label_1d2608;
        case 0x1d260cu: goto label_1d260c;
        case 0x1d2610u: goto label_1d2610;
        case 0x1d2614u: goto label_1d2614;
        case 0x1d2618u: goto label_1d2618;
        case 0x1d261cu: goto label_1d261c;
        case 0x1d2620u: goto label_1d2620;
        case 0x1d2624u: goto label_1d2624;
        case 0x1d2628u: goto label_1d2628;
        case 0x1d262cu: goto label_1d262c;
        case 0x1d2630u: goto label_1d2630;
        case 0x1d2634u: goto label_1d2634;
        case 0x1d2638u: goto label_1d2638;
        case 0x1d263cu: goto label_1d263c;
        case 0x1d2640u: goto label_1d2640;
        case 0x1d2644u: goto label_1d2644;
        case 0x1d2648u: goto label_1d2648;
        case 0x1d264cu: goto label_1d264c;
        case 0x1d2650u: goto label_1d2650;
        case 0x1d2654u: goto label_1d2654;
        case 0x1d2658u: goto label_1d2658;
        case 0x1d265cu: goto label_1d265c;
        case 0x1d2660u: goto label_1d2660;
        case 0x1d2664u: goto label_1d2664;
        case 0x1d2668u: goto label_1d2668;
        case 0x1d266cu: goto label_1d266c;
        case 0x1d2670u: goto label_1d2670;
        case 0x1d2674u: goto label_1d2674;
        case 0x1d2678u: goto label_1d2678;
        case 0x1d267cu: goto label_1d267c;
        case 0x1d2680u: goto label_1d2680;
        case 0x1d2684u: goto label_1d2684;
        case 0x1d2688u: goto label_1d2688;
        case 0x1d268cu: goto label_1d268c;
        case 0x1d2690u: goto label_1d2690;
        case 0x1d2694u: goto label_1d2694;
        case 0x1d2698u: goto label_1d2698;
        case 0x1d269cu: goto label_1d269c;
        case 0x1d26a0u: goto label_1d26a0;
        case 0x1d26a4u: goto label_1d26a4;
        case 0x1d26a8u: goto label_1d26a8;
        case 0x1d26acu: goto label_1d26ac;
        case 0x1d26b0u: goto label_1d26b0;
        case 0x1d26b4u: goto label_1d26b4;
        case 0x1d26b8u: goto label_1d26b8;
        case 0x1d26bcu: goto label_1d26bc;
        case 0x1d26c0u: goto label_1d26c0;
        case 0x1d26c4u: goto label_1d26c4;
        case 0x1d26c8u: goto label_1d26c8;
        case 0x1d26ccu: goto label_1d26cc;
        case 0x1d26d0u: goto label_1d26d0;
        case 0x1d26d4u: goto label_1d26d4;
        case 0x1d26d8u: goto label_1d26d8;
        case 0x1d26dcu: goto label_1d26dc;
        case 0x1d26e0u: goto label_1d26e0;
        case 0x1d26e4u: goto label_1d26e4;
        case 0x1d26e8u: goto label_1d26e8;
        case 0x1d26ecu: goto label_1d26ec;
        case 0x1d26f0u: goto label_1d26f0;
        case 0x1d26f4u: goto label_1d26f4;
        case 0x1d26f8u: goto label_1d26f8;
        case 0x1d26fcu: goto label_1d26fc;
        case 0x1d2700u: goto label_1d2700;
        case 0x1d2704u: goto label_1d2704;
        case 0x1d2708u: goto label_1d2708;
        case 0x1d270cu: goto label_1d270c;
        case 0x1d2710u: goto label_1d2710;
        case 0x1d2714u: goto label_1d2714;
        case 0x1d2718u: goto label_1d2718;
        case 0x1d271cu: goto label_1d271c;
        case 0x1d2720u: goto label_1d2720;
        case 0x1d2724u: goto label_1d2724;
        case 0x1d2728u: goto label_1d2728;
        case 0x1d272cu: goto label_1d272c;
        case 0x1d2730u: goto label_1d2730;
        case 0x1d2734u: goto label_1d2734;
        case 0x1d2738u: goto label_1d2738;
        case 0x1d273cu: goto label_1d273c;
        case 0x1d2740u: goto label_1d2740;
        case 0x1d2744u: goto label_1d2744;
        case 0x1d2748u: goto label_1d2748;
        case 0x1d274cu: goto label_1d274c;
        case 0x1d2750u: goto label_1d2750;
        case 0x1d2754u: goto label_1d2754;
        case 0x1d2758u: goto label_1d2758;
        case 0x1d275cu: goto label_1d275c;
        case 0x1d2760u: goto label_1d2760;
        case 0x1d2764u: goto label_1d2764;
        case 0x1d2768u: goto label_1d2768;
        case 0x1d276cu: goto label_1d276c;
        case 0x1d2770u: goto label_1d2770;
        case 0x1d2774u: goto label_1d2774;
        case 0x1d2778u: goto label_1d2778;
        case 0x1d277cu: goto label_1d277c;
        case 0x1d2780u: goto label_1d2780;
        case 0x1d2784u: goto label_1d2784;
        case 0x1d2788u: goto label_1d2788;
        case 0x1d278cu: goto label_1d278c;
        case 0x1d2790u: goto label_1d2790;
        case 0x1d2794u: goto label_1d2794;
        case 0x1d2798u: goto label_1d2798;
        case 0x1d279cu: goto label_1d279c;
        case 0x1d27a0u: goto label_1d27a0;
        case 0x1d27a4u: goto label_1d27a4;
        case 0x1d27a8u: goto label_1d27a8;
        case 0x1d27acu: goto label_1d27ac;
        case 0x1d27b0u: goto label_1d27b0;
        case 0x1d27b4u: goto label_1d27b4;
        case 0x1d27b8u: goto label_1d27b8;
        case 0x1d27bcu: goto label_1d27bc;
        case 0x1d27c0u: goto label_1d27c0;
        case 0x1d27c4u: goto label_1d27c4;
        case 0x1d27c8u: goto label_1d27c8;
        case 0x1d27ccu: goto label_1d27cc;
        case 0x1d27d0u: goto label_1d27d0;
        case 0x1d27d4u: goto label_1d27d4;
        case 0x1d27d8u: goto label_1d27d8;
        case 0x1d27dcu: goto label_1d27dc;
        case 0x1d27e0u: goto label_1d27e0;
        case 0x1d27e4u: goto label_1d27e4;
        case 0x1d27e8u: goto label_1d27e8;
        case 0x1d27ecu: goto label_1d27ec;
        case 0x1d27f0u: goto label_1d27f0;
        case 0x1d27f4u: goto label_1d27f4;
        case 0x1d27f8u: goto label_1d27f8;
        case 0x1d27fcu: goto label_1d27fc;
        case 0x1d2800u: goto label_1d2800;
        case 0x1d2804u: goto label_1d2804;
        case 0x1d2808u: goto label_1d2808;
        case 0x1d280cu: goto label_1d280c;
        case 0x1d2810u: goto label_1d2810;
        case 0x1d2814u: goto label_1d2814;
        case 0x1d2818u: goto label_1d2818;
        case 0x1d281cu: goto label_1d281c;
        case 0x1d2820u: goto label_1d2820;
        case 0x1d2824u: goto label_1d2824;
        case 0x1d2828u: goto label_1d2828;
        case 0x1d282cu: goto label_1d282c;
        case 0x1d2830u: goto label_1d2830;
        case 0x1d2834u: goto label_1d2834;
        case 0x1d2838u: goto label_1d2838;
        case 0x1d283cu: goto label_1d283c;
        case 0x1d2840u: goto label_1d2840;
        case 0x1d2844u: goto label_1d2844;
        case 0x1d2848u: goto label_1d2848;
        case 0x1d284cu: goto label_1d284c;
        case 0x1d2850u: goto label_1d2850;
        case 0x1d2854u: goto label_1d2854;
        case 0x1d2858u: goto label_1d2858;
        case 0x1d285cu: goto label_1d285c;
        case 0x1d2860u: goto label_1d2860;
        case 0x1d2864u: goto label_1d2864;
        case 0x1d2868u: goto label_1d2868;
        case 0x1d286cu: goto label_1d286c;
        case 0x1d2870u: goto label_1d2870;
        case 0x1d2874u: goto label_1d2874;
        case 0x1d2878u: goto label_1d2878;
        case 0x1d287cu: goto label_1d287c;
        case 0x1d2880u: goto label_1d2880;
        case 0x1d2884u: goto label_1d2884;
        case 0x1d2888u: goto label_1d2888;
        case 0x1d288cu: goto label_1d288c;
        case 0x1d2890u: goto label_1d2890;
        case 0x1d2894u: goto label_1d2894;
        case 0x1d2898u: goto label_1d2898;
        case 0x1d289cu: goto label_1d289c;
        case 0x1d28a0u: goto label_1d28a0;
        case 0x1d28a4u: goto label_1d28a4;
        case 0x1d28a8u: goto label_1d28a8;
        case 0x1d28acu: goto label_1d28ac;
        case 0x1d28b0u: goto label_1d28b0;
        case 0x1d28b4u: goto label_1d28b4;
        case 0x1d28b8u: goto label_1d28b8;
        case 0x1d28bcu: goto label_1d28bc;
        case 0x1d28c0u: goto label_1d28c0;
        case 0x1d28c4u: goto label_1d28c4;
        case 0x1d28c8u: goto label_1d28c8;
        case 0x1d28ccu: goto label_1d28cc;
        case 0x1d28d0u: goto label_1d28d0;
        case 0x1d28d4u: goto label_1d28d4;
        case 0x1d28d8u: goto label_1d28d8;
        case 0x1d28dcu: goto label_1d28dc;
        case 0x1d28e0u: goto label_1d28e0;
        case 0x1d28e4u: goto label_1d28e4;
        case 0x1d28e8u: goto label_1d28e8;
        case 0x1d28ecu: goto label_1d28ec;
        case 0x1d28f0u: goto label_1d28f0;
        case 0x1d28f4u: goto label_1d28f4;
        case 0x1d28f8u: goto label_1d28f8;
        case 0x1d28fcu: goto label_1d28fc;
        case 0x1d2900u: goto label_1d2900;
        case 0x1d2904u: goto label_1d2904;
        case 0x1d2908u: goto label_1d2908;
        case 0x1d290cu: goto label_1d290c;
        case 0x1d2910u: goto label_1d2910;
        case 0x1d2914u: goto label_1d2914;
        case 0x1d2918u: goto label_1d2918;
        case 0x1d291cu: goto label_1d291c;
        case 0x1d2920u: goto label_1d2920;
        case 0x1d2924u: goto label_1d2924;
        case 0x1d2928u: goto label_1d2928;
        case 0x1d292cu: goto label_1d292c;
        case 0x1d2930u: goto label_1d2930;
        case 0x1d2934u: goto label_1d2934;
        case 0x1d2938u: goto label_1d2938;
        case 0x1d293cu: goto label_1d293c;
        case 0x1d2940u: goto label_1d2940;
        case 0x1d2944u: goto label_1d2944;
        case 0x1d2948u: goto label_1d2948;
        case 0x1d294cu: goto label_1d294c;
        case 0x1d2950u: goto label_1d2950;
        case 0x1d2954u: goto label_1d2954;
        case 0x1d2958u: goto label_1d2958;
        case 0x1d295cu: goto label_1d295c;
        case 0x1d2960u: goto label_1d2960;
        case 0x1d2964u: goto label_1d2964;
        case 0x1d2968u: goto label_1d2968;
        case 0x1d296cu: goto label_1d296c;
        case 0x1d2970u: goto label_1d2970;
        case 0x1d2974u: goto label_1d2974;
        case 0x1d2978u: goto label_1d2978;
        case 0x1d297cu: goto label_1d297c;
        case 0x1d2980u: goto label_1d2980;
        case 0x1d2984u: goto label_1d2984;
        case 0x1d2988u: goto label_1d2988;
        case 0x1d298cu: goto label_1d298c;
        case 0x1d2990u: goto label_1d2990;
        case 0x1d2994u: goto label_1d2994;
        case 0x1d2998u: goto label_1d2998;
        case 0x1d299cu: goto label_1d299c;
        case 0x1d29a0u: goto label_1d29a0;
        case 0x1d29a4u: goto label_1d29a4;
        case 0x1d29a8u: goto label_1d29a8;
        case 0x1d29acu: goto label_1d29ac;
        case 0x1d29b0u: goto label_1d29b0;
        case 0x1d29b4u: goto label_1d29b4;
        case 0x1d29b8u: goto label_1d29b8;
        case 0x1d29bcu: goto label_1d29bc;
        case 0x1d29c0u: goto label_1d29c0;
        case 0x1d29c4u: goto label_1d29c4;
        case 0x1d29c8u: goto label_1d29c8;
        case 0x1d29ccu: goto label_1d29cc;
        case 0x1d29d0u: goto label_1d29d0;
        case 0x1d29d4u: goto label_1d29d4;
        case 0x1d29d8u: goto label_1d29d8;
        case 0x1d29dcu: goto label_1d29dc;
        case 0x1d29e0u: goto label_1d29e0;
        case 0x1d29e4u: goto label_1d29e4;
        case 0x1d29e8u: goto label_1d29e8;
        case 0x1d29ecu: goto label_1d29ec;
        case 0x1d29f0u: goto label_1d29f0;
        case 0x1d29f4u: goto label_1d29f4;
        case 0x1d29f8u: goto label_1d29f8;
        case 0x1d29fcu: goto label_1d29fc;
        case 0x1d2a00u: goto label_1d2a00;
        case 0x1d2a04u: goto label_1d2a04;
        case 0x1d2a08u: goto label_1d2a08;
        case 0x1d2a0cu: goto label_1d2a0c;
        case 0x1d2a10u: goto label_1d2a10;
        case 0x1d2a14u: goto label_1d2a14;
        case 0x1d2a18u: goto label_1d2a18;
        case 0x1d2a1cu: goto label_1d2a1c;
        case 0x1d2a20u: goto label_1d2a20;
        case 0x1d2a24u: goto label_1d2a24;
        case 0x1d2a28u: goto label_1d2a28;
        case 0x1d2a2cu: goto label_1d2a2c;
        case 0x1d2a30u: goto label_1d2a30;
        case 0x1d2a34u: goto label_1d2a34;
        case 0x1d2a38u: goto label_1d2a38;
        case 0x1d2a3cu: goto label_1d2a3c;
        case 0x1d2a40u: goto label_1d2a40;
        case 0x1d2a44u: goto label_1d2a44;
        case 0x1d2a48u: goto label_1d2a48;
        case 0x1d2a4cu: goto label_1d2a4c;
        case 0x1d2a50u: goto label_1d2a50;
        case 0x1d2a54u: goto label_1d2a54;
        case 0x1d2a58u: goto label_1d2a58;
        case 0x1d2a5cu: goto label_1d2a5c;
        case 0x1d2a60u: goto label_1d2a60;
        case 0x1d2a64u: goto label_1d2a64;
        case 0x1d2a68u: goto label_1d2a68;
        case 0x1d2a6cu: goto label_1d2a6c;
        case 0x1d2a70u: goto label_1d2a70;
        case 0x1d2a74u: goto label_1d2a74;
        case 0x1d2a78u: goto label_1d2a78;
        case 0x1d2a7cu: goto label_1d2a7c;
        case 0x1d2a80u: goto label_1d2a80;
        case 0x1d2a84u: goto label_1d2a84;
        case 0x1d2a88u: goto label_1d2a88;
        case 0x1d2a8cu: goto label_1d2a8c;
        case 0x1d2a90u: goto label_1d2a90;
        case 0x1d2a94u: goto label_1d2a94;
        case 0x1d2a98u: goto label_1d2a98;
        case 0x1d2a9cu: goto label_1d2a9c;
        case 0x1d2aa0u: goto label_1d2aa0;
        case 0x1d2aa4u: goto label_1d2aa4;
        case 0x1d2aa8u: goto label_1d2aa8;
        case 0x1d2aacu: goto label_1d2aac;
        case 0x1d2ab0u: goto label_1d2ab0;
        case 0x1d2ab4u: goto label_1d2ab4;
        case 0x1d2ab8u: goto label_1d2ab8;
        case 0x1d2abcu: goto label_1d2abc;
        case 0x1d2ac0u: goto label_1d2ac0;
        case 0x1d2ac4u: goto label_1d2ac4;
        case 0x1d2ac8u: goto label_1d2ac8;
        case 0x1d2accu: goto label_1d2acc;
        case 0x1d2ad0u: goto label_1d2ad0;
        case 0x1d2ad4u: goto label_1d2ad4;
        case 0x1d2ad8u: goto label_1d2ad8;
        case 0x1d2adcu: goto label_1d2adc;
        case 0x1d2ae0u: goto label_1d2ae0;
        case 0x1d2ae4u: goto label_1d2ae4;
        case 0x1d2ae8u: goto label_1d2ae8;
        case 0x1d2aecu: goto label_1d2aec;
        case 0x1d2af0u: goto label_1d2af0;
        case 0x1d2af4u: goto label_1d2af4;
        case 0x1d2af8u: goto label_1d2af8;
        case 0x1d2afcu: goto label_1d2afc;
        case 0x1d2b00u: goto label_1d2b00;
        case 0x1d2b04u: goto label_1d2b04;
        case 0x1d2b08u: goto label_1d2b08;
        case 0x1d2b0cu: goto label_1d2b0c;
        case 0x1d2b10u: goto label_1d2b10;
        case 0x1d2b14u: goto label_1d2b14;
        case 0x1d2b18u: goto label_1d2b18;
        case 0x1d2b1cu: goto label_1d2b1c;
        case 0x1d2b20u: goto label_1d2b20;
        case 0x1d2b24u: goto label_1d2b24;
        case 0x1d2b28u: goto label_1d2b28;
        case 0x1d2b2cu: goto label_1d2b2c;
        case 0x1d2b30u: goto label_1d2b30;
        case 0x1d2b34u: goto label_1d2b34;
        case 0x1d2b38u: goto label_1d2b38;
        case 0x1d2b3cu: goto label_1d2b3c;
        case 0x1d2b40u: goto label_1d2b40;
        case 0x1d2b44u: goto label_1d2b44;
        case 0x1d2b48u: goto label_1d2b48;
        case 0x1d2b4cu: goto label_1d2b4c;
        case 0x1d2b50u: goto label_1d2b50;
        case 0x1d2b54u: goto label_1d2b54;
        case 0x1d2b58u: goto label_1d2b58;
        case 0x1d2b5cu: goto label_1d2b5c;
        case 0x1d2b60u: goto label_1d2b60;
        case 0x1d2b64u: goto label_1d2b64;
        case 0x1d2b68u: goto label_1d2b68;
        case 0x1d2b6cu: goto label_1d2b6c;
        case 0x1d2b70u: goto label_1d2b70;
        case 0x1d2b74u: goto label_1d2b74;
        case 0x1d2b78u: goto label_1d2b78;
        case 0x1d2b7cu: goto label_1d2b7c;
        case 0x1d2b80u: goto label_1d2b80;
        case 0x1d2b84u: goto label_1d2b84;
        case 0x1d2b88u: goto label_1d2b88;
        case 0x1d2b8cu: goto label_1d2b8c;
        case 0x1d2b90u: goto label_1d2b90;
        case 0x1d2b94u: goto label_1d2b94;
        case 0x1d2b98u: goto label_1d2b98;
        case 0x1d2b9cu: goto label_1d2b9c;
        case 0x1d2ba0u: goto label_1d2ba0;
        case 0x1d2ba4u: goto label_1d2ba4;
        case 0x1d2ba8u: goto label_1d2ba8;
        case 0x1d2bacu: goto label_1d2bac;
        case 0x1d2bb0u: goto label_1d2bb0;
        case 0x1d2bb4u: goto label_1d2bb4;
        case 0x1d2bb8u: goto label_1d2bb8;
        case 0x1d2bbcu: goto label_1d2bbc;
        case 0x1d2bc0u: goto label_1d2bc0;
        case 0x1d2bc4u: goto label_1d2bc4;
        case 0x1d2bc8u: goto label_1d2bc8;
        case 0x1d2bccu: goto label_1d2bcc;
        case 0x1d2bd0u: goto label_1d2bd0;
        case 0x1d2bd4u: goto label_1d2bd4;
        case 0x1d2bd8u: goto label_1d2bd8;
        case 0x1d2bdcu: goto label_1d2bdc;
        case 0x1d2be0u: goto label_1d2be0;
        case 0x1d2be4u: goto label_1d2be4;
        case 0x1d2be8u: goto label_1d2be8;
        case 0x1d2becu: goto label_1d2bec;
        case 0x1d2bf0u: goto label_1d2bf0;
        case 0x1d2bf4u: goto label_1d2bf4;
        case 0x1d2bf8u: goto label_1d2bf8;
        case 0x1d2bfcu: goto label_1d2bfc;
        case 0x1d2c00u: goto label_1d2c00;
        case 0x1d2c04u: goto label_1d2c04;
        case 0x1d2c08u: goto label_1d2c08;
        case 0x1d2c0cu: goto label_1d2c0c;
        case 0x1d2c10u: goto label_1d2c10;
        case 0x1d2c14u: goto label_1d2c14;
        case 0x1d2c18u: goto label_1d2c18;
        case 0x1d2c1cu: goto label_1d2c1c;
        case 0x1d2c20u: goto label_1d2c20;
        case 0x1d2c24u: goto label_1d2c24;
        case 0x1d2c28u: goto label_1d2c28;
        case 0x1d2c2cu: goto label_1d2c2c;
        case 0x1d2c30u: goto label_1d2c30;
        case 0x1d2c34u: goto label_1d2c34;
        case 0x1d2c38u: goto label_1d2c38;
        case 0x1d2c3cu: goto label_1d2c3c;
        case 0x1d2c40u: goto label_1d2c40;
        case 0x1d2c44u: goto label_1d2c44;
        case 0x1d2c48u: goto label_1d2c48;
        case 0x1d2c4cu: goto label_1d2c4c;
        case 0x1d2c50u: goto label_1d2c50;
        case 0x1d2c54u: goto label_1d2c54;
        case 0x1d2c58u: goto label_1d2c58;
        case 0x1d2c5cu: goto label_1d2c5c;
        case 0x1d2c60u: goto label_1d2c60;
        case 0x1d2c64u: goto label_1d2c64;
        case 0x1d2c68u: goto label_1d2c68;
        case 0x1d2c6cu: goto label_1d2c6c;
        case 0x1d2c70u: goto label_1d2c70;
        case 0x1d2c74u: goto label_1d2c74;
        case 0x1d2c78u: goto label_1d2c78;
        case 0x1d2c7cu: goto label_1d2c7c;
        case 0x1d2c80u: goto label_1d2c80;
        case 0x1d2c84u: goto label_1d2c84;
        case 0x1d2c88u: goto label_1d2c88;
        case 0x1d2c8cu: goto label_1d2c8c;
        case 0x1d2c90u: goto label_1d2c90;
        case 0x1d2c94u: goto label_1d2c94;
        case 0x1d2c98u: goto label_1d2c98;
        case 0x1d2c9cu: goto label_1d2c9c;
        case 0x1d2ca0u: goto label_1d2ca0;
        case 0x1d2ca4u: goto label_1d2ca4;
        case 0x1d2ca8u: goto label_1d2ca8;
        case 0x1d2cacu: goto label_1d2cac;
        case 0x1d2cb0u: goto label_1d2cb0;
        case 0x1d2cb4u: goto label_1d2cb4;
        case 0x1d2cb8u: goto label_1d2cb8;
        case 0x1d2cbcu: goto label_1d2cbc;
        case 0x1d2cc0u: goto label_1d2cc0;
        case 0x1d2cc4u: goto label_1d2cc4;
        case 0x1d2cc8u: goto label_1d2cc8;
        case 0x1d2cccu: goto label_1d2ccc;
        case 0x1d2cd0u: goto label_1d2cd0;
        case 0x1d2cd4u: goto label_1d2cd4;
        case 0x1d2cd8u: goto label_1d2cd8;
        case 0x1d2cdcu: goto label_1d2cdc;
        case 0x1d2ce0u: goto label_1d2ce0;
        case 0x1d2ce4u: goto label_1d2ce4;
        case 0x1d2ce8u: goto label_1d2ce8;
        case 0x1d2cecu: goto label_1d2cec;
        case 0x1d2cf0u: goto label_1d2cf0;
        case 0x1d2cf4u: goto label_1d2cf4;
        case 0x1d2cf8u: goto label_1d2cf8;
        case 0x1d2cfcu: goto label_1d2cfc;
        case 0x1d2d00u: goto label_1d2d00;
        case 0x1d2d04u: goto label_1d2d04;
        case 0x1d2d08u: goto label_1d2d08;
        case 0x1d2d0cu: goto label_1d2d0c;
        case 0x1d2d10u: goto label_1d2d10;
        case 0x1d2d14u: goto label_1d2d14;
        case 0x1d2d18u: goto label_1d2d18;
        case 0x1d2d1cu: goto label_1d2d1c;
        case 0x1d2d20u: goto label_1d2d20;
        case 0x1d2d24u: goto label_1d2d24;
        case 0x1d2d28u: goto label_1d2d28;
        case 0x1d2d2cu: goto label_1d2d2c;
        case 0x1d2d30u: goto label_1d2d30;
        case 0x1d2d34u: goto label_1d2d34;
        case 0x1d2d38u: goto label_1d2d38;
        case 0x1d2d3cu: goto label_1d2d3c;
        case 0x1d2d40u: goto label_1d2d40;
        case 0x1d2d44u: goto label_1d2d44;
        case 0x1d2d48u: goto label_1d2d48;
        case 0x1d2d4cu: goto label_1d2d4c;
        case 0x1d2d50u: goto label_1d2d50;
        case 0x1d2d54u: goto label_1d2d54;
        case 0x1d2d58u: goto label_1d2d58;
        case 0x1d2d5cu: goto label_1d2d5c;
        case 0x1d2d60u: goto label_1d2d60;
        case 0x1d2d64u: goto label_1d2d64;
        case 0x1d2d68u: goto label_1d2d68;
        case 0x1d2d6cu: goto label_1d2d6c;
        case 0x1d2d70u: goto label_1d2d70;
        case 0x1d2d74u: goto label_1d2d74;
        case 0x1d2d78u: goto label_1d2d78;
        case 0x1d2d7cu: goto label_1d2d7c;
        case 0x1d2d80u: goto label_1d2d80;
        case 0x1d2d84u: goto label_1d2d84;
        case 0x1d2d88u: goto label_1d2d88;
        case 0x1d2d8cu: goto label_1d2d8c;
        case 0x1d2d90u: goto label_1d2d90;
        case 0x1d2d94u: goto label_1d2d94;
        case 0x1d2d98u: goto label_1d2d98;
        case 0x1d2d9cu: goto label_1d2d9c;
        case 0x1d2da0u: goto label_1d2da0;
        case 0x1d2da4u: goto label_1d2da4;
        case 0x1d2da8u: goto label_1d2da8;
        case 0x1d2dacu: goto label_1d2dac;
        case 0x1d2db0u: goto label_1d2db0;
        case 0x1d2db4u: goto label_1d2db4;
        case 0x1d2db8u: goto label_1d2db8;
        case 0x1d2dbcu: goto label_1d2dbc;
        case 0x1d2dc0u: goto label_1d2dc0;
        case 0x1d2dc4u: goto label_1d2dc4;
        case 0x1d2dc8u: goto label_1d2dc8;
        case 0x1d2dccu: goto label_1d2dcc;
        case 0x1d2dd0u: goto label_1d2dd0;
        case 0x1d2dd4u: goto label_1d2dd4;
        case 0x1d2dd8u: goto label_1d2dd8;
        case 0x1d2ddcu: goto label_1d2ddc;
        case 0x1d2de0u: goto label_1d2de0;
        case 0x1d2de4u: goto label_1d2de4;
        case 0x1d2de8u: goto label_1d2de8;
        case 0x1d2decu: goto label_1d2dec;
        case 0x1d2df0u: goto label_1d2df0;
        case 0x1d2df4u: goto label_1d2df4;
        case 0x1d2df8u: goto label_1d2df8;
        case 0x1d2dfcu: goto label_1d2dfc;
        case 0x1d2e00u: goto label_1d2e00;
        case 0x1d2e04u: goto label_1d2e04;
        case 0x1d2e08u: goto label_1d2e08;
        case 0x1d2e0cu: goto label_1d2e0c;
        case 0x1d2e10u: goto label_1d2e10;
        case 0x1d2e14u: goto label_1d2e14;
        case 0x1d2e18u: goto label_1d2e18;
        case 0x1d2e1cu: goto label_1d2e1c;
        case 0x1d2e20u: goto label_1d2e20;
        case 0x1d2e24u: goto label_1d2e24;
        case 0x1d2e28u: goto label_1d2e28;
        case 0x1d2e2cu: goto label_1d2e2c;
        case 0x1d2e30u: goto label_1d2e30;
        case 0x1d2e34u: goto label_1d2e34;
        case 0x1d2e38u: goto label_1d2e38;
        case 0x1d2e3cu: goto label_1d2e3c;
        case 0x1d2e40u: goto label_1d2e40;
        case 0x1d2e44u: goto label_1d2e44;
        case 0x1d2e48u: goto label_1d2e48;
        case 0x1d2e4cu: goto label_1d2e4c;
        case 0x1d2e50u: goto label_1d2e50;
        case 0x1d2e54u: goto label_1d2e54;
        case 0x1d2e58u: goto label_1d2e58;
        case 0x1d2e5cu: goto label_1d2e5c;
        case 0x1d2e60u: goto label_1d2e60;
        case 0x1d2e64u: goto label_1d2e64;
        case 0x1d2e68u: goto label_1d2e68;
        case 0x1d2e6cu: goto label_1d2e6c;
        case 0x1d2e70u: goto label_1d2e70;
        case 0x1d2e74u: goto label_1d2e74;
        case 0x1d2e78u: goto label_1d2e78;
        case 0x1d2e7cu: goto label_1d2e7c;
        case 0x1d2e80u: goto label_1d2e80;
        case 0x1d2e84u: goto label_1d2e84;
        case 0x1d2e88u: goto label_1d2e88;
        case 0x1d2e8cu: goto label_1d2e8c;
        case 0x1d2e90u: goto label_1d2e90;
        case 0x1d2e94u: goto label_1d2e94;
        case 0x1d2e98u: goto label_1d2e98;
        case 0x1d2e9cu: goto label_1d2e9c;
        case 0x1d2ea0u: goto label_1d2ea0;
        case 0x1d2ea4u: goto label_1d2ea4;
        case 0x1d2ea8u: goto label_1d2ea8;
        case 0x1d2eacu: goto label_1d2eac;
        case 0x1d2eb0u: goto label_1d2eb0;
        case 0x1d2eb4u: goto label_1d2eb4;
        case 0x1d2eb8u: goto label_1d2eb8;
        case 0x1d2ebcu: goto label_1d2ebc;
        case 0x1d2ec0u: goto label_1d2ec0;
        case 0x1d2ec4u: goto label_1d2ec4;
        case 0x1d2ec8u: goto label_1d2ec8;
        case 0x1d2eccu: goto label_1d2ecc;
        case 0x1d2ed0u: goto label_1d2ed0;
        case 0x1d2ed4u: goto label_1d2ed4;
        case 0x1d2ed8u: goto label_1d2ed8;
        case 0x1d2edcu: goto label_1d2edc;
        case 0x1d2ee0u: goto label_1d2ee0;
        case 0x1d2ee4u: goto label_1d2ee4;
        case 0x1d2ee8u: goto label_1d2ee8;
        case 0x1d2eecu: goto label_1d2eec;
        case 0x1d2ef0u: goto label_1d2ef0;
        case 0x1d2ef4u: goto label_1d2ef4;
        case 0x1d2ef8u: goto label_1d2ef8;
        case 0x1d2efcu: goto label_1d2efc;
        case 0x1d2f00u: goto label_1d2f00;
        case 0x1d2f04u: goto label_1d2f04;
        case 0x1d2f08u: goto label_1d2f08;
        case 0x1d2f0cu: goto label_1d2f0c;
        case 0x1d2f10u: goto label_1d2f10;
        case 0x1d2f14u: goto label_1d2f14;
        case 0x1d2f18u: goto label_1d2f18;
        case 0x1d2f1cu: goto label_1d2f1c;
        case 0x1d2f20u: goto label_1d2f20;
        case 0x1d2f24u: goto label_1d2f24;
        case 0x1d2f28u: goto label_1d2f28;
        case 0x1d2f2cu: goto label_1d2f2c;
        case 0x1d2f30u: goto label_1d2f30;
        case 0x1d2f34u: goto label_1d2f34;
        case 0x1d2f38u: goto label_1d2f38;
        case 0x1d2f3cu: goto label_1d2f3c;
        case 0x1d2f40u: goto label_1d2f40;
        case 0x1d2f44u: goto label_1d2f44;
        case 0x1d2f48u: goto label_1d2f48;
        case 0x1d2f4cu: goto label_1d2f4c;
        case 0x1d2f50u: goto label_1d2f50;
        case 0x1d2f54u: goto label_1d2f54;
        case 0x1d2f58u: goto label_1d2f58;
        case 0x1d2f5cu: goto label_1d2f5c;
        case 0x1d2f60u: goto label_1d2f60;
        case 0x1d2f64u: goto label_1d2f64;
        case 0x1d2f68u: goto label_1d2f68;
        case 0x1d2f6cu: goto label_1d2f6c;
        case 0x1d2f70u: goto label_1d2f70;
        case 0x1d2f74u: goto label_1d2f74;
        case 0x1d2f78u: goto label_1d2f78;
        case 0x1d2f7cu: goto label_1d2f7c;
        case 0x1d2f80u: goto label_1d2f80;
        case 0x1d2f84u: goto label_1d2f84;
        case 0x1d2f88u: goto label_1d2f88;
        case 0x1d2f8cu: goto label_1d2f8c;
        case 0x1d2f90u: goto label_1d2f90;
        case 0x1d2f94u: goto label_1d2f94;
        case 0x1d2f98u: goto label_1d2f98;
        case 0x1d2f9cu: goto label_1d2f9c;
        case 0x1d2fa0u: goto label_1d2fa0;
        case 0x1d2fa4u: goto label_1d2fa4;
        case 0x1d2fa8u: goto label_1d2fa8;
        case 0x1d2facu: goto label_1d2fac;
        case 0x1d2fb0u: goto label_1d2fb0;
        case 0x1d2fb4u: goto label_1d2fb4;
        case 0x1d2fb8u: goto label_1d2fb8;
        case 0x1d2fbcu: goto label_1d2fbc;
        case 0x1d2fc0u: goto label_1d2fc0;
        case 0x1d2fc4u: goto label_1d2fc4;
        case 0x1d2fc8u: goto label_1d2fc8;
        case 0x1d2fccu: goto label_1d2fcc;
        case 0x1d2fd0u: goto label_1d2fd0;
        case 0x1d2fd4u: goto label_1d2fd4;
        case 0x1d2fd8u: goto label_1d2fd8;
        case 0x1d2fdcu: goto label_1d2fdc;
        case 0x1d2fe0u: goto label_1d2fe0;
        case 0x1d2fe4u: goto label_1d2fe4;
        case 0x1d2fe8u: goto label_1d2fe8;
        case 0x1d2fecu: goto label_1d2fec;
        case 0x1d2ff0u: goto label_1d2ff0;
        case 0x1d2ff4u: goto label_1d2ff4;
        case 0x1d2ff8u: goto label_1d2ff8;
        case 0x1d2ffcu: goto label_1d2ffc;
        case 0x1d3000u: goto label_1d3000;
        case 0x1d3004u: goto label_1d3004;
        case 0x1d3008u: goto label_1d3008;
        case 0x1d300cu: goto label_1d300c;
        case 0x1d3010u: goto label_1d3010;
        case 0x1d3014u: goto label_1d3014;
        case 0x1d3018u: goto label_1d3018;
        case 0x1d301cu: goto label_1d301c;
        case 0x1d3020u: goto label_1d3020;
        case 0x1d3024u: goto label_1d3024;
        case 0x1d3028u: goto label_1d3028;
        case 0x1d302cu: goto label_1d302c;
        case 0x1d3030u: goto label_1d3030;
        case 0x1d3034u: goto label_1d3034;
        case 0x1d3038u: goto label_1d3038;
        case 0x1d303cu: goto label_1d303c;
        case 0x1d3040u: goto label_1d3040;
        case 0x1d3044u: goto label_1d3044;
        case 0x1d3048u: goto label_1d3048;
        case 0x1d304cu: goto label_1d304c;
        case 0x1d3050u: goto label_1d3050;
        case 0x1d3054u: goto label_1d3054;
        case 0x1d3058u: goto label_1d3058;
        case 0x1d305cu: goto label_1d305c;
        case 0x1d3060u: goto label_1d3060;
        case 0x1d3064u: goto label_1d3064;
        case 0x1d3068u: goto label_1d3068;
        case 0x1d306cu: goto label_1d306c;
        case 0x1d3070u: goto label_1d3070;
        case 0x1d3074u: goto label_1d3074;
        case 0x1d3078u: goto label_1d3078;
        case 0x1d307cu: goto label_1d307c;
        case 0x1d3080u: goto label_1d3080;
        case 0x1d3084u: goto label_1d3084;
        case 0x1d3088u: goto label_1d3088;
        case 0x1d308cu: goto label_1d308c;
        case 0x1d3090u: goto label_1d3090;
        case 0x1d3094u: goto label_1d3094;
        case 0x1d3098u: goto label_1d3098;
        case 0x1d309cu: goto label_1d309c;
        case 0x1d30a0u: goto label_1d30a0;
        case 0x1d30a4u: goto label_1d30a4;
        case 0x1d30a8u: goto label_1d30a8;
        case 0x1d30acu: goto label_1d30ac;
        case 0x1d30b0u: goto label_1d30b0;
        case 0x1d30b4u: goto label_1d30b4;
        case 0x1d30b8u: goto label_1d30b8;
        case 0x1d30bcu: goto label_1d30bc;
        case 0x1d30c0u: goto label_1d30c0;
        case 0x1d30c4u: goto label_1d30c4;
        case 0x1d30c8u: goto label_1d30c8;
        case 0x1d30ccu: goto label_1d30cc;
        case 0x1d30d0u: goto label_1d30d0;
        case 0x1d30d4u: goto label_1d30d4;
        case 0x1d30d8u: goto label_1d30d8;
        case 0x1d30dcu: goto label_1d30dc;
        case 0x1d30e0u: goto label_1d30e0;
        case 0x1d30e4u: goto label_1d30e4;
        case 0x1d30e8u: goto label_1d30e8;
        case 0x1d30ecu: goto label_1d30ec;
        case 0x1d30f0u: goto label_1d30f0;
        case 0x1d30f4u: goto label_1d30f4;
        case 0x1d30f8u: goto label_1d30f8;
        case 0x1d30fcu: goto label_1d30fc;
        case 0x1d3100u: goto label_1d3100;
        case 0x1d3104u: goto label_1d3104;
        case 0x1d3108u: goto label_1d3108;
        case 0x1d310cu: goto label_1d310c;
        case 0x1d3110u: goto label_1d3110;
        case 0x1d3114u: goto label_1d3114;
        case 0x1d3118u: goto label_1d3118;
        case 0x1d311cu: goto label_1d311c;
        case 0x1d3120u: goto label_1d3120;
        case 0x1d3124u: goto label_1d3124;
        case 0x1d3128u: goto label_1d3128;
        case 0x1d312cu: goto label_1d312c;
        case 0x1d3130u: goto label_1d3130;
        case 0x1d3134u: goto label_1d3134;
        case 0x1d3138u: goto label_1d3138;
        case 0x1d313cu: goto label_1d313c;
        case 0x1d3140u: goto label_1d3140;
        case 0x1d3144u: goto label_1d3144;
        case 0x1d3148u: goto label_1d3148;
        case 0x1d314cu: goto label_1d314c;
        case 0x1d3150u: goto label_1d3150;
        case 0x1d3154u: goto label_1d3154;
        case 0x1d3158u: goto label_1d3158;
        case 0x1d315cu: goto label_1d315c;
        case 0x1d3160u: goto label_1d3160;
        case 0x1d3164u: goto label_1d3164;
        case 0x1d3168u: goto label_1d3168;
        case 0x1d316cu: goto label_1d316c;
        case 0x1d3170u: goto label_1d3170;
        case 0x1d3174u: goto label_1d3174;
        case 0x1d3178u: goto label_1d3178;
        case 0x1d317cu: goto label_1d317c;
        case 0x1d3180u: goto label_1d3180;
        case 0x1d3184u: goto label_1d3184;
        case 0x1d3188u: goto label_1d3188;
        case 0x1d318cu: goto label_1d318c;
        case 0x1d3190u: goto label_1d3190;
        case 0x1d3194u: goto label_1d3194;
        case 0x1d3198u: goto label_1d3198;
        case 0x1d319cu: goto label_1d319c;
        case 0x1d31a0u: goto label_1d31a0;
        case 0x1d31a4u: goto label_1d31a4;
        case 0x1d31a8u: goto label_1d31a8;
        case 0x1d31acu: goto label_1d31ac;
        case 0x1d31b0u: goto label_1d31b0;
        case 0x1d31b4u: goto label_1d31b4;
        case 0x1d31b8u: goto label_1d31b8;
        case 0x1d31bcu: goto label_1d31bc;
        case 0x1d31c0u: goto label_1d31c0;
        case 0x1d31c4u: goto label_1d31c4;
        case 0x1d31c8u: goto label_1d31c8;
        case 0x1d31ccu: goto label_1d31cc;
        case 0x1d31d0u: goto label_1d31d0;
        case 0x1d31d4u: goto label_1d31d4;
        case 0x1d31d8u: goto label_1d31d8;
        case 0x1d31dcu: goto label_1d31dc;
        case 0x1d31e0u: goto label_1d31e0;
        case 0x1d31e4u: goto label_1d31e4;
        case 0x1d31e8u: goto label_1d31e8;
        case 0x1d31ecu: goto label_1d31ec;
        case 0x1d31f0u: goto label_1d31f0;
        case 0x1d31f4u: goto label_1d31f4;
        case 0x1d31f8u: goto label_1d31f8;
        case 0x1d31fcu: goto label_1d31fc;
        case 0x1d3200u: goto label_1d3200;
        case 0x1d3204u: goto label_1d3204;
        case 0x1d3208u: goto label_1d3208;
        case 0x1d320cu: goto label_1d320c;
        case 0x1d3210u: goto label_1d3210;
        case 0x1d3214u: goto label_1d3214;
        case 0x1d3218u: goto label_1d3218;
        case 0x1d321cu: goto label_1d321c;
        case 0x1d3220u: goto label_1d3220;
        case 0x1d3224u: goto label_1d3224;
        case 0x1d3228u: goto label_1d3228;
        case 0x1d322cu: goto label_1d322c;
        case 0x1d3230u: goto label_1d3230;
        case 0x1d3234u: goto label_1d3234;
        case 0x1d3238u: goto label_1d3238;
        case 0x1d323cu: goto label_1d323c;
        case 0x1d3240u: goto label_1d3240;
        case 0x1d3244u: goto label_1d3244;
        case 0x1d3248u: goto label_1d3248;
        case 0x1d324cu: goto label_1d324c;
        case 0x1d3250u: goto label_1d3250;
        case 0x1d3254u: goto label_1d3254;
        case 0x1d3258u: goto label_1d3258;
        case 0x1d325cu: goto label_1d325c;
        case 0x1d3260u: goto label_1d3260;
        case 0x1d3264u: goto label_1d3264;
        case 0x1d3268u: goto label_1d3268;
        case 0x1d326cu: goto label_1d326c;
        case 0x1d3270u: goto label_1d3270;
        case 0x1d3274u: goto label_1d3274;
        case 0x1d3278u: goto label_1d3278;
        case 0x1d327cu: goto label_1d327c;
        case 0x1d3280u: goto label_1d3280;
        case 0x1d3284u: goto label_1d3284;
        case 0x1d3288u: goto label_1d3288;
        case 0x1d328cu: goto label_1d328c;
        case 0x1d3290u: goto label_1d3290;
        case 0x1d3294u: goto label_1d3294;
        case 0x1d3298u: goto label_1d3298;
        case 0x1d329cu: goto label_1d329c;
        case 0x1d32a0u: goto label_1d32a0;
        case 0x1d32a4u: goto label_1d32a4;
        case 0x1d32a8u: goto label_1d32a8;
        case 0x1d32acu: goto label_1d32ac;
        case 0x1d32b0u: goto label_1d32b0;
        case 0x1d32b4u: goto label_1d32b4;
        case 0x1d32b8u: goto label_1d32b8;
        case 0x1d32bcu: goto label_1d32bc;
        case 0x1d32c0u: goto label_1d32c0;
        case 0x1d32c4u: goto label_1d32c4;
        case 0x1d32c8u: goto label_1d32c8;
        case 0x1d32ccu: goto label_1d32cc;
        case 0x1d32d0u: goto label_1d32d0;
        case 0x1d32d4u: goto label_1d32d4;
        case 0x1d32d8u: goto label_1d32d8;
        case 0x1d32dcu: goto label_1d32dc;
        case 0x1d32e0u: goto label_1d32e0;
        case 0x1d32e4u: goto label_1d32e4;
        case 0x1d32e8u: goto label_1d32e8;
        case 0x1d32ecu: goto label_1d32ec;
        case 0x1d32f0u: goto label_1d32f0;
        case 0x1d32f4u: goto label_1d32f4;
        case 0x1d32f8u: goto label_1d32f8;
        case 0x1d32fcu: goto label_1d32fc;
        case 0x1d3300u: goto label_1d3300;
        case 0x1d3304u: goto label_1d3304;
        case 0x1d3308u: goto label_1d3308;
        case 0x1d330cu: goto label_1d330c;
        case 0x1d3310u: goto label_1d3310;
        case 0x1d3314u: goto label_1d3314;
        case 0x1d3318u: goto label_1d3318;
        case 0x1d331cu: goto label_1d331c;
        case 0x1d3320u: goto label_1d3320;
        case 0x1d3324u: goto label_1d3324;
        case 0x1d3328u: goto label_1d3328;
        case 0x1d332cu: goto label_1d332c;
        case 0x1d3330u: goto label_1d3330;
        case 0x1d3334u: goto label_1d3334;
        case 0x1d3338u: goto label_1d3338;
        case 0x1d333cu: goto label_1d333c;
        case 0x1d3340u: goto label_1d3340;
        case 0x1d3344u: goto label_1d3344;
        case 0x1d3348u: goto label_1d3348;
        case 0x1d334cu: goto label_1d334c;
        case 0x1d3350u: goto label_1d3350;
        case 0x1d3354u: goto label_1d3354;
        case 0x1d3358u: goto label_1d3358;
        case 0x1d335cu: goto label_1d335c;
        case 0x1d3360u: goto label_1d3360;
        case 0x1d3364u: goto label_1d3364;
        case 0x1d3368u: goto label_1d3368;
        case 0x1d336cu: goto label_1d336c;
        case 0x1d3370u: goto label_1d3370;
        case 0x1d3374u: goto label_1d3374;
        case 0x1d3378u: goto label_1d3378;
        case 0x1d337cu: goto label_1d337c;
        case 0x1d3380u: goto label_1d3380;
        case 0x1d3384u: goto label_1d3384;
        case 0x1d3388u: goto label_1d3388;
        case 0x1d338cu: goto label_1d338c;
        case 0x1d3390u: goto label_1d3390;
        case 0x1d3394u: goto label_1d3394;
        case 0x1d3398u: goto label_1d3398;
        case 0x1d339cu: goto label_1d339c;
        case 0x1d33a0u: goto label_1d33a0;
        case 0x1d33a4u: goto label_1d33a4;
        case 0x1d33a8u: goto label_1d33a8;
        case 0x1d33acu: goto label_1d33ac;
        case 0x1d33b0u: goto label_1d33b0;
        case 0x1d33b4u: goto label_1d33b4;
        case 0x1d33b8u: goto label_1d33b8;
        case 0x1d33bcu: goto label_1d33bc;
        case 0x1d33c0u: goto label_1d33c0;
        case 0x1d33c4u: goto label_1d33c4;
        case 0x1d33c8u: goto label_1d33c8;
        case 0x1d33ccu: goto label_1d33cc;
        case 0x1d33d0u: goto label_1d33d0;
        case 0x1d33d4u: goto label_1d33d4;
        case 0x1d33d8u: goto label_1d33d8;
        case 0x1d33dcu: goto label_1d33dc;
        case 0x1d33e0u: goto label_1d33e0;
        case 0x1d33e4u: goto label_1d33e4;
        case 0x1d33e8u: goto label_1d33e8;
        case 0x1d33ecu: goto label_1d33ec;
        case 0x1d33f0u: goto label_1d33f0;
        case 0x1d33f4u: goto label_1d33f4;
        case 0x1d33f8u: goto label_1d33f8;
        case 0x1d33fcu: goto label_1d33fc;
        case 0x1d3400u: goto label_1d3400;
        case 0x1d3404u: goto label_1d3404;
        case 0x1d3408u: goto label_1d3408;
        case 0x1d340cu: goto label_1d340c;
        case 0x1d3410u: goto label_1d3410;
        case 0x1d3414u: goto label_1d3414;
        case 0x1d3418u: goto label_1d3418;
        case 0x1d341cu: goto label_1d341c;
        case 0x1d3420u: goto label_1d3420;
        case 0x1d3424u: goto label_1d3424;
        case 0x1d3428u: goto label_1d3428;
        case 0x1d342cu: goto label_1d342c;
        case 0x1d3430u: goto label_1d3430;
        case 0x1d3434u: goto label_1d3434;
        case 0x1d3438u: goto label_1d3438;
        case 0x1d343cu: goto label_1d343c;
        case 0x1d3440u: goto label_1d3440;
        case 0x1d3444u: goto label_1d3444;
        case 0x1d3448u: goto label_1d3448;
        case 0x1d344cu: goto label_1d344c;
        case 0x1d3450u: goto label_1d3450;
        case 0x1d3454u: goto label_1d3454;
        case 0x1d3458u: goto label_1d3458;
        case 0x1d345cu: goto label_1d345c;
        case 0x1d3460u: goto label_1d3460;
        case 0x1d3464u: goto label_1d3464;
        case 0x1d3468u: goto label_1d3468;
        case 0x1d346cu: goto label_1d346c;
        case 0x1d3470u: goto label_1d3470;
        case 0x1d3474u: goto label_1d3474;
        case 0x1d3478u: goto label_1d3478;
        case 0x1d347cu: goto label_1d347c;
        case 0x1d3480u: goto label_1d3480;
        case 0x1d3484u: goto label_1d3484;
        case 0x1d3488u: goto label_1d3488;
        case 0x1d348cu: goto label_1d348c;
        case 0x1d3490u: goto label_1d3490;
        case 0x1d3494u: goto label_1d3494;
        case 0x1d3498u: goto label_1d3498;
        case 0x1d349cu: goto label_1d349c;
        case 0x1d34a0u: goto label_1d34a0;
        case 0x1d34a4u: goto label_1d34a4;
        case 0x1d34a8u: goto label_1d34a8;
        case 0x1d34acu: goto label_1d34ac;
        case 0x1d34b0u: goto label_1d34b0;
        case 0x1d34b4u: goto label_1d34b4;
        case 0x1d34b8u: goto label_1d34b8;
        case 0x1d34bcu: goto label_1d34bc;
        case 0x1d34c0u: goto label_1d34c0;
        case 0x1d34c4u: goto label_1d34c4;
        case 0x1d34c8u: goto label_1d34c8;
        case 0x1d34ccu: goto label_1d34cc;
        case 0x1d34d0u: goto label_1d34d0;
        case 0x1d34d4u: goto label_1d34d4;
        case 0x1d34d8u: goto label_1d34d8;
        case 0x1d34dcu: goto label_1d34dc;
        case 0x1d34e0u: goto label_1d34e0;
        case 0x1d34e4u: goto label_1d34e4;
        case 0x1d34e8u: goto label_1d34e8;
        case 0x1d34ecu: goto label_1d34ec;
        case 0x1d34f0u: goto label_1d34f0;
        case 0x1d34f4u: goto label_1d34f4;
        case 0x1d34f8u: goto label_1d34f8;
        case 0x1d34fcu: goto label_1d34fc;
        case 0x1d3500u: goto label_1d3500;
        case 0x1d3504u: goto label_1d3504;
        case 0x1d3508u: goto label_1d3508;
        case 0x1d350cu: goto label_1d350c;
        case 0x1d3510u: goto label_1d3510;
        case 0x1d3514u: goto label_1d3514;
        case 0x1d3518u: goto label_1d3518;
        case 0x1d351cu: goto label_1d351c;
        case 0x1d3520u: goto label_1d3520;
        case 0x1d3524u: goto label_1d3524;
        case 0x1d3528u: goto label_1d3528;
        case 0x1d352cu: goto label_1d352c;
        case 0x1d3530u: goto label_1d3530;
        case 0x1d3534u: goto label_1d3534;
        case 0x1d3538u: goto label_1d3538;
        case 0x1d353cu: goto label_1d353c;
        case 0x1d3540u: goto label_1d3540;
        case 0x1d3544u: goto label_1d3544;
        case 0x1d3548u: goto label_1d3548;
        case 0x1d354cu: goto label_1d354c;
        case 0x1d3550u: goto label_1d3550;
        case 0x1d3554u: goto label_1d3554;
        case 0x1d3558u: goto label_1d3558;
        case 0x1d355cu: goto label_1d355c;
        case 0x1d3560u: goto label_1d3560;
        case 0x1d3564u: goto label_1d3564;
        case 0x1d3568u: goto label_1d3568;
        case 0x1d356cu: goto label_1d356c;
        case 0x1d3570u: goto label_1d3570;
        case 0x1d3574u: goto label_1d3574;
        case 0x1d3578u: goto label_1d3578;
        case 0x1d357cu: goto label_1d357c;
        case 0x1d3580u: goto label_1d3580;
        case 0x1d3584u: goto label_1d3584;
        case 0x1d3588u: goto label_1d3588;
        case 0x1d358cu: goto label_1d358c;
        case 0x1d3590u: goto label_1d3590;
        case 0x1d3594u: goto label_1d3594;
        case 0x1d3598u: goto label_1d3598;
        case 0x1d359cu: goto label_1d359c;
        default: break;
    }

    ctx->pc = 0x1d1900u;

label_1d1900:
    // 0x1d1900: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d1900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1d1904:
    // 0x1d1904: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d1904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d1908:
    // 0x1d1908: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1d1908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1d190c:
    // 0x1d190c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d190cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d1910:
    // 0x1d1910: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1914:
    // 0x1d1914: 0xc064924  jal         func_192490
label_1d1918:
    if (ctx->pc == 0x1D1918u) {
        ctx->pc = 0x1D191Cu;
        goto label_1d191c;
    }
    ctx->pc = 0x1D1914u;
    SET_GPR_U32(ctx, 31, 0x1D191Cu);
    ctx->pc = 0x192490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192490u, 0x1D1914u, 0x1D191Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D191Cu;
label_1d191c:
    // 0x1d191c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1d191cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1d1920:
    // 0x1d1920: 0x24634b80  addiu       $v1, $v1, 0x4B80
    ctx->pc = 0x1d1920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19328));
label_1d1924:
    // 0x1d1924: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d1924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d1928:
    // 0x1d1928: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1d1928u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1d192c:
    // 0x1d192c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d192cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d1930:
    // 0x1d1930: 0xac4000a4  sw          $zero, 0xA4($v0)
    ctx->pc = 0x1d1930u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 164), GPR_U32(ctx, 0));
label_1d1934:
    // 0x1d1934: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d1934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1d1938:
    // 0x1d1938: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d1938u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d193c:
    // 0x1d193c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d193cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d1940:
    // 0x1d1940: 0xe44000a8  swc1        $f0, 0xA8($v0)
    ctx->pc = 0x1d1940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
label_1d1944:
    // 0x1d1944: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d1944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d1948:
    // 0x1d1948: 0xac4000ac  sw          $zero, 0xAC($v0)
    ctx->pc = 0x1d1948u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 172), GPR_U32(ctx, 0));
label_1d194c:
    // 0x1d194c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d194cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d1950:
    // 0x1d1950: 0xac4000b0  sw          $zero, 0xB0($v0)
    ctx->pc = 0x1d1950u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 0));
label_1d1954:
    // 0x1d1954: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d1954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d1958:
    // 0x1d1958: 0x244400b4  addiu       $a0, $v0, 0xB4
    ctx->pc = 0x1d1958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
label_1d195c:
    // 0x1d195c: 0xc056254  jal         func_158950
label_1d1960:
    if (ctx->pc == 0x1D1960u) {
        ctx->pc = 0x1D1964u;
        goto label_1d1964;
    }
    ctx->pc = 0x1D195Cu;
    SET_GPR_U32(ctx, 31, 0x1D1964u);
    ctx->pc = 0x158950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158950u, 0x1D195Cu, 0x1D1964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1964u;
label_1d1964:
    // 0x1d1964: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d1964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d1968:
    // 0x1d1968: 0x244400c0  addiu       $a0, $v0, 0xC0
    ctx->pc = 0x1d1968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_1d196c:
    // 0x1d196c: 0xc05ef10  jal         func_17BC40
label_1d1970:
    if (ctx->pc == 0x1D1970u) {
        ctx->pc = 0x1D1974u;
        goto label_1d1974;
    }
    ctx->pc = 0x1D196Cu;
    SET_GPR_U32(ctx, 31, 0x1D1974u);
    ctx->pc = 0x17BC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BC40u, 0x1D196Cu, 0x1D1974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1974u;
label_1d1974:
    // 0x1d1974: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d1974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d1978:
    // 0x1d1978: 0xac4000cc  sw          $zero, 0xCC($v0)
    ctx->pc = 0x1d1978u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 204), GPR_U32(ctx, 0));
label_1d197c:
    // 0x1d197c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d197cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d1980:
    // 0x1d1980: 0x244400d0  addiu       $a0, $v0, 0xD0
    ctx->pc = 0x1d1980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
label_1d1984:
    // 0x1d1984: 0xc056254  jal         func_158950
label_1d1988:
    if (ctx->pc == 0x1D1988u) {
        ctx->pc = 0x1D198Cu;
        goto label_1d198c;
    }
    ctx->pc = 0x1D1984u;
    SET_GPR_U32(ctx, 31, 0x1D198Cu);
    ctx->pc = 0x158950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158950u, 0x1D1984u, 0x1D198Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D198Cu;
label_1d198c:
    // 0x1d198c: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x1d198cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_1d1990:
    // 0x1d1990: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d1990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d1994:
    // 0x1d1994: 0xac4300dc  sw          $v1, 0xDC($v0)
    ctx->pc = 0x1d1994u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 220), GPR_U32(ctx, 3));
label_1d1998:
    // 0x1d1998: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d1998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d199c:
    // 0x1d199c: 0xa04000e0  sb          $zero, 0xE0($v0)
    ctx->pc = 0x1d199cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 224), (uint8_t)GPR_U32(ctx, 0));
label_1d19a0:
    // 0x1d19a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d19a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d19a4:
    // 0x1d19a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d19a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d19a8:
    // 0x1d19a8: 0xe44000e4  swc1        $f0, 0xE4($v0)
    ctx->pc = 0x1d19a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 228), bits); }
label_1d19ac:
    // 0x1d19ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d19acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d19b0:
    // 0x1d19b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d19b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d19b4:
    // 0x1d19b4: 0xe44000e8  swc1        $f0, 0xE8($v0)
    ctx->pc = 0x1d19b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 232), bits); }
label_1d19b8:
    // 0x1d19b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d19b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d19bc:
    // 0x1d19bc: 0xa04000ec  sb          $zero, 0xEC($v0)
    ctx->pc = 0x1d19bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 236), (uint8_t)GPR_U32(ctx, 0));
label_1d19c0:
    // 0x1d19c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d19c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d19c4:
    // 0x1d19c4: 0xa04000ed  sb          $zero, 0xED($v0)
    ctx->pc = 0x1d19c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 237), (uint8_t)GPR_U32(ctx, 0));
label_1d19c8:
    // 0x1d19c8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1d19c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1d19cc:
    // 0x1d19cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d19ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d19d0:
    // 0x1d19d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d19d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d19d4:
    // 0x1d19d4: 0xe44000f0  swc1        $f0, 0xF0($v0)
    ctx->pc = 0x1d19d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 240), bits); }
label_1d19d8:
    // 0x1d19d8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d19d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d19dc:
    // 0x1d19dc: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x1d19dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_1d19e0:
    // 0x1d19e0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1d19e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1d19e4:
    // 0x1d19e4: 0x24a57af8  addiu       $a1, $a1, 0x7AF8
    ctx->pc = 0x1d19e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31480));
label_1d19e8:
    // 0x1d19e8: 0x24460064  addiu       $a2, $v0, 0x64
    ctx->pc = 0x1d19e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
label_1d19ec:
    // 0x1d19ec: 0xc08e514  jal         func_239450
label_1d19f0:
    if (ctx->pc == 0x1D19F0u) {
        ctx->pc = 0x1D19F4u;
        goto label_1d19f4;
    }
    ctx->pc = 0x1D19ECu;
    SET_GPR_U32(ctx, 31, 0x1D19F4u);
    ctx->pc = 0x239450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239450u, 0x1D19ECu, 0x1D19F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D19F4u;
label_1d19f4:
    // 0x1d19f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d19f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d19f8:
    // 0x1d19f8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d19f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d19fc:
    // 0x1d19fc: 0xac430078  sw          $v1, 0x78($v0)
    ctx->pc = 0x1d19fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 3));
label_1d1a00:
    // 0x1d1a00: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d1a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d1a04:
    // 0x1d1a04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d1a04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d1a08:
    // 0x1d1a08: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1d1a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1d1a0c:
    // 0x1d1a0c: 0x3e00008  jr          $ra
label_1d1a10:
    if (ctx->pc == 0x1D1A10u) {
        ctx->pc = 0x1D1A14u;
        goto label_1d1a14;
    }
    ctx->pc = 0x1D1A0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1A0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1A14u;
label_1d1a14:
    // 0x1d1a14: 0x0  nop
    ctx->pc = 0x1d1a14u;
    // NOP
label_1d1a18:
    // 0x1d1a18: 0x0  nop
    ctx->pc = 0x1d1a18u;
    // NOP
label_1d1a1c:
    // 0x1d1a1c: 0x0  nop
    ctx->pc = 0x1d1a1cu;
    // NOP
label_1d1a20:
    // 0x1d1a20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d1a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d1a24:
    // 0x1d1a24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d1a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d1a28:
    // 0x1d1a28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1d1a28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1d1a2c:
    // 0x1d1a2c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1d1a2cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
label_1d1a30:
    // 0x1d1a30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d1a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d1a34:
    // 0x1d1a34: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_1d1a38:
    if (ctx->pc == 0x1D1A38u) {
        ctx->pc = 0x1D1A3Cu;
        goto label_1d1a3c;
    }
    ctx->pc = 0x1D1A34u;
    {
        const bool branch_taken_0x1d1a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1a34) {
            ctx->pc = 0x1D1AB8u;
            goto label_1d1ab8;
        }
    }
    ctx->pc = 0x1D1A3Cu;
label_1d1a3c:
    // 0x1d1a3c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1d1a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1d1a40:
    // 0x1d1a40: 0x24634b80  addiu       $v1, $v1, 0x4B80
    ctx->pc = 0x1d1a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19328));
label_1d1a44:
    // 0x1d1a44: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d1a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d1a48:
    // 0x1d1a48: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1d1a48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1d1a4c:
    // 0x1d1a4c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d1a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d1a50:
    // 0x1d1a50: 0x244400d0  addiu       $a0, $v0, 0xD0
    ctx->pc = 0x1d1a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
label_1d1a54:
    // 0x1d1a54: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1d1a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d1a58:
    // 0x1d1a58: 0xc056094  jal         func_158250
label_1d1a5c:
    if (ctx->pc == 0x1D1A5Cu) {
        ctx->pc = 0x1D1A60u;
        goto label_1d1a60;
    }
    ctx->pc = 0x1D1A58u;
    SET_GPR_U32(ctx, 31, 0x1D1A60u);
    ctx->pc = 0x158250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158250u, 0x1D1A58u, 0x1D1A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1A60u;
label_1d1a60:
    // 0x1d1a60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d1a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d1a64:
    // 0x1d1a64: 0x244400c0  addiu       $a0, $v0, 0xC0
    ctx->pc = 0x1d1a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_1d1a68:
    // 0x1d1a68: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1d1a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d1a6c:
    // 0x1d1a6c: 0xc05ee30  jal         func_17B8C0
label_1d1a70:
    if (ctx->pc == 0x1D1A70u) {
        ctx->pc = 0x1D1A74u;
        goto label_1d1a74;
    }
    ctx->pc = 0x1D1A6Cu;
    SET_GPR_U32(ctx, 31, 0x1D1A74u);
    ctx->pc = 0x17B8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B8C0u, 0x1D1A6Cu, 0x1D1A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1A74u;
label_1d1a74:
    // 0x1d1a74: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d1a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d1a78:
    // 0x1d1a78: 0x244400b4  addiu       $a0, $v0, 0xB4
    ctx->pc = 0x1d1a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
label_1d1a7c:
    // 0x1d1a7c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1d1a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d1a80:
    // 0x1d1a80: 0xc056094  jal         func_158250
label_1d1a84:
    if (ctx->pc == 0x1D1A84u) {
        ctx->pc = 0x1D1A88u;
        goto label_1d1a88;
    }
    ctx->pc = 0x1D1A80u;
    SET_GPR_U32(ctx, 31, 0x1D1A88u);
    ctx->pc = 0x158250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158250u, 0x1D1A80u, 0x1D1A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1A88u;
label_1d1a88:
    // 0x1d1a88: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d1a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d1a8c:
    // 0x1d1a8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1a8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1a90:
    // 0x1d1a90: 0xc064970  jal         func_1925C0
label_1d1a94:
    if (ctx->pc == 0x1D1A94u) {
        ctx->pc = 0x1D1A98u;
        goto label_1d1a98;
    }
    ctx->pc = 0x1D1A90u;
    SET_GPR_U32(ctx, 31, 0x1D1A98u);
    ctx->pc = 0x1925C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1925C0u, 0x1D1A90u, 0x1D1A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1A98u;
label_1d1a98:
    // 0x1d1a98: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1d1a98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_1d1a9c:
    // 0x1d1a9c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1d1a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_1d1aa0:
    // 0x1d1aa0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1d1aa0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1d1aa4:
    // 0x1d1aa4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_1d1aa8:
    if (ctx->pc == 0x1D1AA8u) {
        ctx->pc = 0x1D1AACu;
        goto label_1d1aac;
    }
    ctx->pc = 0x1D1AA4u;
    {
        const bool branch_taken_0x1d1aa4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d1aa4) {
            ctx->pc = 0x1D1AB8u;
            goto label_1d1ab8;
        }
    }
    ctx->pc = 0x1D1AACu;
label_1d1aac:
    // 0x1d1aac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d1aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d1ab0:
    // 0x1d1ab0: 0xc0ba070  jal         func_2E81C0
label_1d1ab4:
    if (ctx->pc == 0x1D1AB4u) {
        ctx->pc = 0x1D1AB8u;
        goto label_1d1ab8;
    }
    ctx->pc = 0x1D1AB0u;
    SET_GPR_U32(ctx, 31, 0x1D1AB8u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1D1AB0u, 0x1D1AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1AB8u;
label_1d1ab8:
    // 0x1d1ab8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d1ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d1abc:
    // 0x1d1abc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d1abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d1ac0:
    // 0x1d1ac0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1d1ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1d1ac4:
    // 0x1d1ac4: 0x3e00008  jr          $ra
label_1d1ac8:
    if (ctx->pc == 0x1D1AC8u) {
        ctx->pc = 0x1D1ACCu;
        goto label_1d1acc;
    }
    ctx->pc = 0x1D1AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1ACCu;
label_1d1acc:
    // 0x1d1acc: 0x0  nop
    ctx->pc = 0x1d1accu;
    // NOP
label_1d1ad0:
    // 0x1d1ad0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d1ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d1ad4:
    // 0x1d1ad4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d1ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1d1ad8:
    // 0x1d1ad8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d1ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d1adc:
    // 0x1d1adc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1d1adcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_1d1ae0:
    // 0x1d1ae0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1d1ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1d1ae4:
    // 0x1d1ae4: 0xc064a74  jal         func_1929D0
label_1d1ae8:
    if (ctx->pc == 0x1D1AE8u) {
        ctx->pc = 0x1D1AECu;
        goto label_1d1aec;
    }
    ctx->pc = 0x1D1AE4u;
    SET_GPR_U32(ctx, 31, 0x1D1AECu);
    ctx->pc = 0x1929D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1929D0u, 0x1D1AE4u, 0x1D1AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1AECu;
label_1d1aec:
    // 0x1d1aec: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1d1aecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1d1af0:
    // 0x1d1af0: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x1d1af0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
label_1d1af4:
    // 0x1d1af4: 0x24847b10  addiu       $a0, $a0, 0x7B10
    ctx->pc = 0x1d1af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31504));
label_1d1af8:
    // 0x1d1af8: 0xc0ac004  jal         func_2B0010
label_1d1afc:
    if (ctx->pc == 0x1D1AFCu) {
        ctx->pc = 0x1D1B00u;
        goto label_1d1b00;
    }
    ctx->pc = 0x1D1AF8u;
    SET_GPR_U32(ctx, 31, 0x1D1B00u);
    ctx->pc = 0x2B0010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0010u, 0x1D1AF8u, 0x1D1B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B00u;
label_1d1b00:
    // 0x1d1b00: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1d1b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1d1b04:
    // 0x1d1b04: 0xac620060  sw          $v0, 0x60($v1)
    ctx->pc = 0x1d1b04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 2));
label_1d1b08:
    // 0x1d1b08: 0x8f84bb84  lw          $a0, -0x447C($gp)
    ctx->pc = 0x1d1b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949764)));
label_1d1b0c:
    // 0x1d1b0c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1d1b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1d1b10:
    // 0x1d1b10: 0x24a57b40  addiu       $a1, $a1, 0x7B40
    ctx->pc = 0x1d1b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31552));
label_1d1b14:
    // 0x1d1b14: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1d1b14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d1b18:
    // 0x1d1b18: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d1b18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d1b1c:
    // 0x1d1b1c: 0xc08a320  jal         func_228C80
label_1d1b20:
    if (ctx->pc == 0x1D1B20u) {
        ctx->pc = 0x1D1B24u;
        goto label_1d1b24;
    }
    ctx->pc = 0x1D1B1Cu;
    SET_GPR_U32(ctx, 31, 0x1D1B24u);
    ctx->pc = 0x228C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228C80u, 0x1D1B1Cu, 0x1D1B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B24u;
label_1d1b24:
    // 0x1d1b24: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1d1b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1d1b28:
    // 0x1d1b28: 0xac6200a4  sw          $v0, 0xA4($v1)
    ctx->pc = 0x1d1b28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 164), GPR_U32(ctx, 2));
label_1d1b2c:
    // 0x1d1b2c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1d1b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1d1b30:
    // 0x1d1b30: 0xc074ee0  jal         func_1D3B80
label_1d1b34:
    if (ctx->pc == 0x1D1B34u) {
        ctx->pc = 0x1D1B38u;
        goto label_1d1b38;
    }
    ctx->pc = 0x1D1B30u;
    SET_GPR_U32(ctx, 31, 0x1D1B38u);
    ctx->pc = 0x1D3B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3B80u, 0x1D1B30u, 0x1D1B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B38u;
label_1d1b38:
    // 0x1d1b38: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d1b38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d1b3c:
    // 0x1d1b3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d1b3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d1b40:
    // 0x1d1b40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d1b40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d1b44:
    // 0x1d1b44: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1d1b44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1d1b48:
    // 0x1d1b48: 0x3e00008  jr          $ra
label_1d1b4c:
    if (ctx->pc == 0x1D1B4Cu) {
        ctx->pc = 0x1D1B50u;
        goto label_1d1b50;
    }
    ctx->pc = 0x1D1B48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1B48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1B50u;
label_1d1b50:
    // 0x1d1b50: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1d1b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1d1b54:
    // 0x1d1b54: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1d1b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1d1b58:
    // 0x1d1b58: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1d1b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1d1b5c:
    // 0x1d1b5c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1d1b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1d1b60:
    // 0x1d1b60: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1d1b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1d1b64:
    // 0x1d1b64: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d1b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1d1b68:
    // 0x1d1b68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d1b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1d1b6c:
    // 0x1d1b6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d1b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d1b70:
    // 0x1d1b70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d1b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d1b74:
    // 0x1d1b74: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x1d1b74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
label_1d1b78:
    // 0x1d1b78: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1d1b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1d1b7c:
    // 0x1d1b7c: 0xc064adc  jal         func_192B70
label_1d1b80:
    if (ctx->pc == 0x1D1B80u) {
        ctx->pc = 0x1D1B84u;
        goto label_1d1b84;
    }
    ctx->pc = 0x1D1B7Cu;
    SET_GPR_U32(ctx, 31, 0x1D1B84u);
    ctx->pc = 0x192B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B70u, 0x1D1B7Cu, 0x1D1B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B84u;
label_1d1b84:
    // 0x1d1b84: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x1d1b84u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1d1b88:
    // 0x1d1b88: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1d1b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_1d1b8c:
    // 0x1d1b8c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d1b8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d1b90:
    // 0x1d1b90: 0x8f84ba9c  lw          $a0, -0x4564($gp)
    ctx->pc = 0x1d1b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
label_1d1b94:
    // 0x1d1b94: 0xc0529b8  jal         func_14A6E0
label_1d1b98:
    if (ctx->pc == 0x1D1B98u) {
        ctx->pc = 0x1D1B9Cu;
        goto label_1d1b9c;
    }
    ctx->pc = 0x1D1B94u;
    SET_GPR_U32(ctx, 31, 0x1D1B9Cu);
    ctx->pc = 0x14A6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A6E0u, 0x1D1B94u, 0x1D1B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B9Cu;
label_1d1b9c:
    // 0x1d1b9c: 0x8f84ba9c  lw          $a0, -0x4564($gp)
    ctx->pc = 0x1d1b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
label_1d1ba0:
    // 0x1d1ba0: 0xc052c00  jal         func_14B000
label_1d1ba4:
    if (ctx->pc == 0x1D1BA4u) {
        ctx->pc = 0x1D1BA8u;
        goto label_1d1ba8;
    }
    ctx->pc = 0x1D1BA0u;
    SET_GPR_U32(ctx, 31, 0x1D1BA8u);
    ctx->pc = 0x14B000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B000u, 0x1D1BA0u, 0x1D1BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1BA8u;
label_1d1ba8:
    // 0x1d1ba8: 0x8f84ba9c  lw          $a0, -0x4564($gp)
    ctx->pc = 0x1d1ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
label_1d1bac:
    // 0x1d1bac: 0xc052c38  jal         func_14B0E0
label_1d1bb0:
    if (ctx->pc == 0x1D1BB0u) {
        ctx->pc = 0x1D1BB4u;
        goto label_1d1bb4;
    }
    ctx->pc = 0x1D1BACu;
    SET_GPR_U32(ctx, 31, 0x1D1BB4u);
    ctx->pc = 0x14B0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B0E0u, 0x1D1BACu, 0x1D1BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1BB4u;
label_1d1bb4:
    // 0x1d1bb4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1d1bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1d1bb8:
    // 0x1d1bb8: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1d1bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1d1bbc:
    // 0x1d1bbc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1d1bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1d1bc0:
    // 0x1d1bc0: 0xc1066de  jal         func_419B78
label_1d1bc4:
    if (ctx->pc == 0x1D1BC4u) {
        ctx->pc = 0x1D1BC8u;
        goto label_1d1bc8;
    }
    ctx->pc = 0x1D1BC0u;
    SET_GPR_U32(ctx, 31, 0x1D1BC8u);
    ctx->pc = 0x419B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419B78u, 0x1D1BC0u, 0x1D1BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1BC8u;
label_1d1bc8:
    // 0x1d1bc8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1d1bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1d1bcc:
    // 0x1d1bcc: 0x8c4400a4  lw          $a0, 0xA4($v0)
    ctx->pc = 0x1d1bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1d1bd0:
    // 0x1d1bd0: 0xc0e6f1a  jal         func_39BC68
label_1d1bd4:
    if (ctx->pc == 0x1D1BD4u) {
        ctx->pc = 0x1D1BD8u;
        goto label_1d1bd8;
    }
    ctx->pc = 0x1D1BD0u;
    SET_GPR_U32(ctx, 31, 0x1D1BD8u);
    ctx->pc = 0x39BC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BC68u, 0x1D1BD0u, 0x1D1BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1BD8u;
label_1d1bd8:
    // 0x1d1bd8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1d1bd8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d1bdc:
    // 0x1d1bdc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1d1bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1d1be0:
    // 0x1d1be0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1d1be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1d1be4:
    // 0x1d1be4: 0x8c4500a4  lw          $a1, 0xA4($v0)
    ctx->pc = 0x1d1be4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1d1be8:
    // 0x1d1be8: 0xc0e6ee0  jal         func_39BB80
label_1d1bec:
    if (ctx->pc == 0x1D1BECu) {
        ctx->pc = 0x1D1BF0u;
        goto label_1d1bf0;
    }
    ctx->pc = 0x1D1BE8u;
    SET_GPR_U32(ctx, 31, 0x1D1BF0u);
    ctx->pc = 0x39BB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BB80u, 0x1D1BE8u, 0x1D1BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1BF0u;
label_1d1bf0:
    // 0x1d1bf0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1d1bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1d1bf4:
    // 0x1d1bf4: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1d1bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1d1bf8:
    // 0x1d1bf8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1d1bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1d1bfc:
    // 0x1d1bfc: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1d1bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1d1c00:
    // 0x1d1c00: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1d1c04:
    if (ctx->pc == 0x1D1C04u) {
        ctx->pc = 0x1D1C08u;
        goto label_1d1c08;
    }
    ctx->pc = 0x1D1C00u;
    {
        const bool branch_taken_0x1d1c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1c00) {
            ctx->pc = 0x1D1C44u;
            goto label_1d1c44;
        }
    }
    ctx->pc = 0x1D1C08u;
label_1d1c08:
    // 0x1d1c08: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1d1c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1d1c0c:
    // 0x1d1c0c: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1d1c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1d1c10:
    // 0x1d1c10: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1d1c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1d1c14:
    // 0x1d1c14: 0xc1066de  jal         func_419B78
label_1d1c18:
    if (ctx->pc == 0x1D1C18u) {
        ctx->pc = 0x1D1C1Cu;
        goto label_1d1c1c;
    }
    ctx->pc = 0x1D1C14u;
    SET_GPR_U32(ctx, 31, 0x1D1C1Cu);
    ctx->pc = 0x419B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419B78u, 0x1D1C14u, 0x1D1C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1C1Cu;
label_1d1c1c:
    // 0x1d1c1c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1d1c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1d1c20:
    // 0x1d1c20: 0x8c4400a4  lw          $a0, 0xA4($v0)
    ctx->pc = 0x1d1c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1d1c24:
    // 0x1d1c24: 0xc0e6f1a  jal         func_39BC68
label_1d1c28:
    if (ctx->pc == 0x1D1C28u) {
        ctx->pc = 0x1D1C2Cu;
        goto label_1d1c2c;
    }
    ctx->pc = 0x1D1C24u;
    SET_GPR_U32(ctx, 31, 0x1D1C2Cu);
    ctx->pc = 0x39BC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BC68u, 0x1D1C24u, 0x1D1C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1C2Cu;
label_1d1c2c:
    // 0x1d1c2c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1d1c2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d1c30:
    // 0x1d1c30: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1d1c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1d1c34:
    // 0x1d1c34: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d1c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d1c38:
    // 0x1d1c38: 0x8c4500a4  lw          $a1, 0xA4($v0)
    ctx->pc = 0x1d1c38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1d1c3c:
    // 0x1d1c3c: 0xc0e6ee0  jal         func_39BB80
label_1d1c40:
    if (ctx->pc == 0x1D1C40u) {
        ctx->pc = 0x1D1C44u;
        goto label_1d1c44;
    }
    ctx->pc = 0x1D1C3Cu;
    SET_GPR_U32(ctx, 31, 0x1D1C44u);
    ctx->pc = 0x39BB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BB80u, 0x1D1C3Cu, 0x1D1C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1C44u;
label_1d1c44:
    // 0x1d1c44: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1d1c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1d1c48:
    // 0x1d1c48: 0x8f84bb84  lw          $a0, -0x447C($gp)
    ctx->pc = 0x1d1c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949764)));
label_1d1c4c:
    // 0x1d1c4c: 0x8c4500a4  lw          $a1, 0xA4($v0)
    ctx->pc = 0x1d1c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1d1c50:
    // 0x1d1c50: 0xc08a614  jal         func_229850
label_1d1c54:
    if (ctx->pc == 0x1D1C54u) {
        ctx->pc = 0x1D1C58u;
        goto label_1d1c58;
    }
    ctx->pc = 0x1D1C50u;
    SET_GPR_U32(ctx, 31, 0x1D1C58u);
    ctx->pc = 0x229850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229850u, 0x1D1C50u, 0x1D1C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1C58u;
label_1d1c58:
    // 0x1d1c58: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1d1c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1d1c5c:
    // 0x1d1c5c: 0xac4000a4  sw          $zero, 0xA4($v0)
    ctx->pc = 0x1d1c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 164), GPR_U32(ctx, 0));
label_1d1c60:
    // 0x1d1c60: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1d1c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1d1c64:
    // 0x1d1c64: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x1d1c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1d1c68:
    // 0x1d1c68: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d1c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d1c6c:
    // 0x1d1c6c: 0xc0ac13c  jal         func_2B04F0
label_1d1c70:
    if (ctx->pc == 0x1D1C70u) {
        ctx->pc = 0x1D1C74u;
        goto label_1d1c74;
    }
    ctx->pc = 0x1D1C6Cu;
    SET_GPR_U32(ctx, 31, 0x1D1C74u);
    ctx->pc = 0x2B04F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B04F0u, 0x1D1C6Cu, 0x1D1C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1C74u;
label_1d1c74:
    // 0x1d1c74: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1d1c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1d1c78:
    // 0x1d1c78: 0x904200e0  lbu         $v0, 0xE0($v0)
    ctx->pc = 0x1d1c78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 224)));
label_1d1c7c:
    // 0x1d1c7c: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
label_1d1c80:
    if (ctx->pc == 0x1D1C80u) {
        ctx->pc = 0x1D1C84u;
        goto label_1d1c84;
    }
    ctx->pc = 0x1D1C7Cu;
    {
        const bool branch_taken_0x1d1c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1c7c) {
            ctx->pc = 0x1D1D74u;
            goto label_1d1d74;
        }
    }
    ctx->pc = 0x1D1C84u;
label_1d1c84:
    // 0x1d1c84: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1d1c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1d1c88:
    // 0x1d1c88: 0x904200ed  lbu         $v0, 0xED($v0)
    ctx->pc = 0x1d1c88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 237)));
label_1d1c8c:
    // 0x1d1c8c: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
label_1d1c90:
    if (ctx->pc == 0x1D1C90u) {
        ctx->pc = 0x1D1C94u;
        goto label_1d1c94;
    }
    ctx->pc = 0x1D1C8Cu;
    {
        const bool branch_taken_0x1d1c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1c8c) {
            ctx->pc = 0x1D1D74u;
            goto label_1d1d74;
        }
    }
    ctx->pc = 0x1D1C94u;
label_1d1c94:
    // 0x1d1c94: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1d1c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1d1c98:
    // 0x1d1c98: 0x8c4200ac  lw          $v0, 0xAC($v0)
    ctx->pc = 0x1d1c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1d1c9c:
    // 0x1d1c9c: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_1d1ca0:
    if (ctx->pc == 0x1D1CA0u) {
        ctx->pc = 0x1D1CA4u;
        goto label_1d1ca4;
    }
    ctx->pc = 0x1D1C9Cu;
    {
        const bool branch_taken_0x1d1c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1c9c) {
            ctx->pc = 0x1D1D74u;
            goto label_1d1d74;
        }
    }
    ctx->pc = 0x1D1CA4u;
label_1d1ca4:
    // 0x1d1ca4: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x1d1ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_1d1ca8:
    // 0x1d1ca8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1d1ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d1cac:
    // 0x1d1cac: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1d1cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1d1cb0:
    // 0x1d1cb0: 0xc085538  jal         func_2154E0
label_1d1cb4:
    if (ctx->pc == 0x1D1CB4u) {
        ctx->pc = 0x1D1CB8u;
        goto label_1d1cb8;
    }
    ctx->pc = 0x1D1CB0u;
    SET_GPR_U32(ctx, 31, 0x1D1CB8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1D1CB0u, 0x1D1CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1CB8u;
label_1d1cb8:
    // 0x1d1cb8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d1cb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d1cbc:
    // 0x1d1cbc: 0x10110005  beq         $zero, $s1, . + 4 + (0x5 << 2)
label_1d1cc0:
    if (ctx->pc == 0x1D1CC0u) {
        ctx->pc = 0x1D1CC4u;
        goto label_1d1cc4;
    }
    ctx->pc = 0x1D1CBCu;
    {
        const bool branch_taken_0x1d1cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 17));
        if (branch_taken_0x1d1cbc) {
            ctx->pc = 0x1D1CD4u;
            goto label_1d1cd4;
        }
    }
    ctx->pc = 0x1D1CC4u;
label_1d1cc4:
    // 0x1d1cc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d1cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d1cc8:
    // 0x1d1cc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1cc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1ccc:
    // 0x1d1ccc: 0xc0968b0  jal         func_25A2C0
label_1d1cd0:
    if (ctx->pc == 0x1D1CD0u) {
        ctx->pc = 0x1D1CD4u;
        goto label_1d1cd4;
    }
    ctx->pc = 0x1D1CCCu;
    SET_GPR_U32(ctx, 31, 0x1D1CD4u);
    ctx->pc = 0x25A2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A2C0u, 0x1D1CCCu, 0x1D1CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1CD4u;
label_1d1cd4:
    // 0x1d1cd4: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x1d1cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_1d1cd8:
    // 0x1d1cd8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1d1cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d1cdc:
    // 0x1d1cdc: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x1d1cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_1d1ce0:
    // 0x1d1ce0: 0xc085538  jal         func_2154E0
label_1d1ce4:
    if (ctx->pc == 0x1D1CE4u) {
        ctx->pc = 0x1D1CE8u;
        goto label_1d1ce8;
    }
    ctx->pc = 0x1D1CE0u;
    SET_GPR_U32(ctx, 31, 0x1D1CE8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1D1CE0u, 0x1D1CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1CE8u;
label_1d1ce8:
    // 0x1d1ce8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1d1ce8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d1cec:
    // 0x1d1cec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d1cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d1cf0:
    // 0x1d1cf0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d1cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d1cf4:
    // 0x1d1cf4: 0xc0ae044  jal         func_2B8110
label_1d1cf8:
    if (ctx->pc == 0x1D1CF8u) {
        ctx->pc = 0x1D1CFCu;
        goto label_1d1cfc;
    }
    ctx->pc = 0x1D1CF4u;
    SET_GPR_U32(ctx, 31, 0x1D1CFCu);
    ctx->pc = 0x2B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8110u, 0x1D1CF4u, 0x1D1CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1CFCu;
label_1d1cfc:
    // 0x1d1cfc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1d1cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1d1d00:
    // 0x1d1d00: 0x8c4400ac  lw          $a0, 0xAC($v0)
    ctx->pc = 0x1d1d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1d1d04:
    // 0x1d1d04: 0xc0913e4  jal         func_244F90
label_1d1d08:
    if (ctx->pc == 0x1D1D08u) {
        ctx->pc = 0x1D1D0Cu;
        goto label_1d1d0c;
    }
    ctx->pc = 0x1D1D04u;
    SET_GPR_U32(ctx, 31, 0x1D1D0Cu);
    ctx->pc = 0x244F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244F90u, 0x1D1D04u, 0x1D1D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1D0Cu;
label_1d1d0c:
    // 0x1d1d0c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d1d0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d1d10:
    // 0x1d1d10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d1d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d1d14:
    // 0x1d1d14: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1d1d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1d1d18:
    // 0x1d1d18: 0xc085538  jal         func_2154E0
label_1d1d1c:
    if (ctx->pc == 0x1D1D1Cu) {
        ctx->pc = 0x1D1D20u;
        goto label_1d1d20;
    }
    ctx->pc = 0x1D1D18u;
    SET_GPR_U32(ctx, 31, 0x1D1D20u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1D1D18u, 0x1D1D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1D20u;
label_1d1d20:
    // 0x1d1d20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d1d20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d1d24:
    // 0x1d1d24: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_1d1d28:
    if (ctx->pc == 0x1D1D28u) {
        ctx->pc = 0x1D1D2Cu;
        goto label_1d1d2c;
    }
    ctx->pc = 0x1D1D24u;
    {
        const bool branch_taken_0x1d1d24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1d24) {
            ctx->pc = 0x1D1D40u;
            goto label_1d1d40;
        }
    }
    ctx->pc = 0x1D1D2Cu;
label_1d1d2c:
    // 0x1d1d2c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1d1d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1d1d30:
    // 0x1d1d30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d1d34:
    // 0x1d1d34: 0x8c4500ac  lw          $a1, 0xAC($v0)
    ctx->pc = 0x1d1d34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1d1d38:
    // 0x1d1d38: 0xc091a3c  jal         func_2468F0
label_1d1d3c:
    if (ctx->pc == 0x1D1D3Cu) {
        ctx->pc = 0x1D1D40u;
        goto label_1d1d40;
    }
    ctx->pc = 0x1D1D38u;
    SET_GPR_U32(ctx, 31, 0x1D1D40u);
    ctx->pc = 0x2468F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2468F0u, 0x1D1D38u, 0x1D1D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1D40u;
label_1d1d40:
    // 0x1d1d40: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1d1d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1d1d44:
    // 0x1d1d44: 0x8f84baa8  lw          $a0, -0x4558($gp)
    ctx->pc = 0x1d1d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949544)));
label_1d1d48:
    // 0x1d1d48: 0x8c4500ac  lw          $a1, 0xAC($v0)
    ctx->pc = 0x1d1d48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1d1d4c:
    // 0x1d1d4c: 0xc041018  jal         func_104060
label_1d1d50:
    if (ctx->pc == 0x1D1D50u) {
        ctx->pc = 0x1D1D54u;
        goto label_1d1d54;
    }
    ctx->pc = 0x1D1D4Cu;
    SET_GPR_U32(ctx, 31, 0x1D1D54u);
    ctx->pc = 0x104060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104060u, 0x1D1D4Cu, 0x1D1D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1D54u;
label_1d1d54:
    // 0x1d1d54: 0xc0b06cc  jal         func_2C1B30
label_1d1d58:
    if (ctx->pc == 0x1D1D58u) {
        ctx->pc = 0x1D1D5Cu;
        goto label_1d1d5c;
    }
    ctx->pc = 0x1D1D54u;
    SET_GPR_U32(ctx, 31, 0x1D1D5Cu);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x1D1D54u, 0x1D1D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1D5Cu;
label_1d1d5c:
    // 0x1d1d5c: 0x8f83bcc4  lw          $v1, -0x433C($gp)
    ctx->pc = 0x1d1d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_1d1d60:
    // 0x1d1d60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d1d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d1d64:
    // 0x1d1d64: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1d1d64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d1d68:
    // 0x1d1d68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d1d68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1d6c:
    // 0x1d1d6c: 0xc0af798  jal         func_2BDE60
label_1d1d70:
    if (ctx->pc == 0x1D1D70u) {
        ctx->pc = 0x1D1D74u;
        goto label_1d1d74;
    }
    ctx->pc = 0x1D1D6Cu;
    SET_GPR_U32(ctx, 31, 0x1D1D74u);
    ctx->pc = 0x2BDE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDE60u, 0x1D1D6Cu, 0x1D1D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1D74u;
label_1d1d74:
    // 0x1d1d74: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x1d1d74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1d1d78:
    // 0x1d1d78: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1d1d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1d1d7c:
    // 0x1d1d7c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1d1d7cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1d1d80:
    // 0x1d1d80: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1d1d80u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1d1d84:
    // 0x1d1d84: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1d1d84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d1d88:
    // 0x1d1d88: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d1d88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d1d8c:
    // 0x1d1d8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d1d8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d1d90:
    // 0x1d1d90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d1d90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d1d94:
    // 0x1d1d94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d1d94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d1d98:
    // 0x1d1d98: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1d1d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1d1d9c:
    // 0x1d1d9c: 0x3e00008  jr          $ra
label_1d1da0:
    if (ctx->pc == 0x1D1DA0u) {
        ctx->pc = 0x1D1DA4u;
        goto label_1d1da4;
    }
    ctx->pc = 0x1D1D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1D9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1DA4u;
label_1d1da4:
    // 0x1d1da4: 0x0  nop
    ctx->pc = 0x1d1da4u;
    // NOP
label_1d1da8:
    // 0x1d1da8: 0x0  nop
    ctx->pc = 0x1d1da8u;
    // NOP
label_1d1dac:
    // 0x1d1dac: 0x0  nop
    ctx->pc = 0x1d1dacu;
    // NOP
label_1d1db0:
    // 0x1d1db0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1d1db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_1d1db4:
    // 0x1d1db4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1d1db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1d1db8:
    // 0x1d1db8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1d1db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1d1dbc:
    // 0x1d1dbc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1d1dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1d1dc0:
    // 0x1d1dc0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1d1dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1d1dc4:
    // 0x1d1dc4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1d1dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1d1dc8:
    // 0x1d1dc8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d1dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1d1dcc:
    // 0x1d1dcc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d1dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1d1dd0:
    // 0x1d1dd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d1dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d1dd4:
    // 0x1d1dd4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d1dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d1dd8:
    // 0x1d1dd8: 0xafa400c0  sw          $a0, 0xC0($sp)
    ctx->pc = 0x1d1dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
label_1d1ddc:
    // 0x1d1ddc: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x1d1ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1d1de0:
    // 0x1d1de0: 0xc06479c  jal         func_191E70
label_1d1de4:
    if (ctx->pc == 0x1D1DE4u) {
        ctx->pc = 0x1D1DE8u;
        goto label_1d1de8;
    }
    ctx->pc = 0x1D1DE0u;
    SET_GPR_U32(ctx, 31, 0x1D1DE8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1D1DE0u, 0x1D1DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1DE8u;
label_1d1de8:
    // 0x1d1de8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1d1de8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d1dec:
    // 0x1d1dec: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d1decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1d1df0:
    // 0x1d1df0: 0x244400d0  addiu       $a0, $v0, 0xD0
    ctx->pc = 0x1d1df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
label_1d1df4:
    // 0x1d1df4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1df8:
    // 0x1d1df8: 0xc05612c  jal         func_1584B0
label_1d1dfc:
    if (ctx->pc == 0x1D1DFCu) {
        ctx->pc = 0x1D1E00u;
        goto label_1d1e00;
    }
    ctx->pc = 0x1D1DF8u;
    SET_GPR_U32(ctx, 31, 0x1D1E00u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1D1DF8u, 0x1D1E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1E00u;
label_1d1e00:
    // 0x1d1e00: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1d1e00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d1e04:
    // 0x1d1e04: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d1e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1d1e08:
    // 0x1d1e08: 0x27a600a8  addiu       $a2, $sp, 0xA8
    ctx->pc = 0x1d1e08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_1d1e0c:
    // 0x1d1e0c: 0xc08c6c8  jal         func_231B20
label_1d1e10:
    if (ctx->pc == 0x1D1E10u) {
        ctx->pc = 0x1D1E14u;
        goto label_1d1e14;
    }
    ctx->pc = 0x1D1E0Cu;
    SET_GPR_U32(ctx, 31, 0x1D1E14u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x1D1E0Cu, 0x1D1E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1E14u;
label_1d1e14:
    // 0x1d1e14: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1d1e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1d1e18:
    // 0x1d1e18: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d1e18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d1e1c:
    // 0x1d1e1c: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x1d1e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1e20:
    // 0x1d1e20: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1d1e20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1d1e24:
    // 0x1d1e24: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x1d1e24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_1d1e28:
    // 0x1d1e28: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1d1e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1d1e2c:
    // 0x1d1e2c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d1e2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d1e30:
    // 0x1d1e30: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x1d1e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1e34:
    // 0x1d1e34: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1d1e34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1d1e38:
    // 0x1d1e38: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x1d1e38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_1d1e3c:
    // 0x1d1e3c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d1e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1d1e40:
    // 0x1d1e40: 0x244400b4  addiu       $a0, $v0, 0xB4
    ctx->pc = 0x1d1e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
label_1d1e44:
    // 0x1d1e44: 0xc05611c  jal         func_158470
label_1d1e48:
    if (ctx->pc == 0x1D1E48u) {
        ctx->pc = 0x1D1E4Cu;
        goto label_1d1e4c;
    }
    ctx->pc = 0x1D1E44u;
    SET_GPR_U32(ctx, 31, 0x1D1E4Cu);
    ctx->pc = 0x158470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158470u, 0x1D1E44u, 0x1D1E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1E4Cu;
label_1d1e4c:
    // 0x1d1e4c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d1e4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d1e50:
    // 0x1d1e50: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1d1e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_1d1e54:
    // 0x1d1e54: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1d1e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1d1e58:
    // 0x1d1e58: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1d1e5c:
    if (ctx->pc == 0x1D1E5Cu) {
        ctx->pc = 0x1D1E60u;
        goto label_1d1e60;
    }
    ctx->pc = 0x1D1E58u;
    {
        const bool branch_taken_0x1d1e58 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1d1e58) {
            ctx->pc = 0x1D1E74u;
            goto label_1d1e74;
        }
    }
    ctx->pc = 0x1D1E60u;
label_1d1e60:
    // 0x1d1e60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d1e60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d1e64:
    // 0x1d1e64: 0x0  nop
    ctx->pc = 0x1d1e64u;
    // NOP
label_1d1e68:
    // 0x1d1e68: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1d1e68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1d1e6c:
    // 0x1d1e6c: 0x10000008  b           . + 4 + (0x8 << 2)
label_1d1e70:
    if (ctx->pc == 0x1D1E70u) {
        ctx->pc = 0x1D1E74u;
        goto label_1d1e74;
    }
    ctx->pc = 0x1D1E6Cu;
    {
        const bool branch_taken_0x1d1e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1e6c) {
            ctx->pc = 0x1D1E90u;
            goto label_1d1e90;
        }
    }
    ctx->pc = 0x1D1E74u;
label_1d1e74:
    // 0x1d1e74: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1d1e74u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_1d1e78:
    // 0x1d1e78: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d1e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1d1e7c:
    // 0x1d1e7c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1d1e7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1d1e80:
    // 0x1d1e80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d1e80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d1e84:
    // 0x1d1e84: 0x0  nop
    ctx->pc = 0x1d1e84u;
    // NOP
label_1d1e88:
    // 0x1d1e88: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1d1e88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1d1e8c:
    // 0x1d1e8c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1d1e8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1d1e90:
    // 0x1d1e90: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x1d1e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
label_1d1e94:
    // 0x1d1e94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d1e94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d1e98:
    // 0x1d1e98: 0x0  nop
    ctx->pc = 0x1d1e98u;
    // NOP
label_1d1e9c:
    // 0x1d1e9c: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x1d1e9cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1d1ea0:
    // 0x1d1ea0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x1d1ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_1d1ea4:
    // 0x1d1ea4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1d1ea4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1d1ea8:
    // 0x1d1ea8: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1d1ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_1d1eac:
    // 0x1d1eac: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1d1eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1d1eb0:
    // 0x1d1eb0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1d1eb4:
    if (ctx->pc == 0x1D1EB4u) {
        ctx->pc = 0x1D1EB8u;
        goto label_1d1eb8;
    }
    ctx->pc = 0x1D1EB0u;
    {
        const bool branch_taken_0x1d1eb0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1d1eb0) {
            ctx->pc = 0x1D1ECCu;
            goto label_1d1ecc;
        }
    }
    ctx->pc = 0x1D1EB8u;
label_1d1eb8:
    // 0x1d1eb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d1eb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d1ebc:
    // 0x1d1ebc: 0x0  nop
    ctx->pc = 0x1d1ebcu;
    // NOP
label_1d1ec0:
    // 0x1d1ec0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1d1ec0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1d1ec4:
    // 0x1d1ec4: 0x10000008  b           . + 4 + (0x8 << 2)
label_1d1ec8:
    if (ctx->pc == 0x1D1EC8u) {
        ctx->pc = 0x1D1ECCu;
        goto label_1d1ecc;
    }
    ctx->pc = 0x1D1EC4u;
    {
        const bool branch_taken_0x1d1ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1ec4) {
            ctx->pc = 0x1D1EE8u;
            goto label_1d1ee8;
        }
    }
    ctx->pc = 0x1D1ECCu;
label_1d1ecc:
    // 0x1d1ecc: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1d1eccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_1d1ed0:
    // 0x1d1ed0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d1ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1d1ed4:
    // 0x1d1ed4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1d1ed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1d1ed8:
    // 0x1d1ed8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d1ed8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d1edc:
    // 0x1d1edc: 0x0  nop
    ctx->pc = 0x1d1edcu;
    // NOP
label_1d1ee0:
    // 0x1d1ee0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1d1ee0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1d1ee4:
    // 0x1d1ee4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1d1ee4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1d1ee8:
    // 0x1d1ee8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d1ee8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d1eec:
    // 0x1d1eec: 0x0  nop
    ctx->pc = 0x1d1eecu;
    // NOP
label_1d1ef0:
    // 0x1d1ef0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1d1ef0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_1d1ef4:
    // 0x1d1ef4: 0x4603109d  msub.s      $f2, $f2, $f3
    ctx->pc = 0x1d1ef4u;
    ctx->f[2] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_1d1ef8:
    // 0x1d1ef8: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1d1ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_1d1efc:
    // 0x1d1efc: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1d1efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1d1f00:
    // 0x1d1f00: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1d1f04:
    if (ctx->pc == 0x1D1F04u) {
        ctx->pc = 0x1D1F08u;
        goto label_1d1f08;
    }
    ctx->pc = 0x1D1F00u;
    {
        const bool branch_taken_0x1d1f00 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1d1f00) {
            ctx->pc = 0x1D1F1Cu;
            goto label_1d1f1c;
        }
    }
    ctx->pc = 0x1D1F08u;
label_1d1f08:
    // 0x1d1f08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d1f08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d1f0c:
    // 0x1d1f0c: 0x0  nop
    ctx->pc = 0x1d1f0cu;
    // NOP
label_1d1f10:
    // 0x1d1f10: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1d1f10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1d1f14:
    // 0x1d1f14: 0x10000008  b           . + 4 + (0x8 << 2)
label_1d1f18:
    if (ctx->pc == 0x1D1F18u) {
        ctx->pc = 0x1D1F1Cu;
        goto label_1d1f1c;
    }
    ctx->pc = 0x1D1F14u;
    {
        const bool branch_taken_0x1d1f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1f14) {
            ctx->pc = 0x1D1F38u;
            goto label_1d1f38;
        }
    }
    ctx->pc = 0x1D1F1Cu;
label_1d1f1c:
    // 0x1d1f1c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1d1f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_1d1f20:
    // 0x1d1f20: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d1f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1d1f24:
    // 0x1d1f24: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1d1f24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1d1f28:
    // 0x1d1f28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d1f28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d1f2c:
    // 0x1d1f2c: 0x0  nop
    ctx->pc = 0x1d1f2cu;
    // NOP
label_1d1f30:
    // 0x1d1f30: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1d1f30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1d1f34:
    // 0x1d1f34: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1d1f34u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1d1f38:
    // 0x1d1f38: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x1d1f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
label_1d1f3c:
    // 0x1d1f3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d1f3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d1f40:
    // 0x1d1f40: 0x0  nop
    ctx->pc = 0x1d1f40u;
    // NOP
label_1d1f44:
    // 0x1d1f44: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1d1f44u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1d1f48:
    // 0x1d1f48: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1d1f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_1d1f4c:
    // 0x1d1f4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d1f4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d1f50:
    // 0x1d1f50: 0x0  nop
    ctx->pc = 0x1d1f50u;
    // NOP
label_1d1f54:
    // 0x1d1f54: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d1f54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1d1f58:
    // 0x1d1f58: 0x46001043  div.s       $f1, $f2, $f0
    ctx->pc = 0x1d1f58u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
label_1d1f5c:
    // 0x1d1f5c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1d1f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1d1f60:
    // 0x1d1f60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d1f60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d1f64:
    // 0x1d1f64: 0x0  nop
    ctx->pc = 0x1d1f64u;
    // NOP
label_1d1f68:
    // 0x1d1f68: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1d1f68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d1f6c:
    // 0x1d1f6c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_1d1f70:
    if (ctx->pc == 0x1D1F70u) {
        ctx->pc = 0x1D1F74u;
        goto label_1d1f74;
    }
    ctx->pc = 0x1D1F6Cu;
    {
        const bool branch_taken_0x1d1f6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d1f6c) {
            ctx->pc = 0x1D1F84u;
            goto label_1d1f84;
        }
    }
    ctx->pc = 0x1D1F74u;
label_1d1f74:
    // 0x1d1f74: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d1f74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1d1f78:
    // 0x1d1f78: 0x44130800  mfc1        $s3, $f1
    ctx->pc = 0x1d1f78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
label_1d1f7c:
    // 0x1d1f7c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1d1f80:
    if (ctx->pc == 0x1D1F80u) {
        ctx->pc = 0x1D1F84u;
        goto label_1d1f84;
    }
    ctx->pc = 0x1D1F7Cu;
    {
        const bool branch_taken_0x1d1f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1f7c) {
            ctx->pc = 0x1D1F98u;
            goto label_1d1f98;
        }
    }
    ctx->pc = 0x1D1F84u;
label_1d1f84:
    // 0x1d1f84: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1d1f84u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d1f88:
    // 0x1d1f88: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d1f88u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1d1f8c:
    // 0x1d1f8c: 0x44130800  mfc1        $s3, $f1
    ctx->pc = 0x1d1f8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
label_1d1f90:
    // 0x1d1f90: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1d1f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1d1f94:
    // 0x1d1f94: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x1d1f94u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_1d1f98:
    // 0x1d1f98: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x1d1f98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_1d1f9c:
    // 0x1d1f9c: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x1d1f9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_1d1fa0:
    // 0x1d1fa0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1d1fa4:
    if (ctx->pc == 0x1D1FA4u) {
        ctx->pc = 0x1D1FA8u;
        goto label_1d1fa8;
    }
    ctx->pc = 0x1D1FA0u;
    {
        const bool branch_taken_0x1d1fa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d1fa0) {
            ctx->pc = 0x1D1FC8u;
            goto label_1d1fc8;
        }
    }
    ctx->pc = 0x1D1FA8u;
label_1d1fa8:
    // 0x1d1fa8: 0x2e42000a  sltiu       $v0, $s2, 0xA
    ctx->pc = 0x1d1fa8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_1d1fac:
    // 0x1d1fac: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1d1fb0:
    if (ctx->pc == 0x1D1FB0u) {
        ctx->pc = 0x1D1FB4u;
        goto label_1d1fb4;
    }
    ctx->pc = 0x1D1FACu;
    {
        const bool branch_taken_0x1d1fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d1fac) {
            ctx->pc = 0x1D1FC8u;
            goto label_1d1fc8;
        }
    }
    ctx->pc = 0x1D1FB4u;
label_1d1fb4:
    // 0x1d1fb4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d1fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d1fb8:
    // 0x1d1fb8: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x1d1fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_1d1fbc:
    // 0x1d1fbc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d1fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d1fc0:
    // 0x1d1fc0: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x1d1fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_1d1fc4:
    // 0x1d1fc4: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x1d1fc4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d1fc8:
    // 0x1d1fc8: 0x253001b  divu        $zero, $s2, $s3
    ctx->pc = 0x1d1fc8u;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,18); } }
label_1d1fcc:
    // 0x1d1fcc: 0x1012  mflo        $v0
    ctx->pc = 0x1d1fccu;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1d1fd0:
    // 0x1d1fd0: 0x24560001  addiu       $s6, $v0, 0x1
    ctx->pc = 0x1d1fd0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d1fd4:
    // 0x1d1fd4: 0x272082b  sltu        $at, $s3, $s2
    ctx->pc = 0x1d1fd4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_1d1fd8:
    // 0x1d1fd8: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_1d1fdc:
    if (ctx->pc == 0x1D1FDCu) {
        ctx->pc = 0x1D1FE0u;
        goto label_1d1fe0;
    }
    ctx->pc = 0x1D1FD8u;
    {
        const bool branch_taken_0x1d1fd8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1fd8) {
            ctx->pc = 0x1D1FECu;
            goto label_1d1fec;
        }
    }
    ctx->pc = 0x1D1FE0u;
label_1d1fe0:
    // 0x1d1fe0: 0x260a02d  daddu       $s4, $s3, $zero
    ctx->pc = 0x1d1fe0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d1fe4:
    // 0x1d1fe4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1d1fe8:
    if (ctx->pc == 0x1D1FE8u) {
        ctx->pc = 0x1D1FECu;
        goto label_1d1fec;
    }
    ctx->pc = 0x1D1FE4u;
    {
        const bool branch_taken_0x1d1fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1fe4) {
            ctx->pc = 0x1D1FF0u;
            goto label_1d1ff0;
        }
    }
    ctx->pc = 0x1D1FECu;
label_1d1fec:
    // 0x1d1fec: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x1d1fecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d1ff0:
    // 0x1d1ff0: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x1d1ff0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d1ff4:
    // 0x1d1ff4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1d1ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1d1ff8:
    // 0x1d1ff8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1d1ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1d1ffc:
    // 0x1d1ffc: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_1d2000:
    if (ctx->pc == 0x1D2000u) {
        ctx->pc = 0x1D2004u;
        goto label_1d2004;
    }
    ctx->pc = 0x1D1FFCu;
    {
        const bool branch_taken_0x1d1ffc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1ffc) {
            ctx->pc = 0x1D2024u;
            goto label_1d2024;
        }
    }
    ctx->pc = 0x1D2004u;
label_1d2004:
    // 0x1d2004: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x1d2004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_1d2008:
    // 0x1d2008: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1d2008u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_1d200c:
    // 0x1d200c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1d200cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1d2010:
    // 0x1d2010: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1d2010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1d2014:
    // 0x1d2014: 0x0  nop
    ctx->pc = 0x1d2014u;
    // NOP
label_1d2018:
    // 0x1d2018: 0x0  nop
    ctx->pc = 0x1d2018u;
    // NOP
label_1d201c:
    // 0x1d201c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_1d2020:
    if (ctx->pc == 0x1D2020u) {
        ctx->pc = 0x1D2024u;
        goto label_1d2024;
    }
    ctx->pc = 0x1D201Cu;
    {
        const bool branch_taken_0x1d201c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d201c) {
            ctx->pc = 0x1D2008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d2008;
        }
    }
    ctx->pc = 0x1D2024u;
label_1d2024:
    // 0x1d2024: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1d2024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_1d2028:
    // 0x1d2028: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1d2028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1d202c:
    // 0x1d202c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1d2030:
    if (ctx->pc == 0x1D2030u) {
        ctx->pc = 0x1D2034u;
        goto label_1d2034;
    }
    ctx->pc = 0x1D202Cu;
    {
        const bool branch_taken_0x1d202c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1d202c) {
            ctx->pc = 0x1D2048u;
            goto label_1d2048;
        }
    }
    ctx->pc = 0x1D2034u;
label_1d2034:
    // 0x1d2034: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d2034u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d2038:
    // 0x1d2038: 0x0  nop
    ctx->pc = 0x1d2038u;
    // NOP
label_1d203c:
    // 0x1d203c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1d203cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1d2040:
    // 0x1d2040: 0x10000008  b           . + 4 + (0x8 << 2)
label_1d2044:
    if (ctx->pc == 0x1D2044u) {
        ctx->pc = 0x1D2048u;
        goto label_1d2048;
    }
    ctx->pc = 0x1D2040u;
    {
        const bool branch_taken_0x1d2040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2040) {
            ctx->pc = 0x1D2064u;
            goto label_1d2064;
        }
    }
    ctx->pc = 0x1D2048u;
label_1d2048:
    // 0x1d2048: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1d2048u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_1d204c:
    // 0x1d204c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d204cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1d2050:
    // 0x1d2050: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1d2050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1d2054:
    // 0x1d2054: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d2054u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d2058:
    // 0x1d2058: 0x0  nop
    ctx->pc = 0x1d2058u;
    // NOP
label_1d205c:
    // 0x1d205c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1d205cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1d2060:
    // 0x1d2060: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1d2060u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1d2064:
    // 0x1d2064: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x1d2064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
label_1d2068:
    // 0x1d2068: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d2068u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d206c:
    // 0x1d206c: 0x0  nop
    ctx->pc = 0x1d206cu;
    // NOP
label_1d2070:
    // 0x1d2070: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1d2070u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1d2074:
    // 0x1d2074: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1d2074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_1d2078:
    // 0x1d2078: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d2078u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d207c:
    // 0x1d207c: 0x0  nop
    ctx->pc = 0x1d207cu;
    // NOP
label_1d2080:
    // 0x1d2080: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1d2080u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1d2084:
    // 0x1d2084: 0x6a00006  bltz        $s5, . + 4 + (0x6 << 2)
label_1d2088:
    if (ctx->pc == 0x1D2088u) {
        ctx->pc = 0x1D208Cu;
        goto label_1d208c;
    }
    ctx->pc = 0x1D2084u;
    {
        const bool branch_taken_0x1d2084 = (GPR_S32(ctx, 21) < 0);
        if (branch_taken_0x1d2084) {
            ctx->pc = 0x1D20A0u;
            goto label_1d20a0;
        }
    }
    ctx->pc = 0x1D208Cu;
label_1d208c:
    // 0x1d208c: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x1d208cu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d2090:
    // 0x1d2090: 0x0  nop
    ctx->pc = 0x1d2090u;
    // NOP
label_1d2094:
    // 0x1d2094: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d2094u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1d2098:
    // 0x1d2098: 0x10000008  b           . + 4 + (0x8 << 2)
label_1d209c:
    if (ctx->pc == 0x1D209Cu) {
        ctx->pc = 0x1D20A0u;
        goto label_1d20a0;
    }
    ctx->pc = 0x1D2098u;
    {
        const bool branch_taken_0x1d2098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2098) {
            ctx->pc = 0x1D20BCu;
            goto label_1d20bc;
        }
    }
    ctx->pc = 0x1D20A0u;
label_1d20a0:
    // 0x1d20a0: 0x151842  srl         $v1, $s5, 1
    ctx->pc = 0x1d20a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 21), 1));
label_1d20a4:
    // 0x1d20a4: 0x32a20001  andi        $v0, $s5, 0x1
    ctx->pc = 0x1d20a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_1d20a8:
    // 0x1d20a8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1d20a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1d20ac:
    // 0x1d20ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d20acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d20b0:
    // 0x1d20b0: 0x0  nop
    ctx->pc = 0x1d20b0u;
    // NOP
label_1d20b4:
    // 0x1d20b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d20b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1d20b8:
    // 0x1d20b8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1d20b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1d20bc:
    // 0x1d20bc: 0x460008c2  mul.s       $f3, $f1, $f0
    ctx->pc = 0x1d20bcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1d20c0:
    // 0x1d20c0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1d20c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1d20c4:
    // 0x1d20c4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1d20c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1d20c8:
    // 0x1d20c8: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1d20c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_1d20cc:
    // 0x1d20cc: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1d20ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1d20d0:
    // 0x1d20d0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1d20d4:
    if (ctx->pc == 0x1D20D4u) {
        ctx->pc = 0x1D20D8u;
        goto label_1d20d8;
    }
    ctx->pc = 0x1D20D0u;
    {
        const bool branch_taken_0x1d20d0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1d20d0) {
            ctx->pc = 0x1D20ECu;
            goto label_1d20ec;
        }
    }
    ctx->pc = 0x1D20D8u;
label_1d20d8:
    // 0x1d20d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d20d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d20dc:
    // 0x1d20dc: 0x0  nop
    ctx->pc = 0x1d20dcu;
    // NOP
label_1d20e0:
    // 0x1d20e0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1d20e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1d20e4:
    // 0x1d20e4: 0x10000008  b           . + 4 + (0x8 << 2)
label_1d20e8:
    if (ctx->pc == 0x1D20E8u) {
        ctx->pc = 0x1D20ECu;
        goto label_1d20ec;
    }
    ctx->pc = 0x1D20E4u;
    {
        const bool branch_taken_0x1d20e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d20e4) {
            ctx->pc = 0x1D2108u;
            goto label_1d2108;
        }
    }
    ctx->pc = 0x1D20ECu;
label_1d20ec:
    // 0x1d20ec: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1d20ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_1d20f0:
    // 0x1d20f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d20f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1d20f4:
    // 0x1d20f4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1d20f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1d20f8:
    // 0x1d20f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d20f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d20fc:
    // 0x1d20fc: 0x0  nop
    ctx->pc = 0x1d20fcu;
    // NOP
label_1d2100:
    // 0x1d2100: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1d2100u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1d2104:
    // 0x1d2104: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1d2104u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1d2108:
    // 0x1d2108: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1d2108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1d210c:
    // 0x1d210c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d210cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d2110:
    // 0x1d2110: 0x0  nop
    ctx->pc = 0x1d2110u;
    // NOP
label_1d2114:
    // 0x1d2114: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1d2114u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1d2118:
    // 0x1d2118: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d2118u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d211c:
    // 0x1d211c: 0x0  nop
    ctx->pc = 0x1d211cu;
    // NOP
label_1d2120:
    // 0x1d2120: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1d2120u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_1d2124:
    // 0x1d2124: 0x4603105d  msub.s      $f1, $f2, $f3
    ctx->pc = 0x1d2124u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_1d2128:
    // 0x1d2128: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x1d2128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d212c:
    // 0x1d212c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d212cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1d2130:
    // 0x1d2130: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x1d2130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_1d2134:
    // 0x1d2134: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1d2134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_1d2138:
    // 0x1d2138: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1d2138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1d213c:
    // 0x1d213c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1d2140:
    if (ctx->pc == 0x1D2140u) {
        ctx->pc = 0x1D2144u;
        goto label_1d2144;
    }
    ctx->pc = 0x1D213Cu;
    {
        const bool branch_taken_0x1d213c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1d213c) {
            ctx->pc = 0x1D2158u;
            goto label_1d2158;
        }
    }
    ctx->pc = 0x1D2144u;
label_1d2144:
    // 0x1d2144: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d2144u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d2148:
    // 0x1d2148: 0x0  nop
    ctx->pc = 0x1d2148u;
    // NOP
label_1d214c:
    // 0x1d214c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x1d214cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_1d2150:
    // 0x1d2150: 0x10000008  b           . + 4 + (0x8 << 2)
label_1d2154:
    if (ctx->pc == 0x1D2154u) {
        ctx->pc = 0x1D2158u;
        goto label_1d2158;
    }
    ctx->pc = 0x1D2150u;
    {
        const bool branch_taken_0x1d2150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2150) {
            ctx->pc = 0x1D2174u;
            goto label_1d2174;
        }
    }
    ctx->pc = 0x1D2158u;
label_1d2158:
    // 0x1d2158: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1d2158u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_1d215c:
    // 0x1d215c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d215cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1d2160:
    // 0x1d2160: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1d2160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1d2164:
    // 0x1d2164: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d2164u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d2168:
    // 0x1d2168: 0x0  nop
    ctx->pc = 0x1d2168u;
    // NOP
label_1d216c:
    // 0x1d216c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x1d216cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_1d2170:
    // 0x1d2170: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x1d2170u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_1d2174:
    // 0x1d2174: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1d2174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1d2178:
    // 0x1d2178: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1d2178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1d217c:
    // 0x1d217c: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1d217cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_1d2180:
    // 0x1d2180: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1d2180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1d2184:
    // 0x1d2184: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1d2188:
    if (ctx->pc == 0x1D2188u) {
        ctx->pc = 0x1D218Cu;
        goto label_1d218c;
    }
    ctx->pc = 0x1D2184u;
    {
        const bool branch_taken_0x1d2184 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1d2184) {
            ctx->pc = 0x1D21A0u;
            goto label_1d21a0;
        }
    }
    ctx->pc = 0x1D218Cu;
label_1d218c:
    // 0x1d218c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d218cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d2190:
    // 0x1d2190: 0x0  nop
    ctx->pc = 0x1d2190u;
    // NOP
label_1d2194:
    // 0x1d2194: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1d2194u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1d2198:
    // 0x1d2198: 0x10000008  b           . + 4 + (0x8 << 2)
label_1d219c:
    if (ctx->pc == 0x1D219Cu) {
        ctx->pc = 0x1D21A0u;
        goto label_1d21a0;
    }
    ctx->pc = 0x1D2198u;
    {
        const bool branch_taken_0x1d2198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2198) {
            ctx->pc = 0x1D21BCu;
            goto label_1d21bc;
        }
    }
    ctx->pc = 0x1D21A0u;
label_1d21a0:
    // 0x1d21a0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1d21a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_1d21a4:
    // 0x1d21a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d21a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1d21a8:
    // 0x1d21a8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1d21a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1d21ac:
    // 0x1d21ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d21acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d21b0:
    // 0x1d21b0: 0x0  nop
    ctx->pc = 0x1d21b0u;
    // NOP
label_1d21b4:
    // 0x1d21b4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1d21b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1d21b8:
    // 0x1d21b8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1d21b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1d21bc:
    // 0x1d21bc: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x1d21bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
label_1d21c0:
    // 0x1d21c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d21c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d21c4:
    // 0x1d21c4: 0x0  nop
    ctx->pc = 0x1d21c4u;
    // NOP
label_1d21c8:
    // 0x1d21c8: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1d21c8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1d21cc:
    // 0x1d21cc: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1d21ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_1d21d0:
    // 0x1d21d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d21d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d21d4:
    // 0x1d21d4: 0x0  nop
    ctx->pc = 0x1d21d4u;
    // NOP
label_1d21d8:
    // 0x1d21d8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1d21d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1d21dc:
    // 0x1d21dc: 0x26c2fffe  addiu       $v0, $s6, -0x2
    ctx->pc = 0x1d21dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967294));
label_1d21e0:
    // 0x1d21e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d21e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d21e4:
    // 0x1d21e4: 0x0  nop
    ctx->pc = 0x1d21e4u;
    // NOP
label_1d21e8:
    // 0x1d21e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d21e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1d21ec:
    // 0x1d21ec: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1d21ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1d21f0:
    // 0x1d21f0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1d21f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1d21f4:
    // 0x1d21f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d21f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d21f8:
    // 0x1d21f8: 0x0  nop
    ctx->pc = 0x1d21f8u;
    // NOP
label_1d21fc:
    // 0x1d21fc: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1d21fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1d2200:
    // 0x1d2200: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d2200u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d2204:
    // 0x1d2204: 0x0  nop
    ctx->pc = 0x1d2204u;
    // NOP
label_1d2208:
    // 0x1d2208: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1d2208u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_1d220c:
    // 0x1d220c: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x1d220cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_1d2210:
    // 0x1d2210: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x1d2210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d2214:
    // 0x1d2214: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d2214u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1d2218:
    // 0x1d2218: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x1d2218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_1d221c:
    // 0x1d221c: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1d221cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_1d2220:
    // 0x1d2220: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x1d2220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1d2224:
    // 0x1d2224: 0x27a30098  addiu       $v1, $sp, 0x98
    ctx->pc = 0x1d2224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_1d2228:
    // 0x1d2228: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x1d2228u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_1d222c:
    // 0x1d222c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1d222cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_1d2230:
    // 0x1d2230: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d2230u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d2234:
    // 0x1d2234: 0x10000129  b           . + 4 + (0x129 << 2)
label_1d2238:
    if (ctx->pc == 0x1D2238u) {
        ctx->pc = 0x1D223Cu;
        goto label_1d223c;
    }
    ctx->pc = 0x1D2234u;
    {
        const bool branch_taken_0x1d2234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2234) {
            ctx->pc = 0x1D26DCu;
            goto label_1d26dc;
        }
    }
    ctx->pc = 0x1D223Cu;
label_1d223c:
    // 0x1d223c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1d223cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1d2240:
    // 0x1d2240: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1d2240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1d2244:
    // 0x1d2244: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_1d2248:
    if (ctx->pc == 0x1D2248u) {
        ctx->pc = 0x1D224Cu;
        goto label_1d224c;
    }
    ctx->pc = 0x1D2244u;
    {
        const bool branch_taken_0x1d2244 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2244) {
            ctx->pc = 0x1D226Cu;
            goto label_1d226c;
        }
    }
    ctx->pc = 0x1D224Cu;
label_1d224c:
    // 0x1d224c: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x1d224cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_1d2250:
    // 0x1d2250: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1d2250u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_1d2254:
    // 0x1d2254: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1d2254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1d2258:
    // 0x1d2258: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1d2258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1d225c:
    // 0x1d225c: 0x0  nop
    ctx->pc = 0x1d225cu;
    // NOP
label_1d2260:
    // 0x1d2260: 0x0  nop
    ctx->pc = 0x1d2260u;
    // NOP
label_1d2264:
    // 0x1d2264: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_1d2268:
    if (ctx->pc == 0x1D2268u) {
        ctx->pc = 0x1D226Cu;
        goto label_1d226c;
    }
    ctx->pc = 0x1D2264u;
    {
        const bool branch_taken_0x1d2264 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d2264) {
            ctx->pc = 0x1D2250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d2250;
        }
    }
    ctx->pc = 0x1D226Cu;
label_1d226c:
    // 0x1d226c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d226cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1d2270:
    // 0x1d2270: 0x244400b4  addiu       $a0, $v0, 0xB4
    ctx->pc = 0x1d2270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
label_1d2274:
    // 0x1d2274: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d2274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d2278:
    // 0x1d2278: 0xc05612c  jal         func_1584B0
label_1d227c:
    if (ctx->pc == 0x1D227Cu) {
        ctx->pc = 0x1D2280u;
        goto label_1d2280;
    }
    ctx->pc = 0x1D2278u;
    SET_GPR_U32(ctx, 31, 0x1D2280u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1D2278u, 0x1D2280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2280u;
label_1d2280:
    // 0x1d2280: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d2280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d2284:
    // 0x1d2284: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1d2284u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1d2288:
    // 0x1d2288: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1d2288u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d228c:
    // 0x1d228c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d228cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1d2290:
    // 0x1d2290: 0x8c4200cc  lw          $v0, 0xCC($v0)
    ctx->pc = 0x1d2290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_1d2294:
    // 0x1d2294: 0x222082b  sltu        $at, $s1, $v0
    ctx->pc = 0x1d2294u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1d2298:
    // 0x1d2298: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_1d229c:
    if (ctx->pc == 0x1D229Cu) {
        ctx->pc = 0x1D22A0u;
        goto label_1d22a0;
    }
    ctx->pc = 0x1D2298u;
    {
        const bool branch_taken_0x1d2298 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2298) {
            ctx->pc = 0x1D22ACu;
            goto label_1d22ac;
        }
    }
    ctx->pc = 0x1D22A0u;
label_1d22a0:
    // 0x1d22a0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d22a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1d22a4:
    // 0x1d22a4: 0x1000002d  b           . + 4 + (0x2D << 2)
label_1d22a8:
    if (ctx->pc == 0x1D22A8u) {
        ctx->pc = 0x1D22ACu;
        goto label_1d22ac;
    }
    ctx->pc = 0x1D22A4u;
    {
        const bool branch_taken_0x1d22a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d22a4) {
            ctx->pc = 0x1D235Cu;
            goto label_1d235c;
        }
    }
    ctx->pc = 0x1D22ACu;
label_1d22ac:
    // 0x1d22ac: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d22acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1d22b0:
    // 0x1d22b0: 0x8c4200cc  lw          $v0, 0xCC($v0)
    ctx->pc = 0x1d22b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_1d22b4:
    // 0x1d22b4: 0x16220029  bne         $s1, $v0, . + 4 + (0x29 << 2)
label_1d22b8:
    if (ctx->pc == 0x1D22B8u) {
        ctx->pc = 0x1D22BCu;
        goto label_1d22bc;
    }
    ctx->pc = 0x1D22B4u;
    {
        const bool branch_taken_0x1d22b4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d22b4) {
            ctx->pc = 0x1D235Cu;
            goto label_1d235c;
        }
    }
    ctx->pc = 0x1D22BCu;
label_1d22bc:
    // 0x1d22bc: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d22bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1d22c0:
    // 0x1d22c0: 0xc44100e8  lwc1        $f1, 0xE8($v0)
    ctx->pc = 0x1d22c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d22c4:
    // 0x1d22c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d22c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d22c8:
    // 0x1d22c8: 0x0  nop
    ctx->pc = 0x1d22c8u;
    // NOP
label_1d22cc:
    // 0x1d22cc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d22ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d22d0:
    // 0x1d22d0: 0x45010022  bc1t        . + 4 + (0x22 << 2)
label_1d22d4:
    if (ctx->pc == 0x1D22D4u) {
        ctx->pc = 0x1D22D8u;
        goto label_1d22d8;
    }
    ctx->pc = 0x1D22D0u;
    {
        const bool branch_taken_0x1d22d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d22d0) {
            ctx->pc = 0x1D235Cu;
            goto label_1d235c;
        }
    }
    ctx->pc = 0x1D22D8u;
label_1d22d8:
    // 0x1d22d8: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x1d22d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_1d22dc:
    // 0x1d22dc: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1d22dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1d22e0:
    // 0x1d22e0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1d22e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1d22e4:
    // 0x1d22e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d22e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d22e8:
    // 0x1d22e8: 0xc46000e8  lwc1        $f0, 0xE8($v1)
    ctx->pc = 0x1d22e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d22ec:
    // 0x1d22ec: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1d22ecu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_1d22f0:
    // 0x1d22f0: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1d22f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_1d22f4:
    // 0x1d22f4: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1d22f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1d22f8:
    // 0x1d22f8: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1d22f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_1d22fc:
    // 0x1d22fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d22fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d2300:
    // 0x1d2300: 0xc46000e8  lwc1        $f0, 0xE8($v1)
    ctx->pc = 0x1d2300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d2304:
    // 0x1d2304: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1d2304u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1d2308:
    // 0x1d2308: 0xc0c38f0  jal         func_30E3C0
label_1d230c:
    if (ctx->pc == 0x1D230Cu) {
        ctx->pc = 0x1D2310u;
        goto label_1d2310;
    }
    ctx->pc = 0x1D2308u;
    SET_GPR_U32(ctx, 31, 0x1D2310u);
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x1D2308u, 0x1D2310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2310u;
label_1d2310:
    // 0x1d2310: 0x3c0240f0  lui         $v0, 0x40F0
    ctx->pc = 0x1d2310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16624 << 16));
label_1d2314:
    // 0x1d2314: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1d2314u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1d2318:
    // 0x1d2318: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x1d2318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d231c:
    // 0x1d231c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1d231cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1d2320:
    // 0x1d2320: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1d2320u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1d2324:
    // 0x1d2324: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1d2324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1d2328:
    // 0x1d2328: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1d2328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1d232c:
    // 0x1d232c: 0x3c0242ca  lui         $v0, 0x42CA
    ctx->pc = 0x1d232cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17098 << 16));
label_1d2330:
    // 0x1d2330: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d2330u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d2334:
    // 0x1d2334: 0xc46000e8  lwc1        $f0, 0xE8($v1)
    ctx->pc = 0x1d2334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d2338:
    // 0x1d2338: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1d2338u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1d233c:
    // 0x1d233c: 0xc0c3966  jal         func_30E598
label_1d2340:
    if (ctx->pc == 0x1D2340u) {
        ctx->pc = 0x1D2344u;
        goto label_1d2344;
    }
    ctx->pc = 0x1D233Cu;
    SET_GPR_U32(ctx, 31, 0x1D2344u);
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x1D233Cu, 0x1D2344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2344u;
label_1d2344:
    // 0x1d2344: 0x3c024060  lui         $v0, 0x4060
    ctx->pc = 0x1d2344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16480 << 16));
label_1d2348:
    // 0x1d2348: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1d2348u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1d234c:
    // 0x1d234c: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x1d234cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d2350:
    // 0x1d2350: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1d2350u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1d2354:
    // 0x1d2354: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1d2354u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1d2358:
    // 0x1d2358: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x1d2358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1d235c:
    // 0x1d235c: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x1d235cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1d2360:
    // 0x1d2360: 0xc06479c  jal         func_191E70
label_1d2364:
    if (ctx->pc == 0x1D2364u) {
        ctx->pc = 0x1D2368u;
        goto label_1d2368;
    }
    ctx->pc = 0x1D2360u;
    SET_GPR_U32(ctx, 31, 0x1D2368u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1D2360u, 0x1D2368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2368u;
label_1d2368:
    // 0x1d2368: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1d2368u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d236c:
    // 0x1d236c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d236cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1d2370:
    // 0x1d2370: 0x244400d0  addiu       $a0, $v0, 0xD0
    ctx->pc = 0x1d2370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
label_1d2374:
    // 0x1d2374: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d2374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d2378:
    // 0x1d2378: 0xc05612c  jal         func_1584B0
label_1d237c:
    if (ctx->pc == 0x1D237Cu) {
        ctx->pc = 0x1D2380u;
        goto label_1d2380;
    }
    ctx->pc = 0x1D2378u;
    SET_GPR_U32(ctx, 31, 0x1D2380u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1D2378u, 0x1D2380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2380u;
label_1d2380:
    // 0x1d2380: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1d2380u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d2384:
    // 0x1d2384: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d2384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1d2388:
    // 0x1d2388: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d2388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d238c:
    // 0x1d238c: 0xc08c8dc  jal         func_232370
label_1d2390:
    if (ctx->pc == 0x1D2390u) {
        ctx->pc = 0x1D2394u;
        goto label_1d2394;
    }
    ctx->pc = 0x1D238Cu;
    SET_GPR_U32(ctx, 31, 0x1D2394u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1D238Cu, 0x1D2394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2394u;
label_1d2394:
    // 0x1d2394: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d2394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1d2398:
    // 0x1d2398: 0x244400c0  addiu       $a0, $v0, 0xC0
    ctx->pc = 0x1d2398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_1d239c:
    // 0x1d239c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d239cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d23a0:
    // 0x1d23a0: 0xc05f1a8  jal         func_17C6A0
label_1d23a4:
    if (ctx->pc == 0x1D23A4u) {
        ctx->pc = 0x1D23A8u;
        goto label_1d23a8;
    }
    ctx->pc = 0x1D23A0u;
    SET_GPR_U32(ctx, 31, 0x1D23A8u);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x1D23A0u, 0x1D23A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D23A8u;
label_1d23a8:
    // 0x1d23a8: 0xc78180b0  lwc1        $f1, -0x7F50($gp)
    ctx->pc = 0x1d23a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d23ac:
    // 0x1d23ac: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1d23acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d23b0:
    // 0x1d23b0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1d23b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1d23b4:
    // 0x1d23b4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1d23b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1d23b8:
    // 0x1d23b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d23b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d23bc:
    // 0x1d23bc: 0x0  nop
    ctx->pc = 0x1d23bcu;
    // NOP
label_1d23c0:
    // 0x1d23c0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1d23c0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1d23c4:
    // 0x1d23c4: 0x0  nop
    ctx->pc = 0x1d23c4u;
    // NOP
label_1d23c8:
    // 0x1d23c8: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1d23c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_1d23cc:
    // 0x1d23cc: 0xc7ac00b8  lwc1        $f12, 0xB8($sp)
    ctx->pc = 0x1d23ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d23d0:
    // 0x1d23d0: 0xc0c3966  jal         func_30E598
label_1d23d4:
    if (ctx->pc == 0x1D23D4u) {
        ctx->pc = 0x1D23D8u;
        goto label_1d23d8;
    }
    ctx->pc = 0x1D23D0u;
    SET_GPR_U32(ctx, 31, 0x1D23D8u);
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x1D23D0u, 0x1D23D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D23D8u;
label_1d23d8:
    // 0x1d23d8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1d23d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1d23dc:
    // 0x1d23dc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1d23dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1d23e0:
    // 0x1d23e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d23e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1d23e4:
    // 0x1d23e4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1d23e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1d23e8:
    // 0x1d23e8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1d23e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d23ec:
    // 0x1d23ec: 0x0  nop
    ctx->pc = 0x1d23ecu;
    // NOP
label_1d23f0:
    // 0x1d23f0: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x1d23f0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[2]));
label_1d23f4:
    // 0x1d23f4: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x1d23f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_1d23f8:
    // 0x1d23f8: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1d23f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_1d23fc:
    // 0x1d23fc: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1d23fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_1d2400:
    // 0x1d2400: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1d2400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1d2404:
    // 0x1d2404: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1d2408:
    if (ctx->pc == 0x1D2408u) {
        ctx->pc = 0x1D240Cu;
        goto label_1d240c;
    }
    ctx->pc = 0x1D2404u;
    {
        const bool branch_taken_0x1d2404 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1d2404) {
            ctx->pc = 0x1D2420u;
            goto label_1d2420;
        }
    }
    ctx->pc = 0x1D240Cu;
label_1d240c:
    // 0x1d240c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d240cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d2410:
    // 0x1d2410: 0x0  nop
    ctx->pc = 0x1d2410u;
    // NOP
label_1d2414:
    // 0x1d2414: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1d2414u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1d2418:
    // 0x1d2418: 0x10000008  b           . + 4 + (0x8 << 2)
label_1d241c:
    if (ctx->pc == 0x1D241Cu) {
        ctx->pc = 0x1D2420u;
        goto label_1d2420;
    }
    ctx->pc = 0x1D2418u;
    {
        const bool branch_taken_0x1d2418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2418) {
            ctx->pc = 0x1D243Cu;
            goto label_1d243c;
        }
    }
    ctx->pc = 0x1D2420u;
label_1d2420:
    // 0x1d2420: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1d2420u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_1d2424:
    // 0x1d2424: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d2424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1d2428:
    // 0x1d2428: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1d2428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1d242c:
    // 0x1d242c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d242cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d2430:
    // 0x1d2430: 0x0  nop
    ctx->pc = 0x1d2430u;
    // NOP
label_1d2434:
    // 0x1d2434: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1d2434u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1d2438:
    // 0x1d2438: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1d2438u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1d243c:
    // 0x1d243c: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x1d243cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
label_1d2440:
    // 0x1d2440: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d2440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d2444:
    // 0x1d2444: 0x0  nop
    ctx->pc = 0x1d2444u;
    // NOP
label_1d2448:
    // 0x1d2448: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1d2448u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1d244c:
    // 0x1d244c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1d244cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_1d2450:
    // 0x1d2450: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d2450u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d2454:
    // 0x1d2454: 0x0  nop
    ctx->pc = 0x1d2454u;
    // NOP
label_1d2458:
    // 0x1d2458: 0x460100c2  mul.s       $f3, $f0, $f1
    ctx->pc = 0x1d2458u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1d245c:
    // 0x1d245c: 0x233001b  divu        $zero, $s1, $s3
    ctx->pc = 0x1d245cu;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,17); } }
label_1d2460:
    // 0x1d2460: 0x1010  mfhi        $v0
    ctx->pc = 0x1d2460u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1d2464:
    // 0x1d2464: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1d2468:
    if (ctx->pc == 0x1D2468u) {
        ctx->pc = 0x1D246Cu;
        goto label_1d246c;
    }
    ctx->pc = 0x1D2464u;
    {
        const bool branch_taken_0x1d2464 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1d2464) {
            ctx->pc = 0x1D2480u;
            goto label_1d2480;
        }
    }
    ctx->pc = 0x1D246Cu;
label_1d246c:
    // 0x1d246c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d246cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d2470:
    // 0x1d2470: 0x0  nop
    ctx->pc = 0x1d2470u;
    // NOP
label_1d2474:
    // 0x1d2474: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1d2474u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1d2478:
    // 0x1d2478: 0x10000008  b           . + 4 + (0x8 << 2)
label_1d247c:
    if (ctx->pc == 0x1D247Cu) {
        ctx->pc = 0x1D2480u;
        goto label_1d2480;
    }
    ctx->pc = 0x1D2478u;
    {
        const bool branch_taken_0x1d2478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2478) {
            ctx->pc = 0x1D249Cu;
            goto label_1d249c;
        }
    }
    ctx->pc = 0x1D2480u;
label_1d2480:
    // 0x1d2480: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1d2480u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_1d2484:
    // 0x1d2484: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d2484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1d2488:
    // 0x1d2488: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1d2488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1d248c:
    // 0x1d248c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d248cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d2490:
    // 0x1d2490: 0x0  nop
    ctx->pc = 0x1d2490u;
    // NOP
label_1d2494:
    // 0x1d2494: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1d2494u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1d2498:
    // 0x1d2498: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1d2498u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1d249c:
    // 0x1d249c: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x1d249cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d24a0:
    // 0x1d24a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d24a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d24a4:
    // 0x1d24a4: 0x0  nop
    ctx->pc = 0x1d24a4u;
    // NOP
label_1d24a8:
    // 0x1d24a8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1d24a8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_1d24ac:
    // 0x1d24ac: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1d24acu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_1d24b0:
    // 0x1d24b0: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x1d24b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1d24b4:
    // 0x1d24b4: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1d24b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_1d24b8:
    // 0x1d24b8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1d24b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1d24bc:
    // 0x1d24bc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1d24c0:
    if (ctx->pc == 0x1D24C0u) {
        ctx->pc = 0x1D24C4u;
        goto label_1d24c4;
    }
    ctx->pc = 0x1D24BCu;
    {
        const bool branch_taken_0x1d24bc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1d24bc) {
            ctx->pc = 0x1D24D8u;
            goto label_1d24d8;
        }
    }
    ctx->pc = 0x1D24C4u;
label_1d24c4:
    // 0x1d24c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d24c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d24c8:
    // 0x1d24c8: 0x0  nop
    ctx->pc = 0x1d24c8u;
    // NOP
label_1d24cc:
    // 0x1d24cc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1d24ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1d24d0:
    // 0x1d24d0: 0x10000008  b           . + 4 + (0x8 << 2)
label_1d24d4:
    if (ctx->pc == 0x1D24D4u) {
        ctx->pc = 0x1D24D8u;
        goto label_1d24d8;
    }
    ctx->pc = 0x1D24D0u;
    {
        const bool branch_taken_0x1d24d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d24d0) {
            ctx->pc = 0x1D24F4u;
            goto label_1d24f4;
        }
    }
    ctx->pc = 0x1D24D8u;
label_1d24d8:
    // 0x1d24d8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1d24d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_1d24dc:
    // 0x1d24dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d24dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1d24e0:
    // 0x1d24e0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1d24e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1d24e4:
    // 0x1d24e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d24e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d24e8:
    // 0x1d24e8: 0x0  nop
    ctx->pc = 0x1d24e8u;
    // NOP
label_1d24ec:
    // 0x1d24ec: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1d24ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1d24f0:
    // 0x1d24f0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1d24f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1d24f4:
    // 0x1d24f4: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x1d24f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
label_1d24f8:
    // 0x1d24f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d24f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d24fc:
    // 0x1d24fc: 0x0  nop
    ctx->pc = 0x1d24fcu;
    // NOP
label_1d2500:
    // 0x1d2500: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1d2500u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1d2504:
    // 0x1d2504: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1d2504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_1d2508:
    // 0x1d2508: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d2508u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d250c:
    // 0x1d250c: 0x0  nop
    ctx->pc = 0x1d250cu;
    // NOP
label_1d2510:
    // 0x1d2510: 0x460100c2  mul.s       $f3, $f0, $f1
    ctx->pc = 0x1d2510u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1d2514:
    // 0x1d2514: 0x233001b  divu        $zero, $s1, $s3
    ctx->pc = 0x1d2514u;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,17); } }
label_1d2518:
    // 0x1d2518: 0x1012  mflo        $v0
    ctx->pc = 0x1d2518u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1d251c:
    // 0x1d251c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1d2520:
    if (ctx->pc == 0x1D2520u) {
        ctx->pc = 0x1D2524u;
        goto label_1d2524;
    }
    ctx->pc = 0x1D251Cu;
    {
        const bool branch_taken_0x1d251c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1d251c) {
            ctx->pc = 0x1D2538u;
            goto label_1d2538;
        }
    }
    ctx->pc = 0x1D2524u;
label_1d2524:
    // 0x1d2524: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d2524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d2528:
    // 0x1d2528: 0x0  nop
    ctx->pc = 0x1d2528u;
    // NOP
label_1d252c:
    // 0x1d252c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1d252cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1d2530:
    // 0x1d2530: 0x10000008  b           . + 4 + (0x8 << 2)
label_1d2534:
    if (ctx->pc == 0x1D2534u) {
        ctx->pc = 0x1D2538u;
        goto label_1d2538;
    }
    ctx->pc = 0x1D2530u;
    {
        const bool branch_taken_0x1d2530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2530) {
            ctx->pc = 0x1D2554u;
            goto label_1d2554;
        }
    }
    ctx->pc = 0x1D2538u;
label_1d2538:
    // 0x1d2538: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1d2538u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_1d253c:
    // 0x1d253c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d253cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1d2540:
    // 0x1d2540: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1d2540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1d2544:
    // 0x1d2544: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d2544u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d2548:
    // 0x1d2548: 0x0  nop
    ctx->pc = 0x1d2548u;
    // NOP
label_1d254c:
    // 0x1d254c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1d254cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1d2550:
    // 0x1d2550: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1d2550u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1d2554:
    // 0x1d2554: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x1d2554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d2558:
    // 0x1d2558: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d2558u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d255c:
    // 0x1d255c: 0x0  nop
    ctx->pc = 0x1d255cu;
    // NOP
label_1d2560:
    // 0x1d2560: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1d2560u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_1d2564:
    // 0x1d2564: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x1d2564u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_1d2568:
    // 0x1d2568: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x1d2568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_1d256c:
    // 0x1d256c: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x1d256cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1d2570:
    // 0x1d2570: 0xc06479c  jal         func_191E70
label_1d2574:
    if (ctx->pc == 0x1D2574u) {
        ctx->pc = 0x1D2578u;
        goto label_1d2578;
    }
    ctx->pc = 0x1D2570u;
    SET_GPR_U32(ctx, 31, 0x1D2578u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1D2570u, 0x1D2578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2578u;
label_1d2578:
    // 0x1d2578: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1d2578u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d257c:
    // 0x1d257c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d257cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1d2580:
    // 0x1d2580: 0x244400d0  addiu       $a0, $v0, 0xD0
    ctx->pc = 0x1d2580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
label_1d2584:
    // 0x1d2584: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d2584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d2588:
    // 0x1d2588: 0xc05612c  jal         func_1584B0
label_1d258c:
    if (ctx->pc == 0x1D258Cu) {
        ctx->pc = 0x1D2590u;
        goto label_1d2590;
    }
    ctx->pc = 0x1D2588u;
    SET_GPR_U32(ctx, 31, 0x1D2590u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1D2588u, 0x1D2590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2590u;
label_1d2590:
    // 0x1d2590: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1d2590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d2594:
    // 0x1d2594: 0xc7a300a8  lwc1        $f3, 0xA8($sp)
    ctx->pc = 0x1d2594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d2598:
    // 0x1d2598: 0xc7a200b4  lwc1        $f2, 0xB4($sp)
    ctx->pc = 0x1d2598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d259c:
    // 0x1d259c: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x1d259cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d25a0:
    // 0x1d25a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d25a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d25a4:
    // 0x1d25a4: 0x0  nop
    ctx->pc = 0x1d25a4u;
    // NOP
label_1d25a8:
    // 0x1d25a8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1d25a8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_1d25ac:
    // 0x1d25ac: 0x4602185d  msub.s      $f1, $f3, $f2
    ctx->pc = 0x1d25acu;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_1d25b0:
    // 0x1d25b0: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x1d25b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d25b4:
    // 0x1d25b4: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1d25b4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1d25b8:
    // 0x1d25b8: 0xc7a300ac  lwc1        $f3, 0xAC($sp)
    ctx->pc = 0x1d25b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d25bc:
    // 0x1d25bc: 0xc7a200b4  lwc1        $f2, 0xB4($sp)
    ctx->pc = 0x1d25bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d25c0:
    // 0x1d25c0: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x1d25c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d25c4:
    // 0x1d25c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d25c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d25c8:
    // 0x1d25c8: 0x0  nop
    ctx->pc = 0x1d25c8u;
    // NOP
label_1d25cc:
    // 0x1d25cc: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1d25ccu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_1d25d0:
    // 0x1d25d0: 0x4602185d  msub.s      $f1, $f3, $f2
    ctx->pc = 0x1d25d0u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_1d25d4:
    // 0x1d25d4: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x1d25d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d25d8:
    // 0x1d25d8: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x1d25d8u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1d25dc:
    // 0x1d25dc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d25dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1d25e0:
    // 0x1d25e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d25e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d25e4:
    // 0x1d25e4: 0xc08c208  jal         func_230820
label_1d25e8:
    if (ctx->pc == 0x1D25E8u) {
        ctx->pc = 0x1D25ECu;
        goto label_1d25ec;
    }
    ctx->pc = 0x1D25E4u;
    SET_GPR_U32(ctx, 31, 0x1D25ECu);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1D25E4u, 0x1D25ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D25ECu;
label_1d25ec:
    // 0x1d25ec: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x1d25ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1d25f0:
    // 0x1d25f0: 0xc06479c  jal         func_191E70
label_1d25f4:
    if (ctx->pc == 0x1D25F4u) {
        ctx->pc = 0x1D25F8u;
        goto label_1d25f8;
    }
    ctx->pc = 0x1D25F0u;
    SET_GPR_U32(ctx, 31, 0x1D25F8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1D25F0u, 0x1D25F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D25F8u;
label_1d25f8:
    // 0x1d25f8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1d25f8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d25fc:
    // 0x1d25fc: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d25fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1d2600:
    // 0x1d2600: 0x244400d0  addiu       $a0, $v0, 0xD0
    ctx->pc = 0x1d2600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
label_1d2604:
    // 0x1d2604: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d2604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d2608:
    // 0x1d2608: 0xc05612c  jal         func_1584B0
label_1d260c:
    if (ctx->pc == 0x1D260Cu) {
        ctx->pc = 0x1D2610u;
        goto label_1d2610;
    }
    ctx->pc = 0x1D2608u;
    SET_GPR_U32(ctx, 31, 0x1D2610u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1D2608u, 0x1D2610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2610u;
label_1d2610:
    // 0x1d2610: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1d2610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d2614:
    // 0x1d2614: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d2614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1d2618:
    // 0x1d2618: 0xc7ac00b4  lwc1        $f12, 0xB4($sp)
    ctx->pc = 0x1d2618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d261c:
    // 0x1d261c: 0xc7ad00b4  lwc1        $f13, 0xB4($sp)
    ctx->pc = 0x1d261cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1d2620:
    // 0x1d2620: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d2620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d2624:
    // 0x1d2624: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d2624u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d2628:
    // 0x1d2628: 0xc08c544  jal         func_231510
label_1d262c:
    if (ctx->pc == 0x1D262Cu) {
        ctx->pc = 0x1D2630u;
        goto label_1d2630;
    }
    ctx->pc = 0x1D2628u;
    SET_GPR_U32(ctx, 31, 0x1D2630u);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x1D2628u, 0x1D2630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2630u;
label_1d2630:
    // 0x1d2630: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x1d2630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1d2634:
    // 0x1d2634: 0xc06479c  jal         func_191E70
label_1d2638:
    if (ctx->pc == 0x1D2638u) {
        ctx->pc = 0x1D263Cu;
        goto label_1d263c;
    }
    ctx->pc = 0x1D2634u;
    SET_GPR_U32(ctx, 31, 0x1D263Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1D2634u, 0x1D263Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D263Cu;
label_1d263c:
    // 0x1d263c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1d263cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d2640:
    // 0x1d2640: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d2640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1d2644:
    // 0x1d2644: 0x244400d0  addiu       $a0, $v0, 0xD0
    ctx->pc = 0x1d2644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
label_1d2648:
    // 0x1d2648: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d2648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d264c:
    // 0x1d264c: 0xc05612c  jal         func_1584B0
label_1d2650:
    if (ctx->pc == 0x1D2650u) {
        ctx->pc = 0x1D2654u;
        goto label_1d2654;
    }
    ctx->pc = 0x1D264Cu;
    SET_GPR_U32(ctx, 31, 0x1D2654u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1D264Cu, 0x1D2654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2654u;
label_1d2654:
    // 0x1d2654: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1d2654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d2658:
    // 0x1d2658: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d2658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1d265c:
    // 0x1d265c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d265cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d2660:
    // 0x1d2660: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d2660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1d2664:
    // 0x1d2664: 0xc08c434  jal         func_2310D0
label_1d2668:
    if (ctx->pc == 0x1D2668u) {
        ctx->pc = 0x1D266Cu;
        goto label_1d266c;
    }
    ctx->pc = 0x1D2664u;
    SET_GPR_U32(ctx, 31, 0x1D266Cu);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1D2664u, 0x1D266Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D266Cu;
label_1d266c:
    // 0x1d266c: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x1d266cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1d2670:
    // 0x1d2670: 0xc06479c  jal         func_191E70
label_1d2674:
    if (ctx->pc == 0x1D2674u) {
        ctx->pc = 0x1D2678u;
        goto label_1d2678;
    }
    ctx->pc = 0x1D2670u;
    SET_GPR_U32(ctx, 31, 0x1D2678u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1D2670u, 0x1D2678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2678u;
label_1d2678:
    // 0x1d2678: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1d2678u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d267c:
    // 0x1d267c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d267cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1d2680:
    // 0x1d2680: 0x244400d0  addiu       $a0, $v0, 0xD0
    ctx->pc = 0x1d2680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
label_1d2684:
    // 0x1d2684: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d2684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d2688:
    // 0x1d2688: 0xc05612c  jal         func_1584B0
label_1d268c:
    if (ctx->pc == 0x1D268Cu) {
        ctx->pc = 0x1D2690u;
        goto label_1d2690;
    }
    ctx->pc = 0x1D2688u;
    SET_GPR_U32(ctx, 31, 0x1D2690u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1D2688u, 0x1D2690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2690u;
label_1d2690:
    // 0x1d2690: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1d2690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d2694:
    // 0x1d2694: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d2694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1d2698:
    // 0x1d2698: 0xc08c258  jal         func_230960
label_1d269c:
    if (ctx->pc == 0x1D269Cu) {
        ctx->pc = 0x1D26A0u;
        goto label_1d26a0;
    }
    ctx->pc = 0x1D2698u;
    SET_GPR_U32(ctx, 31, 0x1D26A0u);
    ctx->pc = 0x230960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230960u, 0x1D2698u, 0x1D26A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D26A0u;
label_1d26a0:
    // 0x1d26a0: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x1d26a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1d26a4:
    // 0x1d26a4: 0xc06479c  jal         func_191E70
label_1d26a8:
    if (ctx->pc == 0x1D26A8u) {
        ctx->pc = 0x1D26ACu;
        goto label_1d26ac;
    }
    ctx->pc = 0x1D26A4u;
    SET_GPR_U32(ctx, 31, 0x1D26ACu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1D26A4u, 0x1D26ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D26ACu;
label_1d26ac:
    // 0x1d26ac: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1d26acu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d26b0:
    // 0x1d26b0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d26b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1d26b4:
    // 0x1d26b4: 0x244400d0  addiu       $a0, $v0, 0xD0
    ctx->pc = 0x1d26b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
label_1d26b8:
    // 0x1d26b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d26b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d26bc:
    // 0x1d26bc: 0xc05612c  jal         func_1584B0
label_1d26c0:
    if (ctx->pc == 0x1D26C0u) {
        ctx->pc = 0x1D26C4u;
        goto label_1d26c4;
    }
    ctx->pc = 0x1D26BCu;
    SET_GPR_U32(ctx, 31, 0x1D26C4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1D26BCu, 0x1D26C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D26C4u;
label_1d26c4:
    // 0x1d26c4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1d26c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d26c8:
    // 0x1d26c8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d26c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1d26cc:
    // 0x1d26cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d26ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d26d0:
    // 0x1d26d0: 0xc08c8dc  jal         func_232370
label_1d26d4:
    if (ctx->pc == 0x1D26D4u) {
        ctx->pc = 0x1D26D8u;
        goto label_1d26d8;
    }
    ctx->pc = 0x1D26D0u;
    SET_GPR_U32(ctx, 31, 0x1D26D8u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1D26D0u, 0x1D26D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D26D8u;
label_1d26d8:
    // 0x1d26d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d26d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1d26dc:
    // 0x1d26dc: 0x232102b  sltu        $v0, $s1, $s2
    ctx->pc = 0x1d26dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_1d26e0:
    // 0x1d26e0: 0x1440fed6  bnez        $v0, . + 4 + (-0x12A << 2)
label_1d26e4:
    if (ctx->pc == 0x1D26E4u) {
        ctx->pc = 0x1D26E8u;
        goto label_1d26e8;
    }
    ctx->pc = 0x1D26E0u;
    {
        const bool branch_taken_0x1d26e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d26e0) {
            ctx->pc = 0x1D223Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d223c;
        }
    }
    ctx->pc = 0x1D26E8u;
label_1d26e8:
    // 0x1d26e8: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x1d26e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1d26ec:
    // 0x1d26ec: 0xc064aec  jal         func_192BB0
label_1d26f0:
    if (ctx->pc == 0x1D26F0u) {
        ctx->pc = 0x1D26F4u;
        goto label_1d26f4;
    }
    ctx->pc = 0x1D26ECu;
    SET_GPR_U32(ctx, 31, 0x1D26F4u);
    ctx->pc = 0x192BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192BB0u, 0x1D26ECu, 0x1D26F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D26F4u;
label_1d26f4:
    // 0x1d26f4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1d26f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1d26f8:
    // 0x1d26f8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1d26f8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1d26fc:
    // 0x1d26fc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1d26fcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1d2700:
    // 0x1d2700: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1d2700u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1d2704:
    // 0x1d2704: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1d2704u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d2708:
    // 0x1d2708: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d2708u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d270c:
    // 0x1d270c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d270cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d2710:
    // 0x1d2710: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d2710u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d2714:
    // 0x1d2714: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d2714u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d2718:
    // 0x1d2718: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x1d2718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1d271c:
    // 0x1d271c: 0x3e00008  jr          $ra
label_1d2720:
    if (ctx->pc == 0x1D2720u) {
        ctx->pc = 0x1D2724u;
        goto label_1d2724;
    }
    ctx->pc = 0x1D271Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D271Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2724u;
label_1d2724:
    // 0x1d2724: 0x0  nop
    ctx->pc = 0x1d2724u;
    // NOP
label_1d2728:
    // 0x1d2728: 0x0  nop
    ctx->pc = 0x1d2728u;
    // NOP
label_1d272c:
    // 0x1d272c: 0x0  nop
    ctx->pc = 0x1d272cu;
    // NOP
label_1d2730:
    // 0x1d2730: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x1d2730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
label_1d2734:
    // 0x1d2734: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1d2734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_1d2738:
    // 0x1d2738: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1d2738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_1d273c:
    // 0x1d273c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1d273cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_1d2740:
    // 0x1d2740: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1d2740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_1d2744:
    // 0x1d2744: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1d2744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_1d2748:
    // 0x1d2748: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1d2748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1d274c:
    // 0x1d274c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1d274cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1d2750:
    // 0x1d2750: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1d2750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1d2754:
    // 0x1d2754: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d2754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1d2758:
    // 0x1d2758: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d2758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1d275c:
    // 0x1d275c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1d275cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1d2760:
    // 0x1d2760: 0xafa401a0  sw          $a0, 0x1A0($sp)
    ctx->pc = 0x1d2760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 4));
label_1d2764:
    // 0x1d2764: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x1d2764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_1d2768:
    // 0x1d2768: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1d2768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d276c:
    // 0x1d276c: 0xe7a0019c  swc1        $f0, 0x19C($sp)
    ctx->pc = 0x1d276cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 412), bits); }
label_1d2770:
    // 0x1d2770: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1d2770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1d2774:
    // 0x1d2774: 0xc44100e4  lwc1        $f1, 0xE4($v0)
    ctx->pc = 0x1d2774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d2778:
    // 0x1d2778: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d2778u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d277c:
    // 0x1d277c: 0x0  nop
    ctx->pc = 0x1d277cu;
    // NOP
label_1d2780:
    // 0x1d2780: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d2780u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d2784:
    // 0x1d2784: 0x45010015  bc1t        . + 4 + (0x15 << 2)
label_1d2788:
    if (ctx->pc == 0x1D2788u) {
        ctx->pc = 0x1D278Cu;
        goto label_1d278c;
    }
    ctx->pc = 0x1D2784u;
    {
        const bool branch_taken_0x1d2784 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d2784) {
            ctx->pc = 0x1D27DCu;
            goto label_1d27dc;
        }
    }
    ctx->pc = 0x1D278Cu;
label_1d278c:
    // 0x1d278c: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1d278cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1d2790:
    // 0x1d2790: 0xc44100e4  lwc1        $f1, 0xE4($v0)
    ctx->pc = 0x1d2790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d2794:
    // 0x1d2794: 0xc7a0019c  lwc1        $f0, 0x19C($sp)
    ctx->pc = 0x1d2794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d2798:
    // 0x1d2798: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d2798u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d279c:
    // 0x1d279c: 0xe44000e4  swc1        $f0, 0xE4($v0)
    ctx->pc = 0x1d279cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 228), bits); }
label_1d27a0:
    // 0x1d27a0: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1d27a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1d27a4:
    // 0x1d27a4: 0xc44100e4  lwc1        $f1, 0xE4($v0)
    ctx->pc = 0x1d27a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d27a8:
    // 0x1d27a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d27a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d27ac:
    // 0x1d27ac: 0x0  nop
    ctx->pc = 0x1d27acu;
    // NOP
label_1d27b0:
    // 0x1d27b0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d27b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d27b4:
    // 0x1d27b4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1d27b8:
    if (ctx->pc == 0x1D27B8u) {
        ctx->pc = 0x1D27BCu;
        goto label_1d27bc;
    }
    ctx->pc = 0x1D27B4u;
    {
        const bool branch_taken_0x1d27b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d27b4) {
            ctx->pc = 0x1D27C8u;
            goto label_1d27c8;
        }
    }
    ctx->pc = 0x1D27BCu;
label_1d27bc:
    // 0x1d27bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d27bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d27c0:
    // 0x1d27c0: 0x10000190  b           . + 4 + (0x190 << 2)
label_1d27c4:
    if (ctx->pc == 0x1D27C4u) {
        ctx->pc = 0x1D27C8u;
        goto label_1d27c8;
    }
    ctx->pc = 0x1D27C0u;
    {
        const bool branch_taken_0x1d27c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d27c0) {
            ctx->pc = 0x1D2E04u;
            goto label_1d2e04;
        }
    }
    ctx->pc = 0x1D27C8u;
label_1d27c8:
    // 0x1d27c8: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x1d27c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1d27cc:
    // 0x1d27cc: 0xc064cb0  jal         func_1932C0
label_1d27d0:
    if (ctx->pc == 0x1D27D0u) {
        ctx->pc = 0x1D27D4u;
        goto label_1d27d4;
    }
    ctx->pc = 0x1D27CCu;
    SET_GPR_U32(ctx, 31, 0x1D27D4u);
    ctx->pc = 0x1932C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1932C0u, 0x1D27CCu, 0x1D27D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D27D4u;
label_1d27d4:
    // 0x1d27d4: 0x1000018b  b           . + 4 + (0x18B << 2)
label_1d27d8:
    if (ctx->pc == 0x1D27D8u) {
        ctx->pc = 0x1D27DCu;
        goto label_1d27dc;
    }
    ctx->pc = 0x1D27D4u;
    {
        const bool branch_taken_0x1d27d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d27d4) {
            ctx->pc = 0x1D2E04u;
            goto label_1d2e04;
        }
    }
    ctx->pc = 0x1D27DCu;
label_1d27dc:
    // 0x1d27dc: 0xc0b06cc  jal         func_2C1B30
label_1d27e0:
    if (ctx->pc == 0x1D27E0u) {
        ctx->pc = 0x1D27E4u;
        goto label_1d27e4;
    }
    ctx->pc = 0x1D27DCu;
    SET_GPR_U32(ctx, 31, 0x1D27E4u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x1D27DCu, 0x1D27E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D27E4u;
label_1d27e4:
    // 0x1d27e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d27e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d27e8:
    // 0x1d27e8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1d27e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d27ec:
    // 0x1d27ec: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1d27ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1d27f0:
    // 0x1d27f0: 0x320f809  jalr        $t9
label_1d27f4:
    if (ctx->pc == 0x1D27F4u) {
        ctx->pc = 0x1D27F8u;
        goto label_1d27f8;
    }
    ctx->pc = 0x1D27F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D27F8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D27F0u, 0x1D27F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D27F8u;
label_1d27f8:
    // 0x1d27f8: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1d27f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1d27fc:
    // 0x1d27fc: 0x244400c0  addiu       $a0, $v0, 0xC0
    ctx->pc = 0x1d27fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_1d2800:
    // 0x1d2800: 0xc05f31c  jal         func_17CC70
label_1d2804:
    if (ctx->pc == 0x1D2804u) {
        ctx->pc = 0x1D2808u;
        goto label_1d2808;
    }
    ctx->pc = 0x1D2800u;
    SET_GPR_U32(ctx, 31, 0x1D2808u);
    ctx->pc = 0x17CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CC70u, 0x1D2800u, 0x1D2808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2808u;
label_1d2808:
    // 0x1d2808: 0xafa20198  sw          $v0, 0x198($sp)
    ctx->pc = 0x1d2808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 2));
label_1d280c:
    // 0x1d280c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d280cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d2810:
    // 0x1d2810: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1d2814:
    if (ctx->pc == 0x1D2814u) {
        ctx->pc = 0x1D2818u;
        goto label_1d2818;
    }
    ctx->pc = 0x1D2810u;
    {
        const bool branch_taken_0x1d2810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2810) {
            ctx->pc = 0x1D2888u;
            goto label_1d2888;
        }
    }
    ctx->pc = 0x1D2818u;
label_1d2818:
    // 0x1d2818: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1d2818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1d281c:
    // 0x1d281c: 0x244400c0  addiu       $a0, $v0, 0xC0
    ctx->pc = 0x1d281cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_1d2820:
    // 0x1d2820: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d2820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d2824:
    // 0x1d2824: 0xc05f1a8  jal         func_17C6A0
label_1d2828:
    if (ctx->pc == 0x1D2828u) {
        ctx->pc = 0x1D282Cu;
        goto label_1d282c;
    }
    ctx->pc = 0x1D2824u;
    SET_GPR_U32(ctx, 31, 0x1D282Cu);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x1D2824u, 0x1D282Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D282Cu;
label_1d282c:
    // 0x1d282c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1d282cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d2830:
    // 0x1d2830: 0xc7a0019c  lwc1        $f0, 0x19C($sp)
    ctx->pc = 0x1d2830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d2834:
    // 0x1d2834: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d2834u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d2838:
    // 0x1d2838: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1d2838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1d283c:
    // 0x1d283c: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1d283cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1d2840:
    // 0x1d2840: 0x244400c0  addiu       $a0, $v0, 0xC0
    ctx->pc = 0x1d2840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_1d2844:
    // 0x1d2844: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d2844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d2848:
    // 0x1d2848: 0xc05f1a8  jal         func_17C6A0
label_1d284c:
    if (ctx->pc == 0x1D284Cu) {
        ctx->pc = 0x1D2850u;
        goto label_1d2850;
    }
    ctx->pc = 0x1D2848u;
    SET_GPR_U32(ctx, 31, 0x1D2850u);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x1D2848u, 0x1D2850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2850u;
label_1d2850:
    // 0x1d2850: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1d2850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d2854:
    // 0x1d2854: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d2854u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d2858:
    // 0x1d2858: 0x0  nop
    ctx->pc = 0x1d2858u;
    // NOP
label_1d285c:
    // 0x1d285c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d285cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d2860:
    // 0x1d2860: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_1d2864:
    if (ctx->pc == 0x1D2864u) {
        ctx->pc = 0x1D2868u;
        goto label_1d2868;
    }
    ctx->pc = 0x1D2860u;
    {
        const bool branch_taken_0x1d2860 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d2860) {
            ctx->pc = 0x1D2884u;
            goto label_1d2884;
        }
    }
    ctx->pc = 0x1D2868u;
label_1d2868:
    // 0x1d2868: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1d2868u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1d286c:
    // 0x1d286c: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1d286cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1d2870:
    // 0x1d2870: 0x244400c0  addiu       $a0, $v0, 0xC0
    ctx->pc = 0x1d2870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_1d2874:
    // 0x1d2874: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d2874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d2878:
    // 0x1d2878: 0xc05f1a8  jal         func_17C6A0
label_1d287c:
    if (ctx->pc == 0x1D287Cu) {
        ctx->pc = 0x1D2880u;
        goto label_1d2880;
    }
    ctx->pc = 0x1D2878u;
    SET_GPR_U32(ctx, 31, 0x1D2880u);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x1D2878u, 0x1D2880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2880u;
label_1d2880:
    // 0x1d2880: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x1d2880u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1d2884:
    // 0x1d2884: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2884u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1d2888:
    // 0x1d2888: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1d2888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1d288c:
    // 0x1d288c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1d288cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1d2890:
    // 0x1d2890: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
label_1d2894:
    if (ctx->pc == 0x1D2894u) {
        ctx->pc = 0x1D2898u;
        goto label_1d2898;
    }
    ctx->pc = 0x1D2890u;
    {
        const bool branch_taken_0x1d2890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d2890) {
            ctx->pc = 0x1D2818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d2818;
        }
    }
    ctx->pc = 0x1D2898u;
label_1d2898:
    // 0x1d2898: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1d2898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1d289c:
    // 0x1d289c: 0xc44100e8  lwc1        $f1, 0xE8($v0)
    ctx->pc = 0x1d289cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d28a0:
    // 0x1d28a0: 0xc7a0019c  lwc1        $f0, 0x19C($sp)
    ctx->pc = 0x1d28a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d28a4:
    // 0x1d28a4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d28a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d28a8:
    // 0x1d28a8: 0xe44000e8  swc1        $f0, 0xE8($v0)
    ctx->pc = 0x1d28a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 232), bits); }
label_1d28ac:
    // 0x1d28ac: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1d28acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1d28b0:
    // 0x1d28b0: 0xc44100e8  lwc1        $f1, 0xE8($v0)
    ctx->pc = 0x1d28b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d28b4:
    // 0x1d28b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d28b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d28b8:
    // 0x1d28b8: 0x0  nop
    ctx->pc = 0x1d28b8u;
    // NOP
label_1d28bc:
    // 0x1d28bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d28bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d28c0:
    // 0x1d28c0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1d28c4:
    if (ctx->pc == 0x1D28C4u) {
        ctx->pc = 0x1D28C8u;
        goto label_1d28c8;
    }
    ctx->pc = 0x1D28C0u;
    {
        const bool branch_taken_0x1d28c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d28c0) {
            ctx->pc = 0x1D28D4u;
            goto label_1d28d4;
        }
    }
    ctx->pc = 0x1D28C8u;
label_1d28c8:
    // 0x1d28c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d28c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d28cc:
    // 0x1d28cc: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1d28ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1d28d0:
    // 0x1d28d0: 0xe44000e8  swc1        $f0, 0xE8($v0)
    ctx->pc = 0x1d28d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 232), bits); }
label_1d28d4:
    // 0x1d28d4: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1d28d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1d28d8:
    // 0x1d28d8: 0xc44000a8  lwc1        $f0, 0xA8($v0)
    ctx->pc = 0x1d28d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d28dc:
    // 0x1d28dc: 0xe7a00194  swc1        $f0, 0x194($sp)
    ctx->pc = 0x1d28dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 404), bits); }
label_1d28e0:
    // 0x1d28e0: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1d28e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1d28e4:
    // 0x1d28e4: 0xc44300f0  lwc1        $f3, 0xF0($v0)
    ctx->pc = 0x1d28e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d28e8:
    // 0x1d28e8: 0xc7a2019c  lwc1        $f2, 0x19C($sp)
    ctx->pc = 0x1d28e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d28ec:
    // 0x1d28ec: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1d28ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1d28f0:
    // 0x1d28f0: 0xc44100a8  lwc1        $f1, 0xA8($v0)
    ctx->pc = 0x1d28f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d28f4:
    // 0x1d28f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d28f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d28f8:
    // 0x1d28f8: 0x0  nop
    ctx->pc = 0x1d28f8u;
    // NOP
label_1d28fc:
    // 0x1d28fc: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1d28fcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_1d2900:
    // 0x1d2900: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1d2900u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_1d2904:
    // 0x1d2904: 0xe44000a8  swc1        $f0, 0xA8($v0)
    ctx->pc = 0x1d2904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
label_1d2908:
    // 0x1d2908: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x1d2908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1d290c:
    // 0x1d290c: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x1d290cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_1d2910:
    // 0x1d2910: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d2910u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d2914:
    // 0x1d2914: 0xc46000a8  lwc1        $f0, 0xA8($v1)
    ctx->pc = 0x1d2914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d2918:
    // 0x1d2918: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1d2918u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1d291c:
    // 0x1d291c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1d291cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1d2920:
    // 0x1d2920: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d2920u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d2924:
    // 0x1d2924: 0x0  nop
    ctx->pc = 0x1d2924u;
    // NOP
label_1d2928:
    // 0x1d2928: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d2928u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1d292c:
    // 0x1d292c: 0xe7a00190  swc1        $f0, 0x190($sp)
    ctx->pc = 0x1d292cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_1d2930:
    // 0x1d2930: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1d2930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1d2934:
    // 0x1d2934: 0x8c4400ac  lw          $a0, 0xAC($v0)
    ctx->pc = 0x1d2934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1d2938:
    // 0x1d2938: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1d2938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1d293c:
    // 0x1d293c: 0xc085538  jal         func_2154E0
label_1d2940:
    if (ctx->pc == 0x1D2940u) {
        ctx->pc = 0x1D2944u;
        goto label_1d2944;
    }
    ctx->pc = 0x1D293Cu;
    SET_GPR_U32(ctx, 31, 0x1D2944u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1D293Cu, 0x1D2944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2944u;
label_1d2944:
    // 0x1d2944: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d2944u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d2948:
    // 0x1d2948: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d2948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d294c:
    // 0x1d294c: 0xc091018  jal         func_244060
label_1d2950:
    if (ctx->pc == 0x1D2950u) {
        ctx->pc = 0x1D2954u;
        goto label_1d2954;
    }
    ctx->pc = 0x1D294Cu;
    SET_GPR_U32(ctx, 31, 0x1D2954u);
    ctx->pc = 0x244060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244060u, 0x1D294Cu, 0x1D2954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2954u;
label_1d2954:
    // 0x1d2954: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d2954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d2958:
    // 0x1d2958: 0xc106784  jal         func_419E10
label_1d295c:
    if (ctx->pc == 0x1D295Cu) {
        ctx->pc = 0x1D2960u;
        goto label_1d2960;
    }
    ctx->pc = 0x1D2958u;
    SET_GPR_U32(ctx, 31, 0x1D2960u);
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x1D2958u, 0x1D2960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2960u;
label_1d2960:
    // 0x1d2960: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x1d2960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
label_1d2964:
    // 0x1d2964: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1d2964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1d2968:
    // 0x1d2968: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1d2968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1d296c:
    // 0x1d296c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1d296cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1d2970:
    // 0x1d2970: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x1d2970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
label_1d2974:
    // 0x1d2974: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1d2974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1d2978:
    // 0x1d2978: 0xc44100a8  lwc1        $f1, 0xA8($v0)
    ctx->pc = 0x1d2978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d297c:
    // 0x1d297c: 0xc7a00194  lwc1        $f0, 0x194($sp)
    ctx->pc = 0x1d297cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d2980:
    // 0x1d2980: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1d2980u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1d2984:
    // 0x1d2984: 0xe7a00188  swc1        $f0, 0x188($sp)
    ctx->pc = 0x1d2984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_1d2988:
    // 0x1d2988: 0xe7a00184  swc1        $f0, 0x184($sp)
    ctx->pc = 0x1d2988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
label_1d298c:
    // 0x1d298c: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x1d298cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_1d2990:
    // 0x1d2990: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x1d2990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1d2994:
    // 0x1d2994: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x1d2994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_1d2998:
    // 0x1d2998: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d2998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d299c:
    // 0x1d299c: 0xc1065d8  jal         func_419760
label_1d29a0:
    if (ctx->pc == 0x1D29A0u) {
        ctx->pc = 0x1D29A4u;
        goto label_1d29a4;
    }
    ctx->pc = 0x1D299Cu;
    SET_GPR_U32(ctx, 31, 0x1D29A4u);
    ctx->pc = 0x419760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419760u, 0x1D299Cu, 0x1D29A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D29A4u;
label_1d29a4:
    // 0x1d29a4: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1d29a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1d29a8:
    // 0x1d29a8: 0x8c4200cc  lw          $v0, 0xCC($v0)
    ctx->pc = 0x1d29a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_1d29ac:
    // 0x1d29ac: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x1d29acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_1d29b0:
    // 0x1d29b0: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1d29b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1d29b4:
    // 0x1d29b4: 0x244400b4  addiu       $a0, $v0, 0xB4
    ctx->pc = 0x1d29b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
label_1d29b8:
    // 0x1d29b8: 0xc05611c  jal         func_158470
label_1d29bc:
    if (ctx->pc == 0x1D29BCu) {
        ctx->pc = 0x1D29C0u;
        goto label_1d29c0;
    }
    ctx->pc = 0x1D29B8u;
    SET_GPR_U32(ctx, 31, 0x1D29C0u);
    ctx->pc = 0x158470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158470u, 0x1D29B8u, 0x1D29C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D29C0u;
label_1d29c0:
    // 0x1d29c0: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x1d29c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1d29c4:
    // 0x1d29c4: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1d29c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1d29c8:
    // 0x1d29c8: 0x14400049  bnez        $v0, . + 4 + (0x49 << 2)
label_1d29cc:
    if (ctx->pc == 0x1D29CCu) {
        ctx->pc = 0x1D29D0u;
        goto label_1d29d0;
    }
    ctx->pc = 0x1D29C8u;
    {
        const bool branch_taken_0x1d29c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d29c8) {
            ctx->pc = 0x1D2AF0u;
            goto label_1d2af0;
        }
    }
    ctx->pc = 0x1D29D0u;
label_1d29d0:
    // 0x1d29d0: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1d29d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1d29d4:
    // 0x1d29d4: 0x244400b4  addiu       $a0, $v0, 0xB4
    ctx->pc = 0x1d29d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
label_1d29d8:
    // 0x1d29d8: 0xc05611c  jal         func_158470
label_1d29dc:
    if (ctx->pc == 0x1D29DCu) {
        ctx->pc = 0x1D29E0u;
        goto label_1d29e0;
    }
    ctx->pc = 0x1D29D8u;
    SET_GPR_U32(ctx, 31, 0x1D29E0u);
    ctx->pc = 0x158470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158470u, 0x1D29D8u, 0x1D29E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D29E0u;
label_1d29e0:
    // 0x1d29e0: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x1d29e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1d29e4:
    // 0x1d29e4: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1d29e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1d29e8:
    // 0x1d29e8: 0x244400c0  addiu       $a0, $v0, 0xC0
    ctx->pc = 0x1d29e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_1d29ec:
    // 0x1d29ec: 0xc05f1a8  jal         func_17C6A0
label_1d29f0:
    if (ctx->pc == 0x1D29F0u) {
        ctx->pc = 0x1D29F4u;
        goto label_1d29f4;
    }
    ctx->pc = 0x1D29ECu;
    SET_GPR_U32(ctx, 31, 0x1D29F4u);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x1D29ECu, 0x1D29F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D29F4u;
label_1d29f4:
    // 0x1d29f4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1d29f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d29f8:
    // 0x1d29f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d29f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d29fc:
    // 0x1d29fc: 0x0  nop
    ctx->pc = 0x1d29fcu;
    // NOP
label_1d2a00:
    // 0x1d2a00: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1d2a00u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d2a04:
    // 0x1d2a04: 0x4500003a  bc1f        . + 4 + (0x3A << 2)
label_1d2a08:
    if (ctx->pc == 0x1D2A08u) {
        ctx->pc = 0x1D2A0Cu;
        goto label_1d2a0c;
    }
    ctx->pc = 0x1D2A04u;
    {
        const bool branch_taken_0x1d2a04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d2a04) {
            ctx->pc = 0x1D2AF0u;
            goto label_1d2af0;
        }
    }
    ctx->pc = 0x1D2A0Cu;
label_1d2a0c:
    // 0x1d2a0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d2a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d2a10:
    // 0x1d2a10: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1d2a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1d2a14:
    // 0x1d2a14: 0xa04300e0  sb          $v1, 0xE0($v0)
    ctx->pc = 0x1d2a14u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 224), (uint8_t)GPR_U32(ctx, 3));
label_1d2a18:
    // 0x1d2a18: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1d2a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1d2a1c:
    // 0x1d2a1c: 0x8c4200dc  lw          $v0, 0xDC($v0)
    ctx->pc = 0x1d2a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
label_1d2a20:
    // 0x1d2a20: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_1d2a24:
    if (ctx->pc == 0x1D2A24u) {
        ctx->pc = 0x1D2A28u;
        goto label_1d2a28;
    }
    ctx->pc = 0x1D2A20u;
    {
        const bool branch_taken_0x1d2a20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2a20) {
            ctx->pc = 0x1D2A74u;
            goto label_1d2a74;
        }
    }
    ctx->pc = 0x1D2A28u;
label_1d2a28:
    // 0x1d2a28: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1d2a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1d2a2c:
    // 0x1d2a2c: 0x8c4200dc  lw          $v0, 0xDC($v0)
    ctx->pc = 0x1d2a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
label_1d2a30:
    // 0x1d2a30: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1d2a34:
    if (ctx->pc == 0x1D2A34u) {
        ctx->pc = 0x1D2A38u;
        goto label_1d2a38;
    }
    ctx->pc = 0x1D2A30u;
    {
        const bool branch_taken_0x1d2a30 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1d2a30) {
            ctx->pc = 0x1D2A4Cu;
            goto label_1d2a4c;
        }
    }
    ctx->pc = 0x1D2A38u;
label_1d2a38:
    // 0x1d2a38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d2a38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d2a3c:
    // 0x1d2a3c: 0x0  nop
    ctx->pc = 0x1d2a3cu;
    // NOP
label_1d2a40:
    // 0x1d2a40: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1d2a40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1d2a44:
    // 0x1d2a44: 0x10000008  b           . + 4 + (0x8 << 2)
label_1d2a48:
    if (ctx->pc == 0x1D2A48u) {
        ctx->pc = 0x1D2A4Cu;
        goto label_1d2a4c;
    }
    ctx->pc = 0x1D2A44u;
    {
        const bool branch_taken_0x1d2a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2a44) {
            ctx->pc = 0x1D2A68u;
            goto label_1d2a68;
        }
    }
    ctx->pc = 0x1D2A4Cu;
label_1d2a4c:
    // 0x1d2a4c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1d2a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_1d2a50:
    // 0x1d2a50: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d2a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1d2a54:
    // 0x1d2a54: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1d2a54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1d2a58:
    // 0x1d2a58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d2a58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d2a5c:
    // 0x1d2a5c: 0x0  nop
    ctx->pc = 0x1d2a5cu;
    // NOP
label_1d2a60:
    // 0x1d2a60: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1d2a60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1d2a64:
    // 0x1d2a64: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x1d2a64u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_1d2a68:
    // 0x1d2a68: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x1d2a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1d2a6c:
    // 0x1d2a6c: 0xc064d10  jal         func_193440
label_1d2a70:
    if (ctx->pc == 0x1D2A70u) {
        ctx->pc = 0x1D2A74u;
        goto label_1d2a74;
    }
    ctx->pc = 0x1D2A6Cu;
    SET_GPR_U32(ctx, 31, 0x1D2A74u);
    ctx->pc = 0x193440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193440u, 0x1D2A6Cu, 0x1D2A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2A74u;
label_1d2a74:
    // 0x1d2a74: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1d2a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1d2a78:
    // 0x1d2a78: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x1d2a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_1d2a7c:
    // 0x1d2a7c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_1d2a80:
    if (ctx->pc == 0x1D2A80u) {
        ctx->pc = 0x1D2A84u;
        goto label_1d2a84;
    }
    ctx->pc = 0x1D2A7Cu;
    {
        const bool branch_taken_0x1d2a7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d2a7c) {
            ctx->pc = 0x1D2AACu;
            goto label_1d2aac;
        }
    }
    ctx->pc = 0x1D2A84u;
label_1d2a84:
    // 0x1d2a84: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d2a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1d2a88:
    // 0x1d2a88: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d2a88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d2a8c:
    // 0x1d2a8c: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1d2a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_1d2a90:
    // 0x1d2a90: 0x27859710  addiu       $a1, $gp, -0x68F0
    ctx->pc = 0x1d2a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940432));
label_1d2a94:
    // 0x1d2a94: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d2a94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d2a98:
    // 0x1d2a98: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1d2a98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d2a9c:
    // 0x1d2a9c: 0xc08f558  jal         func_23D560
label_1d2aa0:
    if (ctx->pc == 0x1D2AA0u) {
        ctx->pc = 0x1D2AA4u;
        goto label_1d2aa4;
    }
    ctx->pc = 0x1D2A9Cu;
    SET_GPR_U32(ctx, 31, 0x1D2AA4u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x1D2A9Cu, 0x1D2AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2AA4u;
label_1d2aa4:
    // 0x1d2aa4: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x1d2aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1d2aa8:
    // 0x1d2aa8: 0xac62005c  sw          $v0, 0x5C($v1)
    ctx->pc = 0x1d2aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 2));
label_1d2aac:
    // 0x1d2aac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d2aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1d2ab0:
    // 0x1d2ab0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d2ab0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d2ab4:
    // 0x1d2ab4: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1d2ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_1d2ab8:
    // 0x1d2ab8: 0x27859718  addiu       $a1, $gp, -0x68E8
    ctx->pc = 0x1d2ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940440));
label_1d2abc:
    // 0x1d2abc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d2abcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d2ac0:
    // 0x1d2ac0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1d2ac0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d2ac4:
    // 0x1d2ac4: 0xc08f558  jal         func_23D560
label_1d2ac8:
    if (ctx->pc == 0x1D2AC8u) {
        ctx->pc = 0x1D2ACCu;
        goto label_1d2acc;
    }
    ctx->pc = 0x1D2AC4u;
    SET_GPR_U32(ctx, 31, 0x1D2ACCu);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x1D2AC4u, 0x1D2ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2ACCu;
label_1d2acc:
    // 0x1d2acc: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1d2accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_1d2ad0:
    // 0x1d2ad0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d2ad0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d2ad4:
    // 0x1d2ad4: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1d2ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1d2ad8:
    // 0x1d2ad8: 0xe44000e4  swc1        $f0, 0xE4($v0)
    ctx->pc = 0x1d2ad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 228), bits); }
label_1d2adc:
    // 0x1d2adc: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x1d2adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1d2ae0:
    // 0x1d2ae0: 0xc064cb0  jal         func_1932C0
label_1d2ae4:
    if (ctx->pc == 0x1D2AE4u) {
        ctx->pc = 0x1D2AE8u;
        goto label_1d2ae8;
    }
    ctx->pc = 0x1D2AE0u;
    SET_GPR_U32(ctx, 31, 0x1D2AE8u);
    ctx->pc = 0x1932C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1932C0u, 0x1D2AE0u, 0x1D2AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2AE8u;
label_1d2ae8:
    // 0x1d2ae8: 0x100000c6  b           . + 4 + (0xC6 << 2)
label_1d2aec:
    if (ctx->pc == 0x1D2AECu) {
        ctx->pc = 0x1D2AF0u;
        goto label_1d2af0;
    }
    ctx->pc = 0x1D2AE8u;
    {
        const bool branch_taken_0x1d2ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2ae8) {
            ctx->pc = 0x1D2E04u;
            goto label_1d2e04;
        }
    }
    ctx->pc = 0x1D2AF0u;
label_1d2af0:
    // 0x1d2af0: 0xc0b06cc  jal         func_2C1B30
label_1d2af4:
    if (ctx->pc == 0x1D2AF4u) {
        ctx->pc = 0x1D2AF8u;
        goto label_1d2af8;
    }
    ctx->pc = 0x1D2AF0u;
    SET_GPR_U32(ctx, 31, 0x1D2AF8u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x1D2AF0u, 0x1D2AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2AF8u;
label_1d2af8:
    // 0x1d2af8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d2af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d2afc:
    // 0x1d2afc: 0xc0b06c4  jal         func_2C1B10
label_1d2b00:
    if (ctx->pc == 0x1D2B00u) {
        ctx->pc = 0x1D2B04u;
        goto label_1d2b04;
    }
    ctx->pc = 0x1D2AFCu;
    SET_GPR_U32(ctx, 31, 0x1D2B04u);
    ctx->pc = 0x2C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B10u, 0x1D2AFCu, 0x1D2B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2B04u;
label_1d2b04:
    // 0x1d2b04: 0x8f83bcc4  lw          $v1, -0x433C($gp)
    ctx->pc = 0x1d2b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_1d2b08:
    // 0x1d2b08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d2b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d2b0c:
    // 0x1d2b0c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1d2b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d2b10:
    // 0x1d2b10: 0xc0b4d8c  jal         func_2D3630
label_1d2b14:
    if (ctx->pc == 0x1D2B14u) {
        ctx->pc = 0x1D2B18u;
        goto label_1d2b18;
    }
    ctx->pc = 0x1D2B10u;
    SET_GPR_U32(ctx, 31, 0x1D2B18u);
    ctx->pc = 0x2D3630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3630u, 0x1D2B10u, 0x1D2B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2B18u;
label_1d2b18:
    // 0x1d2b18: 0xafa2018c  sw          $v0, 0x18C($sp)
    ctx->pc = 0x1d2b18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
label_1d2b1c:
    // 0x1d2b1c: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x1d2b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_1d2b20:
    // 0x1d2b20: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1d2b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d2b24:
    // 0x1d2b24: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1d2b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1d2b28:
    // 0x1d2b28: 0xc085538  jal         func_2154E0
label_1d2b2c:
    if (ctx->pc == 0x1D2B2Cu) {
        ctx->pc = 0x1D2B30u;
        goto label_1d2b30;
    }
    ctx->pc = 0x1D2B28u;
    SET_GPR_U32(ctx, 31, 0x1D2B30u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1D2B28u, 0x1D2B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2B30u;
label_1d2b30:
    // 0x1d2b30: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1d2b30u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d2b34:
    // 0x1d2b34: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x1d2b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_1d2b38:
    // 0x1d2b38: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1d2b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d2b3c:
    // 0x1d2b3c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1d2b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1d2b40:
    // 0x1d2b40: 0xc085538  jal         func_2154E0
label_1d2b44:
    if (ctx->pc == 0x1D2B44u) {
        ctx->pc = 0x1D2B48u;
        goto label_1d2b48;
    }
    ctx->pc = 0x1D2B40u;
    SET_GPR_U32(ctx, 31, 0x1D2B48u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1D2B40u, 0x1D2B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2B48u;
label_1d2b48:
    // 0x1d2b48: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1d2b48u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d2b4c:
    // 0x1d2b4c: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x1d2b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_1d2b50:
    // 0x1d2b50: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1d2b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d2b54:
    // 0x1d2b54: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1d2b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1d2b58:
    // 0x1d2b58: 0xc085538  jal         func_2154E0
label_1d2b5c:
    if (ctx->pc == 0x1D2B5Cu) {
        ctx->pc = 0x1D2B60u;
        goto label_1d2b60;
    }
    ctx->pc = 0x1D2B58u;
    SET_GPR_U32(ctx, 31, 0x1D2B60u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1D2B58u, 0x1D2B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2B60u;
label_1d2b60:
    // 0x1d2b60: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d2b60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d2b64:
    // 0x1d2b64: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1d2b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1d2b68:
    // 0x1d2b68: 0xc0516f8  jal         func_145BE0
label_1d2b6c:
    if (ctx->pc == 0x1D2B6Cu) {
        ctx->pc = 0x1D2B70u;
        goto label_1d2b70;
    }
    ctx->pc = 0x1D2B68u;
    SET_GPR_U32(ctx, 31, 0x1D2B70u);
    ctx->pc = 0x145BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145BE0u, 0x1D2B68u, 0x1D2B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2B70u;
label_1d2b70:
    // 0x1d2b70: 0xc78081c0  lwc1        $f0, -0x7E40($gp)
    ctx->pc = 0x1d2b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d2b74:
    // 0x1d2b74: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x1d2b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_1d2b78:
    // 0x1d2b78: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d2b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1d2b7c:
    // 0x1d2b7c: 0xc0a80a0  jal         func_2A0280
label_1d2b80:
    if (ctx->pc == 0x1D2B80u) {
        ctx->pc = 0x1D2B84u;
        goto label_1d2b84;
    }
    ctx->pc = 0x1D2B7Cu;
    SET_GPR_U32(ctx, 31, 0x1D2B84u);
    ctx->pc = 0x2A0280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0280u, 0x1D2B7Cu, 0x1D2B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2B84u;
label_1d2b84:
    // 0x1d2b84: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x1d2b84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
label_1d2b88:
    // 0x1d2b88: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x1d2b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_1d2b8c:
    // 0x1d2b8c: 0xc0e6f1a  jal         func_39BC68
label_1d2b90:
    if (ctx->pc == 0x1D2B90u) {
        ctx->pc = 0x1D2B94u;
        goto label_1d2b94;
    }
    ctx->pc = 0x1D2B8Cu;
    SET_GPR_U32(ctx, 31, 0x1D2B94u);
    ctx->pc = 0x39BC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BC68u, 0x1D2B8Cu, 0x1D2B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2B94u;
label_1d2b94:
    // 0x1d2b94: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1d2b94u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d2b98:
    // 0x1d2b98: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x1d2b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_1d2b9c:
    // 0x1d2b9c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d2b9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d2ba0:
    // 0x1d2ba0: 0xc090f80  jal         func_243E00
label_1d2ba4:
    if (ctx->pc == 0x1D2BA4u) {
        ctx->pc = 0x1D2BA8u;
        goto label_1d2ba8;
    }
    ctx->pc = 0x1D2BA0u;
    SET_GPR_U32(ctx, 31, 0x1D2BA8u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x1D2BA0u, 0x1D2BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2BA8u;
label_1d2ba8:
    // 0x1d2ba8: 0x27a30140  addiu       $v1, $sp, 0x140
    ctx->pc = 0x1d2ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_1d2bac:
    // 0x1d2bac: 0x27a20170  addiu       $v0, $sp, 0x170
    ctx->pc = 0x1d2bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_1d2bb0:
    // 0x1d2bb0: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1d2bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d2bb4:
    // 0x1d2bb4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1d2bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d2bb8:
    // 0x1d2bb8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1d2bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d2bbc:
    // 0x1d2bbc: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x1d2bbcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1d2bc0:
    // 0x1d2bc0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1d2bc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1d2bc4:
    // 0x1d2bc4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1d2bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1d2bc8:
    // 0x1d2bc8: 0xc7a10174  lwc1        $f1, 0x174($sp)
    ctx->pc = 0x1d2bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d2bcc:
    // 0x1d2bcc: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x1d2bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
label_1d2bd0:
    // 0x1d2bd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d2bd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d2bd4:
    // 0x1d2bd4: 0x0  nop
    ctx->pc = 0x1d2bd4u;
    // NOP
label_1d2bd8:
    // 0x1d2bd8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d2bd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d2bdc:
    // 0x1d2bdc: 0xe7a00174  swc1        $f0, 0x174($sp)
    ctx->pc = 0x1d2bdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
label_1d2be0:
    // 0x1d2be0: 0xc090864  jal         func_242190
label_1d2be4:
    if (ctx->pc == 0x1D2BE4u) {
        ctx->pc = 0x1D2BE8u;
        goto label_1d2be8;
    }
    ctx->pc = 0x1D2BE0u;
    SET_GPR_U32(ctx, 31, 0x1D2BE8u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x1D2BE0u, 0x1D2BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2BE8u;
label_1d2be8:
    // 0x1d2be8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d2be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d2bec:
    // 0x1d2bec: 0xc090590  jal         func_241640
label_1d2bf0:
    if (ctx->pc == 0x1D2BF0u) {
        ctx->pc = 0x1D2BF4u;
        goto label_1d2bf4;
    }
    ctx->pc = 0x1D2BECu;
    SET_GPR_U32(ctx, 31, 0x1D2BF4u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x1D2BECu, 0x1D2BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2BF4u;
label_1d2bf4:
    // 0x1d2bf4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1d2bf4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d2bf8:
    // 0x1d2bf8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1d2bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1d2bfc:
    // 0x1d2bfc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1d2bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1d2c00:
    // 0x1d2c00: 0xc09157c  jal         func_2455F0
label_1d2c04:
    if (ctx->pc == 0x1D2C04u) {
        ctx->pc = 0x1D2C08u;
        goto label_1d2c08;
    }
    ctx->pc = 0x1D2C00u;
    SET_GPR_U32(ctx, 31, 0x1D2C08u);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x1D2C00u, 0x1D2C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2C08u;
label_1d2c08:
    // 0x1d2c08: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1d2c08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d2c0c:
    // 0x1d2c0c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d2c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d2c10:
    // 0x1d2c10: 0xc040e7c  jal         func_1039F0
label_1d2c14:
    if (ctx->pc == 0x1D2C14u) {
        ctx->pc = 0x1D2C18u;
        goto label_1d2c18;
    }
    ctx->pc = 0x1D2C10u;
    SET_GPR_U32(ctx, 31, 0x1D2C18u);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x1D2C10u, 0x1D2C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2C18u;
label_1d2c18:
    // 0x1d2c18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d2c18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d2c1c:
    // 0x1d2c1c: 0x10000071  b           . + 4 + (0x71 << 2)
label_1d2c20:
    if (ctx->pc == 0x1D2C20u) {
        ctx->pc = 0x1D2C24u;
        goto label_1d2c24;
    }
    ctx->pc = 0x1D2C1Cu;
    {
        const bool branch_taken_0x1d2c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2c1c) {
            ctx->pc = 0x1D2DE4u;
            goto label_1d2de4;
        }
    }
    ctx->pc = 0x1D2C24u;
label_1d2c24:
    // 0x1d2c24: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d2c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d2c28:
    // 0x1d2c28: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x1d2c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_1d2c2c:
    // 0x1d2c2c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d2c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d2c30:
    // 0x1d2c30: 0x1062006b  beq         $v1, $v0, . + 4 + (0x6B << 2)
label_1d2c34:
    if (ctx->pc == 0x1D2C34u) {
        ctx->pc = 0x1D2C38u;
        goto label_1d2c38;
    }
    ctx->pc = 0x1D2C30u;
    {
        const bool branch_taken_0x1d2c30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d2c30) {
            ctx->pc = 0x1D2DE0u;
            goto label_1d2de0;
        }
    }
    ctx->pc = 0x1D2C38u;
label_1d2c38:
    // 0x1d2c38: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d2c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d2c3c:
    // 0x1d2c3c: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x1d2c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_1d2c40:
    // 0x1d2c40: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1d2c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1d2c44:
    // 0x1d2c44: 0xc096880  jal         func_25A200
label_1d2c48:
    if (ctx->pc == 0x1D2C48u) {
        ctx->pc = 0x1D2C4Cu;
        goto label_1d2c4c;
    }
    ctx->pc = 0x1D2C44u;
    SET_GPR_U32(ctx, 31, 0x1D2C4Cu);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x1D2C44u, 0x1D2C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2C4Cu;
label_1d2c4c:
    // 0x1d2c4c: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x1d2c4cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1d2c50:
    // 0x1d2c50: 0x10620063  beq         $v1, $v0, . + 4 + (0x63 << 2)
label_1d2c54:
    if (ctx->pc == 0x1D2C54u) {
        ctx->pc = 0x1D2C58u;
        goto label_1d2c58;
    }
    ctx->pc = 0x1D2C50u;
    {
        const bool branch_taken_0x1d2c50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d2c50) {
            ctx->pc = 0x1D2DE0u;
            goto label_1d2de0;
        }
    }
    ctx->pc = 0x1D2C58u;
label_1d2c58:
    // 0x1d2c58: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d2c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d2c5c:
    // 0x1d2c5c: 0x8fa2018c  lw          $v0, 0x18C($sp)
    ctx->pc = 0x1d2c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
label_1d2c60:
    // 0x1d2c60: 0x1062005f  beq         $v1, $v0, . + 4 + (0x5F << 2)
label_1d2c64:
    if (ctx->pc == 0x1D2C64u) {
        ctx->pc = 0x1D2C68u;
        goto label_1d2c68;
    }
    ctx->pc = 0x1D2C60u;
    {
        const bool branch_taken_0x1d2c60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d2c60) {
            ctx->pc = 0x1D2DE0u;
            goto label_1d2de0;
        }
    }
    ctx->pc = 0x1D2C68u;
label_1d2c68:
    // 0x1d2c68: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d2c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d2c6c:
    // 0x1d2c6c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1d2c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1d2c70:
    // 0x1d2c70: 0xc085538  jal         func_2154E0
label_1d2c74:
    if (ctx->pc == 0x1D2C74u) {
        ctx->pc = 0x1D2C78u;
        goto label_1d2c78;
    }
    ctx->pc = 0x1D2C70u;
    SET_GPR_U32(ctx, 31, 0x1D2C78u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1D2C70u, 0x1D2C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2C78u;
label_1d2c78:
    // 0x1d2c78: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1d2c78u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d2c7c:
    // 0x1d2c7c: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x1d2c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_1d2c80:
    // 0x1d2c80: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1d2c80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d2c84:
    // 0x1d2c84: 0xc090f80  jal         func_243E00
label_1d2c88:
    if (ctx->pc == 0x1D2C88u) {
        ctx->pc = 0x1D2C8Cu;
        goto label_1d2c8c;
    }
    ctx->pc = 0x1D2C84u;
    SET_GPR_U32(ctx, 31, 0x1D2C8Cu);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x1D2C84u, 0x1D2C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2C8Cu;
label_1d2c8c:
    // 0x1d2c8c: 0x27a30130  addiu       $v1, $sp, 0x130
    ctx->pc = 0x1d2c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_1d2c90:
    // 0x1d2c90: 0x27a20160  addiu       $v0, $sp, 0x160
    ctx->pc = 0x1d2c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_1d2c94:
    // 0x1d2c94: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1d2c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d2c98:
    // 0x1d2c98: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1d2c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d2c9c:
    // 0x1d2c9c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1d2c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d2ca0:
    // 0x1d2ca0: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x1d2ca0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1d2ca4:
    // 0x1d2ca4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1d2ca4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1d2ca8:
    // 0x1d2ca8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1d2ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1d2cac:
    // 0x1d2cac: 0xc7a10164  lwc1        $f1, 0x164($sp)
    ctx->pc = 0x1d2cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d2cb0:
    // 0x1d2cb0: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x1d2cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
label_1d2cb4:
    // 0x1d2cb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d2cb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d2cb8:
    // 0x1d2cb8: 0x0  nop
    ctx->pc = 0x1d2cb8u;
    // NOP
label_1d2cbc:
    // 0x1d2cbc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d2cbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d2cc0:
    // 0x1d2cc0: 0xe7a00164  swc1        $f0, 0x164($sp)
    ctx->pc = 0x1d2cc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
label_1d2cc4:
    // 0x1d2cc4: 0xc7a10160  lwc1        $f1, 0x160($sp)
    ctx->pc = 0x1d2cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d2cc8:
    // 0x1d2cc8: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x1d2cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d2ccc:
    // 0x1d2ccc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d2cccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d2cd0:
    // 0x1d2cd0: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x1d2cd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_1d2cd4:
    // 0x1d2cd4: 0xc7a10164  lwc1        $f1, 0x164($sp)
    ctx->pc = 0x1d2cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d2cd8:
    // 0x1d2cd8: 0xc7a00174  lwc1        $f0, 0x174($sp)
    ctx->pc = 0x1d2cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d2cdc:
    // 0x1d2cdc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d2cdcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d2ce0:
    // 0x1d2ce0: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x1d2ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_1d2ce4:
    // 0x1d2ce4: 0xc7a10168  lwc1        $f1, 0x168($sp)
    ctx->pc = 0x1d2ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d2ce8:
    // 0x1d2ce8: 0xc7a00178  lwc1        $f0, 0x178($sp)
    ctx->pc = 0x1d2ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d2cec:
    // 0x1d2cec: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d2cecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d2cf0:
    // 0x1d2cf0: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x1d2cf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_1d2cf4:
    // 0x1d2cf4: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x1d2cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_1d2cf8:
    // 0x1d2cf8: 0xc104d24  jal         func_413490
label_1d2cfc:
    if (ctx->pc == 0x1D2CFCu) {
        ctx->pc = 0x1D2D00u;
        goto label_1d2d00;
    }
    ctx->pc = 0x1D2CF8u;
    SET_GPR_U32(ctx, 31, 0x1D2D00u);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x1D2CF8u, 0x1D2D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2D00u;
label_1d2d00:
    // 0x1d2d00: 0xc7a10190  lwc1        $f1, 0x190($sp)
    ctx->pc = 0x1d2d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d2d04:
    // 0x1d2d04: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d2d04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d2d08:
    // 0x1d2d08: 0x45010035  bc1t        . + 4 + (0x35 << 2)
label_1d2d0c:
    if (ctx->pc == 0x1D2D0Cu) {
        ctx->pc = 0x1D2D10u;
        goto label_1d2d10;
    }
    ctx->pc = 0x1D2D08u;
    {
        const bool branch_taken_0x1d2d08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d2d08) {
            ctx->pc = 0x1D2DE0u;
            goto label_1d2de0;
        }
    }
    ctx->pc = 0x1D2D10u;
label_1d2d10:
    // 0x1d2d10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d2d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d2d14:
    // 0x1d2d14: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x1d2d14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
label_1d2d18:
    // 0x1d2d18: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1d2d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1d2d1c:
    // 0x1d2d1c: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x1d2d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_1d2d20:
    // 0x1d2d20: 0xc041d58  jal         func_107560
label_1d2d24:
    if (ctx->pc == 0x1D2D24u) {
        ctx->pc = 0x1D2D28u;
        goto label_1d2d28;
    }
    ctx->pc = 0x1D2D20u;
    SET_GPR_U32(ctx, 31, 0x1D2D28u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x1D2D20u, 0x1D2D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2D28u;
label_1d2d28:
    // 0x1d2d28: 0x27a400dc  addiu       $a0, $sp, 0xDC
    ctx->pc = 0x1d2d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
label_1d2d2c:
    // 0x1d2d2c: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x1d2d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_1d2d30:
    // 0x1d2d30: 0xc041d58  jal         func_107560
label_1d2d34:
    if (ctx->pc == 0x1D2D34u) {
        ctx->pc = 0x1D2D38u;
        goto label_1d2d38;
    }
    ctx->pc = 0x1D2D30u;
    SET_GPR_U32(ctx, 31, 0x1D2D38u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x1D2D30u, 0x1D2D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2D38u;
label_1d2d38:
    // 0x1d2d38: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x1d2d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
label_1d2d3c:
    // 0x1d2d3c: 0xc78081c0  lwc1        $f0, -0x7E40($gp)
    ctx->pc = 0x1d2d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d2d40:
    // 0x1d2d40: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x1d2d40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_1d2d44:
    // 0x1d2d44: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1d2d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1d2d48:
    // 0x1d2d48: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1d2d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1d2d4c:
    // 0x1d2d4c: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x1d2d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
label_1d2d50:
    // 0x1d2d50: 0x24c6c000  addiu       $a2, $a2, -0x4000
    ctx->pc = 0x1d2d50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950912));
label_1d2d54:
    // 0x1d2d54: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x1d2d54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1d2d58:
    // 0x1d2d58: 0xc0c6d0c  jal         func_31B430
label_1d2d5c:
    if (ctx->pc == 0x1D2D5Cu) {
        ctx->pc = 0x1D2D60u;
        goto label_1d2d60;
    }
    ctx->pc = 0x1D2D58u;
    SET_GPR_U32(ctx, 31, 0x1D2D60u);
    ctx->pc = 0x31B430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B430u, 0x1D2D58u, 0x1D2D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2D60u;
label_1d2d60:
    // 0x1d2d60: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d2d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d2d64:
    // 0x1d2d64: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_1d2d68:
    if (ctx->pc == 0x1D2D68u) {
        ctx->pc = 0x1D2D6Cu;
        goto label_1d2d6c;
    }
    ctx->pc = 0x1D2D64u;
    {
        const bool branch_taken_0x1d2d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d2d64) {
            ctx->pc = 0x1D2DE0u;
            goto label_1d2de0;
        }
    }
    ctx->pc = 0x1D2D6Cu;
label_1d2d6c:
    // 0x1d2d6c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d2d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d2d70:
    // 0x1d2d70: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1d2d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1d2d74:
    // 0x1d2d74: 0xac4300b0  sw          $v1, 0xB0($v0)
    ctx->pc = 0x1d2d74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 3));
label_1d2d78:
    // 0x1d2d78: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1d2d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1d2d7c:
    // 0x1d2d7c: 0xa04000e0  sb          $zero, 0xE0($v0)
    ctx->pc = 0x1d2d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 224), (uint8_t)GPR_U32(ctx, 0));
label_1d2d80:
    // 0x1d2d80: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d2d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1d2d84:
    // 0x1d2d84: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d2d84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d2d88:
    // 0x1d2d88: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x1d2d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1d2d8c:
    // 0x1d2d8c: 0x2405008c  addiu       $a1, $zero, 0x8C
    ctx->pc = 0x1d2d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_1d2d90:
    // 0x1d2d90: 0xc064df0  jal         func_1937C0
label_1d2d94:
    if (ctx->pc == 0x1D2D94u) {
        ctx->pc = 0x1D2D98u;
        goto label_1d2d98;
    }
    ctx->pc = 0x1D2D90u;
    SET_GPR_U32(ctx, 31, 0x1D2D98u);
    ctx->pc = 0x1937C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1937C0u, 0x1D2D90u, 0x1D2D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2D98u;
label_1d2d98:
    // 0x1d2d98: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d2d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1d2d9c:
    // 0x1d2d9c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d2d9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d2da0:
    // 0x1d2da0: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1d2da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_1d2da4:
    // 0x1d2da4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1d2da4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1d2da8:
    // 0x1d2da8: 0x24a57b50  addiu       $a1, $a1, 0x7B50
    ctx->pc = 0x1d2da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31568));
label_1d2dac:
    // 0x1d2dac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d2dacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d2db0:
    // 0x1d2db0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1d2db0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d2db4:
    // 0x1d2db4: 0xc08f558  jal         func_23D560
label_1d2db8:
    if (ctx->pc == 0x1D2DB8u) {
        ctx->pc = 0x1D2DBCu;
        goto label_1d2dbc;
    }
    ctx->pc = 0x1D2DB4u;
    SET_GPR_U32(ctx, 31, 0x1D2DBCu);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x1D2DB4u, 0x1D2DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2DBCu;
label_1d2dbc:
    // 0x1d2dbc: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1d2dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_1d2dc0:
    // 0x1d2dc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d2dc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d2dc4:
    // 0x1d2dc4: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1d2dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1d2dc8:
    // 0x1d2dc8: 0xe44000e4  swc1        $f0, 0xE4($v0)
    ctx->pc = 0x1d2dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 228), bits); }
label_1d2dcc:
    // 0x1d2dcc: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x1d2dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1d2dd0:
    // 0x1d2dd0: 0xc064cb0  jal         func_1932C0
label_1d2dd4:
    if (ctx->pc == 0x1D2DD4u) {
        ctx->pc = 0x1D2DD8u;
        goto label_1d2dd8;
    }
    ctx->pc = 0x1D2DD0u;
    SET_GPR_U32(ctx, 31, 0x1D2DD8u);
    ctx->pc = 0x1932C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1932C0u, 0x1D2DD0u, 0x1D2DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2DD8u;
label_1d2dd8:
    // 0x1d2dd8: 0x1000000a  b           . + 4 + (0xA << 2)
label_1d2ddc:
    if (ctx->pc == 0x1D2DDCu) {
        ctx->pc = 0x1D2DE0u;
        goto label_1d2de0;
    }
    ctx->pc = 0x1D2DD8u;
    {
        const bool branch_taken_0x1d2dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2dd8) {
            ctx->pc = 0x1D2E04u;
            goto label_1d2e04;
        }
    }
    ctx->pc = 0x1D2DE0u;
label_1d2de0:
    // 0x1d2de0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1d2de0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1d2de4:
    // 0x1d2de4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d2de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d2de8:
    // 0x1d2de8: 0xc04147c  jal         func_1051F0
label_1d2dec:
    if (ctx->pc == 0x1D2DECu) {
        ctx->pc = 0x1D2DF0u;
        goto label_1d2df0;
    }
    ctx->pc = 0x1D2DE8u;
    SET_GPR_U32(ctx, 31, 0x1D2DF0u);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x1D2DE8u, 0x1D2DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2DF0u;
label_1d2df0:
    // 0x1d2df0: 0x1602ff8c  bne         $s0, $v0, . + 4 + (-0x74 << 2)
label_1d2df4:
    if (ctx->pc == 0x1D2DF4u) {
        ctx->pc = 0x1D2DF8u;
        goto label_1d2df8;
    }
    ctx->pc = 0x1D2DF0u;
    {
        const bool branch_taken_0x1d2df0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d2df0) {
            ctx->pc = 0x1D2C24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d2c24;
        }
    }
    ctx->pc = 0x1D2DF8u;
label_1d2df8:
    // 0x1d2df8: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x1d2df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1d2dfc:
    // 0x1d2dfc: 0xc064cb0  jal         func_1932C0
label_1d2e00:
    if (ctx->pc == 0x1D2E00u) {
        ctx->pc = 0x1D2E04u;
        goto label_1d2e04;
    }
    ctx->pc = 0x1D2DFCu;
    SET_GPR_U32(ctx, 31, 0x1D2E04u);
    ctx->pc = 0x1932C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1932C0u, 0x1D2DFCu, 0x1D2E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2E04u;
label_1d2e04:
    // 0x1d2e04: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1d2e04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1d2e08:
    // 0x1d2e08: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1d2e08u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1d2e0c:
    // 0x1d2e0c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1d2e0cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1d2e10:
    // 0x1d2e10: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1d2e10u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1d2e14:
    // 0x1d2e14: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1d2e14u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1d2e18:
    // 0x1d2e18: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1d2e18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1d2e1c:
    // 0x1d2e1c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1d2e1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d2e20:
    // 0x1d2e20: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1d2e20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d2e24:
    // 0x1d2e24: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d2e24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d2e28:
    // 0x1d2e28: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d2e28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d2e2c:
    // 0x1d2e2c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1d2e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1d2e30:
    // 0x1d2e30: 0x27bd01b0  addiu       $sp, $sp, 0x1B0
    ctx->pc = 0x1d2e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_1d2e34:
    // 0x1d2e34: 0x3e00008  jr          $ra
label_1d2e38:
    if (ctx->pc == 0x1D2E38u) {
        ctx->pc = 0x1D2E3Cu;
        goto label_1d2e3c;
    }
    ctx->pc = 0x1D2E34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2E34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2E3Cu;
label_1d2e3c:
    // 0x1d2e3c: 0x0  nop
    ctx->pc = 0x1d2e3cu;
    // NOP
label_1d2e40:
    // 0x1d2e40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1d2e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1d2e44:
    // 0x1d2e44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d2e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1d2e48:
    // 0x1d2e48: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d2e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1d2e4c:
    // 0x1d2e4c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1d2e4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1d2e50:
    // 0x1d2e50: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1d2e50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_1d2e54:
    // 0x1d2e54: 0xa3a50040  sb          $a1, 0x40($sp)
    ctx->pc = 0x1d2e54u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 5));
label_1d2e58:
    // 0x1d2e58: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x1d2e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
label_1d2e5c:
    // 0x1d2e5c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1d2e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1d2e60:
    // 0x1d2e60: 0x93a50040  lbu         $a1, 0x40($sp)
    ctx->pc = 0x1d2e60u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
label_1d2e64:
    // 0x1d2e64: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x1d2e64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d2e68:
    // 0x1d2e68: 0xc064a4c  jal         func_192930
label_1d2e6c:
    if (ctx->pc == 0x1D2E6Cu) {
        ctx->pc = 0x1D2E70u;
        goto label_1d2e70;
    }
    ctx->pc = 0x1D2E68u;
    SET_GPR_U32(ctx, 31, 0x1D2E70u);
    ctx->pc = 0x192930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192930u, 0x1D2E68u, 0x1D2E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2E70u;
label_1d2e70:
    // 0x1d2e70: 0x93a20040  lbu         $v0, 0x40($sp)
    ctx->pc = 0x1d2e70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
label_1d2e74:
    // 0x1d2e74: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_1d2e78:
    if (ctx->pc == 0x1D2E78u) {
        ctx->pc = 0x1D2E7Cu;
        goto label_1d2e7c;
    }
    ctx->pc = 0x1D2E74u;
    {
        const bool branch_taken_0x1d2e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2e74) {
            ctx->pc = 0x1D2EC8u;
            goto label_1d2ec8;
        }
    }
    ctx->pc = 0x1D2E7Cu;
label_1d2e7c:
    // 0x1d2e7c: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x1d2e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_1d2e80:
    // 0x1d2e80: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1d2e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1d2e84:
    // 0x1d2e84: 0xac4300dc  sw          $v1, 0xDC($v0)
    ctx->pc = 0x1d2e84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 220), GPR_U32(ctx, 3));
label_1d2e88:
    // 0x1d2e88: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1d2e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1d2e8c:
    // 0x1d2e8c: 0xac4000cc  sw          $zero, 0xCC($v0)
    ctx->pc = 0x1d2e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 204), GPR_U32(ctx, 0));
label_1d2e90:
    // 0x1d2e90: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1d2e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1d2e94:
    // 0x1d2e94: 0xa04000ed  sb          $zero, 0xED($v0)
    ctx->pc = 0x1d2e94u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 237), (uint8_t)GPR_U32(ctx, 0));
label_1d2e98:
    // 0x1d2e98: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1d2e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1d2e9c:
    // 0x1d2e9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d2e9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d2ea0:
    // 0x1d2ea0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1d2ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1d2ea4:
    // 0x1d2ea4: 0xe44000f0  swc1        $f0, 0xF0($v0)
    ctx->pc = 0x1d2ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 240), bits); }
label_1d2ea8:
    // 0x1d2ea8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1d2ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1d2eac:
    // 0x1d2eac: 0xc074dbc  jal         func_1D36F0
label_1d2eb0:
    if (ctx->pc == 0x1D2EB0u) {
        ctx->pc = 0x1D2EB4u;
        goto label_1d2eb4;
    }
    ctx->pc = 0x1D2EACu;
    SET_GPR_U32(ctx, 31, 0x1D2EB4u);
    ctx->pc = 0x1D36F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D36F0u, 0x1D2EACu, 0x1D2EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2EB4u;
label_1d2eb4:
    // 0x1d2eb4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1d2eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1d2eb8:
    // 0x1d2eb8: 0xc074d98  jal         func_1D3660
label_1d2ebc:
    if (ctx->pc == 0x1D2EBCu) {
        ctx->pc = 0x1D2EC0u;
        goto label_1d2ec0;
    }
    ctx->pc = 0x1D2EB8u;
    SET_GPR_U32(ctx, 31, 0x1D2EC0u);
    ctx->pc = 0x1D3660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3660u, 0x1D2EB8u, 0x1D2EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2EC0u;
label_1d2ec0:
    // 0x1d2ec0: 0x10000031  b           . + 4 + (0x31 << 2)
label_1d2ec4:
    if (ctx->pc == 0x1D2EC4u) {
        ctx->pc = 0x1D2EC8u;
        goto label_1d2ec8;
    }
    ctx->pc = 0x1D2EC0u;
    {
        const bool branch_taken_0x1d2ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2ec0) {
            ctx->pc = 0x1D2F88u;
            goto label_1d2f88;
        }
    }
    ctx->pc = 0x1D2EC8u;
label_1d2ec8:
    // 0x1d2ec8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1d2ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1d2ecc:
    // 0x1d2ecc: 0x904200e0  lbu         $v0, 0xE0($v0)
    ctx->pc = 0x1d2eccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 224)));
label_1d2ed0:
    // 0x1d2ed0: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_1d2ed4:
    if (ctx->pc == 0x1D2ED4u) {
        ctx->pc = 0x1D2ED8u;
        goto label_1d2ed8;
    }
    ctx->pc = 0x1D2ED0u;
    {
        const bool branch_taken_0x1d2ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2ed0) {
            ctx->pc = 0x1D2F74u;
            goto label_1d2f74;
        }
    }
    ctx->pc = 0x1D2ED8u;
label_1d2ed8:
    // 0x1d2ed8: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x1d2ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_1d2edc:
    // 0x1d2edc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d2edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d2ee0:
    // 0x1d2ee0: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_1d2ee4:
    if (ctx->pc == 0x1D2EE4u) {
        ctx->pc = 0x1D2EE8u;
        goto label_1d2ee8;
    }
    ctx->pc = 0x1D2EE0u;
    {
        const bool branch_taken_0x1d2ee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2ee0) {
            ctx->pc = 0x1D2F74u;
            goto label_1d2f74;
        }
    }
    ctx->pc = 0x1D2EE8u;
label_1d2ee8:
    // 0x1d2ee8: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x1d2ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_1d2eec:
    // 0x1d2eec: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1d2eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d2ef0:
    // 0x1d2ef0: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x1d2ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1d2ef4:
    // 0x1d2ef4: 0xc085538  jal         func_2154E0
label_1d2ef8:
    if (ctx->pc == 0x1D2EF8u) {
        ctx->pc = 0x1D2EFCu;
        goto label_1d2efc;
    }
    ctx->pc = 0x1D2EF4u;
    SET_GPR_U32(ctx, 31, 0x1D2EFCu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1D2EF4u, 0x1D2EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2EFCu;
label_1d2efc:
    // 0x1d2efc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d2efcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d2f00:
    // 0x1d2f00: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
label_1d2f04:
    if (ctx->pc == 0x1D2F04u) {
        ctx->pc = 0x1D2F08u;
        goto label_1d2f08;
    }
    ctx->pc = 0x1D2F00u;
    {
        const bool branch_taken_0x1d2f00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2f00) {
            ctx->pc = 0x1D2F74u;
            goto label_1d2f74;
        }
    }
    ctx->pc = 0x1D2F08u;
label_1d2f08:
    // 0x1d2f08: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1d2f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1d2f0c:
    // 0x1d2f0c: 0x8c4200dc  lw          $v0, 0xDC($v0)
    ctx->pc = 0x1d2f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
label_1d2f10:
    // 0x1d2f10: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1d2f14:
    if (ctx->pc == 0x1D2F14u) {
        ctx->pc = 0x1D2F18u;
        goto label_1d2f18;
    }
    ctx->pc = 0x1D2F10u;
    {
        const bool branch_taken_0x1d2f10 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1d2f10) {
            ctx->pc = 0x1D2F2Cu;
            goto label_1d2f2c;
        }
    }
    ctx->pc = 0x1D2F18u;
label_1d2f18:
    // 0x1d2f18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d2f18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d2f1c:
    // 0x1d2f1c: 0x0  nop
    ctx->pc = 0x1d2f1cu;
    // NOP
label_1d2f20:
    // 0x1d2f20: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x1d2f20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_1d2f24:
    // 0x1d2f24: 0x10000008  b           . + 4 + (0x8 << 2)
label_1d2f28:
    if (ctx->pc == 0x1D2F28u) {
        ctx->pc = 0x1D2F2Cu;
        goto label_1d2f2c;
    }
    ctx->pc = 0x1D2F24u;
    {
        const bool branch_taken_0x1d2f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2f24) {
            ctx->pc = 0x1D2F48u;
            goto label_1d2f48;
        }
    }
    ctx->pc = 0x1D2F2Cu;
label_1d2f2c:
    // 0x1d2f2c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1d2f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_1d2f30:
    // 0x1d2f30: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d2f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1d2f34:
    // 0x1d2f34: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1d2f34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1d2f38:
    // 0x1d2f38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d2f38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d2f3c:
    // 0x1d2f3c: 0x0  nop
    ctx->pc = 0x1d2f3cu;
    // NOP
label_1d2f40:
    // 0x1d2f40: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x1d2f40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_1d2f44:
    // 0x1d2f44: 0x4614a500  add.s       $f20, $f20, $f20
    ctx->pc = 0x1d2f44u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
label_1d2f48:
    // 0x1d2f48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d2f4c:
    // 0x1d2f4c: 0xc040aa8  jal         func_102AA0
label_1d2f50:
    if (ctx->pc == 0x1D2F50u) {
        ctx->pc = 0x1D2F54u;
        goto label_1d2f54;
    }
    ctx->pc = 0x1D2F4Cu;
    SET_GPR_U32(ctx, 31, 0x1D2F54u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x1D2F4Cu, 0x1D2F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2F54u;
label_1d2f54:
    // 0x1d2f54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d2f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d2f58:
    // 0x1d2f58: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1d2f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1d2f5c:
    // 0x1d2f5c: 0xc040a90  jal         func_102A40
label_1d2f60:
    if (ctx->pc == 0x1D2F60u) {
        ctx->pc = 0x1D2F64u;
        goto label_1d2f64;
    }
    ctx->pc = 0x1D2F5Cu;
    SET_GPR_U32(ctx, 31, 0x1D2F64u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x1D2F5Cu, 0x1D2F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2F64u;
label_1d2f64:
    // 0x1d2f64: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d2f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d2f68:
    // 0x1d2f68: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1d2f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d2f6c:
    // 0x1d2f6c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1d2f6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_1d2f70:
    // 0x1d2f70: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1d2f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1d2f74:
    // 0x1d2f74: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1d2f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_1d2f78:
    // 0x1d2f78: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d2f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d2f7c:
    // 0x1d2f7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d2f7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d2f80:
    // 0x1d2f80: 0xc08f740  jal         func_23DD00
label_1d2f84:
    if (ctx->pc == 0x1D2F84u) {
        ctx->pc = 0x1D2F88u;
        goto label_1d2f88;
    }
    ctx->pc = 0x1D2F80u;
    SET_GPR_U32(ctx, 31, 0x1D2F88u);
    ctx->pc = 0x23DD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DD00u, 0x1D2F80u, 0x1D2F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2F88u;
label_1d2f88:
    // 0x1d2f88: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d2f88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d2f8c:
    // 0x1d2f8c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d2f8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d2f90:
    // 0x1d2f90: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1d2f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1d2f94:
    // 0x1d2f94: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1d2f94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1d2f98:
    // 0x1d2f98: 0x3e00008  jr          $ra
label_1d2f9c:
    if (ctx->pc == 0x1D2F9Cu) {
        ctx->pc = 0x1D2FA0u;
        goto label_1d2fa0;
    }
    ctx->pc = 0x1D2F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2FA0u;
label_1d2fa0:
    // 0x1d2fa0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1d2fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_1d2fa4:
    // 0x1d2fa4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d2fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1d2fa8:
    // 0x1d2fa8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d2fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d2fac:
    // 0x1d2fac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d2facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d2fb0:
    // 0x1d2fb0: 0xafa400d0  sw          $a0, 0xD0($sp)
    ctx->pc = 0x1d2fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 4));
label_1d2fb4:
    // 0x1d2fb4: 0xafa500e0  sw          $a1, 0xE0($sp)
    ctx->pc = 0x1d2fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 5));
label_1d2fb8:
    // 0x1d2fb8: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x1d2fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_1d2fbc:
    // 0x1d2fbc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1d2fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d2fc0:
    // 0x1d2fc0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1d2fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1d2fc4:
    // 0x1d2fc4: 0xc085538  jal         func_2154E0
label_1d2fc8:
    if (ctx->pc == 0x1D2FC8u) {
        ctx->pc = 0x1D2FCCu;
        goto label_1d2fcc;
    }
    ctx->pc = 0x1D2FC4u;
    SET_GPR_U32(ctx, 31, 0x1D2FCCu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1D2FC4u, 0x1D2FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2FCCu;
label_1d2fcc:
    // 0x1d2fcc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d2fccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d2fd0:
    // 0x1d2fd0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d2fd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d2fd4:
    // 0x1d2fd4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1d2fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1d2fd8:
    // 0x1d2fd8: 0xc050530  jal         func_1414C0
label_1d2fdc:
    if (ctx->pc == 0x1D2FDCu) {
        ctx->pc = 0x1D2FE0u;
        goto label_1d2fe0;
    }
    ctx->pc = 0x1D2FD8u;
    SET_GPR_U32(ctx, 31, 0x1D2FE0u);
    ctx->pc = 0x1414C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1414C0u, 0x1D2FD8u, 0x1D2FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2FE0u;
label_1d2fe0:
    // 0x1d2fe0: 0xc05035c  jal         func_140D70
label_1d2fe4:
    if (ctx->pc == 0x1D2FE4u) {
        ctx->pc = 0x1D2FE8u;
        goto label_1d2fe8;
    }
    ctx->pc = 0x1D2FE0u;
    SET_GPR_U32(ctx, 31, 0x1D2FE8u);
    ctx->pc = 0x140D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140D70u, 0x1D2FE0u, 0x1D2FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2FE8u;
label_1d2fe8:
    // 0x1d2fe8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d2fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d2fec:
    // 0x1d2fec: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1d2fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1d2ff0:
    // 0x1d2ff0: 0xc050240  jal         func_140900
label_1d2ff4:
    if (ctx->pc == 0x1D2FF4u) {
        ctx->pc = 0x1D2FF8u;
        goto label_1d2ff8;
    }
    ctx->pc = 0x1D2FF0u;
    SET_GPR_U32(ctx, 31, 0x1D2FF8u);
    ctx->pc = 0x140900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140900u, 0x1D2FF0u, 0x1D2FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2FF8u;
label_1d2ff8:
    // 0x1d2ff8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d2ff8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d2ffc:
    // 0x1d2ffc: 0x0  nop
    ctx->pc = 0x1d2ffcu;
    // NOP
label_1d3000:
    // 0x1d3000: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1d3000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1d3004:
    // 0x1d3004: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1d3004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1d3008:
    // 0x1d3008: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d3008u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d300c:
    // 0x1d300c: 0x0  nop
    ctx->pc = 0x1d300cu;
    // NOP
label_1d3010:
    // 0x1d3010: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1d3010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_1d3014:
    // 0x1d3014: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x1d3014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
label_1d3018:
    // 0x1d3018: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d3018u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d301c:
    // 0x1d301c: 0x0  nop
    ctx->pc = 0x1d301cu;
    // NOP
label_1d3020:
    // 0x1d3020: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1d3020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_1d3024:
    // 0x1d3024: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x1d3024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1d3028:
    // 0x1d3028: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1d3028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_1d302c:
    // 0x1d302c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d302cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d3030:
    // 0x1d3030: 0xc46000a8  lwc1        $f0, 0xA8($v1)
    ctx->pc = 0x1d3030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d3034:
    // 0x1d3034: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1d3034u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1d3038:
    // 0x1d3038: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x1d3038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d303c:
    // 0x1d303c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d303cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d3040:
    // 0x1d3040: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1d3044:
    if (ctx->pc == 0x1D3044u) {
        ctx->pc = 0x1D3048u;
        goto label_1d3048;
    }
    ctx->pc = 0x1D3040u;
    {
        const bool branch_taken_0x1d3040 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d3040) {
            ctx->pc = 0x1D3058u;
            goto label_1d3058;
        }
    }
    ctx->pc = 0x1D3048u;
label_1d3048:
    // 0x1d3048: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x1d3048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d304c:
    // 0x1d304c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1d304cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1d3050:
    // 0x1d3050: 0x10000018  b           . + 4 + (0x18 << 2)
label_1d3054:
    if (ctx->pc == 0x1D3054u) {
        ctx->pc = 0x1D3058u;
        goto label_1d3058;
    }
    ctx->pc = 0x1D3050u;
    {
        const bool branch_taken_0x1d3050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3050) {
            ctx->pc = 0x1D30B4u;
            goto label_1d30b4;
        }
    }
    ctx->pc = 0x1D3058u;
label_1d3058:
    // 0x1d3058: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1d3058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1d305c:
    // 0x1d305c: 0xc44100a8  lwc1        $f1, 0xA8($v0)
    ctx->pc = 0x1d305cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d3060:
    // 0x1d3060: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x1d3060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
label_1d3064:
    // 0x1d3064: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d3064u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d3068:
    // 0x1d3068: 0x0  nop
    ctx->pc = 0x1d3068u;
    // NOP
label_1d306c:
    // 0x1d306c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d306cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d3070:
    // 0x1d3070: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_1d3074:
    if (ctx->pc == 0x1D3074u) {
        ctx->pc = 0x1D3078u;
        goto label_1d3078;
    }
    ctx->pc = 0x1D3070u;
    {
        const bool branch_taken_0x1d3070 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d3070) {
            ctx->pc = 0x1D309Cu;
            goto label_1d309c;
        }
    }
    ctx->pc = 0x1D3078u;
label_1d3078:
    // 0x1d3078: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x1d3078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1d307c:
    // 0x1d307c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1d307cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_1d3080:
    // 0x1d3080: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d3080u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d3084:
    // 0x1d3084: 0xc46000a8  lwc1        $f0, 0xA8($v1)
    ctx->pc = 0x1d3084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d3088:
    // 0x1d3088: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1d3088u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1d308c:
    // 0x1d308c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1d308cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_1d3090:
    // 0x1d3090: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1d3090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1d3094:
    // 0x1d3094: 0x10000007  b           . + 4 + (0x7 << 2)
label_1d3098:
    if (ctx->pc == 0x1D3098u) {
        ctx->pc = 0x1D309Cu;
        goto label_1d309c;
    }
    ctx->pc = 0x1D3094u;
    {
        const bool branch_taken_0x1d3094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3094) {
            ctx->pc = 0x1D30B4u;
            goto label_1d30b4;
        }
    }
    ctx->pc = 0x1D309Cu;
label_1d309c:
    // 0x1d309c: 0x240205dc  addiu       $v0, $zero, 0x5DC
    ctx->pc = 0x1d309cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
label_1d30a0:
    // 0x1d30a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d30a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d30a4:
    // 0x1d30a4: 0x0  nop
    ctx->pc = 0x1d30a4u;
    // NOP
label_1d30a8:
    // 0x1d30a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d30a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1d30ac:
    // 0x1d30ac: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1d30acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_1d30b0:
    // 0x1d30b0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1d30b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1d30b4:
    // 0x1d30b4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1d30b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1d30b8:
    // 0x1d30b8: 0xc44100e4  lwc1        $f1, 0xE4($v0)
    ctx->pc = 0x1d30b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d30bc:
    // 0x1d30bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d30bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d30c0:
    // 0x1d30c0: 0x0  nop
    ctx->pc = 0x1d30c0u;
    // NOP
label_1d30c4:
    // 0x1d30c4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1d30c4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d30c8:
    // 0x1d30c8: 0x45010056  bc1t        . + 4 + (0x56 << 2)
label_1d30cc:
    if (ctx->pc == 0x1D30CCu) {
        ctx->pc = 0x1D30D0u;
        goto label_1d30d0;
    }
    ctx->pc = 0x1D30C8u;
    {
        const bool branch_taken_0x1d30c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d30c8) {
            ctx->pc = 0x1D3224u;
            goto label_1d3224;
        }
    }
    ctx->pc = 0x1D30D0u;
label_1d30d0:
    // 0x1d30d0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1d30d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1d30d4:
    // 0x1d30d4: 0x8c4200b0  lw          $v0, 0xB0($v0)
    ctx->pc = 0x1d30d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
label_1d30d8:
    // 0x1d30d8: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
label_1d30dc:
    if (ctx->pc == 0x1D30DCu) {
        ctx->pc = 0x1D30E0u;
        goto label_1d30e0;
    }
    ctx->pc = 0x1D30D8u;
    {
        const bool branch_taken_0x1d30d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d30d8) {
            ctx->pc = 0x1D3224u;
            goto label_1d3224;
        }
    }
    ctx->pc = 0x1D30E0u;
label_1d30e0:
    // 0x1d30e0: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x1d30e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_1d30e4:
    // 0x1d30e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d30e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d30e8:
    // 0x1d30e8: 0x0  nop
    ctx->pc = 0x1d30e8u;
    // NOP
label_1d30ec:
    // 0x1d30ec: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1d30ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_1d30f0:
    // 0x1d30f0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1d30f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1d30f4:
    // 0x1d30f4: 0x8c4400b0  lw          $a0, 0xB0($v0)
    ctx->pc = 0x1d30f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
label_1d30f8:
    // 0x1d30f8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1d30f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1d30fc:
    // 0x1d30fc: 0xc085538  jal         func_2154E0
label_1d3100:
    if (ctx->pc == 0x1D3100u) {
        ctx->pc = 0x1D3104u;
        goto label_1d3104;
    }
    ctx->pc = 0x1D30FCu;
    SET_GPR_U32(ctx, 31, 0x1D3104u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1D30FCu, 0x1D3104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3104u;
label_1d3104:
    // 0x1d3104: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d3104u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d3108:
    // 0x1d3108: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1d3108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1d310c:
    // 0x1d310c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d310cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d3110:
    // 0x1d3110: 0xc090f80  jal         func_243E00
label_1d3114:
    if (ctx->pc == 0x1D3114u) {
        ctx->pc = 0x1D3118u;
        goto label_1d3118;
    }
    ctx->pc = 0x1D3110u;
    SET_GPR_U32(ctx, 31, 0x1D3118u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x1D3110u, 0x1D3118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3118u;
label_1d3118:
    // 0x1d3118: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x1d3118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1d311c:
    // 0x1d311c: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x1d311cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1d3120:
    // 0x1d3120: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1d3120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d3124:
    // 0x1d3124: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1d3124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d3128:
    // 0x1d3128: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1d3128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d312c:
    // 0x1d312c: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x1d312cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1d3130:
    // 0x1d3130: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1d3130u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1d3134:
    // 0x1d3134: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1d3134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1d3138:
    // 0x1d3138: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1d3138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1d313c:
    // 0x1d313c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d313cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d3140:
    // 0x1d3140: 0xc090f80  jal         func_243E00
label_1d3144:
    if (ctx->pc == 0x1D3144u) {
        ctx->pc = 0x1D3148u;
        goto label_1d3148;
    }
    ctx->pc = 0x1D3140u;
    SET_GPR_U32(ctx, 31, 0x1D3148u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x1D3140u, 0x1D3148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3148u;
label_1d3148:
    // 0x1d3148: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x1d3148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1d314c:
    // 0x1d314c: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x1d314cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1d3150:
    // 0x1d3150: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1d3150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d3154:
    // 0x1d3154: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1d3154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d3158:
    // 0x1d3158: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1d3158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d315c:
    // 0x1d315c: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x1d315cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1d3160:
    // 0x1d3160: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1d3160u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1d3164:
    // 0x1d3164: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1d3164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1d3168:
    // 0x1d3168: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1d3168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1d316c:
    // 0x1d316c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1d316cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1d3170:
    // 0x1d3170: 0xc0b5f04  jal         func_2D7C10
label_1d3174:
    if (ctx->pc == 0x1D3174u) {
        ctx->pc = 0x1D3178u;
        goto label_1d3178;
    }
    ctx->pc = 0x1D3170u;
    SET_GPR_U32(ctx, 31, 0x1D3178u);
    ctx->pc = 0x2D7C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7C10u, 0x1D3170u, 0x1D3178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3178u;
label_1d3178:
    // 0x1d3178: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d3178u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1d317c:
    // 0x1d317c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1d317cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_1d3180:
    // 0x1d3180: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1d3180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_1d3184:
    // 0x1d3184: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d3184u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d3188:
    // 0x1d3188: 0x0  nop
    ctx->pc = 0x1d3188u;
    // NOP
label_1d318c:
    // 0x1d318c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1d318cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1d3190:
    // 0x1d3190: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1d3190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_1d3194:
    // 0x1d3194: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d3194u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d3198:
    // 0x1d3198: 0x0  nop
    ctx->pc = 0x1d3198u;
    // NOP
label_1d319c:
    // 0x1d319c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1d319cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_1d31a0:
    // 0x1d31a0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1d31a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1d31a4:
    // 0x1d31a4: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1d31a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1d31a8:
    // 0x1d31a8: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_1d31ac:
    if (ctx->pc == 0x1D31ACu) {
        ctx->pc = 0x1D31B0u;
        goto label_1d31b0;
    }
    ctx->pc = 0x1D31A8u;
    {
        const bool branch_taken_0x1d31a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d31a8) {
            ctx->pc = 0x1D31D0u;
            goto label_1d31d0;
        }
    }
    ctx->pc = 0x1D31B0u;
label_1d31b0:
    // 0x1d31b0: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x1d31b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_1d31b4:
    // 0x1d31b4: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1d31b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_1d31b8:
    // 0x1d31b8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1d31b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1d31bc:
    // 0x1d31bc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1d31bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1d31c0:
    // 0x1d31c0: 0x0  nop
    ctx->pc = 0x1d31c0u;
    // NOP
label_1d31c4:
    // 0x1d31c4: 0x0  nop
    ctx->pc = 0x1d31c4u;
    // NOP
label_1d31c8:
    // 0x1d31c8: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_1d31cc:
    if (ctx->pc == 0x1D31CCu) {
        ctx->pc = 0x1D31D0u;
        goto label_1d31d0;
    }
    ctx->pc = 0x1D31C8u;
    {
        const bool branch_taken_0x1d31c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d31c8) {
            ctx->pc = 0x1D31B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d31b4;
        }
    }
    ctx->pc = 0x1D31D0u;
label_1d31d0:
    // 0x1d31d0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1d31d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1d31d4:
    // 0x1d31d4: 0xc44100e4  lwc1        $f1, 0xE4($v0)
    ctx->pc = 0x1d31d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d31d8:
    // 0x1d31d8: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1d31d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_1d31dc:
    // 0x1d31dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d31dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d31e0:
    // 0x1d31e0: 0x0  nop
    ctx->pc = 0x1d31e0u;
    // NOP
label_1d31e4:
    // 0x1d31e4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1d31e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d31e8:
    // 0x1d31e8: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1d31e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_1d31ec:
    // 0x1d31ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d31ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d31f0:
    // 0x1d31f0: 0x0  nop
    ctx->pc = 0x1d31f0u;
    // NOP
label_1d31f4:
    // 0x1d31f4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d31f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1d31f8:
    // 0x1d31f8: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x1d31f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_1d31fc:
    // 0x1d31fc: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1d31fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_1d3200:
    // 0x1d3200: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1d3200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1d3204:
    // 0x1d3204: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1d3204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1d3208:
    // 0x1d3208: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1d3208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1d320c:
    // 0x1d320c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1d320cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1d3210:
    // 0x1d3210: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d3210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d3214:
    // 0x1d3214: 0xc106598  jal         func_419660
label_1d3218:
    if (ctx->pc == 0x1D3218u) {
        ctx->pc = 0x1D321Cu;
        goto label_1d321c;
    }
    ctx->pc = 0x1D3214u;
    SET_GPR_U32(ctx, 31, 0x1D321Cu);
    ctx->pc = 0x419660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419660u, 0x1D3214u, 0x1D321Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D321Cu;
label_1d321c:
    // 0x1d321c: 0x1000000f  b           . + 4 + (0xF << 2)
label_1d3220:
    if (ctx->pc == 0x1D3220u) {
        ctx->pc = 0x1D3224u;
        goto label_1d3224;
    }
    ctx->pc = 0x1D321Cu;
    {
        const bool branch_taken_0x1d321c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d321c) {
            ctx->pc = 0x1D325Cu;
            goto label_1d325c;
        }
    }
    ctx->pc = 0x1D3224u;
label_1d3224:
    // 0x1d3224: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1d3224u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d3228:
    // 0x1d3228: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d322c:
    // 0x1d322c: 0xc091008  jal         func_244020
label_1d3230:
    if (ctx->pc == 0x1D3230u) {
        ctx->pc = 0x1D3234u;
        goto label_1d3234;
    }
    ctx->pc = 0x1D322Cu;
    SET_GPR_U32(ctx, 31, 0x1D3234u);
    ctx->pc = 0x244020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244020u, 0x1D322Cu, 0x1D3234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3234u;
label_1d3234:
    // 0x1d3234: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d3234u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1d3238:
    // 0x1d3238: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1d3238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_1d323c:
    // 0x1d323c: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x1d323cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_1d3240:
    // 0x1d3240: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d3240u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d3244:
    // 0x1d3244: 0x0  nop
    ctx->pc = 0x1d3244u;
    // NOP
label_1d3248:
    // 0x1d3248: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1d3248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1d324c:
    // 0x1d324c: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x1d324cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_1d3250:
    // 0x1d3250: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d3250u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d3254:
    // 0x1d3254: 0x0  nop
    ctx->pc = 0x1d3254u;
    // NOP
label_1d3258:
    // 0x1d3258: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1d3258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_1d325c:
    // 0x1d325c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1d325cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1d3260:
    // 0x1d3260: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d3260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d3264:
    // 0x1d3264: 0xc090f80  jal         func_243E00
label_1d3268:
    if (ctx->pc == 0x1D3268u) {
        ctx->pc = 0x1D326Cu;
        goto label_1d326c;
    }
    ctx->pc = 0x1D3264u;
    SET_GPR_U32(ctx, 31, 0x1D326Cu);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x1D3264u, 0x1D326Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D326Cu;
label_1d326c:
    // 0x1d326c: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x1d326cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1d3270:
    // 0x1d3270: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x1d3270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1d3274:
    // 0x1d3274: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1d3274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d3278:
    // 0x1d3278: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1d3278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d327c:
    // 0x1d327c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1d327cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d3280:
    // 0x1d3280: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x1d3280u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1d3284:
    // 0x1d3284: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1d3284u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1d3288:
    // 0x1d3288: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1d3288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1d328c:
    // 0x1d328c: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x1d328cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d3290:
    // 0x1d3290: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1d3290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_1d3294:
    // 0x1d3294: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d3294u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d3298:
    // 0x1d3298: 0x0  nop
    ctx->pc = 0x1d3298u;
    // NOP
label_1d329c:
    // 0x1d329c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d329cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d32a0:
    // 0x1d32a0: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x1d32a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1d32a4:
    // 0x1d32a4: 0xc05035c  jal         func_140D70
label_1d32a8:
    if (ctx->pc == 0x1D32A8u) {
        ctx->pc = 0x1D32ACu;
        goto label_1d32ac;
    }
    ctx->pc = 0x1D32A4u;
    SET_GPR_U32(ctx, 31, 0x1D32ACu);
    ctx->pc = 0x140D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140D70u, 0x1D32A4u, 0x1D32ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D32ACu;
label_1d32ac:
    // 0x1d32ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d32acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d32b0:
    // 0x1d32b0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1d32b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1d32b4:
    // 0x1d32b4: 0xc050194  jal         func_140650
label_1d32b8:
    if (ctx->pc == 0x1D32B8u) {
        ctx->pc = 0x1D32BCu;
        goto label_1d32bc;
    }
    ctx->pc = 0x1D32B4u;
    SET_GPR_U32(ctx, 31, 0x1D32BCu);
    ctx->pc = 0x140650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140650u, 0x1D32B4u, 0x1D32BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D32BCu;
label_1d32bc:
    // 0x1d32bc: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1d32bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1d32c0:
    // 0x1d32c0: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1d32c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1d32c4:
    // 0x1d32c4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_1d32c8:
    if (ctx->pc == 0x1D32C8u) {
        ctx->pc = 0x1D32CCu;
        goto label_1d32cc;
    }
    ctx->pc = 0x1D32C4u;
    {
        const bool branch_taken_0x1d32c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d32c4) {
            ctx->pc = 0x1D3318u;
            goto label_1d3318;
        }
    }
    ctx->pc = 0x1D32CCu;
label_1d32cc:
    // 0x1d32cc: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1d32ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1d32d0:
    // 0x1d32d0: 0xc44100e4  lwc1        $f1, 0xE4($v0)
    ctx->pc = 0x1d32d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d32d4:
    // 0x1d32d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d32d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d32d8:
    // 0x1d32d8: 0x0  nop
    ctx->pc = 0x1d32d8u;
    // NOP
label_1d32dc:
    // 0x1d32dc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1d32dcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d32e0:
    // 0x1d32e0: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_1d32e4:
    if (ctx->pc == 0x1D32E4u) {
        ctx->pc = 0x1D32E8u;
        goto label_1d32e8;
    }
    ctx->pc = 0x1D32E0u;
    {
        const bool branch_taken_0x1d32e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d32e0) {
            ctx->pc = 0x1D3318u;
            goto label_1d3318;
        }
    }
    ctx->pc = 0x1D32E8u;
label_1d32e8:
    // 0x1d32e8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1d32e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1d32ec:
    // 0x1d32ec: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1d32ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1d32f0:
    // 0x1d32f0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1d32f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1d32f4:
    // 0x1d32f4: 0xc106784  jal         func_419E10
label_1d32f8:
    if (ctx->pc == 0x1D32F8u) {
        ctx->pc = 0x1D32FCu;
        goto label_1d32fc;
    }
    ctx->pc = 0x1D32F4u;
    SET_GPR_U32(ctx, 31, 0x1D32FCu);
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x1D32F4u, 0x1D32FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D32FCu;
label_1d32fc:
    // 0x1d32fc: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x1d32fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1d3300:
    // 0x1d3300: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d3300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d3304:
    // 0x1d3304: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d3304u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d3308:
    // 0x1d3308: 0xc1065f8  jal         func_4197E0
label_1d330c:
    if (ctx->pc == 0x1D330Cu) {
        ctx->pc = 0x1D3310u;
        goto label_1d3310;
    }
    ctx->pc = 0x1D3308u;
    SET_GPR_U32(ctx, 31, 0x1D3310u);
    ctx->pc = 0x4197E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4197E0u, 0x1D3308u, 0x1D3310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3310u;
label_1d3310:
    // 0x1d3310: 0x10000006  b           . + 4 + (0x6 << 2)
label_1d3314:
    if (ctx->pc == 0x1D3314u) {
        ctx->pc = 0x1D3318u;
        goto label_1d3318;
    }
    ctx->pc = 0x1D3310u;
    {
        const bool branch_taken_0x1d3310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3310) {
            ctx->pc = 0x1D332Cu;
            goto label_1d332c;
        }
    }
    ctx->pc = 0x1D3318u;
label_1d3318:
    // 0x1d3318: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x1d3318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1d331c:
    // 0x1d331c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1d331cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1d3320:
    // 0x1d3320: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d3320u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d3324:
    // 0x1d3324: 0xc106598  jal         func_419660
label_1d3328:
    if (ctx->pc == 0x1D3328u) {
        ctx->pc = 0x1D332Cu;
        goto label_1d332c;
    }
    ctx->pc = 0x1D3324u;
    SET_GPR_U32(ctx, 31, 0x1D332Cu);
    ctx->pc = 0x419660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419660u, 0x1D3324u, 0x1D332Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D332Cu;
label_1d332c:
    // 0x1d332c: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x1d332cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1d3330:
    // 0x1d3330: 0xc106794  jal         func_419E50
label_1d3334:
    if (ctx->pc == 0x1D3334u) {
        ctx->pc = 0x1D3338u;
        goto label_1d3338;
    }
    ctx->pc = 0x1D3330u;
    SET_GPR_U32(ctx, 31, 0x1D3338u);
    ctx->pc = 0x419E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E50u, 0x1D3330u, 0x1D3338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3338u;
label_1d3338:
    // 0x1d3338: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x1d3338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1d333c:
    // 0x1d333c: 0xa06000ec  sb          $zero, 0xEC($v1)
    ctx->pc = 0x1d333cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 236), (uint8_t)GPR_U32(ctx, 0));
label_1d3340:
    // 0x1d3340: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d3340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d3344:
    // 0x1d3344: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d3344u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d3348:
    // 0x1d3348: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d3348u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d334c:
    // 0x1d334c: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x1d334cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1d3350:
    // 0x1d3350: 0x3e00008  jr          $ra
label_1d3354:
    if (ctx->pc == 0x1D3354u) {
        ctx->pc = 0x1D3358u;
        goto label_1d3358;
    }
    ctx->pc = 0x1D3350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3358u;
label_1d3358:
    // 0x1d3358: 0x0  nop
    ctx->pc = 0x1d3358u;
    // NOP
label_1d335c:
    // 0x1d335c: 0x0  nop
    ctx->pc = 0x1d335cu;
    // NOP
label_1d3360:
    // 0x1d3360: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d3360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1d3364:
    // 0x1d3364: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1d3364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_1d3368:
    // 0x1d3368: 0x24427b60  addiu       $v0, $v0, 0x7B60
    ctx->pc = 0x1d3368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31584));
label_1d336c:
    // 0x1d336c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1d336cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1d3370:
    // 0x1d3370: 0x3e00008  jr          $ra
label_1d3374:
    if (ctx->pc == 0x1D3374u) {
        ctx->pc = 0x1D3378u;
        goto label_1d3378;
    }
    ctx->pc = 0x1D3370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3378u;
label_1d3378:
    // 0x1d3378: 0x0  nop
    ctx->pc = 0x1d3378u;
    // NOP
label_1d337c:
    // 0x1d337c: 0x0  nop
    ctx->pc = 0x1d337cu;
    // NOP
label_1d3380:
    // 0x1d3380: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d3380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1d3384:
    // 0x1d3384: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d3384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d3388:
    // 0x1d3388: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1d3388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1d338c:
    // 0x1d338c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1d338cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_1d3390:
    // 0x1d3390: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x1d3390u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1d3394:
    // 0x1d3394: 0xe7ad0040  swc1        $f13, 0x40($sp)
    ctx->pc = 0x1d3394u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1d3398:
    // 0x1d3398: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d3398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d339c:
    // 0x1d339c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1d339cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1d33a0:
    // 0x1d33a0: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x1d33a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d33a4:
    // 0x1d33a4: 0xc7ad0040  lwc1        $f13, 0x40($sp)
    ctx->pc = 0x1d33a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1d33a8:
    // 0x1d33a8: 0xc064e90  jal         func_193A40
label_1d33ac:
    if (ctx->pc == 0x1D33ACu) {
        ctx->pc = 0x1D33B0u;
        goto label_1d33b0;
    }
    ctx->pc = 0x1D33A8u;
    SET_GPR_U32(ctx, 31, 0x1D33B0u);
    ctx->pc = 0x193A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193A40u, 0x1D33A8u, 0x1D33B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D33B0u;
label_1d33b0:
    // 0x1d33b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d33b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d33b4:
    // 0x1d33b4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1d33b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1d33b8:
    // 0x1d33b8: 0x3e00008  jr          $ra
label_1d33bc:
    if (ctx->pc == 0x1D33BCu) {
        ctx->pc = 0x1D33C0u;
        goto label_1d33c0;
    }
    ctx->pc = 0x1D33B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D33B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D33C0u;
label_1d33c0:
    // 0x1d33c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d33c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1d33c4:
    // 0x1d33c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d33c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d33c8:
    // 0x1d33c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1d33c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1d33cc:
    // 0x1d33cc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1d33ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_1d33d0:
    // 0x1d33d0: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x1d33d0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1d33d4:
    // 0x1d33d4: 0xe7ad0040  swc1        $f13, 0x40($sp)
    ctx->pc = 0x1d33d4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1d33d8:
    // 0x1d33d8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d33d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d33dc:
    // 0x1d33dc: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1d33dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1d33e0:
    // 0x1d33e0: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x1d33e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d33e4:
    // 0x1d33e4: 0xc7ad0040  lwc1        $f13, 0x40($sp)
    ctx->pc = 0x1d33e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1d33e8:
    // 0x1d33e8: 0xc064f2c  jal         func_193CB0
label_1d33ec:
    if (ctx->pc == 0x1D33ECu) {
        ctx->pc = 0x1D33F0u;
        goto label_1d33f0;
    }
    ctx->pc = 0x1D33E8u;
    SET_GPR_U32(ctx, 31, 0x1D33F0u);
    ctx->pc = 0x193CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193CB0u, 0x1D33E8u, 0x1D33F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D33F0u;
label_1d33f0:
    // 0x1d33f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d33f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d33f4:
    // 0x1d33f4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1d33f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1d33f8:
    // 0x1d33f8: 0x3e00008  jr          $ra
label_1d33fc:
    if (ctx->pc == 0x1D33FCu) {
        ctx->pc = 0x1D3400u;
        goto label_1d3400;
    }
    ctx->pc = 0x1D33F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D33F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3400u;
label_1d3400:
    // 0x1d3400: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d3400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1d3404:
    // 0x1d3404: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d3404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d3408:
    // 0x1d3408: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1d3408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1d340c:
    // 0x1d340c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1d340cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_1d3410:
    // 0x1d3410: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x1d3410u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1d3414:
    // 0x1d3414: 0xe7ad0040  swc1        $f13, 0x40($sp)
    ctx->pc = 0x1d3414u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1d3418:
    // 0x1d3418: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d3418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d341c:
    // 0x1d341c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1d341cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1d3420:
    // 0x1d3420: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x1d3420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d3424:
    // 0x1d3424: 0xc7ad0040  lwc1        $f13, 0x40($sp)
    ctx->pc = 0x1d3424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1d3428:
    // 0x1d3428: 0xc064ff8  jal         func_193FE0
label_1d342c:
    if (ctx->pc == 0x1D342Cu) {
        ctx->pc = 0x1D3430u;
        goto label_1d3430;
    }
    ctx->pc = 0x1D3428u;
    SET_GPR_U32(ctx, 31, 0x1D3430u);
    ctx->pc = 0x193FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193FE0u, 0x1D3428u, 0x1D3430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3430u;
label_1d3430:
    // 0x1d3430: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d3430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d3434:
    // 0x1d3434: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1d3434u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1d3438:
    // 0x1d3438: 0x3e00008  jr          $ra
label_1d343c:
    if (ctx->pc == 0x1D343Cu) {
        ctx->pc = 0x1D3440u;
        goto label_1d3440;
    }
    ctx->pc = 0x1D3438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3440u;
label_1d3440:
    // 0x1d3440: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d3440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d3444:
    // 0x1d3444: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d3444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d3448:
    // 0x1d3448: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1d3448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1d344c:
    // 0x1d344c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1d344cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_1d3450:
    // 0x1d3450: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d3450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d3454:
    // 0x1d3454: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1d3454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1d3458:
    // 0x1d3458: 0xc0650f0  jal         func_1943C0
label_1d345c:
    if (ctx->pc == 0x1D345Cu) {
        ctx->pc = 0x1D3460u;
        goto label_1d3460;
    }
    ctx->pc = 0x1D3458u;
    SET_GPR_U32(ctx, 31, 0x1D3460u);
    ctx->pc = 0x1943C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1943C0u, 0x1D3458u, 0x1D3460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3460u;
label_1d3460:
    // 0x1d3460: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d3460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d3464:
    // 0x1d3464: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1d3464u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1d3468:
    // 0x1d3468: 0x3e00008  jr          $ra
label_1d346c:
    if (ctx->pc == 0x1D346Cu) {
        ctx->pc = 0x1D3470u;
        goto label_1d3470;
    }
    ctx->pc = 0x1D3468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3470u;
label_1d3470:
    // 0x1d3470: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d3470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d3474:
    // 0x1d3474: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d3474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d3478:
    // 0x1d3478: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1d3478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1d347c:
    // 0x1d347c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1d347cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_1d3480:
    // 0x1d3480: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d3480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d3484:
    // 0x1d3484: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1d3484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1d3488:
    // 0x1d3488: 0xc0650f4  jal         func_1943D0
label_1d348c:
    if (ctx->pc == 0x1D348Cu) {
        ctx->pc = 0x1D3490u;
        goto label_1d3490;
    }
    ctx->pc = 0x1D3488u;
    SET_GPR_U32(ctx, 31, 0x1D3490u);
    ctx->pc = 0x1943D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1943D0u, 0x1D3488u, 0x1D3490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3490u;
label_1d3490:
    // 0x1d3490: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d3490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d3494:
    // 0x1d3494: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1d3494u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1d3498:
    // 0x1d3498: 0x3e00008  jr          $ra
label_1d349c:
    if (ctx->pc == 0x1D349Cu) {
        ctx->pc = 0x1D34A0u;
        goto label_1d34a0;
    }
    ctx->pc = 0x1D3498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D34A0u;
label_1d34a0:
    // 0x1d34a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d34a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d34a4:
    // 0x1d34a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d34a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d34a8:
    // 0x1d34a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1d34a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1d34ac:
    // 0x1d34ac: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x1d34acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
label_1d34b0:
    // 0x1d34b0: 0x93a30020  lbu         $v1, 0x20($sp)
    ctx->pc = 0x1d34b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_1d34b4:
    // 0x1d34b4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1d34b8:
    if (ctx->pc == 0x1D34B8u) {
        ctx->pc = 0x1D34BCu;
        goto label_1d34bc;
    }
    ctx->pc = 0x1D34B4u;
    {
        const bool branch_taken_0x1d34b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d34b4) {
            ctx->pc = 0x1D34CCu;
            goto label_1d34cc;
        }
    }
    ctx->pc = 0x1D34BCu;
label_1d34bc:
    // 0x1d34bc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d34bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d34c0:
    // 0x1d34c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d34c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d34c4:
    // 0x1d34c4: 0xc074d68  jal         func_1D35A0
label_1d34c8:
    if (ctx->pc == 0x1D34C8u) {
        ctx->pc = 0x1D34CCu;
        goto label_1d34cc;
    }
    ctx->pc = 0x1D34C4u;
    SET_GPR_U32(ctx, 31, 0x1D34CCu);
    ctx->pc = 0x1D35A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D35A0u, 0x1D34C4u, 0x1D34CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D34CCu;
label_1d34cc:
    // 0x1d34cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d34ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d34d0:
    // 0x1d34d0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1d34d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1d34d4:
    // 0x1d34d4: 0x3e00008  jr          $ra
label_1d34d8:
    if (ctx->pc == 0x1D34D8u) {
        ctx->pc = 0x1D34DCu;
        goto label_1d34dc;
    }
    ctx->pc = 0x1D34D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D34D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D34DCu;
label_1d34dc:
    // 0x1d34dc: 0x0  nop
    ctx->pc = 0x1d34dcu;
    // NOP
label_1d34e0:
    // 0x1d34e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d34e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d34e4:
    // 0x1d34e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d34e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d34e8:
    // 0x1d34e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1d34e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1d34ec:
    // 0x1d34ec: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x1d34ecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
label_1d34f0:
    // 0x1d34f0: 0x93a30020  lbu         $v1, 0x20($sp)
    ctx->pc = 0x1d34f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_1d34f4:
    // 0x1d34f4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1d34f8:
    if (ctx->pc == 0x1D34F8u) {
        ctx->pc = 0x1D34FCu;
        goto label_1d34fc;
    }
    ctx->pc = 0x1D34F4u;
    {
        const bool branch_taken_0x1d34f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d34f4) {
            ctx->pc = 0x1D350Cu;
            goto label_1d350c;
        }
    }
    ctx->pc = 0x1D34FCu;
label_1d34fc:
    // 0x1d34fc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d34fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d3500:
    // 0x1d3500: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1d3500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d3504:
    // 0x1d3504: 0xc074d68  jal         func_1D35A0
label_1d3508:
    if (ctx->pc == 0x1D3508u) {
        ctx->pc = 0x1D350Cu;
        goto label_1d350c;
    }
    ctx->pc = 0x1D3504u;
    SET_GPR_U32(ctx, 31, 0x1D350Cu);
    ctx->pc = 0x1D35A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D35A0u, 0x1D3504u, 0x1D350Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D350Cu;
label_1d350c:
    // 0x1d350c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d350cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d3510:
    // 0x1d3510: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1d3510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1d3514:
    // 0x1d3514: 0x3e00008  jr          $ra
label_1d3518:
    if (ctx->pc == 0x1D3518u) {
        ctx->pc = 0x1D351Cu;
        goto label_1d351c;
    }
    ctx->pc = 0x1D3514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D351Cu;
label_1d351c:
    // 0x1d351c: 0x0  nop
    ctx->pc = 0x1d351cu;
    // NOP
label_1d3520:
    // 0x1d3520: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d3520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d3524:
    // 0x1d3524: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d3524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d3528:
    // 0x1d3528: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1d3528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1d352c:
    // 0x1d352c: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x1d352cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
label_1d3530:
    // 0x1d3530: 0x93a30020  lbu         $v1, 0x20($sp)
    ctx->pc = 0x1d3530u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_1d3534:
    // 0x1d3534: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1d3538:
    if (ctx->pc == 0x1D3538u) {
        ctx->pc = 0x1D353Cu;
        goto label_1d353c;
    }
    ctx->pc = 0x1D3534u;
    {
        const bool branch_taken_0x1d3534 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3534) {
            ctx->pc = 0x1D354Cu;
            goto label_1d354c;
        }
    }
    ctx->pc = 0x1D353Cu;
label_1d353c:
    // 0x1d353c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d353cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d3540:
    // 0x1d3540: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d3540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d3544:
    // 0x1d3544: 0xc074d68  jal         func_1D35A0
label_1d3548:
    if (ctx->pc == 0x1D3548u) {
        ctx->pc = 0x1D354Cu;
        goto label_1d354c;
    }
    ctx->pc = 0x1D3544u;
    SET_GPR_U32(ctx, 31, 0x1D354Cu);
    ctx->pc = 0x1D35A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D35A0u, 0x1D3544u, 0x1D354Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D354Cu;
label_1d354c:
    // 0x1d354c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d354cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d3550:
    // 0x1d3550: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1d3550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1d3554:
    // 0x1d3554: 0x3e00008  jr          $ra
label_1d3558:
    if (ctx->pc == 0x1D3558u) {
        ctx->pc = 0x1D355Cu;
        goto label_1d355c;
    }
    ctx->pc = 0x1D3554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D355Cu;
label_1d355c:
    // 0x1d355c: 0x0  nop
    ctx->pc = 0x1d355cu;
    // NOP
label_1d3560:
    // 0x1d3560: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d3560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d3564:
    // 0x1d3564: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d3564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d3568:
    // 0x1d3568: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1d3568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1d356c:
    // 0x1d356c: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x1d356cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
label_1d3570:
    // 0x1d3570: 0x93a30020  lbu         $v1, 0x20($sp)
    ctx->pc = 0x1d3570u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_1d3574:
    // 0x1d3574: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1d3578:
    if (ctx->pc == 0x1D3578u) {
        ctx->pc = 0x1D357Cu;
        goto label_1d357c;
    }
    ctx->pc = 0x1D3574u;
    {
        const bool branch_taken_0x1d3574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3574) {
            ctx->pc = 0x1D358Cu;
            goto label_1d358c;
        }
    }
    ctx->pc = 0x1D357Cu;
label_1d357c:
    // 0x1d357c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d357cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d3580:
    // 0x1d3580: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d3580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d3584:
    // 0x1d3584: 0xc074d68  jal         func_1D35A0
label_1d3588:
    if (ctx->pc == 0x1D3588u) {
        ctx->pc = 0x1D358Cu;
        goto label_1d358c;
    }
    ctx->pc = 0x1D3584u;
    SET_GPR_U32(ctx, 31, 0x1D358Cu);
    ctx->pc = 0x1D35A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D35A0u, 0x1D3584u, 0x1D358Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D358Cu;
label_1d358c:
    // 0x1d358c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d358cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d3590:
    // 0x1d3590: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1d3590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1d3594:
    // 0x1d3594: 0x3e00008  jr          $ra
label_1d3598:
    if (ctx->pc == 0x1D3598u) {
        ctx->pc = 0x1D359Cu;
        goto label_1d359c;
    }
    ctx->pc = 0x1D3594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D359Cu;
label_1d359c:
    // 0x1d359c: 0x0  nop
    ctx->pc = 0x1d359cu;
    // NOP
    ctx->pc = 0x1d35a0u;
}
