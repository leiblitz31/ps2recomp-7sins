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

// Function: sub_001649F0
// Address: 0x1649f0 - 0x1653e0
void sub_001649F0_0x1649f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001649F0_0x1649f0");
#endif

    switch (ctx->pc) {
        case 0x1649f0u: goto label_1649f0;
        case 0x1649f4u: goto label_1649f4;
        case 0x1649f8u: goto label_1649f8;
        case 0x1649fcu: goto label_1649fc;
        case 0x164a00u: goto label_164a00;
        case 0x164a04u: goto label_164a04;
        case 0x164a08u: goto label_164a08;
        case 0x164a0cu: goto label_164a0c;
        case 0x164a10u: goto label_164a10;
        case 0x164a14u: goto label_164a14;
        case 0x164a18u: goto label_164a18;
        case 0x164a1cu: goto label_164a1c;
        case 0x164a20u: goto label_164a20;
        case 0x164a24u: goto label_164a24;
        case 0x164a28u: goto label_164a28;
        case 0x164a2cu: goto label_164a2c;
        case 0x164a30u: goto label_164a30;
        case 0x164a34u: goto label_164a34;
        case 0x164a38u: goto label_164a38;
        case 0x164a3cu: goto label_164a3c;
        case 0x164a40u: goto label_164a40;
        case 0x164a44u: goto label_164a44;
        case 0x164a48u: goto label_164a48;
        case 0x164a4cu: goto label_164a4c;
        case 0x164a50u: goto label_164a50;
        case 0x164a54u: goto label_164a54;
        case 0x164a58u: goto label_164a58;
        case 0x164a5cu: goto label_164a5c;
        case 0x164a60u: goto label_164a60;
        case 0x164a64u: goto label_164a64;
        case 0x164a68u: goto label_164a68;
        case 0x164a6cu: goto label_164a6c;
        case 0x164a70u: goto label_164a70;
        case 0x164a74u: goto label_164a74;
        case 0x164a78u: goto label_164a78;
        case 0x164a7cu: goto label_164a7c;
        case 0x164a80u: goto label_164a80;
        case 0x164a84u: goto label_164a84;
        case 0x164a88u: goto label_164a88;
        case 0x164a8cu: goto label_164a8c;
        case 0x164a90u: goto label_164a90;
        case 0x164a94u: goto label_164a94;
        case 0x164a98u: goto label_164a98;
        case 0x164a9cu: goto label_164a9c;
        case 0x164aa0u: goto label_164aa0;
        case 0x164aa4u: goto label_164aa4;
        case 0x164aa8u: goto label_164aa8;
        case 0x164aacu: goto label_164aac;
        case 0x164ab0u: goto label_164ab0;
        case 0x164ab4u: goto label_164ab4;
        case 0x164ab8u: goto label_164ab8;
        case 0x164abcu: goto label_164abc;
        case 0x164ac0u: goto label_164ac0;
        case 0x164ac4u: goto label_164ac4;
        case 0x164ac8u: goto label_164ac8;
        case 0x164accu: goto label_164acc;
        case 0x164ad0u: goto label_164ad0;
        case 0x164ad4u: goto label_164ad4;
        case 0x164ad8u: goto label_164ad8;
        case 0x164adcu: goto label_164adc;
        case 0x164ae0u: goto label_164ae0;
        case 0x164ae4u: goto label_164ae4;
        case 0x164ae8u: goto label_164ae8;
        case 0x164aecu: goto label_164aec;
        case 0x164af0u: goto label_164af0;
        case 0x164af4u: goto label_164af4;
        case 0x164af8u: goto label_164af8;
        case 0x164afcu: goto label_164afc;
        case 0x164b00u: goto label_164b00;
        case 0x164b04u: goto label_164b04;
        case 0x164b08u: goto label_164b08;
        case 0x164b0cu: goto label_164b0c;
        case 0x164b10u: goto label_164b10;
        case 0x164b14u: goto label_164b14;
        case 0x164b18u: goto label_164b18;
        case 0x164b1cu: goto label_164b1c;
        case 0x164b20u: goto label_164b20;
        case 0x164b24u: goto label_164b24;
        case 0x164b28u: goto label_164b28;
        case 0x164b2cu: goto label_164b2c;
        case 0x164b30u: goto label_164b30;
        case 0x164b34u: goto label_164b34;
        case 0x164b38u: goto label_164b38;
        case 0x164b3cu: goto label_164b3c;
        case 0x164b40u: goto label_164b40;
        case 0x164b44u: goto label_164b44;
        case 0x164b48u: goto label_164b48;
        case 0x164b4cu: goto label_164b4c;
        case 0x164b50u: goto label_164b50;
        case 0x164b54u: goto label_164b54;
        case 0x164b58u: goto label_164b58;
        case 0x164b5cu: goto label_164b5c;
        case 0x164b60u: goto label_164b60;
        case 0x164b64u: goto label_164b64;
        case 0x164b68u: goto label_164b68;
        case 0x164b6cu: goto label_164b6c;
        case 0x164b70u: goto label_164b70;
        case 0x164b74u: goto label_164b74;
        case 0x164b78u: goto label_164b78;
        case 0x164b7cu: goto label_164b7c;
        case 0x164b80u: goto label_164b80;
        case 0x164b84u: goto label_164b84;
        case 0x164b88u: goto label_164b88;
        case 0x164b8cu: goto label_164b8c;
        case 0x164b90u: goto label_164b90;
        case 0x164b94u: goto label_164b94;
        case 0x164b98u: goto label_164b98;
        case 0x164b9cu: goto label_164b9c;
        case 0x164ba0u: goto label_164ba0;
        case 0x164ba4u: goto label_164ba4;
        case 0x164ba8u: goto label_164ba8;
        case 0x164bacu: goto label_164bac;
        case 0x164bb0u: goto label_164bb0;
        case 0x164bb4u: goto label_164bb4;
        case 0x164bb8u: goto label_164bb8;
        case 0x164bbcu: goto label_164bbc;
        case 0x164bc0u: goto label_164bc0;
        case 0x164bc4u: goto label_164bc4;
        case 0x164bc8u: goto label_164bc8;
        case 0x164bccu: goto label_164bcc;
        case 0x164bd0u: goto label_164bd0;
        case 0x164bd4u: goto label_164bd4;
        case 0x164bd8u: goto label_164bd8;
        case 0x164bdcu: goto label_164bdc;
        case 0x164be0u: goto label_164be0;
        case 0x164be4u: goto label_164be4;
        case 0x164be8u: goto label_164be8;
        case 0x164becu: goto label_164bec;
        case 0x164bf0u: goto label_164bf0;
        case 0x164bf4u: goto label_164bf4;
        case 0x164bf8u: goto label_164bf8;
        case 0x164bfcu: goto label_164bfc;
        case 0x164c00u: goto label_164c00;
        case 0x164c04u: goto label_164c04;
        case 0x164c08u: goto label_164c08;
        case 0x164c0cu: goto label_164c0c;
        case 0x164c10u: goto label_164c10;
        case 0x164c14u: goto label_164c14;
        case 0x164c18u: goto label_164c18;
        case 0x164c1cu: goto label_164c1c;
        case 0x164c20u: goto label_164c20;
        case 0x164c24u: goto label_164c24;
        case 0x164c28u: goto label_164c28;
        case 0x164c2cu: goto label_164c2c;
        case 0x164c30u: goto label_164c30;
        case 0x164c34u: goto label_164c34;
        case 0x164c38u: goto label_164c38;
        case 0x164c3cu: goto label_164c3c;
        case 0x164c40u: goto label_164c40;
        case 0x164c44u: goto label_164c44;
        case 0x164c48u: goto label_164c48;
        case 0x164c4cu: goto label_164c4c;
        case 0x164c50u: goto label_164c50;
        case 0x164c54u: goto label_164c54;
        case 0x164c58u: goto label_164c58;
        case 0x164c5cu: goto label_164c5c;
        case 0x164c60u: goto label_164c60;
        case 0x164c64u: goto label_164c64;
        case 0x164c68u: goto label_164c68;
        case 0x164c6cu: goto label_164c6c;
        case 0x164c70u: goto label_164c70;
        case 0x164c74u: goto label_164c74;
        case 0x164c78u: goto label_164c78;
        case 0x164c7cu: goto label_164c7c;
        case 0x164c80u: goto label_164c80;
        case 0x164c84u: goto label_164c84;
        case 0x164c88u: goto label_164c88;
        case 0x164c8cu: goto label_164c8c;
        case 0x164c90u: goto label_164c90;
        case 0x164c94u: goto label_164c94;
        case 0x164c98u: goto label_164c98;
        case 0x164c9cu: goto label_164c9c;
        case 0x164ca0u: goto label_164ca0;
        case 0x164ca4u: goto label_164ca4;
        case 0x164ca8u: goto label_164ca8;
        case 0x164cacu: goto label_164cac;
        case 0x164cb0u: goto label_164cb0;
        case 0x164cb4u: goto label_164cb4;
        case 0x164cb8u: goto label_164cb8;
        case 0x164cbcu: goto label_164cbc;
        case 0x164cc0u: goto label_164cc0;
        case 0x164cc4u: goto label_164cc4;
        case 0x164cc8u: goto label_164cc8;
        case 0x164cccu: goto label_164ccc;
        case 0x164cd0u: goto label_164cd0;
        case 0x164cd4u: goto label_164cd4;
        case 0x164cd8u: goto label_164cd8;
        case 0x164cdcu: goto label_164cdc;
        case 0x164ce0u: goto label_164ce0;
        case 0x164ce4u: goto label_164ce4;
        case 0x164ce8u: goto label_164ce8;
        case 0x164cecu: goto label_164cec;
        case 0x164cf0u: goto label_164cf0;
        case 0x164cf4u: goto label_164cf4;
        case 0x164cf8u: goto label_164cf8;
        case 0x164cfcu: goto label_164cfc;
        case 0x164d00u: goto label_164d00;
        case 0x164d04u: goto label_164d04;
        case 0x164d08u: goto label_164d08;
        case 0x164d0cu: goto label_164d0c;
        case 0x164d10u: goto label_164d10;
        case 0x164d14u: goto label_164d14;
        case 0x164d18u: goto label_164d18;
        case 0x164d1cu: goto label_164d1c;
        case 0x164d20u: goto label_164d20;
        case 0x164d24u: goto label_164d24;
        case 0x164d28u: goto label_164d28;
        case 0x164d2cu: goto label_164d2c;
        case 0x164d30u: goto label_164d30;
        case 0x164d34u: goto label_164d34;
        case 0x164d38u: goto label_164d38;
        case 0x164d3cu: goto label_164d3c;
        case 0x164d40u: goto label_164d40;
        case 0x164d44u: goto label_164d44;
        case 0x164d48u: goto label_164d48;
        case 0x164d4cu: goto label_164d4c;
        case 0x164d50u: goto label_164d50;
        case 0x164d54u: goto label_164d54;
        case 0x164d58u: goto label_164d58;
        case 0x164d5cu: goto label_164d5c;
        case 0x164d60u: goto label_164d60;
        case 0x164d64u: goto label_164d64;
        case 0x164d68u: goto label_164d68;
        case 0x164d6cu: goto label_164d6c;
        case 0x164d70u: goto label_164d70;
        case 0x164d74u: goto label_164d74;
        case 0x164d78u: goto label_164d78;
        case 0x164d7cu: goto label_164d7c;
        case 0x164d80u: goto label_164d80;
        case 0x164d84u: goto label_164d84;
        case 0x164d88u: goto label_164d88;
        case 0x164d8cu: goto label_164d8c;
        case 0x164d90u: goto label_164d90;
        case 0x164d94u: goto label_164d94;
        case 0x164d98u: goto label_164d98;
        case 0x164d9cu: goto label_164d9c;
        case 0x164da0u: goto label_164da0;
        case 0x164da4u: goto label_164da4;
        case 0x164da8u: goto label_164da8;
        case 0x164dacu: goto label_164dac;
        case 0x164db0u: goto label_164db0;
        case 0x164db4u: goto label_164db4;
        case 0x164db8u: goto label_164db8;
        case 0x164dbcu: goto label_164dbc;
        case 0x164dc0u: goto label_164dc0;
        case 0x164dc4u: goto label_164dc4;
        case 0x164dc8u: goto label_164dc8;
        case 0x164dccu: goto label_164dcc;
        case 0x164dd0u: goto label_164dd0;
        case 0x164dd4u: goto label_164dd4;
        case 0x164dd8u: goto label_164dd8;
        case 0x164ddcu: goto label_164ddc;
        case 0x164de0u: goto label_164de0;
        case 0x164de4u: goto label_164de4;
        case 0x164de8u: goto label_164de8;
        case 0x164decu: goto label_164dec;
        case 0x164df0u: goto label_164df0;
        case 0x164df4u: goto label_164df4;
        case 0x164df8u: goto label_164df8;
        case 0x164dfcu: goto label_164dfc;
        case 0x164e00u: goto label_164e00;
        case 0x164e04u: goto label_164e04;
        case 0x164e08u: goto label_164e08;
        case 0x164e0cu: goto label_164e0c;
        case 0x164e10u: goto label_164e10;
        case 0x164e14u: goto label_164e14;
        case 0x164e18u: goto label_164e18;
        case 0x164e1cu: goto label_164e1c;
        case 0x164e20u: goto label_164e20;
        case 0x164e24u: goto label_164e24;
        case 0x164e28u: goto label_164e28;
        case 0x164e2cu: goto label_164e2c;
        case 0x164e30u: goto label_164e30;
        case 0x164e34u: goto label_164e34;
        case 0x164e38u: goto label_164e38;
        case 0x164e3cu: goto label_164e3c;
        case 0x164e40u: goto label_164e40;
        case 0x164e44u: goto label_164e44;
        case 0x164e48u: goto label_164e48;
        case 0x164e4cu: goto label_164e4c;
        case 0x164e50u: goto label_164e50;
        case 0x164e54u: goto label_164e54;
        case 0x164e58u: goto label_164e58;
        case 0x164e5cu: goto label_164e5c;
        case 0x164e60u: goto label_164e60;
        case 0x164e64u: goto label_164e64;
        case 0x164e68u: goto label_164e68;
        case 0x164e6cu: goto label_164e6c;
        case 0x164e70u: goto label_164e70;
        case 0x164e74u: goto label_164e74;
        case 0x164e78u: goto label_164e78;
        case 0x164e7cu: goto label_164e7c;
        case 0x164e80u: goto label_164e80;
        case 0x164e84u: goto label_164e84;
        case 0x164e88u: goto label_164e88;
        case 0x164e8cu: goto label_164e8c;
        case 0x164e90u: goto label_164e90;
        case 0x164e94u: goto label_164e94;
        case 0x164e98u: goto label_164e98;
        case 0x164e9cu: goto label_164e9c;
        case 0x164ea0u: goto label_164ea0;
        case 0x164ea4u: goto label_164ea4;
        case 0x164ea8u: goto label_164ea8;
        case 0x164eacu: goto label_164eac;
        case 0x164eb0u: goto label_164eb0;
        case 0x164eb4u: goto label_164eb4;
        case 0x164eb8u: goto label_164eb8;
        case 0x164ebcu: goto label_164ebc;
        case 0x164ec0u: goto label_164ec0;
        case 0x164ec4u: goto label_164ec4;
        case 0x164ec8u: goto label_164ec8;
        case 0x164eccu: goto label_164ecc;
        case 0x164ed0u: goto label_164ed0;
        case 0x164ed4u: goto label_164ed4;
        case 0x164ed8u: goto label_164ed8;
        case 0x164edcu: goto label_164edc;
        case 0x164ee0u: goto label_164ee0;
        case 0x164ee4u: goto label_164ee4;
        case 0x164ee8u: goto label_164ee8;
        case 0x164eecu: goto label_164eec;
        case 0x164ef0u: goto label_164ef0;
        case 0x164ef4u: goto label_164ef4;
        case 0x164ef8u: goto label_164ef8;
        case 0x164efcu: goto label_164efc;
        case 0x164f00u: goto label_164f00;
        case 0x164f04u: goto label_164f04;
        case 0x164f08u: goto label_164f08;
        case 0x164f0cu: goto label_164f0c;
        case 0x164f10u: goto label_164f10;
        case 0x164f14u: goto label_164f14;
        case 0x164f18u: goto label_164f18;
        case 0x164f1cu: goto label_164f1c;
        case 0x164f20u: goto label_164f20;
        case 0x164f24u: goto label_164f24;
        case 0x164f28u: goto label_164f28;
        case 0x164f2cu: goto label_164f2c;
        case 0x164f30u: goto label_164f30;
        case 0x164f34u: goto label_164f34;
        case 0x164f38u: goto label_164f38;
        case 0x164f3cu: goto label_164f3c;
        case 0x164f40u: goto label_164f40;
        case 0x164f44u: goto label_164f44;
        case 0x164f48u: goto label_164f48;
        case 0x164f4cu: goto label_164f4c;
        case 0x164f50u: goto label_164f50;
        case 0x164f54u: goto label_164f54;
        case 0x164f58u: goto label_164f58;
        case 0x164f5cu: goto label_164f5c;
        case 0x164f60u: goto label_164f60;
        case 0x164f64u: goto label_164f64;
        case 0x164f68u: goto label_164f68;
        case 0x164f6cu: goto label_164f6c;
        case 0x164f70u: goto label_164f70;
        case 0x164f74u: goto label_164f74;
        case 0x164f78u: goto label_164f78;
        case 0x164f7cu: goto label_164f7c;
        case 0x164f80u: goto label_164f80;
        case 0x164f84u: goto label_164f84;
        case 0x164f88u: goto label_164f88;
        case 0x164f8cu: goto label_164f8c;
        case 0x164f90u: goto label_164f90;
        case 0x164f94u: goto label_164f94;
        case 0x164f98u: goto label_164f98;
        case 0x164f9cu: goto label_164f9c;
        case 0x164fa0u: goto label_164fa0;
        case 0x164fa4u: goto label_164fa4;
        case 0x164fa8u: goto label_164fa8;
        case 0x164facu: goto label_164fac;
        case 0x164fb0u: goto label_164fb0;
        case 0x164fb4u: goto label_164fb4;
        case 0x164fb8u: goto label_164fb8;
        case 0x164fbcu: goto label_164fbc;
        case 0x164fc0u: goto label_164fc0;
        case 0x164fc4u: goto label_164fc4;
        case 0x164fc8u: goto label_164fc8;
        case 0x164fccu: goto label_164fcc;
        case 0x164fd0u: goto label_164fd0;
        case 0x164fd4u: goto label_164fd4;
        case 0x164fd8u: goto label_164fd8;
        case 0x164fdcu: goto label_164fdc;
        case 0x164fe0u: goto label_164fe0;
        case 0x164fe4u: goto label_164fe4;
        case 0x164fe8u: goto label_164fe8;
        case 0x164fecu: goto label_164fec;
        case 0x164ff0u: goto label_164ff0;
        case 0x164ff4u: goto label_164ff4;
        case 0x164ff8u: goto label_164ff8;
        case 0x164ffcu: goto label_164ffc;
        case 0x165000u: goto label_165000;
        case 0x165004u: goto label_165004;
        case 0x165008u: goto label_165008;
        case 0x16500cu: goto label_16500c;
        case 0x165010u: goto label_165010;
        case 0x165014u: goto label_165014;
        case 0x165018u: goto label_165018;
        case 0x16501cu: goto label_16501c;
        case 0x165020u: goto label_165020;
        case 0x165024u: goto label_165024;
        case 0x165028u: goto label_165028;
        case 0x16502cu: goto label_16502c;
        case 0x165030u: goto label_165030;
        case 0x165034u: goto label_165034;
        case 0x165038u: goto label_165038;
        case 0x16503cu: goto label_16503c;
        case 0x165040u: goto label_165040;
        case 0x165044u: goto label_165044;
        case 0x165048u: goto label_165048;
        case 0x16504cu: goto label_16504c;
        case 0x165050u: goto label_165050;
        case 0x165054u: goto label_165054;
        case 0x165058u: goto label_165058;
        case 0x16505cu: goto label_16505c;
        case 0x165060u: goto label_165060;
        case 0x165064u: goto label_165064;
        case 0x165068u: goto label_165068;
        case 0x16506cu: goto label_16506c;
        case 0x165070u: goto label_165070;
        case 0x165074u: goto label_165074;
        case 0x165078u: goto label_165078;
        case 0x16507cu: goto label_16507c;
        case 0x165080u: goto label_165080;
        case 0x165084u: goto label_165084;
        case 0x165088u: goto label_165088;
        case 0x16508cu: goto label_16508c;
        case 0x165090u: goto label_165090;
        case 0x165094u: goto label_165094;
        case 0x165098u: goto label_165098;
        case 0x16509cu: goto label_16509c;
        case 0x1650a0u: goto label_1650a0;
        case 0x1650a4u: goto label_1650a4;
        case 0x1650a8u: goto label_1650a8;
        case 0x1650acu: goto label_1650ac;
        case 0x1650b0u: goto label_1650b0;
        case 0x1650b4u: goto label_1650b4;
        case 0x1650b8u: goto label_1650b8;
        case 0x1650bcu: goto label_1650bc;
        case 0x1650c0u: goto label_1650c0;
        case 0x1650c4u: goto label_1650c4;
        case 0x1650c8u: goto label_1650c8;
        case 0x1650ccu: goto label_1650cc;
        case 0x1650d0u: goto label_1650d0;
        case 0x1650d4u: goto label_1650d4;
        case 0x1650d8u: goto label_1650d8;
        case 0x1650dcu: goto label_1650dc;
        case 0x1650e0u: goto label_1650e0;
        case 0x1650e4u: goto label_1650e4;
        case 0x1650e8u: goto label_1650e8;
        case 0x1650ecu: goto label_1650ec;
        case 0x1650f0u: goto label_1650f0;
        case 0x1650f4u: goto label_1650f4;
        case 0x1650f8u: goto label_1650f8;
        case 0x1650fcu: goto label_1650fc;
        case 0x165100u: goto label_165100;
        case 0x165104u: goto label_165104;
        case 0x165108u: goto label_165108;
        case 0x16510cu: goto label_16510c;
        case 0x165110u: goto label_165110;
        case 0x165114u: goto label_165114;
        case 0x165118u: goto label_165118;
        case 0x16511cu: goto label_16511c;
        case 0x165120u: goto label_165120;
        case 0x165124u: goto label_165124;
        case 0x165128u: goto label_165128;
        case 0x16512cu: goto label_16512c;
        case 0x165130u: goto label_165130;
        case 0x165134u: goto label_165134;
        case 0x165138u: goto label_165138;
        case 0x16513cu: goto label_16513c;
        case 0x165140u: goto label_165140;
        case 0x165144u: goto label_165144;
        case 0x165148u: goto label_165148;
        case 0x16514cu: goto label_16514c;
        case 0x165150u: goto label_165150;
        case 0x165154u: goto label_165154;
        case 0x165158u: goto label_165158;
        case 0x16515cu: goto label_16515c;
        case 0x165160u: goto label_165160;
        case 0x165164u: goto label_165164;
        case 0x165168u: goto label_165168;
        case 0x16516cu: goto label_16516c;
        case 0x165170u: goto label_165170;
        case 0x165174u: goto label_165174;
        case 0x165178u: goto label_165178;
        case 0x16517cu: goto label_16517c;
        case 0x165180u: goto label_165180;
        case 0x165184u: goto label_165184;
        case 0x165188u: goto label_165188;
        case 0x16518cu: goto label_16518c;
        case 0x165190u: goto label_165190;
        case 0x165194u: goto label_165194;
        case 0x165198u: goto label_165198;
        case 0x16519cu: goto label_16519c;
        case 0x1651a0u: goto label_1651a0;
        case 0x1651a4u: goto label_1651a4;
        case 0x1651a8u: goto label_1651a8;
        case 0x1651acu: goto label_1651ac;
        case 0x1651b0u: goto label_1651b0;
        case 0x1651b4u: goto label_1651b4;
        case 0x1651b8u: goto label_1651b8;
        case 0x1651bcu: goto label_1651bc;
        case 0x1651c0u: goto label_1651c0;
        case 0x1651c4u: goto label_1651c4;
        case 0x1651c8u: goto label_1651c8;
        case 0x1651ccu: goto label_1651cc;
        case 0x1651d0u: goto label_1651d0;
        case 0x1651d4u: goto label_1651d4;
        case 0x1651d8u: goto label_1651d8;
        case 0x1651dcu: goto label_1651dc;
        case 0x1651e0u: goto label_1651e0;
        case 0x1651e4u: goto label_1651e4;
        case 0x1651e8u: goto label_1651e8;
        case 0x1651ecu: goto label_1651ec;
        case 0x1651f0u: goto label_1651f0;
        case 0x1651f4u: goto label_1651f4;
        case 0x1651f8u: goto label_1651f8;
        case 0x1651fcu: goto label_1651fc;
        case 0x165200u: goto label_165200;
        case 0x165204u: goto label_165204;
        case 0x165208u: goto label_165208;
        case 0x16520cu: goto label_16520c;
        case 0x165210u: goto label_165210;
        case 0x165214u: goto label_165214;
        case 0x165218u: goto label_165218;
        case 0x16521cu: goto label_16521c;
        case 0x165220u: goto label_165220;
        case 0x165224u: goto label_165224;
        case 0x165228u: goto label_165228;
        case 0x16522cu: goto label_16522c;
        case 0x165230u: goto label_165230;
        case 0x165234u: goto label_165234;
        case 0x165238u: goto label_165238;
        case 0x16523cu: goto label_16523c;
        case 0x165240u: goto label_165240;
        case 0x165244u: goto label_165244;
        case 0x165248u: goto label_165248;
        case 0x16524cu: goto label_16524c;
        case 0x165250u: goto label_165250;
        case 0x165254u: goto label_165254;
        case 0x165258u: goto label_165258;
        case 0x16525cu: goto label_16525c;
        case 0x165260u: goto label_165260;
        case 0x165264u: goto label_165264;
        case 0x165268u: goto label_165268;
        case 0x16526cu: goto label_16526c;
        case 0x165270u: goto label_165270;
        case 0x165274u: goto label_165274;
        case 0x165278u: goto label_165278;
        case 0x16527cu: goto label_16527c;
        case 0x165280u: goto label_165280;
        case 0x165284u: goto label_165284;
        case 0x165288u: goto label_165288;
        case 0x16528cu: goto label_16528c;
        case 0x165290u: goto label_165290;
        case 0x165294u: goto label_165294;
        case 0x165298u: goto label_165298;
        case 0x16529cu: goto label_16529c;
        case 0x1652a0u: goto label_1652a0;
        case 0x1652a4u: goto label_1652a4;
        case 0x1652a8u: goto label_1652a8;
        case 0x1652acu: goto label_1652ac;
        case 0x1652b0u: goto label_1652b0;
        case 0x1652b4u: goto label_1652b4;
        case 0x1652b8u: goto label_1652b8;
        case 0x1652bcu: goto label_1652bc;
        case 0x1652c0u: goto label_1652c0;
        case 0x1652c4u: goto label_1652c4;
        case 0x1652c8u: goto label_1652c8;
        case 0x1652ccu: goto label_1652cc;
        case 0x1652d0u: goto label_1652d0;
        case 0x1652d4u: goto label_1652d4;
        case 0x1652d8u: goto label_1652d8;
        case 0x1652dcu: goto label_1652dc;
        case 0x1652e0u: goto label_1652e0;
        case 0x1652e4u: goto label_1652e4;
        case 0x1652e8u: goto label_1652e8;
        case 0x1652ecu: goto label_1652ec;
        case 0x1652f0u: goto label_1652f0;
        case 0x1652f4u: goto label_1652f4;
        case 0x1652f8u: goto label_1652f8;
        case 0x1652fcu: goto label_1652fc;
        case 0x165300u: goto label_165300;
        case 0x165304u: goto label_165304;
        case 0x165308u: goto label_165308;
        case 0x16530cu: goto label_16530c;
        case 0x165310u: goto label_165310;
        case 0x165314u: goto label_165314;
        case 0x165318u: goto label_165318;
        case 0x16531cu: goto label_16531c;
        case 0x165320u: goto label_165320;
        case 0x165324u: goto label_165324;
        case 0x165328u: goto label_165328;
        case 0x16532cu: goto label_16532c;
        case 0x165330u: goto label_165330;
        case 0x165334u: goto label_165334;
        case 0x165338u: goto label_165338;
        case 0x16533cu: goto label_16533c;
        case 0x165340u: goto label_165340;
        case 0x165344u: goto label_165344;
        case 0x165348u: goto label_165348;
        case 0x16534cu: goto label_16534c;
        case 0x165350u: goto label_165350;
        case 0x165354u: goto label_165354;
        case 0x165358u: goto label_165358;
        case 0x16535cu: goto label_16535c;
        case 0x165360u: goto label_165360;
        case 0x165364u: goto label_165364;
        case 0x165368u: goto label_165368;
        case 0x16536cu: goto label_16536c;
        case 0x165370u: goto label_165370;
        case 0x165374u: goto label_165374;
        case 0x165378u: goto label_165378;
        case 0x16537cu: goto label_16537c;
        case 0x165380u: goto label_165380;
        case 0x165384u: goto label_165384;
        case 0x165388u: goto label_165388;
        case 0x16538cu: goto label_16538c;
        case 0x165390u: goto label_165390;
        case 0x165394u: goto label_165394;
        case 0x165398u: goto label_165398;
        case 0x16539cu: goto label_16539c;
        case 0x1653a0u: goto label_1653a0;
        case 0x1653a4u: goto label_1653a4;
        case 0x1653a8u: goto label_1653a8;
        case 0x1653acu: goto label_1653ac;
        case 0x1653b0u: goto label_1653b0;
        case 0x1653b4u: goto label_1653b4;
        case 0x1653b8u: goto label_1653b8;
        case 0x1653bcu: goto label_1653bc;
        case 0x1653c0u: goto label_1653c0;
        case 0x1653c4u: goto label_1653c4;
        case 0x1653c8u: goto label_1653c8;
        case 0x1653ccu: goto label_1653cc;
        case 0x1653d0u: goto label_1653d0;
        case 0x1653d4u: goto label_1653d4;
        case 0x1653d8u: goto label_1653d8;
        case 0x1653dcu: goto label_1653dc;
        default: break;
    }

    ctx->pc = 0x1649f0u;

