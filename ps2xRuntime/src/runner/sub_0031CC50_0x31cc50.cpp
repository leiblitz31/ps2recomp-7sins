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

// Function: sub_0031CC50
// Address: 0x31cc50 - 0x31d5c0
void sub_0031CC50_0x31cc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031CC50_0x31cc50");
#endif

    switch (ctx->pc) {
        case 0x31cc50u: goto label_31cc50;
        case 0x31cc54u: goto label_31cc54;
        case 0x31cc58u: goto label_31cc58;
        case 0x31cc5cu: goto label_31cc5c;
        case 0x31cc60u: goto label_31cc60;
        case 0x31cc64u: goto label_31cc64;
        case 0x31cc68u: goto label_31cc68;
        case 0x31cc6cu: goto label_31cc6c;
        case 0x31cc70u: goto label_31cc70;
        case 0x31cc74u: goto label_31cc74;
        case 0x31cc78u: goto label_31cc78;
        case 0x31cc7cu: goto label_31cc7c;
        case 0x31cc80u: goto label_31cc80;
        case 0x31cc84u: goto label_31cc84;
        case 0x31cc88u: goto label_31cc88;
        case 0x31cc8cu: goto label_31cc8c;
        case 0x31cc90u: goto label_31cc90;
        case 0x31cc94u: goto label_31cc94;
        case 0x31cc98u: goto label_31cc98;
        case 0x31cc9cu: goto label_31cc9c;
        case 0x31cca0u: goto label_31cca0;
        case 0x31cca4u: goto label_31cca4;
        case 0x31cca8u: goto label_31cca8;
        case 0x31ccacu: goto label_31ccac;
        case 0x31ccb0u: goto label_31ccb0;
        case 0x31ccb4u: goto label_31ccb4;
        case 0x31ccb8u: goto label_31ccb8;
        case 0x31ccbcu: goto label_31ccbc;
        case 0x31ccc0u: goto label_31ccc0;
        case 0x31ccc4u: goto label_31ccc4;
        case 0x31ccc8u: goto label_31ccc8;
        case 0x31ccccu: goto label_31cccc;
        case 0x31ccd0u: goto label_31ccd0;
        case 0x31ccd4u: goto label_31ccd4;
        case 0x31ccd8u: goto label_31ccd8;
        case 0x31ccdcu: goto label_31ccdc;
        case 0x31cce0u: goto label_31cce0;
        case 0x31cce4u: goto label_31cce4;
        case 0x31cce8u: goto label_31cce8;
        case 0x31ccecu: goto label_31ccec;
        case 0x31ccf0u: goto label_31ccf0;
        case 0x31ccf4u: goto label_31ccf4;
        case 0x31ccf8u: goto label_31ccf8;
        case 0x31ccfcu: goto label_31ccfc;
        case 0x31cd00u: goto label_31cd00;
        case 0x31cd04u: goto label_31cd04;
        case 0x31cd08u: goto label_31cd08;
        case 0x31cd0cu: goto label_31cd0c;
        case 0x31cd10u: goto label_31cd10;
        case 0x31cd14u: goto label_31cd14;
        case 0x31cd18u: goto label_31cd18;
        case 0x31cd1cu: goto label_31cd1c;
        case 0x31cd20u: goto label_31cd20;
        case 0x31cd24u: goto label_31cd24;
        case 0x31cd28u: goto label_31cd28;
        case 0x31cd2cu: goto label_31cd2c;
        case 0x31cd30u: goto label_31cd30;
        case 0x31cd34u: goto label_31cd34;
        case 0x31cd38u: goto label_31cd38;
        case 0x31cd3cu: goto label_31cd3c;
        case 0x31cd40u: goto label_31cd40;
        case 0x31cd44u: goto label_31cd44;
        case 0x31cd48u: goto label_31cd48;
        case 0x31cd4cu: goto label_31cd4c;
        case 0x31cd50u: goto label_31cd50;
        case 0x31cd54u: goto label_31cd54;
        case 0x31cd58u: goto label_31cd58;
        case 0x31cd5cu: goto label_31cd5c;
        case 0x31cd60u: goto label_31cd60;
        case 0x31cd64u: goto label_31cd64;
        case 0x31cd68u: goto label_31cd68;
        case 0x31cd6cu: goto label_31cd6c;
        case 0x31cd70u: goto label_31cd70;
        case 0x31cd74u: goto label_31cd74;
        case 0x31cd78u: goto label_31cd78;
        case 0x31cd7cu: goto label_31cd7c;
        case 0x31cd80u: goto label_31cd80;
        case 0x31cd84u: goto label_31cd84;
        case 0x31cd88u: goto label_31cd88;
        case 0x31cd8cu: goto label_31cd8c;
        case 0x31cd90u: goto label_31cd90;
        case 0x31cd94u: goto label_31cd94;
        case 0x31cd98u: goto label_31cd98;
        case 0x31cd9cu: goto label_31cd9c;
        case 0x31cda0u: goto label_31cda0;
        case 0x31cda4u: goto label_31cda4;
        case 0x31cda8u: goto label_31cda8;
        case 0x31cdacu: goto label_31cdac;
        case 0x31cdb0u: goto label_31cdb0;
        case 0x31cdb4u: goto label_31cdb4;
        case 0x31cdb8u: goto label_31cdb8;
        case 0x31cdbcu: goto label_31cdbc;
        case 0x31cdc0u: goto label_31cdc0;
        case 0x31cdc4u: goto label_31cdc4;
        case 0x31cdc8u: goto label_31cdc8;
        case 0x31cdccu: goto label_31cdcc;
        case 0x31cdd0u: goto label_31cdd0;
        case 0x31cdd4u: goto label_31cdd4;
        case 0x31cdd8u: goto label_31cdd8;
        case 0x31cddcu: goto label_31cddc;
        case 0x31cde0u: goto label_31cde0;
        case 0x31cde4u: goto label_31cde4;
        case 0x31cde8u: goto label_31cde8;
        case 0x31cdecu: goto label_31cdec;
        case 0x31cdf0u: goto label_31cdf0;
        case 0x31cdf4u: goto label_31cdf4;
        case 0x31cdf8u: goto label_31cdf8;
        case 0x31cdfcu: goto label_31cdfc;
        case 0x31ce00u: goto label_31ce00;
        case 0x31ce04u: goto label_31ce04;
        case 0x31ce08u: goto label_31ce08;
        case 0x31ce0cu: goto label_31ce0c;
        case 0x31ce10u: goto label_31ce10;
        case 0x31ce14u: goto label_31ce14;
        case 0x31ce18u: goto label_31ce18;
        case 0x31ce1cu: goto label_31ce1c;
        case 0x31ce20u: goto label_31ce20;
        case 0x31ce24u: goto label_31ce24;
        case 0x31ce28u: goto label_31ce28;
        case 0x31ce2cu: goto label_31ce2c;
        case 0x31ce30u: goto label_31ce30;
        case 0x31ce34u: goto label_31ce34;
        case 0x31ce38u: goto label_31ce38;
        case 0x31ce3cu: goto label_31ce3c;
        case 0x31ce40u: goto label_31ce40;
        case 0x31ce44u: goto label_31ce44;
        case 0x31ce48u: goto label_31ce48;
        case 0x31ce4cu: goto label_31ce4c;
        case 0x31ce50u: goto label_31ce50;
        case 0x31ce54u: goto label_31ce54;
        case 0x31ce58u: goto label_31ce58;
        case 0x31ce5cu: goto label_31ce5c;
        case 0x31ce60u: goto label_31ce60;
        case 0x31ce64u: goto label_31ce64;
        case 0x31ce68u: goto label_31ce68;
        case 0x31ce6cu: goto label_31ce6c;
        case 0x31ce70u: goto label_31ce70;
        case 0x31ce74u: goto label_31ce74;
        case 0x31ce78u: goto label_31ce78;
        case 0x31ce7cu: goto label_31ce7c;
        case 0x31ce80u: goto label_31ce80;
        case 0x31ce84u: goto label_31ce84;
        case 0x31ce88u: goto label_31ce88;
        case 0x31ce8cu: goto label_31ce8c;
        case 0x31ce90u: goto label_31ce90;
        case 0x31ce94u: goto label_31ce94;
        case 0x31ce98u: goto label_31ce98;
        case 0x31ce9cu: goto label_31ce9c;
        case 0x31cea0u: goto label_31cea0;
        case 0x31cea4u: goto label_31cea4;
        case 0x31cea8u: goto label_31cea8;
        case 0x31ceacu: goto label_31ceac;
        case 0x31ceb0u: goto label_31ceb0;
        case 0x31ceb4u: goto label_31ceb4;
        case 0x31ceb8u: goto label_31ceb8;
        case 0x31cebcu: goto label_31cebc;
        case 0x31cec0u: goto label_31cec0;
        case 0x31cec4u: goto label_31cec4;
        case 0x31cec8u: goto label_31cec8;
        case 0x31ceccu: goto label_31cecc;
        case 0x31ced0u: goto label_31ced0;
        case 0x31ced4u: goto label_31ced4;
        case 0x31ced8u: goto label_31ced8;
        case 0x31cedcu: goto label_31cedc;
        case 0x31cee0u: goto label_31cee0;
        case 0x31cee4u: goto label_31cee4;
        case 0x31cee8u: goto label_31cee8;
        case 0x31ceecu: goto label_31ceec;
        case 0x31cef0u: goto label_31cef0;
        case 0x31cef4u: goto label_31cef4;
        case 0x31cef8u: goto label_31cef8;
        case 0x31cefcu: goto label_31cefc;
        case 0x31cf00u: goto label_31cf00;
        case 0x31cf04u: goto label_31cf04;
        case 0x31cf08u: goto label_31cf08;
        case 0x31cf0cu: goto label_31cf0c;
        case 0x31cf10u: goto label_31cf10;
        case 0x31cf14u: goto label_31cf14;
        case 0x31cf18u: goto label_31cf18;
        case 0x31cf1cu: goto label_31cf1c;
        case 0x31cf20u: goto label_31cf20;
        case 0x31cf24u: goto label_31cf24;
        case 0x31cf28u: goto label_31cf28;
        case 0x31cf2cu: goto label_31cf2c;
        case 0x31cf30u: goto label_31cf30;
        case 0x31cf34u: goto label_31cf34;
        case 0x31cf38u: goto label_31cf38;
        case 0x31cf3cu: goto label_31cf3c;
        case 0x31cf40u: goto label_31cf40;
        case 0x31cf44u: goto label_31cf44;
        case 0x31cf48u: goto label_31cf48;
        case 0x31cf4cu: goto label_31cf4c;
        case 0x31cf50u: goto label_31cf50;
        case 0x31cf54u: goto label_31cf54;
        case 0x31cf58u: goto label_31cf58;
        case 0x31cf5cu: goto label_31cf5c;
        case 0x31cf60u: goto label_31cf60;
        case 0x31cf64u: goto label_31cf64;
        case 0x31cf68u: goto label_31cf68;
        case 0x31cf6cu: goto label_31cf6c;
        case 0x31cf70u: goto label_31cf70;
        case 0x31cf74u: goto label_31cf74;
        case 0x31cf78u: goto label_31cf78;
        case 0x31cf7cu: goto label_31cf7c;
        case 0x31cf80u: goto label_31cf80;
        case 0x31cf84u: goto label_31cf84;
        case 0x31cf88u: goto label_31cf88;
        case 0x31cf8cu: goto label_31cf8c;
        case 0x31cf90u: goto label_31cf90;
        case 0x31cf94u: goto label_31cf94;
        case 0x31cf98u: goto label_31cf98;
        case 0x31cf9cu: goto label_31cf9c;
        case 0x31cfa0u: goto label_31cfa0;
        case 0x31cfa4u: goto label_31cfa4;
        case 0x31cfa8u: goto label_31cfa8;
        case 0x31cfacu: goto label_31cfac;
        case 0x31cfb0u: goto label_31cfb0;
        case 0x31cfb4u: goto label_31cfb4;
        case 0x31cfb8u: goto label_31cfb8;
        case 0x31cfbcu: goto label_31cfbc;
        case 0x31cfc0u: goto label_31cfc0;
        case 0x31cfc4u: goto label_31cfc4;
        case 0x31cfc8u: goto label_31cfc8;
        case 0x31cfccu: goto label_31cfcc;
        case 0x31cfd0u: goto label_31cfd0;
        case 0x31cfd4u: goto label_31cfd4;
        case 0x31cfd8u: goto label_31cfd8;
        case 0x31cfdcu: goto label_31cfdc;
        case 0x31cfe0u: goto label_31cfe0;
        case 0x31cfe4u: goto label_31cfe4;
        case 0x31cfe8u: goto label_31cfe8;
        case 0x31cfecu: goto label_31cfec;
        case 0x31cff0u: goto label_31cff0;
        case 0x31cff4u: goto label_31cff4;
        case 0x31cff8u: goto label_31cff8;
        case 0x31cffcu: goto label_31cffc;
        case 0x31d000u: goto label_31d000;
        case 0x31d004u: goto label_31d004;
        case 0x31d008u: goto label_31d008;
        case 0x31d00cu: goto label_31d00c;
        case 0x31d010u: goto label_31d010;
        case 0x31d014u: goto label_31d014;
        case 0x31d018u: goto label_31d018;
        case 0x31d01cu: goto label_31d01c;
        case 0x31d020u: goto label_31d020;
        case 0x31d024u: goto label_31d024;
        case 0x31d028u: goto label_31d028;
        case 0x31d02cu: goto label_31d02c;
        case 0x31d030u: goto label_31d030;
        case 0x31d034u: goto label_31d034;
        case 0x31d038u: goto label_31d038;
        case 0x31d03cu: goto label_31d03c;
        case 0x31d040u: goto label_31d040;
        case 0x31d044u: goto label_31d044;
        case 0x31d048u: goto label_31d048;
        case 0x31d04cu: goto label_31d04c;
        case 0x31d050u: goto label_31d050;
        case 0x31d054u: goto label_31d054;
        case 0x31d058u: goto label_31d058;
        case 0x31d05cu: goto label_31d05c;
        case 0x31d060u: goto label_31d060;
        case 0x31d064u: goto label_31d064;
        case 0x31d068u: goto label_31d068;
        case 0x31d06cu: goto label_31d06c;
        case 0x31d070u: goto label_31d070;
        case 0x31d074u: goto label_31d074;
        case 0x31d078u: goto label_31d078;
        case 0x31d07cu: goto label_31d07c;
        case 0x31d080u: goto label_31d080;
        case 0x31d084u: goto label_31d084;
        case 0x31d088u: goto label_31d088;
        case 0x31d08cu: goto label_31d08c;
        case 0x31d090u: goto label_31d090;
        case 0x31d094u: goto label_31d094;
        case 0x31d098u: goto label_31d098;
        case 0x31d09cu: goto label_31d09c;
        case 0x31d0a0u: goto label_31d0a0;
        case 0x31d0a4u: goto label_31d0a4;
        case 0x31d0a8u: goto label_31d0a8;
        case 0x31d0acu: goto label_31d0ac;
        case 0x31d0b0u: goto label_31d0b0;
        case 0x31d0b4u: goto label_31d0b4;
        case 0x31d0b8u: goto label_31d0b8;
        case 0x31d0bcu: goto label_31d0bc;
        case 0x31d0c0u: goto label_31d0c0;
        case 0x31d0c4u: goto label_31d0c4;
        case 0x31d0c8u: goto label_31d0c8;
        case 0x31d0ccu: goto label_31d0cc;
        case 0x31d0d0u: goto label_31d0d0;
        case 0x31d0d4u: goto label_31d0d4;
        case 0x31d0d8u: goto label_31d0d8;
        case 0x31d0dcu: goto label_31d0dc;
        case 0x31d0e0u: goto label_31d0e0;
        case 0x31d0e4u: goto label_31d0e4;
        case 0x31d0e8u: goto label_31d0e8;
        case 0x31d0ecu: goto label_31d0ec;
        case 0x31d0f0u: goto label_31d0f0;
        case 0x31d0f4u: goto label_31d0f4;
        case 0x31d0f8u: goto label_31d0f8;
        case 0x31d0fcu: goto label_31d0fc;
        case 0x31d100u: goto label_31d100;
        case 0x31d104u: goto label_31d104;
        case 0x31d108u: goto label_31d108;
        case 0x31d10cu: goto label_31d10c;
        case 0x31d110u: goto label_31d110;
        case 0x31d114u: goto label_31d114;
        case 0x31d118u: goto label_31d118;
        case 0x31d11cu: goto label_31d11c;
        case 0x31d120u: goto label_31d120;
        case 0x31d124u: goto label_31d124;
        case 0x31d128u: goto label_31d128;
        case 0x31d12cu: goto label_31d12c;
        case 0x31d130u: goto label_31d130;
        case 0x31d134u: goto label_31d134;
        case 0x31d138u: goto label_31d138;
        case 0x31d13cu: goto label_31d13c;
        case 0x31d140u: goto label_31d140;
        case 0x31d144u: goto label_31d144;
        case 0x31d148u: goto label_31d148;
        case 0x31d14cu: goto label_31d14c;
        case 0x31d150u: goto label_31d150;
        case 0x31d154u: goto label_31d154;
        case 0x31d158u: goto label_31d158;
        case 0x31d15cu: goto label_31d15c;
        case 0x31d160u: goto label_31d160;
        case 0x31d164u: goto label_31d164;
        case 0x31d168u: goto label_31d168;
        case 0x31d16cu: goto label_31d16c;
        case 0x31d170u: goto label_31d170;
        case 0x31d174u: goto label_31d174;
        case 0x31d178u: goto label_31d178;
        case 0x31d17cu: goto label_31d17c;
        case 0x31d180u: goto label_31d180;
        case 0x31d184u: goto label_31d184;
        case 0x31d188u: goto label_31d188;
        case 0x31d18cu: goto label_31d18c;
        case 0x31d190u: goto label_31d190;
        case 0x31d194u: goto label_31d194;
        case 0x31d198u: goto label_31d198;
        case 0x31d19cu: goto label_31d19c;
        case 0x31d1a0u: goto label_31d1a0;
        case 0x31d1a4u: goto label_31d1a4;
        case 0x31d1a8u: goto label_31d1a8;
        case 0x31d1acu: goto label_31d1ac;
        case 0x31d1b0u: goto label_31d1b0;
        case 0x31d1b4u: goto label_31d1b4;
        case 0x31d1b8u: goto label_31d1b8;
        case 0x31d1bcu: goto label_31d1bc;
        case 0x31d1c0u: goto label_31d1c0;
        case 0x31d1c4u: goto label_31d1c4;
        case 0x31d1c8u: goto label_31d1c8;
        case 0x31d1ccu: goto label_31d1cc;
        case 0x31d1d0u: goto label_31d1d0;
        case 0x31d1d4u: goto label_31d1d4;
        case 0x31d1d8u: goto label_31d1d8;
        case 0x31d1dcu: goto label_31d1dc;
        case 0x31d1e0u: goto label_31d1e0;
        case 0x31d1e4u: goto label_31d1e4;
        case 0x31d1e8u: goto label_31d1e8;
        case 0x31d1ecu: goto label_31d1ec;
        case 0x31d1f0u: goto label_31d1f0;
        case 0x31d1f4u: goto label_31d1f4;
        case 0x31d1f8u: goto label_31d1f8;
        case 0x31d1fcu: goto label_31d1fc;
        case 0x31d200u: goto label_31d200;
        case 0x31d204u: goto label_31d204;
        case 0x31d208u: goto label_31d208;
        case 0x31d20cu: goto label_31d20c;
        case 0x31d210u: goto label_31d210;
        case 0x31d214u: goto label_31d214;
        case 0x31d218u: goto label_31d218;
        case 0x31d21cu: goto label_31d21c;
        case 0x31d220u: goto label_31d220;
        case 0x31d224u: goto label_31d224;
        case 0x31d228u: goto label_31d228;
        case 0x31d22cu: goto label_31d22c;
        case 0x31d230u: goto label_31d230;
        case 0x31d234u: goto label_31d234;
        case 0x31d238u: goto label_31d238;
        case 0x31d23cu: goto label_31d23c;
        case 0x31d240u: goto label_31d240;
        case 0x31d244u: goto label_31d244;
        case 0x31d248u: goto label_31d248;
        case 0x31d24cu: goto label_31d24c;
        case 0x31d250u: goto label_31d250;
        case 0x31d254u: goto label_31d254;
        case 0x31d258u: goto label_31d258;
        case 0x31d25cu: goto label_31d25c;
        case 0x31d260u: goto label_31d260;
        case 0x31d264u: goto label_31d264;
        case 0x31d268u: goto label_31d268;
        case 0x31d26cu: goto label_31d26c;
        case 0x31d270u: goto label_31d270;
        case 0x31d274u: goto label_31d274;
        case 0x31d278u: goto label_31d278;
        case 0x31d27cu: goto label_31d27c;
        case 0x31d280u: goto label_31d280;
        case 0x31d284u: goto label_31d284;
        case 0x31d288u: goto label_31d288;
        case 0x31d28cu: goto label_31d28c;
        case 0x31d290u: goto label_31d290;
        case 0x31d294u: goto label_31d294;
        case 0x31d298u: goto label_31d298;
        case 0x31d29cu: goto label_31d29c;
        case 0x31d2a0u: goto label_31d2a0;
        case 0x31d2a4u: goto label_31d2a4;
        case 0x31d2a8u: goto label_31d2a8;
        case 0x31d2acu: goto label_31d2ac;
        case 0x31d2b0u: goto label_31d2b0;
        case 0x31d2b4u: goto label_31d2b4;
        case 0x31d2b8u: goto label_31d2b8;
        case 0x31d2bcu: goto label_31d2bc;
        case 0x31d2c0u: goto label_31d2c0;
        case 0x31d2c4u: goto label_31d2c4;
        case 0x31d2c8u: goto label_31d2c8;
        case 0x31d2ccu: goto label_31d2cc;
        case 0x31d2d0u: goto label_31d2d0;
        case 0x31d2d4u: goto label_31d2d4;
        case 0x31d2d8u: goto label_31d2d8;
        case 0x31d2dcu: goto label_31d2dc;
        case 0x31d2e0u: goto label_31d2e0;
        case 0x31d2e4u: goto label_31d2e4;
        case 0x31d2e8u: goto label_31d2e8;
        case 0x31d2ecu: goto label_31d2ec;
        case 0x31d2f0u: goto label_31d2f0;
        case 0x31d2f4u: goto label_31d2f4;
        case 0x31d2f8u: goto label_31d2f8;
        case 0x31d2fcu: goto label_31d2fc;
        case 0x31d300u: goto label_31d300;
        case 0x31d304u: goto label_31d304;
        case 0x31d308u: goto label_31d308;
        case 0x31d30cu: goto label_31d30c;
        case 0x31d310u: goto label_31d310;
        case 0x31d314u: goto label_31d314;
        case 0x31d318u: goto label_31d318;
        case 0x31d31cu: goto label_31d31c;
        case 0x31d320u: goto label_31d320;
        case 0x31d324u: goto label_31d324;
        case 0x31d328u: goto label_31d328;
        case 0x31d32cu: goto label_31d32c;
        case 0x31d330u: goto label_31d330;
        case 0x31d334u: goto label_31d334;
        case 0x31d338u: goto label_31d338;
        case 0x31d33cu: goto label_31d33c;
        case 0x31d340u: goto label_31d340;
        case 0x31d344u: goto label_31d344;
        case 0x31d348u: goto label_31d348;
        case 0x31d34cu: goto label_31d34c;
        case 0x31d350u: goto label_31d350;
        case 0x31d354u: goto label_31d354;
        case 0x31d358u: goto label_31d358;
        case 0x31d35cu: goto label_31d35c;
        case 0x31d360u: goto label_31d360;
        case 0x31d364u: goto label_31d364;
        case 0x31d368u: goto label_31d368;
        case 0x31d36cu: goto label_31d36c;
        case 0x31d370u: goto label_31d370;
        case 0x31d374u: goto label_31d374;
        case 0x31d378u: goto label_31d378;
        case 0x31d37cu: goto label_31d37c;
        case 0x31d380u: goto label_31d380;
        case 0x31d384u: goto label_31d384;
        case 0x31d388u: goto label_31d388;
        case 0x31d38cu: goto label_31d38c;
        case 0x31d390u: goto label_31d390;
        case 0x31d394u: goto label_31d394;
        case 0x31d398u: goto label_31d398;
        case 0x31d39cu: goto label_31d39c;
        case 0x31d3a0u: goto label_31d3a0;
        case 0x31d3a4u: goto label_31d3a4;
        case 0x31d3a8u: goto label_31d3a8;
        case 0x31d3acu: goto label_31d3ac;
        case 0x31d3b0u: goto label_31d3b0;
        case 0x31d3b4u: goto label_31d3b4;
        case 0x31d3b8u: goto label_31d3b8;
        case 0x31d3bcu: goto label_31d3bc;
        case 0x31d3c0u: goto label_31d3c0;
        case 0x31d3c4u: goto label_31d3c4;
        case 0x31d3c8u: goto label_31d3c8;
        case 0x31d3ccu: goto label_31d3cc;
        case 0x31d3d0u: goto label_31d3d0;
        case 0x31d3d4u: goto label_31d3d4;
        case 0x31d3d8u: goto label_31d3d8;
        case 0x31d3dcu: goto label_31d3dc;
        case 0x31d3e0u: goto label_31d3e0;
        case 0x31d3e4u: goto label_31d3e4;
        case 0x31d3e8u: goto label_31d3e8;
        case 0x31d3ecu: goto label_31d3ec;
        case 0x31d3f0u: goto label_31d3f0;
        case 0x31d3f4u: goto label_31d3f4;
        case 0x31d3f8u: goto label_31d3f8;
        case 0x31d3fcu: goto label_31d3fc;
        case 0x31d400u: goto label_31d400;
        case 0x31d404u: goto label_31d404;
        case 0x31d408u: goto label_31d408;
        case 0x31d40cu: goto label_31d40c;
        case 0x31d410u: goto label_31d410;
        case 0x31d414u: goto label_31d414;
        case 0x31d418u: goto label_31d418;
        case 0x31d41cu: goto label_31d41c;
        case 0x31d420u: goto label_31d420;
        case 0x31d424u: goto label_31d424;
        case 0x31d428u: goto label_31d428;
        case 0x31d42cu: goto label_31d42c;
        case 0x31d430u: goto label_31d430;
        case 0x31d434u: goto label_31d434;
        case 0x31d438u: goto label_31d438;
        case 0x31d43cu: goto label_31d43c;
        case 0x31d440u: goto label_31d440;
        case 0x31d444u: goto label_31d444;
        case 0x31d448u: goto label_31d448;
        case 0x31d44cu: goto label_31d44c;
        case 0x31d450u: goto label_31d450;
        case 0x31d454u: goto label_31d454;
        case 0x31d458u: goto label_31d458;
        case 0x31d45cu: goto label_31d45c;
        case 0x31d460u: goto label_31d460;
        case 0x31d464u: goto label_31d464;
        case 0x31d468u: goto label_31d468;
        case 0x31d46cu: goto label_31d46c;
        case 0x31d470u: goto label_31d470;
        case 0x31d474u: goto label_31d474;
        case 0x31d478u: goto label_31d478;
        case 0x31d47cu: goto label_31d47c;
        case 0x31d480u: goto label_31d480;
        case 0x31d484u: goto label_31d484;
        case 0x31d488u: goto label_31d488;
        case 0x31d48cu: goto label_31d48c;
        case 0x31d490u: goto label_31d490;
        case 0x31d494u: goto label_31d494;
        case 0x31d498u: goto label_31d498;
        case 0x31d49cu: goto label_31d49c;
        case 0x31d4a0u: goto label_31d4a0;
        case 0x31d4a4u: goto label_31d4a4;
        case 0x31d4a8u: goto label_31d4a8;
        case 0x31d4acu: goto label_31d4ac;
        case 0x31d4b0u: goto label_31d4b0;
        case 0x31d4b4u: goto label_31d4b4;
        case 0x31d4b8u: goto label_31d4b8;
        case 0x31d4bcu: goto label_31d4bc;
        case 0x31d4c0u: goto label_31d4c0;
        case 0x31d4c4u: goto label_31d4c4;
        case 0x31d4c8u: goto label_31d4c8;
        case 0x31d4ccu: goto label_31d4cc;
        case 0x31d4d0u: goto label_31d4d0;
        case 0x31d4d4u: goto label_31d4d4;
        case 0x31d4d8u: goto label_31d4d8;
        case 0x31d4dcu: goto label_31d4dc;
        case 0x31d4e0u: goto label_31d4e0;
        case 0x31d4e4u: goto label_31d4e4;
        case 0x31d4e8u: goto label_31d4e8;
        case 0x31d4ecu: goto label_31d4ec;
        case 0x31d4f0u: goto label_31d4f0;
        case 0x31d4f4u: goto label_31d4f4;
        case 0x31d4f8u: goto label_31d4f8;
        case 0x31d4fcu: goto label_31d4fc;
        case 0x31d500u: goto label_31d500;
        case 0x31d504u: goto label_31d504;
        case 0x31d508u: goto label_31d508;
        case 0x31d50cu: goto label_31d50c;
        case 0x31d510u: goto label_31d510;
        case 0x31d514u: goto label_31d514;
        case 0x31d518u: goto label_31d518;
        case 0x31d51cu: goto label_31d51c;
        case 0x31d520u: goto label_31d520;
        case 0x31d524u: goto label_31d524;
        case 0x31d528u: goto label_31d528;
        case 0x31d52cu: goto label_31d52c;
        case 0x31d530u: goto label_31d530;
        case 0x31d534u: goto label_31d534;
        case 0x31d538u: goto label_31d538;
        case 0x31d53cu: goto label_31d53c;
        case 0x31d540u: goto label_31d540;
        case 0x31d544u: goto label_31d544;
        case 0x31d548u: goto label_31d548;
        case 0x31d54cu: goto label_31d54c;
        case 0x31d550u: goto label_31d550;
        case 0x31d554u: goto label_31d554;
        case 0x31d558u: goto label_31d558;
        case 0x31d55cu: goto label_31d55c;
        case 0x31d560u: goto label_31d560;
        case 0x31d564u: goto label_31d564;
        case 0x31d568u: goto label_31d568;
        case 0x31d56cu: goto label_31d56c;
        case 0x31d570u: goto label_31d570;
        case 0x31d574u: goto label_31d574;
        case 0x31d578u: goto label_31d578;
        case 0x31d57cu: goto label_31d57c;
        case 0x31d580u: goto label_31d580;
        case 0x31d584u: goto label_31d584;
        case 0x31d588u: goto label_31d588;
        case 0x31d58cu: goto label_31d58c;
        case 0x31d590u: goto label_31d590;
        case 0x31d594u: goto label_31d594;
        case 0x31d598u: goto label_31d598;
        case 0x31d59cu: goto label_31d59c;
        case 0x31d5a0u: goto label_31d5a0;
        case 0x31d5a4u: goto label_31d5a4;
        case 0x31d5a8u: goto label_31d5a8;
        case 0x31d5acu: goto label_31d5ac;
        case 0x31d5b0u: goto label_31d5b0;
        case 0x31d5b4u: goto label_31d5b4;
        case 0x31d5b8u: goto label_31d5b8;
        case 0x31d5bcu: goto label_31d5bc;
        default: break;
    }

    ctx->pc = 0x31cc50u;

