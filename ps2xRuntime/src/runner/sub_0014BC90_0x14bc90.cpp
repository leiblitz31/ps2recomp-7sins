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

// Function: sub_0014BC90
// Address: 0x14bc90 - 0x14d520
void sub_0014BC90_0x14bc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014BC90_0x14bc90");
#endif

    switch (ctx->pc) {
        case 0x14bc90u: goto label_14bc90;
        case 0x14bc94u: goto label_14bc94;
        case 0x14bc98u: goto label_14bc98;
        case 0x14bc9cu: goto label_14bc9c;
        case 0x14bca0u: goto label_14bca0;
        case 0x14bca4u: goto label_14bca4;
        case 0x14bca8u: goto label_14bca8;
        case 0x14bcacu: goto label_14bcac;
        case 0x14bcb0u: goto label_14bcb0;
        case 0x14bcb4u: goto label_14bcb4;
        case 0x14bcb8u: goto label_14bcb8;
        case 0x14bcbcu: goto label_14bcbc;
        case 0x14bcc0u: goto label_14bcc0;
        case 0x14bcc4u: goto label_14bcc4;
        case 0x14bcc8u: goto label_14bcc8;
        case 0x14bcccu: goto label_14bccc;
        case 0x14bcd0u: goto label_14bcd0;
        case 0x14bcd4u: goto label_14bcd4;
        case 0x14bcd8u: goto label_14bcd8;
        case 0x14bcdcu: goto label_14bcdc;
        case 0x14bce0u: goto label_14bce0;
        case 0x14bce4u: goto label_14bce4;
        case 0x14bce8u: goto label_14bce8;
        case 0x14bcecu: goto label_14bcec;
        case 0x14bcf0u: goto label_14bcf0;
        case 0x14bcf4u: goto label_14bcf4;
        case 0x14bcf8u: goto label_14bcf8;
        case 0x14bcfcu: goto label_14bcfc;
        case 0x14bd00u: goto label_14bd00;
        case 0x14bd04u: goto label_14bd04;
        case 0x14bd08u: goto label_14bd08;
        case 0x14bd0cu: goto label_14bd0c;
        case 0x14bd10u: goto label_14bd10;
        case 0x14bd14u: goto label_14bd14;
        case 0x14bd18u: goto label_14bd18;
        case 0x14bd1cu: goto label_14bd1c;
        case 0x14bd20u: goto label_14bd20;
        case 0x14bd24u: goto label_14bd24;
        case 0x14bd28u: goto label_14bd28;
        case 0x14bd2cu: goto label_14bd2c;
        case 0x14bd30u: goto label_14bd30;
        case 0x14bd34u: goto label_14bd34;
        case 0x14bd38u: goto label_14bd38;
        case 0x14bd3cu: goto label_14bd3c;
        case 0x14bd40u: goto label_14bd40;
        case 0x14bd44u: goto label_14bd44;
        case 0x14bd48u: goto label_14bd48;
        case 0x14bd4cu: goto label_14bd4c;
        case 0x14bd50u: goto label_14bd50;
        case 0x14bd54u: goto label_14bd54;
        case 0x14bd58u: goto label_14bd58;
        case 0x14bd5cu: goto label_14bd5c;
        case 0x14bd60u: goto label_14bd60;
        case 0x14bd64u: goto label_14bd64;
        case 0x14bd68u: goto label_14bd68;
        case 0x14bd6cu: goto label_14bd6c;
        case 0x14bd70u: goto label_14bd70;
        case 0x14bd74u: goto label_14bd74;
        case 0x14bd78u: goto label_14bd78;
        case 0x14bd7cu: goto label_14bd7c;
        case 0x14bd80u: goto label_14bd80;
        case 0x14bd84u: goto label_14bd84;
        case 0x14bd88u: goto label_14bd88;
        case 0x14bd8cu: goto label_14bd8c;
        case 0x14bd90u: goto label_14bd90;
        case 0x14bd94u: goto label_14bd94;
        case 0x14bd98u: goto label_14bd98;
        case 0x14bd9cu: goto label_14bd9c;
        case 0x14bda0u: goto label_14bda0;
        case 0x14bda4u: goto label_14bda4;
        case 0x14bda8u: goto label_14bda8;
        case 0x14bdacu: goto label_14bdac;
        case 0x14bdb0u: goto label_14bdb0;
        case 0x14bdb4u: goto label_14bdb4;
        case 0x14bdb8u: goto label_14bdb8;
        case 0x14bdbcu: goto label_14bdbc;
        case 0x14bdc0u: goto label_14bdc0;
        case 0x14bdc4u: goto label_14bdc4;
        case 0x14bdc8u: goto label_14bdc8;
        case 0x14bdccu: goto label_14bdcc;
        case 0x14bdd0u: goto label_14bdd0;
        case 0x14bdd4u: goto label_14bdd4;
        case 0x14bdd8u: goto label_14bdd8;
        case 0x14bddcu: goto label_14bddc;
        case 0x14bde0u: goto label_14bde0;
        case 0x14bde4u: goto label_14bde4;
        case 0x14bde8u: goto label_14bde8;
        case 0x14bdecu: goto label_14bdec;
        case 0x14bdf0u: goto label_14bdf0;
        case 0x14bdf4u: goto label_14bdf4;
        case 0x14bdf8u: goto label_14bdf8;
        case 0x14bdfcu: goto label_14bdfc;
        case 0x14be00u: goto label_14be00;
        case 0x14be04u: goto label_14be04;
        case 0x14be08u: goto label_14be08;
        case 0x14be0cu: goto label_14be0c;
        case 0x14be10u: goto label_14be10;
        case 0x14be14u: goto label_14be14;
        case 0x14be18u: goto label_14be18;
        case 0x14be1cu: goto label_14be1c;
        case 0x14be20u: goto label_14be20;
        case 0x14be24u: goto label_14be24;
        case 0x14be28u: goto label_14be28;
        case 0x14be2cu: goto label_14be2c;
        case 0x14be30u: goto label_14be30;
        case 0x14be34u: goto label_14be34;
        case 0x14be38u: goto label_14be38;
        case 0x14be3cu: goto label_14be3c;
        case 0x14be40u: goto label_14be40;
        case 0x14be44u: goto label_14be44;
        case 0x14be48u: goto label_14be48;
        case 0x14be4cu: goto label_14be4c;
        case 0x14be50u: goto label_14be50;
        case 0x14be54u: goto label_14be54;
        case 0x14be58u: goto label_14be58;
        case 0x14be5cu: goto label_14be5c;
        case 0x14be60u: goto label_14be60;
        case 0x14be64u: goto label_14be64;
        case 0x14be68u: goto label_14be68;
        case 0x14be6cu: goto label_14be6c;
        case 0x14be70u: goto label_14be70;
        case 0x14be74u: goto label_14be74;
        case 0x14be78u: goto label_14be78;
        case 0x14be7cu: goto label_14be7c;
        case 0x14be80u: goto label_14be80;
        case 0x14be84u: goto label_14be84;
        case 0x14be88u: goto label_14be88;
        case 0x14be8cu: goto label_14be8c;
        case 0x14be90u: goto label_14be90;
        case 0x14be94u: goto label_14be94;
        case 0x14be98u: goto label_14be98;
        case 0x14be9cu: goto label_14be9c;
        case 0x14bea0u: goto label_14bea0;
        case 0x14bea4u: goto label_14bea4;
        case 0x14bea8u: goto label_14bea8;
        case 0x14beacu: goto label_14beac;
        case 0x14beb0u: goto label_14beb0;
        case 0x14beb4u: goto label_14beb4;
        case 0x14beb8u: goto label_14beb8;
        case 0x14bebcu: goto label_14bebc;
        case 0x14bec0u: goto label_14bec0;
        case 0x14bec4u: goto label_14bec4;
        case 0x14bec8u: goto label_14bec8;
        case 0x14beccu: goto label_14becc;
        case 0x14bed0u: goto label_14bed0;
        case 0x14bed4u: goto label_14bed4;
        case 0x14bed8u: goto label_14bed8;
        case 0x14bedcu: goto label_14bedc;
        case 0x14bee0u: goto label_14bee0;
        case 0x14bee4u: goto label_14bee4;
        case 0x14bee8u: goto label_14bee8;
        case 0x14beecu: goto label_14beec;
        case 0x14bef0u: goto label_14bef0;
        case 0x14bef4u: goto label_14bef4;
        case 0x14bef8u: goto label_14bef8;
        case 0x14befcu: goto label_14befc;
        case 0x14bf00u: goto label_14bf00;
        case 0x14bf04u: goto label_14bf04;
        case 0x14bf08u: goto label_14bf08;
        case 0x14bf0cu: goto label_14bf0c;
        case 0x14bf10u: goto label_14bf10;
        case 0x14bf14u: goto label_14bf14;
        case 0x14bf18u: goto label_14bf18;
        case 0x14bf1cu: goto label_14bf1c;
        case 0x14bf20u: goto label_14bf20;
        case 0x14bf24u: goto label_14bf24;
        case 0x14bf28u: goto label_14bf28;
        case 0x14bf2cu: goto label_14bf2c;
        case 0x14bf30u: goto label_14bf30;
        case 0x14bf34u: goto label_14bf34;
        case 0x14bf38u: goto label_14bf38;
        case 0x14bf3cu: goto label_14bf3c;
        case 0x14bf40u: goto label_14bf40;
        case 0x14bf44u: goto label_14bf44;
        case 0x14bf48u: goto label_14bf48;
        case 0x14bf4cu: goto label_14bf4c;
        case 0x14bf50u: goto label_14bf50;
        case 0x14bf54u: goto label_14bf54;
        case 0x14bf58u: goto label_14bf58;
        case 0x14bf5cu: goto label_14bf5c;
        case 0x14bf60u: goto label_14bf60;
        case 0x14bf64u: goto label_14bf64;
        case 0x14bf68u: goto label_14bf68;
        case 0x14bf6cu: goto label_14bf6c;
        case 0x14bf70u: goto label_14bf70;
        case 0x14bf74u: goto label_14bf74;
        case 0x14bf78u: goto label_14bf78;
        case 0x14bf7cu: goto label_14bf7c;
        case 0x14bf80u: goto label_14bf80;
        case 0x14bf84u: goto label_14bf84;
        case 0x14bf88u: goto label_14bf88;
        case 0x14bf8cu: goto label_14bf8c;
        case 0x14bf90u: goto label_14bf90;
        case 0x14bf94u: goto label_14bf94;
        case 0x14bf98u: goto label_14bf98;
        case 0x14bf9cu: goto label_14bf9c;
        case 0x14bfa0u: goto label_14bfa0;
        case 0x14bfa4u: goto label_14bfa4;
        case 0x14bfa8u: goto label_14bfa8;
        case 0x14bfacu: goto label_14bfac;
        case 0x14bfb0u: goto label_14bfb0;
        case 0x14bfb4u: goto label_14bfb4;
        case 0x14bfb8u: goto label_14bfb8;
        case 0x14bfbcu: goto label_14bfbc;
        case 0x14bfc0u: goto label_14bfc0;
        case 0x14bfc4u: goto label_14bfc4;
        case 0x14bfc8u: goto label_14bfc8;
        case 0x14bfccu: goto label_14bfcc;
        case 0x14bfd0u: goto label_14bfd0;
        case 0x14bfd4u: goto label_14bfd4;
        case 0x14bfd8u: goto label_14bfd8;
        case 0x14bfdcu: goto label_14bfdc;
        case 0x14bfe0u: goto label_14bfe0;
        case 0x14bfe4u: goto label_14bfe4;
        case 0x14bfe8u: goto label_14bfe8;
        case 0x14bfecu: goto label_14bfec;
        case 0x14bff0u: goto label_14bff0;
        case 0x14bff4u: goto label_14bff4;
        case 0x14bff8u: goto label_14bff8;
        case 0x14bffcu: goto label_14bffc;
        case 0x14c000u: goto label_14c000;
        case 0x14c004u: goto label_14c004;
        case 0x14c008u: goto label_14c008;
        case 0x14c00cu: goto label_14c00c;
        case 0x14c010u: goto label_14c010;
        case 0x14c014u: goto label_14c014;
        case 0x14c018u: goto label_14c018;
        case 0x14c01cu: goto label_14c01c;
        case 0x14c020u: goto label_14c020;
        case 0x14c024u: goto label_14c024;
        case 0x14c028u: goto label_14c028;
        case 0x14c02cu: goto label_14c02c;
        case 0x14c030u: goto label_14c030;
        case 0x14c034u: goto label_14c034;
        case 0x14c038u: goto label_14c038;
        case 0x14c03cu: goto label_14c03c;
        case 0x14c040u: goto label_14c040;
        case 0x14c044u: goto label_14c044;
        case 0x14c048u: goto label_14c048;
        case 0x14c04cu: goto label_14c04c;
        case 0x14c050u: goto label_14c050;
        case 0x14c054u: goto label_14c054;
        case 0x14c058u: goto label_14c058;
        case 0x14c05cu: goto label_14c05c;
        case 0x14c060u: goto label_14c060;
        case 0x14c064u: goto label_14c064;
        case 0x14c068u: goto label_14c068;
        case 0x14c06cu: goto label_14c06c;
        case 0x14c070u: goto label_14c070;
        case 0x14c074u: goto label_14c074;
        case 0x14c078u: goto label_14c078;
        case 0x14c07cu: goto label_14c07c;
        case 0x14c080u: goto label_14c080;
        case 0x14c084u: goto label_14c084;
        case 0x14c088u: goto label_14c088;
        case 0x14c08cu: goto label_14c08c;
        case 0x14c090u: goto label_14c090;
        case 0x14c094u: goto label_14c094;
        case 0x14c098u: goto label_14c098;
        case 0x14c09cu: goto label_14c09c;
        case 0x14c0a0u: goto label_14c0a0;
        case 0x14c0a4u: goto label_14c0a4;
        case 0x14c0a8u: goto label_14c0a8;
        case 0x14c0acu: goto label_14c0ac;
        case 0x14c0b0u: goto label_14c0b0;
        case 0x14c0b4u: goto label_14c0b4;
        case 0x14c0b8u: goto label_14c0b8;
        case 0x14c0bcu: goto label_14c0bc;
        case 0x14c0c0u: goto label_14c0c0;
        case 0x14c0c4u: goto label_14c0c4;
        case 0x14c0c8u: goto label_14c0c8;
        case 0x14c0ccu: goto label_14c0cc;
        case 0x14c0d0u: goto label_14c0d0;
        case 0x14c0d4u: goto label_14c0d4;
        case 0x14c0d8u: goto label_14c0d8;
        case 0x14c0dcu: goto label_14c0dc;
        case 0x14c0e0u: goto label_14c0e0;
        case 0x14c0e4u: goto label_14c0e4;
        case 0x14c0e8u: goto label_14c0e8;
        case 0x14c0ecu: goto label_14c0ec;
        case 0x14c0f0u: goto label_14c0f0;
        case 0x14c0f4u: goto label_14c0f4;
        case 0x14c0f8u: goto label_14c0f8;
        case 0x14c0fcu: goto label_14c0fc;
        case 0x14c100u: goto label_14c100;
        case 0x14c104u: goto label_14c104;
        case 0x14c108u: goto label_14c108;
        case 0x14c10cu: goto label_14c10c;
        case 0x14c110u: goto label_14c110;
        case 0x14c114u: goto label_14c114;
        case 0x14c118u: goto label_14c118;
        case 0x14c11cu: goto label_14c11c;
        case 0x14c120u: goto label_14c120;
        case 0x14c124u: goto label_14c124;
        case 0x14c128u: goto label_14c128;
        case 0x14c12cu: goto label_14c12c;
        case 0x14c130u: goto label_14c130;
        case 0x14c134u: goto label_14c134;
        case 0x14c138u: goto label_14c138;
        case 0x14c13cu: goto label_14c13c;
        case 0x14c140u: goto label_14c140;
        case 0x14c144u: goto label_14c144;
        case 0x14c148u: goto label_14c148;
        case 0x14c14cu: goto label_14c14c;
        case 0x14c150u: goto label_14c150;
        case 0x14c154u: goto label_14c154;
        case 0x14c158u: goto label_14c158;
        case 0x14c15cu: goto label_14c15c;
        case 0x14c160u: goto label_14c160;
        case 0x14c164u: goto label_14c164;
        case 0x14c168u: goto label_14c168;
        case 0x14c16cu: goto label_14c16c;
        case 0x14c170u: goto label_14c170;
        case 0x14c174u: goto label_14c174;
        case 0x14c178u: goto label_14c178;
        case 0x14c17cu: goto label_14c17c;
        case 0x14c180u: goto label_14c180;
        case 0x14c184u: goto label_14c184;
        case 0x14c188u: goto label_14c188;
        case 0x14c18cu: goto label_14c18c;
        case 0x14c190u: goto label_14c190;
        case 0x14c194u: goto label_14c194;
        case 0x14c198u: goto label_14c198;
        case 0x14c19cu: goto label_14c19c;
        case 0x14c1a0u: goto label_14c1a0;
        case 0x14c1a4u: goto label_14c1a4;
        case 0x14c1a8u: goto label_14c1a8;
        case 0x14c1acu: goto label_14c1ac;
        case 0x14c1b0u: goto label_14c1b0;
        case 0x14c1b4u: goto label_14c1b4;
        case 0x14c1b8u: goto label_14c1b8;
        case 0x14c1bcu: goto label_14c1bc;
        case 0x14c1c0u: goto label_14c1c0;
        case 0x14c1c4u: goto label_14c1c4;
        case 0x14c1c8u: goto label_14c1c8;
        case 0x14c1ccu: goto label_14c1cc;
        case 0x14c1d0u: goto label_14c1d0;
        case 0x14c1d4u: goto label_14c1d4;
        case 0x14c1d8u: goto label_14c1d8;
        case 0x14c1dcu: goto label_14c1dc;
        case 0x14c1e0u: goto label_14c1e0;
        case 0x14c1e4u: goto label_14c1e4;
        case 0x14c1e8u: goto label_14c1e8;
        case 0x14c1ecu: goto label_14c1ec;
        case 0x14c1f0u: goto label_14c1f0;
        case 0x14c1f4u: goto label_14c1f4;
        case 0x14c1f8u: goto label_14c1f8;
        case 0x14c1fcu: goto label_14c1fc;
        case 0x14c200u: goto label_14c200;
        case 0x14c204u: goto label_14c204;
        case 0x14c208u: goto label_14c208;
        case 0x14c20cu: goto label_14c20c;
        case 0x14c210u: goto label_14c210;
        case 0x14c214u: goto label_14c214;
        case 0x14c218u: goto label_14c218;
        case 0x14c21cu: goto label_14c21c;
        case 0x14c220u: goto label_14c220;
        case 0x14c224u: goto label_14c224;
        case 0x14c228u: goto label_14c228;
        case 0x14c22cu: goto label_14c22c;
        case 0x14c230u: goto label_14c230;
        case 0x14c234u: goto label_14c234;
        case 0x14c238u: goto label_14c238;
        case 0x14c23cu: goto label_14c23c;
        case 0x14c240u: goto label_14c240;
        case 0x14c244u: goto label_14c244;
        case 0x14c248u: goto label_14c248;
        case 0x14c24cu: goto label_14c24c;
        case 0x14c250u: goto label_14c250;
        case 0x14c254u: goto label_14c254;
        case 0x14c258u: goto label_14c258;
        case 0x14c25cu: goto label_14c25c;
        case 0x14c260u: goto label_14c260;
        case 0x14c264u: goto label_14c264;
        case 0x14c268u: goto label_14c268;
        case 0x14c26cu: goto label_14c26c;
        case 0x14c270u: goto label_14c270;
        case 0x14c274u: goto label_14c274;
        case 0x14c278u: goto label_14c278;
        case 0x14c27cu: goto label_14c27c;
        case 0x14c280u: goto label_14c280;
        case 0x14c284u: goto label_14c284;
        case 0x14c288u: goto label_14c288;
        case 0x14c28cu: goto label_14c28c;
        case 0x14c290u: goto label_14c290;
        case 0x14c294u: goto label_14c294;
        case 0x14c298u: goto label_14c298;
        case 0x14c29cu: goto label_14c29c;
        case 0x14c2a0u: goto label_14c2a0;
        case 0x14c2a4u: goto label_14c2a4;
        case 0x14c2a8u: goto label_14c2a8;
        case 0x14c2acu: goto label_14c2ac;
        case 0x14c2b0u: goto label_14c2b0;
        case 0x14c2b4u: goto label_14c2b4;
        case 0x14c2b8u: goto label_14c2b8;
        case 0x14c2bcu: goto label_14c2bc;
        case 0x14c2c0u: goto label_14c2c0;
        case 0x14c2c4u: goto label_14c2c4;
        case 0x14c2c8u: goto label_14c2c8;
        case 0x14c2ccu: goto label_14c2cc;
        case 0x14c2d0u: goto label_14c2d0;
        case 0x14c2d4u: goto label_14c2d4;
        case 0x14c2d8u: goto label_14c2d8;
        case 0x14c2dcu: goto label_14c2dc;
        case 0x14c2e0u: goto label_14c2e0;
        case 0x14c2e4u: goto label_14c2e4;
        case 0x14c2e8u: goto label_14c2e8;
        case 0x14c2ecu: goto label_14c2ec;
        case 0x14c2f0u: goto label_14c2f0;
        case 0x14c2f4u: goto label_14c2f4;
        case 0x14c2f8u: goto label_14c2f8;
        case 0x14c2fcu: goto label_14c2fc;
        case 0x14c300u: goto label_14c300;
        case 0x14c304u: goto label_14c304;
        case 0x14c308u: goto label_14c308;
        case 0x14c30cu: goto label_14c30c;
        case 0x14c310u: goto label_14c310;
        case 0x14c314u: goto label_14c314;
        case 0x14c318u: goto label_14c318;
        case 0x14c31cu: goto label_14c31c;
        case 0x14c320u: goto label_14c320;
        case 0x14c324u: goto label_14c324;
        case 0x14c328u: goto label_14c328;
        case 0x14c32cu: goto label_14c32c;
        case 0x14c330u: goto label_14c330;
        case 0x14c334u: goto label_14c334;
        case 0x14c338u: goto label_14c338;
        case 0x14c33cu: goto label_14c33c;
        case 0x14c340u: goto label_14c340;
        case 0x14c344u: goto label_14c344;
        case 0x14c348u: goto label_14c348;
        case 0x14c34cu: goto label_14c34c;
        case 0x14c350u: goto label_14c350;
        case 0x14c354u: goto label_14c354;
        case 0x14c358u: goto label_14c358;
        case 0x14c35cu: goto label_14c35c;
        case 0x14c360u: goto label_14c360;
        case 0x14c364u: goto label_14c364;
        case 0x14c368u: goto label_14c368;
        case 0x14c36cu: goto label_14c36c;
        case 0x14c370u: goto label_14c370;
        case 0x14c374u: goto label_14c374;
        case 0x14c378u: goto label_14c378;
        case 0x14c37cu: goto label_14c37c;
        case 0x14c380u: goto label_14c380;
        case 0x14c384u: goto label_14c384;
        case 0x14c388u: goto label_14c388;
        case 0x14c38cu: goto label_14c38c;
        case 0x14c390u: goto label_14c390;
        case 0x14c394u: goto label_14c394;
        case 0x14c398u: goto label_14c398;
        case 0x14c39cu: goto label_14c39c;
        case 0x14c3a0u: goto label_14c3a0;
        case 0x14c3a4u: goto label_14c3a4;
        case 0x14c3a8u: goto label_14c3a8;
        case 0x14c3acu: goto label_14c3ac;
        case 0x14c3b0u: goto label_14c3b0;
        case 0x14c3b4u: goto label_14c3b4;
        case 0x14c3b8u: goto label_14c3b8;
        case 0x14c3bcu: goto label_14c3bc;
        case 0x14c3c0u: goto label_14c3c0;
        case 0x14c3c4u: goto label_14c3c4;
        case 0x14c3c8u: goto label_14c3c8;
        case 0x14c3ccu: goto label_14c3cc;
        case 0x14c3d0u: goto label_14c3d0;
        case 0x14c3d4u: goto label_14c3d4;
        case 0x14c3d8u: goto label_14c3d8;
        case 0x14c3dcu: goto label_14c3dc;
        case 0x14c3e0u: goto label_14c3e0;
        case 0x14c3e4u: goto label_14c3e4;
        case 0x14c3e8u: goto label_14c3e8;
        case 0x14c3ecu: goto label_14c3ec;
        case 0x14c3f0u: goto label_14c3f0;
        case 0x14c3f4u: goto label_14c3f4;
        case 0x14c3f8u: goto label_14c3f8;
        case 0x14c3fcu: goto label_14c3fc;
        case 0x14c400u: goto label_14c400;
        case 0x14c404u: goto label_14c404;
        case 0x14c408u: goto label_14c408;
        case 0x14c40cu: goto label_14c40c;
        case 0x14c410u: goto label_14c410;
        case 0x14c414u: goto label_14c414;
        case 0x14c418u: goto label_14c418;
        case 0x14c41cu: goto label_14c41c;
        case 0x14c420u: goto label_14c420;
        case 0x14c424u: goto label_14c424;
        case 0x14c428u: goto label_14c428;
        case 0x14c42cu: goto label_14c42c;
        case 0x14c430u: goto label_14c430;
        case 0x14c434u: goto label_14c434;
        case 0x14c438u: goto label_14c438;
        case 0x14c43cu: goto label_14c43c;
        case 0x14c440u: goto label_14c440;
        case 0x14c444u: goto label_14c444;
        case 0x14c448u: goto label_14c448;
        case 0x14c44cu: goto label_14c44c;
        case 0x14c450u: goto label_14c450;
        case 0x14c454u: goto label_14c454;
        case 0x14c458u: goto label_14c458;
        case 0x14c45cu: goto label_14c45c;
        case 0x14c460u: goto label_14c460;
        case 0x14c464u: goto label_14c464;
        case 0x14c468u: goto label_14c468;
        case 0x14c46cu: goto label_14c46c;
        case 0x14c470u: goto label_14c470;
        case 0x14c474u: goto label_14c474;
        case 0x14c478u: goto label_14c478;
        case 0x14c47cu: goto label_14c47c;
        case 0x14c480u: goto label_14c480;
        case 0x14c484u: goto label_14c484;
        case 0x14c488u: goto label_14c488;
        case 0x14c48cu: goto label_14c48c;
        case 0x14c490u: goto label_14c490;
        case 0x14c494u: goto label_14c494;
        case 0x14c498u: goto label_14c498;
        case 0x14c49cu: goto label_14c49c;
        case 0x14c4a0u: goto label_14c4a0;
        case 0x14c4a4u: goto label_14c4a4;
        case 0x14c4a8u: goto label_14c4a8;
        case 0x14c4acu: goto label_14c4ac;
        case 0x14c4b0u: goto label_14c4b0;
        case 0x14c4b4u: goto label_14c4b4;
        case 0x14c4b8u: goto label_14c4b8;
        case 0x14c4bcu: goto label_14c4bc;
        case 0x14c4c0u: goto label_14c4c0;
        case 0x14c4c4u: goto label_14c4c4;
        case 0x14c4c8u: goto label_14c4c8;
        case 0x14c4ccu: goto label_14c4cc;
        case 0x14c4d0u: goto label_14c4d0;
        case 0x14c4d4u: goto label_14c4d4;
        case 0x14c4d8u: goto label_14c4d8;
        case 0x14c4dcu: goto label_14c4dc;
        case 0x14c4e0u: goto label_14c4e0;
        case 0x14c4e4u: goto label_14c4e4;
        case 0x14c4e8u: goto label_14c4e8;
        case 0x14c4ecu: goto label_14c4ec;
        case 0x14c4f0u: goto label_14c4f0;
        case 0x14c4f4u: goto label_14c4f4;
        case 0x14c4f8u: goto label_14c4f8;
        case 0x14c4fcu: goto label_14c4fc;
        case 0x14c500u: goto label_14c500;
        case 0x14c504u: goto label_14c504;
        case 0x14c508u: goto label_14c508;
        case 0x14c50cu: goto label_14c50c;
        case 0x14c510u: goto label_14c510;
        case 0x14c514u: goto label_14c514;
        case 0x14c518u: goto label_14c518;
        case 0x14c51cu: goto label_14c51c;
        case 0x14c520u: goto label_14c520;
        case 0x14c524u: goto label_14c524;
        case 0x14c528u: goto label_14c528;
        case 0x14c52cu: goto label_14c52c;
        case 0x14c530u: goto label_14c530;
        case 0x14c534u: goto label_14c534;
        case 0x14c538u: goto label_14c538;
        case 0x14c53cu: goto label_14c53c;
        case 0x14c540u: goto label_14c540;
        case 0x14c544u: goto label_14c544;
        case 0x14c548u: goto label_14c548;
        case 0x14c54cu: goto label_14c54c;
        case 0x14c550u: goto label_14c550;
        case 0x14c554u: goto label_14c554;
        case 0x14c558u: goto label_14c558;
        case 0x14c55cu: goto label_14c55c;
        case 0x14c560u: goto label_14c560;
        case 0x14c564u: goto label_14c564;
        case 0x14c568u: goto label_14c568;
        case 0x14c56cu: goto label_14c56c;
        case 0x14c570u: goto label_14c570;
        case 0x14c574u: goto label_14c574;
        case 0x14c578u: goto label_14c578;
        case 0x14c57cu: goto label_14c57c;
        case 0x14c580u: goto label_14c580;
        case 0x14c584u: goto label_14c584;
        case 0x14c588u: goto label_14c588;
        case 0x14c58cu: goto label_14c58c;
        case 0x14c590u: goto label_14c590;
        case 0x14c594u: goto label_14c594;
        case 0x14c598u: goto label_14c598;
        case 0x14c59cu: goto label_14c59c;
        case 0x14c5a0u: goto label_14c5a0;
        case 0x14c5a4u: goto label_14c5a4;
        case 0x14c5a8u: goto label_14c5a8;
        case 0x14c5acu: goto label_14c5ac;
        case 0x14c5b0u: goto label_14c5b0;
        case 0x14c5b4u: goto label_14c5b4;
        case 0x14c5b8u: goto label_14c5b8;
        case 0x14c5bcu: goto label_14c5bc;
        case 0x14c5c0u: goto label_14c5c0;
        case 0x14c5c4u: goto label_14c5c4;
        case 0x14c5c8u: goto label_14c5c8;
        case 0x14c5ccu: goto label_14c5cc;
        case 0x14c5d0u: goto label_14c5d0;
        case 0x14c5d4u: goto label_14c5d4;
        case 0x14c5d8u: goto label_14c5d8;
        case 0x14c5dcu: goto label_14c5dc;
        case 0x14c5e0u: goto label_14c5e0;
        case 0x14c5e4u: goto label_14c5e4;
        case 0x14c5e8u: goto label_14c5e8;
        case 0x14c5ecu: goto label_14c5ec;
        case 0x14c5f0u: goto label_14c5f0;
        case 0x14c5f4u: goto label_14c5f4;
        case 0x14c5f8u: goto label_14c5f8;
        case 0x14c5fcu: goto label_14c5fc;
        case 0x14c600u: goto label_14c600;
        case 0x14c604u: goto label_14c604;
        case 0x14c608u: goto label_14c608;
        case 0x14c60cu: goto label_14c60c;
        case 0x14c610u: goto label_14c610;
        case 0x14c614u: goto label_14c614;
        case 0x14c618u: goto label_14c618;
        case 0x14c61cu: goto label_14c61c;
        case 0x14c620u: goto label_14c620;
        case 0x14c624u: goto label_14c624;
        case 0x14c628u: goto label_14c628;
        case 0x14c62cu: goto label_14c62c;
        case 0x14c630u: goto label_14c630;
        case 0x14c634u: goto label_14c634;
        case 0x14c638u: goto label_14c638;
        case 0x14c63cu: goto label_14c63c;
        case 0x14c640u: goto label_14c640;
        case 0x14c644u: goto label_14c644;
        case 0x14c648u: goto label_14c648;
        case 0x14c64cu: goto label_14c64c;
        case 0x14c650u: goto label_14c650;
        case 0x14c654u: goto label_14c654;
        case 0x14c658u: goto label_14c658;
        case 0x14c65cu: goto label_14c65c;
        case 0x14c660u: goto label_14c660;
        case 0x14c664u: goto label_14c664;
        case 0x14c668u: goto label_14c668;
        case 0x14c66cu: goto label_14c66c;
        case 0x14c670u: goto label_14c670;
        case 0x14c674u: goto label_14c674;
        case 0x14c678u: goto label_14c678;
        case 0x14c67cu: goto label_14c67c;
        case 0x14c680u: goto label_14c680;
        case 0x14c684u: goto label_14c684;
        case 0x14c688u: goto label_14c688;
        case 0x14c68cu: goto label_14c68c;
        case 0x14c690u: goto label_14c690;
        case 0x14c694u: goto label_14c694;
        case 0x14c698u: goto label_14c698;
        case 0x14c69cu: goto label_14c69c;
        case 0x14c6a0u: goto label_14c6a0;
        case 0x14c6a4u: goto label_14c6a4;
        case 0x14c6a8u: goto label_14c6a8;
        case 0x14c6acu: goto label_14c6ac;
        case 0x14c6b0u: goto label_14c6b0;
        case 0x14c6b4u: goto label_14c6b4;
        case 0x14c6b8u: goto label_14c6b8;
        case 0x14c6bcu: goto label_14c6bc;
        case 0x14c6c0u: goto label_14c6c0;
        case 0x14c6c4u: goto label_14c6c4;
        case 0x14c6c8u: goto label_14c6c8;
        case 0x14c6ccu: goto label_14c6cc;
        case 0x14c6d0u: goto label_14c6d0;
        case 0x14c6d4u: goto label_14c6d4;
        case 0x14c6d8u: goto label_14c6d8;
        case 0x14c6dcu: goto label_14c6dc;
        case 0x14c6e0u: goto label_14c6e0;
        case 0x14c6e4u: goto label_14c6e4;
        case 0x14c6e8u: goto label_14c6e8;
        case 0x14c6ecu: goto label_14c6ec;
        case 0x14c6f0u: goto label_14c6f0;
        case 0x14c6f4u: goto label_14c6f4;
        case 0x14c6f8u: goto label_14c6f8;
        case 0x14c6fcu: goto label_14c6fc;
        case 0x14c700u: goto label_14c700;
        case 0x14c704u: goto label_14c704;
        case 0x14c708u: goto label_14c708;
        case 0x14c70cu: goto label_14c70c;
        case 0x14c710u: goto label_14c710;
        case 0x14c714u: goto label_14c714;
        case 0x14c718u: goto label_14c718;
        case 0x14c71cu: goto label_14c71c;
        case 0x14c720u: goto label_14c720;
        case 0x14c724u: goto label_14c724;
        case 0x14c728u: goto label_14c728;
        case 0x14c72cu: goto label_14c72c;
        case 0x14c730u: goto label_14c730;
        case 0x14c734u: goto label_14c734;
        case 0x14c738u: goto label_14c738;
        case 0x14c73cu: goto label_14c73c;
        case 0x14c740u: goto label_14c740;
        case 0x14c744u: goto label_14c744;
        case 0x14c748u: goto label_14c748;
        case 0x14c74cu: goto label_14c74c;
        case 0x14c750u: goto label_14c750;
        case 0x14c754u: goto label_14c754;
        case 0x14c758u: goto label_14c758;
        case 0x14c75cu: goto label_14c75c;
        case 0x14c760u: goto label_14c760;
        case 0x14c764u: goto label_14c764;
        case 0x14c768u: goto label_14c768;
        case 0x14c76cu: goto label_14c76c;
        case 0x14c770u: goto label_14c770;
        case 0x14c774u: goto label_14c774;
        case 0x14c778u: goto label_14c778;
        case 0x14c77cu: goto label_14c77c;
        case 0x14c780u: goto label_14c780;
        case 0x14c784u: goto label_14c784;
        case 0x14c788u: goto label_14c788;
        case 0x14c78cu: goto label_14c78c;
        case 0x14c790u: goto label_14c790;
        case 0x14c794u: goto label_14c794;
        case 0x14c798u: goto label_14c798;
        case 0x14c79cu: goto label_14c79c;
        case 0x14c7a0u: goto label_14c7a0;
        case 0x14c7a4u: goto label_14c7a4;
        case 0x14c7a8u: goto label_14c7a8;
        case 0x14c7acu: goto label_14c7ac;
        case 0x14c7b0u: goto label_14c7b0;
        case 0x14c7b4u: goto label_14c7b4;
        case 0x14c7b8u: goto label_14c7b8;
        case 0x14c7bcu: goto label_14c7bc;
        case 0x14c7c0u: goto label_14c7c0;
        case 0x14c7c4u: goto label_14c7c4;
        case 0x14c7c8u: goto label_14c7c8;
        case 0x14c7ccu: goto label_14c7cc;
        case 0x14c7d0u: goto label_14c7d0;
        case 0x14c7d4u: goto label_14c7d4;
        case 0x14c7d8u: goto label_14c7d8;
        case 0x14c7dcu: goto label_14c7dc;
        case 0x14c7e0u: goto label_14c7e0;
        case 0x14c7e4u: goto label_14c7e4;
        case 0x14c7e8u: goto label_14c7e8;
        case 0x14c7ecu: goto label_14c7ec;
        case 0x14c7f0u: goto label_14c7f0;
        case 0x14c7f4u: goto label_14c7f4;
        case 0x14c7f8u: goto label_14c7f8;
        case 0x14c7fcu: goto label_14c7fc;
        case 0x14c800u: goto label_14c800;
        case 0x14c804u: goto label_14c804;
        case 0x14c808u: goto label_14c808;
        case 0x14c80cu: goto label_14c80c;
        case 0x14c810u: goto label_14c810;
        case 0x14c814u: goto label_14c814;
        case 0x14c818u: goto label_14c818;
        case 0x14c81cu: goto label_14c81c;
        case 0x14c820u: goto label_14c820;
        case 0x14c824u: goto label_14c824;
        case 0x14c828u: goto label_14c828;
        case 0x14c82cu: goto label_14c82c;
        case 0x14c830u: goto label_14c830;
        case 0x14c834u: goto label_14c834;
        case 0x14c838u: goto label_14c838;
        case 0x14c83cu: goto label_14c83c;
        case 0x14c840u: goto label_14c840;
        case 0x14c844u: goto label_14c844;
        case 0x14c848u: goto label_14c848;
        case 0x14c84cu: goto label_14c84c;
        case 0x14c850u: goto label_14c850;
        case 0x14c854u: goto label_14c854;
        case 0x14c858u: goto label_14c858;
        case 0x14c85cu: goto label_14c85c;
        case 0x14c860u: goto label_14c860;
        case 0x14c864u: goto label_14c864;
        case 0x14c868u: goto label_14c868;
        case 0x14c86cu: goto label_14c86c;
        case 0x14c870u: goto label_14c870;
        case 0x14c874u: goto label_14c874;
        case 0x14c878u: goto label_14c878;
        case 0x14c87cu: goto label_14c87c;
        case 0x14c880u: goto label_14c880;
        case 0x14c884u: goto label_14c884;
        case 0x14c888u: goto label_14c888;
        case 0x14c88cu: goto label_14c88c;
        case 0x14c890u: goto label_14c890;
        case 0x14c894u: goto label_14c894;
        case 0x14c898u: goto label_14c898;
        case 0x14c89cu: goto label_14c89c;
        case 0x14c8a0u: goto label_14c8a0;
        case 0x14c8a4u: goto label_14c8a4;
        case 0x14c8a8u: goto label_14c8a8;
        case 0x14c8acu: goto label_14c8ac;
        case 0x14c8b0u: goto label_14c8b0;
        case 0x14c8b4u: goto label_14c8b4;
        case 0x14c8b8u: goto label_14c8b8;
        case 0x14c8bcu: goto label_14c8bc;
        case 0x14c8c0u: goto label_14c8c0;
        case 0x14c8c4u: goto label_14c8c4;
        case 0x14c8c8u: goto label_14c8c8;
        case 0x14c8ccu: goto label_14c8cc;
        case 0x14c8d0u: goto label_14c8d0;
        case 0x14c8d4u: goto label_14c8d4;
        case 0x14c8d8u: goto label_14c8d8;
        case 0x14c8dcu: goto label_14c8dc;
        case 0x14c8e0u: goto label_14c8e0;
        case 0x14c8e4u: goto label_14c8e4;
        case 0x14c8e8u: goto label_14c8e8;
        case 0x14c8ecu: goto label_14c8ec;
        case 0x14c8f0u: goto label_14c8f0;
        case 0x14c8f4u: goto label_14c8f4;
        case 0x14c8f8u: goto label_14c8f8;
        case 0x14c8fcu: goto label_14c8fc;
        case 0x14c900u: goto label_14c900;
        case 0x14c904u: goto label_14c904;
        case 0x14c908u: goto label_14c908;
        case 0x14c90cu: goto label_14c90c;
        case 0x14c910u: goto label_14c910;
        case 0x14c914u: goto label_14c914;
        case 0x14c918u: goto label_14c918;
        case 0x14c91cu: goto label_14c91c;
        case 0x14c920u: goto label_14c920;
        case 0x14c924u: goto label_14c924;
        case 0x14c928u: goto label_14c928;
        case 0x14c92cu: goto label_14c92c;
        case 0x14c930u: goto label_14c930;
        case 0x14c934u: goto label_14c934;
        case 0x14c938u: goto label_14c938;
        case 0x14c93cu: goto label_14c93c;
        case 0x14c940u: goto label_14c940;
        case 0x14c944u: goto label_14c944;
        case 0x14c948u: goto label_14c948;
        case 0x14c94cu: goto label_14c94c;
        case 0x14c950u: goto label_14c950;
        case 0x14c954u: goto label_14c954;
        case 0x14c958u: goto label_14c958;
        case 0x14c95cu: goto label_14c95c;
        case 0x14c960u: goto label_14c960;
        case 0x14c964u: goto label_14c964;
        case 0x14c968u: goto label_14c968;
        case 0x14c96cu: goto label_14c96c;
        case 0x14c970u: goto label_14c970;
        case 0x14c974u: goto label_14c974;
        case 0x14c978u: goto label_14c978;
        case 0x14c97cu: goto label_14c97c;
        case 0x14c980u: goto label_14c980;
        case 0x14c984u: goto label_14c984;
        case 0x14c988u: goto label_14c988;
        case 0x14c98cu: goto label_14c98c;
        case 0x14c990u: goto label_14c990;
        case 0x14c994u: goto label_14c994;
        case 0x14c998u: goto label_14c998;
        case 0x14c99cu: goto label_14c99c;
        case 0x14c9a0u: goto label_14c9a0;
        case 0x14c9a4u: goto label_14c9a4;
        case 0x14c9a8u: goto label_14c9a8;
        case 0x14c9acu: goto label_14c9ac;
        case 0x14c9b0u: goto label_14c9b0;
        case 0x14c9b4u: goto label_14c9b4;
        case 0x14c9b8u: goto label_14c9b8;
        case 0x14c9bcu: goto label_14c9bc;
        case 0x14c9c0u: goto label_14c9c0;
        case 0x14c9c4u: goto label_14c9c4;
        case 0x14c9c8u: goto label_14c9c8;
        case 0x14c9ccu: goto label_14c9cc;
        case 0x14c9d0u: goto label_14c9d0;
        case 0x14c9d4u: goto label_14c9d4;
        case 0x14c9d8u: goto label_14c9d8;
        case 0x14c9dcu: goto label_14c9dc;
        case 0x14c9e0u: goto label_14c9e0;
        case 0x14c9e4u: goto label_14c9e4;
        case 0x14c9e8u: goto label_14c9e8;
        case 0x14c9ecu: goto label_14c9ec;
        case 0x14c9f0u: goto label_14c9f0;
        case 0x14c9f4u: goto label_14c9f4;
        case 0x14c9f8u: goto label_14c9f8;
        case 0x14c9fcu: goto label_14c9fc;
        case 0x14ca00u: goto label_14ca00;
        case 0x14ca04u: goto label_14ca04;
        case 0x14ca08u: goto label_14ca08;
        case 0x14ca0cu: goto label_14ca0c;
        case 0x14ca10u: goto label_14ca10;
        case 0x14ca14u: goto label_14ca14;
        case 0x14ca18u: goto label_14ca18;
        case 0x14ca1cu: goto label_14ca1c;
        case 0x14ca20u: goto label_14ca20;
        case 0x14ca24u: goto label_14ca24;
        case 0x14ca28u: goto label_14ca28;
        case 0x14ca2cu: goto label_14ca2c;
        case 0x14ca30u: goto label_14ca30;
        case 0x14ca34u: goto label_14ca34;
        case 0x14ca38u: goto label_14ca38;
        case 0x14ca3cu: goto label_14ca3c;
        case 0x14ca40u: goto label_14ca40;
        case 0x14ca44u: goto label_14ca44;
        case 0x14ca48u: goto label_14ca48;
        case 0x14ca4cu: goto label_14ca4c;
        case 0x14ca50u: goto label_14ca50;
        case 0x14ca54u: goto label_14ca54;
        case 0x14ca58u: goto label_14ca58;
        case 0x14ca5cu: goto label_14ca5c;
        case 0x14ca60u: goto label_14ca60;
        case 0x14ca64u: goto label_14ca64;
        case 0x14ca68u: goto label_14ca68;
        case 0x14ca6cu: goto label_14ca6c;
        case 0x14ca70u: goto label_14ca70;
        case 0x14ca74u: goto label_14ca74;
        case 0x14ca78u: goto label_14ca78;
        case 0x14ca7cu: goto label_14ca7c;
        case 0x14ca80u: goto label_14ca80;
        case 0x14ca84u: goto label_14ca84;
        case 0x14ca88u: goto label_14ca88;
        case 0x14ca8cu: goto label_14ca8c;
        case 0x14ca90u: goto label_14ca90;
        case 0x14ca94u: goto label_14ca94;
        case 0x14ca98u: goto label_14ca98;
        case 0x14ca9cu: goto label_14ca9c;
        case 0x14caa0u: goto label_14caa0;
        case 0x14caa4u: goto label_14caa4;
        case 0x14caa8u: goto label_14caa8;
        case 0x14caacu: goto label_14caac;
        case 0x14cab0u: goto label_14cab0;
        case 0x14cab4u: goto label_14cab4;
        case 0x14cab8u: goto label_14cab8;
        case 0x14cabcu: goto label_14cabc;
        case 0x14cac0u: goto label_14cac0;
        case 0x14cac4u: goto label_14cac4;
        case 0x14cac8u: goto label_14cac8;
        case 0x14caccu: goto label_14cacc;
        case 0x14cad0u: goto label_14cad0;
        case 0x14cad4u: goto label_14cad4;
        case 0x14cad8u: goto label_14cad8;
        case 0x14cadcu: goto label_14cadc;
        case 0x14cae0u: goto label_14cae0;
        case 0x14cae4u: goto label_14cae4;
        case 0x14cae8u: goto label_14cae8;
        case 0x14caecu: goto label_14caec;
        case 0x14caf0u: goto label_14caf0;
        case 0x14caf4u: goto label_14caf4;
        case 0x14caf8u: goto label_14caf8;
        case 0x14cafcu: goto label_14cafc;
        case 0x14cb00u: goto label_14cb00;
        case 0x14cb04u: goto label_14cb04;
        case 0x14cb08u: goto label_14cb08;
        case 0x14cb0cu: goto label_14cb0c;
        case 0x14cb10u: goto label_14cb10;
        case 0x14cb14u: goto label_14cb14;
        case 0x14cb18u: goto label_14cb18;
        case 0x14cb1cu: goto label_14cb1c;
        case 0x14cb20u: goto label_14cb20;
        case 0x14cb24u: goto label_14cb24;
        case 0x14cb28u: goto label_14cb28;
        case 0x14cb2cu: goto label_14cb2c;
        case 0x14cb30u: goto label_14cb30;
        case 0x14cb34u: goto label_14cb34;
        case 0x14cb38u: goto label_14cb38;
        case 0x14cb3cu: goto label_14cb3c;
        case 0x14cb40u: goto label_14cb40;
        case 0x14cb44u: goto label_14cb44;
        case 0x14cb48u: goto label_14cb48;
        case 0x14cb4cu: goto label_14cb4c;
        case 0x14cb50u: goto label_14cb50;
        case 0x14cb54u: goto label_14cb54;
        case 0x14cb58u: goto label_14cb58;
        case 0x14cb5cu: goto label_14cb5c;
        case 0x14cb60u: goto label_14cb60;
        case 0x14cb64u: goto label_14cb64;
        case 0x14cb68u: goto label_14cb68;
        case 0x14cb6cu: goto label_14cb6c;
        case 0x14cb70u: goto label_14cb70;
        case 0x14cb74u: goto label_14cb74;
        case 0x14cb78u: goto label_14cb78;
        case 0x14cb7cu: goto label_14cb7c;
        case 0x14cb80u: goto label_14cb80;
        case 0x14cb84u: goto label_14cb84;
        case 0x14cb88u: goto label_14cb88;
        case 0x14cb8cu: goto label_14cb8c;
        case 0x14cb90u: goto label_14cb90;
        case 0x14cb94u: goto label_14cb94;
        case 0x14cb98u: goto label_14cb98;
        case 0x14cb9cu: goto label_14cb9c;
        case 0x14cba0u: goto label_14cba0;
        case 0x14cba4u: goto label_14cba4;
        case 0x14cba8u: goto label_14cba8;
        case 0x14cbacu: goto label_14cbac;
        case 0x14cbb0u: goto label_14cbb0;
        case 0x14cbb4u: goto label_14cbb4;
        case 0x14cbb8u: goto label_14cbb8;
        case 0x14cbbcu: goto label_14cbbc;
        case 0x14cbc0u: goto label_14cbc0;
        case 0x14cbc4u: goto label_14cbc4;
        case 0x14cbc8u: goto label_14cbc8;
        case 0x14cbccu: goto label_14cbcc;
        case 0x14cbd0u: goto label_14cbd0;
        case 0x14cbd4u: goto label_14cbd4;
        case 0x14cbd8u: goto label_14cbd8;
        case 0x14cbdcu: goto label_14cbdc;
        case 0x14cbe0u: goto label_14cbe0;
        case 0x14cbe4u: goto label_14cbe4;
        case 0x14cbe8u: goto label_14cbe8;
        case 0x14cbecu: goto label_14cbec;
        case 0x14cbf0u: goto label_14cbf0;
        case 0x14cbf4u: goto label_14cbf4;
        case 0x14cbf8u: goto label_14cbf8;
        case 0x14cbfcu: goto label_14cbfc;
        case 0x14cc00u: goto label_14cc00;
        case 0x14cc04u: goto label_14cc04;
        case 0x14cc08u: goto label_14cc08;
        case 0x14cc0cu: goto label_14cc0c;
        case 0x14cc10u: goto label_14cc10;
        case 0x14cc14u: goto label_14cc14;
        case 0x14cc18u: goto label_14cc18;
        case 0x14cc1cu: goto label_14cc1c;
        case 0x14cc20u: goto label_14cc20;
        case 0x14cc24u: goto label_14cc24;
        case 0x14cc28u: goto label_14cc28;
        case 0x14cc2cu: goto label_14cc2c;
        case 0x14cc30u: goto label_14cc30;
        case 0x14cc34u: goto label_14cc34;
        case 0x14cc38u: goto label_14cc38;
        case 0x14cc3cu: goto label_14cc3c;
        case 0x14cc40u: goto label_14cc40;
        case 0x14cc44u: goto label_14cc44;
        case 0x14cc48u: goto label_14cc48;
        case 0x14cc4cu: goto label_14cc4c;
        case 0x14cc50u: goto label_14cc50;
        case 0x14cc54u: goto label_14cc54;
        case 0x14cc58u: goto label_14cc58;
        case 0x14cc5cu: goto label_14cc5c;
        case 0x14cc60u: goto label_14cc60;
        case 0x14cc64u: goto label_14cc64;
        case 0x14cc68u: goto label_14cc68;
        case 0x14cc6cu: goto label_14cc6c;
        case 0x14cc70u: goto label_14cc70;
        case 0x14cc74u: goto label_14cc74;
        case 0x14cc78u: goto label_14cc78;
        case 0x14cc7cu: goto label_14cc7c;
        case 0x14cc80u: goto label_14cc80;
        case 0x14cc84u: goto label_14cc84;
        case 0x14cc88u: goto label_14cc88;
        case 0x14cc8cu: goto label_14cc8c;
        case 0x14cc90u: goto label_14cc90;
        case 0x14cc94u: goto label_14cc94;
        case 0x14cc98u: goto label_14cc98;
        case 0x14cc9cu: goto label_14cc9c;
        case 0x14cca0u: goto label_14cca0;
        case 0x14cca4u: goto label_14cca4;
        case 0x14cca8u: goto label_14cca8;
        case 0x14ccacu: goto label_14ccac;
        case 0x14ccb0u: goto label_14ccb0;
        case 0x14ccb4u: goto label_14ccb4;
        case 0x14ccb8u: goto label_14ccb8;
        case 0x14ccbcu: goto label_14ccbc;
        case 0x14ccc0u: goto label_14ccc0;
        case 0x14ccc4u: goto label_14ccc4;
        case 0x14ccc8u: goto label_14ccc8;
        case 0x14ccccu: goto label_14cccc;
        case 0x14ccd0u: goto label_14ccd0;
        case 0x14ccd4u: goto label_14ccd4;
        case 0x14ccd8u: goto label_14ccd8;
        case 0x14ccdcu: goto label_14ccdc;
        case 0x14cce0u: goto label_14cce0;
        case 0x14cce4u: goto label_14cce4;
        case 0x14cce8u: goto label_14cce8;
        case 0x14ccecu: goto label_14ccec;
        case 0x14ccf0u: goto label_14ccf0;
        case 0x14ccf4u: goto label_14ccf4;
        case 0x14ccf8u: goto label_14ccf8;
        case 0x14ccfcu: goto label_14ccfc;
        case 0x14cd00u: goto label_14cd00;
        case 0x14cd04u: goto label_14cd04;
        case 0x14cd08u: goto label_14cd08;
        case 0x14cd0cu: goto label_14cd0c;
        case 0x14cd10u: goto label_14cd10;
        case 0x14cd14u: goto label_14cd14;
        case 0x14cd18u: goto label_14cd18;
        case 0x14cd1cu: goto label_14cd1c;
        case 0x14cd20u: goto label_14cd20;
        case 0x14cd24u: goto label_14cd24;
        case 0x14cd28u: goto label_14cd28;
        case 0x14cd2cu: goto label_14cd2c;
        case 0x14cd30u: goto label_14cd30;
        case 0x14cd34u: goto label_14cd34;
        case 0x14cd38u: goto label_14cd38;
        case 0x14cd3cu: goto label_14cd3c;
        case 0x14cd40u: goto label_14cd40;
        case 0x14cd44u: goto label_14cd44;
        case 0x14cd48u: goto label_14cd48;
        case 0x14cd4cu: goto label_14cd4c;
        case 0x14cd50u: goto label_14cd50;
        case 0x14cd54u: goto label_14cd54;
        case 0x14cd58u: goto label_14cd58;
        case 0x14cd5cu: goto label_14cd5c;
        case 0x14cd60u: goto label_14cd60;
        case 0x14cd64u: goto label_14cd64;
        case 0x14cd68u: goto label_14cd68;
        case 0x14cd6cu: goto label_14cd6c;
        case 0x14cd70u: goto label_14cd70;
        case 0x14cd74u: goto label_14cd74;
        case 0x14cd78u: goto label_14cd78;
        case 0x14cd7cu: goto label_14cd7c;
        case 0x14cd80u: goto label_14cd80;
        case 0x14cd84u: goto label_14cd84;
        case 0x14cd88u: goto label_14cd88;
        case 0x14cd8cu: goto label_14cd8c;
        case 0x14cd90u: goto label_14cd90;
        case 0x14cd94u: goto label_14cd94;
        case 0x14cd98u: goto label_14cd98;
        case 0x14cd9cu: goto label_14cd9c;
        case 0x14cda0u: goto label_14cda0;
        case 0x14cda4u: goto label_14cda4;
        case 0x14cda8u: goto label_14cda8;
        case 0x14cdacu: goto label_14cdac;
        case 0x14cdb0u: goto label_14cdb0;
        case 0x14cdb4u: goto label_14cdb4;
        case 0x14cdb8u: goto label_14cdb8;
        case 0x14cdbcu: goto label_14cdbc;
        case 0x14cdc0u: goto label_14cdc0;
        case 0x14cdc4u: goto label_14cdc4;
        case 0x14cdc8u: goto label_14cdc8;
        case 0x14cdccu: goto label_14cdcc;
        case 0x14cdd0u: goto label_14cdd0;
        case 0x14cdd4u: goto label_14cdd4;
        case 0x14cdd8u: goto label_14cdd8;
        case 0x14cddcu: goto label_14cddc;
        case 0x14cde0u: goto label_14cde0;
        case 0x14cde4u: goto label_14cde4;
        case 0x14cde8u: goto label_14cde8;
        case 0x14cdecu: goto label_14cdec;
        case 0x14cdf0u: goto label_14cdf0;
        case 0x14cdf4u: goto label_14cdf4;
        case 0x14cdf8u: goto label_14cdf8;
        case 0x14cdfcu: goto label_14cdfc;
        case 0x14ce00u: goto label_14ce00;
        case 0x14ce04u: goto label_14ce04;
        case 0x14ce08u: goto label_14ce08;
        case 0x14ce0cu: goto label_14ce0c;
        case 0x14ce10u: goto label_14ce10;
        case 0x14ce14u: goto label_14ce14;
        case 0x14ce18u: goto label_14ce18;
        case 0x14ce1cu: goto label_14ce1c;
        case 0x14ce20u: goto label_14ce20;
        case 0x14ce24u: goto label_14ce24;
        case 0x14ce28u: goto label_14ce28;
        case 0x14ce2cu: goto label_14ce2c;
        case 0x14ce30u: goto label_14ce30;
        case 0x14ce34u: goto label_14ce34;
        case 0x14ce38u: goto label_14ce38;
        case 0x14ce3cu: goto label_14ce3c;
        case 0x14ce40u: goto label_14ce40;
        case 0x14ce44u: goto label_14ce44;
        case 0x14ce48u: goto label_14ce48;
        case 0x14ce4cu: goto label_14ce4c;
        case 0x14ce50u: goto label_14ce50;
        case 0x14ce54u: goto label_14ce54;
        case 0x14ce58u: goto label_14ce58;
        case 0x14ce5cu: goto label_14ce5c;
        case 0x14ce60u: goto label_14ce60;
        case 0x14ce64u: goto label_14ce64;
        case 0x14ce68u: goto label_14ce68;
        case 0x14ce6cu: goto label_14ce6c;
        case 0x14ce70u: goto label_14ce70;
        case 0x14ce74u: goto label_14ce74;
        case 0x14ce78u: goto label_14ce78;
        case 0x14ce7cu: goto label_14ce7c;
        case 0x14ce80u: goto label_14ce80;
        case 0x14ce84u: goto label_14ce84;
        case 0x14ce88u: goto label_14ce88;
        case 0x14ce8cu: goto label_14ce8c;
        case 0x14ce90u: goto label_14ce90;
        case 0x14ce94u: goto label_14ce94;
        case 0x14ce98u: goto label_14ce98;
        case 0x14ce9cu: goto label_14ce9c;
        case 0x14cea0u: goto label_14cea0;
        case 0x14cea4u: goto label_14cea4;
        case 0x14cea8u: goto label_14cea8;
        case 0x14ceacu: goto label_14ceac;
        case 0x14ceb0u: goto label_14ceb0;
        case 0x14ceb4u: goto label_14ceb4;
        case 0x14ceb8u: goto label_14ceb8;
        case 0x14cebcu: goto label_14cebc;
        case 0x14cec0u: goto label_14cec0;
        case 0x14cec4u: goto label_14cec4;
        case 0x14cec8u: goto label_14cec8;
        case 0x14ceccu: goto label_14cecc;
        case 0x14ced0u: goto label_14ced0;
        case 0x14ced4u: goto label_14ced4;
        case 0x14ced8u: goto label_14ced8;
        case 0x14cedcu: goto label_14cedc;
        case 0x14cee0u: goto label_14cee0;
        case 0x14cee4u: goto label_14cee4;
        case 0x14cee8u: goto label_14cee8;
        case 0x14ceecu: goto label_14ceec;
        case 0x14cef0u: goto label_14cef0;
        case 0x14cef4u: goto label_14cef4;
        case 0x14cef8u: goto label_14cef8;
        case 0x14cefcu: goto label_14cefc;
        case 0x14cf00u: goto label_14cf00;
        case 0x14cf04u: goto label_14cf04;
        case 0x14cf08u: goto label_14cf08;
        case 0x14cf0cu: goto label_14cf0c;
        case 0x14cf10u: goto label_14cf10;
        case 0x14cf14u: goto label_14cf14;
        case 0x14cf18u: goto label_14cf18;
        case 0x14cf1cu: goto label_14cf1c;
        case 0x14cf20u: goto label_14cf20;
        case 0x14cf24u: goto label_14cf24;
        case 0x14cf28u: goto label_14cf28;
        case 0x14cf2cu: goto label_14cf2c;
        case 0x14cf30u: goto label_14cf30;
        case 0x14cf34u: goto label_14cf34;
        case 0x14cf38u: goto label_14cf38;
        case 0x14cf3cu: goto label_14cf3c;
        case 0x14cf40u: goto label_14cf40;
        case 0x14cf44u: goto label_14cf44;
        case 0x14cf48u: goto label_14cf48;
        case 0x14cf4cu: goto label_14cf4c;
        case 0x14cf50u: goto label_14cf50;
        case 0x14cf54u: goto label_14cf54;
        case 0x14cf58u: goto label_14cf58;
        case 0x14cf5cu: goto label_14cf5c;
        case 0x14cf60u: goto label_14cf60;
        case 0x14cf64u: goto label_14cf64;
        case 0x14cf68u: goto label_14cf68;
        case 0x14cf6cu: goto label_14cf6c;
        case 0x14cf70u: goto label_14cf70;
        case 0x14cf74u: goto label_14cf74;
        case 0x14cf78u: goto label_14cf78;
        case 0x14cf7cu: goto label_14cf7c;
        case 0x14cf80u: goto label_14cf80;
        case 0x14cf84u: goto label_14cf84;
        case 0x14cf88u: goto label_14cf88;
        case 0x14cf8cu: goto label_14cf8c;
        case 0x14cf90u: goto label_14cf90;
        case 0x14cf94u: goto label_14cf94;
        case 0x14cf98u: goto label_14cf98;
        case 0x14cf9cu: goto label_14cf9c;
        case 0x14cfa0u: goto label_14cfa0;
        case 0x14cfa4u: goto label_14cfa4;
        case 0x14cfa8u: goto label_14cfa8;
        case 0x14cfacu: goto label_14cfac;
        case 0x14cfb0u: goto label_14cfb0;
        case 0x14cfb4u: goto label_14cfb4;
        case 0x14cfb8u: goto label_14cfb8;
        case 0x14cfbcu: goto label_14cfbc;
        case 0x14cfc0u: goto label_14cfc0;
        case 0x14cfc4u: goto label_14cfc4;
        case 0x14cfc8u: goto label_14cfc8;
        case 0x14cfccu: goto label_14cfcc;
        case 0x14cfd0u: goto label_14cfd0;
        case 0x14cfd4u: goto label_14cfd4;
        case 0x14cfd8u: goto label_14cfd8;
        case 0x14cfdcu: goto label_14cfdc;
        case 0x14cfe0u: goto label_14cfe0;
        case 0x14cfe4u: goto label_14cfe4;
        case 0x14cfe8u: goto label_14cfe8;
        case 0x14cfecu: goto label_14cfec;
        case 0x14cff0u: goto label_14cff0;
        case 0x14cff4u: goto label_14cff4;
        case 0x14cff8u: goto label_14cff8;
        case 0x14cffcu: goto label_14cffc;
        case 0x14d000u: goto label_14d000;
        case 0x14d004u: goto label_14d004;
        case 0x14d008u: goto label_14d008;
        case 0x14d00cu: goto label_14d00c;
        case 0x14d010u: goto label_14d010;
        case 0x14d014u: goto label_14d014;
        case 0x14d018u: goto label_14d018;
        case 0x14d01cu: goto label_14d01c;
        case 0x14d020u: goto label_14d020;
        case 0x14d024u: goto label_14d024;
        case 0x14d028u: goto label_14d028;
        case 0x14d02cu: goto label_14d02c;
        case 0x14d030u: goto label_14d030;
        case 0x14d034u: goto label_14d034;
        case 0x14d038u: goto label_14d038;
        case 0x14d03cu: goto label_14d03c;
        case 0x14d040u: goto label_14d040;
        case 0x14d044u: goto label_14d044;
        case 0x14d048u: goto label_14d048;
        case 0x14d04cu: goto label_14d04c;
        case 0x14d050u: goto label_14d050;
        case 0x14d054u: goto label_14d054;
        case 0x14d058u: goto label_14d058;
        case 0x14d05cu: goto label_14d05c;
        case 0x14d060u: goto label_14d060;
        case 0x14d064u: goto label_14d064;
        case 0x14d068u: goto label_14d068;
        case 0x14d06cu: goto label_14d06c;
        case 0x14d070u: goto label_14d070;
        case 0x14d074u: goto label_14d074;
        case 0x14d078u: goto label_14d078;
        case 0x14d07cu: goto label_14d07c;
        case 0x14d080u: goto label_14d080;
        case 0x14d084u: goto label_14d084;
        case 0x14d088u: goto label_14d088;
        case 0x14d08cu: goto label_14d08c;
        case 0x14d090u: goto label_14d090;
        case 0x14d094u: goto label_14d094;
        case 0x14d098u: goto label_14d098;
        case 0x14d09cu: goto label_14d09c;
        case 0x14d0a0u: goto label_14d0a0;
        case 0x14d0a4u: goto label_14d0a4;
        case 0x14d0a8u: goto label_14d0a8;
        case 0x14d0acu: goto label_14d0ac;
        case 0x14d0b0u: goto label_14d0b0;
        case 0x14d0b4u: goto label_14d0b4;
        case 0x14d0b8u: goto label_14d0b8;
        case 0x14d0bcu: goto label_14d0bc;
        case 0x14d0c0u: goto label_14d0c0;
        case 0x14d0c4u: goto label_14d0c4;
        case 0x14d0c8u: goto label_14d0c8;
        case 0x14d0ccu: goto label_14d0cc;
        case 0x14d0d0u: goto label_14d0d0;
        case 0x14d0d4u: goto label_14d0d4;
        case 0x14d0d8u: goto label_14d0d8;
        case 0x14d0dcu: goto label_14d0dc;
        case 0x14d0e0u: goto label_14d0e0;
        case 0x14d0e4u: goto label_14d0e4;
        case 0x14d0e8u: goto label_14d0e8;
        case 0x14d0ecu: goto label_14d0ec;
        case 0x14d0f0u: goto label_14d0f0;
        case 0x14d0f4u: goto label_14d0f4;
        case 0x14d0f8u: goto label_14d0f8;
        case 0x14d0fcu: goto label_14d0fc;
        case 0x14d100u: goto label_14d100;
        case 0x14d104u: goto label_14d104;
        case 0x14d108u: goto label_14d108;
        case 0x14d10cu: goto label_14d10c;
        case 0x14d110u: goto label_14d110;
        case 0x14d114u: goto label_14d114;
        case 0x14d118u: goto label_14d118;
        case 0x14d11cu: goto label_14d11c;
        case 0x14d120u: goto label_14d120;
        case 0x14d124u: goto label_14d124;
        case 0x14d128u: goto label_14d128;
        case 0x14d12cu: goto label_14d12c;
        case 0x14d130u: goto label_14d130;
        case 0x14d134u: goto label_14d134;
        case 0x14d138u: goto label_14d138;
        case 0x14d13cu: goto label_14d13c;
        case 0x14d140u: goto label_14d140;
        case 0x14d144u: goto label_14d144;
        case 0x14d148u: goto label_14d148;
        case 0x14d14cu: goto label_14d14c;
        case 0x14d150u: goto label_14d150;
        case 0x14d154u: goto label_14d154;
        case 0x14d158u: goto label_14d158;
        case 0x14d15cu: goto label_14d15c;
        case 0x14d160u: goto label_14d160;
        case 0x14d164u: goto label_14d164;
        case 0x14d168u: goto label_14d168;
        case 0x14d16cu: goto label_14d16c;
        case 0x14d170u: goto label_14d170;
        case 0x14d174u: goto label_14d174;
        case 0x14d178u: goto label_14d178;
        case 0x14d17cu: goto label_14d17c;
        case 0x14d180u: goto label_14d180;
        case 0x14d184u: goto label_14d184;
        case 0x14d188u: goto label_14d188;
        case 0x14d18cu: goto label_14d18c;
        case 0x14d190u: goto label_14d190;
        case 0x14d194u: goto label_14d194;
        case 0x14d198u: goto label_14d198;
        case 0x14d19cu: goto label_14d19c;
        case 0x14d1a0u: goto label_14d1a0;
        case 0x14d1a4u: goto label_14d1a4;
        case 0x14d1a8u: goto label_14d1a8;
        case 0x14d1acu: goto label_14d1ac;
        case 0x14d1b0u: goto label_14d1b0;
        case 0x14d1b4u: goto label_14d1b4;
        case 0x14d1b8u: goto label_14d1b8;
        case 0x14d1bcu: goto label_14d1bc;
        case 0x14d1c0u: goto label_14d1c0;
        case 0x14d1c4u: goto label_14d1c4;
        case 0x14d1c8u: goto label_14d1c8;
        case 0x14d1ccu: goto label_14d1cc;
        case 0x14d1d0u: goto label_14d1d0;
        case 0x14d1d4u: goto label_14d1d4;
        case 0x14d1d8u: goto label_14d1d8;
        case 0x14d1dcu: goto label_14d1dc;
        case 0x14d1e0u: goto label_14d1e0;
        case 0x14d1e4u: goto label_14d1e4;
        case 0x14d1e8u: goto label_14d1e8;
        case 0x14d1ecu: goto label_14d1ec;
        case 0x14d1f0u: goto label_14d1f0;
        case 0x14d1f4u: goto label_14d1f4;
        case 0x14d1f8u: goto label_14d1f8;
        case 0x14d1fcu: goto label_14d1fc;
        case 0x14d200u: goto label_14d200;
        case 0x14d204u: goto label_14d204;
        case 0x14d208u: goto label_14d208;
        case 0x14d20cu: goto label_14d20c;
        case 0x14d210u: goto label_14d210;
        case 0x14d214u: goto label_14d214;
        case 0x14d218u: goto label_14d218;
        case 0x14d21cu: goto label_14d21c;
        case 0x14d220u: goto label_14d220;
        case 0x14d224u: goto label_14d224;
        case 0x14d228u: goto label_14d228;
        case 0x14d22cu: goto label_14d22c;
        case 0x14d230u: goto label_14d230;
        case 0x14d234u: goto label_14d234;
        case 0x14d238u: goto label_14d238;
        case 0x14d23cu: goto label_14d23c;
        case 0x14d240u: goto label_14d240;
        case 0x14d244u: goto label_14d244;
        case 0x14d248u: goto label_14d248;
        case 0x14d24cu: goto label_14d24c;
        case 0x14d250u: goto label_14d250;
        case 0x14d254u: goto label_14d254;
        case 0x14d258u: goto label_14d258;
        case 0x14d25cu: goto label_14d25c;
        case 0x14d260u: goto label_14d260;
        case 0x14d264u: goto label_14d264;
        case 0x14d268u: goto label_14d268;
        case 0x14d26cu: goto label_14d26c;
        case 0x14d270u: goto label_14d270;
        case 0x14d274u: goto label_14d274;
        case 0x14d278u: goto label_14d278;
        case 0x14d27cu: goto label_14d27c;
        case 0x14d280u: goto label_14d280;
        case 0x14d284u: goto label_14d284;
        case 0x14d288u: goto label_14d288;
        case 0x14d28cu: goto label_14d28c;
        case 0x14d290u: goto label_14d290;
        case 0x14d294u: goto label_14d294;
        case 0x14d298u: goto label_14d298;
        case 0x14d29cu: goto label_14d29c;
        case 0x14d2a0u: goto label_14d2a0;
        case 0x14d2a4u: goto label_14d2a4;
        case 0x14d2a8u: goto label_14d2a8;
        case 0x14d2acu: goto label_14d2ac;
        case 0x14d2b0u: goto label_14d2b0;
        case 0x14d2b4u: goto label_14d2b4;
        case 0x14d2b8u: goto label_14d2b8;
        case 0x14d2bcu: goto label_14d2bc;
        case 0x14d2c0u: goto label_14d2c0;
        case 0x14d2c4u: goto label_14d2c4;
        case 0x14d2c8u: goto label_14d2c8;
        case 0x14d2ccu: goto label_14d2cc;
        case 0x14d2d0u: goto label_14d2d0;
        case 0x14d2d4u: goto label_14d2d4;
        case 0x14d2d8u: goto label_14d2d8;
        case 0x14d2dcu: goto label_14d2dc;
        case 0x14d2e0u: goto label_14d2e0;
        case 0x14d2e4u: goto label_14d2e4;
        case 0x14d2e8u: goto label_14d2e8;
        case 0x14d2ecu: goto label_14d2ec;
        case 0x14d2f0u: goto label_14d2f0;
        case 0x14d2f4u: goto label_14d2f4;
        case 0x14d2f8u: goto label_14d2f8;
        case 0x14d2fcu: goto label_14d2fc;
        case 0x14d300u: goto label_14d300;
        case 0x14d304u: goto label_14d304;
        case 0x14d308u: goto label_14d308;
        case 0x14d30cu: goto label_14d30c;
        case 0x14d310u: goto label_14d310;
        case 0x14d314u: goto label_14d314;
        case 0x14d318u: goto label_14d318;
        case 0x14d31cu: goto label_14d31c;
        case 0x14d320u: goto label_14d320;
        case 0x14d324u: goto label_14d324;
        case 0x14d328u: goto label_14d328;
        case 0x14d32cu: goto label_14d32c;
        case 0x14d330u: goto label_14d330;
        case 0x14d334u: goto label_14d334;
        case 0x14d338u: goto label_14d338;
        case 0x14d33cu: goto label_14d33c;
        case 0x14d340u: goto label_14d340;
        case 0x14d344u: goto label_14d344;
        case 0x14d348u: goto label_14d348;
        case 0x14d34cu: goto label_14d34c;
        case 0x14d350u: goto label_14d350;
        case 0x14d354u: goto label_14d354;
        case 0x14d358u: goto label_14d358;
        case 0x14d35cu: goto label_14d35c;
        case 0x14d360u: goto label_14d360;
        case 0x14d364u: goto label_14d364;
        case 0x14d368u: goto label_14d368;
        case 0x14d36cu: goto label_14d36c;
        case 0x14d370u: goto label_14d370;
        case 0x14d374u: goto label_14d374;
        case 0x14d378u: goto label_14d378;
        case 0x14d37cu: goto label_14d37c;
        case 0x14d380u: goto label_14d380;
        case 0x14d384u: goto label_14d384;
        case 0x14d388u: goto label_14d388;
        case 0x14d38cu: goto label_14d38c;
        case 0x14d390u: goto label_14d390;
        case 0x14d394u: goto label_14d394;
        case 0x14d398u: goto label_14d398;
        case 0x14d39cu: goto label_14d39c;
        case 0x14d3a0u: goto label_14d3a0;
        case 0x14d3a4u: goto label_14d3a4;
        case 0x14d3a8u: goto label_14d3a8;
        case 0x14d3acu: goto label_14d3ac;
        case 0x14d3b0u: goto label_14d3b0;
        case 0x14d3b4u: goto label_14d3b4;
        case 0x14d3b8u: goto label_14d3b8;
        case 0x14d3bcu: goto label_14d3bc;
        case 0x14d3c0u: goto label_14d3c0;
        case 0x14d3c4u: goto label_14d3c4;
        case 0x14d3c8u: goto label_14d3c8;
        case 0x14d3ccu: goto label_14d3cc;
        case 0x14d3d0u: goto label_14d3d0;
        case 0x14d3d4u: goto label_14d3d4;
        case 0x14d3d8u: goto label_14d3d8;
        case 0x14d3dcu: goto label_14d3dc;
        case 0x14d3e0u: goto label_14d3e0;
        case 0x14d3e4u: goto label_14d3e4;
        case 0x14d3e8u: goto label_14d3e8;
        case 0x14d3ecu: goto label_14d3ec;
        case 0x14d3f0u: goto label_14d3f0;
        case 0x14d3f4u: goto label_14d3f4;
        case 0x14d3f8u: goto label_14d3f8;
        case 0x14d3fcu: goto label_14d3fc;
        case 0x14d400u: goto label_14d400;
        case 0x14d404u: goto label_14d404;
        case 0x14d408u: goto label_14d408;
        case 0x14d40cu: goto label_14d40c;
        case 0x14d410u: goto label_14d410;
        case 0x14d414u: goto label_14d414;
        case 0x14d418u: goto label_14d418;
        case 0x14d41cu: goto label_14d41c;
        case 0x14d420u: goto label_14d420;
        case 0x14d424u: goto label_14d424;
        case 0x14d428u: goto label_14d428;
        case 0x14d42cu: goto label_14d42c;
        case 0x14d430u: goto label_14d430;
        case 0x14d434u: goto label_14d434;
        case 0x14d438u: goto label_14d438;
        case 0x14d43cu: goto label_14d43c;
        case 0x14d440u: goto label_14d440;
        case 0x14d444u: goto label_14d444;
        case 0x14d448u: goto label_14d448;
        case 0x14d44cu: goto label_14d44c;
        case 0x14d450u: goto label_14d450;
        case 0x14d454u: goto label_14d454;
        case 0x14d458u: goto label_14d458;
        case 0x14d45cu: goto label_14d45c;
        case 0x14d460u: goto label_14d460;
        case 0x14d464u: goto label_14d464;
        case 0x14d468u: goto label_14d468;
        case 0x14d46cu: goto label_14d46c;
        case 0x14d470u: goto label_14d470;
        case 0x14d474u: goto label_14d474;
        case 0x14d478u: goto label_14d478;
        case 0x14d47cu: goto label_14d47c;
        case 0x14d480u: goto label_14d480;
        case 0x14d484u: goto label_14d484;
        case 0x14d488u: goto label_14d488;
        case 0x14d48cu: goto label_14d48c;
        case 0x14d490u: goto label_14d490;
        case 0x14d494u: goto label_14d494;
        case 0x14d498u: goto label_14d498;
        case 0x14d49cu: goto label_14d49c;
        case 0x14d4a0u: goto label_14d4a0;
        case 0x14d4a4u: goto label_14d4a4;
        case 0x14d4a8u: goto label_14d4a8;
        case 0x14d4acu: goto label_14d4ac;
        case 0x14d4b0u: goto label_14d4b0;
        case 0x14d4b4u: goto label_14d4b4;
        case 0x14d4b8u: goto label_14d4b8;
        case 0x14d4bcu: goto label_14d4bc;
        case 0x14d4c0u: goto label_14d4c0;
        case 0x14d4c4u: goto label_14d4c4;
        case 0x14d4c8u: goto label_14d4c8;
        case 0x14d4ccu: goto label_14d4cc;
        case 0x14d4d0u: goto label_14d4d0;
        case 0x14d4d4u: goto label_14d4d4;
        case 0x14d4d8u: goto label_14d4d8;
        case 0x14d4dcu: goto label_14d4dc;
        case 0x14d4e0u: goto label_14d4e0;
        case 0x14d4e4u: goto label_14d4e4;
        case 0x14d4e8u: goto label_14d4e8;
        case 0x14d4ecu: goto label_14d4ec;
        case 0x14d4f0u: goto label_14d4f0;
        case 0x14d4f4u: goto label_14d4f4;
        case 0x14d4f8u: goto label_14d4f8;
        case 0x14d4fcu: goto label_14d4fc;
        case 0x14d500u: goto label_14d500;
        case 0x14d504u: goto label_14d504;
        case 0x14d508u: goto label_14d508;
        case 0x14d50cu: goto label_14d50c;
        case 0x14d510u: goto label_14d510;
        case 0x14d514u: goto label_14d514;
        case 0x14d518u: goto label_14d518;
        case 0x14d51cu: goto label_14d51c;
        default: break;
    }

    ctx->pc = 0x14bc90u;