label_1649f0:
    // 0x1649f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1649f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1649f4:
    // 0x1649f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1649f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1649f8:
    // 0x1649f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1649f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1649fc:
    // 0x1649fc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1649fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_164a00:
    // 0x164a00: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x164a00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_164a04:
    // 0x164a04: 0xc0557e8  jal         func_155FA0
label_164a08:
    if (ctx->pc == 0x164A08u) {
        ctx->pc = 0x164A0Cu;
        goto label_164a0c;
    }
    ctx->pc = 0x164A04u;
    SET_GPR_U32(ctx, 31, 0x164A0Cu);
    ctx->pc = 0x155FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155FA0u, 0x164A04u, 0x164A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164A0Cu;
label_164a0c:
    // 0x164a0c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x164a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_164a10:
    // 0x164a10: 0x24633b30  addiu       $v1, $v1, 0x3B30
    ctx->pc = 0x164a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15152));
label_164a14:
    // 0x164a14: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x164a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_164a18:
    // 0x164a18: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x164a18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_164a1c:
    // 0x164a1c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x164a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_164a20:
    // 0x164a20: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x164a20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
label_164a24:
    // 0x164a24: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x164a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_164a28:
    // 0x164a28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x164a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_164a2c:
    // 0x164a2c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x164a2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_164a30:
    // 0x164a30: 0x3e00008  jr          $ra