label_31cc50:
    // 0x31cc50: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x31cc50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_31cc54:
    // 0x31cc54: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x31cc54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
label_31cc58:
    // 0x31cc58: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x31cc58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
label_31cc5c:
    // 0x31cc5c: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x31cc5cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
label_31cc60:
    // 0x31cc60: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x31cc60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
label_31cc64:
    // 0x31cc64: 0x2603e880  addiu       $v1, $s0, -0x1780
    ctx->pc = 0x31cc64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
label_31cc68:
    // 0x31cc68: 0xe7b40140  swc1        $f20, 0x140($sp)
    ctx->pc = 0x31cc68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_31cc6c:
    // 0x31cc6c: 0xafa50054  sw          $a1, 0x54($sp)
    ctx->pc = 0x31cc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 5));
label_31cc70:
    // 0x31cc70: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x31cc70u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_31cc74:
    // 0x31cc74: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x31cc74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
label_31cc78:
    // 0x31cc78: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x31cc78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_31cc7c:
    // 0x31cc7c: 0x7fb30100  sq          $s3, 0x100($sp)
    ctx->pc = 0x31cc7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 19));
label_31cc80:
    // 0x31cc80: 0x34a50122  ori         $a1, $a1, 0x122
    ctx->pc = 0x31cc80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)290);