label_14bc90:
    // 0x14bc90: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x14bc90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_14bc94:
    // 0x14bc94: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x14bc94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_14bc98:
    // 0x14bc98: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14bc98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_14bc9c:
    // 0x14bc9c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14bc9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_14bca0:
    // 0x14bca0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14bca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_14bca4:
    // 0x14bca4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14bca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_14bca8:
    // 0x14bca8: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x14bca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
label_14bcac:
    // 0x14bcac: 0xa3a50080  sb          $a1, 0x80($sp)
    ctx->pc = 0x14bcacu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 128), (uint8_t)GPR_U32(ctx, 5));
label_14bcb0:
    // 0x14bcb0: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x14bcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
label_14bcb4:
    // 0x14bcb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14bcb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14bcb8:
    // 0x14bcb8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x14bcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_14bcbc:
    // 0x14bcbc: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x14bcbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
label_14bcc0:
    // 0x14bcc0: 0x93a20080  lbu         $v0, 0x80($sp)
    ctx->pc = 0x14bcc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 128)));
label_14bcc4:
    // 0x14bcc4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14bcc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14bcc8:
    // 0x14bcc8: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_14bccc:
    if (ctx->pc == 0x14BCCCu) {
        ctx->pc = 0x14BCD0u;
        goto label_14bcd0;
    }
    ctx->pc = 0x14BCC8u;
    {
        const bool branch_taken_0x14bcc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14bcc8) {
            ctx->pc = 0x14BD14u;
            goto label_14bd14;
        }
    }
    ctx->pc = 0x14BCD0u;