label_164a34:
    if (ctx->pc == 0x164A34u) {
        ctx->pc = 0x164A38u;
        goto label_164a38;
    }
    ctx->pc = 0x164A30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164A30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164A38u;
label_164a38:
    // 0x164a38: 0x0  nop
    ctx->pc = 0x164a38u;
    // NOP
label_164a3c:
    // 0x164a3c: 0x0  nop
    ctx->pc = 0x164a3cu;
    // NOP
label_164a40:
    // 0x164a40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x164a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_164a44:
    // 0x164a44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x164a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_164a48:
    // 0x164a48: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x164a48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_164a4c:
    // 0x164a4c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x164a4cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
label_164a50:
    // 0x164a50: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x164a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_164a54:
    // 0x164a54: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_164a58:
    if (ctx->pc == 0x164A58u) {
        ctx->pc = 0x164A5Cu;
        goto label_164a5c;
    }
    ctx->pc = 0x164A54u;
    {
        const bool branch_taken_0x164a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164a54) {
            ctx->pc = 0x164A9Cu;
            goto label_164a9c;
        }
    }
    ctx->pc = 0x164A5Cu;
label_164a5c:
    // 0x164a5c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x164a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_164a60:
    // 0x164a60: 0x24633b30  addiu       $v1, $v1, 0x3B30
    ctx->pc = 0x164a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15152));
label_164a64:
    // 0x164a64: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x164a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_164a68:
    // 0x164a68: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x164a68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_164a6c:
    // 0x164a6c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x164a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_164a70:
    // 0x164a70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x164a70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_164a74:
    // 0x164a74: 0xc055950  jal         func_156540
label_164a78:
    if (ctx->pc == 0x164A78u) {
        ctx->pc = 0x164A7Cu;
        goto label_164a7c;
    }
    ctx->pc = 0x164A74u;
    SET_GPR_U32(ctx, 31, 0x164A7Cu);
    ctx->pc = 0x156540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156540u, 0x164A74u, 0x164A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164A7Cu;
label_164a7c:
    // 0x164a7c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x164a7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_164a80:
    // 0x164a80: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x164a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_164a84:
    // 0x164a84: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x164a84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_164a88:
    // 0x164a88: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_164a8c:
    if (ctx->pc == 0x164A8Cu) {
        ctx->pc = 0x164A90u;
        goto label_164a90;
    }
    ctx->pc = 0x164A88u;
    {
        const bool branch_taken_0x164a88 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x164a88) {
            ctx->pc = 0x164A9Cu;
            goto label_164a9c;
        }
    }
    ctx->pc = 0x164A90u;
label_164a90:
    // 0x164a90: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x164a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_164a94:
    // 0x164a94: 0xc0ba070  jal         func_2E81C0
label_164a98:
    if (ctx->pc == 0x164A98u) {
        ctx->pc = 0x164A9Cu;
        goto label_164a9c;
    }
    ctx->pc = 0x164A94u;
    SET_GPR_U32(ctx, 31, 0x164A9Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x164A94u, 0x164A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164A9Cu;
label_164a9c:
    // 0x164a9c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x164a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_164aa0:
    // 0x164aa0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x164aa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_164aa4:
    // 0x164aa4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x164aa4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_164aa8:
    // 0x164aa8: 0x3e00008  jr          $ra
label_164aac:
    if (ctx->pc == 0x164AACu) {
        ctx->pc = 0x164AB0u;
        goto label_164ab0;
    }
    ctx->pc = 0x164AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164AA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164AB0u;
label_164ab0:
    // 0x164ab0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x164ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_164ab4:
    // 0x164ab4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x164ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_164ab8:
    // 0x164ab8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x164ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_164abc:
    // 0x164abc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x164abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_164ac0:
    // 0x164ac0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x164ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_164ac4:
    // 0x164ac4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x164ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_164ac8:
    // 0x164ac8: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x164ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
label_164acc:
    // 0x164acc: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x164accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_164ad0:
    // 0x164ad0: 0xc055974  jal         func_1565D0
label_164ad4:
    if (ctx->pc == 0x164AD4u) {
        ctx->pc = 0x164AD8u;
        goto label_164ad8;
    }
    ctx->pc = 0x164AD0u;
    SET_GPR_U32(ctx, 31, 0x164AD8u);
    ctx->pc = 0x1565D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1565D0u, 0x164AD0u, 0x164AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164AD8u;
label_164ad8:
    // 0x164ad8: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x164ad8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_164adc:
    // 0x164adc: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x164adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_164ae0:
    // 0x164ae0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x164ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_164ae4:
    // 0x164ae4: 0x146200c2  bne         $v1, $v0, . + 4 + (0xC2 << 2)
label_164ae8:
    if (ctx->pc == 0x164AE8u) {
        ctx->pc = 0x164AECu;
        goto label_164aec;
    }
    ctx->pc = 0x164AE4u;
    {
        const bool branch_taken_0x164ae4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x164ae4) {
            ctx->pc = 0x164DF0u;
            goto label_164df0;
        }
    }
    ctx->pc = 0x164AECu;
label_164aec:
    // 0x164aec: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x164aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_164af0:
    // 0x164af0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x164af0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_164af4:
    // 0x164af4: 0x24a53a50  addiu       $a1, $a1, 0x3A50
    ctx->pc = 0x164af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14928));
label_164af8:
    // 0x164af8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x164af8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_164afc:
    // 0x164afc: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x164afcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_164b00:
    // 0x164b00: 0x320f809  jalr        $t9
label_164b04:
    if (ctx->pc == 0x164B04u) {
        ctx->pc = 0x164B08u;
        goto label_164b08;
    }
    ctx->pc = 0x164B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x164B08u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164B00u, 0x164B08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x164B08u;
label_164b08:
    // 0x164b08: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x164b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_164b0c:
    // 0x164b0c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x164b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_164b10:
    // 0x164b10: 0x24a53a70  addiu       $a1, $a1, 0x3A70
    ctx->pc = 0x164b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14960));
label_164b14:
    // 0x164b14: 0xc05621c  jal         func_158870
label_164b18:
    if (ctx->pc == 0x164B18u) {
        ctx->pc = 0x164B1Cu;
        goto label_164b1c;
    }
    ctx->pc = 0x164B14u;
    SET_GPR_U32(ctx, 31, 0x164B1Cu);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x164B14u, 0x164B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164B1Cu;
label_164b1c:
    // 0x164b1c: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x164b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_164b20:
    // 0x164b20: 0xac620050  sw          $v0, 0x50($v1)
    ctx->pc = 0x164b20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 2));
label_164b24:
    // 0x164b24: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x164b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_164b28:
    // 0x164b28: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x164b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_164b2c:
    // 0x164b2c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_164b30:
    if (ctx->pc == 0x164B30u) {
        ctx->pc = 0x164B34u;
        goto label_164b34;
    }
    ctx->pc = 0x164B2Cu;
    {
        const bool branch_taken_0x164b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164b2c) {
            ctx->pc = 0x164B50u;
            goto label_164b50;
        }
    }
    ctx->pc = 0x164B34u;