label_31cc84:
    // 0x31cc84: 0x7fb400f0  sq          $s4, 0xF0($sp)
    ctx->pc = 0x31cc84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 20));
label_31cc88:
    // 0x31cc88: 0x7fb500e0  sq          $s5, 0xE0($sp)
    ctx->pc = 0x31cc88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 21));
label_31cc8c:
    // 0x31cc8c: 0x7fb600d0  sq          $s6, 0xD0($sp)
    ctx->pc = 0x31cc8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 22));
label_31cc90:
    // 0x31cc90: 0x7fb700c0  sq          $s7, 0xC0($sp)
    ctx->pc = 0x31cc90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 23));
label_31cc94:
    // 0x31cc94: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x31cc94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
label_31cc98:
    // 0x31cc98: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x31cc98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_31cc9c:
    // 0x31cc9c: 0x8fb10150  lw          $s1, 0x150($sp)
    ctx->pc = 0x31cc9cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_31cca0:
    // 0x31cca0: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x31cca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_31cca4:
    // 0x31cca4: 0xafa60058  sw          $a2, 0x58($sp)
    ctx->pc = 0x31cca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 6));
label_31cca8:
    // 0x31cca8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31cca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31ccac:
    // 0x31ccac: 0xafa7005c  sw          $a3, 0x5C($sp)
    ctx->pc = 0x31ccacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 7));
label_31ccb0:
    // 0x31ccb0: 0xafa80060  sw          $t0, 0x60($sp)
    ctx->pc = 0x31ccb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 8));
label_31ccb4:
    // 0x31ccb4: 0xafa90064  sw          $t1, 0x64($sp)
    ctx->pc = 0x31ccb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 9));
label_31ccb8:
    // 0x31ccb8: 0xafaa0068  sw          $t2, 0x68($sp)
    ctx->pc = 0x31ccb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 10));
label_31ccbc:
    // 0x31ccbc: 0xafab006c  sw          $t3, 0x6C($sp)
    ctx->pc = 0x31ccbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 11));
label_31ccc0:
    // 0x31ccc0: 0x40f809  jalr        $v0
label_31ccc4:
    if (ctx->pc == 0x31CCC4u) {
        ctx->pc = 0x31CCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CCC0u;
        // 0x31ccc4: 0x8fb20158  lw          $s2, 0x158($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CCC8u;
        goto label_31ccc8;
    }
    ctx->pc = 0x31CCC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31CCC8u);
        ctx->pc = 0x31CCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CCC0u;
        // 0x31ccc4: 0x8fb20158  lw          $s2, 0x158($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31CCC0u, 0x31CCC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31CCC8u;
label_31ccc8:
    // 0x31ccc8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_31cccc:
    if (ctx->pc == 0x31CCCCu) {
        ctx->pc = 0x31CCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CCC8u;
        // 0x31cccc: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CCD0u;
        goto label_31ccd0;
    }
    ctx->pc = 0x31CCC8u;
    {
        const bool branch_taken_0x31ccc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31CCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CCC8u;
        // 0x31cccc: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ccc8) {
            ctx->pc = 0x31CCF8u;
            goto label_31ccf8;
        }
    }
    ctx->pc = 0x31CCD0u;
label_31ccd0:
    // 0x31ccd0: 0x24020122  addiu       $v0, $zero, 0x122
    ctx->pc = 0x31ccd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
label_31ccd4:
    // 0x31ccd4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x31ccd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_31ccd8:
    // 0x31ccd8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x31ccd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_31ccdc:
    // 0x31ccdc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x31ccdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31cce0:
    // 0x31cce0: 0xc1035f6  jal         func_40D7D8
label_31cce4:
    if (ctx->pc == 0x31CCE4u) {
        ctx->pc = 0x31CCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CCE0u;
        // 0x31cce4: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CCE8u;
        goto label_31cce8;
    }
    ctx->pc = 0x31CCE0u;
    SET_GPR_U32(ctx, 31, 0x31CCE8u);
    ctx->pc = 0x31CCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CCE0u;
    // 0x31cce4: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x31CCE0u, 0x31CCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CCE8u;
label_31cce8:
    // 0x31cce8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31cce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_31ccec:
    // 0x31ccec: 0x100000f1  b           . + 4 + (0xF1 << 2)
label_31ccf0:
    if (ctx->pc == 0x31CCF0u) {
        ctx->pc = 0x31CCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CCECu;
        // 0x31ccf0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CCF4u;
        goto label_31ccf4;
    }
    ctx->pc = 0x31CCECu;
    {
        const bool branch_taken_0x31ccec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CCECu;
        // 0x31ccf0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ccec) {
            ctx->pc = 0x31D0B4u;
            goto label_31d0b4;
        }
    }
    ctx->pc = 0x31CCF4u;
label_31ccf4:
    // 0x31ccf4: 0x0  nop
    ctx->pc = 0x31ccf4u;
    // NOP
label_31ccf8:
    // 0x31ccf8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x31ccf8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31ccfc:
    // 0x31ccfc: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x31ccfcu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31cd00:
    // 0x31cd00: 0x122000cc  beqz        $s1, . + 4 + (0xCC << 2)
label_31cd04:
    if (ctx->pc == 0x31CD04u) {
        ctx->pc = 0x31CD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CD00u;
        // 0x31cd04: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CD08u;
        goto label_31cd08;
    }
    ctx->pc = 0x31CD00u;
    {
        const bool branch_taken_0x31cd00 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CD00u;
        // 0x31cd04: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cd00) {
            ctx->pc = 0x31D034u;
            goto label_31d034;
        }
    }
    ctx->pc = 0x31CD08u;
label_31cd08:
    // 0x31cd08: 0x32420004  andi        $v0, $s2, 0x4
    ctx->pc = 0x31cd08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
label_31cd0c:
    // 0x31cd0c: 0x32430002  andi        $v1, $s2, 0x2
    ctx->pc = 0x31cd0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
label_31cd10:
    // 0x31cd10: 0x32440010  andi        $a0, $s2, 0x10
    ctx->pc = 0x31cd10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16);
label_31cd14:
    // 0x31cd14: 0xc7858234  lwc1        $f5, -0x7DCC($gp)
    ctx->pc = 0x31cd14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_31cd18:
    // 0x31cd18: 0x32520008  andi        $s2, $s2, 0x8
    ctx->pc = 0x31cd18u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)8);
label_31cd1c:
    // 0x31cd1c: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x31cd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
label_31cd20:
    // 0x31cd20: 0xc7848238  lwc1        $f4, -0x7DC8($gp)
    ctx->pc = 0x31cd20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_31cd24:
    // 0x31cd24: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x31cd24u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31cd28:
    // 0x31cd28: 0xafa3007c  sw          $v1, 0x7C($sp)
    ctx->pc = 0x31cd28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 3));
label_31cd2c:
    // 0x31cd2c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x31cd2cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31cd30:
    // 0x31cd30: 0xafa40088  sw          $a0, 0x88($sp)
    ctx->pc = 0x31cd30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 4));
label_31cd34:
    // 0x31cd34: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x31cd34u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31cd38:
    // 0x31cd38: 0xafb20084  sw          $s2, 0x84($sp)
    ctx->pc = 0x31cd38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 18));
label_31cd3c:
    // 0x31cd3c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x31cd3cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31cd40:
    // 0x31cd40: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x31cd40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
label_31cd44:
    // 0x31cd44: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x31cd44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31cd48:
    // 0x31cd48: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x31cd48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
label_31cd4c:
    // 0x31cd4c: 0xc82d  daddu       $t9, $zero, $zero
    ctx->pc = 0x31cd4cu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31cd50:
    // 0x31cd50: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x31cd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_31cd54:
    // 0x31cd54: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x31cd54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_31cd58:
    // 0x31cd58: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x31cd58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_31cd5c:
    // 0x31cd5c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x31cd5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31cd60:
    // 0x31cd60: 0x8fa4008c  lw          $a0, 0x8C($sp)
    ctx->pc = 0x31cd60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_31cd64:
    // 0x31cd64: 0x708021  addu        $s0, $v1, $s0
    ctx->pc = 0x31cd64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_31cd68:
    // 0x31cd68: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x31cd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_31cd6c:
    // 0x31cd6c: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x31cd6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_31cd70:
    // 0x31cd70: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x31cd70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_31cd74:
    // 0x31cd74: 0x826821  addu        $t5, $a0, $v0
    ctx->pc = 0x31cd74u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_31cd78:
    // 0x31cd78: 0xafb00074  sw          $s0, 0x74($sp)
    ctx->pc = 0x31cd78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 16));
label_31cd7c:
    // 0x31cd7c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x31cd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_31cd80:
    // 0x31cd80: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x31cd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_31cd84:
    // 0x31cd84: 0x646021  addu        $t4, $v1, $a0
    ctx->pc = 0x31cd84u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_31cd88:
    // 0x31cd88: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x31cd88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_31cd8c:
    // 0x31cd8c: 0x3c25821  addu        $t3, $fp, $v0
    ctx->pc = 0x31cd8cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_31cd90:
    // 0x31cd90: 0x8fa40064  lw          $a0, 0x64($sp)
    ctx->pc = 0x31cd90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_31cd94:
    // 0x31cd94: 0x2e35021  addu        $t2, $s7, $v1
    ctx->pc = 0x31cd94u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
label_31cd98:
    // 0x31cd98: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x31cd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_31cd9c:
    // 0x31cd9c: 0x2c44821  addu        $t1, $s6, $a0
    ctx->pc = 0x31cd9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
label_31cda0:
    // 0x31cda0: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x31cda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_31cda4:
    // 0x31cda4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x31cda4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_31cda8:
    // 0x31cda8: 0x2a24021  addu        $t0, $s5, $v0
    ctx->pc = 0x31cda8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_31cdac:
    // 0x31cdac: 0x2837821  addu        $t7, $s4, $v1
    ctx->pc = 0x31cdacu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_31cdb0:
    // 0x31cdb0: 0x3247021  addu        $t6, $t9, $a0
    ctx->pc = 0x31cdb0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 4)));