label_14bcd0:
    // 0x14bcd0: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x14bcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_14bcd4:
    // 0x14bcd4: 0xac40bde0  sw          $zero, -0x4220($v0)
    ctx->pc = 0x14bcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950368), GPR_U32(ctx, 0));
label_14bcd8:
    // 0x14bcd8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x14bcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_14bcdc:
    // 0x14bcdc: 0x8c42bde4  lw          $v0, -0x421C($v0)
    ctx->pc = 0x14bcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950372)));
label_14bce0:
    // 0x14bce0: 0x10020038  beq         $zero, $v0, . + 4 + (0x38 << 2)
label_14bce4:
    if (ctx->pc == 0x14BCE4u) {
        ctx->pc = 0x14BCE8u;
        goto label_14bce8;
    }
    ctx->pc = 0x14BCE0u;
    {
        const bool branch_taken_0x14bce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x14bce0) {
            ctx->pc = 0x14BDC4u;
            goto label_14bdc4;
        }
    }
    ctx->pc = 0x14BCE8u;
label_14bce8:
    // 0x14bce8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x14bce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_14bcec:
    // 0x14bcec: 0x8c44bde4  lw          $a0, -0x421C($v0)
    ctx->pc = 0x14bcecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950372)));
label_14bcf0:
    // 0x14bcf0: 0xc0e20da  jal         func_388368
label_14bcf4:
    if (ctx->pc == 0x14BCF4u) {
        ctx->pc = 0x14BCF8u;
        goto label_14bcf8;
    }
    ctx->pc = 0x14BCF0u;
    SET_GPR_U32(ctx, 31, 0x14BCF8u);
    ctx->pc = 0x388368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388368u, 0x14BCF0u, 0x14BCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BCF8u;
label_14bcf8:
    // 0x14bcf8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x14bcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_14bcfc:
    // 0x14bcfc: 0xac40bde4  sw          $zero, -0x421C($v0)
    ctx->pc = 0x14bcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950372), GPR_U32(ctx, 0));
label_14bd00:
    // 0x14bd00: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x14bd00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_14bd04:
    // 0x14bd04: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x14bd04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_14bd08:
    // 0x14bd08: 0xac43bde8  sw          $v1, -0x4218($v0)
    ctx->pc = 0x14bd08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950376), GPR_U32(ctx, 3));
label_14bd0c:
    // 0x14bd0c: 0x1000002d  b           . + 4 + (0x2D << 2)
label_14bd10:
    if (ctx->pc == 0x14BD10u) {
        ctx->pc = 0x14BD14u;
        goto label_14bd14;
    }
    ctx->pc = 0x14BD0Cu;
    {
        const bool branch_taken_0x14bd0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bd0c) {
            ctx->pc = 0x14BDC4u;
            goto label_14bdc4;
        }
    }
    ctx->pc = 0x14BD14u;
label_14bd14:
    // 0x14bd14: 0x9382baa4  lbu         $v0, -0x455C($gp)
    ctx->pc = 0x14bd14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294949540)));
label_14bd18:
    // 0x14bd18: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14bd18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14bd1c:
    // 0x14bd1c: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
label_14bd20:
    if (ctx->pc == 0x14BD20u) {
        ctx->pc = 0x14BD24u;
        goto label_14bd24;
    }
    ctx->pc = 0x14BD1Cu;
    {
        const bool branch_taken_0x14bd1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14bd1c) {
            ctx->pc = 0x14BDC4u;
            goto label_14bdc4;
        }
    }
    ctx->pc = 0x14BD24u;
label_14bd24:
    // 0x14bd24: 0x8f82ba8c  lw          $v0, -0x4574($gp)
    ctx->pc = 0x14bd24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949516)));
label_14bd28:
    // 0x14bd28: 0x10020026  beq         $zero, $v0, . + 4 + (0x26 << 2)
label_14bd2c:
    if (ctx->pc == 0x14BD2Cu) {
        ctx->pc = 0x14BD30u;
        goto label_14bd30;
    }
    ctx->pc = 0x14BD28u;
    {
        const bool branch_taken_0x14bd28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x14bd28) {
            ctx->pc = 0x14BDC4u;
            goto label_14bdc4;
        }
    }
    ctx->pc = 0x14BD30u;
label_14bd30:
    // 0x14bd30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14bd30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14bd34:
    // 0x14bd34: 0xa382baa4  sb          $v0, -0x455C($gp)
    ctx->pc = 0x14bd34u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294949540), (uint8_t)GPR_U32(ctx, 2));
label_14bd38:
    // 0x14bd38: 0x8f84ba8c  lw          $a0, -0x4574($gp)
    ctx->pc = 0x14bd38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949516)));
label_14bd3c:
    // 0x14bd3c: 0xc050c5c  jal         func_143170
label_14bd40:
    if (ctx->pc == 0x14BD40u) {
        ctx->pc = 0x14BD44u;
        goto label_14bd44;
    }
    ctx->pc = 0x14BD3Cu;
    SET_GPR_U32(ctx, 31, 0x14BD44u);
    ctx->pc = 0x143170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143170u, 0x14BD3Cu, 0x14BD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BD44u;
label_14bd44:
    // 0x14bd44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14bd44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14bd48:
    // 0x14bd48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14bd48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14bd4c:
    // 0x14bd4c: 0xc04fbc4  jal         func_13EF10
label_14bd50:
    if (ctx->pc == 0x14BD50u) {
        ctx->pc = 0x14BD54u;
        goto label_14bd54;
    }
    ctx->pc = 0x14BD4Cu;
    SET_GPR_U32(ctx, 31, 0x14BD54u);
    ctx->pc = 0x13EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EF10u, 0x14BD4Cu, 0x14BD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BD54u;
label_14bd54:
    // 0x14bd54: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x14bd54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14bd58:
    // 0x14bd58: 0x8f84ba8c  lw          $a0, -0x4574($gp)
    ctx->pc = 0x14bd58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949516)));
label_14bd5c:
    // 0x14bd5c: 0xc050c5c  jal         func_143170
label_14bd60:
    if (ctx->pc == 0x14BD60u) {
        ctx->pc = 0x14BD64u;
        goto label_14bd64;
    }
    ctx->pc = 0x14BD5Cu;
    SET_GPR_U32(ctx, 31, 0x14BD64u);
    ctx->pc = 0x143170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143170u, 0x14BD5Cu, 0x14BD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BD64u;
label_14bd64:
    // 0x14bd64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14bd64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14bd68:
    // 0x14bd68: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14bd68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14bd6c:
    // 0x14bd6c: 0xc04fbc4  jal         func_13EF10
label_14bd70:
    if (ctx->pc == 0x14BD70u) {
        ctx->pc = 0x14BD74u;
        goto label_14bd74;
    }
    ctx->pc = 0x14BD6Cu;
    SET_GPR_U32(ctx, 31, 0x14BD74u);
    ctx->pc = 0x13EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EF10u, 0x14BD6Cu, 0x14BD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BD74u;
label_14bd74:
    // 0x14bd74: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x14bd74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14bd78:
    // 0x14bd78: 0x10120012  beq         $zero, $s2, . + 4 + (0x12 << 2)
label_14bd7c:
    if (ctx->pc == 0x14BD7Cu) {
        ctx->pc = 0x14BD80u;
        goto label_14bd80;
    }
    ctx->pc = 0x14BD78u;
    {
        const bool branch_taken_0x14bd78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 18));
        if (branch_taken_0x14bd78) {
            ctx->pc = 0x14BDC4u;
            goto label_14bdc4;
        }
    }
    ctx->pc = 0x14BD80u;
label_14bd80:
    // 0x14bd80: 0x10110010  beq         $zero, $s1, . + 4 + (0x10 << 2)
label_14bd84:
    if (ctx->pc == 0x14BD84u) {
        ctx->pc = 0x14BD88u;
        goto label_14bd88;
    }
    ctx->pc = 0x14BD80u;
    {
        const bool branch_taken_0x14bd80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 17));
        if (branch_taken_0x14bd80) {
            ctx->pc = 0x14BDC4u;
            goto label_14bdc4;
        }
    }
    ctx->pc = 0x14BD88u;
label_14bd88:
    // 0x14bd88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14bd88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14bd8c:
    // 0x14bd8c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x14bd8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_14bd90:
    // 0x14bd90: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x14bd90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_14bd94:
    // 0x14bd94: 0x320f809  jalr        $t9
label_14bd98:
    if (ctx->pc == 0x14BD98u) {
        ctx->pc = 0x14BD9Cu;
        goto label_14bd9c;
    }
    ctx->pc = 0x14BD94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14BD9Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14BD94u, 0x14BD9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14BD9Cu;
label_14bd9c:
    // 0x14bd9c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x14bd9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14bda0:
    // 0x14bda0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14bda0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_14bda4:
    // 0x14bda4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x14bda4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_14bda8:
    // 0x14bda8: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x14bda8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_14bdac:
    // 0x14bdac: 0x320f809  jalr        $t9
label_14bdb0:
    if (ctx->pc == 0x14BDB0u) {
        ctx->pc = 0x14BDB4u;
        goto label_14bdb4;
    }
    ctx->pc = 0x14BDACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14BDB4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14BDACu, 0x14BDB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14BDB4u;
label_14bdb4:
    // 0x14bdb4: 0x26640040  addiu       $a0, $s3, 0x40
    ctx->pc = 0x14bdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
label_14bdb8:
    // 0x14bdb8: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x14bdb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_14bdbc:
    // 0x14bdbc: 0xc041d58  jal         func_107560
label_14bdc0:
    if (ctx->pc == 0x14BDC0u) {
        ctx->pc = 0x14BDC4u;
        goto label_14bdc4;
    }
    ctx->pc = 0x14BDBCu;
    SET_GPR_U32(ctx, 31, 0x14BDC4u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x14BDBCu, 0x14BDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BDC4u;
label_14bdc4:
    // 0x14bdc4: 0x93a20080  lbu         $v0, 0x80($sp)
    ctx->pc = 0x14bdc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 128)));
label_14bdc8:
    // 0x14bdc8: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_14bdcc:
    if (ctx->pc == 0x14BDCCu) {
        ctx->pc = 0x14BDD0u;
        goto label_14bdd0;
    }
    ctx->pc = 0x14BDC8u;
    {
        const bool branch_taken_0x14bdc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bdc8) {
            ctx->pc = 0x14BEA0u;
            goto label_14bea0;
        }
    }
    ctx->pc = 0x14BDD0u;
label_14bdd0:
    // 0x14bdd0: 0x8f82ba90  lw          $v0, -0x4570($gp)
    ctx->pc = 0x14bdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949520)));
label_14bdd4:
    // 0x14bdd4: 0x14020032  bne         $zero, $v0, . + 4 + (0x32 << 2)
label_14bdd8:
    if (ctx->pc == 0x14BDD8u) {
        ctx->pc = 0x14BDDCu;
        goto label_14bddc;
    }
    ctx->pc = 0x14BDD4u;
    {
        const bool branch_taken_0x14bdd4 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 2));
        if (branch_taken_0x14bdd4) {
            ctx->pc = 0x14BEA0u;
            goto label_14bea0;
        }
    }
    ctx->pc = 0x14BDDCu;
label_14bddc:
    // 0x14bddc: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x14bddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_14bde0:
    // 0x14bde0: 0x24430030  addiu       $v1, $v0, 0x30
    ctx->pc = 0x14bde0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_14bde4:
    // 0x14bde4: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x14bde4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_14bde8:
    // 0x14bde8: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x14bde8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_14bdec:
    // 0x14bdec: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x14bdecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14bdf0:
    // 0x14bdf0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x14bdf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14bdf4:
    // 0x14bdf4: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x14bdf4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_14bdf8:
    // 0x14bdf8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x14bdf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_14bdfc:
    // 0x14bdfc: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x14bdfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_14be00:
    // 0x14be00: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x14be00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_14be04:
    // 0x14be04: 0xc088560  jal         func_221580
label_14be08:
    if (ctx->pc == 0x14BE08u) {
        ctx->pc = 0x14BE0Cu;
        goto label_14be0c;
    }
    ctx->pc = 0x14BE04u;
    SET_GPR_U32(ctx, 31, 0x14BE0Cu);
    ctx->pc = 0x221580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221580u, 0x14BE04u, 0x14BE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BE0Cu;
label_14be0c:
    // 0x14be0c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x14be0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_14be10:
    // 0x14be10: 0x240503fa  addiu       $a1, $zero, 0x3FA
    ctx->pc = 0x14be10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1018));
label_14be14:
    // 0x14be14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14be14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14be18:
    // 0x14be18: 0xc041b54  jal         func_106D50
label_14be1c:
    if (ctx->pc == 0x14BE1Cu) {
        ctx->pc = 0x14BE20u;
        goto label_14be20;
    }
    ctx->pc = 0x14BE18u;
    SET_GPR_U32(ctx, 31, 0x14BE20u);
    ctx->pc = 0x106D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D50u, 0x14BE18u, 0x14BE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BE20u;
label_14be20:
    // 0x14be20: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x14be20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_14be24:
    // 0x14be24: 0x240503fb  addiu       $a1, $zero, 0x3FB
    ctx->pc = 0x14be24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1019));
label_14be28:
    // 0x14be28: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14be28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14be2c:
    // 0x14be2c: 0xc040924  jal         func_102490
label_14be30:
    if (ctx->pc == 0x14BE30u) {
        ctx->pc = 0x14BE34u;
        goto label_14be34;
    }
    ctx->pc = 0x14BE2Cu;
    SET_GPR_U32(ctx, 31, 0x14BE34u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x14BE2Cu, 0x14BE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BE34u;
label_14be34:
    // 0x14be34: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x14be34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_14be38:
    // 0x14be38: 0x240503fc  addiu       $a1, $zero, 0x3FC
    ctx->pc = 0x14be38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1020));
label_14be3c:
    // 0x14be3c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14be3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14be40:
    // 0x14be40: 0xc040924  jal         func_102490
label_14be44:
    if (ctx->pc == 0x14BE44u) {
        ctx->pc = 0x14BE48u;
        goto label_14be48;
    }
    ctx->pc = 0x14BE40u;
    SET_GPR_U32(ctx, 31, 0x14BE48u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x14BE40u, 0x14BE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BE48u;
label_14be48:
    // 0x14be48: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x14be48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_14be4c:
    // 0x14be4c: 0x240503fd  addiu       $a1, $zero, 0x3FD
    ctx->pc = 0x14be4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1021));
label_14be50:
    // 0x14be50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14be50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14be54:
    // 0x14be54: 0xc040924  jal         func_102490
label_14be58:
    if (ctx->pc == 0x14BE58u) {
        ctx->pc = 0x14BE5Cu;
        goto label_14be5c;
    }
    ctx->pc = 0x14BE54u;
    SET_GPR_U32(ctx, 31, 0x14BE5Cu);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x14BE54u, 0x14BE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BE5Cu;
label_14be5c:
    // 0x14be5c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x14be5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_14be60:
    // 0x14be60: 0x240503e9  addiu       $a1, $zero, 0x3E9
    ctx->pc = 0x14be60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
label_14be64:
    // 0x14be64: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x14be64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
label_14be68:
    // 0x14be68: 0x24c62d50  addiu       $a2, $a2, 0x2D50
    ctx->pc = 0x14be68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11600));
label_14be6c:
    // 0x14be6c: 0xc0433dc  jal         func_10CF70
label_14be70:
    if (ctx->pc == 0x14BE70u) {
        ctx->pc = 0x14BE74u;
        goto label_14be74;
    }
    ctx->pc = 0x14BE6Cu;
    SET_GPR_U32(ctx, 31, 0x14BE74u);
    ctx->pc = 0x10CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CF70u, 0x14BE6Cu, 0x14BE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BE74u;
label_14be74:
    // 0x14be74: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x14be74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_14be78:
    // 0x14be78: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x14be78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_14be7c:
    // 0x14be7c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x14be7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_14be80:
    // 0x14be80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x14be80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14be84:
    // 0x14be84: 0xc043448  jal         func_10D120
label_14be88:
    if (ctx->pc == 0x14BE88u) {
        ctx->pc = 0x14BE8Cu;
        goto label_14be8c;
    }
    ctx->pc = 0x14BE84u;
    SET_GPR_U32(ctx, 31, 0x14BE8Cu);
    ctx->pc = 0x10D120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D120u, 0x14BE84u, 0x14BE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BE8Cu;
label_14be8c:
    // 0x14be8c: 0xaf82ba90  sw          $v0, -0x4570($gp)
    ctx->pc = 0x14be8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949520), GPR_U32(ctx, 2));
label_14be90:
    // 0x14be90: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x14be90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_14be94:
    // 0x14be94: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x14be94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_14be98:
    // 0x14be98: 0xc0887b4  jal         func_221ED0
label_14be9c:
    if (ctx->pc == 0x14BE9Cu) {
        ctx->pc = 0x14BEA0u;
        goto label_14bea0;
    }
    ctx->pc = 0x14BE98u;
    SET_GPR_U32(ctx, 31, 0x14BEA0u);
    ctx->pc = 0x221ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221ED0u, 0x14BE98u, 0x14BEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BEA0u;
label_14bea0:
    // 0x14bea0: 0x93a20080  lbu         $v0, 0x80($sp)
    ctx->pc = 0x14bea0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 128)));
label_14bea4:
    // 0x14bea4: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_14bea8:
    if (ctx->pc == 0x14BEA8u) {
        ctx->pc = 0x14BEACu;
        goto label_14beac;
    }
    ctx->pc = 0x14BEA4u;
    {
        const bool branch_taken_0x14bea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bea4) {
            ctx->pc = 0x14BF2Cu;
            goto label_14bf2c;
        }
    }
    ctx->pc = 0x14BEACu;
label_14beac:
    // 0x14beac: 0x8f82ba94  lw          $v0, -0x456C($gp)
    ctx->pc = 0x14beacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949524)));
label_14beb0:
    // 0x14beb0: 0x1402001e  bne         $zero, $v0, . + 4 + (0x1E << 2)
label_14beb4:
    if (ctx->pc == 0x14BEB4u) {
        ctx->pc = 0x14BEB8u;
        goto label_14beb8;
    }
    ctx->pc = 0x14BEB0u;
    {
        const bool branch_taken_0x14beb0 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 2));
        if (branch_taken_0x14beb0) {
            ctx->pc = 0x14BF2Cu;
            goto label_14bf2c;
        }
    }
    ctx->pc = 0x14BEB8u;
label_14beb8:
    // 0x14beb8: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x14beb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_14bebc:
    // 0x14bebc: 0xc119b68  jal         func_466DA0
label_14bec0:
    if (ctx->pc == 0x14BEC0u) {
        ctx->pc = 0x14BEC4u;
        goto label_14bec4;
    }
    ctx->pc = 0x14BEBCu;
    SET_GPR_U32(ctx, 31, 0x14BEC4u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x14BEBCu, 0x14BEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BEC4u;
label_14bec4:
    // 0x14bec4: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x14bec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_14bec8:
    // 0x14bec8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14bec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14becc:
    // 0x14becc: 0xc0400e0  jal         func_100380
label_14bed0:
    if (ctx->pc == 0x14BED0u) {
        ctx->pc = 0x14BED4u;
        goto label_14bed4;
    }
    ctx->pc = 0x14BECCu;
    SET_GPR_U32(ctx, 31, 0x14BED4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x14BECCu, 0x14BED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BED4u;
label_14bed4:
    // 0x14bed4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14bed4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14bed8:
    // 0x14bed8: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_14bedc:
    if (ctx->pc == 0x14BEDCu) {
        ctx->pc = 0x14BEE0u;
        goto label_14bee0;
    }
    ctx->pc = 0x14BED8u;
    {
        const bool branch_taken_0x14bed8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bed8) {
            ctx->pc = 0x14BEF4u;
            goto label_14bef4;
        }
    }
    ctx->pc = 0x14BEE0u;
label_14bee0:
    // 0x14bee0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14bee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14bee4:
    // 0x14bee4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14bee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14bee8:
    // 0x14bee8: 0xc0a4094  jal         func_290250
label_14beec:
    if (ctx->pc == 0x14BEECu) {
        ctx->pc = 0x14BEF0u;
        goto label_14bef0;
    }
    ctx->pc = 0x14BEE8u;
    SET_GPR_U32(ctx, 31, 0x14BEF0u);
    ctx->pc = 0x290250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290250u, 0x14BEE8u, 0x14BEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BEF0u;
label_14bef0:
    // 0x14bef0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14bef0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14bef4:
    // 0x14bef4: 0xaf90ba94  sw          $s0, -0x456C($gp)
    ctx->pc = 0x14bef4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949524), GPR_U32(ctx, 16));
label_14bef8:
    // 0x14bef8: 0x8f84ba94  lw          $a0, -0x456C($gp)
    ctx->pc = 0x14bef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949524)));
label_14befc:
    // 0x14befc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x14befcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_14bf00:
    // 0x14bf00: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x14bf00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_14bf04:
    // 0x14bf04: 0x320f809  jalr        $t9
label_14bf08:
    if (ctx->pc == 0x14BF08u) {
        ctx->pc = 0x14BF0Cu;
        goto label_14bf0c;
    }
    ctx->pc = 0x14BF04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14BF0Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14BF04u, 0x14BF0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14BF0Cu;
label_14bf0c:
    // 0x14bf0c: 0x8f84ba94  lw          $a0, -0x456C($gp)
    ctx->pc = 0x14bf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949524)));
label_14bf10:
    // 0x14bf10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14bf10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14bf14:
    // 0x14bf14: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x14bf14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_14bf18:
    // 0x14bf18: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x14bf18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_14bf1c:
    // 0x14bf1c: 0x320f809  jalr        $t9
label_14bf20:
    if (ctx->pc == 0x14BF20u) {
        ctx->pc = 0x14BF24u;
        goto label_14bf24;
    }
    ctx->pc = 0x14BF1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14BF24u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14BF1Cu, 0x14BF24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14BF24u;
label_14bf24:
    // 0x14bf24: 0x10000008  b           . + 4 + (0x8 << 2)
label_14bf28:
    if (ctx->pc == 0x14BF28u) {
        ctx->pc = 0x14BF2Cu;
        goto label_14bf2c;
    }
    ctx->pc = 0x14BF24u;
    {
        const bool branch_taken_0x14bf24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bf24) {
            ctx->pc = 0x14BF48u;
            goto label_14bf48;
        }
    }
    ctx->pc = 0x14BF2Cu;
label_14bf2c:
    // 0x14bf2c: 0x8f82ba94  lw          $v0, -0x456C($gp)
    ctx->pc = 0x14bf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949524)));
label_14bf30:
    // 0x14bf30: 0x10020005  beq         $zero, $v0, . + 4 + (0x5 << 2)
label_14bf34:
    if (ctx->pc == 0x14BF34u) {
        ctx->pc = 0x14BF38u;
        goto label_14bf38;
    }
    ctx->pc = 0x14BF30u;
    {
        const bool branch_taken_0x14bf30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x14bf30) {
            ctx->pc = 0x14BF48u;
            goto label_14bf48;
        }
    }
    ctx->pc = 0x14BF38u;
label_14bf38:
    // 0x14bf38: 0x8f84ba94  lw          $a0, -0x456C($gp)
    ctx->pc = 0x14bf38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949524)));
label_14bf3c:
    // 0x14bf3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14bf3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14bf40:
    // 0x14bf40: 0xc0a45d4  jal         func_291750