label_164b34:
    // 0x164b34: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x164b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_164b38:
    // 0x164b38: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x164b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_164b3c:
    // 0x164b3c: 0x8c450050  lw          $a1, 0x50($v0)
    ctx->pc = 0x164b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_164b40:
    // 0x164b40: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x164b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_164b44:
    // 0x164b44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x164b44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_164b48:
    // 0x164b48: 0xc08c8dc  jal         func_232370
label_164b4c:
    if (ctx->pc == 0x164B4Cu) {
        ctx->pc = 0x164B50u;
        goto label_164b50;
    }
    ctx->pc = 0x164B48u;
    SET_GPR_U32(ctx, 31, 0x164B50u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x164B48u, 0x164B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164B50u;
label_164b50:
    // 0x164b50: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x164b50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_164b54:
    // 0x164b54: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x164b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_164b58:
    // 0x164b58: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x164b58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_164b5c:
    // 0x164b5c: 0x24a53a80  addiu       $a1, $a1, 0x3A80
    ctx->pc = 0x164b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14976));
label_164b60:
    // 0x164b60: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x164b60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_164b64:
    // 0x164b64: 0xc0bc3e2  jal         func_2F0F88
label_164b68:
    if (ctx->pc == 0x164B68u) {
        ctx->pc = 0x164B6Cu;
        goto label_164b6c;
    }
    ctx->pc = 0x164B64u;
    SET_GPR_U32(ctx, 31, 0x164B6Cu);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x164B64u, 0x164B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164B6Cu;
label_164b6c:
    // 0x164b6c: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x164b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_164b70:
    // 0x164b70: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x164b70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_164b74:
    // 0x164b74: 0xc05621c  jal         func_158870
label_164b78:
    if (ctx->pc == 0x164B78u) {
        ctx->pc = 0x164B7Cu;
        goto label_164b7c;
    }
    ctx->pc = 0x164B74u;
    SET_GPR_U32(ctx, 31, 0x164B7Cu);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x164B74u, 0x164B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164B7Cu;
label_164b7c:
    // 0x164b7c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x164b7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_164b80:
    // 0x164b80: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
label_164b84:
    if (ctx->pc == 0x164B84u) {
        ctx->pc = 0x164B88u;
        goto label_164b88;
    }
    ctx->pc = 0x164B80u;
    {
        const bool branch_taken_0x164b80 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x164b80) {
            ctx->pc = 0x164BC8u;
            goto label_164bc8;
        }
    }
    ctx->pc = 0x164B88u;
label_164b88:
    // 0x164b88: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x164b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_164b8c:
    // 0x164b8c: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x164b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_164b90:
    // 0x164b90: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x164b90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_164b94:
    // 0x164b94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x164b94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_164b98:
    // 0x164b98: 0xc08c8dc  jal         func_232370
label_164b9c:
    if (ctx->pc == 0x164B9Cu) {
        ctx->pc = 0x164BA0u;
        goto label_164ba0;
    }
    ctx->pc = 0x164B98u;
    SET_GPR_U32(ctx, 31, 0x164BA0u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x164B98u, 0x164BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164BA0u;
label_164ba0:
    // 0x164ba0: 0x2a210002  slti        $at, $s1, 0x2
    ctx->pc = 0x164ba0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_164ba4:
    // 0x164ba4: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_164ba8:
    if (ctx->pc == 0x164BA8u) {
        ctx->pc = 0x164BACu;
        goto label_164bac;
    }
    ctx->pc = 0x164BA4u;
    {
        const bool branch_taken_0x164ba4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x164ba4) {
            ctx->pc = 0x164BBCu;
            goto label_164bbc;
        }
    }
    ctx->pc = 0x164BACu;
label_164bac:
    // 0x164bac: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x164bacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_164bb0:
    // 0x164bb0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x164bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_164bb4:
    // 0x164bb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x164bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_164bb8:
    // 0x164bb8: 0xac520060  sw          $s2, 0x60($v0)
    ctx->pc = 0x164bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 18));
label_164bbc:
    // 0x164bbc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x164bbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_164bc0:
    // 0x164bc0: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
label_164bc4:
    if (ctx->pc == 0x164BC4u) {
        ctx->pc = 0x164BC8u;
        goto label_164bc8;
    }
    ctx->pc = 0x164BC0u;
    {
        const bool branch_taken_0x164bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164bc0) {
            ctx->pc = 0x164B54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164b54;
        }
    }
    ctx->pc = 0x164BC8u;
label_164bc8:
    // 0x164bc8: 0x27a20098  addiu       $v0, $sp, 0x98
    ctx->pc = 0x164bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_164bcc:
    // 0x164bcc: 0xc7818e48  lwc1        $f1, -0x71B8($gp)
    ctx->pc = 0x164bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_164bd0:
    // 0x164bd0: 0xc7808e4c  lwc1        $f0, -0x71B4($gp)
    ctx->pc = 0x164bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_164bd4:
    // 0x164bd4: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x164bd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_164bd8:
    // 0x164bd8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x164bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_164bdc:
    // 0x164bdc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x164bdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_164be0:
    // 0x164be0: 0x1000001a  b           . + 4 + (0x1A << 2)
label_164be4:
    if (ctx->pc == 0x164BE4u) {
        ctx->pc = 0x164BE8u;
        goto label_164be8;
    }
    ctx->pc = 0x164BE0u;
    {
        const bool branch_taken_0x164be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164be0) {
            ctx->pc = 0x164C4Cu;
            goto label_164c4c;
        }
    }
    ctx->pc = 0x164BE8u;
label_164be8:
    // 0x164be8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x164be8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_164bec:
    // 0x164bec: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x164becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_164bf0:
    // 0x164bf0: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x164bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_164bf4:
    // 0x164bf4: 0x8c450098  lw          $a1, 0x98($v0)
    ctx->pc = 0x164bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
label_164bf8:
    // 0x164bf8: 0xc08e57c  jal         func_2395F0
label_164bfc:
    if (ctx->pc == 0x164BFCu) {
        ctx->pc = 0x164C00u;
        goto label_164c00;
    }
    ctx->pc = 0x164BF8u;
    SET_GPR_U32(ctx, 31, 0x164C00u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x164BF8u, 0x164C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164C00u;
label_164c00:
    // 0x164c00: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x164c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_164c04:
    // 0x164c04: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x164c04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_164c08:
    // 0x164c08: 0xc0406d0  jal         func_101B40
label_164c0c:
    if (ctx->pc == 0x164C0Cu) {
        ctx->pc = 0x164C10u;
        goto label_164c10;
    }
    ctx->pc = 0x164C08u;
    SET_GPR_U32(ctx, 31, 0x164C10u);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x164C08u, 0x164C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164C10u;
label_164c10:
    // 0x164c10: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x164c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_164c14:
    // 0x164c14: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x164c14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_164c18:
    // 0x164c18: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x164c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_164c1c:
    // 0x164c1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x164c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_164c20:
    // 0x164c20: 0x8c450060  lw          $a1, 0x60($v0)
    ctx->pc = 0x164c20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_164c24:
    // 0x164c24: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x164c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_164c28:
    // 0x164c28: 0x27a60088  addiu       $a2, $sp, 0x88
    ctx->pc = 0x164c28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_164c2c:
    // 0x164c2c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x164c2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_164c30:
    // 0x164c30: 0xc08c378  jal         func_230DE0
label_164c34:
    if (ctx->pc == 0x164C34u) {
        ctx->pc = 0x164C38u;
        goto label_164c38;
    }
    ctx->pc = 0x164C30u;
    SET_GPR_U32(ctx, 31, 0x164C38u);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x164C30u, 0x164C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164C38u;
label_164c38:
    // 0x164c38: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x164c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_164c3c:
    // 0x164c3c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x164c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_164c40:
    // 0x164c40: 0xc0406a0  jal         func_101A80
label_164c44:
    if (ctx->pc == 0x164C44u) {
        ctx->pc = 0x164C48u;
        goto label_164c48;
    }
    ctx->pc = 0x164C40u;
    SET_GPR_U32(ctx, 31, 0x164C48u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x164C40u, 0x164C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164C48u;
label_164c48:
    // 0x164c48: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x164c48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_164c4c:
    // 0x164c4c: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x164c4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_164c50:
    // 0x164c50: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
label_164c54:
    if (ctx->pc == 0x164C54u) {
        ctx->pc = 0x164C58u;
        goto label_164c58;
    }
    ctx->pc = 0x164C50u;
    {
        const bool branch_taken_0x164c50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x164c50) {
            ctx->pc = 0x164BE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164be8;
        }
    }
    ctx->pc = 0x164C58u;
label_164c58:
    // 0x164c58: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x164c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_164c5c:
    // 0x164c5c: 0xdf828e50  ld          $v0, -0x71B0($gp)
    ctx->pc = 0x164c5cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294938192)));
label_164c60:
    // 0x164c60: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x164c60u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_164c64:
    // 0x164c64: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x164c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_164c68:
    // 0x164c68: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x164c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_164c6c:
    // 0x164c6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x164c6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_164c70:
    // 0x164c70: 0x0  nop
    ctx->pc = 0x164c70u;
    // NOP
label_164c74:
    // 0x164c74: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x164c74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_164c78:
    // 0x164c78: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x164c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_164c7c:
    // 0x164c7c: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x164c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_164c80:
    // 0x164c80: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x164c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_164c84:
    // 0x164c84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x164c84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_164c88:
    // 0x164c88: 0x0  nop
    ctx->pc = 0x164c88u;
    // NOP
label_164c8c:
    // 0x164c8c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x164c8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_164c90:
    // 0x164c90: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x164c90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_164c94:
    // 0x164c94: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x164c94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_164c98:
    // 0x164c98: 0x1000004e  b           . + 4 + (0x4E << 2)
label_164c9c:
    if (ctx->pc == 0x164C9Cu) {
        ctx->pc = 0x164CA0u;
        goto label_164ca0;
    }
    ctx->pc = 0x164C98u;
    {
        const bool branch_taken_0x164c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164c98) {
            ctx->pc = 0x164DD4u;
            goto label_164dd4;
        }
    }
    ctx->pc = 0x164CA0u;
label_164ca0:
    // 0x164ca0: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x164ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_164ca4:
    // 0x164ca4: 0x27a30078  addiu       $v1, $sp, 0x78
    ctx->pc = 0x164ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_164ca8:
    // 0x164ca8: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x164ca8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_164cac:
    // 0x164cac: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x164cacu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_164cb0:
    // 0x164cb0: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x164cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_164cb4:
    // 0x164cb4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x164cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_164cb8:
    // 0x164cb8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_164cbc:
    if (ctx->pc == 0x164CBCu) {
        ctx->pc = 0x164CC0u;
        goto label_164cc0;
    }
    ctx->pc = 0x164CB8u;
    {
        const bool branch_taken_0x164cb8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x164cb8) {
            ctx->pc = 0x164CD4u;
            goto label_164cd4;
        }
    }
    ctx->pc = 0x164CC0u;
label_164cc0:
    // 0x164cc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x164cc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_164cc4:
    // 0x164cc4: 0x0  nop
    ctx->pc = 0x164cc4u;
    // NOP
label_164cc8:
    // 0x164cc8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x164cc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_164ccc:
    // 0x164ccc: 0x10000008  b           . + 4 + (0x8 << 2)
label_164cd0:
    if (ctx->pc == 0x164CD0u) {
        ctx->pc = 0x164CD4u;
        goto label_164cd4;
    }
    ctx->pc = 0x164CCCu;
    {
        const bool branch_taken_0x164ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164ccc) {
            ctx->pc = 0x164CF0u;
            goto label_164cf0;
        }
    }
    ctx->pc = 0x164CD4u;
label_164cd4:
    // 0x164cd4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x164cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_164cd8:
    // 0x164cd8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x164cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_164cdc:
    // 0x164cdc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x164cdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_164ce0:
    // 0x164ce0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x164ce0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_164ce4:
    // 0x164ce4: 0x0  nop
    ctx->pc = 0x164ce4u;
    // NOP
label_164ce8:
    // 0x164ce8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x164ce8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_164cec:
    // 0x164cec: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x164cecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_164cf0:
    // 0x164cf0: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x164cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
label_164cf4:
    // 0x164cf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x164cf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_164cf8:
    // 0x164cf8: 0x0  nop
    ctx->pc = 0x164cf8u;
    // NOP
label_164cfc:
    // 0x164cfc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x164cfcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_164d00:
    // 0x164d00: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x164d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_164d04:
    // 0x164d04: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x164d04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_164d08:
    // 0x164d08: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x164d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_164d0c:
    // 0x164d0c: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x164d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_164d10:
    // 0x164d10: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x164d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_164d14:
    // 0x164d14: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_164d18:
    if (ctx->pc == 0x164D18u) {
        ctx->pc = 0x164D1Cu;
        goto label_164d1c;
    }
    ctx->pc = 0x164D14u;
    {
        const bool branch_taken_0x164d14 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x164d14) {
            ctx->pc = 0x164D30u;
            goto label_164d30;
        }
    }
    ctx->pc = 0x164D1Cu;