label_31cdb4:
    // 0x31cdb4: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x31cdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_31cdb8:
    // 0x31cdb8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_31cdbc:
    if (ctx->pc == 0x31CDBCu) {
        ctx->pc = 0x31CDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CDB8u;
        // 0x31cdbc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CDC0u;
        goto label_31cdc0;
    }
    ctx->pc = 0x31CDB8u;
    {
        const bool branch_taken_0x31cdb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CDB8u;
        // 0x31cdbc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cdb8) {
            ctx->pc = 0x31CE20u;
            goto label_31ce20;
        }
    }
    ctx->pc = 0x31CDC0u;
label_31cdc0:
    // 0x31cdc0: 0xc5800000  lwc1        $f0, 0x0($t4)
    ctx->pc = 0x31cdc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31cdc4:
    // 0x31cdc4: 0xc5a20000  lwc1        $f2, 0x0($t5)
    ctx->pc = 0x31cdc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_31cdc8:
    // 0x31cdc8: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x31cdc8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_31cdcc:
    // 0x31cdcc: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x31cdccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_31cdd0:
    // 0x31cdd0: 0xc5800004  lwc1        $f0, 0x4($t4)
    ctx->pc = 0x31cdd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31cdd4:
    // 0x31cdd4: 0xc5a30004  lwc1        $f3, 0x4($t5)
    ctx->pc = 0x31cdd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_31cdd8:
    // 0x31cdd8: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x31cdd8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_31cddc:
    // 0x31cddc: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x31cddcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_31cde0:
    // 0x31cde0: 0xc5a10008  lwc1        $f1, 0x8($t5)
    ctx->pc = 0x31cde0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31cde4:
    // 0x31cde4: 0xc5800008  lwc1        $f0, 0x8($t4)
    ctx->pc = 0x31cde4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31cde8:
    // 0x31cde8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x31cde8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_31cdec:
    // 0x31cdec: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x31cdecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_31cdf0:
    // 0x31cdf0: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x31cdf0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_31cdf4:
    // 0x31cdf4: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x31cdf4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_31cdf8:
    // 0x31cdf8: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x31cdf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_31cdfc:
    // 0x31cdfc: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x31cdfcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_31ce00:
    // 0x31ce00: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x31ce00u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_31ce04:
    // 0x31ce04: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x31ce04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_31ce08:
    // 0x31ce08: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x31ce08u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_31ce0c:
    // 0x31ce0c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x31ce0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31ce10:
    // 0x31ce10: 0x0  nop
    ctx->pc = 0x31ce10u;
    // NOP
label_31ce14:
    // 0x31ce14: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_31ce18:
    if (ctx->pc == 0x31CE18u) {
        ctx->pc = 0x31CE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CE14u;
        // 0x31ce18: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CE1Cu;
        goto label_31ce1c;
    }
    ctx->pc = 0x31CE14u;
    {
        const bool branch_taken_0x31ce14 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x31CE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CE14u;
        // 0x31ce18: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ce14) {
            ctx->pc = 0x31CE20u;
            goto label_31ce20;
        }
    }
    ctx->pc = 0x31CE1Cu;
label_31ce1c:
    // 0x31ce1c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31ce1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31ce20:
    // 0x31ce20: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x31ce20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_31ce24:
    // 0x31ce24: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_31ce28:
    if (ctx->pc == 0x31CE28u) {
        ctx->pc = 0x31CE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CE24u;
        // 0x31ce28: 0x8fa40084  lw          $a0, 0x84($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CE2Cu;
        goto label_31ce2c;
    }
    ctx->pc = 0x31CE24u;
    {
        const bool branch_taken_0x31ce24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CE24u;
        // 0x31ce28: 0x8fa40084  lw          $a0, 0x84($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ce24) {
            ctx->pc = 0x31CE94u;
            goto label_31ce94;
        }
    }
    ctx->pc = 0x31CE2Cu;
label_31ce2c:
    // 0x31ce2c: 0x14e00019  bnez        $a3, . + 4 + (0x19 << 2)
label_31ce30:
    if (ctx->pc == 0x31CE30u) {
        ctx->pc = 0x31CE34u;
        goto label_31ce34;
    }
    ctx->pc = 0x31CE2Cu;
    {
        const bool branch_taken_0x31ce2c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x31ce2c) {
            ctx->pc = 0x31CE94u;
            goto label_31ce94;
        }
    }
    ctx->pc = 0x31CE34u;
label_31ce34:
    // 0x31ce34: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x31ce34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31ce38:
    // 0x31ce38: 0xc5620000  lwc1        $f2, 0x0($t3)
    ctx->pc = 0x31ce38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_31ce3c:
    // 0x31ce3c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x31ce3cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_31ce40:
    // 0x31ce40: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x31ce40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_31ce44:
    // 0x31ce44: 0xc5400004  lwc1        $f0, 0x4($t2)
    ctx->pc = 0x31ce44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31ce48:
    // 0x31ce48: 0xc5630004  lwc1        $f3, 0x4($t3)
    ctx->pc = 0x31ce48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_31ce4c:
    // 0x31ce4c: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x31ce4cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_31ce50:
    // 0x31ce50: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x31ce50u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_31ce54:
    // 0x31ce54: 0xc5610008  lwc1        $f1, 0x8($t3)
    ctx->pc = 0x31ce54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31ce58:
    // 0x31ce58: 0xc5400008  lwc1        $f0, 0x8($t2)
    ctx->pc = 0x31ce58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31ce5c:
    // 0x31ce5c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x31ce5cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_31ce60:
    // 0x31ce60: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x31ce60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_31ce64:
    // 0x31ce64: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x31ce64u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_31ce68:
    // 0x31ce68: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x31ce68u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_31ce6c:
    // 0x31ce6c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x31ce6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_31ce70:
    // 0x31ce70: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x31ce70u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_31ce74:
    // 0x31ce74: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x31ce74u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_31ce78:
    // 0x31ce78: 0x46022034  c.lt.s      $f4, $f2
    ctx->pc = 0x31ce78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31ce7c:
    // 0x31ce7c: 0x0  nop
    ctx->pc = 0x31ce7cu;
    // NOP
label_31ce80:
    // 0x31ce80: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_31ce84:
    if (ctx->pc == 0x31CE84u) {
        ctx->pc = 0x31CE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CE80u;
        // 0x31ce84: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CE88u;
        goto label_31ce88;
    }
    ctx->pc = 0x31CE80u;
    {
        const bool branch_taken_0x31ce80 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x31CE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CE80u;
        // 0x31ce84: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ce80) {
            ctx->pc = 0x31CE90u;
            goto label_31ce90;
        }
    }
    ctx->pc = 0x31CE88u;
label_31ce88:
    // 0x31ce88: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31ce88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31ce8c:
    // 0x31ce8c: 0x0  nop
    ctx->pc = 0x31ce8cu;
    // NOP
label_31ce90:
    // 0x31ce90: 0x8fa40084  lw          $a0, 0x84($sp)
    ctx->pc = 0x31ce90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_31ce94:
    // 0x31ce94: 0x10800020  beqz        $a0, . + 4 + (0x20 << 2)
label_31ce98:
    if (ctx->pc == 0x31CE98u) {
        ctx->pc = 0x31CE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CE94u;
        // 0x31ce98: 0x8fa20080  lw          $v0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CE9Cu;
        goto label_31ce9c;
    }
    ctx->pc = 0x31CE94u;
    {
        const bool branch_taken_0x31ce94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CE94u;
        // 0x31ce98: 0x8fa20080  lw          $v0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ce94) {
            ctx->pc = 0x31CF18u;
            goto label_31cf18;
        }
    }
    ctx->pc = 0x31CE9Cu;
label_31ce9c:
    // 0x31ce9c: 0x14e0001e  bnez        $a3, . + 4 + (0x1E << 2)
label_31cea0:
    if (ctx->pc == 0x31CEA0u) {
        ctx->pc = 0x31CEA4u;
        goto label_31cea4;
    }
    ctx->pc = 0x31CE9Cu;
    {
        const bool branch_taken_0x31ce9c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x31ce9c) {
            ctx->pc = 0x31CF18u;
            goto label_31cf18;
        }
    }
    ctx->pc = 0x31CEA4u;
label_31cea4:
    // 0x31cea4: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x31cea4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_31cea8:
    // 0x31cea8: 0x91240000  lbu         $a0, 0x0($t1)
    ctx->pc = 0x31cea8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_31ceac:
    // 0x31ceac: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x31ceacu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_31ceb0:
    // 0x31ceb0: 0xa3a40020  sb          $a0, 0x20($sp)
    ctx->pc = 0x31ceb0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 4));
label_31ceb4:
    // 0x31ceb4: 0x91230001  lbu         $v1, 0x1($t1)
    ctx->pc = 0x31ceb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
label_31ceb8:
    // 0x31ceb8: 0x91020001  lbu         $v0, 0x1($t0)
    ctx->pc = 0x31ceb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
label_31cebc:
    // 0x31cebc: 0x623023  subu        $a2, $v1, $v0
    ctx->pc = 0x31cebcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_31cec0:
    // 0x31cec0: 0xa3a60021  sb          $a2, 0x21($sp)
    ctx->pc = 0x31cec0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 6));
label_31cec4:
    // 0x31cec4: 0x91230002  lbu         $v1, 0x2($t1)
    ctx->pc = 0x31cec4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
label_31cec8:
    // 0x31cec8: 0x91020002  lbu         $v0, 0x2($t0)
    ctx->pc = 0x31cec8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
label_31cecc:
    // 0x31cecc: 0x622823  subu        $a1, $v1, $v0
    ctx->pc = 0x31ceccu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_31ced0:
    // 0x31ced0: 0xa3a50022  sb          $a1, 0x22($sp)
    ctx->pc = 0x31ced0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 34), (uint8_t)GPR_U32(ctx, 5));
label_31ced4:
    // 0x31ced4: 0x91230003  lbu         $v1, 0x3($t1)
    ctx->pc = 0x31ced4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 3)));
label_31ced8:
    // 0x31ced8: 0x91020003  lbu         $v0, 0x3($t0)
    ctx->pc = 0x31ced8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
label_31cedc:
    // 0x31cedc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x31cedcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_31cee0:
    // 0x31cee0: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x31cee0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_31cee4:
    // 0x31cee4: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
label_31cee8:
    if (ctx->pc == 0x31CEE8u) {
        ctx->pc = 0x31CEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CEE4u;
        // 0x31cee8: 0xa3a30023  sb          $v1, 0x23($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 35), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CEECu;
        goto label_31ceec;
    }
    ctx->pc = 0x31CEE4u;
    {
        const bool branch_taken_0x31cee4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x31CEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CEE4u;
        // 0x31cee8: 0xa3a30023  sb          $v1, 0x23($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 35), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cee4) {
            ctx->pc = 0x31CF10u;
            goto label_31cf10;
        }
    }
    ctx->pc = 0x31CEECu;
label_31ceec:
    // 0x31ceec: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x31ceecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_31cef0:
    // 0x31cef0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_31cef4:
    if (ctx->pc == 0x31CEF4u) {
        ctx->pc = 0x31CEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CEF0u;
        // 0x31cef4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CEF8u;
        goto label_31cef8;
    }
    ctx->pc = 0x31CEF0u;
    {
        const bool branch_taken_0x31cef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31cef0) {
            ctx->pc = 0x31CEF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31CEF0u;
            // 0x31cef4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31CF14u;
            goto label_31cf14;
        }
    }
    ctx->pc = 0x31CEF8u;
label_31cef8:
    // 0x31cef8: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x31cef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_31cefc:
    // 0x31cefc: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_31cf00:
    if (ctx->pc == 0x31CF00u) {
        ctx->pc = 0x31CF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CEFCu;
        // 0x31cf00: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CF04u;
        goto label_31cf04;
    }
    ctx->pc = 0x31CEFCu;
    {
        const bool branch_taken_0x31cefc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31cefc) {
            ctx->pc = 0x31CF00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31CEFCu;
            // 0x31cf00: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31CF14u;
            goto label_31cf14;
        }
    }
    ctx->pc = 0x31CF04u;
label_31cf04:
    // 0x31cf04: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x31cf04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_31cf08:
    // 0x31cf08: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_31cf0c:
    if (ctx->pc == 0x31CF0Cu) {
        ctx->pc = 0x31CF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CF08u;
        // 0x31cf0c: 0x8fa20080  lw          $v0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CF10u;
        goto label_31cf10;
    }
    ctx->pc = 0x31CF08u;
    {
        const bool branch_taken_0x31cf08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CF08u;
        // 0x31cf0c: 0x8fa20080  lw          $v0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cf08) {
            ctx->pc = 0x31CF18u;
            goto label_31cf18;
        }
    }
    ctx->pc = 0x31CF10u;
label_31cf10:
    // 0x31cf10: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x31cf10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31cf14:
    // 0x31cf14: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x31cf14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_31cf18:
    // 0x31cf18: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_31cf1c:
    if (ctx->pc == 0x31CF1Cu) {
        ctx->pc = 0x31CF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CF18u;
        // 0x31cf1c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CF20u;
        goto label_31cf20;
    }
    ctx->pc = 0x31CF18u;
    {
        const bool branch_taken_0x31cf18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CF18u;
        // 0x31cf1c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cf18) {
            ctx->pc = 0x31CF70u;
            goto label_31cf70;
        }
    }
    ctx->pc = 0x31CF20u;
label_31cf20:
    // 0x31cf20: 0x14e00013  bnez        $a3, . + 4 + (0x13 << 2)
label_31cf24:
    if (ctx->pc == 0x31CF24u) {
        ctx->pc = 0x31CF28u;
        goto label_31cf28;
    }
    ctx->pc = 0x31CF20u;
    {
        const bool branch_taken_0x31cf20 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x31cf20) {
            ctx->pc = 0x31CF70u;
            goto label_31cf70;
        }
    }
    ctx->pc = 0x31CF28u;