label_14bf44:
    if (ctx->pc == 0x14BF44u) {
        ctx->pc = 0x14BF48u;
        goto label_14bf48;
    }
    ctx->pc = 0x14BF40u;
    SET_GPR_U32(ctx, 31, 0x14BF48u);
    ctx->pc = 0x291750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291750u, 0x14BF40u, 0x14BF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BF48u;
label_14bf48:
    // 0x14bf48: 0x93a40080  lbu         $a0, 0x80($sp)
    ctx->pc = 0x14bf48u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 128)));
label_14bf4c:
    // 0x14bf4c: 0xc053554  jal         func_14D550
label_14bf50:
    if (ctx->pc == 0x14BF50u) {
        ctx->pc = 0x14BF54u;
        goto label_14bf54;
    }
    ctx->pc = 0x14BF4Cu;
    SET_GPR_U32(ctx, 31, 0x14BF54u);
    ctx->pc = 0x14D550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D550u, 0x14BF4Cu, 0x14BF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BF54u;
label_14bf54:
    // 0x14bf54: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x14bf54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_14bf58:
    // 0x14bf58: 0x27858cc0  addiu       $a1, $gp, -0x7340
    ctx->pc = 0x14bf58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937792));
label_14bf5c:
    // 0x14bf5c: 0xc054558  jal         func_151560
label_14bf60:
    if (ctx->pc == 0x14BF60u) {
        ctx->pc = 0x14BF64u;
        goto label_14bf64;
    }
    ctx->pc = 0x14BF5Cu;
    SET_GPR_U32(ctx, 31, 0x14BF64u);
    ctx->pc = 0x151560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151560u, 0x14BF5Cu, 0x14BF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BF64u;
label_14bf64:
    // 0x14bf64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14bf64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14bf68:
    // 0x14bf68: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x14bf68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_14bf6c:
    // 0x14bf6c: 0xa043002d  sb          $v1, 0x2D($v0)
    ctx->pc = 0x14bf6cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 45), (uint8_t)GPR_U32(ctx, 3));
label_14bf70:
    // 0x14bf70: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x14bf70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_14bf74:
    // 0x14bf74: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x14bf74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_14bf78:
    // 0x14bf78: 0x8f84ba9c  lw          $a0, -0x4564($gp)
    ctx->pc = 0x14bf78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
label_14bf7c:
    // 0x14bf7c: 0xc0529b8  jal         func_14A6E0
label_14bf80:
    if (ctx->pc == 0x14BF80u) {
        ctx->pc = 0x14BF84u;
        goto label_14bf84;
    }
    ctx->pc = 0x14BF7Cu;
    SET_GPR_U32(ctx, 31, 0x14BF84u);
    ctx->pc = 0x14A6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A6E0u, 0x14BF7Cu, 0x14BF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BF84u;
label_14bf84:
    // 0x14bf84: 0x8f84ba9c  lw          $a0, -0x4564($gp)
    ctx->pc = 0x14bf84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
label_14bf88:
    // 0x14bf88: 0xc052c00  jal         func_14B000
label_14bf8c:
    if (ctx->pc == 0x14BF8Cu) {
        ctx->pc = 0x14BF90u;
        goto label_14bf90;
    }
    ctx->pc = 0x14BF88u;
    SET_GPR_U32(ctx, 31, 0x14BF90u);
    ctx->pc = 0x14B000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B000u, 0x14BF88u, 0x14BF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BF90u;
label_14bf90:
    // 0x14bf90: 0x8f84ba9c  lw          $a0, -0x4564($gp)
    ctx->pc = 0x14bf90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
label_14bf94:
    // 0x14bf94: 0xc052c38  jal         func_14B0E0
label_14bf98:
    if (ctx->pc == 0x14BF98u) {
        ctx->pc = 0x14BF9Cu;
        goto label_14bf9c;
    }
    ctx->pc = 0x14BF94u;
    SET_GPR_U32(ctx, 31, 0x14BF9Cu);
    ctx->pc = 0x14B0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B0E0u, 0x14BF94u, 0x14BF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BF9Cu;
label_14bf9c:
    // 0x14bf9c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x14bf9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_14bfa0:
    // 0x14bfa0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14bfa0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_14bfa4:
    // 0x14bfa4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14bfa4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_14bfa8:
    // 0x14bfa8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14bfa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_14bfac:
    // 0x14bfac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14bfacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_14bfb0:
    // 0x14bfb0: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x14bfb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_14bfb4:
    // 0x14bfb4: 0x3e00008  jr          $ra
label_14bfb8:
    if (ctx->pc == 0x14BFB8u) {
        ctx->pc = 0x14BFBCu;
        goto label_14bfbc;
    }
    ctx->pc = 0x14BFB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14BFB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14BFBCu;
label_14bfbc:
    // 0x14bfbc: 0x0  nop
    ctx->pc = 0x14bfbcu;
    // NOP
label_14bfc0:
    // 0x14bfc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14bfc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_14bfc4:
    // 0x14bfc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14bfc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_14bfc8:
    // 0x14bfc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14bfc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_14bfcc:
    // 0x14bfcc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x14bfccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_14bfd0:
    // 0x14bfd0: 0xa3a50030  sb          $a1, 0x30($sp)
    ctx->pc = 0x14bfd0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 5));
label_14bfd4:
    // 0x14bfd4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x14bfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_14bfd8:
    // 0x14bfd8: 0x93a50030  lbu         $a1, 0x30($sp)
    ctx->pc = 0x14bfd8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
label_14bfdc:
    // 0x14bfdc: 0xc0ad96c  jal         func_2B65B0
label_14bfe0:
    if (ctx->pc == 0x14BFE0u) {
        ctx->pc = 0x14BFE4u;
        goto label_14bfe4;
    }
    ctx->pc = 0x14BFDCu;
    SET_GPR_U32(ctx, 31, 0x14BFE4u);
    ctx->pc = 0x2B65B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B65B0u, 0x14BFDCu, 0x14BFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BFE4u;
label_14bfe4:
    // 0x14bfe4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x14bfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_14bfe8:
    // 0x14bfe8: 0x93a50030  lbu         $a1, 0x30($sp)
    ctx->pc = 0x14bfe8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
label_14bfec:
    // 0x14bfec: 0xc052f24  jal         func_14BC90
label_14bff0:
    if (ctx->pc == 0x14BFF0u) {
        ctx->pc = 0x14BFF4u;
        goto label_14bff4;
    }
    ctx->pc = 0x14BFECu;
    SET_GPR_U32(ctx, 31, 0x14BFF4u);
    ctx->pc = 0x14BC90u;
    goto label_14bc90;
    ctx->pc = 0x14BFF4u;
label_14bff4:
    // 0x14bff4: 0x93a30030  lbu         $v1, 0x30($sp)
    ctx->pc = 0x14bff4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
label_14bff8:
    // 0x14bff8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x14bff8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_14bffc:
    // 0x14bffc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14bffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14c000:
    // 0x14c000: 0x14830034  bne         $a0, $v1, . + 4 + (0x34 << 2)
label_14c004:
    if (ctx->pc == 0x14C004u) {
        ctx->pc = 0x14C008u;
        goto label_14c008;
    }
    ctx->pc = 0x14C000u;
    {
        const bool branch_taken_0x14c000 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x14c000) {
            ctx->pc = 0x14C0D4u;
            goto label_14c0d4;
        }
    }
    ctx->pc = 0x14C008u;
label_14c008:
    // 0x14c008: 0x8f82ba90  lw          $v0, -0x4570($gp)
    ctx->pc = 0x14c008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949520)));
label_14c00c:
    // 0x14c00c: 0x10020014  beq         $zero, $v0, . + 4 + (0x14 << 2)
label_14c010:
    if (ctx->pc == 0x14C010u) {
        ctx->pc = 0x14C014u;
        goto label_14c014;
    }
    ctx->pc = 0x14C00Cu;
    {
        const bool branch_taken_0x14c00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x14c00c) {
            ctx->pc = 0x14C060u;
            goto label_14c060;
        }
    }
    ctx->pc = 0x14C014u;
label_14c014:
    // 0x14c014: 0x8f84ba90  lw          $a0, -0x4570($gp)
    ctx->pc = 0x14c014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949520)));
label_14c018:
    // 0x14c018: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x14c018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_14c01c:
    // 0x14c01c: 0xc085538  jal         func_2154E0
label_14c020:
    if (ctx->pc == 0x14C020u) {
        ctx->pc = 0x14C024u;
        goto label_14c024;
    }
    ctx->pc = 0x14C01Cu;
    SET_GPR_U32(ctx, 31, 0x14C024u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x14C01Cu, 0x14C024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C024u;
label_14c024:
    // 0x14c024: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14c024u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14c028:
    // 0x14c028: 0x1010000d  beq         $zero, $s0, . + 4 + (0xD << 2)
label_14c02c:
    if (ctx->pc == 0x14C02Cu) {
        ctx->pc = 0x14C030u;
        goto label_14c030;
    }
    ctx->pc = 0x14C028u;
    {
        const bool branch_taken_0x14c028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        if (branch_taken_0x14c028) {
            ctx->pc = 0x14C060u;
            goto label_14c060;
        }
    }
    ctx->pc = 0x14C030u;
label_14c030:
    // 0x14c030: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14c034:
    // 0x14c034: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14c034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14c038:
    // 0x14c038: 0xc091020  jal         func_244080
label_14c03c:
    if (ctx->pc == 0x14C03Cu) {
        ctx->pc = 0x14C040u;
        goto label_14c040;
    }
    ctx->pc = 0x14C038u;
    SET_GPR_U32(ctx, 31, 0x14C040u);
    ctx->pc = 0x244080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244080u, 0x14C038u, 0x14C040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C040u;
label_14c040:
    // 0x14c040: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14c044:
    // 0x14c044: 0xc090fa0  jal         func_243E80
label_14c048:
    if (ctx->pc == 0x14C048u) {
        ctx->pc = 0x14C04Cu;
        goto label_14c04c;
    }
    ctx->pc = 0x14C044u;
    SET_GPR_U32(ctx, 31, 0x14C04Cu);
    ctx->pc = 0x243E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E80u, 0x14C044u, 0x14C04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C04Cu;
label_14c04c:
    // 0x14c04c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14c04cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14c050:
    // 0x14c050: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14c050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14c054:
    // 0x14c054: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14c054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14c058:
    // 0x14c058: 0xc094f14  jal         func_253C50
label_14c05c:
    if (ctx->pc == 0x14C05Cu) {
        ctx->pc = 0x14C060u;
        goto label_14c060;
    }
    ctx->pc = 0x14C058u;
    SET_GPR_U32(ctx, 31, 0x14C060u);
    ctx->pc = 0x253C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253C50u, 0x14C058u, 0x14C060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C060u;
label_14c060:
    // 0x14c060: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14c060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
label_14c064:
    // 0x14c064: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x14c064u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
label_14c068:
    // 0x14c068: 0x24030710  addiu       $v1, $zero, 0x710
    ctx->pc = 0x14c068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1808));
label_14c06c:
    // 0x14c06c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x14c06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_14c070:
    // 0x14c070: 0xac430054  sw          $v1, 0x54($v0)
    ctx->pc = 0x14c070u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 3));
label_14c074:
    // 0x14c074: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x14c074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_14c078:
    // 0x14c078: 0x27858cc0  addiu       $a1, $gp, -0x7340
    ctx->pc = 0x14c078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937792));
label_14c07c:
    // 0x14c07c: 0xc054558  jal         func_151560
label_14c080:
    if (ctx->pc == 0x14C080u) {
        ctx->pc = 0x14C084u;
        goto label_14c084;
    }
    ctx->pc = 0x14C07Cu;
    SET_GPR_U32(ctx, 31, 0x14C084u);
    ctx->pc = 0x151560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151560u, 0x14C07Cu, 0x14C084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C084u;
label_14c084:
    // 0x14c084: 0x8f84baa0  lw          $a0, -0x4560($gp)
    ctx->pc = 0x14c084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949536)));
label_14c088:
    // 0x14c088: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x14c088u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_14c08c:
    // 0x14c08c: 0x24a52d60  addiu       $a1, $a1, 0x2D60
    ctx->pc = 0x14c08cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11616));
label_14c090:
    // 0x14c090: 0xc059560  jal         func_165580
label_14c094:
    if (ctx->pc == 0x14C094u) {
        ctx->pc = 0x14C098u;
        goto label_14c098;
    }
    ctx->pc = 0x14C090u;
    SET_GPR_U32(ctx, 31, 0x14C098u);
    ctx->pc = 0x165580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165580u, 0x14C090u, 0x14C098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C098u;
label_14c098:
    // 0x14c098: 0x8f84baa0  lw          $a0, -0x4560($gp)
    ctx->pc = 0x14c098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949536)));
label_14c09c:
    // 0x14c09c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x14c09cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_14c0a0:
    // 0x14c0a0: 0x24a52d70  addiu       $a1, $a1, 0x2D70
    ctx->pc = 0x14c0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11632));
label_14c0a4:
    // 0x14c0a4: 0xc059598  jal         func_165660
label_14c0a8:
    if (ctx->pc == 0x14C0A8u) {
        ctx->pc = 0x14C0ACu;
        goto label_14c0ac;
    }
    ctx->pc = 0x14C0A4u;
    SET_GPR_U32(ctx, 31, 0x14C0ACu);
    ctx->pc = 0x165660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165660u, 0x14C0A4u, 0x14C0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C0ACu;
label_14c0ac:
    // 0x14c0ac: 0x8f84baa0  lw          $a0, -0x4560($gp)
    ctx->pc = 0x14c0acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949536)));
label_14c0b0:
    // 0x14c0b0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x14c0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_14c0b4:
    // 0x14c0b4: 0x24a52d88  addiu       $a1, $a1, 0x2D88
    ctx->pc = 0x14c0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11656));
label_14c0b8:
    // 0x14c0b8: 0xc0595d0  jal         func_165740
label_14c0bc:
    if (ctx->pc == 0x14C0BCu) {
        ctx->pc = 0x14C0C0u;
        goto label_14c0c0;
    }
    ctx->pc = 0x14C0B8u;
    SET_GPR_U32(ctx, 31, 0x14C0C0u);
    ctx->pc = 0x165740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165740u, 0x14C0B8u, 0x14C0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C0C0u;
label_14c0c0:
    // 0x14c0c0: 0x8f84baa0  lw          $a0, -0x4560($gp)
    ctx->pc = 0x14c0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949536)));
label_14c0c4:
    // 0x14c0c4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x14c0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_14c0c8:
    // 0x14c0c8: 0x24a52da0  addiu       $a1, $a1, 0x2DA0
    ctx->pc = 0x14c0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11680));
label_14c0cc:
    // 0x14c0cc: 0xc059608  jal         func_165820
label_14c0d0:
    if (ctx->pc == 0x14C0D0u) {
        ctx->pc = 0x14C0D4u;
        goto label_14c0d4;
    }
    ctx->pc = 0x14C0CCu;
    SET_GPR_U32(ctx, 31, 0x14C0D4u);
    ctx->pc = 0x165820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165820u, 0x14C0CCu, 0x14C0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C0D4u;
label_14c0d4:
    // 0x14c0d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14c0d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_14c0d8:
    // 0x14c0d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14c0d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_14c0dc:
    // 0x14c0dc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x14c0dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_14c0e0:
    // 0x14c0e0: 0x3e00008  jr          $ra
label_14c0e4:
    if (ctx->pc == 0x14C0E4u) {
        ctx->pc = 0x14C0E8u;
        goto label_14c0e8;
    }
    ctx->pc = 0x14C0E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C0E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14C0E8u;
label_14c0e8:
    // 0x14c0e8: 0x0  nop
    ctx->pc = 0x14c0e8u;
    // NOP
label_14c0ec:
    // 0x14c0ec: 0x0  nop
    ctx->pc = 0x14c0ecu;
    // NOP
label_14c0f0:
    // 0x14c0f0: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x14c0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
label_14c0f4:
    // 0x14c0f4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x14c0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_14c0f8:
    // 0x14c0f8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x14c0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_14c0fc:
    // 0x14c0fc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x14c0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_14c100:
    // 0x14c100: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x14c100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_14c104:
    // 0x14c104: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x14c104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_14c108:
    // 0x14c108: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14c108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_14c10c:
    // 0x14c10c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14c10cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_14c110:
    // 0x14c110: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14c110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_14c114:
    // 0x14c114: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14c114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_14c118:
    // 0x14c118: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14c118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_14c11c:
    // 0x14c11c: 0xafa401d0  sw          $a0, 0x1D0($sp)
    ctx->pc = 0x14c11cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 4));
label_14c120:
    // 0x14c120: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x14c120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_14c124:
    // 0x14c124: 0x9042002d  lbu         $v0, 0x2D($v0)
    ctx->pc = 0x14c124u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 45)));
label_14c128:
    // 0x14c128: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14c128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14c12c:
    // 0x14c12c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14c12cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14c130:
    // 0x14c130: 0x14440080  bne         $v0, $a0, . + 4 + (0x80 << 2)
label_14c134:
    if (ctx->pc == 0x14C134u) {
        ctx->pc = 0x14C138u;
        goto label_14c138;
    }
    ctx->pc = 0x14C130u;
    {
        const bool branch_taken_0x14c130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x14c130) {
            ctx->pc = 0x14C334u;
            goto label_14c334;
        }
    }
    ctx->pc = 0x14C138u;
label_14c138:
    // 0x14c138: 0x8f82ba90  lw          $v0, -0x4570($gp)
    ctx->pc = 0x14c138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949520)));
label_14c13c:
    // 0x14c13c: 0x1002007d  beq         $zero, $v0, . + 4 + (0x7D << 2)
label_14c140:
    if (ctx->pc == 0x14C140u) {
        ctx->pc = 0x14C144u;
        goto label_14c144;
    }
    ctx->pc = 0x14C13Cu;
    {
        const bool branch_taken_0x14c13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x14c13c) {
            ctx->pc = 0x14C334u;
            goto label_14c334;
        }
    }
    ctx->pc = 0x14C144u;
label_14c144:
    // 0x14c144: 0x93848cbc  lbu         $a0, -0x7344($gp)
    ctx->pc = 0x14c144u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937788)));
label_14c148:
    // 0x14c148: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x14c148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_14c14c:
    // 0x14c14c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14c14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14c150:
    // 0x14c150: 0x14440078  bne         $v0, $a0, . + 4 + (0x78 << 2)
label_14c154:
    if (ctx->pc == 0x14C154u) {
        ctx->pc = 0x14C158u;
        goto label_14c158;
    }
    ctx->pc = 0x14C150u;
    {
        const bool branch_taken_0x14c150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x14c150) {
            ctx->pc = 0x14C334u;
            goto label_14c334;
        }
    }
    ctx->pc = 0x14C158u;
label_14c158:
    // 0x14c158: 0x8f85bb70  lw          $a1, -0x4490($gp)
    ctx->pc = 0x14c158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_14c15c:
    // 0x14c15c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x14c15cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_14c160:
    // 0x14c160: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x14c160u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14c164:
    // 0x14c164: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14c164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14c168:
    // 0x14c168: 0x14850005  bne         $a0, $a1, . + 4 + (0x5 << 2)
label_14c16c:
    if (ctx->pc == 0x14C16Cu) {
        ctx->pc = 0x14C170u;
        goto label_14c170;
    }
    ctx->pc = 0x14C168u;
    {
        const bool branch_taken_0x14c168 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x14c168) {
            ctx->pc = 0x14C180u;
            goto label_14c180;
        }
    }
    ctx->pc = 0x14C170u;
label_14c170:
    // 0x14c170: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x14c170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_14c174:
    // 0x14c174: 0x24560030  addiu       $s6, $v0, 0x30
    ctx->pc = 0x14c174u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_14c178:
    // 0x14c178: 0x10000003  b           . + 4 + (0x3 << 2)
label_14c17c:
    if (ctx->pc == 0x14C17Cu) {
        ctx->pc = 0x14C180u;
        goto label_14c180;
    }
    ctx->pc = 0x14C178u;
    {
        const bool branch_taken_0x14c178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c178) {
            ctx->pc = 0x14C188u;
            goto label_14c188;
        }
    }
    ctx->pc = 0x14C180u;
label_14c180:
    // 0x14c180: 0x8f82bca0  lw          $v0, -0x4360($gp)
    ctx->pc = 0x14c180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950048)));
label_14c184:
    // 0x14c184: 0x24560040  addiu       $s6, $v0, 0x40
    ctx->pc = 0x14c184u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_14c188:
    // 0x14c188: 0x27a50198  addiu       $a1, $sp, 0x198
    ctx->pc = 0x14c188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
label_14c18c:
    // 0x14c18c: 0xc6c20000  lwc1        $f2, 0x0($s6)
    ctx->pc = 0x14c18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_14c190:
    // 0x14c190: 0xc6c10004  lwc1        $f1, 0x4($s6)
    ctx->pc = 0x14c190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14c194:
    // 0x14c194: 0xc6c00008  lwc1        $f0, 0x8($s6)
    ctx->pc = 0x14c194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14c198:
    // 0x14c198: 0xe4a20000  swc1        $f2, 0x0($a1)
    ctx->pc = 0x14c198u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_14c19c:
    // 0x14c19c: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x14c19cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_14c1a0:
    // 0x14c1a0: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x14c1a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_14c1a4:
    // 0x14c1a4: 0x27a20190  addiu       $v0, $sp, 0x190
    ctx->pc = 0x14c1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_14c1a8:
    // 0x14c1a8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x14c1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_14c1ac:
    // 0x14c1ac: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_14c1b0:
    if (ctx->pc == 0x14C1B0u) {
        ctx->pc = 0x14C1B4u;
        goto label_14c1b4;
    }
    ctx->pc = 0x14C1ACu;
    {
        const bool branch_taken_0x14c1ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c1ac) {
            ctx->pc = 0x14C1D4u;
            goto label_14c1d4;
        }
    }
    ctx->pc = 0x14C1B4u;
label_14c1b4:
    // 0x14c1b4: 0x402821  addu        $a1, $v0, $zero
    ctx->pc = 0x14c1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 0)));
label_14c1b8:
    // 0x14c1b8: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x14c1b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_14c1bc:
    // 0x14c1bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14c1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_14c1c0:
    // 0x14c1c0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x14c1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_14c1c4:
    // 0x14c1c4: 0x0  nop
    ctx->pc = 0x14c1c4u;
    // NOP
label_14c1c8:
    // 0x14c1c8: 0x0  nop
    ctx->pc = 0x14c1c8u;
    // NOP
label_14c1cc:
    // 0x14c1cc: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
label_14c1d0:
    if (ctx->pc == 0x14C1D0u) {
        ctx->pc = 0x14C1D4u;
        goto label_14c1d4;
    }
    ctx->pc = 0x14C1CCu;
    {
        const bool branch_taken_0x14c1cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c1cc) {
            ctx->pc = 0x14C1B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14c1b8;
        }
    }
    ctx->pc = 0x14C1D4u;
label_14c1d4:
    // 0x14c1d4: 0xc7a00198  lwc1        $f0, 0x198($sp)
    ctx->pc = 0x14c1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14c1d8:
    // 0x14c1d8: 0xe7a00190  swc1        $f0, 0x190($sp)
    ctx->pc = 0x14c1d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_14c1dc:
    // 0x14c1dc: 0xc7a001a0  lwc1        $f0, 0x1A0($sp)
    ctx->pc = 0x14c1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14c1e0:
    // 0x14c1e0: 0xe7a00194  swc1        $f0, 0x194($sp)
    ctx->pc = 0x14c1e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 404), bits); }
label_14c1e4:
    // 0x14c1e4: 0xe7a001a4  swc1        $f0, 0x1A4($sp)
    ctx->pc = 0x14c1e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
label_14c1e8:
    // 0x14c1e8: 0xc090864  jal         func_242190
label_14c1ec:
    if (ctx->pc == 0x14C1ECu) {
        ctx->pc = 0x14C1F0u;
        goto label_14c1f0;
    }
    ctx->pc = 0x14C1E8u;
    SET_GPR_U32(ctx, 31, 0x14C1F0u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x14C1E8u, 0x14C1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C1F0u;
label_14c1f0:
    // 0x14c1f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14c1f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14c1f4:
    // 0x14c1f4: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x14c1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_14c1f8:
    // 0x14c1f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14c1f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14c1fc:
    // 0x14c1fc: 0xc09088c  jal         func_242230
label_14c200:
    if (ctx->pc == 0x14C200u) {
        ctx->pc = 0x14C204u;
        goto label_14c204;
    }
    ctx->pc = 0x14C1FCu;
    SET_GPR_U32(ctx, 31, 0x14C204u);
    ctx->pc = 0x242230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242230u, 0x14C1FCu, 0x14C204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C204u;
label_14c204:
    // 0x14c204: 0xafa201c8  sw          $v0, 0x1C8($sp)
    ctx->pc = 0x14c204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 2));
label_14c208:
    // 0x14c208: 0x8fa401c8  lw          $a0, 0x1C8($sp)
    ctx->pc = 0x14c208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_14c20c:
    // 0x14c20c: 0x10040006  beq         $zero, $a0, . + 4 + (0x6 << 2)
label_14c210:
    if (ctx->pc == 0x14C210u) {
        ctx->pc = 0x14C214u;
        goto label_14c214;
    }
    ctx->pc = 0x14C20Cu;
    {
        const bool branch_taken_0x14c20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        if (branch_taken_0x14c20c) {
            ctx->pc = 0x14C228u;
            goto label_14c228;
        }
    }
    ctx->pc = 0x14C214u;
label_14c214:
    // 0x14c214: 0x8fa501c8  lw          $a1, 0x1C8($sp)
    ctx->pc = 0x14c214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_14c218:
    // 0x14c218: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x14c218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_14c21c:
    // 0x14c21c: 0x27a50198  addiu       $a1, $sp, 0x198
    ctx->pc = 0x14c21cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
label_14c220:
    // 0x14c220: 0xc09381c  jal         func_24E070
label_14c224:
    if (ctx->pc == 0x14C224u) {
        ctx->pc = 0x14C228u;
        goto label_14c228;
    }
    ctx->pc = 0x14C220u;
    SET_GPR_U32(ctx, 31, 0x14C228u);
    ctx->pc = 0x24E070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E070u, 0x14C220u, 0x14C228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C228u;
label_14c228:
    // 0x14c228: 0x8f85ba90  lw          $a1, -0x4570($gp)
    ctx->pc = 0x14c228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949520)));
label_14c22c:
    // 0x14c22c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x14c22cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_14c230:
    // 0x14c230: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x14c230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_14c234:
    // 0x14c234: 0xc085538  jal         func_2154E0
label_14c238:
    if (ctx->pc == 0x14C238u) {
        ctx->pc = 0x14C23Cu;
        goto label_14c23c;
    }
    ctx->pc = 0x14C234u;
    SET_GPR_U32(ctx, 31, 0x14C23Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x14C234u, 0x14C23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C23Cu;
label_14c23c:
    // 0x14c23c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x14c23cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14c240:
    // 0x14c240: 0x10150018  beq         $zero, $s5, . + 4 + (0x18 << 2)
label_14c244:
    if (ctx->pc == 0x14C244u) {
        ctx->pc = 0x14C248u;
        goto label_14c248;
    }
    ctx->pc = 0x14C240u;
    {
        const bool branch_taken_0x14c240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 21));
        if (branch_taken_0x14c240) {
            ctx->pc = 0x14C2A4u;
            goto label_14c2a4;
        }
    }
    ctx->pc = 0x14C248u;
label_14c248:
    // 0x14c248: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x14c248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_14c24c:
    // 0x14c24c: 0x27a50198  addiu       $a1, $sp, 0x198
    ctx->pc = 0x14c24cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
label_14c250:
    // 0x14c250: 0xc090f14  jal         func_243C50
label_14c254:
    if (ctx->pc == 0x14C254u) {
        ctx->pc = 0x14C258u;
        goto label_14c258;
    }
    ctx->pc = 0x14C250u;
    SET_GPR_U32(ctx, 31, 0x14C258u);
    ctx->pc = 0x243C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243C50u, 0x14C250u, 0x14C258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C258u;
label_14c258:
    // 0x14c258: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x14c258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_14c25c:
    // 0x14c25c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x14c25cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_14c260:
    // 0x14c260: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x14c260u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14c264:
    // 0x14c264: 0x14a0000f  bnez        $a1, . + 4 + (0xF << 2)
label_14c268:
    if (ctx->pc == 0x14C268u) {
        ctx->pc = 0x14C26Cu;
        goto label_14c26c;
    }
    ctx->pc = 0x14C264u;
    {
        const bool branch_taken_0x14c264 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c264) {
            ctx->pc = 0x14C2A4u;
            goto label_14c2a4;
        }
    }
    ctx->pc = 0x14C26Cu;
label_14c26c:
    // 0x14c26c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x14c26cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_14c270:
    // 0x14c270: 0xc090fa0  jal         func_243E80
label_14c274:
    if (ctx->pc == 0x14C274u) {
        ctx->pc = 0x14C278u;
        goto label_14c278;
    }
    ctx->pc = 0x14C270u;
    SET_GPR_U32(ctx, 31, 0x14C278u);
    ctx->pc = 0x243E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E80u, 0x14C270u, 0x14C278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C278u;
label_14c278:
    // 0x14c278: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x14c278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_14c27c:
    // 0x14c27c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14c27cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14c280:
    // 0x14c280: 0x27a60198  addiu       $a2, $sp, 0x198
    ctx->pc = 0x14c280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
label_14c284:
    // 0x14c284: 0xc094e0c  jal         func_253830
label_14c288:
    if (ctx->pc == 0x14C288u) {
        ctx->pc = 0x14C28Cu;
        goto label_14c28c;
    }
    ctx->pc = 0x14C284u;
    SET_GPR_U32(ctx, 31, 0x14C28Cu);
    ctx->pc = 0x253830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253830u, 0x14C284u, 0x14C28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C28Cu;
label_14c28c:
    // 0x14c28c: 0x8f85bb70  lw          $a1, -0x4490($gp)
    ctx->pc = 0x14c28cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_14c290:
    // 0x14c290: 0x24a60030  addiu       $a2, $a1, 0x30
    ctx->pc = 0x14c290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
label_14c294:
    // 0x14c294: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x14c294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_14c298:
    // 0x14c298: 0x27a50198  addiu       $a1, $sp, 0x198
    ctx->pc = 0x14c298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
label_14c29c:
    // 0x14c29c: 0xc041d58  jal         func_107560
label_14c2a0:
    if (ctx->pc == 0x14C2A0u) {
        ctx->pc = 0x14C2A4u;
        goto label_14c2a4;
    }
    ctx->pc = 0x14C29Cu;
    SET_GPR_U32(ctx, 31, 0x14C2A4u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x14C29Cu, 0x14C2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C2A4u;
label_14c2a4:
    // 0x14c2a4: 0xc090864  jal         func_242190
label_14c2a8:
    if (ctx->pc == 0x14C2A8u) {
        ctx->pc = 0x14C2ACu;
        goto label_14c2ac;
    }
    ctx->pc = 0x14C2A4u;
    SET_GPR_U32(ctx, 31, 0x14C2ACu);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x14C2A4u, 0x14C2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C2ACu;
label_14c2ac:
    // 0x14c2ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14c2acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14c2b0:
    // 0x14c2b0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x14c2b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_14c2b4:
    // 0x14c2b4: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x14c2b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_14c2b8:
    // 0x14c2b8: 0x320f809  jalr        $t9
label_14c2bc:
    if (ctx->pc == 0x14C2BCu) {
        ctx->pc = 0x14C2C0u;
        goto label_14c2c0;
    }
    ctx->pc = 0x14C2B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14C2C0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C2B8u, 0x14C2C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14C2C0u;
label_14c2c0:
    // 0x14c2c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14c2c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14c2c4:
    // 0x14c2c4: 0xafa401c4  sw          $a0, 0x1C4($sp)
    ctx->pc = 0x14c2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 452), GPR_U32(ctx, 4));
label_14c2c8:
    // 0x14c2c8: 0xc090864  jal         func_242190
label_14c2cc:
    if (ctx->pc == 0x14C2CCu) {
        ctx->pc = 0x14C2D0u;
        goto label_14c2d0;
    }
    ctx->pc = 0x14C2C8u;
    SET_GPR_U32(ctx, 31, 0x14C2D0u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x14C2C8u, 0x14C2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C2D0u;
label_14c2d0:
    // 0x14c2d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14c2d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14c2d4:
    // 0x14c2d4: 0xc090590  jal         func_241640
label_14c2d8:
    if (ctx->pc == 0x14C2D8u) {
        ctx->pc = 0x14C2DCu;
        goto label_14c2dc;
    }
    ctx->pc = 0x14C2D4u;
    SET_GPR_U32(ctx, 31, 0x14C2DCu);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x14C2D4u, 0x14C2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C2DCu;
label_14c2dc:
    // 0x14c2dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14c2dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14c2e0:
    // 0x14c2e0: 0x8fa501c4  lw          $a1, 0x1C4($sp)
    ctx->pc = 0x14c2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
label_14c2e4:
    // 0x14c2e4: 0xc09158c  jal         func_245630
label_14c2e8:
    if (ctx->pc == 0x14C2E8u) {
        ctx->pc = 0x14C2ECu;
        goto label_14c2ec;
    }
    ctx->pc = 0x14C2E4u;
    SET_GPR_U32(ctx, 31, 0x14C2ECu);
    ctx->pc = 0x245630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245630u, 0x14C2E4u, 0x14C2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C2ECu;
label_14c2ec:
    // 0x14c2ec: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x14c2ecu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14c2f0:
    // 0x14c2f0: 0x101e0010  beq         $zero, $fp, . + 4 + (0x10 << 2)
label_14c2f4:
    if (ctx->pc == 0x14C2F4u) {
        ctx->pc = 0x14C2F8u;
        goto label_14c2f8;
    }
    ctx->pc = 0x14C2F0u;
    {
        const bool branch_taken_0x14c2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 30));
        if (branch_taken_0x14c2f0) {
            ctx->pc = 0x14C334u;
            goto label_14c334;
        }
    }
    ctx->pc = 0x14C2F8u;
label_14c2f8:
    // 0x14c2f8: 0x8f84bb70  lw          $a0, -0x4490($gp)
    ctx->pc = 0x14c2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_14c2fc:
    // 0x14c2fc: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x14c2fcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_14c300:
    // 0x14c300: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x14c300u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_14c304:
    // 0x14c304: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
label_14c308:
    if (ctx->pc == 0x14C308u) {
        ctx->pc = 0x14C30Cu;
        goto label_14c30c;
    }
    ctx->pc = 0x14C304u;
    {
        const bool branch_taken_0x14c304 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c304) {
            ctx->pc = 0x14C334u;
            goto label_14c334;
        }
    }
    ctx->pc = 0x14C30Cu;
label_14c30c:
    // 0x14c30c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x14c30cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_14c310:
    // 0x14c310: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x14c310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_14c314:
    // 0x14c314: 0xc085538  jal         func_2154E0
label_14c318:
    if (ctx->pc == 0x14C318u) {
        ctx->pc = 0x14C31Cu;
        goto label_14c31c;
    }
    ctx->pc = 0x14C314u;
    SET_GPR_U32(ctx, 31, 0x14C31Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x14C314u, 0x14C31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C31Cu;
label_14c31c:
    // 0x14c31c: 0xafa201c0  sw          $v0, 0x1C0($sp)
    ctx->pc = 0x14c31cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 2));