label_164d1c:
    // 0x164d1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x164d1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_164d20:
    // 0x164d20: 0x0  nop
    ctx->pc = 0x164d20u;
    // NOP
label_164d24:
    // 0x164d24: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x164d24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_164d28:
    // 0x164d28: 0x10000008  b           . + 4 + (0x8 << 2)
label_164d2c:
    if (ctx->pc == 0x164D2Cu) {
        ctx->pc = 0x164D30u;
        goto label_164d30;
    }
    ctx->pc = 0x164D28u;
    {
        const bool branch_taken_0x164d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164d28) {
            ctx->pc = 0x164D4Cu;
            goto label_164d4c;
        }
    }
    ctx->pc = 0x164D30u;
label_164d30:
    // 0x164d30: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x164d30u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_164d34:
    // 0x164d34: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x164d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_164d38:
    // 0x164d38: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x164d38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_164d3c:
    // 0x164d3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x164d3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_164d40:
    // 0x164d40: 0x0  nop
    ctx->pc = 0x164d40u;
    // NOP
label_164d44:
    // 0x164d44: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x164d44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_164d48:
    // 0x164d48: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x164d48u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_164d4c:
    // 0x164d4c: 0x3c0243e0  lui         $v0, 0x43E0
    ctx->pc = 0x164d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17376 << 16));
label_164d50:
    // 0x164d50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x164d50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_164d54:
    // 0x164d54: 0x0  nop
    ctx->pc = 0x164d54u;
    // NOP
label_164d58:
    // 0x164d58: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x164d58u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_164d5c:
    // 0x164d5c: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x164d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_164d60:
    // 0x164d60: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x164d60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_164d64:
    // 0x164d64: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x164d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_164d68:
    // 0x164d68: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x164d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_164d6c:
    // 0x164d6c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x164d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_164d70:
    // 0x164d70: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x164d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_164d74:
    // 0x164d74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x164d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_164d78:
    // 0x164d78: 0x8c450060  lw          $a1, 0x60($v0)
    ctx->pc = 0x164d78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_164d7c:
    // 0x164d7c: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x164d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_164d80:
    // 0x164d80: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x164d80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_164d84:
    // 0x164d84: 0xc08c8dc  jal         func_232370
label_164d88:
    if (ctx->pc == 0x164D88u) {
        ctx->pc = 0x164D8Cu;
        goto label_164d8c;
    }
    ctx->pc = 0x164D84u;
    SET_GPR_U32(ctx, 31, 0x164D8Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x164D84u, 0x164D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164D8Cu;
label_164d8c:
    // 0x164d8c: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x164d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_164d90:
    // 0x164d90: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x164d90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_164d94:
    // 0x164d94: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x164d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_164d98:
    // 0x164d98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x164d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_164d9c:
    // 0x164d9c: 0x8c450060  lw          $a1, 0x60($v0)
    ctx->pc = 0x164d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_164da0:
    // 0x164da0: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x164da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_164da4:
    // 0x164da4: 0xc7ac0078  lwc1        $f12, 0x78($sp)
    ctx->pc = 0x164da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_164da8:
    // 0x164da8: 0xc7ad007c  lwc1        $f13, 0x7C($sp)
    ctx->pc = 0x164da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_164dac:
    // 0x164dac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x164dacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_164db0:
    // 0x164db0: 0xc08c208  jal         func_230820
label_164db4:
    if (ctx->pc == 0x164DB4u) {
        ctx->pc = 0x164DB8u;
        goto label_164db8;
    }
    ctx->pc = 0x164DB0u;
    SET_GPR_U32(ctx, 31, 0x164DB8u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x164DB0u, 0x164DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164DB8u;
label_164db8:
    // 0x164db8: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x164db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_164dbc:
    // 0x164dbc: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x164dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_164dc0:
    // 0x164dc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x164dc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_164dc4:
    // 0x164dc4: 0x0  nop
    ctx->pc = 0x164dc4u;
    // NOP
label_164dc8:
    // 0x164dc8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x164dc8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_164dcc:
    // 0x164dcc: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x164dccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_164dd0:
    // 0x164dd0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x164dd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_164dd4:
    // 0x164dd4: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x164dd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_164dd8:
    // 0x164dd8: 0x1440ffb1  bnez        $v0, . + 4 + (-0x4F << 2)
label_164ddc:
    if (ctx->pc == 0x164DDCu) {
        ctx->pc = 0x164DE0u;
        goto label_164de0;
    }
    ctx->pc = 0x164DD8u;
    {
        const bool branch_taken_0x164dd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x164dd8) {
            ctx->pc = 0x164CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164ca0;
        }
    }
    ctx->pc = 0x164DE0u;
label_164de0:
    // 0x164de0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x164de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_164de4:
    // 0x164de4: 0xac40005c  sw          $zero, 0x5C($v0)
    ctx->pc = 0x164de4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 0));
label_164de8:
    // 0x164de8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x164de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_164dec:
    // 0x164dec: 0xac400058  sw          $zero, 0x58($v0)
    ctx->pc = 0x164decu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 0));
label_164df0:
    // 0x164df0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x164df0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_164df4:
    // 0x164df4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x164df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_164df8:
    // 0x164df8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x164df8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_164dfc:
    // 0x164dfc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x164dfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_164e00:
    // 0x164e00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x164e00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_164e04:
    // 0x164e04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x164e04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_164e08:
    // 0x164e08: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x164e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_164e0c:
    // 0x164e0c: 0x3e00008  jr          $ra
label_164e10:
    if (ctx->pc == 0x164E10u) {
        ctx->pc = 0x164E14u;
        goto label_164e14;
    }
    ctx->pc = 0x164E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164E0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164E14u;
label_164e14:
    // 0x164e14: 0x0  nop
    ctx->pc = 0x164e14u;
    // NOP
label_164e18:
    // 0x164e18: 0x0  nop
    ctx->pc = 0x164e18u;
    // NOP
label_164e1c:
    // 0x164e1c: 0x0  nop
    ctx->pc = 0x164e1cu;
    // NOP
label_164e20:
    // 0x164e20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x164e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_164e24:
    // 0x164e24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x164e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_164e28:
    // 0x164e28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x164e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_164e2c:
    // 0x164e2c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x164e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_164e30:
    // 0x164e30: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x164e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_164e34:
    // 0x164e34: 0xc0559ac  jal         func_1566B0
label_164e38:
    if (ctx->pc == 0x164E38u) {
        ctx->pc = 0x164E3Cu;
        goto label_164e3c;
    }
    ctx->pc = 0x164E34u;
    SET_GPR_U32(ctx, 31, 0x164E3Cu);
    ctx->pc = 0x1566B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1566B0u, 0x164E34u, 0x164E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164E3Cu;
label_164e3c:
    // 0x164e3c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x164e3cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_164e40:
    // 0x164e40: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x164e40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_164e44:
    // 0x164e44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x164e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_164e48:
    // 0x164e48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x164e48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_164e4c:
    // 0x164e4c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x164e4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_164e50:
    // 0x164e50: 0x3e00008  jr          $ra
label_164e54:
    if (ctx->pc == 0x164E54u) {
        ctx->pc = 0x164E58u;
        goto label_164e58;
    }
    ctx->pc = 0x164E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164E50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164E58u;
label_164e58:
    // 0x164e58: 0x0  nop
    ctx->pc = 0x164e58u;
    // NOP
label_164e5c:
    // 0x164e5c: 0x0  nop
    ctx->pc = 0x164e5cu;
    // NOP
label_164e60:
    // 0x164e60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x164e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_164e64:
    // 0x164e64: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x164e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_164e68:
    // 0x164e68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x164e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_164e6c:
    // 0x164e6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x164e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_164e70:
    // 0x164e70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x164e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_164e74:
    // 0x164e74: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x164e74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_164e78:
    // 0x164e78: 0xa3a50050  sb          $a1, 0x50($sp)
    ctx->pc = 0x164e78u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 5));
label_164e7c:
    // 0x164e7c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x164e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_164e80:
    // 0x164e80: 0x93a50050  lbu         $a1, 0x50($sp)
    ctx->pc = 0x164e80u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
label_164e84:
    // 0x164e84: 0xc055a78  jal         func_1569E0
label_164e88:
    if (ctx->pc == 0x164E88u) {
        ctx->pc = 0x164E8Cu;
        goto label_164e8c;
    }
    ctx->pc = 0x164E84u;
    SET_GPR_U32(ctx, 31, 0x164E8Cu);
    ctx->pc = 0x1569E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1569E0u, 0x164E84u, 0x164E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164E8Cu;
label_164e8c:
    // 0x164e8c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x164e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_164e90:
    // 0x164e90: 0xa0400054  sb          $zero, 0x54($v0)
    ctx->pc = 0x164e90u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 84), (uint8_t)GPR_U32(ctx, 0));
label_164e94:
    // 0x164e94: 0x93a20050  lbu         $v0, 0x50($sp)
    ctx->pc = 0x164e94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
label_164e98:
    // 0x164e98: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x164e98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_164e9c:
    // 0x164e9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x164e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_164ea0:
    // 0x164ea0: 0x1462005b  bne         $v1, $v0, . + 4 + (0x5B << 2)
label_164ea4:
    if (ctx->pc == 0x164EA4u) {
        ctx->pc = 0x164EA8u;
        goto label_164ea8;
    }
    ctx->pc = 0x164EA0u;
    {
        const bool branch_taken_0x164ea0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x164ea0) {
            ctx->pc = 0x165010u;
            goto label_165010;
        }
    }
    ctx->pc = 0x164EA8u;
label_164ea8:
    // 0x164ea8: 0xc08ef50  jal         func_23BD40
label_164eac:
    if (ctx->pc == 0x164EACu) {
        ctx->pc = 0x164EB0u;
        goto label_164eb0;
    }
    ctx->pc = 0x164EA8u;
    SET_GPR_U32(ctx, 31, 0x164EB0u);
    ctx->pc = 0x23BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BD40u, 0x164EA8u, 0x164EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164EB0u;
label_164eb0:
    // 0x164eb0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x164eb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_164eb4:
    // 0x164eb4: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
label_164eb8:
    if (ctx->pc == 0x164EB8u) {
        ctx->pc = 0x164EBCu;
        goto label_164ebc;
    }
    ctx->pc = 0x164EB4u;
    {
        const bool branch_taken_0x164eb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x164eb4) {
            ctx->pc = 0x164F20u;
            goto label_164f20;
        }
    }
    ctx->pc = 0x164EBCu;
label_164ebc:
    // 0x164ebc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x164ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_164ec0:
    // 0x164ec0: 0xc0406f0  jal         func_101BC0
label_164ec4:
    if (ctx->pc == 0x164EC4u) {
        ctx->pc = 0x164EC8u;
        goto label_164ec8;
    }
    ctx->pc = 0x164EC0u;
    SET_GPR_U32(ctx, 31, 0x164EC8u);
    ctx->pc = 0x101BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101BC0u, 0x164EC0u, 0x164EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164EC8u;
label_164ec8:
    // 0x164ec8: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x164ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_164ecc:
    // 0x164ecc: 0x14430014  bne         $v0, $v1, . + 4 + (0x14 << 2)
label_164ed0:
    if (ctx->pc == 0x164ED0u) {
        ctx->pc = 0x164ED4u;
        goto label_164ed4;
    }
    ctx->pc = 0x164ECCu;
    {
        const bool branch_taken_0x164ecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x164ecc) {
            ctx->pc = 0x164F20u;
            goto label_164f20;
        }
    }
    ctx->pc = 0x164ED4u;
label_164ed4:
    // 0x164ed4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x164ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_164ed8:
    // 0x164ed8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x164ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_164edc:
    // 0x164edc: 0xa0430054  sb          $v1, 0x54($v0)
    ctx->pc = 0x164edcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 84), (uint8_t)GPR_U32(ctx, 3));
label_164ee0:
    // 0x164ee0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x164ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_164ee4:
    // 0x164ee4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x164ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_164ee8:
    // 0x164ee8: 0x8c450050  lw          $a1, 0x50($v0)
    ctx->pc = 0x164ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_164eec:
    // 0x164eec: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x164eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_164ef0:
    // 0x164ef0: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x164ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
label_164ef4:
    // 0x164ef4: 0x24c63a90  addiu       $a2, $a2, 0x3A90
    ctx->pc = 0x164ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 14992));
label_164ef8:
    // 0x164ef8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x164ef8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_164efc:
    // 0x164efc: 0xc08c800  jal         func_232000
label_164f00:
    if (ctx->pc == 0x164F00u) {
        ctx->pc = 0x164F04u;
        goto label_164f04;
    }
    ctx->pc = 0x164EFCu;
    SET_GPR_U32(ctx, 31, 0x164F04u);
    ctx->pc = 0x232000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232000u, 0x164EFCu, 0x164F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164F04u;