label_31cf28:
    // 0x31cf28: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x31cf28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31cf2c:
    // 0x31cf2c: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x31cf2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_31cf30:
    // 0x31cf30: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x31cf30u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_31cf34:
    // 0x31cf34: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x31cf34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_31cf38:
    // 0x31cf38: 0xc5e10004  lwc1        $f1, 0x4($t7)
    ctx->pc = 0x31cf38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31cf3c:
    // 0x31cf3c: 0xc5c00004  lwc1        $f0, 0x4($t6)
    ctx->pc = 0x31cf3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31cf40:
    // 0x31cf40: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x31cf40u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_31cf44:
    // 0x31cf44: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x31cf44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_31cf48:
    // 0x31cf48: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x31cf48u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_31cf4c:
    // 0x31cf4c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x31cf4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_31cf50:
    // 0x31cf50: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x31cf50u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_31cf54:
    // 0x31cf54: 0x46022034  c.lt.s      $f4, $f2
    ctx->pc = 0x31cf54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31cf58:
    // 0x31cf58: 0x0  nop
    ctx->pc = 0x31cf58u;
    // NOP
label_31cf5c:
    // 0x31cf5c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_31cf60:
    if (ctx->pc == 0x31CF60u) {
        ctx->pc = 0x31CF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CF5Cu;
        // 0x31cf60: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CF64u;
        goto label_31cf64;
    }
    ctx->pc = 0x31CF5Cu;
    {
        const bool branch_taken_0x31cf5c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x31CF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CF5Cu;
        // 0x31cf60: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cf5c) {
            ctx->pc = 0x31CF70u;
            goto label_31cf70;
        }
    }
    ctx->pc = 0x31CF64u;
label_31cf64:
    // 0x31cf64: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31cf64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31cf68:
    // 0x31cf68: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x31cf68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_31cf6c:
    // 0x31cf6c: 0x0  nop
    ctx->pc = 0x31cf6cu;
    // NOP
label_31cf70:
    // 0x31cf70: 0x16230003  bne         $s1, $v1, . + 4 + (0x3 << 2)
label_31cf74:
    if (ctx->pc == 0x31CF74u) {
        ctx->pc = 0x31CF78u;
        goto label_31cf78;
    }
    ctx->pc = 0x31CF70u;
    {
        const bool branch_taken_0x31cf70 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x31cf70) {
            ctx->pc = 0x31CF80u;
            goto label_31cf80;
        }
    }
    ctx->pc = 0x31CF78u;
label_31cf78:
    // 0x31cf78: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x31cf78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31cf7c:
    // 0x31cf7c: 0x7880a  movz        $s1, $zero, $a3
    ctx->pc = 0x31cf7cu;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
label_31cf80:
    // 0x31cf80: 0x54f10022  bnel        $a3, $s1, . + 4 + (0x22 << 2)
label_31cf84:
    if (ctx->pc == 0x31CF84u) {
        ctx->pc = 0x31CF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CF80u;
        // 0x31cf84: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CF88u;
        goto label_31cf88;
    }
    ctx->pc = 0x31CF80u;
    {
        const bool branch_taken_0x31cf80 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 17));
        if (branch_taken_0x31cf80) {
            ctx->pc = 0x31CF84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31CF80u;
            // 0x31cf84: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D00Cu;
            goto label_31d00c;
        }
    }
    ctx->pc = 0x31CF88u;
label_31cf88:
    // 0x31cf88: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x31cf88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_31cf8c:
    // 0x31cf8c: 0x8fa4008c  lw          $a0, 0x8C($sp)
    ctx->pc = 0x31cf8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_31cf90:
    // 0x31cf90: 0x51980b  movn        $s3, $v0, $s1
    ctx->pc = 0x31cf90u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
label_31cf94:
    // 0x31cf94: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x31cf94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_31cf98:
    // 0x31cf98: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x31cf98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_31cf9c:
    // 0x31cf9c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x31cf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_31cfa0:
    // 0x31cfa0: 0xafa4008c  sw          $a0, 0x8C($sp)
    ctx->pc = 0x31cfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 4));
label_31cfa4:
    // 0x31cfa4: 0x27180001  addiu       $t8, $t8, 0x1
    ctx->pc = 0x31cfa4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 1));
label_31cfa8:
    // 0x31cfa8: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x31cfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_31cfac:
    // 0x31cfac: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x31cfacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_31cfb0:
    // 0x31cfb0: 0x307200ff  andi        $s2, $v1, 0xFF
    ctx->pc = 0x31cfb0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_31cfb4:
    // 0x31cfb4: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x31cfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
label_31cfb8:
    // 0x31cfb8: 0x25ce0008  addiu       $t6, $t6, 0x8
    ctx->pc = 0x31cfb8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 8));
label_31cfbc:
    // 0x31cfbc: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x31cfbcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
label_31cfc0:
    // 0x31cfc0: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x31cfc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_31cfc4:
    // 0x31cfc4: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x31cfc4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_31cfc8:
    // 0x31cfc8: 0x254a000c  addiu       $t2, $t2, 0xC
    ctx->pc = 0x31cfc8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 12));
label_31cfcc:
    // 0x31cfcc: 0x256b000c  addiu       $t3, $t3, 0xC
    ctx->pc = 0x31cfccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 12));
label_31cfd0:
    // 0x31cfd0: 0x258c000c  addiu       $t4, $t4, 0xC
    ctx->pc = 0x31cfd0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 12));
label_31cfd4:
    // 0x31cfd4: 0x25ad000c  addiu       $t5, $t5, 0xC
    ctx->pc = 0x31cfd4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 12));
label_31cfd8:
    // 0x31cfd8: 0x27de000c  addiu       $fp, $fp, 0xC
    ctx->pc = 0x31cfd8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 12));
label_31cfdc:
    // 0x31cfdc: 0x26f7000c  addiu       $s7, $s7, 0xC
    ctx->pc = 0x31cfdcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 12));
label_31cfe0:
    // 0x31cfe0: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x31cfe0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
label_31cfe4:
    // 0x31cfe4: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x31cfe4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
label_31cfe8:
    // 0x31cfe8: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x31cfe8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_31cfec:
    // 0x31cfec: 0x27390008  addiu       $t9, $t9, 0x8
    ctx->pc = 0x31cfecu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 8));
label_31cff0:
    // 0x31cff0: 0x304102b  sltu        $v0, $t8, $a0
    ctx->pc = 0x31cff0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_31cff4:
    // 0x31cff4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_31cff8:
    if (ctx->pc == 0x31CFF8u) {
        ctx->pc = 0x31CFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CFF4u;
        // 0x31cff8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CFFCu;
        goto label_31cffc;
    }
    ctx->pc = 0x31CFF4u;
    {
        const bool branch_taken_0x31cff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CFF4u;
        // 0x31cff8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cff4) {
            ctx->pc = 0x31D00Cu;
            goto label_31d00c;
        }
    }
    ctx->pc = 0x31CFFCu;
label_31cffc:
    // 0x31cffc: 0x2403007e  addiu       $v1, $zero, 0x7E
    ctx->pc = 0x31cffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
label_31d000:
    // 0x31d000: 0x72102b  sltu        $v0, $v1, $s2
    ctx->pc = 0x31d000u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_31d004:
    // 0x31d004: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31d004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31d008:
    // 0x31d008: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x31d008u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_31d00c:
    // 0x31d00c: 0x1460ff6a  bnez        $v1, . + 4 + (-0x96 << 2)
label_31d010:
    if (ctx->pc == 0x31D010u) {
        ctx->pc = 0x31D010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D00Cu;
        // 0x31d010: 0x8fa2007c  lw          $v0, 0x7C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D014u;
        goto label_31d014;
    }
    ctx->pc = 0x31D00Cu;
    {
        const bool branch_taken_0x31d00c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31D010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D00Cu;
        // 0x31d010: 0x8fa2007c  lw          $v0, 0x7C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d00c) {
            ctx->pc = 0x31CDB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31cdb8;
        }
    }
    ctx->pc = 0x31D014u;
label_31d014:
    // 0x31d014: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x31d014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_31d018:
    // 0x31d018: 0x1111c0  sll         $v0, $s1, 7
    ctx->pc = 0x31d018u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 7));
label_31d01c:
    // 0x31d01c: 0x8fb00078  lw          $s0, 0x78($sp)
    ctx->pc = 0x31d01cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_31d020:
    // 0x31d020: 0x2421025  or          $v0, $s2, $v0
    ctx->pc = 0x31d020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_31d024:
    // 0x31d024: 0x304182b  sltu        $v1, $t8, $a0
    ctx->pc = 0x31d024u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_31d028:
    // 0x31d028: 0x8fa40074  lw          $a0, 0x74($sp)
    ctx->pc = 0x31d028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_31d02c:
    // 0x31d02c: 0x1460ff48  bnez        $v1, . + 4 + (-0xB8 << 2)
label_31d030:
    if (ctx->pc == 0x31D030u) {
        ctx->pc = 0x31D030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D02Cu;
        // 0x31d030: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D034u;
        goto label_31d034;
    }
    ctx->pc = 0x31D02Cu;
    {
        const bool branch_taken_0x31d02c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31D030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D02Cu;
        // 0x31d030: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d02c) {
            ctx->pc = 0x31CD50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31cd50;
        }
    }
    ctx->pc = 0x31D034u;
label_31d034:
    // 0x31d034: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x31d034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_31d038:
    // 0x31d038: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x31d038u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_31d03c:
    // 0x31d03c: 0x2451e880  addiu       $s1, $v0, -0x1780
    ctx->pc = 0x31d03cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_31d040:
    // 0x31d040: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31d040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31d044:
    // 0x31d044: 0x8e220108  lw          $v0, 0x108($s1)
    ctx->pc = 0x31d044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
label_31d048:
    // 0x31d048: 0x40f809  jalr        $v0
label_31d04c:
    if (ctx->pc == 0x31D04Cu) {
        ctx->pc = 0x31D04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D048u;
        // 0x31d04c: 0x34a50122  ori         $a1, $a1, 0x122 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)290);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D050u;
        goto label_31d050;
    }
    ctx->pc = 0x31D048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31D050u);
        ctx->pc = 0x31D04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D048u;
        // 0x31d04c: 0x34a50122  ori         $a1, $a1, 0x122 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)290);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D048u, 0x31D050u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31D050u;
label_31d050:
    // 0x31d050: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x31d050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_31d054:
    // 0x31d054: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_31d058:
    if (ctx->pc == 0x31D058u) {
        ctx->pc = 0x31D058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D054u;
        // 0x31d058: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D05Cu;
        goto label_31d05c;
    }
    ctx->pc = 0x31D054u;
    {
        const bool branch_taken_0x31d054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D054u;
        // 0x31d058: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d054) {
            ctx->pc = 0x31D088u;
            goto label_31d088;
        }
    }
    ctx->pc = 0x31D05Cu;
label_31d05c:
    // 0x31d05c: 0xac730008  sw          $s3, 0x8($v1)
    ctx->pc = 0x31d05cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 19));
label_31d060:
    // 0x31d060: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31d060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31d064:
    // 0x31d064: 0xac700004  sw          $s0, 0x4($v1)
    ctx->pc = 0x31d064u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
label_31d068:
    // 0x31d068: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x31d068u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31d06c:
    // 0x31d06c: 0xc0bb778  jal         func_2EDDE0
label_31d070:
    if (ctx->pc == 0x31D070u) {
        ctx->pc = 0x31D070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D06Cu;
        // 0x31d070: 0x8fa50070  lw          $a1, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D074u;
        goto label_31d074;
    }
    ctx->pc = 0x31D06Cu;
    SET_GPR_U32(ctx, 31, 0x31D074u);
    ctx->pc = 0x31D070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D06Cu;
    // 0x31d070: 0x8fa50070  lw          $a1, 0x70($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x31D06Cu, 0x31D074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D074u;
label_31d074:
    // 0x31d074: 0x8e23010c  lw          $v1, 0x10C($s1)
    ctx->pc = 0x31d074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_31d078:
    // 0x31d078: 0x60f809  jalr        $v1
label_31d07c:
    if (ctx->pc == 0x31D07Cu) {
        ctx->pc = 0x31D07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D078u;
        // 0x31d07c: 0x8fa40070  lw          $a0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D080u;
        goto label_31d080;
    }
    ctx->pc = 0x31D078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x31D080u);
        ctx->pc = 0x31D07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D078u;
        // 0x31d07c: 0x8fa40070  lw          $a0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D078u, 0x31D080u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31D080u;
label_31d080:
    // 0x31d080: 0x1000000f  b           . + 4 + (0xF << 2)
label_31d084:
    if (ctx->pc == 0x31D084u) {
        ctx->pc = 0x31D084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D080u;
        // 0x31d084: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D088u;
        goto label_31d088;
    }
    ctx->pc = 0x31D080u;
    {
        const bool branch_taken_0x31d080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D080u;
        // 0x31d084: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d080) {
            ctx->pc = 0x31D0C0u;
            goto label_31d0c0;
        }
    }
    ctx->pc = 0x31D088u;
label_31d088:
    // 0x31d088: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x31d088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_31d08c:
    // 0x31d08c: 0x40f809  jalr        $v0
label_31d090:
    if (ctx->pc == 0x31D090u) {
        ctx->pc = 0x31D090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D08Cu;
        // 0x31d090: 0x8fa40070  lw          $a0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D094u;
        goto label_31d094;
    }
    ctx->pc = 0x31D08Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31D094u);
        ctx->pc = 0x31D090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D08Cu;
        // 0x31d090: 0x8fa40070  lw          $a0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D08Cu, 0x31D094u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31D094u;
label_31d094:
    // 0x31d094: 0x24030122  addiu       $v1, $zero, 0x122
    ctx->pc = 0x31d094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
label_31d098:
    // 0x31d098: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x31d098u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_31d09c:
    // 0x31d09c: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x31d09cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
label_31d0a0:
    // 0x31d0a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31d0a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31d0a4:
    // 0x31d0a4: 0xc1035f6  jal         func_40D7D8
label_31d0a8:
    if (ctx->pc == 0x31D0A8u) {
        ctx->pc = 0x31D0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D0A4u;
        // 0x31d0a8: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D0ACu;
        goto label_31d0ac;
    }
    ctx->pc = 0x31D0A4u;
    SET_GPR_U32(ctx, 31, 0x31D0ACu);
    ctx->pc = 0x31D0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D0A4u;
    // 0x31d0a8: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x31D0A4u, 0x31D0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D0ACu;
label_31d0ac:
    // 0x31d0ac: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x31d0acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_31d0b0:
    // 0x31d0b0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x31d0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_31d0b4:
    // 0x31d0b4: 0xc103628  jal         func_40D8A0