label_14c320:
    // 0x14c320: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x14c320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_14c324:
    // 0x14c324: 0x8f85ba90  lw          $a1, -0x4570($gp)
    ctx->pc = 0x14c324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949520)));
label_14c328:
    // 0x14c328: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x14c328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_14c32c:
    // 0x14c32c: 0xc091ab0  jal         func_246AC0
label_14c330:
    if (ctx->pc == 0x14C330u) {
        ctx->pc = 0x14C334u;
        goto label_14c334;
    }
    ctx->pc = 0x14C32Cu;
    SET_GPR_U32(ctx, 31, 0x14C334u);
    ctx->pc = 0x246AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246AC0u, 0x14C32Cu, 0x14C334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C334u;
label_14c334:
    // 0x14c334: 0x8fa501d0  lw          $a1, 0x1D0($sp)
    ctx->pc = 0x14c334u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_14c338:
    // 0x14c338: 0x90a2002d  lbu         $v0, 0x2D($a1)
    ctx->pc = 0x14c338u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 45)));
label_14c33c:
    // 0x14c33c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x14c33cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14c340:
    // 0x14c340: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14c340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14c344:
    // 0x14c344: 0x1485005b  bne         $a0, $a1, . + 4 + (0x5B << 2)
label_14c348:
    if (ctx->pc == 0x14C348u) {
        ctx->pc = 0x14C34Cu;
        goto label_14c34c;
    }
    ctx->pc = 0x14C344u;
    {
        const bool branch_taken_0x14c344 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x14c344) {
            ctx->pc = 0x14C4B4u;
            goto label_14c4b4;
        }
    }
    ctx->pc = 0x14C34Cu;
label_14c34c:
    // 0x14c34c: 0x8f84ba94  lw          $a0, -0x456C($gp)
    ctx->pc = 0x14c34cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949524)));
label_14c350:
    // 0x14c350: 0x10040006  beq         $zero, $a0, . + 4 + (0x6 << 2)
label_14c354:
    if (ctx->pc == 0x14C354u) {
        ctx->pc = 0x14C358u;
        goto label_14c358;
    }
    ctx->pc = 0x14C350u;
    {
        const bool branch_taken_0x14c350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        if (branch_taken_0x14c350) {
            ctx->pc = 0x14C36Cu;
            goto label_14c36c;
        }
    }
    ctx->pc = 0x14C358u;
label_14c358:
    // 0x14c358: 0x8f85ba94  lw          $a1, -0x456C($gp)
    ctx->pc = 0x14c358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949524)));
label_14c35c:
    // 0x14c35c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x14c35cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_14c360:
    // 0x14c360: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14c360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14c364:
    // 0x14c364: 0xc0a45d4  jal         func_291750
label_14c368:
    if (ctx->pc == 0x14C368u) {
        ctx->pc = 0x14C36Cu;
        goto label_14c36c;
    }
    ctx->pc = 0x14C364u;
    SET_GPR_U32(ctx, 31, 0x14C36Cu);
    ctx->pc = 0x291750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291750u, 0x14C364u, 0x14C36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C36Cu;
label_14c36c:
    // 0x14c36c: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x14c36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_14c370:
    // 0x14c370: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x14c370u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
label_14c374:
    // 0x14c374: 0x8f84bb70  lw          $a0, -0x4490($gp)
    ctx->pc = 0x14c374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_14c378:
    // 0x14c378: 0x8c85002c  lw          $a1, 0x2C($a0)
    ctx->pc = 0x14c378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_14c37c:
    // 0x14c37c: 0x2402f00f  addiu       $v0, $zero, -0xFF1
    ctx->pc = 0x14c37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963215));
label_14c380:
    // 0x14c380: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x14c380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_14c384:
    // 0x14c384: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x14c384u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
label_14c388:
    // 0x14c388: 0x8fa501d0  lw          $a1, 0x1D0($sp)
    ctx->pc = 0x14c388u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_14c38c:
    // 0x14c38c: 0x8ca20054  lw          $v0, 0x54($a1)
    ctx->pc = 0x14c38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
label_14c390:
    // 0x14c390: 0x30420700  andi        $v0, $v0, 0x700
    ctx->pc = 0x14c390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1792);
label_14c394:
    // 0x14c394: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_14c398:
    if (ctx->pc == 0x14C398u) {
        ctx->pc = 0x14C39Cu;
        goto label_14c39c;
    }
    ctx->pc = 0x14C394u;
    {
        const bool branch_taken_0x14c394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c394) {
            ctx->pc = 0x14C3C4u;
            goto label_14c3c4;
        }
    }
    ctx->pc = 0x14C39Cu;
label_14c39c:
    // 0x14c39c: 0x8f84baa0  lw          $a0, -0x4560($gp)
    ctx->pc = 0x14c39cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949536)));
label_14c3a0:
    // 0x14c3a0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x14c3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_14c3a4:
    // 0x14c3a4: 0x24a52d88  addiu       $a1, $a1, 0x2D88
    ctx->pc = 0x14c3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11656));
label_14c3a8:
    // 0x14c3a8: 0xc0595d0  jal         func_165740
label_14c3ac:
    if (ctx->pc == 0x14C3ACu) {
        ctx->pc = 0x14C3B0u;
        goto label_14c3b0;
    }
    ctx->pc = 0x14C3A8u;
    SET_GPR_U32(ctx, 31, 0x14C3B0u);
    ctx->pc = 0x165740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165740u, 0x14C3A8u, 0x14C3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C3B0u;
label_14c3b0:
    // 0x14c3b0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x14c3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_14c3b4:
    // 0x14c3b4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x14c3b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_14c3b8:
    // 0x14c3b8: 0x8f84ba9c  lw          $a0, -0x4564($gp)
    ctx->pc = 0x14c3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
label_14c3bc:
    // 0x14c3bc: 0xc0529b8  jal         func_14A6E0
label_14c3c0:
    if (ctx->pc == 0x14C3C0u) {
        ctx->pc = 0x14C3C4u;
        goto label_14c3c4;
    }
    ctx->pc = 0x14C3BCu;
    SET_GPR_U32(ctx, 31, 0x14C3C4u);
    ctx->pc = 0x14A6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A6E0u, 0x14C3BCu, 0x14C3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C3C4u;
label_14c3c4:
    // 0x14c3c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14c3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14c3c8:
    // 0x14c3c8: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x14c3c8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14c3cc:
    // 0x14c3cc: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x14c3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_14c3d0:
    // 0x14c3d0: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x14c3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_14c3d4:
    // 0x14c3d4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x14c3d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_14c3d8:
    // 0x14c3d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_14c3dc:
    if (ctx->pc == 0x14C3DCu) {
        ctx->pc = 0x14C3E0u;
        goto label_14c3e0;
    }
    ctx->pc = 0x14C3D8u;
    {
        const bool branch_taken_0x14c3d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c3d8) {
            ctx->pc = 0x14C3F0u;
            goto label_14c3f0;
        }
    }
    ctx->pc = 0x14C3E0u;
label_14c3e0:
    // 0x14c3e0: 0x8fa401d0  lw          $a0, 0x1D0($sp)
    ctx->pc = 0x14c3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_14c3e4:
    // 0x14c3e4: 0xc05365c  jal         func_14D970
label_14c3e8:
    if (ctx->pc == 0x14C3E8u) {
        ctx->pc = 0x14C3ECu;
        goto label_14c3ec;
    }
    ctx->pc = 0x14C3E4u;
    SET_GPR_U32(ctx, 31, 0x14C3ECu);
    ctx->pc = 0x14D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D970u, 0x14C3E4u, 0x14C3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C3ECu;
label_14c3ec:
    // 0x14c3ec: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x14c3ecu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14c3f0:
    // 0x14c3f0: 0x328300ff  andi        $v1, $s4, 0xFF
    ctx->pc = 0x14c3f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_14c3f4:
    // 0x14c3f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14c3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14c3f8:
    // 0x14c3f8: 0x14620022  bne         $v1, $v0, . + 4 + (0x22 << 2)
label_14c3fc:
    if (ctx->pc == 0x14C3FCu) {
        ctx->pc = 0x14C400u;
        goto label_14c400;
    }
    ctx->pc = 0x14C3F8u;
    {
        const bool branch_taken_0x14c3f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14c3f8) {
            ctx->pc = 0x14C484u;
            goto label_14c484;
        }
    }
    ctx->pc = 0x14C400u;
label_14c400:
    // 0x14c400: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x14c400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_14c404:
    // 0x14c404: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x14c404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_14c408:
    // 0x14c408: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x14c408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_14c40c:
    // 0x14c40c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_14c410:
    if (ctx->pc == 0x14C410u) {
        ctx->pc = 0x14C414u;
        goto label_14c414;
    }
    ctx->pc = 0x14C40Cu;
    {
        const bool branch_taken_0x14c40c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c40c) {
            ctx->pc = 0x14C484u;
            goto label_14c484;
        }
    }
    ctx->pc = 0x14C414u;
label_14c414:
    // 0x14c414: 0x8fa401d0  lw          $a0, 0x1D0($sp)
    ctx->pc = 0x14c414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_14c418:
    // 0x14c418: 0xc05374c  jal         func_14DD30
label_14c41c:
    if (ctx->pc == 0x14C41Cu) {
        ctx->pc = 0x14C420u;
        goto label_14c420;
    }
    ctx->pc = 0x14C418u;
    SET_GPR_U32(ctx, 31, 0x14C420u);
    ctx->pc = 0x14DD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DD30u, 0x14C418u, 0x14C420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C420u;
label_14c420:
    // 0x14c420: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x14c420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14c424:
    // 0x14c424: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14c424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14c428:
    // 0x14c428: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
label_14c42c:
    if (ctx->pc == 0x14C42Cu) {
        ctx->pc = 0x14C430u;
        goto label_14c430;
    }
    ctx->pc = 0x14C428u;
    {
        const bool branch_taken_0x14c428 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14c428) {
            ctx->pc = 0x14C484u;
            goto label_14c484;
        }
    }
    ctx->pc = 0x14C430u;
label_14c430:
    // 0x14c430: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x14c430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_14c434:
    // 0x14c434: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x14c434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_14c438:
    // 0x14c438: 0x10020012  beq         $zero, $v0, . + 4 + (0x12 << 2)
label_14c43c:
    if (ctx->pc == 0x14C43Cu) {
        ctx->pc = 0x14C440u;
        goto label_14c440;
    }
    ctx->pc = 0x14C438u;
    {
        const bool branch_taken_0x14c438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x14c438) {
            ctx->pc = 0x14C484u;
            goto label_14c484;
        }
    }
    ctx->pc = 0x14C440u;
label_14c440:
    // 0x14c440: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x14c440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_14c444:
    // 0x14c444: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x14c444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_14c448:
    // 0x14c448: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x14c448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_14c44c:
    // 0x14c44c: 0xc085538  jal         func_2154E0
label_14c450:
    if (ctx->pc == 0x14C450u) {
        ctx->pc = 0x14C454u;
        goto label_14c454;
    }
    ctx->pc = 0x14C44Cu;
    SET_GPR_U32(ctx, 31, 0x14C454u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x14C44Cu, 0x14C454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C454u;
label_14c454:
    // 0x14c454: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x14c454u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14c458:
    // 0x14c458: 0x1017000a  beq         $zero, $s7, . + 4 + (0xA << 2)
label_14c45c:
    if (ctx->pc == 0x14C45Cu) {
        ctx->pc = 0x14C460u;
        goto label_14c460;
    }
    ctx->pc = 0x14C458u;
    {
        const bool branch_taken_0x14c458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 23));
        if (branch_taken_0x14c458) {
            ctx->pc = 0x14C484u;
            goto label_14c484;
        }
    }
    ctx->pc = 0x14C460u;
label_14c460:
    // 0x14c460: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x14c460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_14c464:
    // 0x14c464: 0xc0976e4  jal         func_25DB90
label_14c468:
    if (ctx->pc == 0x14C468u) {
        ctx->pc = 0x14C46Cu;
        goto label_14c46c;
    }
    ctx->pc = 0x14C464u;
    SET_GPR_U32(ctx, 31, 0x14C46Cu);
    ctx->pc = 0x25DB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25DB90u, 0x14C464u, 0x14C46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C46Cu;
label_14c46c:
    // 0x14c46c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_14c470:
    if (ctx->pc == 0x14C470u) {
        ctx->pc = 0x14C474u;
        goto label_14c474;
    }
    ctx->pc = 0x14C46Cu;
    {
        const bool branch_taken_0x14c46c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c46c) {
            ctx->pc = 0x14C484u;
            goto label_14c484;
        }
    }
    ctx->pc = 0x14C474u;
label_14c474:
    // 0x14c474: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x14c474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_14c478:
    // 0x14c478: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x14c478u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
label_14c47c:
    // 0x14c47c: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x14c47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_14c480:
    // 0x14c480: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x14c480u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
label_14c484:
    // 0x14c484: 0x328300ff  andi        $v1, $s4, 0xFF
    ctx->pc = 0x14c484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_14c488:
    // 0x14c488: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14c488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14c48c:
    // 0x14c48c: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_14c490:
    if (ctx->pc == 0x14C490u) {
        ctx->pc = 0x14C494u;
        goto label_14c494;
    }
    ctx->pc = 0x14C48Cu;
    {
        const bool branch_taken_0x14c48c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14c48c) {
            ctx->pc = 0x14C4B4u;
            goto label_14c4b4;
        }
    }
    ctx->pc = 0x14C494u;
label_14c494:
    // 0x14c494: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x14c494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_14c498:
    // 0x14c498: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x14c498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_14c49c:
    // 0x14c49c: 0x30420500  andi        $v0, $v0, 0x500
    ctx->pc = 0x14c49cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1280);
label_14c4a0:
    // 0x14c4a0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_14c4a4:
    if (ctx->pc == 0x14C4A4u) {
        ctx->pc = 0x14C4A8u;
        goto label_14c4a8;
    }
    ctx->pc = 0x14C4A0u;
    {
        const bool branch_taken_0x14c4a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c4a0) {
            ctx->pc = 0x14C4B4u;
            goto label_14c4b4;
        }
    }
    ctx->pc = 0x14C4A8u;
label_14c4a8:
    // 0x14c4a8: 0x8fa401d0  lw          $a0, 0x1D0($sp)
    ctx->pc = 0x14c4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_14c4ac:
    // 0x14c4ac: 0xc0537f8  jal         func_14DFE0
label_14c4b0:
    if (ctx->pc == 0x14C4B0u) {
        ctx->pc = 0x14C4B4u;
        goto label_14c4b4;
    }
    ctx->pc = 0x14C4ACu;
    SET_GPR_U32(ctx, 31, 0x14C4B4u);
    ctx->pc = 0x14DFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DFE0u, 0x14C4ACu, 0x14C4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C4B4u;
label_14c4b4:
    // 0x14c4b4: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x14c4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_14c4b8:
    // 0x14c4b8: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x14c4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_14c4bc:
    // 0x14c4bc: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x14c4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_14c4c0:
    // 0x14c4c0: 0x104001a9  beqz        $v0, . + 4 + (0x1A9 << 2)
label_14c4c4:
    if (ctx->pc == 0x14C4C4u) {
        ctx->pc = 0x14C4C8u;
        goto label_14c4c8;
    }
    ctx->pc = 0x14C4C0u;
    {
        const bool branch_taken_0x14c4c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c4c0) {
            ctx->pc = 0x14CB68u;
            goto label_14cb68;
        }
    }
    ctx->pc = 0x14C4C8u;
label_14c4c8:
    // 0x14c4c8: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x14c4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_14c4cc:
    // 0x14c4cc: 0x90420038  lbu         $v0, 0x38($v0)
    ctx->pc = 0x14c4ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 56)));
label_14c4d0:
    // 0x14c4d0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x14c4d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14c4d4:
    // 0x14c4d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14c4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14c4d8:
    // 0x14c4d8: 0x146201a3  bne         $v1, $v0, . + 4 + (0x1A3 << 2)
label_14c4dc:
    if (ctx->pc == 0x14C4DCu) {
        ctx->pc = 0x14C4E0u;
        goto label_14c4e0;
    }
    ctx->pc = 0x14C4D8u;
    {
        const bool branch_taken_0x14c4d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14c4d8) {
            ctx->pc = 0x14CB68u;
            goto label_14cb68;
        }
    }
    ctx->pc = 0x14C4E0u;
label_14c4e0:
    // 0x14c4e0: 0x8fa401d0  lw          $a0, 0x1D0($sp)
    ctx->pc = 0x14c4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_14c4e4:
    // 0x14c4e4: 0x27858cd0  addiu       $a1, $gp, -0x7330
    ctx->pc = 0x14c4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937808));
label_14c4e8:
    // 0x14c4e8: 0xc054558  jal         func_151560
label_14c4ec:
    if (ctx->pc == 0x14C4ECu) {
        ctx->pc = 0x14C4F0u;
        goto label_14c4f0;
    }
    ctx->pc = 0x14C4E8u;
    SET_GPR_U32(ctx, 31, 0x14C4F0u);
    ctx->pc = 0x151560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151560u, 0x14C4E8u, 0x14C4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C4F0u;
label_14c4f0:
    // 0x14c4f0: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x14c4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_14c4f4:
    // 0x14c4f4: 0x2443003c  addiu       $v1, $v0, 0x3C
    ctx->pc = 0x14c4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
label_14c4f8:
    // 0x14c4f8: 0x27a20180  addiu       $v0, $sp, 0x180
    ctx->pc = 0x14c4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_14c4fc:
    // 0x14c4fc: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x14c4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_14c500:
    // 0x14c500: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x14c500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14c504:
    // 0x14c504: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x14c504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14c508:
    // 0x14c508: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x14c508u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_14c50c:
    // 0x14c50c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x14c50cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_14c510:
    // 0x14c510: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x14c510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_14c514:
    // 0x14c514: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x14c514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_14c518:
    // 0x14c518: 0x24430030  addiu       $v1, $v0, 0x30
    ctx->pc = 0x14c518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_14c51c:
    // 0x14c51c: 0x27a20170  addiu       $v0, $sp, 0x170
    ctx->pc = 0x14c51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_14c520:
    // 0x14c520: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x14c520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_14c524:
    // 0x14c524: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x14c524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14c528:
    // 0x14c528: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x14c528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14c52c:
    // 0x14c52c: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x14c52cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_14c530:
    // 0x14c530: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x14c530u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_14c534:
    // 0x14c534: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x14c534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_14c538:
    // 0x14c538: 0xc7a10180  lwc1        $f1, 0x180($sp)
    ctx->pc = 0x14c538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14c53c:
    // 0x14c53c: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x14c53cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14c540:
    // 0x14c540: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14c540u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14c544:
    // 0x14c544: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_14c548:
    if (ctx->pc == 0x14C548u) {
        ctx->pc = 0x14C54Cu;
        goto label_14c54c;
    }
    ctx->pc = 0x14C544u;
    {
        const bool branch_taken_0x14c544 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14c544) {
            ctx->pc = 0x14C564u;
            goto label_14c564;
        }
    }
    ctx->pc = 0x14C54Cu;
label_14c54c:
    // 0x14c54c: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x14c54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14c550:
    // 0x14c550: 0xe7a001bc  swc1        $f0, 0x1BC($sp)
    ctx->pc = 0x14c550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 444), bits); }
label_14c554:
    // 0x14c554: 0xc7a10180  lwc1        $f1, 0x180($sp)
    ctx->pc = 0x14c554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14c558:
    // 0x14c558: 0xe7a10170  swc1        $f1, 0x170($sp)
    ctx->pc = 0x14c558u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_14c55c:
    // 0x14c55c: 0xc7a001bc  lwc1        $f0, 0x1BC($sp)
    ctx->pc = 0x14c55cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14c560:
    // 0x14c560: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x14c560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_14c564:
    // 0x14c564: 0xc7a00188  lwc1        $f0, 0x188($sp)
    ctx->pc = 0x14c564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14c568:
    // 0x14c568: 0xc7a10178  lwc1        $f1, 0x178($sp)
    ctx->pc = 0x14c568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14c56c:
    // 0x14c56c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x14c56cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14c570:
    // 0x14c570: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_14c574:
    if (ctx->pc == 0x14C574u) {
        ctx->pc = 0x14C578u;
        goto label_14c578;
    }
    ctx->pc = 0x14C570u;
    {
        const bool branch_taken_0x14c570 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14c570) {
            ctx->pc = 0x14C590u;
            goto label_14c590;
        }
    }
    ctx->pc = 0x14C578u;
label_14c578:
    // 0x14c578: 0xc7a00178  lwc1        $f0, 0x178($sp)
    ctx->pc = 0x14c578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14c57c:
    // 0x14c57c: 0xe7a001b8  swc1        $f0, 0x1B8($sp)
    ctx->pc = 0x14c57cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
label_14c580:
    // 0x14c580: 0xc7a00188  lwc1        $f0, 0x188($sp)
    ctx->pc = 0x14c580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14c584:
    // 0x14c584: 0xe7a00178  swc1        $f0, 0x178($sp)
    ctx->pc = 0x14c584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_14c588:
    // 0x14c588: 0xc7a101b8  lwc1        $f1, 0x1B8($sp)
    ctx->pc = 0x14c588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14c58c:
    // 0x14c58c: 0xe7a10188  swc1        $f1, 0x188($sp)
    ctx->pc = 0x14c58cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_14c590:
    // 0x14c590: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x14c590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_14c594:
    // 0x14c594: 0x27a30160  addiu       $v1, $sp, 0x160
    ctx->pc = 0x14c594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_14c598:
    // 0x14c598: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x14c598u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_14c59c:
    // 0x14c59c: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x14c59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14c5a0:
    // 0x14c5a0: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x14c5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_14c5a4:
    // 0x14c5a4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x14c5a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_14c5a8:
    // 0x14c5a8: 0xc7a00180  lwc1        $f0, 0x180($sp)
    ctx->pc = 0x14c5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14c5ac:
    // 0x14c5ac: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14c5acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_14c5b0:
    // 0x14c5b0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x14c5b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_14c5b4:
    // 0x14c5b4: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x14c5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_14c5b8:
    // 0x14c5b8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x14c5b8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_14c5bc:
    // 0x14c5bc: 0x1012  mflo        $v0
    ctx->pc = 0x14c5bcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_14c5c0:
    // 0x14c5c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14c5c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14c5c4:
    // 0x14c5c4: 0x0  nop
    ctx->pc = 0x14c5c4u;
    // NOP
label_14c5c8:
    // 0x14c5c8: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x14c5c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_14c5cc:
    // 0x14c5cc: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x14c5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_14c5d0:
    // 0x14c5d0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x14c5d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_14c5d4:
    // 0x14c5d4: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x14c5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_14c5d8:
    // 0x14c5d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14c5d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14c5dc:
    // 0x14c5dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14c5dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14c5e0:
    // 0x14c5e0: 0x0  nop
    ctx->pc = 0x14c5e0u;
    // NOP
label_14c5e4:
    // 0x14c5e4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x14c5e4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_14c5e8:
    // 0x14c5e8: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x14c5e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_14c5ec:
    // 0x14c5ec: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x14c5ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_14c5f0:
    // 0x14c5f0: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x14c5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_14c5f4:
    // 0x14c5f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14c5f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14c5f8:
    // 0x14c5f8: 0x0  nop
    ctx->pc = 0x14c5f8u;
    // NOP
label_14c5fc:
    // 0x14c5fc: 0xe7a00184  swc1        $f0, 0x184($sp)
    ctx->pc = 0x14c5fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
label_14c600:
    // 0x14c600: 0xc7a00188  lwc1        $f0, 0x188($sp)
    ctx->pc = 0x14c600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14c604:
    // 0x14c604: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14c604u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_14c608:
    // 0x14c608: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x14c608u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_14c60c:
    // 0x14c60c: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x14c60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_14c610:
    // 0x14c610: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x14c610u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_14c614:
    // 0x14c614: 0x1012  mflo        $v0
    ctx->pc = 0x14c614u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_14c618:
    // 0x14c618: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14c618u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14c61c:
    // 0x14c61c: 0x0  nop
    ctx->pc = 0x14c61cu;
    // NOP
label_14c620:
    // 0x14c620: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x14c620u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_14c624:
    // 0x14c624: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x14c624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_14c628:
    // 0x14c628: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x14c628u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_14c62c:
    // 0x14c62c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x14c62cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_14c630:
    // 0x14c630: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14c630u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14c634:
    // 0x14c634: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14c634u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14c638:
    // 0x14c638: 0x0  nop
    ctx->pc = 0x14c638u;
    // NOP
label_14c63c:
    // 0x14c63c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x14c63cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_14c640:
    // 0x14c640: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x14c640u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_14c644:
    // 0x14c644: 0xe7a00188  swc1        $f0, 0x188($sp)
    ctx->pc = 0x14c644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_14c648:
    // 0x14c648: 0xc7a10160  lwc1        $f1, 0x160($sp)
    ctx->pc = 0x14c648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14c64c:
    // 0x14c64c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14c64cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14c650:
    // 0x14c650: 0x0  nop
    ctx->pc = 0x14c650u;
    // NOP
label_14c654:
    // 0x14c654: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14c654u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14c658:
    // 0x14c658: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_14c65c:
    if (ctx->pc == 0x14C65Cu) {
        ctx->pc = 0x14C660u;
        goto label_14c660;
    }
    ctx->pc = 0x14C658u;
    {
        const bool branch_taken_0x14c658 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14c658) {
            ctx->pc = 0x14C678u;
            goto label_14c678;
        }
    }
    ctx->pc = 0x14C660u;
label_14c660:
    // 0x14c660: 0xc7a10180  lwc1        $f1, 0x180($sp)
    ctx->pc = 0x14c660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14c664:
    // 0x14c664: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x14c664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_14c668:
    // 0x14c668: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14c668u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14c66c:
    // 0x14c66c: 0x0  nop
    ctx->pc = 0x14c66cu;
    // NOP
label_14c670:
    // 0x14c670: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x14c670u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_14c674:
    // 0x14c674: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x14c674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_14c678:
    // 0x14c678: 0xc7a10168  lwc1        $f1, 0x168($sp)
    ctx->pc = 0x14c678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14c67c:
    // 0x14c67c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14c67cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14c680:
    // 0x14c680: 0x0  nop
    ctx->pc = 0x14c680u;
    // NOP
label_14c684:
    // 0x14c684: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14c684u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14c688:
    // 0x14c688: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_14c68c:
    if (ctx->pc == 0x14C68Cu) {
        ctx->pc = 0x14C690u;
        goto label_14c690;
    }
    ctx->pc = 0x14C688u;
    {
        const bool branch_taken_0x14c688 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14c688) {
            ctx->pc = 0x14C6A8u;
            goto label_14c6a8;
        }
    }
    ctx->pc = 0x14C690u;
label_14c690:
    // 0x14c690: 0xc7a10188  lwc1        $f1, 0x188($sp)
    ctx->pc = 0x14c690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14c694:
    // 0x14c694: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x14c694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_14c698:
    // 0x14c698: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14c698u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14c69c:
    // 0x14c69c: 0x0  nop
    ctx->pc = 0x14c69cu;
    // NOP
label_14c6a0:
    // 0x14c6a0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x14c6a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_14c6a4:
    // 0x14c6a4: 0xe7a00188  swc1        $f0, 0x188($sp)
    ctx->pc = 0x14c6a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_14c6a8:
    // 0x14c6a8: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x14c6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14c6ac:
    // 0x14c6ac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14c6acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_14c6b0:
    // 0x14c6b0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x14c6b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_14c6b4:
    // 0x14c6b4: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x14c6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_14c6b8:
    // 0x14c6b8: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x14c6b8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_14c6bc:
    // 0x14c6bc: 0x2812  mflo        $a1
    ctx->pc = 0x14c6bcu;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_14c6c0:
    // 0x14c6c0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x14c6c0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14c6c4:
    // 0x14c6c4: 0x0  nop
    ctx->pc = 0x14c6c4u;
    // NOP
label_14c6c8:
    // 0x14c6c8: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x14c6c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_14c6cc:
    // 0x14c6cc: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x14c6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_14c6d0:
    // 0x14c6d0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x14c6d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_14c6d4:
    // 0x14c6d4: 0x3c0542a0  lui         $a1, 0x42A0
    ctx->pc = 0x14c6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17056 << 16));
label_14c6d8:
    // 0x14c6d8: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x14c6d8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14c6dc:
    // 0x14c6dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14c6dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14c6e0:
    // 0x14c6e0: 0x0  nop
    ctx->pc = 0x14c6e0u;
    // NOP
label_14c6e4:
    // 0x14c6e4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x14c6e4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_14c6e8:
    // 0x14c6e8: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x14c6e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_14c6ec:
    // 0x14c6ec: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x14c6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_14c6f0:
    // 0x14c6f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14c6f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14c6f4:
    // 0x14c6f4: 0x0  nop
    ctx->pc = 0x14c6f4u;
    // NOP
label_14c6f8:
    // 0x14c6f8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x14c6f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_14c6fc:
    // 0x14c6fc: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x14c6fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_14c700:
    // 0x14c700: 0x3c0243c6  lui         $v0, 0x43C6
    ctx->pc = 0x14c700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17350 << 16));
label_14c704:
    // 0x14c704: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14c704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14c708:
    // 0x14c708: 0x0  nop
    ctx->pc = 0x14c708u;
    // NOP
label_14c70c:
    // 0x14c70c: 0xe7a00174  swc1        $f0, 0x174($sp)
    ctx->pc = 0x14c70cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
label_14c710:
    // 0x14c710: 0xc7a00178  lwc1        $f0, 0x178($sp)
    ctx->pc = 0x14c710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14c714:
    // 0x14c714: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14c714u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_14c718:
    // 0x14c718: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x14c718u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_14c71c:
    // 0x14c71c: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x14c71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_14c720:
    // 0x14c720: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x14c720u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_14c724:
    // 0x14c724: 0x1812  mflo        $v1
    ctx->pc = 0x14c724u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_14c728:
    // 0x14c728: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14c728u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14c72c:
    // 0x14c72c: 0x0  nop
    ctx->pc = 0x14c72cu;
    // NOP
label_14c730:
    // 0x14c730: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x14c730u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_14c734:
    // 0x14c734: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x14c734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
label_14c738:
    // 0x14c738: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x14c738u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_14c73c:
    // 0x14c73c: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x14c73cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
label_14c740:
    // 0x14c740: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x14c740u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14c744:
    // 0x14c744: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14c744u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14c748:
    // 0x14c748: 0x0  nop
    ctx->pc = 0x14c748u;
    // NOP
label_14c74c:
    // 0x14c74c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x14c74cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_14c750:
    // 0x14c750: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x14c750u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_14c754:
    // 0x14c754: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x14c754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_14c758:
    // 0x14c758: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14c758u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14c75c:
    // 0x14c75c: 0x0  nop
    ctx->pc = 0x14c75cu;
    // NOP
label_14c760:
    // 0x14c760: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x14c760u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_14c764:
    // 0x14c764: 0xe7a00178  swc1        $f0, 0x178($sp)
    ctx->pc = 0x14c764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_14c768:
    // 0x14c768: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x14c768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_14c76c:
    // 0x14c76c: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x14c76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_14c770:
    // 0x14c770: 0x30430002  andi        $v1, $v0, 0x2
    ctx->pc = 0x14c770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_14c774:
    // 0x14c774: 0x106000c8  beqz        $v1, . + 4 + (0xC8 << 2)
label_14c778:
    if (ctx->pc == 0x14C778u) {
        ctx->pc = 0x14C77Cu;
        goto label_14c77c;
    }
    ctx->pc = 0x14C774u;
    {
        const bool branch_taken_0x14c774 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c774) {
            ctx->pc = 0x14CA98u;
            goto label_14ca98;
        }
    }
    ctx->pc = 0x14C77Cu;
label_14c77c:
    // 0x14c77c: 0x8f83ba98  lw          $v1, -0x4568($gp)
    ctx->pc = 0x14c77cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
label_14c780:
    // 0x14c780: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x14c780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_14c784:
    // 0x14c784: 0x100300c4  beq         $zero, $v1, . + 4 + (0xC4 << 2)
label_14c788:
    if (ctx->pc == 0x14C788u) {
        ctx->pc = 0x14C78Cu;
        goto label_14c78c;
    }
    ctx->pc = 0x14C784u;
    {
        const bool branch_taken_0x14c784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x14c784) {
            ctx->pc = 0x14CA98u;
            goto label_14ca98;
        }
    }
    ctx->pc = 0x14C78Cu;
label_14c78c:
    // 0x14c78c: 0x8f83ba98  lw          $v1, -0x4568($gp)
    ctx->pc = 0x14c78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
label_14c790:
    // 0x14c790: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x14c790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_14c794:
    // 0x14c794: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x14c794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_14c798:
    // 0x14c798: 0xc090f80  jal         func_243E00
label_14c79c:
    if (ctx->pc == 0x14C79Cu) {
        ctx->pc = 0x14C7A0u;
        goto label_14c7a0;
    }
    ctx->pc = 0x14C798u;
    SET_GPR_U32(ctx, 31, 0x14C7A0u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x14C798u, 0x14C7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C7A0u;
label_14c7a0:
    // 0x14c7a0: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x14c7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_14c7a4:
    // 0x14c7a4: 0x27a30150  addiu       $v1, $sp, 0x150
    ctx->pc = 0x14c7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_14c7a8:
    // 0x14c7a8: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x14c7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_14c7ac:
    // 0x14c7ac: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x14c7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14c7b0:
    // 0x14c7b0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x14c7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14c7b4:
    // 0x14c7b4: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x14c7b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_14c7b8:
    // 0x14c7b8: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x14c7b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_14c7bc:
    // 0x14c7bc: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x14c7bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_14c7c0:
    // 0x14c7c0: 0xc7a10180  lwc1        $f1, 0x180($sp)
    ctx->pc = 0x14c7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14c7c4:
    // 0x14c7c4: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x14c7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14c7c8:
    // 0x14c7c8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x14c7c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_14c7cc:
    // 0x14c7cc: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x14c7ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_14c7d0:
    // 0x14c7d0: 0xc7a10184  lwc1        $f1, 0x184($sp)
    ctx->pc = 0x14c7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14c7d4:
    // 0x14c7d4: 0xc7a00154  lwc1        $f0, 0x154($sp)
    ctx->pc = 0x14c7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14c7d8:
    // 0x14c7d8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x14c7d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_14c7dc:
    // 0x14c7dc: 0xe7a00184  swc1        $f0, 0x184($sp)
    ctx->pc = 0x14c7dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
label_14c7e0:
    // 0x14c7e0: 0xc7a10188  lwc1        $f1, 0x188($sp)
    ctx->pc = 0x14c7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14c7e4:
    // 0x14c7e4: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x14c7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14c7e8:
    // 0x14c7e8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x14c7e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_14c7ec:
    // 0x14c7ec: 0xe7a00188  swc1        $f0, 0x188($sp)
    ctx->pc = 0x14c7ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_14c7f0:
    // 0x14c7f0: 0xc7a10180  lwc1        $f1, 0x180($sp)
    ctx->pc = 0x14c7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14c7f4:
    // 0x14c7f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14c7f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14c7f8:
    // 0x14c7f8: 0x0  nop
    ctx->pc = 0x14c7f8u;
    // NOP
label_14c7fc:
    // 0x14c7fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14c7fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14c800:
    // 0x14c800: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_14c804:
    if (ctx->pc == 0x14C804u) {
        ctx->pc = 0x14C808u;
        goto label_14c808;
    }
    ctx->pc = 0x14C800u;
    {
        const bool branch_taken_0x14c800 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14c800) {
            ctx->pc = 0x14C814u;
            goto label_14c814;
        }
    }
    ctx->pc = 0x14C808u;