label_164f04:
    // 0x164f04: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x164f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_164f08:
    // 0x164f08: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x164f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_164f0c:
    // 0x164f0c: 0x8c450050  lw          $a1, 0x50($v0)
    ctx->pc = 0x164f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_164f10:
    // 0x164f10: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x164f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_164f14:
    // 0x164f14: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x164f14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_164f18:
    // 0x164f18: 0xc08c8dc  jal         func_232370
label_164f1c:
    if (ctx->pc == 0x164F1Cu) {
        ctx->pc = 0x164F20u;
        goto label_164f20;
    }
    ctx->pc = 0x164F18u;
    SET_GPR_U32(ctx, 31, 0x164F20u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x164F18u, 0x164F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164F20u;
label_164f20:
    // 0x164f20: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x164f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_164f24:
    // 0x164f24: 0x27858e58  addiu       $a1, $gp, -0x71A8
    ctx->pc = 0x164f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938200));
label_164f28:
    // 0x164f28: 0xc05621c  jal         func_158870
label_164f2c:
    if (ctx->pc == 0x164F2Cu) {
        ctx->pc = 0x164F30u;
        goto label_164f30;
    }
    ctx->pc = 0x164F28u;
    SET_GPR_U32(ctx, 31, 0x164F30u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x164F28u, 0x164F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164F30u;
label_164f30:
    // 0x164f30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x164f30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_164f34:
    // 0x164f34: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
label_164f38:
    if (ctx->pc == 0x164F38u) {
        ctx->pc = 0x164F3Cu;
        goto label_164f3c;
    }
    ctx->pc = 0x164F34u;
    {
        const bool branch_taken_0x164f34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x164f34) {
            ctx->pc = 0x164F8Cu;
            goto label_164f8c;
        }
    }
    ctx->pc = 0x164F3Cu;
label_164f3c:
    // 0x164f3c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x164f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_164f40:
    // 0x164f40: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x164f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_164f44:
    // 0x164f44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x164f44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_164f48:
    // 0x164f48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x164f48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_164f4c:
    // 0x164f4c: 0xc08c8dc  jal         func_232370
label_164f50:
    if (ctx->pc == 0x164F50u) {
        ctx->pc = 0x164F54u;
        goto label_164f54;
    }
    ctx->pc = 0x164F4Cu;
    SET_GPR_U32(ctx, 31, 0x164F54u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x164F4Cu, 0x164F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164F54u;
label_164f54:
    // 0x164f54: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
label_164f58:
    if (ctx->pc == 0x164F58u) {
        ctx->pc = 0x164F5Cu;
        goto label_164f5c;
    }
    ctx->pc = 0x164F54u;
    {
        const bool branch_taken_0x164f54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x164f54) {
            ctx->pc = 0x164F8Cu;
            goto label_164f8c;
        }
    }
    ctx->pc = 0x164F5Cu;
label_164f5c:
    // 0x164f5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x164f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_164f60:
    // 0x164f60: 0xc0406f0  jal         func_101BC0
label_164f64:
    if (ctx->pc == 0x164F64u) {
        ctx->pc = 0x164F68u;
        goto label_164f68;
    }
    ctx->pc = 0x164F60u;
    SET_GPR_U32(ctx, 31, 0x164F68u);
    ctx->pc = 0x101BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101BC0u, 0x164F60u, 0x164F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164F68u;
label_164f68:
    // 0x164f68: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x164f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_164f6c:
    // 0x164f6c: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_164f70:
    if (ctx->pc == 0x164F70u) {
        ctx->pc = 0x164F74u;
        goto label_164f74;
    }
    ctx->pc = 0x164F6Cu;
    {
        const bool branch_taken_0x164f6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x164f6c) {
            ctx->pc = 0x164F8Cu;
            goto label_164f8c;
        }
    }
    ctx->pc = 0x164F74u;
label_164f74:
    // 0x164f74: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x164f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_164f78:
    // 0x164f78: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x164f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_164f7c:
    // 0x164f7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x164f7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_164f80:
    // 0x164f80: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x164f80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_164f84:
    // 0x164f84: 0xc08c8dc  jal         func_232370
label_164f88:
    if (ctx->pc == 0x164F88u) {
        ctx->pc = 0x164F8Cu;
        goto label_164f8c;
    }
    ctx->pc = 0x164F84u;
    SET_GPR_U32(ctx, 31, 0x164F8Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x164F84u, 0x164F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164F8Cu;
label_164f8c:
    // 0x164f8c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x164f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_164f90:
    // 0x164f90: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x164f90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_164f94:
    // 0x164f94: 0x24a53aa0  addiu       $a1, $a1, 0x3AA0
    ctx->pc = 0x164f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15008));
label_164f98:
    // 0x164f98: 0xc05621c  jal         func_158870
label_164f9c:
    if (ctx->pc == 0x164F9Cu) {
        ctx->pc = 0x164FA0u;
        goto label_164fa0;
    }
    ctx->pc = 0x164F98u;
    SET_GPR_U32(ctx, 31, 0x164FA0u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x164F98u, 0x164FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164FA0u;
label_164fa0:
    // 0x164fa0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x164fa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_164fa4:
    // 0x164fa4: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
label_164fa8:
    if (ctx->pc == 0x164FA8u) {
        ctx->pc = 0x164FACu;
        goto label_164fac;
    }
    ctx->pc = 0x164FA4u;
    {
        const bool branch_taken_0x164fa4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x164fa4) {
            ctx->pc = 0x164FFCu;
            goto label_164ffc;
        }
    }
    ctx->pc = 0x164FACu;
label_164fac:
    // 0x164fac: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x164facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_164fb0:
    // 0x164fb0: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x164fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_164fb4:
    // 0x164fb4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x164fb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_164fb8:
    // 0x164fb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x164fb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_164fbc:
    // 0x164fbc: 0xc08c8dc  jal         func_232370
label_164fc0:
    if (ctx->pc == 0x164FC0u) {
        ctx->pc = 0x164FC4u;
        goto label_164fc4;
    }
    ctx->pc = 0x164FBCu;
    SET_GPR_U32(ctx, 31, 0x164FC4u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x164FBCu, 0x164FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164FC4u;
label_164fc4:
    // 0x164fc4: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
label_164fc8:
    if (ctx->pc == 0x164FC8u) {
        ctx->pc = 0x164FCCu;
        goto label_164fcc;
    }
    ctx->pc = 0x164FC4u;
    {
        const bool branch_taken_0x164fc4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x164fc4) {
            ctx->pc = 0x164FFCu;
            goto label_164ffc;
        }
    }
    ctx->pc = 0x164FCCu;
label_164fcc:
    // 0x164fcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x164fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_164fd0:
    // 0x164fd0: 0xc0406f0  jal         func_101BC0
label_164fd4:
    if (ctx->pc == 0x164FD4u) {
        ctx->pc = 0x164FD8u;
        goto label_164fd8;
    }
    ctx->pc = 0x164FD0u;
    SET_GPR_U32(ctx, 31, 0x164FD8u);
    ctx->pc = 0x101BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101BC0u, 0x164FD0u, 0x164FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164FD8u;
label_164fd8:
    // 0x164fd8: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x164fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_164fdc:
    // 0x164fdc: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_164fe0:
    if (ctx->pc == 0x164FE0u) {
        ctx->pc = 0x164FE4u;
        goto label_164fe4;
    }
    ctx->pc = 0x164FDCu;
    {
        const bool branch_taken_0x164fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x164fdc) {
            ctx->pc = 0x164FFCu;
            goto label_164ffc;
        }
    }
    ctx->pc = 0x164FE4u;
label_164fe4:
    // 0x164fe4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x164fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_164fe8:
    // 0x164fe8: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x164fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_164fec:
    // 0x164fec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x164fecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_164ff0:
    // 0x164ff0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x164ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_164ff4:
    // 0x164ff4: 0xc08c8dc  jal         func_232370
label_164ff8:
    if (ctx->pc == 0x164FF8u) {
        ctx->pc = 0x164FFCu;
        goto label_164ffc;
    }
    ctx->pc = 0x164FF4u;
    SET_GPR_U32(ctx, 31, 0x164FFCu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x164FF4u, 0x164FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164FFCu;
label_164ffc:
    // 0x164ffc: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x164ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_165000:
    // 0x165000: 0xc0594f8  jal         func_1653E0
label_165004:
    if (ctx->pc == 0x165004u) {
        ctx->pc = 0x165008u;
        goto label_165008;
    }
    ctx->pc = 0x165000u;
    SET_GPR_U32(ctx, 31, 0x165008u);
    ctx->pc = 0x1653E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1653E0u, 0x165000u, 0x165008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165008u;
label_165008:
    // 0x165008: 0x10000028  b           . + 4 + (0x28 << 2)
label_16500c:
    if (ctx->pc == 0x16500Cu) {
        ctx->pc = 0x165010u;
        goto label_165010;
    }
    ctx->pc = 0x165008u;
    {
        const bool branch_taken_0x165008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x165008) {
            ctx->pc = 0x1650ACu;
            goto label_1650ac;
        }
    }
    ctx->pc = 0x165010u;
label_165010:
    // 0x165010: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x165010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_165014:
    // 0x165014: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x165014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_165018:
    // 0x165018: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_16501c:
    if (ctx->pc == 0x16501Cu) {
        ctx->pc = 0x165020u;
        goto label_165020;
    }
    ctx->pc = 0x165018u;
    {
        const bool branch_taken_0x165018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165018) {
            ctx->pc = 0x16505Cu;
            goto label_16505c;
        }
    }
    ctx->pc = 0x165020u;
label_165020:
    // 0x165020: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x165020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_165024:
    // 0x165024: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x165024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_165028:
    // 0x165028: 0x8c450050  lw          $a1, 0x50($v0)
    ctx->pc = 0x165028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_16502c:
    // 0x16502c: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x16502cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_165030:
    // 0x165030: 0x27868e60  addiu       $a2, $gp, -0x71A0
    ctx->pc = 0x165030u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938208));
label_165034:
    // 0x165034: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x165034u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_165038:
    // 0x165038: 0xc08c800  jal         func_232000
label_16503c:
    if (ctx->pc == 0x16503Cu) {
        ctx->pc = 0x165040u;
        goto label_165040;
    }
    ctx->pc = 0x165038u;
    SET_GPR_U32(ctx, 31, 0x165040u);
    ctx->pc = 0x232000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232000u, 0x165038u, 0x165040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165040u;
label_165040:
    // 0x165040: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x165040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_165044:
    // 0x165044: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x165044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_165048:
    // 0x165048: 0x8c450050  lw          $a1, 0x50($v0)
    ctx->pc = 0x165048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_16504c:
    // 0x16504c: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x16504cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_165050:
    // 0x165050: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x165050u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_165054:
    // 0x165054: 0xc08c8dc  jal         func_232370