label_31d0b8:
    if (ctx->pc == 0x31D0B8u) {
        ctx->pc = 0x31D0BCu;
        goto label_31d0bc;
    }
    ctx->pc = 0x31D0B4u;
    SET_GPR_U32(ctx, 31, 0x31D0BCu);
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x31D0B4u, 0x31D0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D0BCu;
label_31d0bc:
    // 0x31d0bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31d0bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31d0c0:
    // 0x31d0c0: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x31d0c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_31d0c4:
    // 0x31d0c4: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x31d0c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_31d0c8:
    // 0x31d0c8: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x31d0c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_31d0cc:
    // 0x31d0cc: 0x7bb30100  lq          $s3, 0x100($sp)
    ctx->pc = 0x31d0ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_31d0d0:
    // 0x31d0d0: 0x7bb400f0  lq          $s4, 0xF0($sp)
    ctx->pc = 0x31d0d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_31d0d4:
    // 0x31d0d4: 0x7bb500e0  lq          $s5, 0xE0($sp)
    ctx->pc = 0x31d0d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_31d0d8:
    // 0x31d0d8: 0x7bb600d0  lq          $s6, 0xD0($sp)
    ctx->pc = 0x31d0d8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_31d0dc:
    // 0x31d0dc: 0x7bb700c0  lq          $s7, 0xC0($sp)
    ctx->pc = 0x31d0dcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_31d0e0:
    // 0x31d0e0: 0x7bbe00b0  lq          $fp, 0xB0($sp)
    ctx->pc = 0x31d0e0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_31d0e4:
    // 0x31d0e4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x31d0e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_31d0e8:
    // 0x31d0e8: 0xc7b40140  lwc1        $f20, 0x140($sp)
    ctx->pc = 0x31d0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_31d0ec:
    // 0x31d0ec: 0x3e00008  jr          $ra
label_31d0f0:
    if (ctx->pc == 0x31D0F0u) {
        ctx->pc = 0x31D0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D0ECu;
        // 0x31d0f0: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D0F4u;
        goto label_31d0f4;
    }
    ctx->pc = 0x31D0ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D0ECu;
        // 0x31d0f0: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D0ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31D0F4u;
label_31d0f4:
    // 0x31d0f4: 0x0  nop
    ctx->pc = 0x31d0f4u;
    // NOP
label_31d0f8:
    // 0x31d0f8: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x31d0f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_31d0fc:
    // 0x31d0fc: 0x8f82a5c0  lw          $v0, -0x5A40($gp)
    ctx->pc = 0x31d0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944192)));
label_31d100:
    // 0x31d100: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x31d100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_31d104:
    // 0x31d104: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x31d104u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_31d108:
    // 0x31d108: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x31d108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
label_31d10c:
    // 0x31d10c: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x31d10cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_31d110:
    // 0x31d110: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x31d110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
label_31d114:
    // 0x31d114: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x31d114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_31d118:
    // 0x31d118: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x31d118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_31d11c:
    // 0x31d11c: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x31d11cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31d120:
    // 0x31d120: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x31d120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_31d124:
    // 0x31d124: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x31d124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_31d128:
    // 0x31d128: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x31d128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_31d12c:
    // 0x31d12c: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x31d12cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
label_31d130:
    // 0x31d130: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x31d130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_31d134:
    // 0x31d134: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x31d134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_31d138:
    // 0x31d138: 0x8ee30030  lw          $v1, 0x30($s7)
    ctx->pc = 0x31d138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 48)));
label_31d13c:
    // 0x31d13c: 0x8eeb005c  lw          $t3, 0x5C($s7)
    ctx->pc = 0x31d13cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 92)));
label_31d140:
    // 0x31d140: 0xafa3004c  sw          $v1, 0x4C($sp)
    ctx->pc = 0x31d140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
label_31d144:
    // 0x31d144: 0x8d640014  lw          $a0, 0x14($t3)
    ctx->pc = 0x31d144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 20)));
label_31d148:
    // 0x31d148: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x31d148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_31d14c:
    // 0x31d14c: 0x8d630018  lw          $v1, 0x18($t3)
    ctx->pc = 0x31d14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 24)));
label_31d150:
    // 0x31d150: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x31d150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
label_31d154:
    // 0x31d154: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x31d154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
label_31d158:
    // 0x31d158: 0x8ee40034  lw          $a0, 0x34($s7)
    ctx->pc = 0x31d158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 52)));
label_31d15c:
    // 0x31d15c: 0xafa70034  sw          $a3, 0x34($sp)
    ctx->pc = 0x31d15cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 7));
label_31d160:
    // 0x31d160: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x31d160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
label_31d164:
    // 0x31d164: 0x32040002  andi        $a0, $s0, 0x2
    ctx->pc = 0x31d164u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
label_31d168:
    // 0x31d168: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x31d168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_31d16c:
    // 0x31d16c: 0xafa80038  sw          $t0, 0x38($sp)
    ctx->pc = 0x31d16cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 8));
label_31d170:
    // 0x31d170: 0xafa9003c  sw          $t1, 0x3C($sp)
    ctx->pc = 0x31d170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 9));
label_31d174:
    // 0x31d174: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x31d174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_31d178:
    // 0x31d178: 0x45a821  addu        $s5, $v0, $a1
    ctx->pc = 0x31d178u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_31d17c:
    // 0x31d17c: 0x26b60010  addiu       $s6, $s5, 0x10
    ctx->pc = 0x31d17cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_31d180:
    // 0x31d180: 0xaeb00008  sw          $s0, 0x8($s5)
    ctx->pc = 0x31d180u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 16));
label_31d184:
    // 0x31d184: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_31d188:
    if (ctx->pc == 0x31D188u) {
        ctx->pc = 0x31D188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D184u;
        // 0x31d188: 0xaeb70000  sw          $s7, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D18Cu;
        goto label_31d18c;
    }
    ctx->pc = 0x31D184u;
    {
        const bool branch_taken_0x31d184 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D184u;
        // 0x31d188: 0xaeb70000  sw          $s7, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d184) {
            ctx->pc = 0x31D1A4u;
            goto label_31d1a4;
        }
    }
    ctx->pc = 0x31D18Cu;
label_31d18c:
    // 0x31d18c: 0x8ee60014  lw          $a2, 0x14($s7)
    ctx->pc = 0x31d18cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
label_31d190:
    // 0x31d190: 0x26a40030  addiu       $a0, $s5, 0x30
    ctx->pc = 0x31d190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
label_31d194:
    // 0x31d194: 0xc0c7296  jal         func_31CA58
label_31d198:
    if (ctx->pc == 0x31D198u) {
        ctx->pc = 0x31D198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D194u;
        // 0x31d198: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D19Cu;
        goto label_31d19c;
    }
    ctx->pc = 0x31D194u;
    SET_GPR_U32(ctx, 31, 0x31D19Cu);
    ctx->pc = 0x31D198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D194u;
    // 0x31d198: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CA58u, 0x31D194u, 0x31D19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D19Cu;
label_31d19c:
    // 0x31d19c: 0x1000000a  b           . + 4 + (0xA << 2)
label_31d1a0:
    if (ctx->pc == 0x31D1A0u) {
        ctx->pc = 0x31D1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D19Cu;
        // 0x31d1a0: 0x8ee20014  lw          $v0, 0x14($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D1A4u;
        goto label_31d1a4;
    }
    ctx->pc = 0x31D19Cu;
    {
        const bool branch_taken_0x31d19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D19Cu;
        // 0x31d1a0: 0x8ee20014  lw          $v0, 0x14($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d19c) {
            ctx->pc = 0x31D1C8u;
            goto label_31d1c8;
        }
    }
    ctx->pc = 0x31D1A4u;
label_31d1a4:
    // 0x31d1a4: 0x6965000b  ldl         $a1, 0xB($t3)
    ctx->pc = 0x31d1a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_31d1a8:
    // 0x31d1a8: 0x6d650004  ldr         $a1, 0x4($t3)
    ctx->pc = 0x31d1a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_31d1ac:
    // 0x31d1ac: 0x69620013  ldl         $v0, 0x13($t3)
    ctx->pc = 0x31d1acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_31d1b0:
    // 0x31d1b0: 0x6d62000c  ldr         $v0, 0xC($t3)
    ctx->pc = 0x31d1b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_31d1b4:
    // 0x31d1b4: 0xb2a50037  sdl         $a1, 0x37($s5)
    ctx->pc = 0x31d1b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_31d1b8:
    // 0x31d1b8: 0xb6a50030  sdr         $a1, 0x30($s5)
    ctx->pc = 0x31d1b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_31d1bc:
    // 0x31d1bc: 0xb2a2003f  sdl         $v0, 0x3F($s5)
    ctx->pc = 0x31d1bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_31d1c0:
    // 0x31d1c0: 0xb6a20038  sdr         $v0, 0x38($s5)
    ctx->pc = 0x31d1c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_31d1c4:
    // 0x31d1c4: 0x8ee20014  lw          $v0, 0x14($s7)
    ctx->pc = 0x31d1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
label_31d1c8:
    // 0x31d1c8: 0xafb00008  sw          $s0, 0x8($sp)
    ctx->pc = 0x31d1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 16));
label_31d1cc:
    // 0x31d1cc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x31d1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_31d1d0:
    // 0x31d1d0: 0xafb60010  sw          $s6, 0x10($sp)
    ctx->pc = 0x31d1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 22));
label_31d1d4:
    // 0x31d1d4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x31d1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_31d1d8:
    // 0x31d1d8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x31d1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_31d1dc:
    // 0x31d1dc: 0x8fa60044  lw          $a2, 0x44($sp)
    ctx->pc = 0x31d1dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_31d1e0:
    // 0x31d1e0: 0x8fa70034  lw          $a3, 0x34($sp)
    ctx->pc = 0x31d1e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_31d1e4:
    // 0x31d1e4: 0x8fa8004c  lw          $t0, 0x4C($sp)
    ctx->pc = 0x31d1e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_31d1e8:
    // 0x31d1e8: 0x8fa90038  lw          $t1, 0x38($sp)
    ctx->pc = 0x31d1e8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_31d1ec:
    // 0x31d1ec: 0xc6ac003c  lwc1        $f12, 0x3C($s5)
    ctx->pc = 0x31d1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_31d1f0:
    // 0x31d1f0: 0x8faa0048  lw          $t2, 0x48($sp)
    ctx->pc = 0x31d1f0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_31d1f4:
    // 0x31d1f4: 0xc0c7314  jal         func_31CC50
label_31d1f8:
    if (ctx->pc == 0x31D1F8u) {
        ctx->pc = 0x31D1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D1F4u;
        // 0x31d1f8: 0x8fab003c  lw          $t3, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D1FCu;
        goto label_31d1fc;
    }
    ctx->pc = 0x31D1F4u;
    SET_GPR_U32(ctx, 31, 0x31D1FCu);
    ctx->pc = 0x31D1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D1F4u;
    // 0x31d1f8: 0x8fab003c  lw          $t3, 0x3C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CC50u;
    goto label_31cc50;
    ctx->pc = 0x31D1FCu;
label_31d1fc:
    // 0x31d1fc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_31d200:
    if (ctx->pc == 0x31D200u) {
        ctx->pc = 0x31D200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D1FCu;
        // 0x31d200: 0x241e000c  addiu       $fp, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D204u;
        goto label_31d204;
    }
    ctx->pc = 0x31D1FCu;
    {
        const bool branch_taken_0x31d1fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31D200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D1FCu;
        // 0x31d200: 0x241e000c  addiu       $fp, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d1fc) {
            ctx->pc = 0x31D20Cu;
            goto label_31d20c;
        }
    }
    ctx->pc = 0x31D204u;
label_31d204:
    // 0x31d204: 0x100000e1  b           . + 4 + (0xE1 << 2)
label_31d208:
    if (ctx->pc == 0x31D208u) {
        ctx->pc = 0x31D208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D204u;
        // 0x31d208: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D20Cu;
        goto label_31d20c;
    }
    ctx->pc = 0x31D204u;
    {
        const bool branch_taken_0x31d204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D204u;
        // 0x31d208: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d204) {
            ctx->pc = 0x31D58Cu;
            goto label_31d58c;
        }
    }
    ctx->pc = 0x31D20Cu;
label_31d20c:
    // 0x31d20c: 0x32130002  andi        $s3, $s0, 0x2
    ctx->pc = 0x31d20cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
label_31d210:
    // 0x31d210: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x31d210u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_31d214:
    // 0x31d214: 0x32120010  andi        $s2, $s0, 0x10
    ctx->pc = 0x31d214u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16);
label_31d218:
    // 0x31d218: 0x13100a  movz        $v0, $zero, $s3
    ctx->pc = 0x31d218u;
    if (GPR_U64(ctx, 19) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_31d21c:
    // 0x31d21c: 0x32110008  andi        $s1, $s0, 0x8
    ctx->pc = 0x31d21cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
label_31d220:
    // 0x31d220: 0x2443000c  addiu       $v1, $v0, 0xC
    ctx->pc = 0x31d220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_31d224:
    // 0x31d224: 0x32100004  andi        $s0, $s0, 0x4
    ctx->pc = 0x31d224u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
label_31d228:
    // 0x31d228: 0x52180a  movz        $v1, $v0, $s2
    ctx->pc = 0x31d228u;
    if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_31d22c:
    // 0x31d22c: 0x8ec60008  lw          $a2, 0x8($s6)
    ctx->pc = 0x31d22cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_31d230:
    // 0x31d230: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x31d230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_31d234:
    // 0x31d234: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x31d234u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
label_31d238:
    // 0x31d238: 0x71200a  movz        $a0, $v1, $s1
    ctx->pc = 0x31d238u;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_31d23c:
    // 0x31d23c: 0x8ca2e988  lw          $v0, -0x1678($a1)
    ctx->pc = 0x31d23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294961544)));
label_31d240:
    // 0x31d240: 0x24940008  addiu       $s4, $a0, 0x8
    ctx->pc = 0x31d240u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_31d244:
    // 0x31d244: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x31d244u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_31d248:
    // 0x31d248: 0x90a00a  movz        $s4, $a0, $s0
    ctx->pc = 0x31d248u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 4));
label_31d24c:
    // 0x31d24c: 0x34a50122  ori         $a1, $a1, 0x122
    ctx->pc = 0x31d24cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)290);