label_14c808:
    // 0x14c808: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14c808u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14c80c:
    // 0x14c80c: 0x0  nop
    ctx->pc = 0x14c80cu;
    // NOP
label_14c810:
    // 0x14c810: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x14c810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_14c814:
    // 0x14c814: 0xc7a10188  lwc1        $f1, 0x188($sp)
    ctx->pc = 0x14c814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14c818:
    // 0x14c818: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14c818u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14c81c:
    // 0x14c81c: 0x0  nop
    ctx->pc = 0x14c81cu;
    // NOP
label_14c820:
    // 0x14c820: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14c820u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14c824:
    // 0x14c824: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_14c828:
    if (ctx->pc == 0x14C828u) {
        ctx->pc = 0x14C82Cu;
        goto label_14c82c;
    }
    ctx->pc = 0x14C824u;
    {
        const bool branch_taken_0x14c824 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14c824) {
            ctx->pc = 0x14C838u;
            goto label_14c838;
        }
    }
    ctx->pc = 0x14C82Cu;
label_14c82c:
    // 0x14c82c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14c82cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14c830:
    // 0x14c830: 0x0  nop
    ctx->pc = 0x14c830u;
    // NOP
label_14c834:
    // 0x14c834: 0xe7a00188  swc1        $f0, 0x188($sp)
    ctx->pc = 0x14c834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_14c838:
    // 0x14c838: 0xc7a10170  lwc1        $f1, 0x170($sp)
    ctx->pc = 0x14c838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14c83c:
    // 0x14c83c: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x14c83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14c840:
    // 0x14c840: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x14c840u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_14c844:
    // 0x14c844: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x14c844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_14c848:
    // 0x14c848: 0xc7a10174  lwc1        $f1, 0x174($sp)
    ctx->pc = 0x14c848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14c84c:
    // 0x14c84c: 0xc7a00154  lwc1        $f0, 0x154($sp)
    ctx->pc = 0x14c84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14c850:
    // 0x14c850: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x14c850u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_14c854:
    // 0x14c854: 0xe7a00174  swc1        $f0, 0x174($sp)
    ctx->pc = 0x14c854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
label_14c858:
    // 0x14c858: 0xc7a10178  lwc1        $f1, 0x178($sp)
    ctx->pc = 0x14c858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14c85c:
    // 0x14c85c: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x14c85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14c860:
    // 0x14c860: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x14c860u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_14c864:
    // 0x14c864: 0xe7a00178  swc1        $f0, 0x178($sp)
    ctx->pc = 0x14c864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_14c868:
    // 0x14c868: 0x8f84ba98  lw          $a0, -0x4568($gp)
    ctx->pc = 0x14c868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
label_14c86c:
    // 0x14c86c: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x14c86cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_14c870:
    // 0x14c870: 0xc092d70  jal         func_24B5C0
label_14c874:
    if (ctx->pc == 0x14C874u) {
        ctx->pc = 0x14C878u;
        goto label_14c878;
    }
    ctx->pc = 0x14C870u;
    SET_GPR_U32(ctx, 31, 0x14C878u);
    ctx->pc = 0x24B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5C0u, 0x14C870u, 0x14C878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C878u;
label_14c878:
    // 0x14c878: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14c878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14c87c:
    // 0x14c87c: 0xc0477e0  jal         func_11DF80
label_14c880:
    if (ctx->pc == 0x14C880u) {
        ctx->pc = 0x14C884u;
        goto label_14c884;
    }
    ctx->pc = 0x14C87Cu;
    SET_GPR_U32(ctx, 31, 0x14C884u);
    ctx->pc = 0x11DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF80u, 0x14C87Cu, 0x14C884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C884u;
label_14c884:
    // 0x14c884: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_14c888:
    if (ctx->pc == 0x14C888u) {
        ctx->pc = 0x14C88Cu;
        goto label_14c88c;
    }
    ctx->pc = 0x14C884u;
    {
        const bool branch_taken_0x14c884 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x14c884) {
            ctx->pc = 0x14C8A0u;
            goto label_14c8a0;
        }
    }
    ctx->pc = 0x14C88Cu;
label_14c88c:
    // 0x14c88c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14c88cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14c890:
    // 0x14c890: 0x0  nop
    ctx->pc = 0x14c890u;
    // NOP
label_14c894:
    // 0x14c894: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x14c894u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_14c898:
    // 0x14c898: 0x10000008  b           . + 4 + (0x8 << 2)
label_14c89c:
    if (ctx->pc == 0x14C89Cu) {
        ctx->pc = 0x14C8A0u;
        goto label_14c8a0;
    }
    ctx->pc = 0x14C898u;
    {
        const bool branch_taken_0x14c898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c898) {
            ctx->pc = 0x14C8BCu;
            goto label_14c8bc;
        }
    }
    ctx->pc = 0x14C8A0u;
label_14c8a0:
    // 0x14c8a0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x14c8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_14c8a4:
    // 0x14c8a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x14c8a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_14c8a8:
    // 0x14c8a8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x14c8a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_14c8ac:
    // 0x14c8ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14c8acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14c8b0:
    // 0x14c8b0: 0x0  nop
    ctx->pc = 0x14c8b0u;
    // NOP
label_14c8b4:
    // 0x14c8b4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x14c8b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_14c8b8:
    // 0x14c8b8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x14c8b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_14c8bc:
    // 0x14c8bc: 0x3c0442a0  lui         $a0, 0x42A0
    ctx->pc = 0x14c8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17056 << 16));
label_14c8c0:
    // 0x14c8c0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x14c8c0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14c8c4:
    // 0x14c8c4: 0x0  nop
    ctx->pc = 0x14c8c4u;
    // NOP
label_14c8c8:
    // 0x14c8c8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x14c8c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_14c8cc:
    // 0x14c8cc: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x14c8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14c8d0:
    // 0x14c8d0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x14c8d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14c8d4:
    // 0x14c8d4: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
label_14c8d8:
    if (ctx->pc == 0x14C8D8u) {
        ctx->pc = 0x14C8DCu;
        goto label_14c8dc;
    }
    ctx->pc = 0x14C8D4u;
    {
        const bool branch_taken_0x14c8d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14c8d4) {
            ctx->pc = 0x14C948u;
            goto label_14c948;
        }
    }
    ctx->pc = 0x14C8DCu;
label_14c8dc:
    // 0x14c8dc: 0x8f85ba98  lw          $a1, -0x4568($gp)
    ctx->pc = 0x14c8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
label_14c8e0:
    // 0x14c8e0: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x14c8e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_14c8e4:
    // 0x14c8e4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x14c8e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_14c8e8:
    // 0x14c8e8: 0xc092d70  jal         func_24B5C0
label_14c8ec:
    if (ctx->pc == 0x14C8ECu) {
        ctx->pc = 0x14C8F0u;
        goto label_14c8f0;
    }
    ctx->pc = 0x14C8E8u;
    SET_GPR_U32(ctx, 31, 0x14C8F0u);
    ctx->pc = 0x24B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5C0u, 0x14C8E8u, 0x14C8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C8F0u;
label_14c8f0:
    // 0x14c8f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14c8f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14c8f4:
    // 0x14c8f4: 0xc0477e0  jal         func_11DF80
label_14c8f8:
    if (ctx->pc == 0x14C8F8u) {
        ctx->pc = 0x14C8FCu;
        goto label_14c8fc;
    }
    ctx->pc = 0x14C8F4u;
    SET_GPR_U32(ctx, 31, 0x14C8FCu);
    ctx->pc = 0x11DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF80u, 0x14C8F4u, 0x14C8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C8FCu;
label_14c8fc:
    // 0x14c8fc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_14c900:
    if (ctx->pc == 0x14C900u) {
        ctx->pc = 0x14C904u;
        goto label_14c904;
    }
    ctx->pc = 0x14C8FCu;
    {
        const bool branch_taken_0x14c8fc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x14c8fc) {
            ctx->pc = 0x14C918u;
            goto label_14c918;
        }
    }
    ctx->pc = 0x14C904u;
label_14c904:
    // 0x14c904: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14c904u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14c908:
    // 0x14c908: 0x0  nop
    ctx->pc = 0x14c908u;
    // NOP
label_14c90c:
    // 0x14c90c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x14c90cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_14c910:
    // 0x14c910: 0x10000008  b           . + 4 + (0x8 << 2)
label_14c914:
    if (ctx->pc == 0x14C914u) {
        ctx->pc = 0x14C918u;
        goto label_14c918;
    }
    ctx->pc = 0x14C910u;
    {
        const bool branch_taken_0x14c910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c910) {
            ctx->pc = 0x14C934u;
            goto label_14c934;
        }
    }
    ctx->pc = 0x14C918u;
label_14c918:
    // 0x14c918: 0x22042  srl         $a0, $v0, 1
    ctx->pc = 0x14c918u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_14c91c:
    // 0x14c91c: 0x30450001  andi        $a1, $v0, 0x1
    ctx->pc = 0x14c91cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_14c920:
    // 0x14c920: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x14c920u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_14c924:
    // 0x14c924: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x14c924u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14c928:
    // 0x14c928: 0x0  nop
    ctx->pc = 0x14c928u;
    // NOP
label_14c92c:
    // 0x14c92c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x14c92cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_14c930:
    // 0x14c930: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x14c930u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_14c934:
    // 0x14c934: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x14c934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_14c938:
    // 0x14c938: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14c938u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14c93c:
    // 0x14c93c: 0x0  nop
    ctx->pc = 0x14c93cu;
    // NOP
label_14c940:
    // 0x14c940: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x14c940u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_14c944:
    // 0x14c944: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x14c944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_14c948:
    // 0x14c948: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14c948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
label_14c94c:
    // 0x14c94c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x14c94cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_14c950:
    // 0x14c950: 0xc092d70  jal         func_24B5C0
label_14c954:
    if (ctx->pc == 0x14C954u) {
        ctx->pc = 0x14C958u;
        goto label_14c958;
    }
    ctx->pc = 0x14C950u;
    SET_GPR_U32(ctx, 31, 0x14C958u);
    ctx->pc = 0x24B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5C0u, 0x14C950u, 0x14C958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C958u;
label_14c958:
    // 0x14c958: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14c958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14c95c:
    // 0x14c95c: 0xc0477d8  jal         func_11DF60
label_14c960:
    if (ctx->pc == 0x14C960u) {
        ctx->pc = 0x14C964u;
        goto label_14c964;
    }
    ctx->pc = 0x14C95Cu;
    SET_GPR_U32(ctx, 31, 0x14C964u);
    ctx->pc = 0x11DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF60u, 0x14C95Cu, 0x14C964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C964u;
label_14c964:
    // 0x14c964: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_14c968:
    if (ctx->pc == 0x14C968u) {
        ctx->pc = 0x14C96Cu;
        goto label_14c96c;
    }
    ctx->pc = 0x14C964u;
    {
        const bool branch_taken_0x14c964 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x14c964) {
            ctx->pc = 0x14C980u;
            goto label_14c980;
        }
    }
    ctx->pc = 0x14C96Cu;
label_14c96c:
    // 0x14c96c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14c96cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14c970:
    // 0x14c970: 0x0  nop
    ctx->pc = 0x14c970u;
    // NOP
label_14c974:
    // 0x14c974: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x14c974u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_14c978:
    // 0x14c978: 0x10000008  b           . + 4 + (0x8 << 2)
label_14c97c:
    if (ctx->pc == 0x14C97Cu) {
        ctx->pc = 0x14C980u;
        goto label_14c980;
    }
    ctx->pc = 0x14C978u;
    {
        const bool branch_taken_0x14c978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c978) {
            ctx->pc = 0x14C99Cu;
            goto label_14c99c;
        }
    }
    ctx->pc = 0x14C980u;
label_14c980:
    // 0x14c980: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x14c980u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_14c984:
    // 0x14c984: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x14c984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_14c988:
    // 0x14c988: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x14c988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_14c98c:
    // 0x14c98c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14c98cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14c990:
    // 0x14c990: 0x0  nop
    ctx->pc = 0x14c990u;
    // NOP
label_14c994:
    // 0x14c994: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x14c994u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_14c998:
    // 0x14c998: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x14c998u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_14c99c:
    // 0x14c99c: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x14c99cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_14c9a0:
    // 0x14c9a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14c9a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14c9a4:
    // 0x14c9a4: 0x0  nop
    ctx->pc = 0x14c9a4u;
    // NOP
label_14c9a8:
    // 0x14c9a8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x14c9a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_14c9ac:
    // 0x14c9ac: 0xc7a00178  lwc1        $f0, 0x178($sp)
    ctx->pc = 0x14c9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14c9b0:
    // 0x14c9b0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x14c9b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14c9b4:
    // 0x14c9b4: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
label_14c9b8:
    if (ctx->pc == 0x14C9B8u) {
        ctx->pc = 0x14C9BCu;
        goto label_14c9bc;
    }
    ctx->pc = 0x14C9B4u;
    {
        const bool branch_taken_0x14c9b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14c9b4) {
            ctx->pc = 0x14CA24u;
            goto label_14ca24;
        }
    }
    ctx->pc = 0x14C9BCu;
label_14c9bc:
    // 0x14c9bc: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14c9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
label_14c9c0:
    // 0x14c9c0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x14c9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_14c9c4:
    // 0x14c9c4: 0xc092d70  jal         func_24B5C0
label_14c9c8:
    if (ctx->pc == 0x14C9C8u) {
        ctx->pc = 0x14C9CCu;
        goto label_14c9cc;
    }
    ctx->pc = 0x14C9C4u;
    SET_GPR_U32(ctx, 31, 0x14C9CCu);
    ctx->pc = 0x24B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5C0u, 0x14C9C4u, 0x14C9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C9CCu;
label_14c9cc:
    // 0x14c9cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14c9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14c9d0:
    // 0x14c9d0: 0xc0477d8  jal         func_11DF60
label_14c9d4:
    if (ctx->pc == 0x14C9D4u) {
        ctx->pc = 0x14C9D8u;
        goto label_14c9d8;
    }
    ctx->pc = 0x14C9D0u;
    SET_GPR_U32(ctx, 31, 0x14C9D8u);
    ctx->pc = 0x11DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF60u, 0x14C9D0u, 0x14C9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C9D8u;
label_14c9d8:
    // 0x14c9d8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_14c9dc:
    if (ctx->pc == 0x14C9DCu) {
        ctx->pc = 0x14C9E0u;
        goto label_14c9e0;
    }
    ctx->pc = 0x14C9D8u;
    {
        const bool branch_taken_0x14c9d8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x14c9d8) {
            ctx->pc = 0x14C9F4u;
            goto label_14c9f4;
        }
    }
    ctx->pc = 0x14C9E0u;
label_14c9e0:
    // 0x14c9e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14c9e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14c9e4:
    // 0x14c9e4: 0x0  nop
    ctx->pc = 0x14c9e4u;
    // NOP
label_14c9e8:
    // 0x14c9e8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x14c9e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_14c9ec:
    // 0x14c9ec: 0x10000008  b           . + 4 + (0x8 << 2)
label_14c9f0:
    if (ctx->pc == 0x14C9F0u) {
        ctx->pc = 0x14C9F4u;
        goto label_14c9f4;
    }
    ctx->pc = 0x14C9ECu;
    {
        const bool branch_taken_0x14c9ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c9ec) {
            ctx->pc = 0x14CA10u;
            goto label_14ca10;
        }
    }
    ctx->pc = 0x14C9F4u;
label_14c9f4:
    // 0x14c9f4: 0x22042  srl         $a0, $v0, 1
    ctx->pc = 0x14c9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_14c9f8:
    // 0x14c9f8: 0x30450001  andi        $a1, $v0, 0x1
    ctx->pc = 0x14c9f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_14c9fc:
    // 0x14c9fc: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x14c9fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_14ca00:
    // 0x14ca00: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x14ca00u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14ca04:
    // 0x14ca04: 0x0  nop
    ctx->pc = 0x14ca04u;
    // NOP
label_14ca08:
    // 0x14ca08: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x14ca08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_14ca0c:
    // 0x14ca0c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x14ca0cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_14ca10:
    // 0x14ca10: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x14ca10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_14ca14:
    // 0x14ca14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14ca14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14ca18:
    // 0x14ca18: 0x0  nop
    ctx->pc = 0x14ca18u;
    // NOP
label_14ca1c:
    // 0x14ca1c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x14ca1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_14ca20:
    // 0x14ca20: 0xe7a00178  swc1        $f0, 0x178($sp)
    ctx->pc = 0x14ca20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_14ca24:
    // 0x14ca24: 0x8fa401d0  lw          $a0, 0x1D0($sp)
    ctx->pc = 0x14ca24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_14ca28:
    // 0x14ca28: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x14ca28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_14ca2c:
    // 0x14ca2c: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x14ca2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_14ca30:
    // 0x14ca30: 0xc053d18  jal         func_14F460
label_14ca34:
    if (ctx->pc == 0x14CA34u) {
        ctx->pc = 0x14CA38u;
        goto label_14ca38;
    }
    ctx->pc = 0x14CA30u;
    SET_GPR_U32(ctx, 31, 0x14CA38u);
    ctx->pc = 0x14F460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F460u, 0x14CA30u, 0x14CA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CA38u;
label_14ca38:
    // 0x14ca38: 0xc7a10180  lwc1        $f1, 0x180($sp)
    ctx->pc = 0x14ca38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14ca3c:
    // 0x14ca3c: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x14ca3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14ca40:
    // 0x14ca40: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x14ca40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_14ca44:
    // 0x14ca44: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x14ca44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_14ca48:
    // 0x14ca48: 0xc7a10184  lwc1        $f1, 0x184($sp)
    ctx->pc = 0x14ca48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14ca4c:
    // 0x14ca4c: 0xc7a00154  lwc1        $f0, 0x154($sp)
    ctx->pc = 0x14ca4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14ca50:
    // 0x14ca50: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x14ca50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_14ca54:
    // 0x14ca54: 0xe7a00184  swc1        $f0, 0x184($sp)
    ctx->pc = 0x14ca54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
label_14ca58:
    // 0x14ca58: 0xc7a10188  lwc1        $f1, 0x188($sp)
    ctx->pc = 0x14ca58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14ca5c:
    // 0x14ca5c: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x14ca5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14ca60:
    // 0x14ca60: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x14ca60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_14ca64:
    // 0x14ca64: 0xe7a00188  swc1        $f0, 0x188($sp)
    ctx->pc = 0x14ca64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_14ca68:
    // 0x14ca68: 0xc7a10170  lwc1        $f1, 0x170($sp)
    ctx->pc = 0x14ca68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14ca6c:
    // 0x14ca6c: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x14ca6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14ca70:
    // 0x14ca70: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x14ca70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_14ca74:
    // 0x14ca74: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x14ca74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_14ca78:
    // 0x14ca78: 0xc7a10174  lwc1        $f1, 0x174($sp)
    ctx->pc = 0x14ca78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14ca7c:
    // 0x14ca7c: 0xc7a00154  lwc1        $f0, 0x154($sp)
    ctx->pc = 0x14ca7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14ca80:
    // 0x14ca80: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x14ca80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_14ca84:
    // 0x14ca84: 0xe7a00174  swc1        $f0, 0x174($sp)
    ctx->pc = 0x14ca84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
label_14ca88:
    // 0x14ca88: 0xc7a10178  lwc1        $f1, 0x178($sp)
    ctx->pc = 0x14ca88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14ca8c:
    // 0x14ca8c: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x14ca8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14ca90:
    // 0x14ca90: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x14ca90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_14ca94:
    // 0x14ca94: 0xe7a00178  swc1        $f0, 0x178($sp)
    ctx->pc = 0x14ca94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_14ca98:
    // 0x14ca98: 0x8f84ba94  lw          $a0, -0x456C($gp)
    ctx->pc = 0x14ca98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949524)));
label_14ca9c:
    // 0x14ca9c: 0x1004027f  beq         $zero, $a0, . + 4 + (0x27F << 2)
label_14caa0:
    if (ctx->pc == 0x14CAA0u) {
        ctx->pc = 0x14CAA4u;
        goto label_14caa4;
    }
    ctx->pc = 0x14CA9Cu;
    {
        const bool branch_taken_0x14ca9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        if (branch_taken_0x14ca9c) {
            ctx->pc = 0x14D49Cu;
            goto label_14d49c;
        }
    }
    ctx->pc = 0x14CAA4u;
label_14caa4:
    // 0x14caa4: 0x27a201b4  addiu       $v0, $sp, 0x1B4
    ctx->pc = 0x14caa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
label_14caa8:
    // 0x14caa8: 0xc7808cc8  lwc1        $f0, -0x7338($gp)
    ctx->pc = 0x14caa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14caac:
    // 0x14caac: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x14caacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_14cab0:
    // 0x14cab0: 0xc0bbf1e  jal         func_2EFC78
label_14cab4:
    if (ctx->pc == 0x14CAB4u) {
        ctx->pc = 0x14CAB8u;
        goto label_14cab8;
    }
    ctx->pc = 0x14CAB0u;
    SET_GPR_U32(ctx, 31, 0x14CAB8u);
    ctx->pc = 0x2EFC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFC78u, 0x14CAB0u, 0x14CAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CAB8u;
label_14cab8:
    // 0x14cab8: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x14cab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_14cabc:
    // 0x14cabc: 0x3043007f  andi        $v1, $v0, 0x7F
    ctx->pc = 0x14cabcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
label_14cac0:
    // 0x14cac0: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_14cac4:
    if (ctx->pc == 0x14CAC4u) {
        ctx->pc = 0x14CAC8u;
        goto label_14cac8;
    }
    ctx->pc = 0x14CAC0u;
    {
        const bool branch_taken_0x14cac0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x14cac0) {
            ctx->pc = 0x14CAD4u;
            goto label_14cad4;
        }
    }
    ctx->pc = 0x14CAC8u;
label_14cac8:
    // 0x14cac8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_14cacc:
    if (ctx->pc == 0x14CACCu) {
        ctx->pc = 0x14CAD0u;
        goto label_14cad0;
    }
    ctx->pc = 0x14CAC8u;
    {
        const bool branch_taken_0x14cac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cac8) {
            ctx->pc = 0x14CAD4u;
            goto label_14cad4;
        }
    }
    ctx->pc = 0x14CAD0u;
label_14cad0:
    // 0x14cad0: 0x2463ff80  addiu       $v1, $v1, -0x80
    ctx->pc = 0x14cad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967168));
label_14cad4:
    // 0x14cad4: 0x24640080  addiu       $a0, $v1, 0x80
    ctx->pc = 0x14cad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_14cad8:
    // 0x14cad8: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x14cad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_14cadc:
    // 0x14cadc: 0xa3a201b4  sb          $v0, 0x1B4($sp)
    ctx->pc = 0x14cadcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 436), (uint8_t)GPR_U32(ctx, 2));
label_14cae0:
    // 0x14cae0: 0xc0bbf1e  jal         func_2EFC78
label_14cae4:
    if (ctx->pc == 0x14CAE4u) {
        ctx->pc = 0x14CAE8u;
        goto label_14cae8;
    }
    ctx->pc = 0x14CAE0u;
    SET_GPR_U32(ctx, 31, 0x14CAE8u);
    ctx->pc = 0x2EFC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFC78u, 0x14CAE0u, 0x14CAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CAE8u;
label_14cae8:
    // 0x14cae8: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x14cae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_14caec:
    // 0x14caec: 0x3045007f  andi        $a1, $v0, 0x7F
    ctx->pc = 0x14caecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
label_14caf0:
    // 0x14caf0: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_14caf4:
    if (ctx->pc == 0x14CAF4u) {
        ctx->pc = 0x14CAF8u;
        goto label_14caf8;
    }
    ctx->pc = 0x14CAF0u;
    {
        const bool branch_taken_0x14caf0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x14caf0) {
            ctx->pc = 0x14CB04u;
            goto label_14cb04;
        }
    }
    ctx->pc = 0x14CAF8u;
label_14caf8:
    // 0x14caf8: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
label_14cafc:
    if (ctx->pc == 0x14CAFCu) {
        ctx->pc = 0x14CB00u;
        goto label_14cb00;
    }
    ctx->pc = 0x14CAF8u;
    {
        const bool branch_taken_0x14caf8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x14caf8) {
            ctx->pc = 0x14CB04u;
            goto label_14cb04;
        }
    }
    ctx->pc = 0x14CB00u;
label_14cb00:
    // 0x14cb00: 0x24a5ff80  addiu       $a1, $a1, -0x80
    ctx->pc = 0x14cb00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967168));
label_14cb04:
    // 0x14cb04: 0x24a20080  addiu       $v0, $a1, 0x80
    ctx->pc = 0x14cb04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
label_14cb08:
    // 0x14cb08: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14cb08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14cb0c:
    // 0x14cb0c: 0xa3a201b5  sb          $v0, 0x1B5($sp)
    ctx->pc = 0x14cb0cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 437), (uint8_t)GPR_U32(ctx, 2));
label_14cb10:
    // 0x14cb10: 0xc0bbf1e  jal         func_2EFC78
label_14cb14:
    if (ctx->pc == 0x14CB14u) {
        ctx->pc = 0x14CB18u;
        goto label_14cb18;
    }
    ctx->pc = 0x14CB10u;
    SET_GPR_U32(ctx, 31, 0x14CB18u);
    ctx->pc = 0x2EFC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFC78u, 0x14CB10u, 0x14CB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CB18u;
label_14cb18:
    // 0x14cb18: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x14cb18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_14cb1c:
    // 0x14cb1c: 0x3043007f  andi        $v1, $v0, 0x7F
    ctx->pc = 0x14cb1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
label_14cb20:
    // 0x14cb20: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_14cb24:
    if (ctx->pc == 0x14CB24u) {
        ctx->pc = 0x14CB28u;
        goto label_14cb28;
    }
    ctx->pc = 0x14CB20u;
    {
        const bool branch_taken_0x14cb20 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x14cb20) {
            ctx->pc = 0x14CB34u;
            goto label_14cb34;
        }
    }
    ctx->pc = 0x14CB28u;
label_14cb28:
    // 0x14cb28: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_14cb2c:
    if (ctx->pc == 0x14CB2Cu) {
        ctx->pc = 0x14CB30u;
        goto label_14cb30;
    }
    ctx->pc = 0x14CB28u;
    {
        const bool branch_taken_0x14cb28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cb28) {
            ctx->pc = 0x14CB34u;
            goto label_14cb34;
        }
    }
    ctx->pc = 0x14CB30u;
label_14cb30:
    // 0x14cb30: 0x2463ff80  addiu       $v1, $v1, -0x80
    ctx->pc = 0x14cb30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967168));
label_14cb34:
    // 0x14cb34: 0x24620080  addiu       $v0, $v1, 0x80
    ctx->pc = 0x14cb34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_14cb38:
    // 0x14cb38: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x14cb38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14cb3c:
    // 0x14cb3c: 0xa3a401b6  sb          $a0, 0x1B6($sp)
    ctx->pc = 0x14cb3cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 438), (uint8_t)GPR_U32(ctx, 4));
label_14cb40:
    // 0x14cb40: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x14cb40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_14cb44:
    // 0x14cb44: 0xa3a501cf  sb          $a1, 0x1CF($sp)
    ctx->pc = 0x14cb44u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 463), (uint8_t)GPR_U32(ctx, 5));
label_14cb48:
    // 0x14cb48: 0x8f84ba94  lw          $a0, -0x456C($gp)
    ctx->pc = 0x14cb48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949524)));
label_14cb4c:
    // 0x14cb4c: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x14cb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_14cb50:
    // 0x14cb50: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x14cb50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_14cb54:
    // 0x14cb54: 0x27a701b4  addiu       $a3, $sp, 0x1B4
    ctx->pc = 0x14cb54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
label_14cb58:
    // 0x14cb58: 0xc0a43e4  jal         func_290F90
label_14cb5c:
    if (ctx->pc == 0x14CB5Cu) {
        ctx->pc = 0x14CB60u;
        goto label_14cb60;
    }
    ctx->pc = 0x14CB58u;
    SET_GPR_U32(ctx, 31, 0x14CB60u);
    ctx->pc = 0x290F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290F90u, 0x14CB58u, 0x14CB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CB60u;
label_14cb60:
    // 0x14cb60: 0x1000024e  b           . + 4 + (0x24E << 2)
label_14cb64:
    if (ctx->pc == 0x14CB64u) {
        ctx->pc = 0x14CB68u;
        goto label_14cb68;
    }
    ctx->pc = 0x14CB60u;
    {
        const bool branch_taken_0x14cb60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cb60) {
            ctx->pc = 0x14D49Cu;
            goto label_14d49c;
        }
    }
    ctx->pc = 0x14CB68u;
label_14cb68:
    // 0x14cb68: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x14cb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_14cb6c:
    // 0x14cb6c: 0x9042002d  lbu         $v0, 0x2D($v0)
    ctx->pc = 0x14cb6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 45)));
label_14cb70:
    // 0x14cb70: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14cb70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14cb74:
    // 0x14cb74: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14cb74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14cb78:
    // 0x14cb78: 0x14440248  bne         $v0, $a0, . + 4 + (0x248 << 2)
label_14cb7c:
    if (ctx->pc == 0x14CB7Cu) {
        ctx->pc = 0x14CB80u;
        goto label_14cb80;
    }
    ctx->pc = 0x14CB78u;
    {
        const bool branch_taken_0x14cb78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x14cb78) {
            ctx->pc = 0x14D49Cu;
            goto label_14d49c;
        }
    }
    ctx->pc = 0x14CB80u;
label_14cb80:
    // 0x14cb80: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x14cb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_14cb84:
    // 0x14cb84: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x14cb84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_14cb88:
    // 0x14cb88: 0x100401f7  beq         $zero, $a0, . + 4 + (0x1F7 << 2)
label_14cb8c:
    if (ctx->pc == 0x14CB8Cu) {
        ctx->pc = 0x14CB90u;
        goto label_14cb90;
    }
    ctx->pc = 0x14CB88u;
    {
        const bool branch_taken_0x14cb88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        if (branch_taken_0x14cb88) {
            ctx->pc = 0x14D368u;
            goto label_14d368;
        }
    }
    ctx->pc = 0x14CB90u;
label_14cb90:
    // 0x14cb90: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x14cb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_14cb94:
    // 0x14cb94: 0x8fa401d0  lw          $a0, 0x1D0($sp)
    ctx->pc = 0x14cb94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_14cb98:
    // 0x14cb98: 0x8c45003c  lw          $a1, 0x3C($v0)
    ctx->pc = 0x14cb98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_14cb9c:
    // 0x14cb9c: 0xc053e0c  jal         func_14F830
label_14cba0:
    if (ctx->pc == 0x14CBA0u) {
        ctx->pc = 0x14CBA4u;
        goto label_14cba4;
    }
    ctx->pc = 0x14CB9Cu;
    SET_GPR_U32(ctx, 31, 0x14CBA4u);
    ctx->pc = 0x14F830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F830u, 0x14CB9Cu, 0x14CBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CBA4u;
label_14cba4:
    // 0x14cba4: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x14cba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_14cba8:
    // 0x14cba8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x14cba8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_14cbac:
    // 0x14cbac: 0x24a52d88  addiu       $a1, $a1, 0x2D88
    ctx->pc = 0x14cbacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11656));
label_14cbb0:
    // 0x14cbb0: 0xc08e57c  jal         func_2395F0
label_14cbb4:
    if (ctx->pc == 0x14CBB4u) {
        ctx->pc = 0x14CBB8u;
        goto label_14cbb8;
    }
    ctx->pc = 0x14CBB0u;
    SET_GPR_U32(ctx, 31, 0x14CBB8u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x14CBB0u, 0x14CBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CBB8u;
label_14cbb8:
    // 0x14cbb8: 0x27b60140  addiu       $s6, $sp, 0x140
    ctx->pc = 0x14cbb8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_14cbbc:
    // 0x14cbbc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x14cbbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_14cbc0:
    // 0x14cbc0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14cbc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14cbc4:
    // 0x14cbc4: 0xc0406d0  jal         func_101B40
label_14cbc8:
    if (ctx->pc == 0x14CBC8u) {
        ctx->pc = 0x14CBCCu;
        goto label_14cbcc;
    }
    ctx->pc = 0x14CBC4u;
    SET_GPR_U32(ctx, 31, 0x14CBCCu);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x14CBC4u, 0x14CBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CBCCu;
label_14cbcc:
    // 0x14cbcc: 0x27b600e0  addiu       $s6, $sp, 0xE0
    ctx->pc = 0x14cbccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_14cbd0:
    // 0x14cbd0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x14cbd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_14cbd4:
    // 0x14cbd4: 0x27858cd8  addiu       $a1, $gp, -0x7328
    ctx->pc = 0x14cbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937816));
label_14cbd8:
    // 0x14cbd8: 0xc040304  jal         func_100C10