label_165058:
    if (ctx->pc == 0x165058u) {
        ctx->pc = 0x16505Cu;
        goto label_16505c;
    }
    ctx->pc = 0x165054u;
    SET_GPR_U32(ctx, 31, 0x16505Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x165054u, 0x16505Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16505Cu;
label_16505c:
    // 0x16505c: 0xc05548c  jal         func_155230
label_165060:
    if (ctx->pc == 0x165060u) {
        ctx->pc = 0x165064u;
        goto label_165064;
    }
    ctx->pc = 0x16505Cu;
    SET_GPR_U32(ctx, 31, 0x165064u);
    ctx->pc = 0x155230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155230u, 0x16505Cu, 0x165064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165064u;
label_165064:
    // 0x165064: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x165064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_165068:
    // 0x165068: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x165068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_16506c:
    // 0x16506c: 0xc0553d4  jal         func_154F50
label_165070:
    if (ctx->pc == 0x165070u) {
        ctx->pc = 0x165074u;
        goto label_165074;
    }
    ctx->pc = 0x16506Cu;
    SET_GPR_U32(ctx, 31, 0x165074u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x16506Cu, 0x165074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165074u;
label_165074:
    // 0x165074: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x165074u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_165078:
    // 0x165078: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x165078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16507c:
    // 0x16507c: 0xc0413bc  jal         func_104EF0
label_165080:
    if (ctx->pc == 0x165080u) {
        ctx->pc = 0x165084u;
        goto label_165084;
    }
    ctx->pc = 0x16507Cu;
    SET_GPR_U32(ctx, 31, 0x165084u);
    ctx->pc = 0x104EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EF0u, 0x16507Cu, 0x165084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165084u;
label_165084:
    // 0x165084: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x165084u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_165088:
    // 0x165088: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x165088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16508c:
    // 0x16508c: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
label_165090:
    if (ctx->pc == 0x165090u) {
        ctx->pc = 0x165094u;
        goto label_165094;
    }
    ctx->pc = 0x16508Cu;
    {
        const bool branch_taken_0x16508c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x16508c) {
            ctx->pc = 0x1650ACu;
            goto label_1650ac;
        }
    }
    ctx->pc = 0x165094u;
label_165094:
    // 0x165094: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x165094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_165098:
    // 0x165098: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x165098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16509c:
    // 0x16509c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16509cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1650a0:
    // 0x1650a0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1650a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1650a4:
    // 0x1650a4: 0x320f809  jalr        $t9
label_1650a8:
    if (ctx->pc == 0x1650A8u) {
        ctx->pc = 0x1650ACu;
        goto label_1650ac;
    }
    ctx->pc = 0x1650A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1650ACu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1650A4u, 0x1650ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1650ACu;
label_1650ac:
    // 0x1650ac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1650acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1650b0:
    // 0x1650b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1650b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1650b4:
    // 0x1650b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1650b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1650b8:
    // 0x1650b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1650b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1650bc:
    // 0x1650bc: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1650bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1650c0:
    // 0x1650c0: 0x3e00008  jr          $ra
label_1650c4:
    if (ctx->pc == 0x1650C4u) {
        ctx->pc = 0x1650C8u;
        goto label_1650c8;
    }
    ctx->pc = 0x1650C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1650C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1650C8u;
label_1650c8:
    // 0x1650c8: 0x0  nop
    ctx->pc = 0x1650c8u;
    // NOP
label_1650cc:
    // 0x1650cc: 0x0  nop
    ctx->pc = 0x1650ccu;
    // NOP
label_1650d0:
    // 0x1650d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1650d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1650d4:
    // 0x1650d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1650d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1650d8:
    // 0x1650d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1650d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1650dc:
    // 0x1650dc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1650dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1650e0:
    // 0x1650e0: 0xc055b3c  jal         func_156CF0
label_1650e4:
    if (ctx->pc == 0x1650E4u) {
        ctx->pc = 0x1650E8u;
        goto label_1650e8;
    }
    ctx->pc = 0x1650E0u;
    SET_GPR_U32(ctx, 31, 0x1650E8u);
    ctx->pc = 0x156CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156CF0u, 0x1650E0u, 0x1650E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1650E8u;
label_1650e8:
    // 0x1650e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1650e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1650ec:
    // 0x1650ec: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1650ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1650f0:
    // 0x1650f0: 0x3e00008  jr          $ra
label_1650f4:
    if (ctx->pc == 0x1650F4u) {
        ctx->pc = 0x1650F8u;
        goto label_1650f8;
    }
    ctx->pc = 0x1650F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1650F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1650F8u;
label_1650f8:
    // 0x1650f8: 0x0  nop
    ctx->pc = 0x1650f8u;
    // NOP
label_1650fc:
    // 0x1650fc: 0x0  nop
    ctx->pc = 0x1650fcu;
    // NOP
label_165100:
    // 0x165100: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x165100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_165104:
    // 0x165104: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x165104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_165108:
    // 0x165108: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x165108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_16510c:
    // 0x16510c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x16510cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_165110:
    // 0x165110: 0xc055a84  jal         func_156A10
label_165114:
    if (ctx->pc == 0x165114u) {
        ctx->pc = 0x165118u;
        goto label_165118;
    }
    ctx->pc = 0x165110u;
    SET_GPR_U32(ctx, 31, 0x165118u);
    ctx->pc = 0x156A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156A10u, 0x165110u, 0x165118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165118u;
label_165118:
    // 0x165118: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x165118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16511c:
    // 0x16511c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x16511cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_165120:
    // 0x165120: 0x3e00008  jr          $ra
label_165124:
    if (ctx->pc == 0x165124u) {
        ctx->pc = 0x165128u;
        goto label_165128;
    }
    ctx->pc = 0x165120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165128u;
label_165128:
    // 0x165128: 0x0  nop
    ctx->pc = 0x165128u;
    // NOP
label_16512c:
    // 0x16512c: 0x0  nop
    ctx->pc = 0x16512cu;
    // NOP
label_165130:
    // 0x165130: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x165130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_165134:
    // 0x165134: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x165134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_165138:
    // 0x165138: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x165138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16513c:
    // 0x16513c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x16513cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_165140:
    // 0x165140: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x165140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_165144:
    // 0x165144: 0xa3a60050  sb          $a2, 0x50($sp)
    ctx->pc = 0x165144u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 6));
label_165148:
    // 0x165148: 0x93a30050  lbu         $v1, 0x50($sp)
    ctx->pc = 0x165148u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
label_16514c:
    // 0x16514c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x16514cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_165150:
    // 0x165150: 0x1060009b  beqz        $v1, . + 4 + (0x9B << 2)
label_165154:
    if (ctx->pc == 0x165154u) {
        ctx->pc = 0x165158u;
        goto label_165158;
    }
    ctx->pc = 0x165150u;
    {
        const bool branch_taken_0x165150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x165150) {
            ctx->pc = 0x1653C0u;
            goto label_1653c0;
        }
    }
    ctx->pc = 0x165158u;
label_165158:
    // 0x165158: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x165158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_16515c:
    // 0x16515c: 0x24030071  addiu       $v1, $zero, 0x71
    ctx->pc = 0x16515cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
label_165160:
    // 0x165160: 0x10830067  beq         $a0, $v1, . + 4 + (0x67 << 2)
label_165164:
    if (ctx->pc == 0x165164u) {
        ctx->pc = 0x165168u;
        goto label_165168;
    }
    ctx->pc = 0x165160u;
    {
        const bool branch_taken_0x165160 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x165160) {
            ctx->pc = 0x165300u;
            goto label_165300;
        }
    }
    ctx->pc = 0x165168u;
label_165168:
    // 0x165168: 0x24030073  addiu       $v1, $zero, 0x73
    ctx->pc = 0x165168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_16516c:
    // 0x16516c: 0x10830043  beq         $a0, $v1, . + 4 + (0x43 << 2)
label_165170:
    if (ctx->pc == 0x165170u) {
        ctx->pc = 0x165174u;
        goto label_165174;
    }
    ctx->pc = 0x16516Cu;
    {
        const bool branch_taken_0x16516c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16516c) {
            ctx->pc = 0x16527Cu;
            goto label_16527c;
        }
    }
    ctx->pc = 0x165174u;
label_165174:
    // 0x165174: 0x2403006e  addiu       $v1, $zero, 0x6E
    ctx->pc = 0x165174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
label_165178:
    // 0x165178: 0x10830026  beq         $a0, $v1, . + 4 + (0x26 << 2)
label_16517c:
    if (ctx->pc == 0x16517Cu) {
        ctx->pc = 0x165180u;
        goto label_165180;
    }
    ctx->pc = 0x165178u;
    {
        const bool branch_taken_0x165178 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x165178) {
            ctx->pc = 0x165214u;
            goto label_165214;
        }
    }
    ctx->pc = 0x165180u;
label_165180:
    // 0x165180: 0x2403006a  addiu       $v1, $zero, 0x6A
    ctx->pc = 0x165180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
label_165184:
    // 0x165184: 0x10830023  beq         $a0, $v1, . + 4 + (0x23 << 2)
label_165188:
    if (ctx->pc == 0x165188u) {
        ctx->pc = 0x16518Cu;
        goto label_16518c;
    }
    ctx->pc = 0x165184u;
    {
        const bool branch_taken_0x165184 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x165184) {
            ctx->pc = 0x165214u;
            goto label_165214;
        }
    }
    ctx->pc = 0x16518Cu;
label_16518c:
    // 0x16518c: 0x2403006d  addiu       $v1, $zero, 0x6D
    ctx->pc = 0x16518cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
label_165190:
    // 0x165190: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
label_165194:
    if (ctx->pc == 0x165194u) {
        ctx->pc = 0x165198u;
        goto label_165198;
    }
    ctx->pc = 0x165190u;
    {
        const bool branch_taken_0x165190 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x165190) {
            ctx->pc = 0x1651ACu;
            goto label_1651ac;
        }
    }
    ctx->pc = 0x165198u;
label_165198:
    // 0x165198: 0x24030069  addiu       $v1, $zero, 0x69
    ctx->pc = 0x165198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
label_16519c:
    // 0x16519c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_1651a0:
    if (ctx->pc == 0x1651A0u) {
        ctx->pc = 0x1651A4u;
        goto label_1651a4;
    }
    ctx->pc = 0x16519Cu;
    {
        const bool branch_taken_0x16519c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16519c) {
            ctx->pc = 0x1651ACu;
            goto label_1651ac;
        }
    }
    ctx->pc = 0x1651A4u;
label_1651a4:
    // 0x1651a4: 0x10000086  b           . + 4 + (0x86 << 2)
label_1651a8:
    if (ctx->pc == 0x1651A8u) {
        ctx->pc = 0x1651ACu;
        goto label_1651ac;
    }
    ctx->pc = 0x1651A4u;
    {
        const bool branch_taken_0x1651a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1651a4) {
            ctx->pc = 0x1653C0u;
            goto label_1653c0;
        }
    }
    ctx->pc = 0x1651ACu;
label_1651ac:
    // 0x1651ac: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1651acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1651b0:
    // 0x1651b0: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1651b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_1651b4:
    // 0x1651b4: 0x18600082  blez        $v1, . + 4 + (0x82 << 2)
label_1651b8:
    if (ctx->pc == 0x1651B8u) {
        ctx->pc = 0x1651BCu;
        goto label_1651bc;
    }
    ctx->pc = 0x1651B4u;
    {
        const bool branch_taken_0x1651b4 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1651b4) {
            ctx->pc = 0x1653C0u;
            goto label_1653c0;
        }
    }
    ctx->pc = 0x1651BCu;
label_1651bc:
    // 0x1651bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1651bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1651c0:
    // 0x1651c0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1651c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1651c4:
    // 0x1651c4: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1651c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_1651c8:
    // 0x1651c8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1651c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1651cc:
    // 0x1651cc: 0x24a53ab0  addiu       $a1, $a1, 0x3AB0
    ctx->pc = 0x1651ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15024));
label_1651d0:
    // 0x1651d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1651d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1651d4:
    // 0x1651d4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1651d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1651d8:
    // 0x1651d8: 0xc08f558  jal         func_23D560
label_1651dc:
    if (ctx->pc == 0x1651DCu) {
        ctx->pc = 0x1651E0u;
        goto label_1651e0;
    }
    ctx->pc = 0x1651D8u;
    SET_GPR_U32(ctx, 31, 0x1651E0u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x1651D8u, 0x1651E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1651E0u;
label_1651e0:
    // 0x1651e0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1651e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1651e4:
    // 0x1651e4: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x1651e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_1651e8:
    // 0x1651e8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1651e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1651ec:
    // 0x1651ec: 0xac43005c  sw          $v1, 0x5C($v0)
    ctx->pc = 0x1651ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 3));
label_1651f0:
    // 0x1651f0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1651f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1651f4:
    // 0x1651f4: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x1651f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_1651f8:
    // 0x1651f8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1651f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1651fc:
    // 0x1651fc: 0xac620058  sw          $v0, 0x58($v1)
    ctx->pc = 0x1651fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 2));
label_165200:
    // 0x165200: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x165200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_165204:
    // 0x165204: 0xc0594f8  jal         func_1653E0
label_165208:
    if (ctx->pc == 0x165208u) {
        ctx->pc = 0x16520Cu;
        goto label_16520c;
    }
    ctx->pc = 0x165204u;
    SET_GPR_U32(ctx, 31, 0x16520Cu);
    ctx->pc = 0x1653E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1653E0u, 0x165204u, 0x16520Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16520Cu;
label_16520c:
    // 0x16520c: 0x1000006c  b           . + 4 + (0x6C << 2)
label_165210:
    if (ctx->pc == 0x165210u) {
        ctx->pc = 0x165214u;
        goto label_165214;
    }
    ctx->pc = 0x16520Cu;
    {
        const bool branch_taken_0x16520c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16520c) {
            ctx->pc = 0x1653C0u;
            goto label_1653c0;
        }
    }
    ctx->pc = 0x165214u;
label_165214:
    // 0x165214: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x165214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_165218:
    // 0x165218: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x165218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_16521c:
    // 0x16521c: 0x1c600068  bgtz        $v1, . + 4 + (0x68 << 2)
label_165220:
    if (ctx->pc == 0x165220u) {
        ctx->pc = 0x165224u;
        goto label_165224;
    }
    ctx->pc = 0x16521Cu;
    {
        const bool branch_taken_0x16521c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x16521c) {
            ctx->pc = 0x1653C0u;
            goto label_1653c0;
        }
    }
    ctx->pc = 0x165224u;
label_165224:
    // 0x165224: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x165224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_165228:
    // 0x165228: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x165228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16522c:
    // 0x16522c: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x16522cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_165230:
    // 0x165230: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x165230u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_165234:
    // 0x165234: 0x24a53ab0  addiu       $a1, $a1, 0x3AB0
    ctx->pc = 0x165234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15024));
label_165238:
    // 0x165238: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x165238u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16523c:
    // 0x16523c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x16523cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_165240:
    // 0x165240: 0xc08f558  jal         func_23D560