label_31d250:
    // 0x31d250: 0x286a018  mult        $s4, $s4, $a2
    ctx->pc = 0x31d250u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 20, (int32_t)result); }
label_31d254:
    // 0x31d254: 0x40f809  jalr        $v0
label_31d258:
    if (ctx->pc == 0x31D258u) {
        ctx->pc = 0x31D258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D254u;
        // 0x31d258: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D25Cu;
        goto label_31d25c;
    }
    ctx->pc = 0x31D254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31D25Cu);
        ctx->pc = 0x31D258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D254u;
        // 0x31d258: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D254u, 0x31D25Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31D25Cu;
label_31d25c:
    // 0x31d25c: 0xafb3005c  sw          $s3, 0x5C($sp)
    ctx->pc = 0x31d25cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 19));
label_31d260:
    // 0x31d260: 0xafb20068  sw          $s2, 0x68($sp)
    ctx->pc = 0x31d260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 18));
label_31d264:
    // 0x31d264: 0xafb10064  sw          $s1, 0x64($sp)
    ctx->pc = 0x31d264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 17));
label_31d268:
    // 0x31d268: 0xafb00060  sw          $s0, 0x60($sp)
    ctx->pc = 0x31d268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 16));
label_31d26c:
    // 0x31d26c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_31d270:
    if (ctx->pc == 0x31D270u) {
        ctx->pc = 0x31D270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D26Cu;
        // 0x31d270: 0xaec2000c  sw          $v0, 0xC($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D274u;
        goto label_31d274;
    }
    ctx->pc = 0x31D26Cu;
    {
        const bool branch_taken_0x31d26c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31D270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D26Cu;
        // 0x31d270: 0xaec2000c  sw          $v0, 0xC($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d26c) {
            ctx->pc = 0x31D2A0u;
            goto label_31d2a0;
        }
    }
    ctx->pc = 0x31D274u;
label_31d274:
    // 0x31d274: 0x24020122  addiu       $v0, $zero, 0x122
    ctx->pc = 0x31d274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
label_31d278:
    // 0x31d278: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x31d278u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_31d27c:
    // 0x31d27c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x31d27cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_31d280:
    // 0x31d280: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x31d280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_31d284:
    // 0x31d284: 0xc1035f6  jal         func_40D7D8
label_31d288:
    if (ctx->pc == 0x31D288u) {
        ctx->pc = 0x31D288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D284u;
        // 0x31d288: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D28Cu;
        goto label_31d28c;
    }
    ctx->pc = 0x31D284u;
    SET_GPR_U32(ctx, 31, 0x31D28Cu);
    ctx->pc = 0x31D288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D284u;
    // 0x31d288: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x31D284u, 0x31D28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D28Cu;
label_31d28c:
    // 0x31d28c: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x31d28cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_31d290:
    // 0x31d290: 0xc103628  jal         func_40D8A0
label_31d294:
    if (ctx->pc == 0x31D294u) {
        ctx->pc = 0x31D294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D290u;
        // 0x31d294: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D298u;
        goto label_31d298;
    }
    ctx->pc = 0x31D290u;
    SET_GPR_U32(ctx, 31, 0x31D298u);
    ctx->pc = 0x31D294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D290u;
    // 0x31d294: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x31D290u, 0x31D298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D298u;
label_31d298:
    // 0x31d298: 0x100000bc  b           . + 4 + (0xBC << 2)
label_31d29c:
    if (ctx->pc == 0x31D29Cu) {
        ctx->pc = 0x31D29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D298u;
        // 0x31d29c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D2A0u;
        goto label_31d2a0;
    }
    ctx->pc = 0x31D298u;
    {
        const bool branch_taken_0x31d298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D298u;
        // 0x31d29c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d298) {
            ctx->pc = 0x31D58Cu;
            goto label_31d58c;
        }
    }
    ctx->pc = 0x31D2A0u;
label_31d2a0:
    // 0x31d2a0: 0xaea0000c  sw          $zero, 0xC($s5)
    ctx->pc = 0x31d2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 0));
label_31d2a4:
    // 0x31d2a4: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x31d2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_31d2a8:
    // 0x31d2a8: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_31d2ac:
    if (ctx->pc == 0x31D2ACu) {
        ctx->pc = 0x31D2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D2A8u;
        // 0x31d2ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D2B0u;
        goto label_31d2b0;
    }
    ctx->pc = 0x31D2A8u;
    {
        const bool branch_taken_0x31d2a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D2A8u;
        // 0x31d2ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d2a8) {
            ctx->pc = 0x31D2C8u;
            goto label_31d2c8;
        }
    }
    ctx->pc = 0x31D2B0u;
label_31d2b0:
    // 0x31d2b0: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x31d2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_31d2b4:
    // 0x31d2b4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x31d2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_31d2b8:
    // 0x31d2b8: 0xaea40020  sw          $a0, 0x20($s5)
    ctx->pc = 0x31d2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 4));
label_31d2bc:
    // 0x31d2bc: 0x5e2818  mult        $a1, $v0, $fp
    ctx->pc = 0x31d2bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_31d2c0:
    // 0x31d2c0: 0xaea3000c  sw          $v1, 0xC($s5)
    ctx->pc = 0x31d2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 3));
label_31d2c4:
    // 0x31d2c4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x31d2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_31d2c8:
    // 0x31d2c8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x31d2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_31d2cc:
    // 0x31d2cc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_31d2d0:
    if (ctx->pc == 0x31D2D0u) {
        ctx->pc = 0x31D2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D2CCu;
        // 0x31d2d0: 0x8fa20064  lw          $v0, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D2D4u;
        goto label_31d2d4;
    }
    ctx->pc = 0x31D2CCu;
    {
        const bool branch_taken_0x31d2cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D2CCu;
        // 0x31d2d0: 0x8fa20064  lw          $v0, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d2cc) {
            ctx->pc = 0x31D2F4u;
            goto label_31d2f4;
        }
    }
    ctx->pc = 0x31D2D4u;
label_31d2d4:
    // 0x31d2d4: 0x8ec30008  lw          $v1, 0x8($s6)
    ctx->pc = 0x31d2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_31d2d8:
    // 0x31d2d8: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x31d2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_31d2dc:
    // 0x31d2dc: 0x7e2818  mult        $a1, $v1, $fp
    ctx->pc = 0x31d2dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_31d2e0:
    // 0x31d2e0: 0xaea40024  sw          $a0, 0x24($s5)
    ctx->pc = 0x31d2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 4));
label_31d2e4:
    // 0x31d2e4: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x31d2e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_31d2e8:
    // 0x31d2e8: 0xaea2000c  sw          $v0, 0xC($s5)
    ctx->pc = 0x31d2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
label_31d2ec:
    // 0x31d2ec: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x31d2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_31d2f0:
    // 0x31d2f0: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x31d2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_31d2f4:
    // 0x31d2f4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_31d2f8:
    if (ctx->pc == 0x31D2F8u) {
        ctx->pc = 0x31D2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D2F4u;
        // 0x31d2f8: 0x8fa30060  lw          $v1, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D2FCu;
        goto label_31d2fc;
    }
    ctx->pc = 0x31D2F4u;
    {
        const bool branch_taken_0x31d2f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D2F4u;
        // 0x31d2f8: 0x8fa30060  lw          $v1, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d2f4) {
            ctx->pc = 0x31D31Cu;
            goto label_31d31c;
        }
    }
    ctx->pc = 0x31D2FCu;
label_31d2fc:
    // 0x31d2fc: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x31d2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_31d300:
    // 0x31d300: 0x8ec30008  lw          $v1, 0x8($s6)
    ctx->pc = 0x31d300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_31d304:
    // 0x31d304: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x31d304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_31d308:
    // 0x31d308: 0xaea40028  sw          $a0, 0x28($s5)
    ctx->pc = 0x31d308u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 40), GPR_U32(ctx, 4));
label_31d30c:
    // 0x31d30c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x31d30cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_31d310:
    // 0x31d310: 0xaea2000c  sw          $v0, 0xC($s5)
    ctx->pc = 0x31d310u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
label_31d314:
    // 0x31d314: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x31d314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_31d318:
    // 0x31d318: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x31d318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_31d31c:
    // 0x31d31c: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
label_31d320:
    if (ctx->pc == 0x31D320u) {
        ctx->pc = 0x31D320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D31Cu;
        // 0x31d320: 0x8ec20004  lw          $v0, 0x4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D324u;
        goto label_31d324;
    }
    ctx->pc = 0x31D31Cu;
    {
        const bool branch_taken_0x31d31c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d31c) {
            ctx->pc = 0x31D320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D31Cu;
            // 0x31d320: 0x8ec20004  lw          $v0, 0x4($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D338u;
            goto label_31d338;
        }
    }
    ctx->pc = 0x31D324u;
label_31d324:
    // 0x31d324: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x31d324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_31d328:
    // 0x31d328: 0xaea4002c  sw          $a0, 0x2C($s5)
    ctx->pc = 0x31d328u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 44), GPR_U32(ctx, 4));
label_31d32c:
    // 0x31d32c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x31d32cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_31d330:
    // 0x31d330: 0xaea2000c  sw          $v0, 0xC($s5)
    ctx->pc = 0x31d330u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
label_31d334:
    // 0x31d334: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x31d334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_31d338:
    // 0x31d338: 0xc82d  daddu       $t9, $zero, $zero
    ctx->pc = 0x31d338u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31d33c:
    // 0x31d33c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x31d33cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31d340:
    // 0x31d340: 0x10400091  beqz        $v0, . + 4 + (0x91 << 2)
label_31d344:
    if (ctx->pc == 0x31D344u) {
        ctx->pc = 0x31D344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D340u;
        // 0x31d344: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D348u;
        goto label_31d348;
    }
    ctx->pc = 0x31D340u;
    {
        const bool branch_taken_0x31d340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D340u;
        // 0x31d344: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d340) {
            ctx->pc = 0x31D588u;
            goto label_31d588;
        }
    }
    ctx->pc = 0x31D348u;
label_31d348:
    // 0x31d348: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x31d348u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31d34c:
    // 0x31d34c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x31d34cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31d350:
    // 0x31d350: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x31d350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_31d354:
    // 0x31d354: 0x0  nop
    ctx->pc = 0x31d354u;
    // NOP
label_31d358:
    // 0x31d358: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x31d358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_31d35c:
    // 0x31d35c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x31d35cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_31d360:
    // 0x31d360: 0x3064007f  andi        $a0, $v1, 0x7F
    ctx->pc = 0x31d360u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
label_31d364:
    // 0x31d364: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x31d364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_31d368:
    // 0x31d368: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_31d36c:
    if (ctx->pc == 0x31D36Cu) {
        ctx->pc = 0x31D36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D368u;
        // 0x31d36c: 0x3245021  addu        $t2, $t9, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D370u;
        goto label_31d370;
    }
    ctx->pc = 0x31D368u;
    {
        const bool branch_taken_0x31d368 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31D36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D368u;
        // 0x31d36c: 0x3245021  addu        $t2, $t9, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d368) {
            ctx->pc = 0x31D37Cu;
            goto label_31d37c;
        }
    }
    ctx->pc = 0x31D370u;
label_31d370:
    // 0x31d370: 0x140c82d  daddu       $t9, $t2, $zero
    ctx->pc = 0x31d370u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_31d374:
    // 0x31d374: 0x1000007f  b           . + 4 + (0x7F << 2)
label_31d378:
    if (ctx->pc == 0x31D378u) {
        ctx->pc = 0x31D378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D374u;
        // 0x31d378: 0x24b20001  addiu       $s2, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D37Cu;
        goto label_31d37c;
    }
    ctx->pc = 0x31D374u;
    {
        const bool branch_taken_0x31d374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D374u;
        // 0x31d378: 0x24b20001  addiu       $s2, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d374) {
            ctx->pc = 0x31D574u;
            goto label_31d574;
        }
    }
    ctx->pc = 0x31D37Cu;
label_31d37c:
    // 0x31d37c: 0x32a102b  sltu        $v0, $t9, $t2
    ctx->pc = 0x31d37cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 25) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
label_31d380:
    // 0x31d380: 0x1040007c  beqz        $v0, . + 4 + (0x7C << 2)
label_31d384:
    if (ctx->pc == 0x31D384u) {
        ctx->pc = 0x31D384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D380u;
        // 0x31d384: 0x24b20001  addiu       $s2, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D388u;
        goto label_31d388;
    }
    ctx->pc = 0x31D380u;
    {
        const bool branch_taken_0x31d380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D380u;
        // 0x31d384: 0x24b20001  addiu       $s2, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d380) {
            ctx->pc = 0x31D574u;
            goto label_31d574;
        }
    }
    ctx->pc = 0x31D388u;
label_31d388:
    // 0x31d388: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x31d388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_31d38c:
    // 0x31d38c: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x31d38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_31d390:
    // 0x31d390: 0x3244018  mult        $t0, $t9, $a0
    ctx->pc = 0x31d390u;
    { int64_t result = (int64_t)GPR_S32(ctx, 25) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_31d394:
    // 0x31d394: 0x3c47818  mult        $t7, $fp, $a0
    ctx->pc = 0x31d394u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_31d398:
    // 0x31d398: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x31d398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_31d39c:
    // 0x31d39c: 0x1948c0  sll         $t1, $t9, 3
    ctx->pc = 0x31d39cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 25), 3));
label_31d3a0:
    // 0x31d3a0: 0x191080  sll         $v0, $t9, 2
    ctx->pc = 0x31d3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 25), 2));
label_31d3a4:
    // 0x31d3a4: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x31d3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_31d3a8:
    // 0x31d3a8: 0x1247021  addu        $t6, $t1, $a0
    ctx->pc = 0x31d3a8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_31d3ac:
    // 0x31d3ac: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x31d3acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_31d3b0:
    // 0x31d3b0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x31d3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_31d3b4:
    // 0x31d3b4: 0x200c02d  daddu       $t8, $s0, $zero
    ctx->pc = 0x31d3b4u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31d3b8:
    // 0x31d3b8: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x31d3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_31d3bc:
    // 0x31d3bc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x31d3bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31d3c0:
    // 0x31d3c0: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x31d3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