label_14cbdc:
    if (ctx->pc == 0x14CBDCu) {
        ctx->pc = 0x14CBE0u;
        goto label_14cbe0;
    }
    ctx->pc = 0x14CBD8u;
    SET_GPR_U32(ctx, 31, 0x14CBE0u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x14CBD8u, 0x14CBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CBE0u;
label_14cbe0:
    // 0x14cbe0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x14cbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_14cbe4:
    // 0x14cbe4: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x14cbe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_14cbe8:
    // 0x14cbe8: 0xc119568  jal         func_4655A0
label_14cbec:
    if (ctx->pc == 0x14CBECu) {
        ctx->pc = 0x14CBF0u;
        goto label_14cbf0;
    }
    ctx->pc = 0x14CBE8u;
    SET_GPR_U32(ctx, 31, 0x14CBF0u);
    ctx->pc = 0x4655A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4655A0u, 0x14CBE8u, 0x14CBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CBF0u;
label_14cbf0:
    // 0x14cbf0: 0x27a20140  addiu       $v0, $sp, 0x140
    ctx->pc = 0x14cbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_14cbf4:
    // 0x14cbf4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14cbf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14cbf8:
    // 0x14cbf8: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x14cbf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_14cbfc:
    // 0x14cbfc: 0xc05471c  jal         func_151C70
label_14cc00:
    if (ctx->pc == 0x14CC00u) {
        ctx->pc = 0x14CC04u;
        goto label_14cc04;
    }
    ctx->pc = 0x14CBFCu;
    SET_GPR_U32(ctx, 31, 0x14CC04u);
    ctx->pc = 0x151C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C70u, 0x14CBFCu, 0x14CC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CC04u;
label_14cc04:
    // 0x14cc04: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x14cc04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_14cc08:
    // 0x14cc08: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x14cc08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_14cc0c:
    // 0x14cc0c: 0xc0406a0  jal         func_101A80
label_14cc10:
    if (ctx->pc == 0x14CC10u) {
        ctx->pc = 0x14CC14u;
        goto label_14cc14;
    }
    ctx->pc = 0x14CC0Cu;
    SET_GPR_U32(ctx, 31, 0x14CC14u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x14CC0Cu, 0x14CC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CC14u;
label_14cc14:
    // 0x14cc14: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14cc14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14cc18:
    // 0x14cc18: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x14cc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_14cc1c:
    // 0x14cc1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14cc1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14cc20:
    // 0x14cc20: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x14cc20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_14cc24:
    // 0x14cc24: 0xc0402d4  jal         func_100B50
label_14cc28:
    if (ctx->pc == 0x14CC28u) {
        ctx->pc = 0x14CC2Cu;
        goto label_14cc2c;
    }
    ctx->pc = 0x14CC24u;
    SET_GPR_U32(ctx, 31, 0x14CC2Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x14CC24u, 0x14CC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CC2Cu;
label_14cc2c:
    // 0x14cc2c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14cc2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14cc30:
    // 0x14cc30: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x14cc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_14cc34:
    // 0x14cc34: 0x8c45003c  lw          $a1, 0x3C($v0)
    ctx->pc = 0x14cc34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_14cc38:
    // 0x14cc38: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x14cc38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_14cc3c:
    // 0x14cc3c: 0xc09138c  jal         func_244E30
label_14cc40:
    if (ctx->pc == 0x14CC40u) {
        ctx->pc = 0x14CC44u;
        goto label_14cc44;
    }
    ctx->pc = 0x14CC3Cu;
    SET_GPR_U32(ctx, 31, 0x14CC44u);
    ctx->pc = 0x244E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E30u, 0x14CC3Cu, 0x14CC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CC44u;
label_14cc44:
    // 0x14cc44: 0xafa201b0  sw          $v0, 0x1B0($sp)
    ctx->pc = 0x14cc44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 2));
label_14cc48:
    // 0x14cc48: 0xc0434e0  jal         func_10D380
label_14cc4c:
    if (ctx->pc == 0x14CC4Cu) {
        ctx->pc = 0x14CC50u;
        goto label_14cc50;
    }
    ctx->pc = 0x14CC48u;
    SET_GPR_U32(ctx, 31, 0x14CC50u);
    ctx->pc = 0x10D380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D380u, 0x14CC48u, 0x14CC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CC50u;
label_14cc50:
    // 0x14cc50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14cc50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14cc54:
    // 0x14cc54: 0xc0434d8  jal         func_10D360
label_14cc58:
    if (ctx->pc == 0x14CC58u) {
        ctx->pc = 0x14CC5Cu;
        goto label_14cc5c;
    }
    ctx->pc = 0x14CC54u;
    SET_GPR_U32(ctx, 31, 0x14CC5Cu);
    ctx->pc = 0x10D360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D360u, 0x14CC54u, 0x14CC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CC5Cu;
label_14cc5c:
    // 0x14cc5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14cc5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14cc60:
    // 0x14cc60: 0x8fa501b0  lw          $a1, 0x1B0($sp)
    ctx->pc = 0x14cc60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_14cc64:
    // 0x14cc64: 0xc044da4  jal         func_113690
label_14cc68:
    if (ctx->pc == 0x14CC68u) {
        ctx->pc = 0x14CC6Cu;
        goto label_14cc6c;
    }
    ctx->pc = 0x14CC64u;
    SET_GPR_U32(ctx, 31, 0x14CC6Cu);
    ctx->pc = 0x113690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113690u, 0x14CC64u, 0x14CC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CC6Cu;
label_14cc6c:
    // 0x14cc6c: 0xafa201ac  sw          $v0, 0x1AC($sp)
    ctx->pc = 0x14cc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 2));
label_14cc70:
    // 0x14cc70: 0x8fa401ac  lw          $a0, 0x1AC($sp)
    ctx->pc = 0x14cc70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
label_14cc74:
    // 0x14cc74: 0xc0457e8  jal         func_115FA0
label_14cc78:
    if (ctx->pc == 0x14CC78u) {
        ctx->pc = 0x14CC7Cu;
        goto label_14cc7c;
    }
    ctx->pc = 0x14CC74u;
    SET_GPR_U32(ctx, 31, 0x14CC7Cu);
    ctx->pc = 0x115FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115FA0u, 0x14CC74u, 0x14CC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CC7Cu;
label_14cc7c:
    // 0x14cc7c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14cc7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14cc80:
    // 0x14cc80: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x14cc80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_14cc84:
    // 0x14cc84: 0x2405045c  addiu       $a1, $zero, 0x45C
    ctx->pc = 0x14cc84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1116));
label_14cc88:
    // 0x14cc88: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x14cc88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
label_14cc8c:
    // 0x14cc8c: 0x24c62db8  addiu       $a2, $a2, 0x2DB8
    ctx->pc = 0x14cc8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11704));
label_14cc90:
    // 0x14cc90: 0xc041a50  jal         func_106940
label_14cc94:
    if (ctx->pc == 0x14CC94u) {
        ctx->pc = 0x14CC98u;
        goto label_14cc98;
    }
    ctx->pc = 0x14CC90u;
    SET_GPR_U32(ctx, 31, 0x14CC98u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x14CC90u, 0x14CC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CC98u;
label_14cc98:
    // 0x14cc98: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14cc98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14cc9c:
    // 0x14cc9c: 0x8f82bbdc  lw          $v0, -0x4424($gp)
    ctx->pc = 0x14cc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_14cca0:
    // 0x14cca0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14cca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14cca4:
    // 0x14cca4: 0xc08e57c  jal         func_2395F0
label_14cca8:
    if (ctx->pc == 0x14CCA8u) {
        ctx->pc = 0x14CCACu;
        goto label_14ccac;
    }
    ctx->pc = 0x14CCA4u;
    SET_GPR_U32(ctx, 31, 0x14CCACu);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x14CCA4u, 0x14CCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CCACu;
label_14ccac:
    // 0x14ccac: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x14ccacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_14ccb0:
    // 0x14ccb0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14ccb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14ccb4:
    // 0x14ccb4: 0xc05471c  jal         func_151C70
label_14ccb8:
    if (ctx->pc == 0x14CCB8u) {
        ctx->pc = 0x14CCBCu;
        goto label_14ccbc;
    }
    ctx->pc = 0x14CCB4u;
    SET_GPR_U32(ctx, 31, 0x14CCBCu);
    ctx->pc = 0x151C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C70u, 0x14CCB4u, 0x14CCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CCBCu;
label_14ccbc:
    // 0x14ccbc: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x14ccbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_14ccc0:
    // 0x14ccc0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14ccc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14ccc4:
    // 0x14ccc4: 0x27858cdc  addiu       $a1, $gp, -0x7324
    ctx->pc = 0x14ccc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937820));
label_14ccc8:
    // 0x14ccc8: 0xc040304  jal         func_100C10
label_14cccc:
    if (ctx->pc == 0x14CCCCu) {
        ctx->pc = 0x14CCD0u;
        goto label_14ccd0;
    }
    ctx->pc = 0x14CCC8u;
    SET_GPR_U32(ctx, 31, 0x14CCD0u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x14CCC8u, 0x14CCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CCD0u;
label_14ccd0:
    // 0x14ccd0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x14ccd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_14ccd4:
    // 0x14ccd4: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x14ccd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_14ccd8:
    // 0x14ccd8: 0xc119568  jal         func_4655A0
label_14ccdc:
    if (ctx->pc == 0x14CCDCu) {
        ctx->pc = 0x14CCE0u;
        goto label_14cce0;
    }
    ctx->pc = 0x14CCD8u;
    SET_GPR_U32(ctx, 31, 0x14CCE0u);
    ctx->pc = 0x4655A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4655A0u, 0x14CCD8u, 0x14CCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CCE0u;
label_14cce0:
    // 0x14cce0: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x14cce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_14cce4:
    // 0x14cce4: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x14cce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_14cce8:
    // 0x14cce8: 0xc05471c  jal         func_151C70
label_14ccec:
    if (ctx->pc == 0x14CCECu) {
        ctx->pc = 0x14CCF0u;
        goto label_14ccf0;
    }
    ctx->pc = 0x14CCE8u;
    SET_GPR_U32(ctx, 31, 0x14CCF0u);
    ctx->pc = 0x151C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C70u, 0x14CCE8u, 0x14CCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CCF0u;
label_14ccf0:
    // 0x14ccf0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x14ccf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_14ccf4:
    // 0x14ccf4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x14ccf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_14ccf8:
    // 0x14ccf8: 0xc0406a0  jal         func_101A80
label_14ccfc:
    if (ctx->pc == 0x14CCFCu) {
        ctx->pc = 0x14CD00u;
        goto label_14cd00;
    }
    ctx->pc = 0x14CCF8u;
    SET_GPR_U32(ctx, 31, 0x14CD00u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x14CCF8u, 0x14CD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CD00u;
label_14cd00:
    // 0x14cd00: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14cd00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14cd04:
    // 0x14cd04: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x14cd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_14cd08:
    // 0x14cd08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14cd08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14cd0c:
    // 0x14cd0c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x14cd0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_14cd10:
    // 0x14cd10: 0xc0402d4  jal         func_100B50
label_14cd14:
    if (ctx->pc == 0x14CD14u) {
        ctx->pc = 0x14CD18u;
        goto label_14cd18;
    }
    ctx->pc = 0x14CD10u;
    SET_GPR_U32(ctx, 31, 0x14CD18u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x14CD10u, 0x14CD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CD18u;
label_14cd18:
    // 0x14cd18: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x14cd18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_14cd1c:
    // 0x14cd1c: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x14cd1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_14cd20:
    // 0x14cd20: 0xc1194c4  jal         func_465310
label_14cd24:
    if (ctx->pc == 0x14CD24u) {
        ctx->pc = 0x14CD28u;
        goto label_14cd28;
    }
    ctx->pc = 0x14CD20u;
    SET_GPR_U32(ctx, 31, 0x14CD28u);
    ctx->pc = 0x465310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465310u, 0x14CD20u, 0x14CD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CD28u;
label_14cd28:
    // 0x14cd28: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x14cd28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_14cd2c:
    // 0x14cd2c: 0xc041874  jal         func_1061D0
label_14cd30:
    if (ctx->pc == 0x14CD30u) {
        ctx->pc = 0x14CD34u;
        goto label_14cd34;
    }
    ctx->pc = 0x14CD2Cu;
    SET_GPR_U32(ctx, 31, 0x14CD34u);
    ctx->pc = 0x1061D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061D0u, 0x14CD2Cu, 0x14CD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CD34u;
label_14cd34:
    // 0x14cd34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14cd34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14cd38:
    // 0x14cd38: 0x8f82baa0  lw          $v0, -0x4560($gp)
    ctx->pc = 0x14cd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949536)));
label_14cd3c:
    // 0x14cd3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14cd3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14cd40:
    // 0x14cd40: 0xc0595d0  jal         func_165740
label_14cd44:
    if (ctx->pc == 0x14CD44u) {
        ctx->pc = 0x14CD48u;
        goto label_14cd48;
    }
    ctx->pc = 0x14CD40u;
    SET_GPR_U32(ctx, 31, 0x14CD48u);
    ctx->pc = 0x165740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165740u, 0x14CD40u, 0x14CD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CD48u;
label_14cd48:
    // 0x14cd48: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x14cd48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_14cd4c:
    // 0x14cd4c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x14cd4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_14cd50:
    // 0x14cd50: 0xc0402d4  jal         func_100B50
label_14cd54:
    if (ctx->pc == 0x14CD54u) {
        ctx->pc = 0x14CD58u;
        goto label_14cd58;
    }
    ctx->pc = 0x14CD50u;
    SET_GPR_U32(ctx, 31, 0x14CD58u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x14CD50u, 0x14CD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CD58u;
label_14cd58:
    // 0x14cd58: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x14cd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_14cd5c:
    // 0x14cd5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14cd5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14cd60:
    // 0x14cd60: 0x27858ce0  addiu       $a1, $gp, -0x7320
    ctx->pc = 0x14cd60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937824));
label_14cd64:
    // 0x14cd64: 0xc054558  jal         func_151560
label_14cd68:
    if (ctx->pc == 0x14CD68u) {
        ctx->pc = 0x14CD6Cu;
        goto label_14cd6c;
    }
    ctx->pc = 0x14CD64u;
    SET_GPR_U32(ctx, 31, 0x14CD6Cu);
    ctx->pc = 0x151560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151560u, 0x14CD64u, 0x14CD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CD6Cu;
label_14cd6c:
    // 0x14cd6c: 0x8f82ba94  lw          $v0, -0x456C($gp)
    ctx->pc = 0x14cd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949524)));
label_14cd70:
    // 0x14cd70: 0x10020177  beq         $zero, $v0, . + 4 + (0x177 << 2)
label_14cd74:
    if (ctx->pc == 0x14CD74u) {
        ctx->pc = 0x14CD78u;
        goto label_14cd78;
    }
    ctx->pc = 0x14CD70u;
    {
        const bool branch_taken_0x14cd70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x14cd70) {
            ctx->pc = 0x14D350u;
            goto label_14d350;
        }
    }
    ctx->pc = 0x14CD78u;
label_14cd78:
    // 0x14cd78: 0x8f84bb70  lw          $a0, -0x4490($gp)
    ctx->pc = 0x14cd78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_14cd7c:
    // 0x14cd7c: 0x8c85003c  lw          $a1, 0x3C($a0)
    ctx->pc = 0x14cd7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_14cd80:
    // 0x14cd80: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x14cd80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_14cd84:
    // 0x14cd84: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x14cd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_14cd88:
    // 0x14cd88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14cd88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14cd8c:
    // 0x14cd8c: 0xc085538  jal         func_2154E0
label_14cd90:
    if (ctx->pc == 0x14CD90u) {
        ctx->pc = 0x14CD94u;
        goto label_14cd94;
    }
    ctx->pc = 0x14CD8Cu;
    SET_GPR_U32(ctx, 31, 0x14CD94u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x14CD8Cu, 0x14CD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CD94u;
label_14cd94:
    // 0x14cd94: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x14cd94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14cd98:
    // 0x14cd98: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14cd98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_14cd9c:
    // 0x14cd9c: 0xc090fa0  jal         func_243E80
label_14cda0:
    if (ctx->pc == 0x14CDA0u) {
        ctx->pc = 0x14CDA4u;
        goto label_14cda4;
    }
    ctx->pc = 0x14CD9Cu;
    SET_GPR_U32(ctx, 31, 0x14CDA4u);
    ctx->pc = 0x243E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E80u, 0x14CD9Cu, 0x14CDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CDA4u;
label_14cda4:
    // 0x14cda4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14cda4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14cda8:
    // 0x14cda8: 0xc042214  jal         func_108850
label_14cdac:
    if (ctx->pc == 0x14CDACu) {
        ctx->pc = 0x14CDB0u;
        goto label_14cdb0;
    }
    ctx->pc = 0x14CDA8u;
    SET_GPR_U32(ctx, 31, 0x14CDB0u);
    ctx->pc = 0x108850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108850u, 0x14CDA8u, 0x14CDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CDB0u;
label_14cdb0:
    // 0x14cdb0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x14cdb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14cdb4:
    // 0x14cdb4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14cdb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_14cdb8:
    // 0x14cdb8: 0xc090fa0  jal         func_243E80
label_14cdbc:
    if (ctx->pc == 0x14CDBCu) {
        ctx->pc = 0x14CDC0u;
        goto label_14cdc0;
    }
    ctx->pc = 0x14CDB8u;
    SET_GPR_U32(ctx, 31, 0x14CDC0u);
    ctx->pc = 0x243E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E80u, 0x14CDB8u, 0x14CDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CDC0u;
label_14cdc0:
    // 0x14cdc0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14cdc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14cdc4:
    // 0x14cdc4: 0xc0421f8  jal         func_1087E0
label_14cdc8:
    if (ctx->pc == 0x14CDC8u) {
        ctx->pc = 0x14CDCCu;
        goto label_14cdcc;
    }
    ctx->pc = 0x14CDC4u;
    SET_GPR_U32(ctx, 31, 0x14CDCCu);
    ctx->pc = 0x1087E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1087E0u, 0x14CDC4u, 0x14CDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CDCCu;
label_14cdcc:
    // 0x14cdcc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x14cdccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14cdd0:
    // 0x14cdd0: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x14cdd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_14cdd4:
    // 0x14cdd4: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x14cdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_14cdd8:
    // 0x14cdd8: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x14cdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_14cddc:
    // 0x14cddc: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x14cddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_14cde0:
    // 0x14cde0: 0x1040007b  beqz        $v0, . + 4 + (0x7B << 2)
label_14cde4:
    if (ctx->pc == 0x14CDE4u) {
        ctx->pc = 0x14CDE8u;
        goto label_14cde8;
    }
    ctx->pc = 0x14CDE0u;
    {
        const bool branch_taken_0x14cde0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cde0) {
            ctx->pc = 0x14CFD0u;
            goto label_14cfd0;
        }
    }
    ctx->pc = 0x14CDE8u;
label_14cde8:
    // 0x14cde8: 0x122023  negu        $a0, $s2
    ctx->pc = 0x14cde8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
label_14cdec:
    // 0x14cdec: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x14cdecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14cdf0:
    // 0x14cdf0: 0x0  nop
    ctx->pc = 0x14cdf0u;
    // NOP
label_14cdf4:
    // 0x14cdf4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x14cdf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_14cdf8:
    // 0x14cdf8: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x14cdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_14cdfc:
    // 0x14cdfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14cdfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14ce00:
    // 0x14ce00: 0x0  nop
    ctx->pc = 0x14ce00u;
    // NOP
label_14ce04:
    // 0x14ce04: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x14ce04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_14ce08:
    // 0x14ce08: 0x3c144000  lui         $s4, 0x4000
    ctx->pc = 0x14ce08u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)16384 << 16));
label_14ce0c:
    // 0x14ce0c: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x14ce0cu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14ce10:
    // 0x14ce10: 0x0  nop
    ctx->pc = 0x14ce10u;
    // NOP
label_14ce14:
    // 0x14ce14: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x14ce14u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_14ce18:
    // 0x14ce18: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x14ce18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
label_14ce1c:
    // 0x14ce1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14ce1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14ce20:
    // 0x14ce20: 0x0  nop
    ctx->pc = 0x14ce20u;
    // NOP
label_14ce24:
    // 0x14ce24: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x14ce24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_14ce28:
    // 0x14ce28: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x14ce28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_14ce2c:
    // 0x14ce2c: 0x3c02c080  lui         $v0, 0xC080
    ctx->pc = 0x14ce2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49280 << 16));
label_14ce30:
    // 0x14ce30: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14ce30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14ce34:
    // 0x14ce34: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x14ce34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14ce38:
    // 0x14ce38: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14ce38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14ce3c:
    // 0x14ce3c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_14ce40:
    if (ctx->pc == 0x14CE40u) {
        ctx->pc = 0x14CE44u;
        goto label_14ce44;
    }
    ctx->pc = 0x14CE3Cu;
    {
        const bool branch_taken_0x14ce3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14ce3c) {
            ctx->pc = 0x14CE5Cu;
            goto label_14ce5c;
        }
    }
    ctx->pc = 0x14CE44u;
label_14ce44:
    // 0x14ce44: 0xc7a10130  lwc1        $f1, 0x130($sp)
    ctx->pc = 0x14ce44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14ce48:
    // 0x14ce48: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x14ce48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_14ce4c:
    // 0x14ce4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14ce4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14ce50:
    // 0x14ce50: 0x0  nop
    ctx->pc = 0x14ce50u;
    // NOP
label_14ce54:
    // 0x14ce54: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x14ce54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_14ce58:
    // 0x14ce58: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x14ce58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_14ce5c:
    // 0x14ce5c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x14ce5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_14ce60:
    // 0x14ce60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14ce60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14ce64:
    // 0x14ce64: 0x0  nop
    ctx->pc = 0x14ce64u;
    // NOP
label_14ce68:
    // 0x14ce68: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x14ce68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_14ce6c:
    // 0x14ce6c: 0x111023  negu        $v0, $s1
    ctx->pc = 0x14ce6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
label_14ce70:
    // 0x14ce70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14ce70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14ce74:
    // 0x14ce74: 0x0  nop
    ctx->pc = 0x14ce74u;
    // NOP
label_14ce78:
    // 0x14ce78: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x14ce78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_14ce7c:
    // 0x14ce7c: 0x3c0442a0  lui         $a0, 0x42A0
    ctx->pc = 0x14ce7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17056 << 16));
label_14ce80:
    // 0x14ce80: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x14ce80u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14ce84:
    // 0x14ce84: 0x0  nop
    ctx->pc = 0x14ce84u;
    // NOP
label_14ce88:
    // 0x14ce88: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x14ce88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_14ce8c:
    // 0x14ce8c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x14ce8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_14ce90:
    // 0x14ce90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14ce90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14ce94:
    // 0x14ce94: 0x0  nop
    ctx->pc = 0x14ce94u;
    // NOP
label_14ce98:
    // 0x14ce98: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x14ce98u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_14ce9c:
    // 0x14ce9c: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x14ce9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
label_14cea0:
    // 0x14cea0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14cea0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14cea4:
    // 0x14cea4: 0x0  nop
    ctx->pc = 0x14cea4u;
    // NOP
label_14cea8:
    // 0x14cea8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x14cea8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_14ceac:
    // 0x14ceac: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x14ceacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_14ceb0:
    // 0x14ceb0: 0x3c02c080  lui         $v0, 0xC080
    ctx->pc = 0x14ceb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49280 << 16));
label_14ceb4:
    // 0x14ceb4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14ceb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14ceb8:
    // 0x14ceb8: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x14ceb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14cebc:
    // 0x14cebc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14cebcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14cec0:
    // 0x14cec0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_14cec4:
    if (ctx->pc == 0x14CEC4u) {
        ctx->pc = 0x14CEC8u;
        goto label_14cec8;
    }
    ctx->pc = 0x14CEC0u;
    {
        const bool branch_taken_0x14cec0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14cec0) {
            ctx->pc = 0x14CEE0u;
            goto label_14cee0;
        }
    }
    ctx->pc = 0x14CEC8u;
label_14cec8:
    // 0x14cec8: 0xc7a10138  lwc1        $f1, 0x138($sp)
    ctx->pc = 0x14cec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14cecc:
    // 0x14cecc: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x14ceccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_14ced0:
    // 0x14ced0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14ced0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14ced4:
    // 0x14ced4: 0x0  nop
    ctx->pc = 0x14ced4u;
    // NOP
label_14ced8:
    // 0x14ced8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x14ced8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_14cedc:
    // 0x14cedc: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x14cedcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_14cee0:
    // 0x14cee0: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x14cee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_14cee4:
    // 0x14cee4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14cee4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14cee8:
    // 0x14cee8: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x14cee8u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14ceec:
    // 0x14ceec: 0x0  nop
    ctx->pc = 0x14ceecu;
    // NOP
label_14cef0:
    // 0x14cef0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14cef0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_14cef4:
    // 0x14cef4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x14cef4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_14cef8:
    // 0x14cef8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x14cef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_14cefc:
    // 0x14cefc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14cefcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14cf00:
    // 0x14cf00: 0x0  nop
    ctx->pc = 0x14cf00u;
    // NOP
label_14cf04:
    // 0x14cf04: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x14cf04u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_14cf08:
    // 0x14cf08: 0x3c044080  lui         $a0, 0x4080
    ctx->pc = 0x14cf08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16512 << 16));
label_14cf0c:
    // 0x14cf0c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x14cf0cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14cf10:
    // 0x14cf10: 0x0  nop
    ctx->pc = 0x14cf10u;
    // NOP
label_14cf14:
    // 0x14cf14: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14cf14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_14cf18:
    // 0x14cf18: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x14cf18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_14cf1c:
    // 0x14cf1c: 0x3c054080  lui         $a1, 0x4080
    ctx->pc = 0x14cf1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16512 << 16));
label_14cf20:
    // 0x14cf20: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x14cf20u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14cf24:
    // 0x14cf24: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x14cf24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14cf28:
    // 0x14cf28: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14cf28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14cf2c:
    // 0x14cf2c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_14cf30:
    if (ctx->pc == 0x14CF30u) {
        ctx->pc = 0x14CF34u;
        goto label_14cf34;
    }
    ctx->pc = 0x14CF2Cu;
    {
        const bool branch_taken_0x14cf2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14cf2c) {
            ctx->pc = 0x14CF4Cu;
            goto label_14cf4c;
        }
    }
    ctx->pc = 0x14CF34u;
label_14cf34:
    // 0x14cf34: 0xc7a10120  lwc1        $f1, 0x120($sp)
    ctx->pc = 0x14cf34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14cf38:
    // 0x14cf38: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x14cf38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_14cf3c:
    // 0x14cf3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14cf3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14cf40:
    // 0x14cf40: 0x0  nop
    ctx->pc = 0x14cf40u;
    // NOP
label_14cf44:
    // 0x14cf44: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x14cf44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_14cf48:
    // 0x14cf48: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x14cf48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_14cf4c:
    // 0x14cf4c: 0x3c024374  lui         $v0, 0x4374
    ctx->pc = 0x14cf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17268 << 16));
label_14cf50:
    // 0x14cf50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14cf50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14cf54:
    // 0x14cf54: 0x0  nop
    ctx->pc = 0x14cf54u;
    // NOP
label_14cf58:
    // 0x14cf58: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x14cf58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_14cf5c:
    // 0x14cf5c: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x14cf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_14cf60:
    // 0x14cf60: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14cf60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14cf64:
    // 0x14cf64: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x14cf64u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14cf68:
    // 0x14cf68: 0x0  nop
    ctx->pc = 0x14cf68u;
    // NOP
label_14cf6c:
    // 0x14cf6c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14cf6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_14cf70:
    // 0x14cf70: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x14cf70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_14cf74:
    // 0x14cf74: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x14cf74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_14cf78:
    // 0x14cf78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14cf78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14cf7c:
    // 0x14cf7c: 0x0  nop
    ctx->pc = 0x14cf7cu;
    // NOP
label_14cf80:
    // 0x14cf80: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x14cf80u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_14cf84:
    // 0x14cf84: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x14cf84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
label_14cf88:
    // 0x14cf88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14cf88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14cf8c:
    // 0x14cf8c: 0x0  nop
    ctx->pc = 0x14cf8cu;
    // NOP
label_14cf90:
    // 0x14cf90: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14cf90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_14cf94:
    // 0x14cf94: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x14cf94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_14cf98:
    // 0x14cf98: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x14cf98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_14cf9c:
    // 0x14cf9c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14cf9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14cfa0:
    // 0x14cfa0: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x14cfa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14cfa4:
    // 0x14cfa4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14cfa4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14cfa8:
    // 0x14cfa8: 0x4501009c  bc1t        . + 4 + (0x9C << 2)
label_14cfac:
    if (ctx->pc == 0x14CFACu) {
        ctx->pc = 0x14CFB0u;
        goto label_14cfb0;
    }
    ctx->pc = 0x14CFA8u;
    {
        const bool branch_taken_0x14cfa8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14cfa8) {
            ctx->pc = 0x14D21Cu;
            goto label_14d21c;
        }
    }
    ctx->pc = 0x14CFB0u;
label_14cfb0:
    // 0x14cfb0: 0xc7a10128  lwc1        $f1, 0x128($sp)
    ctx->pc = 0x14cfb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14cfb4:
    // 0x14cfb4: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x14cfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_14cfb8:
    // 0x14cfb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14cfb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14cfbc:
    // 0x14cfbc: 0x0  nop
    ctx->pc = 0x14cfbcu;
    // NOP
label_14cfc0:
    // 0x14cfc0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x14cfc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_14cfc4:
    // 0x14cfc4: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x14cfc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_14cfc8:
    // 0x14cfc8: 0x10000094  b           . + 4 + (0x94 << 2)
label_14cfcc:
    if (ctx->pc == 0x14CFCCu) {
        ctx->pc = 0x14CFD0u;
        goto label_14cfd0;
    }
    ctx->pc = 0x14CFC8u;
    {
        const bool branch_taken_0x14cfc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cfc8) {
            ctx->pc = 0x14D21Cu;
            goto label_14d21c;
        }
    }
    ctx->pc = 0x14CFD0u;
label_14cfd0:
    // 0x14cfd0: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x14cfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_14cfd4:
    // 0x14cfd4: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x14cfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_14cfd8:
    // 0x14cfd8: 0x30440020  andi        $a0, $v0, 0x20
    ctx->pc = 0x14cfd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_14cfdc:
    // 0x14cfdc: 0x1080004b  beqz        $a0, . + 4 + (0x4B << 2)
label_14cfe0:
    if (ctx->pc == 0x14CFE0u) {
        ctx->pc = 0x14CFE4u;
        goto label_14cfe4;
    }
    ctx->pc = 0x14CFDCu;
    {
        const bool branch_taken_0x14cfdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cfdc) {
            ctx->pc = 0x14D10Cu;
            goto label_14d10c;
        }
    }
    ctx->pc = 0x14CFE4u;
label_14cfe4:
    // 0x14cfe4: 0x121023  negu        $v0, $s2
    ctx->pc = 0x14cfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
label_14cfe8:
    // 0x14cfe8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14cfe8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14cfec:
    // 0x14cfec: 0x0  nop
    ctx->pc = 0x14cfecu;
    // NOP
label_14cff0:
    // 0x14cff0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x14cff0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_14cff4:
    // 0x14cff4: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x14cff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_14cff8:
    // 0x14cff8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14cff8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14cffc:
    // 0x14cffc: 0x0  nop
    ctx->pc = 0x14cffcu;
    // NOP
label_14d000:
    // 0x14d000: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x14d000u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_14d004:
    // 0x14d004: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x14d004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_14d008:
    // 0x14d008: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14d008u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14d00c:
    // 0x14d00c: 0x0  nop
    ctx->pc = 0x14d00cu;
    // NOP
label_14d010:
    // 0x14d010: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x14d010u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_14d014:
    // 0x14d014: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x14d014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_14d018:
    // 0x14d018: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14d018u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14d01c:
    // 0x14d01c: 0x0  nop
    ctx->pc = 0x14d01cu;
    // NOP
label_14d020:
    // 0x14d020: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x14d020u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_14d024:
    // 0x14d024: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x14d024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_14d028:
    // 0x14d028: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x14d028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_14d02c:
    // 0x14d02c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14d02cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14d030:
    // 0x14d030: 0x0  nop
    ctx->pc = 0x14d030u;
    // NOP
label_14d034:
    // 0x14d034: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x14d034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_14d038:
    // 0x14d038: 0x111023  negu        $v0, $s1
    ctx->pc = 0x14d038u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
label_14d03c:
    // 0x14d03c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14d03cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14d040:
    // 0x14d040: 0x0  nop
    ctx->pc = 0x14d040u;
    // NOP
label_14d044:
    // 0x14d044: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x14d044u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_14d048:
    // 0x14d048: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x14d048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
label_14d04c:
    // 0x14d04c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14d04cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14d050:
    // 0x14d050: 0x0  nop
    ctx->pc = 0x14d050u;
    // NOP
label_14d054:
    // 0x14d054: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x14d054u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_14d058:
    // 0x14d058: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x14d058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_14d05c:
    // 0x14d05c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14d05cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14d060:
    // 0x14d060: 0x0  nop
    ctx->pc = 0x14d060u;
    // NOP
label_14d064:
    // 0x14d064: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x14d064u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_14d068:
    // 0x14d068: 0x3c044080  lui         $a0, 0x4080
    ctx->pc = 0x14d068u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16512 << 16));
label_14d06c:
    // 0x14d06c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x14d06cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14d070:
    // 0x14d070: 0x0  nop
    ctx->pc = 0x14d070u;
    // NOP
label_14d074:
    // 0x14d074: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x14d074u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_14d078:
    // 0x14d078: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x14d078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_14d07c:
    // 0x14d07c: 0x3c0542a0  lui         $a1, 0x42A0
    ctx->pc = 0x14d07cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17056 << 16));
label_14d080:
    // 0x14d080: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x14d080u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14d084:
    // 0x14d084: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x14d084u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14d088:
    // 0x14d088: 0x0  nop
    ctx->pc = 0x14d088u;
    // NOP
label_14d08c:
    // 0x14d08c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14d08cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_14d090:
    // 0x14d090: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x14d090u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_14d094:
    // 0x14d094: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x14d094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_14d098:
    // 0x14d098: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14d098u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14d09c:
    // 0x14d09c: 0x0  nop
    ctx->pc = 0x14d09cu;
    // NOP
label_14d0a0:
    // 0x14d0a0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x14d0a0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_14d0a4:
    // 0x14d0a4: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x14d0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_14d0a8:
    // 0x14d0a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14d0a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14d0ac:
    // 0x14d0ac: 0x0  nop
    ctx->pc = 0x14d0acu;
    // NOP
label_14d0b0:
    // 0x14d0b0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14d0b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_14d0b4:
    // 0x14d0b4: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x14d0b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_14d0b8:
    // 0x14d0b8: 0x3c0342a8  lui         $v1, 0x42A8
    ctx->pc = 0x14d0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17064 << 16));
label_14d0bc:
    // 0x14d0bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14d0bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14d0c0:
    // 0x14d0c0: 0x0  nop
    ctx->pc = 0x14d0c0u;
    // NOP
label_14d0c4:
    // 0x14d0c4: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x14d0c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_14d0c8:
    // 0x14d0c8: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x14d0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_14d0cc:
    // 0x14d0cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14d0ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14d0d0:
    // 0x14d0d0: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x14d0d0u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14d0d4:
    // 0x14d0d4: 0x0  nop
    ctx->pc = 0x14d0d4u;
    // NOP
label_14d0d8:
    // 0x14d0d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14d0d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_14d0dc:
    // 0x14d0dc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x14d0dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_14d0e0:
    // 0x14d0e0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x14d0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_14d0e4:
    // 0x14d0e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14d0e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14d0e8:
    // 0x14d0e8: 0x0  nop
    ctx->pc = 0x14d0e8u;
    // NOP
label_14d0ec:
    // 0x14d0ec: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x14d0ecu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_14d0f0:
    // 0x14d0f0: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x14d0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
label_14d0f4:
    // 0x14d0f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14d0f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14d0f8:
    // 0x14d0f8: 0x0  nop
    ctx->pc = 0x14d0f8u;
    // NOP
label_14d0fc:
    // 0x14d0fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14d0fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_14d100:
    // 0x14d100: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x14d100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_14d104:
    // 0x14d104: 0x10000045  b           . + 4 + (0x45 << 2)
label_14d108:
    if (ctx->pc == 0x14D108u) {
        ctx->pc = 0x14D10Cu;
        goto label_14d10c;
    }
    ctx->pc = 0x14D104u;
    {
        const bool branch_taken_0x14d104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d104) {
            ctx->pc = 0x14D21Cu;
            goto label_14d21c;
        }
    }
    ctx->pc = 0x14D10Cu;
label_14d10c:
    // 0x14d10c: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x14d10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_14d110:
    // 0x14d110: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x14d110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_14d114:
    // 0x14d114: 0x30830100  andi        $v1, $a0, 0x100
    ctx->pc = 0x14d114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