label_165244:
    if (ctx->pc == 0x165244u) {
        ctx->pc = 0x165248u;
        goto label_165248;
    }
    ctx->pc = 0x165240u;
    SET_GPR_U32(ctx, 31, 0x165248u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x165240u, 0x165248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165248u;
label_165248:
    // 0x165248: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x165248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_16524c:
    // 0x16524c: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x16524cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_165250:
    // 0x165250: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x165250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_165254:
    // 0x165254: 0xac43005c  sw          $v1, 0x5C($v0)
    ctx->pc = 0x165254u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 3));
label_165258:
    // 0x165258: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x165258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_16525c:
    // 0x16525c: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x16525cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_165260:
    // 0x165260: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x165260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_165264:
    // 0x165264: 0xac620058  sw          $v0, 0x58($v1)
    ctx->pc = 0x165264u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 2));
label_165268:
    // 0x165268: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x165268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_16526c:
    // 0x16526c: 0xc0594f8  jal         func_1653E0
label_165270:
    if (ctx->pc == 0x165270u) {
        ctx->pc = 0x165274u;
        goto label_165274;
    }
    ctx->pc = 0x16526Cu;
    SET_GPR_U32(ctx, 31, 0x165274u);
    ctx->pc = 0x1653E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1653E0u, 0x16526Cu, 0x165274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165274u;
label_165274:
    // 0x165274: 0x10000052  b           . + 4 + (0x52 << 2)
label_165278:
    if (ctx->pc == 0x165278u) {
        ctx->pc = 0x16527Cu;
        goto label_16527c;
    }
    ctx->pc = 0x165274u;
    {
        const bool branch_taken_0x165274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x165274) {
            ctx->pc = 0x1653C0u;
            goto label_1653c0;
        }
    }
    ctx->pc = 0x16527Cu;
label_16527c:
    // 0x16527c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16527cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_165280:
    // 0x165280: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x165280u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_165284:
    // 0x165284: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x165284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_165288:
    // 0x165288: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x165288u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_16528c:
    // 0x16528c: 0x24a53ad0  addiu       $a1, $a1, 0x3AD0
    ctx->pc = 0x16528cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15056));
label_165290:
    // 0x165290: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x165290u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_165294:
    // 0x165294: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x165294u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_165298:
    // 0x165298: 0xc08f558  jal         func_23D560
label_16529c:
    if (ctx->pc == 0x16529Cu) {
        ctx->pc = 0x1652A0u;
        goto label_1652a0;
    }
    ctx->pc = 0x165298u;
    SET_GPR_U32(ctx, 31, 0x1652A0u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x165298u, 0x1652A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1652A0u;
label_1652a0:
    // 0x1652a0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1652a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1652a4:
    // 0x1652a4: 0x8c640058  lw          $a0, 0x58($v1)
    ctx->pc = 0x1652a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_1652a8:
    // 0x1652a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1652a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1652ac:
    // 0x1652ac: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_1652b0:
    if (ctx->pc == 0x1652B0u) {
        ctx->pc = 0x1652B4u;
        goto label_1652b4;
    }
    ctx->pc = 0x1652ACu;
    {
        const bool branch_taken_0x1652ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1652ac) {
            ctx->pc = 0x1652C4u;
            goto label_1652c4;
        }
    }
    ctx->pc = 0x1652B4u;
label_1652b4:
    // 0x1652b4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1652b8:
    if (ctx->pc == 0x1652B8u) {
        ctx->pc = 0x1652BCu;
        goto label_1652bc;
    }
    ctx->pc = 0x1652B4u;
    {
        const bool branch_taken_0x1652b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1652b4) {
            ctx->pc = 0x1652C4u;
            goto label_1652c4;
        }
    }
    ctx->pc = 0x1652BCu;
label_1652bc:
    // 0x1652bc: 0x10000040  b           . + 4 + (0x40 << 2)
label_1652c0:
    if (ctx->pc == 0x1652C0u) {
        ctx->pc = 0x1652C4u;
        goto label_1652c4;
    }
    ctx->pc = 0x1652BCu;
    {
        const bool branch_taken_0x1652bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1652bc) {
            ctx->pc = 0x1653C0u;
            goto label_1653c0;
        }
    }
    ctx->pc = 0x1652C4u;
label_1652c4:
    // 0x1652c4: 0xc05548c  jal         func_155230
label_1652c8:
    if (ctx->pc == 0x1652C8u) {
        ctx->pc = 0x1652CCu;
        goto label_1652cc;
    }
    ctx->pc = 0x1652C4u;
    SET_GPR_U32(ctx, 31, 0x1652CCu);
    ctx->pc = 0x155230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155230u, 0x1652C4u, 0x1652CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1652CCu;
label_1652cc:
    // 0x1652cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1652ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1652d0:
    // 0x1652d0: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x1652d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_1652d4:
    // 0x1652d4: 0xc0553d4  jal         func_154F50
label_1652d8:
    if (ctx->pc == 0x1652D8u) {
        ctx->pc = 0x1652DCu;
        goto label_1652dc;
    }
    ctx->pc = 0x1652D4u;
    SET_GPR_U32(ctx, 31, 0x1652DCu);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x1652D4u, 0x1652DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1652DCu;
label_1652dc:
    // 0x1652dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1652dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1652e0:
    // 0x1652e0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1652e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1652e4:
    // 0x1652e4: 0x8c450058  lw          $a1, 0x58($v0)
    ctx->pc = 0x1652e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_1652e8:
    // 0x1652e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1652e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1652ec:
    // 0x1652ec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1652ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1652f0:
    // 0x1652f0: 0xc063af4  jal         func_18EBD0
label_1652f4:
    if (ctx->pc == 0x1652F4u) {
        ctx->pc = 0x1652F8u;
        goto label_1652f8;
    }
    ctx->pc = 0x1652F0u;
    SET_GPR_U32(ctx, 31, 0x1652F8u);
    ctx->pc = 0x18EBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EBD0u, 0x1652F0u, 0x1652F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1652F8u;
label_1652f8:
    // 0x1652f8: 0x10000031  b           . + 4 + (0x31 << 2)
label_1652fc:
    if (ctx->pc == 0x1652FCu) {
        ctx->pc = 0x165300u;
        goto label_165300;
    }
    ctx->pc = 0x1652F8u;
    {
        const bool branch_taken_0x1652f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1652f8) {
            ctx->pc = 0x1653C0u;
            goto label_1653c0;
        }
    }
    ctx->pc = 0x165300u;
label_165300:
    // 0x165300: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x165300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_165304:
    // 0x165304: 0x90630054  lbu         $v1, 0x54($v1)
    ctx->pc = 0x165304u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 84)));
label_165308:
    // 0x165308: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
label_16530c:
    if (ctx->pc == 0x16530Cu) {
        ctx->pc = 0x165310u;
        goto label_165310;
    }
    ctx->pc = 0x165308u;
    {
        const bool branch_taken_0x165308 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x165308) {
            ctx->pc = 0x1653C0u;
            goto label_1653c0;
        }
    }
    ctx->pc = 0x165310u;
label_165310:
    // 0x165310: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x165310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_165314:
    // 0x165314: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x165314u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_165318:
    // 0x165318: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x165318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_16531c:
    // 0x16531c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x16531cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_165320:
    // 0x165320: 0x24a53af0  addiu       $a1, $a1, 0x3AF0
    ctx->pc = 0x165320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15088));
label_165324:
    // 0x165324: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x165324u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_165328:
    // 0x165328: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x165328u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16532c:
    // 0x16532c: 0xc08f558  jal         func_23D560
label_165330:
    if (ctx->pc == 0x165330u) {
        ctx->pc = 0x165334u;
        goto label_165334;
    }
    ctx->pc = 0x16532Cu;
    SET_GPR_U32(ctx, 31, 0x165334u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x16532Cu, 0x165334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165334u;
label_165334:
    // 0x165334: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x165334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_165338:
    // 0x165338: 0xc088560  jal         func_221580
label_16533c:
    if (ctx->pc == 0x16533Cu) {
        ctx->pc = 0x165340u;
        goto label_165340;
    }
    ctx->pc = 0x165338u;
    SET_GPR_U32(ctx, 31, 0x165340u);
    ctx->pc = 0x221580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221580u, 0x165338u, 0x165340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165340u;
label_165340:
    // 0x165340: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x165340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_165344:
    // 0x165344: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x165344u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_165348:
    // 0x165348: 0x24a53b00  addiu       $a1, $a1, 0x3B00
    ctx->pc = 0x165348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15104));
label_16534c:
    // 0x16534c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16534cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_165350:
    // 0x165350: 0xc041b24  jal         func_106C90
label_165354:
    if (ctx->pc == 0x165354u) {
        ctx->pc = 0x165358u;
        goto label_165358;
    }
    ctx->pc = 0x165350u;
    SET_GPR_U32(ctx, 31, 0x165358u);
    ctx->pc = 0x106C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C90u, 0x165350u, 0x165358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165358u;
label_165358:
    // 0x165358: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x165358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_16535c:
    // 0x16535c: 0x27858e68  addiu       $a1, $gp, -0x7198
    ctx->pc = 0x16535cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938216));
label_165360:
    // 0x165360: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x165360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_165364:
    // 0x165364: 0xc047314  jal         func_11CC50
label_165368:
    if (ctx->pc == 0x165368u) {
        ctx->pc = 0x16536Cu;
        goto label_16536c;
    }
    ctx->pc = 0x165364u;
    SET_GPR_U32(ctx, 31, 0x16536Cu);
    ctx->pc = 0x11CC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CC50u, 0x165364u, 0x16536Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16536Cu;
label_16536c:
    // 0x16536c: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x16536cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_165370:
    // 0x165370: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x165370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_165374:
    // 0x165374: 0xc08ef28  jal         func_23BCA0
label_165378:
    if (ctx->pc == 0x165378u) {
        ctx->pc = 0x16537Cu;
        goto label_16537c;
    }
    ctx->pc = 0x165374u;
    SET_GPR_U32(ctx, 31, 0x16537Cu);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x165374u, 0x16537Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16537Cu;
label_16537c:
    // 0x16537c: 0x8f83bbb4  lw          $v1, -0x444C($gp)
    ctx->pc = 0x16537cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_165380:
    // 0x165380: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x165380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_165384:
    // 0x165384: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x165384u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_165388:
    // 0x165388: 0x8c64002c  lw          $a0, 0x2C($v1)
    ctx->pc = 0x165388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_16538c:
    // 0x16538c: 0x24050534  addiu       $a1, $zero, 0x534
    ctx->pc = 0x16538cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1332));
label_165390:
    // 0x165390: 0xc041bc4  jal         func_106F10
label_165394:
    if (ctx->pc == 0x165394u) {
        ctx->pc = 0x165398u;
        goto label_165398;
    }
    ctx->pc = 0x165390u;
    SET_GPR_U32(ctx, 31, 0x165398u);
    ctx->pc = 0x106F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106F10u, 0x165390u, 0x165398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165398u;
label_165398:
    // 0x165398: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x165398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_16539c:
    // 0x16539c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16539cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1653a0:
    // 0x1653a0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1653a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1653a4:
    // 0x1653a4: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1653a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1653a8:
    // 0x1653a8: 0x320f809  jalr        $t9
label_1653ac:
    if (ctx->pc == 0x1653ACu) {
        ctx->pc = 0x1653B0u;
        goto label_1653b0;
    }
    ctx->pc = 0x1653A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1653B0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1653A8u, 0x1653B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1653B0u;
label_1653b0:
    // 0x1653b0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1653b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1653b4:
    // 0x1653b4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1653b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1653b8:
    // 0x1653b8: 0xc0887b4  jal         func_221ED0
label_1653bc:
    if (ctx->pc == 0x1653BCu) {
        ctx->pc = 0x1653C0u;
        goto label_1653c0;
    }
    ctx->pc = 0x1653B8u;
    SET_GPR_U32(ctx, 31, 0x1653C0u);
    ctx->pc = 0x221ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221ED0u, 0x1653B8u, 0x1653C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1653C0u;
label_1653c0:
    // 0x1653c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1653c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1653c4:
    // 0x1653c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1653c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1653c8:
    // 0x1653c8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1653c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1653cc:
    // 0x1653cc: 0x3e00008  jr          $ra
label_1653d0:
    if (ctx->pc == 0x1653D0u) {
        ctx->pc = 0x1653D4u;
        goto label_1653d4;
    }
    ctx->pc = 0x1653CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1653CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1653D4u;
label_1653d4:
    // 0x1653d4: 0x0  nop
    ctx->pc = 0x1653d4u;
    // NOP
label_1653d8:
    // 0x1653d8: 0x0  nop
    ctx->pc = 0x1653d8u;
    // NOP
label_1653dc:
    // 0x1653dc: 0x0  nop
    ctx->pc = 0x1653dcu;
    // NOP
    ctx->pc = 0x1653e0u;
}