label_31d3c4:
    // 0x31d3c4: 0x1e0a02d  daddu       $s4, $t7, $zero
    ctx->pc = 0x31d3c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_31d3c8:
    // 0x31d3c8: 0x1046821  addu        $t5, $t0, $a0
    ctx->pc = 0x31d3c8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_31d3cc:
    // 0x31d3cc: 0x8fa50064  lw          $a1, 0x64($sp)
    ctx->pc = 0x31d3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_31d3d0:
    // 0x31d3d0: 0xafa30054  sw          $v1, 0x54($sp)
    ctx->pc = 0x31d3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
label_31d3d4:
    // 0x31d3d4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x31d3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_31d3d8:
    // 0x31d3d8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x31d3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_31d3dc:
    // 0x31d3dc: 0xafa50058  sw          $a1, 0x58($sp)
    ctx->pc = 0x31d3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 5));
label_31d3e0:
    // 0x31d3e0: 0x1036021  addu        $t4, $t0, $v1
    ctx->pc = 0x31d3e0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_31d3e4:
    // 0x31d3e4: 0x1045821  addu        $t3, $t0, $a0
    ctx->pc = 0x31d3e4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_31d3e8:
    // 0x31d3e8: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x31d3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_31d3ec:
    // 0x31d3ec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x31d3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_31d3f0:
    // 0x31d3f0: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x31d3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_31d3f4:
    // 0x31d3f4: 0x1054021  addu        $t0, $t0, $a1
    ctx->pc = 0x31d3f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_31d3f8:
    // 0x31d3f8: 0x8fb30060  lw          $s3, 0x60($sp)
    ctx->pc = 0x31d3f8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_31d3fc:
    // 0x31d3fc: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x31d3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_31d400:
    // 0x31d400: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x31d400u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_31d404:
    // 0x31d404: 0x0  nop
    ctx->pc = 0x31d404u;
    // NOP
label_31d408:
    // 0x31d408: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x31d408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_31d40c:
    // 0x31d40c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_31d410:
    if (ctx->pc == 0x31D410u) {
        ctx->pc = 0x31D410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D40Cu;
        // 0x31d410: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D414u;
        goto label_31d414;
    }
    ctx->pc = 0x31D40Cu;
    {
        const bool branch_taken_0x31d40c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D40Cu;
        // 0x31d410: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d40c) {
            ctx->pc = 0x31D450u;
            goto label_31d450;
        }
    }
    ctx->pc = 0x31D414u;
label_31d414:
    // 0x31d414: 0xc5610000  lwc1        $f1, 0x0($t3)
    ctx->pc = 0x31d414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31d418:
    // 0x31d418: 0xc5800000  lwc1        $f0, 0x0($t4)
    ctx->pc = 0x31d418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31d41c:
    // 0x31d41c: 0x8ea20020  lw          $v0, 0x20($s5)
    ctx->pc = 0x31d41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
label_31d420:
    // 0x31d420: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x31d420u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_31d424:
    // 0x31d424: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x31d424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_31d428:
    // 0x31d428: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x31d428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_31d42c:
    // 0x31d42c: 0xc5600004  lwc1        $f0, 0x4($t3)
    ctx->pc = 0x31d42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31d430:
    // 0x31d430: 0xc5810004  lwc1        $f1, 0x4($t4)
    ctx->pc = 0x31d430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31d434:
    // 0x31d434: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x31d434u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_31d438:
    // 0x31d438: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x31d438u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_31d43c:
    // 0x31d43c: 0xc5820008  lwc1        $f2, 0x8($t4)
    ctx->pc = 0x31d43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_31d440:
    // 0x31d440: 0xc5600008  lwc1        $f0, 0x8($t3)
    ctx->pc = 0x31d440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31d444:
    // 0x31d444: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x31d444u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_31d448:
    // 0x31d448: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x31d448u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_31d44c:
    // 0x31d44c: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x31d44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_31d450:
    // 0x31d450: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_31d454:
    if (ctx->pc == 0x31D454u) {
        ctx->pc = 0x31D454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D450u;
        // 0x31d454: 0x8fa40058  lw          $a0, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D458u;
        goto label_31d458;
    }
    ctx->pc = 0x31D450u;
    {
        const bool branch_taken_0x31d450 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D450u;
        // 0x31d454: 0x8fa40058  lw          $a0, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d450) {
            ctx->pc = 0x31D498u;
            goto label_31d498;
        }
    }
    ctx->pc = 0x31D458u;
label_31d458:
    // 0x31d458: 0xc5a10000  lwc1        $f1, 0x0($t5)
    ctx->pc = 0x31d458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31d45c:
    // 0x31d45c: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x31d45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31d460:
    // 0x31d460: 0x8ea20024  lw          $v0, 0x24($s5)
    ctx->pc = 0x31d460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
label_31d464:
    // 0x31d464: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x31d464u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_31d468:
    // 0x31d468: 0x1e21021  addu        $v0, $t7, $v0
    ctx->pc = 0x31d468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
label_31d46c:
    // 0x31d46c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x31d46cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_31d470:
    // 0x31d470: 0xc5a00004  lwc1        $f0, 0x4($t5)
    ctx->pc = 0x31d470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31d474:
    // 0x31d474: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x31d474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31d478:
    // 0x31d478: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x31d478u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_31d47c:
    // 0x31d47c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x31d47cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_31d480:
    // 0x31d480: 0xc5020008  lwc1        $f2, 0x8($t0)
    ctx->pc = 0x31d480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_31d484:
    // 0x31d484: 0xc5a00008  lwc1        $f0, 0x8($t5)
    ctx->pc = 0x31d484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31d488:
    // 0x31d488: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x31d488u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_31d48c:
    // 0x31d48c: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x31d48cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_31d490:
    // 0x31d490: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x31d490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_31d494:
    // 0x31d494: 0x0  nop
    ctx->pc = 0x31d494u;
    // NOP
label_31d498:
    // 0x31d498: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
label_31d49c:
    if (ctx->pc == 0x31D49Cu) {
        ctx->pc = 0x31D4A0u;
        goto label_31d4a0;
    }
    ctx->pc = 0x31D498u;
    {
        const bool branch_taken_0x31d498 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d498) {
            ctx->pc = 0x31D500u;
            goto label_31d500;
        }
    }
    ctx->pc = 0x31D4A0u;
label_31d4a0:
    // 0x31d4a0: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x31d4a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_31d4a4:
    // 0x31d4a4: 0x8ea30028  lw          $v1, 0x28($s5)
    ctx->pc = 0x31d4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
label_31d4a8:
    // 0x31d4a8: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x31d4a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_31d4ac:
    // 0x31d4ac: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x31d4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_31d4b0:
    // 0x31d4b0: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x31d4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_31d4b4:
    // 0x31d4b4: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x31d4b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_31d4b8:
    // 0x31d4b8: 0x90e30001  lbu         $v1, 0x1($a3)
    ctx->pc = 0x31d4b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
label_31d4bc:
    // 0x31d4bc: 0x8ea40028  lw          $a0, 0x28($s5)
    ctx->pc = 0x31d4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
label_31d4c0:
    // 0x31d4c0: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x31d4c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_31d4c4:
    // 0x31d4c4: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x31d4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_31d4c8:
    // 0x31d4c8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x31d4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_31d4cc:
    // 0x31d4cc: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x31d4ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
label_31d4d0:
    // 0x31d4d0: 0x90e40002  lbu         $a0, 0x2($a3)
    ctx->pc = 0x31d4d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
label_31d4d4:
    // 0x31d4d4: 0x8ea30028  lw          $v1, 0x28($s5)
    ctx->pc = 0x31d4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
label_31d4d8:
    // 0x31d4d8: 0x90a20002  lbu         $v0, 0x2($a1)
    ctx->pc = 0x31d4d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_31d4dc:
    // 0x31d4dc: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x31d4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_31d4e0:
    // 0x31d4e0: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x31d4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_31d4e4:
    // 0x31d4e4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x31d4e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_31d4e8:
    // 0x31d4e8: 0x8ea40028  lw          $a0, 0x28($s5)
    ctx->pc = 0x31d4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
label_31d4ec:
    // 0x31d4ec: 0x90a20003  lbu         $v0, 0x3($a1)
    ctx->pc = 0x31d4ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
label_31d4f0:
    // 0x31d4f0: 0x90e30003  lbu         $v1, 0x3($a3)
    ctx->pc = 0x31d4f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
label_31d4f4:
    // 0x31d4f4: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x31d4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_31d4f8:
    // 0x31d4f8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x31d4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_31d4fc:
    // 0x31d4fc: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x31d4fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
label_31d500:
    // 0x31d500: 0x1260000b  beqz        $s3, . + 4 + (0xB << 2)
label_31d504:
    if (ctx->pc == 0x31D504u) {
        ctx->pc = 0x31D504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D500u;
        // 0x31d504: 0x27390001  addiu       $t9, $t9, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D508u;
        goto label_31d508;
    }
    ctx->pc = 0x31D500u;
    {
        const bool branch_taken_0x31d500 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D500u;
        // 0x31d504: 0x27390001  addiu       $t9, $t9, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d500) {
            ctx->pc = 0x31D530u;
            goto label_31d530;
        }
    }
    ctx->pc = 0x31D508u;
label_31d508:
    // 0x31d508: 0xc5c10000  lwc1        $f1, 0x0($t6)
    ctx->pc = 0x31d508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31d50c:
    // 0x31d50c: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x31d50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31d510:
    // 0x31d510: 0x8ea2002c  lw          $v0, 0x2C($s5)
    ctx->pc = 0x31d510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 44)));
label_31d514:
    // 0x31d514: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x31d514u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_31d518:
    // 0x31d518: 0x3021021  addu        $v0, $t8, $v0
    ctx->pc = 0x31d518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
label_31d51c:
    // 0x31d51c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x31d51cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_31d520:
    // 0x31d520: 0xc5210004  lwc1        $f1, 0x4($t1)
    ctx->pc = 0x31d520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31d524:
    // 0x31d524: 0xc5c00004  lwc1        $f0, 0x4($t6)
    ctx->pc = 0x31d524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31d528:
    // 0x31d528: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x31d528u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_31d52c:
    // 0x31d52c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x31d52cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_31d530:
    // 0x31d530: 0x25ce0008  addiu       $t6, $t6, 0x8
    ctx->pc = 0x31d530u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 8));
label_31d534:
    // 0x31d534: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x31d534u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
label_31d538:
    // 0x31d538: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x31d538u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_31d53c:
    // 0x31d53c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x31d53cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_31d540:
    // 0x31d540: 0x25ad000c  addiu       $t5, $t5, 0xC
    ctx->pc = 0x31d540u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 12));
label_31d544:
    // 0x31d544: 0x2508000c  addiu       $t0, $t0, 0xC
    ctx->pc = 0x31d544u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
label_31d548:
    // 0x31d548: 0x256b000c  addiu       $t3, $t3, 0xC
    ctx->pc = 0x31d548u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 12));
label_31d54c:
    // 0x31d54c: 0x258c000c  addiu       $t4, $t4, 0xC
    ctx->pc = 0x31d54cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 12));
label_31d550:
    // 0x31d550: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x31d550u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
label_31d554:
    // 0x31d554: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x31d554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_31d558:
    // 0x31d558: 0x25ef000c  addiu       $t7, $t7, 0xC
    ctx->pc = 0x31d558u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 12));
label_31d55c:
    // 0x31d55c: 0x2694000c  addiu       $s4, $s4, 0xC
    ctx->pc = 0x31d55cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
label_31d560:
    // 0x31d560: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x31d560u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_31d564:
    // 0x31d564: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x31d564u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_31d568:
    // 0x31d568: 0x32a102b  sltu        $v0, $t9, $t2
    ctx->pc = 0x31d568u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 25) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
label_31d56c:
    // 0x31d56c: 0x1440ffa6  bnez        $v0, . + 4 + (-0x5A << 2)
label_31d570:
    if (ctx->pc == 0x31D570u) {
        ctx->pc = 0x31D570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D56Cu;
        // 0x31d570: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D574u;
        goto label_31d574;
    }
    ctx->pc = 0x31D56Cu;
    {
        const bool branch_taken_0x31d56c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31D570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D56Cu;
        // 0x31d570: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d56c) {
            ctx->pc = 0x31D408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31d408;
        }
    }
    ctx->pc = 0x31D574u;
label_31d574:
    // 0x31d574: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x31d574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_31d578:
    // 0x31d578: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x31d578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_31d57c:
    // 0x31d57c: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x31d57cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_31d580:
    // 0x31d580: 0x5440ff75  bnel        $v0, $zero, . + 4 + (-0x8B << 2)
label_31d584:
    if (ctx->pc == 0x31D584u) {
        ctx->pc = 0x31D584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D580u;
        // 0x31d584: 0x8ec20000  lw          $v0, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D588u;
        goto label_31d588;
    }
    ctx->pc = 0x31D580u;
    {
        const bool branch_taken_0x31d580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31d580) {
            ctx->pc = 0x31D584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D580u;
            // 0x31d584: 0x8ec20000  lw          $v0, 0x0($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31d358;
        }
    }
    ctx->pc = 0x31D588u;
label_31d588:
    // 0x31d588: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x31d588u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_31d58c:
    // 0x31d58c: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x31d58cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_31d590:
    // 0x31d590: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x31d590u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_31d594:
    // 0x31d594: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x31d594u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_31d598:
    // 0x31d598: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x31d598u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_31d59c:
    // 0x31d59c: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x31d59cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_31d5a0:
    // 0x31d5a0: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x31d5a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_31d5a4:
    // 0x31d5a4: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x31d5a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_31d5a8:
    // 0x31d5a8: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x31d5a8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_31d5ac:
    // 0x31d5ac: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x31d5acu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_31d5b0:
    // 0x31d5b0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x31d5b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_31d5b4:
    // 0x31d5b4: 0x3e00008  jr          $ra
label_31d5b8:
    if (ctx->pc == 0x31D5B8u) {
        ctx->pc = 0x31D5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D5B4u;
        // 0x31d5b8: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D5BCu;
        goto label_31d5bc;
    }
    ctx->pc = 0x31D5B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D5B4u;
        // 0x31d5b8: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D5B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31D5BCu;
label_31d5bc:
    // 0x31d5bc: 0x0  nop
    ctx->pc = 0x31d5bcu;
    // NOP
    ctx->pc = 0x31d5c0u;
}