label_14d118:
    // 0x14d118: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_14d11c:
    if (ctx->pc == 0x14D11Cu) {
        ctx->pc = 0x14D120u;
        goto label_14d120;
    }
    ctx->pc = 0x14D118u;
    {
        const bool branch_taken_0x14d118 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d118) {
            ctx->pc = 0x14D188u;
            goto label_14d188;
        }
    }
    ctx->pc = 0x14D120u;
label_14d120:
    // 0x14d120: 0x3c02c230  lui         $v0, 0xC230
    ctx->pc = 0x14d120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49712 << 16));
label_14d124:
    // 0x14d124: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x14d124u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_14d128:
    // 0x14d128: 0x0  nop
    ctx->pc = 0x14d128u;
    // NOP
label_14d12c:
    // 0x14d12c: 0xe7a20130  swc1        $f2, 0x130($sp)
    ctx->pc = 0x14d12cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_14d130:
    // 0x14d130: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x14d130u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
label_14d134:
    // 0x14d134: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x14d134u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14d138:
    // 0x14d138: 0x0  nop
    ctx->pc = 0x14d138u;
    // NOP
label_14d13c:
    // 0x14d13c: 0xe7a10134  swc1        $f1, 0x134($sp)
    ctx->pc = 0x14d13cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_14d140:
    // 0x14d140: 0x3c02c230  lui         $v0, 0xC230
    ctx->pc = 0x14d140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49712 << 16));
label_14d144:
    // 0x14d144: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14d144u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14d148:
    // 0x14d148: 0x0  nop
    ctx->pc = 0x14d148u;
    // NOP
label_14d14c:
    // 0x14d14c: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x14d14cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_14d150:
    // 0x14d150: 0x3c024230  lui         $v0, 0x4230
    ctx->pc = 0x14d150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16944 << 16));
label_14d154:
    // 0x14d154: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14d154u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14d158:
    // 0x14d158: 0x0  nop
    ctx->pc = 0x14d158u;
    // NOP
label_14d15c:
    // 0x14d15c: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x14d15cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_14d160:
    // 0x14d160: 0x3c0242a8  lui         $v0, 0x42A8
    ctx->pc = 0x14d160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17064 << 16));
label_14d164:
    // 0x14d164: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14d164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14d168:
    // 0x14d168: 0x0  nop
    ctx->pc = 0x14d168u;
    // NOP
label_14d16c:
    // 0x14d16c: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x14d16cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_14d170:
    // 0x14d170: 0x3c024230  lui         $v0, 0x4230
    ctx->pc = 0x14d170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16944 << 16));
label_14d174:
    // 0x14d174: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x14d174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_14d178:
    // 0x14d178: 0x0  nop
    ctx->pc = 0x14d178u;
    // NOP
label_14d17c:
    // 0x14d17c: 0xe7ac0128  swc1        $f12, 0x128($sp)
    ctx->pc = 0x14d17cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_14d180:
    // 0x14d180: 0x10000026  b           . + 4 + (0x26 << 2)
label_14d184:
    if (ctx->pc == 0x14D184u) {
        ctx->pc = 0x14D188u;
        goto label_14d188;
    }
    ctx->pc = 0x14D180u;
    {
        const bool branch_taken_0x14d180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d180) {
            ctx->pc = 0x14D21Cu;
            goto label_14d21c;
        }
    }
    ctx->pc = 0x14D188u;
label_14d188:
    // 0x14d188: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x14d188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_14d18c:
    // 0x14d18c: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x14d18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_14d190:
    // 0x14d190: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x14d190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_14d194:
    // 0x14d194: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_14d198:
    if (ctx->pc == 0x14D198u) {
        ctx->pc = 0x14D19Cu;
        goto label_14d19c;
    }
    ctx->pc = 0x14D194u;
    {
        const bool branch_taken_0x14d194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d194) {
            ctx->pc = 0x14D204u;
            goto label_14d204;
        }
    }
    ctx->pc = 0x14D19Cu;
label_14d19c:
    // 0x14d19c: 0x3c02c230  lui         $v0, 0xC230
    ctx->pc = 0x14d19cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49712 << 16));
label_14d1a0:
    // 0x14d1a0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x14d1a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_14d1a4:
    // 0x14d1a4: 0x0  nop
    ctx->pc = 0x14d1a4u;
    // NOP
label_14d1a8:
    // 0x14d1a8: 0xe7a20130  swc1        $f2, 0x130($sp)
    ctx->pc = 0x14d1a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_14d1ac:
    // 0x14d1ac: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x14d1acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_14d1b0:
    // 0x14d1b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14d1b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14d1b4:
    // 0x14d1b4: 0x0  nop
    ctx->pc = 0x14d1b4u;
    // NOP
label_14d1b8:
    // 0x14d1b8: 0xe7a10134  swc1        $f1, 0x134($sp)
    ctx->pc = 0x14d1b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_14d1bc:
    // 0x14d1bc: 0x3c02c230  lui         $v0, 0xC230
    ctx->pc = 0x14d1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49712 << 16));
label_14d1c0:
    // 0x14d1c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14d1c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14d1c4:
    // 0x14d1c4: 0x0  nop
    ctx->pc = 0x14d1c4u;
    // NOP
label_14d1c8:
    // 0x14d1c8: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x14d1c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_14d1cc:
    // 0x14d1cc: 0x3c024230  lui         $v0, 0x4230
    ctx->pc = 0x14d1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16944 << 16));
label_14d1d0:
    // 0x14d1d0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x14d1d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_14d1d4:
    // 0x14d1d4: 0x0  nop
    ctx->pc = 0x14d1d4u;
    // NOP
label_14d1d8:
    // 0x14d1d8: 0xe7a20120  swc1        $f2, 0x120($sp)
    ctx->pc = 0x14d1d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_14d1dc:
    // 0x14d1dc: 0x3c0242a8  lui         $v0, 0x42A8
    ctx->pc = 0x14d1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17064 << 16));
label_14d1e0:
    // 0x14d1e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14d1e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14d1e4:
    // 0x14d1e4: 0x0  nop
    ctx->pc = 0x14d1e4u;
    // NOP
label_14d1e8:
    // 0x14d1e8: 0xe7a10124  swc1        $f1, 0x124($sp)
    ctx->pc = 0x14d1e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_14d1ec:
    // 0x14d1ec: 0x3c024230  lui         $v0, 0x4230
    ctx->pc = 0x14d1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16944 << 16));
label_14d1f0:
    // 0x14d1f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14d1f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14d1f4:
    // 0x14d1f4: 0x0  nop
    ctx->pc = 0x14d1f4u;
    // NOP
label_14d1f8:
    // 0x14d1f8: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x14d1f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_14d1fc:
    // 0x14d1fc: 0x10000007  b           . + 4 + (0x7 << 2)
label_14d200:
    if (ctx->pc == 0x14D200u) {
        ctx->pc = 0x14D204u;
        goto label_14d204;
    }
    ctx->pc = 0x14D1FCu;
    {
        const bool branch_taken_0x14d1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d1fc) {
            ctx->pc = 0x14D21Cu;
            goto label_14d21c;
        }
    }
    ctx->pc = 0x14D204u;
label_14d204:
    // 0x14d204: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x14d204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_14d208:
    // 0x14d208: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x14d208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_14d20c:
    // 0x14d20c: 0xc0406a0  jal         func_101A80
label_14d210:
    if (ctx->pc == 0x14D210u) {
        ctx->pc = 0x14D214u;
        goto label_14d214;
    }
    ctx->pc = 0x14D20Cu;
    SET_GPR_U32(ctx, 31, 0x14D214u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x14D20Cu, 0x14D214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D214u;
label_14d214:
    // 0x14d214: 0x100000b2  b           . + 4 + (0xB2 << 2)
label_14d218:
    if (ctx->pc == 0x14D218u) {
        ctx->pc = 0x14D21Cu;
        goto label_14d21c;
    }
    ctx->pc = 0x14D214u;
    {
        const bool branch_taken_0x14d214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d214) {
            ctx->pc = 0x14D4E0u;
            goto label_14d4e0;
        }
    }
    ctx->pc = 0x14D21Cu;
label_14d21c:
    // 0x14d21c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14d21cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_14d220:
    // 0x14d220: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x14d220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_14d224:
    // 0x14d224: 0xc090f6c  jal         func_243DB0
label_14d228:
    if (ctx->pc == 0x14D228u) {
        ctx->pc = 0x14D22Cu;
        goto label_14d22c;
    }
    ctx->pc = 0x14D224u;
    SET_GPR_U32(ctx, 31, 0x14D22Cu);
    ctx->pc = 0x243DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243DB0u, 0x14D224u, 0x14D22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D22Cu;
label_14d22c:
    // 0x14d22c: 0xc7a10130  lwc1        $f1, 0x130($sp)
    ctx->pc = 0x14d22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14d230:
    // 0x14d230: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x14d230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14d234:
    // 0x14d234: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x14d234u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_14d238:
    // 0x14d238: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x14d238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_14d23c:
    // 0x14d23c: 0xc7a10134  lwc1        $f1, 0x134($sp)
    ctx->pc = 0x14d23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14d240:
    // 0x14d240: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x14d240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14d244:
    // 0x14d244: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x14d244u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_14d248:
    // 0x14d248: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x14d248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_14d24c:
    // 0x14d24c: 0xc7a10138  lwc1        $f1, 0x138($sp)
    ctx->pc = 0x14d24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14d250:
    // 0x14d250: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x14d250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14d254:
    // 0x14d254: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x14d254u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_14d258:
    // 0x14d258: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x14d258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_14d25c:
    // 0x14d25c: 0xc7a10120  lwc1        $f1, 0x120($sp)
    ctx->pc = 0x14d25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14d260:
    // 0x14d260: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x14d260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14d264:
    // 0x14d264: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x14d264u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_14d268:
    // 0x14d268: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x14d268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_14d26c:
    // 0x14d26c: 0xc7a10124  lwc1        $f1, 0x124($sp)
    ctx->pc = 0x14d26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14d270:
    // 0x14d270: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x14d270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14d274:
    // 0x14d274: 0x460008c0  add.s       $f3, $f1, $f0
    ctx->pc = 0x14d274u;
    ctx->f[3] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_14d278:
    // 0x14d278: 0xe7a30124  swc1        $f3, 0x124($sp)
    ctx->pc = 0x14d278u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_14d27c:
    // 0x14d27c: 0xc7a20128  lwc1        $f2, 0x128($sp)
    ctx->pc = 0x14d27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_14d280:
    // 0x14d280: 0xc7a10118  lwc1        $f1, 0x118($sp)
    ctx->pc = 0x14d280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14d284:
    // 0x14d284: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x14d284u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_14d288:
    // 0x14d288: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x14d288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_14d28c:
    // 0x14d28c: 0x27a201a8  addiu       $v0, $sp, 0x1A8
    ctx->pc = 0x14d28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
label_14d290:
    // 0x14d290: 0xc7808ccc  lwc1        $f0, -0x7334($gp)
    ctx->pc = 0x14d290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14d294:
    // 0x14d294: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x14d294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_14d298:
    // 0x14d298: 0xc0bbf1e  jal         func_2EFC78
label_14d29c:
    if (ctx->pc == 0x14D29Cu) {
        ctx->pc = 0x14D2A0u;
        goto label_14d2a0;
    }
    ctx->pc = 0x14D298u;
    SET_GPR_U32(ctx, 31, 0x14D2A0u);
    ctx->pc = 0x2EFC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFC78u, 0x14D298u, 0x14D2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D2A0u;
label_14d2a0:
    // 0x14d2a0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x14d2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_14d2a4:
    // 0x14d2a4: 0x3043007f  andi        $v1, $v0, 0x7F
    ctx->pc = 0x14d2a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
label_14d2a8:
    // 0x14d2a8: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_14d2ac:
    if (ctx->pc == 0x14D2ACu) {
        ctx->pc = 0x14D2B0u;
        goto label_14d2b0;
    }
    ctx->pc = 0x14D2A8u;
    {
        const bool branch_taken_0x14d2a8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x14d2a8) {
            ctx->pc = 0x14D2BCu;
            goto label_14d2bc;
        }
    }
    ctx->pc = 0x14D2B0u;
label_14d2b0:
    // 0x14d2b0: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_14d2b4:
    if (ctx->pc == 0x14D2B4u) {
        ctx->pc = 0x14D2B8u;
        goto label_14d2b8;
    }
    ctx->pc = 0x14D2B0u;
    {
        const bool branch_taken_0x14d2b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d2b0) {
            ctx->pc = 0x14D2BCu;
            goto label_14d2bc;
        }
    }
    ctx->pc = 0x14D2B8u;
label_14d2b8:
    // 0x14d2b8: 0x2463ff80  addiu       $v1, $v1, -0x80
    ctx->pc = 0x14d2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967168));
label_14d2bc:
    // 0x14d2bc: 0x24620080  addiu       $v0, $v1, 0x80
    ctx->pc = 0x14d2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_14d2c0:
    // 0x14d2c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14d2c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14d2c4:
    // 0x14d2c4: 0xa3a201a8  sb          $v0, 0x1A8($sp)
    ctx->pc = 0x14d2c4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 424), (uint8_t)GPR_U32(ctx, 2));
label_14d2c8:
    // 0x14d2c8: 0xc0bbf1e  jal         func_2EFC78
label_14d2cc:
    if (ctx->pc == 0x14D2CCu) {
        ctx->pc = 0x14D2D0u;
        goto label_14d2d0;
    }
    ctx->pc = 0x14D2C8u;
    SET_GPR_U32(ctx, 31, 0x14D2D0u);
    ctx->pc = 0x2EFC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFC78u, 0x14D2C8u, 0x14D2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D2D0u;
label_14d2d0:
    // 0x14d2d0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x14d2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_14d2d4:
    // 0x14d2d4: 0x3043007f  andi        $v1, $v0, 0x7F
    ctx->pc = 0x14d2d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
label_14d2d8:
    // 0x14d2d8: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_14d2dc:
    if (ctx->pc == 0x14D2DCu) {
        ctx->pc = 0x14D2E0u;
        goto label_14d2e0;
    }
    ctx->pc = 0x14D2D8u;
    {
        const bool branch_taken_0x14d2d8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x14d2d8) {
            ctx->pc = 0x14D2ECu;
            goto label_14d2ec;
        }
    }
    ctx->pc = 0x14D2E0u;
label_14d2e0:
    // 0x14d2e0: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_14d2e4:
    if (ctx->pc == 0x14D2E4u) {
        ctx->pc = 0x14D2E8u;
        goto label_14d2e8;
    }
    ctx->pc = 0x14D2E0u;
    {
        const bool branch_taken_0x14d2e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d2e0) {
            ctx->pc = 0x14D2ECu;
            goto label_14d2ec;
        }
    }
    ctx->pc = 0x14D2E8u;
label_14d2e8:
    // 0x14d2e8: 0x2463ff80  addiu       $v1, $v1, -0x80
    ctx->pc = 0x14d2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967168));
label_14d2ec:
    // 0x14d2ec: 0x24640080  addiu       $a0, $v1, 0x80
    ctx->pc = 0x14d2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_14d2f0:
    // 0x14d2f0: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x14d2f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_14d2f4:
    // 0x14d2f4: 0xa3a501a9  sb          $a1, 0x1A9($sp)
    ctx->pc = 0x14d2f4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 425), (uint8_t)GPR_U32(ctx, 5));
label_14d2f8:
    // 0x14d2f8: 0xc0bbf1e  jal         func_2EFC78
label_14d2fc:
    if (ctx->pc == 0x14D2FCu) {
        ctx->pc = 0x14D300u;
        goto label_14d300;
    }
    ctx->pc = 0x14D2F8u;
    SET_GPR_U32(ctx, 31, 0x14D300u);
    ctx->pc = 0x2EFC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFC78u, 0x14D2F8u, 0x14D300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D300u;
label_14d300:
    // 0x14d300: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x14d300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_14d304:
    // 0x14d304: 0x3044007f  andi        $a0, $v0, 0x7F
    ctx->pc = 0x14d304u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
label_14d308:
    // 0x14d308: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_14d30c:
    if (ctx->pc == 0x14D30Cu) {
        ctx->pc = 0x14D310u;
        goto label_14d310;
    }
    ctx->pc = 0x14D308u;
    {
        const bool branch_taken_0x14d308 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x14d308) {
            ctx->pc = 0x14D31Cu;
            goto label_14d31c;
        }
    }
    ctx->pc = 0x14D310u;
label_14d310:
    // 0x14d310: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
label_14d314:
    if (ctx->pc == 0x14D314u) {
        ctx->pc = 0x14D318u;
        goto label_14d318;
    }
    ctx->pc = 0x14D310u;
    {
        const bool branch_taken_0x14d310 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d310) {
            ctx->pc = 0x14D31Cu;
            goto label_14d31c;
        }
    }
    ctx->pc = 0x14D318u;
label_14d318:
    // 0x14d318: 0x2484ff80  addiu       $a0, $a0, -0x80
    ctx->pc = 0x14d318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967168));
label_14d31c:
    // 0x14d31c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x14d31cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_14d320:
    // 0x14d320: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x14d320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_14d324:
    // 0x14d324: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x14d324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14d328:
    // 0x14d328: 0xa3a301aa  sb          $v1, 0x1AA($sp)
    ctx->pc = 0x14d328u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 426), (uint8_t)GPR_U32(ctx, 3));
label_14d32c:
    // 0x14d32c: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x14d32cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_14d330:
    // 0x14d330: 0xa3a201ce  sb          $v0, 0x1CE($sp)
    ctx->pc = 0x14d330u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 462), (uint8_t)GPR_U32(ctx, 2));
label_14d334:
    // 0x14d334: 0x8f84ba94  lw          $a0, -0x456C($gp)
    ctx->pc = 0x14d334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949524)));
label_14d338:
    // 0x14d338: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x14d338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_14d33c:
    // 0x14d33c: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x14d33cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_14d340:
    // 0x14d340: 0x27a201a8  addiu       $v0, $sp, 0x1A8
    ctx->pc = 0x14d340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
label_14d344:
    // 0x14d344: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x14d344u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14d348:
    // 0x14d348: 0xc0a43e4  jal         func_290F90
label_14d34c:
    if (ctx->pc == 0x14D34Cu) {
        ctx->pc = 0x14D350u;
        goto label_14d350;
    }
    ctx->pc = 0x14D348u;
    SET_GPR_U32(ctx, 31, 0x14D350u);
    ctx->pc = 0x290F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290F90u, 0x14D348u, 0x14D350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D350u;
label_14d350:
    // 0x14d350: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x14d350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_14d354:
    // 0x14d354: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x14d354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_14d358:
    // 0x14d358: 0xc0406a0  jal         func_101A80
label_14d35c:
    if (ctx->pc == 0x14D35Cu) {
        ctx->pc = 0x14D360u;
        goto label_14d360;
    }
    ctx->pc = 0x14D358u;
    SET_GPR_U32(ctx, 31, 0x14D360u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x14D358u, 0x14D360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D360u;
label_14d360:
    // 0x14d360: 0x1000004e  b           . + 4 + (0x4E << 2)
label_14d364:
    if (ctx->pc == 0x14D364u) {
        ctx->pc = 0x14D368u;
        goto label_14d368;
    }
    ctx->pc = 0x14D360u;
    {
        const bool branch_taken_0x14d360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d360) {
            ctx->pc = 0x14D49Cu;
            goto label_14d49c;
        }
    }
    ctx->pc = 0x14D368u;
label_14d368:
    // 0x14d368: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14d368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
label_14d36c:
    // 0x14d36c: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x14d36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_14d370:
    // 0x14d370: 0xc053548  jal         func_14D520
label_14d374:
    if (ctx->pc == 0x14D374u) {
        ctx->pc = 0x14D378u;
        goto label_14d378;
    }
    ctx->pc = 0x14D370u;
    SET_GPR_U32(ctx, 31, 0x14D378u);
    ctx->pc = 0x14D520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D520u, 0x14D370u, 0x14D378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D378u;
label_14d378:
    // 0x14d378: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14d378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14d37c:
    // 0x14d37c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14d37cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14d380:
    // 0x14d380: 0x1043002c  beq         $v0, $v1, . + 4 + (0x2C << 2)
label_14d384:
    if (ctx->pc == 0x14D384u) {
        ctx->pc = 0x14D388u;
        goto label_14d388;
    }
    ctx->pc = 0x14D380u;
    {
        const bool branch_taken_0x14d380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x14d380) {
            ctx->pc = 0x14D434u;
            goto label_14d434;
        }
    }
    ctx->pc = 0x14D388u;
label_14d388:
    // 0x14d388: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14d388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
label_14d38c:
    // 0x14d38c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x14d38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_14d390:
    // 0x14d390: 0x10020028  beq         $zero, $v0, . + 4 + (0x28 << 2)
label_14d394:
    if (ctx->pc == 0x14D394u) {
        ctx->pc = 0x14D398u;
        goto label_14d398;
    }
    ctx->pc = 0x14D390u;
    {
        const bool branch_taken_0x14d390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x14d390) {
            ctx->pc = 0x14D434u;
            goto label_14d434;
        }
    }
    ctx->pc = 0x14D398u;
label_14d398:
    // 0x14d398: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x14d398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_14d39c:
    // 0x14d39c: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x14d39cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_14d3a0:
    // 0x14d3a0: 0x30820700  andi        $v0, $a0, 0x700
    ctx->pc = 0x14d3a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1792);
label_14d3a4:
    // 0x14d3a4: 0x30420110  andi        $v0, $v0, 0x110
    ctx->pc = 0x14d3a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)272);
label_14d3a8:
    // 0x14d3a8: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_14d3ac:
    if (ctx->pc == 0x14D3ACu) {
        ctx->pc = 0x14D3B0u;
        goto label_14d3b0;
    }
    ctx->pc = 0x14D3A8u;
    {
        const bool branch_taken_0x14d3a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d3a8) {
            ctx->pc = 0x14D434u;
            goto label_14d434;
        }
    }
    ctx->pc = 0x14D3B0u;
label_14d3b0:
    // 0x14d3b0: 0x8f84baa0  lw          $a0, -0x4560($gp)
    ctx->pc = 0x14d3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949536)));
label_14d3b4:
    // 0x14d3b4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x14d3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_14d3b8:
    // 0x14d3b8: 0x24a52dc8  addiu       $a1, $a1, 0x2DC8
    ctx->pc = 0x14d3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11720));
label_14d3bc:
    // 0x14d3bc: 0xc0595d0  jal         func_165740
label_14d3c0:
    if (ctx->pc == 0x14D3C0u) {
        ctx->pc = 0x14D3C4u;
        goto label_14d3c4;
    }
    ctx->pc = 0x14D3BCu;
    SET_GPR_U32(ctx, 31, 0x14D3C4u);
    ctx->pc = 0x165740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165740u, 0x14D3BCu, 0x14D3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D3C4u;
label_14d3c4:
    // 0x14d3c4: 0x8fa401d0  lw          $a0, 0x1D0($sp)
    ctx->pc = 0x14d3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_14d3c8:
    // 0x14d3c8: 0x27858ce8  addiu       $a1, $gp, -0x7318
    ctx->pc = 0x14d3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937832));
label_14d3cc:
    // 0x14d3cc: 0xc054558  jal         func_151560
label_14d3d0:
    if (ctx->pc == 0x14D3D0u) {
        ctx->pc = 0x14D3D4u;
        goto label_14d3d4;
    }
    ctx->pc = 0x14D3CCu;
    SET_GPR_U32(ctx, 31, 0x14D3D4u);
    ctx->pc = 0x151560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151560u, 0x14D3CCu, 0x14D3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D3D4u;
label_14d3d4:
    // 0x14d3d4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14d3d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14d3d8:
    // 0x14d3d8: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14d3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
label_14d3dc:
    // 0x14d3dc: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x14d3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_14d3e0:
    // 0x14d3e0: 0xc041010  jal         func_104040
label_14d3e4:
    if (ctx->pc == 0x14D3E4u) {
        ctx->pc = 0x14D3E8u;
        goto label_14d3e8;
    }
    ctx->pc = 0x14D3E0u;
    SET_GPR_U32(ctx, 31, 0x14D3E8u);
    ctx->pc = 0x104040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104040u, 0x14D3E0u, 0x14D3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D3E8u;
label_14d3e8:
    // 0x14d3e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14d3e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14d3ec:
    // 0x14d3ec: 0x10000009  b           . + 4 + (0x9 << 2)
label_14d3f0:
    if (ctx->pc == 0x14D3F0u) {
        ctx->pc = 0x14D3F4u;
        goto label_14d3f4;
    }
    ctx->pc = 0x14D3ECu;
    {
        const bool branch_taken_0x14d3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d3ec) {
            ctx->pc = 0x14D414u;
            goto label_14d414;
        }
    }
    ctx->pc = 0x14D3F4u;
label_14d3f4:
    // 0x14d3f4: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x14d3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_14d3f8:
    // 0x14d3f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14d3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14d3fc:
    // 0x14d3fc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x14d3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_14d400:
    // 0x14d400: 0xc053e48  jal         func_14F920
label_14d404:
    if (ctx->pc == 0x14D404u) {
        ctx->pc = 0x14D408u;
        goto label_14d408;
    }
    ctx->pc = 0x14D400u;
    SET_GPR_U32(ctx, 31, 0x14D408u);
    ctx->pc = 0x14F920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F920u, 0x14D400u, 0x14D408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D408u;
label_14d408:
    // 0x14d408: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x14d408u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14d40c:
    // 0x14d40c: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x14d40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_14d410:
    // 0x14d410: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x14d410u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_14d414:
    // 0x14d414: 0x8f83ba98  lw          $v1, -0x4568($gp)
    ctx->pc = 0x14d414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
label_14d418:
    // 0x14d418: 0x2464000c  addiu       $a0, $v1, 0xC
    ctx->pc = 0x14d418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_14d41c:
    // 0x14d41c: 0xc040ff8  jal         func_103FE0
label_14d420:
    if (ctx->pc == 0x14D420u) {
        ctx->pc = 0x14D424u;
        goto label_14d424;
    }
    ctx->pc = 0x14D41Cu;
    SET_GPR_U32(ctx, 31, 0x14D424u);
    ctx->pc = 0x103FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103FE0u, 0x14D41Cu, 0x14D424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D424u;
label_14d424:
    // 0x14d424: 0x1602fff3  bne         $s0, $v0, . + 4 + (-0xD << 2)
label_14d428:
    if (ctx->pc == 0x14D428u) {
        ctx->pc = 0x14D42Cu;
        goto label_14d42c;
    }
    ctx->pc = 0x14D424u;
    {
        const bool branch_taken_0x14d424 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x14d424) {
            ctx->pc = 0x14D3F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14d3f4;
        }
    }
    ctx->pc = 0x14D42Cu;
label_14d42c:
    // 0x14d42c: 0x1000001b  b           . + 4 + (0x1B << 2)
label_14d430:
    if (ctx->pc == 0x14D430u) {
        ctx->pc = 0x14D434u;
        goto label_14d434;
    }
    ctx->pc = 0x14D42Cu;
    {
        const bool branch_taken_0x14d42c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d42c) {
            ctx->pc = 0x14D49Cu;
            goto label_14d49c;
        }
    }
    ctx->pc = 0x14D434u;
label_14d434:
    // 0x14d434: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x14d434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_14d438:
    // 0x14d438: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x14d438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_14d43c:
    // 0x14d43c: 0x30650700  andi        $a1, $v1, 0x700
    ctx->pc = 0x14d43cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1792);
label_14d440:
    // 0x14d440: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
label_14d444:
    if (ctx->pc == 0x14D444u) {
        ctx->pc = 0x14D448u;
        goto label_14d448;
    }
    ctx->pc = 0x14D440u;
    {
        const bool branch_taken_0x14d440 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d440) {
            ctx->pc = 0x14D49Cu;
            goto label_14d49c;
        }
    }
    ctx->pc = 0x14D448u;
label_14d448:
    // 0x14d448: 0x8fa501d0  lw          $a1, 0x1D0($sp)
    ctx->pc = 0x14d448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_14d44c:
    // 0x14d44c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x14d44cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_14d450:
    // 0x14d450: 0x27858cc0  addiu       $a1, $gp, -0x7340
    ctx->pc = 0x14d450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937792));
label_14d454:
    // 0x14d454: 0xc054558  jal         func_151560
label_14d458:
    if (ctx->pc == 0x14D458u) {
        ctx->pc = 0x14D45Cu;
        goto label_14d45c;
    }
    ctx->pc = 0x14D454u;
    SET_GPR_U32(ctx, 31, 0x14D45Cu);
    ctx->pc = 0x151560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151560u, 0x14D454u, 0x14D45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D45Cu;
label_14d45c:
    // 0x14d45c: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14d45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
label_14d460:
    // 0x14d460: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14d460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14d464:
    // 0x14d464: 0x1002000d  beq         $zero, $v0, . + 4 + (0xD << 2)
label_14d468:
    if (ctx->pc == 0x14D468u) {
        ctx->pc = 0x14D46Cu;
        goto label_14d46c;
    }
    ctx->pc = 0x14D464u;
    {
        const bool branch_taken_0x14d464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x14d464) {
            ctx->pc = 0x14D49Cu;
            goto label_14d49c;
        }
    }
    ctx->pc = 0x14D46Cu;
label_14d46c:
    // 0x14d46c: 0x8f83ba98  lw          $v1, -0x4568($gp)
    ctx->pc = 0x14d46cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
label_14d470:
    // 0x14d470: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14d470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_14d474:
    // 0x14d474: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14d474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_14d478:
    // 0x14d478: 0x10030008  beq         $zero, $v1, . + 4 + (0x8 << 2)
label_14d47c:
    if (ctx->pc == 0x14D47Cu) {
        ctx->pc = 0x14D480u;
        goto label_14d480;
    }
    ctx->pc = 0x14D478u;
    {
        const bool branch_taken_0x14d478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x14d478) {
            ctx->pc = 0x14D49Cu;
            goto label_14d49c;
        }
    }
    ctx->pc = 0x14D480u;
label_14d480:
    // 0x14d480: 0x8f83ba98  lw          $v1, -0x4568($gp)
    ctx->pc = 0x14d480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
label_14d484:
    // 0x14d484: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14d484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_14d488:
    // 0x14d488: 0x8fa401d0  lw          $a0, 0x1D0($sp)
    ctx->pc = 0x14d488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_14d48c:
    // 0x14d48c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x14d48cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14d490:
    // 0x14d490: 0xc054308  jal         func_150C20
label_14d494:
    if (ctx->pc == 0x14D494u) {
        ctx->pc = 0x14D498u;
        goto label_14d498;
    }
    ctx->pc = 0x14D490u;
    SET_GPR_U32(ctx, 31, 0x14D498u);
    ctx->pc = 0x150C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150C20u, 0x14D490u, 0x14D498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D498u;
label_14d498:
    // 0x14d498: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14d498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14d49c:
    // 0x14d49c: 0x8fa501d0  lw          $a1, 0x1D0($sp)
    ctx->pc = 0x14d49cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_14d4a0:
    // 0x14d4a0: 0x90a6002d  lbu         $a2, 0x2D($a1)
    ctx->pc = 0x14d4a0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 45)));
label_14d4a4:
    // 0x14d4a4: 0x30c700ff  andi        $a3, $a2, 0xFF
    ctx->pc = 0x14d4a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_14d4a8:
    // 0x14d4a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14d4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14d4ac:
    // 0x14d4ac: 0x14e20009  bne         $a3, $v0, . + 4 + (0x9 << 2)
label_14d4b0:
    if (ctx->pc == 0x14D4B0u) {
        ctx->pc = 0x14D4B4u;
        goto label_14d4b4;
    }
    ctx->pc = 0x14D4ACu;
    {
        const bool branch_taken_0x14d4ac = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x14d4ac) {
            ctx->pc = 0x14D4D4u;
            goto label_14d4d4;
        }
    }
    ctx->pc = 0x14D4B4u;
label_14d4b4:
    // 0x14d4b4: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x14d4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_14d4b8:
    // 0x14d4b8: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x14d4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_14d4bc:
    // 0x14d4bc: 0x30420700  andi        $v0, $v0, 0x700
    ctx->pc = 0x14d4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1792);
label_14d4c0:
    // 0x14d4c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_14d4c4:
    if (ctx->pc == 0x14D4C4u) {
        ctx->pc = 0x14D4C8u;
        goto label_14d4c8;
    }
    ctx->pc = 0x14D4C0u;
    {
        const bool branch_taken_0x14d4c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d4c0) {
            ctx->pc = 0x14D4D4u;
            goto label_14d4d4;
        }
    }
    ctx->pc = 0x14D4C8u;
label_14d4c8:
    // 0x14d4c8: 0x8f84ba9c  lw          $a0, -0x4564($gp)
    ctx->pc = 0x14d4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
label_14d4cc:
    // 0x14d4cc: 0xc052c38  jal         func_14B0E0
label_14d4d0:
    if (ctx->pc == 0x14D4D0u) {
        ctx->pc = 0x14D4D4u;
        goto label_14d4d4;
    }
    ctx->pc = 0x14D4CCu;
    SET_GPR_U32(ctx, 31, 0x14D4D4u);
    ctx->pc = 0x14B0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B0E0u, 0x14D4CCu, 0x14D4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D4D4u;
label_14d4d4:
    // 0x14d4d4: 0x8fa401d0  lw          $a0, 0x1D0($sp)
    ctx->pc = 0x14d4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_14d4d8:
    // 0x14d4d8: 0xc0ad964  jal         func_2B6590
label_14d4dc:
    if (ctx->pc == 0x14D4DCu) {
        ctx->pc = 0x14D4E0u;
        goto label_14d4e0;
    }
    ctx->pc = 0x14D4D8u;
    SET_GPR_U32(ctx, 31, 0x14D4E0u);
    ctx->pc = 0x2B6590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6590u, 0x14D4D8u, 0x14D4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D4E0u;
label_14d4e0:
    // 0x14d4e0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x14d4e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_14d4e4:
    // 0x14d4e4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x14d4e4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_14d4e8:
    // 0x14d4e8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x14d4e8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_14d4ec:
    // 0x14d4ec: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x14d4ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_14d4f0:
    // 0x14d4f0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x14d4f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_14d4f4:
    // 0x14d4f4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14d4f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_14d4f8:
    // 0x14d4f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14d4f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_14d4fc:
    // 0x14d4fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14d4fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_14d500:
    // 0x14d500: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14d500u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_14d504:
    // 0x14d504: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14d504u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_14d508:
    // 0x14d508: 0x27bd01e0  addiu       $sp, $sp, 0x1E0
    ctx->pc = 0x14d508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_14d50c:
    // 0x14d50c: 0x3e00008  jr          $ra
label_14d510:
    if (ctx->pc == 0x14D510u) {
        ctx->pc = 0x14D514u;
        goto label_14d514;
    }
    ctx->pc = 0x14D50Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D50Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D514u;
label_14d514:
    // 0x14d514: 0x0  nop
    ctx->pc = 0x14d514u;
    // NOP
label_14d518:
    // 0x14d518: 0x0  nop
    ctx->pc = 0x14d518u;
    // NOP
label_14d51c:
    // 0x14d51c: 0x0  nop
    ctx->pc = 0x14d51cu;
    // NOP
    ctx->pc = 0x14d520u;
}
