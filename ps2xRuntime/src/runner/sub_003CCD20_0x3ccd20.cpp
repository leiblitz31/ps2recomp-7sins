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

// Function: sub_003CCD20
// Address: 0x3ccd20 - 0x3cd498
void sub_003CCD20_0x3ccd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CCD20_0x3ccd20");
#endif

    switch (ctx->pc) {
        case 0x3ccd20u: goto label_3ccd20;
        case 0x3ccd24u: goto label_3ccd24;
        case 0x3ccd28u: goto label_3ccd28;
        case 0x3ccd2cu: goto label_3ccd2c;
        case 0x3ccd30u: goto label_3ccd30;
        case 0x3ccd34u: goto label_3ccd34;
        case 0x3ccd38u: goto label_3ccd38;
        case 0x3ccd3cu: goto label_3ccd3c;
        case 0x3ccd40u: goto label_3ccd40;
        case 0x3ccd44u: goto label_3ccd44;
        case 0x3ccd48u: goto label_3ccd48;
        case 0x3ccd4cu: goto label_3ccd4c;
        case 0x3ccd50u: goto label_3ccd50;
        case 0x3ccd54u: goto label_3ccd54;
        case 0x3ccd58u: goto label_3ccd58;
        case 0x3ccd5cu: goto label_3ccd5c;
        case 0x3ccd60u: goto label_3ccd60;
        case 0x3ccd64u: goto label_3ccd64;
        case 0x3ccd68u: goto label_3ccd68;
        case 0x3ccd6cu: goto label_3ccd6c;
        case 0x3ccd70u: goto label_3ccd70;
        case 0x3ccd74u: goto label_3ccd74;
        case 0x3ccd78u: goto label_3ccd78;
        case 0x3ccd7cu: goto label_3ccd7c;
        case 0x3ccd80u: goto label_3ccd80;
        case 0x3ccd84u: goto label_3ccd84;
        case 0x3ccd88u: goto label_3ccd88;
        case 0x3ccd8cu: goto label_3ccd8c;
        case 0x3ccd90u: goto label_3ccd90;
        case 0x3ccd94u: goto label_3ccd94;
        case 0x3ccd98u: goto label_3ccd98;
        case 0x3ccd9cu: goto label_3ccd9c;
        case 0x3ccda0u: goto label_3ccda0;
        case 0x3ccda4u: goto label_3ccda4;
        case 0x3ccda8u: goto label_3ccda8;
        case 0x3ccdacu: goto label_3ccdac;
        case 0x3ccdb0u: goto label_3ccdb0;
        case 0x3ccdb4u: goto label_3ccdb4;
        case 0x3ccdb8u: goto label_3ccdb8;
        case 0x3ccdbcu: goto label_3ccdbc;
        case 0x3ccdc0u: goto label_3ccdc0;
        case 0x3ccdc4u: goto label_3ccdc4;
        case 0x3ccdc8u: goto label_3ccdc8;
        case 0x3ccdccu: goto label_3ccdcc;
        case 0x3ccdd0u: goto label_3ccdd0;
        case 0x3ccdd4u: goto label_3ccdd4;
        case 0x3ccdd8u: goto label_3ccdd8;
        case 0x3ccddcu: goto label_3ccddc;
        case 0x3ccde0u: goto label_3ccde0;
        case 0x3ccde4u: goto label_3ccde4;
        case 0x3ccde8u: goto label_3ccde8;
        case 0x3ccdecu: goto label_3ccdec;
        case 0x3ccdf0u: goto label_3ccdf0;
        case 0x3ccdf4u: goto label_3ccdf4;
        case 0x3ccdf8u: goto label_3ccdf8;
        case 0x3ccdfcu: goto label_3ccdfc;
        case 0x3cce00u: goto label_3cce00;
        case 0x3cce04u: goto label_3cce04;
        case 0x3cce08u: goto label_3cce08;
        case 0x3cce0cu: goto label_3cce0c;
        case 0x3cce10u: goto label_3cce10;
        case 0x3cce14u: goto label_3cce14;
        case 0x3cce18u: goto label_3cce18;
        case 0x3cce1cu: goto label_3cce1c;
        case 0x3cce20u: goto label_3cce20;
        case 0x3cce24u: goto label_3cce24;
        case 0x3cce28u: goto label_3cce28;
        case 0x3cce2cu: goto label_3cce2c;
        case 0x3cce30u: goto label_3cce30;
        case 0x3cce34u: goto label_3cce34;
        case 0x3cce38u: goto label_3cce38;
        case 0x3cce3cu: goto label_3cce3c;
        case 0x3cce40u: goto label_3cce40;
        case 0x3cce44u: goto label_3cce44;
        case 0x3cce48u: goto label_3cce48;
        case 0x3cce4cu: goto label_3cce4c;
        case 0x3cce50u: goto label_3cce50;
        case 0x3cce54u: goto label_3cce54;
        case 0x3cce58u: goto label_3cce58;
        case 0x3cce5cu: goto label_3cce5c;
        case 0x3cce60u: goto label_3cce60;
        case 0x3cce64u: goto label_3cce64;
        case 0x3cce68u: goto label_3cce68;
        case 0x3cce6cu: goto label_3cce6c;
        case 0x3cce70u: goto label_3cce70;
        case 0x3cce74u: goto label_3cce74;
        case 0x3cce78u: goto label_3cce78;
        case 0x3cce7cu: goto label_3cce7c;
        case 0x3cce80u: goto label_3cce80;
        case 0x3cce84u: goto label_3cce84;
        case 0x3cce88u: goto label_3cce88;
        case 0x3cce8cu: goto label_3cce8c;
        case 0x3cce90u: goto label_3cce90;
        case 0x3cce94u: goto label_3cce94;
        case 0x3cce98u: goto label_3cce98;
        case 0x3cce9cu: goto label_3cce9c;
        case 0x3ccea0u: goto label_3ccea0;
        case 0x3ccea4u: goto label_3ccea4;
        case 0x3ccea8u: goto label_3ccea8;
        case 0x3cceacu: goto label_3cceac;
        case 0x3cceb0u: goto label_3cceb0;
        case 0x3cceb4u: goto label_3cceb4;
        case 0x3cceb8u: goto label_3cceb8;
        case 0x3ccebcu: goto label_3ccebc;
        case 0x3ccec0u: goto label_3ccec0;
        case 0x3ccec4u: goto label_3ccec4;
        case 0x3ccec8u: goto label_3ccec8;
        case 0x3cceccu: goto label_3ccecc;
        case 0x3cced0u: goto label_3cced0;
        case 0x3cced4u: goto label_3cced4;
        case 0x3cced8u: goto label_3cced8;
        case 0x3ccedcu: goto label_3ccedc;
        case 0x3ccee0u: goto label_3ccee0;
        case 0x3ccee4u: goto label_3ccee4;
        case 0x3ccee8u: goto label_3ccee8;
        case 0x3cceecu: goto label_3cceec;
        case 0x3ccef0u: goto label_3ccef0;
        case 0x3ccef4u: goto label_3ccef4;
        case 0x3ccef8u: goto label_3ccef8;
        case 0x3ccefcu: goto label_3ccefc;
        case 0x3ccf00u: goto label_3ccf00;
        case 0x3ccf04u: goto label_3ccf04;
        case 0x3ccf08u: goto label_3ccf08;
        case 0x3ccf0cu: goto label_3ccf0c;
        case 0x3ccf10u: goto label_3ccf10;
        case 0x3ccf14u: goto label_3ccf14;
        case 0x3ccf18u: goto label_3ccf18;
        case 0x3ccf1cu: goto label_3ccf1c;
        case 0x3ccf20u: goto label_3ccf20;
        case 0x3ccf24u: goto label_3ccf24;
        case 0x3ccf28u: goto label_3ccf28;
        case 0x3ccf2cu: goto label_3ccf2c;
        case 0x3ccf30u: goto label_3ccf30;
        case 0x3ccf34u: goto label_3ccf34;
        case 0x3ccf38u: goto label_3ccf38;
        case 0x3ccf3cu: goto label_3ccf3c;
        case 0x3ccf40u: goto label_3ccf40;
        case 0x3ccf44u: goto label_3ccf44;
        case 0x3ccf48u: goto label_3ccf48;
        case 0x3ccf4cu: goto label_3ccf4c;
        case 0x3ccf50u: goto label_3ccf50;
        case 0x3ccf54u: goto label_3ccf54;
        case 0x3ccf58u: goto label_3ccf58;
        case 0x3ccf5cu: goto label_3ccf5c;
        case 0x3ccf60u: goto label_3ccf60;
        case 0x3ccf64u: goto label_3ccf64;
        case 0x3ccf68u: goto label_3ccf68;
        case 0x3ccf6cu: goto label_3ccf6c;
        case 0x3ccf70u: goto label_3ccf70;
        case 0x3ccf74u: goto label_3ccf74;
        case 0x3ccf78u: goto label_3ccf78;
        case 0x3ccf7cu: goto label_3ccf7c;
        case 0x3ccf80u: goto label_3ccf80;
        case 0x3ccf84u: goto label_3ccf84;
        case 0x3ccf88u: goto label_3ccf88;
        case 0x3ccf8cu: goto label_3ccf8c;
        case 0x3ccf90u: goto label_3ccf90;
        case 0x3ccf94u: goto label_3ccf94;
        case 0x3ccf98u: goto label_3ccf98;
        case 0x3ccf9cu: goto label_3ccf9c;
        case 0x3ccfa0u: goto label_3ccfa0;
        case 0x3ccfa4u: goto label_3ccfa4;
        case 0x3ccfa8u: goto label_3ccfa8;
        case 0x3ccfacu: goto label_3ccfac;
        case 0x3ccfb0u: goto label_3ccfb0;
        case 0x3ccfb4u: goto label_3ccfb4;
        case 0x3ccfb8u: goto label_3ccfb8;
        case 0x3ccfbcu: goto label_3ccfbc;
        case 0x3ccfc0u: goto label_3ccfc0;
        case 0x3ccfc4u: goto label_3ccfc4;
        case 0x3ccfc8u: goto label_3ccfc8;
        case 0x3ccfccu: goto label_3ccfcc;
        case 0x3ccfd0u: goto label_3ccfd0;
        case 0x3ccfd4u: goto label_3ccfd4;
        case 0x3ccfd8u: goto label_3ccfd8;
        case 0x3ccfdcu: goto label_3ccfdc;
        case 0x3ccfe0u: goto label_3ccfe0;
        case 0x3ccfe4u: goto label_3ccfe4;
        case 0x3ccfe8u: goto label_3ccfe8;
        case 0x3ccfecu: goto label_3ccfec;
        case 0x3ccff0u: goto label_3ccff0;
        case 0x3ccff4u: goto label_3ccff4;
        case 0x3ccff8u: goto label_3ccff8;
        case 0x3ccffcu: goto label_3ccffc;
        case 0x3cd000u: goto label_3cd000;
        case 0x3cd004u: goto label_3cd004;
        case 0x3cd008u: goto label_3cd008;
        case 0x3cd00cu: goto label_3cd00c;
        case 0x3cd010u: goto label_3cd010;
        case 0x3cd014u: goto label_3cd014;
        case 0x3cd018u: goto label_3cd018;
        case 0x3cd01cu: goto label_3cd01c;
        case 0x3cd020u: goto label_3cd020;
        case 0x3cd024u: goto label_3cd024;
        case 0x3cd028u: goto label_3cd028;
        case 0x3cd02cu: goto label_3cd02c;
        case 0x3cd030u: goto label_3cd030;
        case 0x3cd034u: goto label_3cd034;
        case 0x3cd038u: goto label_3cd038;
        case 0x3cd03cu: goto label_3cd03c;
        case 0x3cd040u: goto label_3cd040;
        case 0x3cd044u: goto label_3cd044;
        case 0x3cd048u: goto label_3cd048;
        case 0x3cd04cu: goto label_3cd04c;
        case 0x3cd050u: goto label_3cd050;
        case 0x3cd054u: goto label_3cd054;
        case 0x3cd058u: goto label_3cd058;
        case 0x3cd05cu: goto label_3cd05c;
        case 0x3cd060u: goto label_3cd060;
        case 0x3cd064u: goto label_3cd064;
        case 0x3cd068u: goto label_3cd068;
        case 0x3cd06cu: goto label_3cd06c;
        case 0x3cd070u: goto label_3cd070;
        case 0x3cd074u: goto label_3cd074;
        case 0x3cd078u: goto label_3cd078;
        case 0x3cd07cu: goto label_3cd07c;
        case 0x3cd080u: goto label_3cd080;
        case 0x3cd084u: goto label_3cd084;
        case 0x3cd088u: goto label_3cd088;
        case 0x3cd08cu: goto label_3cd08c;
        case 0x3cd090u: goto label_3cd090;
        case 0x3cd094u: goto label_3cd094;
        case 0x3cd098u: goto label_3cd098;
        case 0x3cd09cu: goto label_3cd09c;
        case 0x3cd0a0u: goto label_3cd0a0;
        case 0x3cd0a4u: goto label_3cd0a4;
        case 0x3cd0a8u: goto label_3cd0a8;
        case 0x3cd0acu: goto label_3cd0ac;
        case 0x3cd0b0u: goto label_3cd0b0;
        case 0x3cd0b4u: goto label_3cd0b4;
        case 0x3cd0b8u: goto label_3cd0b8;
        case 0x3cd0bcu: goto label_3cd0bc;
        case 0x3cd0c0u: goto label_3cd0c0;
        case 0x3cd0c4u: goto label_3cd0c4;
        case 0x3cd0c8u: goto label_3cd0c8;
        case 0x3cd0ccu: goto label_3cd0cc;
        case 0x3cd0d0u: goto label_3cd0d0;
        case 0x3cd0d4u: goto label_3cd0d4;
        case 0x3cd0d8u: goto label_3cd0d8;
        case 0x3cd0dcu: goto label_3cd0dc;
        case 0x3cd0e0u: goto label_3cd0e0;
        case 0x3cd0e4u: goto label_3cd0e4;
        case 0x3cd0e8u: goto label_3cd0e8;
        case 0x3cd0ecu: goto label_3cd0ec;
        case 0x3cd0f0u: goto label_3cd0f0;
        case 0x3cd0f4u: goto label_3cd0f4;
        case 0x3cd0f8u: goto label_3cd0f8;
        case 0x3cd0fcu: goto label_3cd0fc;
        case 0x3cd100u: goto label_3cd100;
        case 0x3cd104u: goto label_3cd104;
        case 0x3cd108u: goto label_3cd108;
        case 0x3cd10cu: goto label_3cd10c;
        case 0x3cd110u: goto label_3cd110;
        case 0x3cd114u: goto label_3cd114;
        case 0x3cd118u: goto label_3cd118;
        case 0x3cd11cu: goto label_3cd11c;
        case 0x3cd120u: goto label_3cd120;
        case 0x3cd124u: goto label_3cd124;
        case 0x3cd128u: goto label_3cd128;
        case 0x3cd12cu: goto label_3cd12c;
        case 0x3cd130u: goto label_3cd130;
        case 0x3cd134u: goto label_3cd134;
        case 0x3cd138u: goto label_3cd138;
        case 0x3cd13cu: goto label_3cd13c;
        case 0x3cd140u: goto label_3cd140;
        case 0x3cd144u: goto label_3cd144;
        case 0x3cd148u: goto label_3cd148;
        case 0x3cd14cu: goto label_3cd14c;
        case 0x3cd150u: goto label_3cd150;
        case 0x3cd154u: goto label_3cd154;
        case 0x3cd158u: goto label_3cd158;
        case 0x3cd15cu: goto label_3cd15c;
        case 0x3cd160u: goto label_3cd160;
        case 0x3cd164u: goto label_3cd164;
        case 0x3cd168u: goto label_3cd168;
        case 0x3cd16cu: goto label_3cd16c;
        case 0x3cd170u: goto label_3cd170;
        case 0x3cd174u: goto label_3cd174;
        case 0x3cd178u: goto label_3cd178;
        case 0x3cd17cu: goto label_3cd17c;
        case 0x3cd180u: goto label_3cd180;
        case 0x3cd184u: goto label_3cd184;
        case 0x3cd188u: goto label_3cd188;
        case 0x3cd18cu: goto label_3cd18c;
        case 0x3cd190u: goto label_3cd190;
        case 0x3cd194u: goto label_3cd194;
        case 0x3cd198u: goto label_3cd198;
        case 0x3cd19cu: goto label_3cd19c;
        case 0x3cd1a0u: goto label_3cd1a0;
        case 0x3cd1a4u: goto label_3cd1a4;
        case 0x3cd1a8u: goto label_3cd1a8;
        case 0x3cd1acu: goto label_3cd1ac;
        case 0x3cd1b0u: goto label_3cd1b0;
        case 0x3cd1b4u: goto label_3cd1b4;
        case 0x3cd1b8u: goto label_3cd1b8;
        case 0x3cd1bcu: goto label_3cd1bc;
        case 0x3cd1c0u: goto label_3cd1c0;
        case 0x3cd1c4u: goto label_3cd1c4;
        case 0x3cd1c8u: goto label_3cd1c8;
        case 0x3cd1ccu: goto label_3cd1cc;
        case 0x3cd1d0u: goto label_3cd1d0;
        case 0x3cd1d4u: goto label_3cd1d4;
        case 0x3cd1d8u: goto label_3cd1d8;
        case 0x3cd1dcu: goto label_3cd1dc;
        case 0x3cd1e0u: goto label_3cd1e0;
        case 0x3cd1e4u: goto label_3cd1e4;
        case 0x3cd1e8u: goto label_3cd1e8;
        case 0x3cd1ecu: goto label_3cd1ec;
        case 0x3cd1f0u: goto label_3cd1f0;
        case 0x3cd1f4u: goto label_3cd1f4;
        case 0x3cd1f8u: goto label_3cd1f8;
        case 0x3cd1fcu: goto label_3cd1fc;
        case 0x3cd200u: goto label_3cd200;
        case 0x3cd204u: goto label_3cd204;
        case 0x3cd208u: goto label_3cd208;
        case 0x3cd20cu: goto label_3cd20c;
        case 0x3cd210u: goto label_3cd210;
        case 0x3cd214u: goto label_3cd214;
        case 0x3cd218u: goto label_3cd218;
        case 0x3cd21cu: goto label_3cd21c;
        case 0x3cd220u: goto label_3cd220;
        case 0x3cd224u: goto label_3cd224;
        case 0x3cd228u: goto label_3cd228;
        case 0x3cd22cu: goto label_3cd22c;
        case 0x3cd230u: goto label_3cd230;
        case 0x3cd234u: goto label_3cd234;
        case 0x3cd238u: goto label_3cd238;
        case 0x3cd23cu: goto label_3cd23c;
        case 0x3cd240u: goto label_3cd240;
        case 0x3cd244u: goto label_3cd244;
        case 0x3cd248u: goto label_3cd248;
        case 0x3cd24cu: goto label_3cd24c;
        case 0x3cd250u: goto label_3cd250;
        case 0x3cd254u: goto label_3cd254;
        case 0x3cd258u: goto label_3cd258;
        case 0x3cd25cu: goto label_3cd25c;
        case 0x3cd260u: goto label_3cd260;
        case 0x3cd264u: goto label_3cd264;
        case 0x3cd268u: goto label_3cd268;
        case 0x3cd26cu: goto label_3cd26c;
        case 0x3cd270u: goto label_3cd270;
        case 0x3cd274u: goto label_3cd274;
        case 0x3cd278u: goto label_3cd278;
        case 0x3cd27cu: goto label_3cd27c;
        case 0x3cd280u: goto label_3cd280;
        case 0x3cd284u: goto label_3cd284;
        case 0x3cd288u: goto label_3cd288;
        case 0x3cd28cu: goto label_3cd28c;
        case 0x3cd290u: goto label_3cd290;
        case 0x3cd294u: goto label_3cd294;
        case 0x3cd298u: goto label_3cd298;
        case 0x3cd29cu: goto label_3cd29c;
        case 0x3cd2a0u: goto label_3cd2a0;
        case 0x3cd2a4u: goto label_3cd2a4;
        case 0x3cd2a8u: goto label_3cd2a8;
        case 0x3cd2acu: goto label_3cd2ac;
        case 0x3cd2b0u: goto label_3cd2b0;
        case 0x3cd2b4u: goto label_3cd2b4;
        case 0x3cd2b8u: goto label_3cd2b8;
        case 0x3cd2bcu: goto label_3cd2bc;
        case 0x3cd2c0u: goto label_3cd2c0;
        case 0x3cd2c4u: goto label_3cd2c4;
        case 0x3cd2c8u: goto label_3cd2c8;
        case 0x3cd2ccu: goto label_3cd2cc;
        case 0x3cd2d0u: goto label_3cd2d0;
        case 0x3cd2d4u: goto label_3cd2d4;
        case 0x3cd2d8u: goto label_3cd2d8;
        case 0x3cd2dcu: goto label_3cd2dc;
        case 0x3cd2e0u: goto label_3cd2e0;
        case 0x3cd2e4u: goto label_3cd2e4;
        case 0x3cd2e8u: goto label_3cd2e8;
        case 0x3cd2ecu: goto label_3cd2ec;
        case 0x3cd2f0u: goto label_3cd2f0;
        case 0x3cd2f4u: goto label_3cd2f4;
        case 0x3cd2f8u: goto label_3cd2f8;
        case 0x3cd2fcu: goto label_3cd2fc;
        case 0x3cd300u: goto label_3cd300;
        case 0x3cd304u: goto label_3cd304;
        case 0x3cd308u: goto label_3cd308;
        case 0x3cd30cu: goto label_3cd30c;
        case 0x3cd310u: goto label_3cd310;
        case 0x3cd314u: goto label_3cd314;
        case 0x3cd318u: goto label_3cd318;
        case 0x3cd31cu: goto label_3cd31c;
        case 0x3cd320u: goto label_3cd320;
        case 0x3cd324u: goto label_3cd324;
        case 0x3cd328u: goto label_3cd328;
        case 0x3cd32cu: goto label_3cd32c;
        case 0x3cd330u: goto label_3cd330;
        case 0x3cd334u: goto label_3cd334;
        case 0x3cd338u: goto label_3cd338;
        case 0x3cd33cu: goto label_3cd33c;
        case 0x3cd340u: goto label_3cd340;
        case 0x3cd344u: goto label_3cd344;
        case 0x3cd348u: goto label_3cd348;
        case 0x3cd34cu: goto label_3cd34c;
        case 0x3cd350u: goto label_3cd350;
        case 0x3cd354u: goto label_3cd354;
        case 0x3cd358u: goto label_3cd358;
        case 0x3cd35cu: goto label_3cd35c;
        case 0x3cd360u: goto label_3cd360;
        case 0x3cd364u: goto label_3cd364;
        case 0x3cd368u: goto label_3cd368;
        case 0x3cd36cu: goto label_3cd36c;
        case 0x3cd370u: goto label_3cd370;
        case 0x3cd374u: goto label_3cd374;
        case 0x3cd378u: goto label_3cd378;
        case 0x3cd37cu: goto label_3cd37c;
        case 0x3cd380u: goto label_3cd380;
        case 0x3cd384u: goto label_3cd384;
        case 0x3cd388u: goto label_3cd388;
        case 0x3cd38cu: goto label_3cd38c;
        case 0x3cd390u: goto label_3cd390;
        case 0x3cd394u: goto label_3cd394;
        case 0x3cd398u: goto label_3cd398;
        case 0x3cd39cu: goto label_3cd39c;
        case 0x3cd3a0u: goto label_3cd3a0;
        case 0x3cd3a4u: goto label_3cd3a4;
        case 0x3cd3a8u: goto label_3cd3a8;
        case 0x3cd3acu: goto label_3cd3ac;
        case 0x3cd3b0u: goto label_3cd3b0;
        case 0x3cd3b4u: goto label_3cd3b4;
        case 0x3cd3b8u: goto label_3cd3b8;
        case 0x3cd3bcu: goto label_3cd3bc;
        case 0x3cd3c0u: goto label_3cd3c0;
        case 0x3cd3c4u: goto label_3cd3c4;
        case 0x3cd3c8u: goto label_3cd3c8;
        case 0x3cd3ccu: goto label_3cd3cc;
        case 0x3cd3d0u: goto label_3cd3d0;
        case 0x3cd3d4u: goto label_3cd3d4;
        case 0x3cd3d8u: goto label_3cd3d8;
        case 0x3cd3dcu: goto label_3cd3dc;
        case 0x3cd3e0u: goto label_3cd3e0;
        case 0x3cd3e4u: goto label_3cd3e4;
        case 0x3cd3e8u: goto label_3cd3e8;
        case 0x3cd3ecu: goto label_3cd3ec;
        case 0x3cd3f0u: goto label_3cd3f0;
        case 0x3cd3f4u: goto label_3cd3f4;
        case 0x3cd3f8u: goto label_3cd3f8;
        case 0x3cd3fcu: goto label_3cd3fc;
        case 0x3cd400u: goto label_3cd400;
        case 0x3cd404u: goto label_3cd404;
        case 0x3cd408u: goto label_3cd408;
        case 0x3cd40cu: goto label_3cd40c;
        case 0x3cd410u: goto label_3cd410;
        case 0x3cd414u: goto label_3cd414;
        case 0x3cd418u: goto label_3cd418;
        case 0x3cd41cu: goto label_3cd41c;
        case 0x3cd420u: goto label_3cd420;
        case 0x3cd424u: goto label_3cd424;
        case 0x3cd428u: goto label_3cd428;
        case 0x3cd42cu: goto label_3cd42c;
        case 0x3cd430u: goto label_3cd430;
        case 0x3cd434u: goto label_3cd434;
        case 0x3cd438u: goto label_3cd438;
        case 0x3cd43cu: goto label_3cd43c;
        case 0x3cd440u: goto label_3cd440;
        case 0x3cd444u: goto label_3cd444;
        case 0x3cd448u: goto label_3cd448;
        case 0x3cd44cu: goto label_3cd44c;
        case 0x3cd450u: goto label_3cd450;
        case 0x3cd454u: goto label_3cd454;
        case 0x3cd458u: goto label_3cd458;
        case 0x3cd45cu: goto label_3cd45c;
        case 0x3cd460u: goto label_3cd460;
        case 0x3cd464u: goto label_3cd464;
        case 0x3cd468u: goto label_3cd468;
        case 0x3cd46cu: goto label_3cd46c;
        case 0x3cd470u: goto label_3cd470;
        case 0x3cd474u: goto label_3cd474;
        case 0x3cd478u: goto label_3cd478;
        case 0x3cd47cu: goto label_3cd47c;
        case 0x3cd480u: goto label_3cd480;
        case 0x3cd484u: goto label_3cd484;
        case 0x3cd488u: goto label_3cd488;
        case 0x3cd48cu: goto label_3cd48c;
        case 0x3cd490u: goto label_3cd490;
        case 0x3cd494u: goto label_3cd494;
        default: break;
    }

    ctx->pc = 0x3ccd20u;

label_3ccd20:
    // 0x3ccd20: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x3ccd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_3ccd24:
    // 0x3ccd24: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x3ccd24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_3ccd28:
    // 0x3ccd28: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x3ccd28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_3ccd2c:
    // 0x3ccd2c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3ccd2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ccd30:
    // 0x3ccd30: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3ccd30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ccd34:
    // 0x3ccd34: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x3ccd34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_3ccd38:
    // 0x3ccd38: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x3ccd38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
label_3ccd3c:
    // 0x3ccd3c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x3ccd3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ccd40:
    // 0x3ccd40: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x3ccd40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_3ccd44:
    // 0x3ccd44: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x3ccd44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_3ccd48:
    // 0x3ccd48: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x3ccd48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_3ccd4c:
    // 0x3ccd4c: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x3ccd4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_3ccd50:
    // 0x3ccd50: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x3ccd50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_3ccd54:
    // 0x3ccd54: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x3ccd54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
label_3ccd58:
    // 0x3ccd58: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3ccd58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_3ccd5c:
    // 0x3ccd5c: 0xc0f35fa  jal         func_3CD7E8
label_3ccd60:
    if (ctx->pc == 0x3CCD60u) {
        ctx->pc = 0x3CCD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCD5Cu;
        // 0x3ccd60: 0xe7b40100  swc1        $f20, 0x100($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCD64u;
        goto label_3ccd64;
    }
    ctx->pc = 0x3CCD5Cu;
    SET_GPR_U32(ctx, 31, 0x3CCD64u);
    ctx->pc = 0x3CCD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCD5Cu;
    // 0x3ccd60: 0xe7b40100  swc1        $f20, 0x100($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CD7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CD7E8u, 0x3CCD5Cu, 0x3CCD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCD64u;
label_3ccd64:
    // 0x3ccd64: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x3ccd64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_3ccd68:
    // 0x3ccd68: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3ccd68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ccd6c:
    // 0x3ccd6c: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x3ccd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_3ccd70:
    // 0x3ccd70: 0xc0f4f08  jal         func_3D3C20
label_3ccd74:
    if (ctx->pc == 0x3CCD74u) {
        ctx->pc = 0x3CCD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCD70u;
        // 0x3ccd74: 0xae620040  sw          $v0, 0x40($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCD78u;
        goto label_3ccd78;
    }
    ctx->pc = 0x3CCD70u;
    SET_GPR_U32(ctx, 31, 0x3CCD78u);
    ctx->pc = 0x3CCD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCD70u;
    // 0x3ccd74: 0xae620040  sw          $v0, 0x40($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3C20u, 0x3CCD70u, 0x3CCD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCD78u;
label_3ccd78:
    // 0x3ccd78: 0x8e62002c  lw          $v0, 0x2C($s3)
    ctx->pc = 0x3ccd78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_3ccd7c:
    // 0x3ccd7c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3ccd80:
    if (ctx->pc == 0x3CCD80u) {
        ctx->pc = 0x3CCD84u;
        goto label_3ccd84;
    }
    ctx->pc = 0x3CCD7Cu;
    {
        const bool branch_taken_0x3ccd7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ccd7c) {
            ctx->pc = 0x3CCD8Cu;
            goto label_3ccd8c;
        }
    }
    ctx->pc = 0x3CCD84u;
label_3ccd84:
    // 0x3ccd84: 0x100001b6  b           . + 4 + (0x1B6 << 2)
label_3ccd88:
    if (ctx->pc == 0x3CCD88u) {
        ctx->pc = 0x3CCD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCD84u;
        // 0x3ccd88: 0x8e620020  lw          $v0, 0x20($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCD8Cu;
        goto label_3ccd8c;
    }
    ctx->pc = 0x3CCD84u;
    {
        const bool branch_taken_0x3ccd84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CCD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCD84u;
        // 0x3ccd88: 0x8e620020  lw          $v0, 0x20($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccd84) {
            ctx->pc = 0x3CD460u;
            goto label_3cd460;
        }
    }
    ctx->pc = 0x3CCD8Cu;
label_3ccd8c:
    // 0x3ccd8c: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_3ccd90:
    if (ctx->pc == 0x3CCD90u) {
        ctx->pc = 0x3CCD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCD8Cu;
        // 0x3ccd90: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCD94u;
        goto label_3ccd94;
    }
    ctx->pc = 0x3CCD8Cu;
    {
        const bool branch_taken_0x3ccd8c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3CCD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCD8Cu;
        // 0x3ccd90: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccd8c) {
            ctx->pc = 0x3CCDA4u;
            goto label_3ccda4;
        }
    }
    ctx->pc = 0x3CCD94u;
label_3ccd94:
    // 0x3ccd94: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3ccd94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3ccd98:
    // 0x3ccd98: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3ccd98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3ccd9c:
    // 0x3ccd9c: 0x10000006  b           . + 4 + (0x6 << 2)
label_3ccda0:
    if (ctx->pc == 0x3CCDA0u) {
        ctx->pc = 0x3CCDA4u;
        goto label_3ccda4;
    }
    ctx->pc = 0x3CCD9Cu;
    {
        const bool branch_taken_0x3ccd9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ccd9c) {
            ctx->pc = 0x3CCDB8u;
            goto label_3ccdb8;
        }
    }
    ctx->pc = 0x3CCDA4u;
label_3ccda4:
    // 0x3ccda4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3ccda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3ccda8:
    // 0x3ccda8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3ccda8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3ccdac:
    // 0x3ccdac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3ccdacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3ccdb0:
    // 0x3ccdb0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3ccdb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3ccdb4:
    // 0x3ccdb4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3ccdb4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3ccdb8:
    // 0x3ccdb8: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x3ccdb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_3ccdbc:
    // 0x3ccdbc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3ccdbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ccdc0:
    // 0x3ccdc0: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x3ccdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3ccdc4:
    // 0x3ccdc4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3ccdc4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_3ccdc8:
    // 0x3ccdc8: 0x8e630044  lw          $v1, 0x44($s3)
    ctx->pc = 0x3ccdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
label_3ccdcc:
    // 0x3ccdcc: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x3ccdccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_3ccdd0:
    // 0x3ccdd0: 0xae600028  sw          $zero, 0x28($s3)
    ctx->pc = 0x3ccdd0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 0));
label_3ccdd4:
    // 0x3ccdd4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x3ccdd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_3ccdd8:
    // 0x3ccdd8: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_3ccddc:
    if (ctx->pc == 0x3CCDDCu) {
        ctx->pc = 0x3CCDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCDD8u;
        // 0x3ccddc: 0xe6600030  swc1        $f0, 0x30($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 48), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCDE0u;
        goto label_3ccde0;
    }
    ctx->pc = 0x3CCDD8u;
    {
        const bool branch_taken_0x3ccdd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CCDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCDD8u;
        // 0x3ccddc: 0xe6600030  swc1        $f0, 0x30($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccdd8) {
            ctx->pc = 0x3CCDECu;
            goto label_3ccdec;
        }
    }
    ctx->pc = 0x3CCDE0u;
label_3ccde0:
    // 0x3ccde0: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x3ccde0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
label_3ccde4:
    // 0x3ccde4: 0x2442c8a8  addiu       $v0, $v0, -0x3758
    ctx->pc = 0x3ccde4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953128));
label_3ccde8:
    // 0x3ccde8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3ccde8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_3ccdec:
    // 0x3ccdec: 0x8e62004c  lw          $v0, 0x4C($s3)
    ctx->pc = 0x3ccdecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
label_3ccdf0:
    // 0x3ccdf0: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x3ccdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_3ccdf4:
    // 0x3ccdf4: 0x8e640048  lw          $a0, 0x48($s3)
    ctx->pc = 0x3ccdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
label_3ccdf8:
    // 0x3ccdf8: 0x2463b298  addiu       $v1, $v1, -0x4D68
    ctx->pc = 0x3ccdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947480));
label_3ccdfc:
    // 0x3ccdfc: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x3ccdfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_3cce00:
    // 0x3cce00: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
label_3cce04:
    if (ctx->pc == 0x3CCE04u) {
        ctx->pc = 0x3CCE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCE00u;
        // 0x3cce04: 0xac6400a4  sw          $a0, 0xA4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 164), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCE08u;
        goto label_3cce08;
    }
    ctx->pc = 0x3CCE00u;
    {
        const bool branch_taken_0x3cce00 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CCE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCE00u;
        // 0x3cce04: 0xac6400a4  sw          $a0, 0xA4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 164), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cce00) {
            ctx->pc = 0x3CCE14u;
            goto label_3cce14;
        }
    }
    ctx->pc = 0x3CCE08u;
label_3cce08:
    // 0x3cce08: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x3cce08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
label_3cce0c:
    // 0x3cce0c: 0x2442d5d0  addiu       $v0, $v0, -0x2A30
    ctx->pc = 0x3cce0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956496));
label_3cce10:
    // 0x3cce10: 0xac6200a4  sw          $v0, 0xA4($v1)
    ctx->pc = 0x3cce10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 164), GPR_U32(ctx, 2));
label_3cce14:
    // 0x3cce14: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3cce14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3cce18:
    // 0x3cce18: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3cce18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3cce1c:
    // 0x3cce1c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3cce1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3cce20:
    // 0x3cce20: 0xac7000b0  sw          $s0, 0xB0($v1)
    ctx->pc = 0x3cce20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 176), GPR_U32(ctx, 16));
label_3cce24:
    // 0x3cce24: 0xac6200ac  sw          $v0, 0xAC($v1)
    ctx->pc = 0x3cce24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 172), GPR_U32(ctx, 2));
label_3cce28:
    // 0x3cce28: 0xc0f4df6  jal         func_3D37D8
label_3cce2c:
    if (ctx->pc == 0x3CCE2Cu) {
        ctx->pc = 0x3CCE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCE28u;
        // 0x3cce2c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCE30u;
        goto label_3cce30;
    }
    ctx->pc = 0x3CCE28u;
    SET_GPR_U32(ctx, 31, 0x3CCE30u);
    ctx->pc = 0x3CCE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCE28u;
    // 0x3cce2c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D37D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D37D8u, 0x3CCE28u, 0x3CCE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCE30u;
label_3cce30:
    // 0x3cce30: 0x8fa6001c  lw          $a2, 0x1C($sp)
    ctx->pc = 0x3cce30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_3cce34:
    // 0x3cce34: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3cce34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3cce38:
    // 0x3cce38: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3cce38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3cce3c:
    // 0x3cce3c: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x3cce3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_3cce40:
    // 0x3cce40: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x3cce40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_3cce44:
    // 0x3cce44: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3cce44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3cce48:
    // 0x3cce48: 0xc4b821  addu        $s7, $a2, $a0
    ctx->pc = 0x3cce48u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_3cce4c:
    // 0x3cce4c: 0x34a50114  ori         $a1, $a1, 0x114
    ctx->pc = 0x3cce4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
label_3cce50:
    // 0x3cce50: 0x1780c0  sll         $s0, $s7, 3
    ctx->pc = 0x3cce50u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 23), 3));
label_3cce54:
    // 0x3cce54: 0x40f809  jalr        $v0
label_3cce58:
    if (ctx->pc == 0x3CCE58u) {
        ctx->pc = 0x3CCE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCE54u;
        // 0x3cce58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCE5Cu;
        goto label_3cce5c;
    }
    ctx->pc = 0x3CCE54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CCE5Cu);
        ctx->pc = 0x3CCE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCE54u;
        // 0x3cce58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CCE54u, 0x3CCE5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CCE5Cu;
label_3cce5c:
    // 0x3cce5c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x3cce5cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cce60:
    // 0x3cce60: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3cce60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cce64:
    // 0x3cce64: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3cce64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3cce68:
    // 0x3cce68: 0xc0bb7e6  jal         func_2EDF98
label_3cce6c:
    if (ctx->pc == 0x3CCE6Cu) {
        ctx->pc = 0x3CCE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCE68u;
        // 0x3cce6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCE70u;
        goto label_3cce70;
    }
    ctx->pc = 0x3CCE68u;
    SET_GPR_U32(ctx, 31, 0x3CCE70u);
    ctx->pc = 0x3CCE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCE68u;
    // 0x3cce6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3CCE68u, 0x3CCE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCE70u;
label_3cce70:
    // 0x3cce70: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x3cce70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
label_3cce74:
    // 0x3cce74: 0x8e63004c  lw          $v1, 0x4C($s3)
    ctx->pc = 0x3cce74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
label_3cce78:
    // 0x3cce78: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x3cce78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_3cce7c:
    // 0x3cce7c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3cce7cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cce80:
    // 0x3cce80: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_3cce84:
    if (ctx->pc == 0x3CCE84u) {
        ctx->pc = 0x3CCE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCE80u;
        // 0x3cce84: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCE88u;
        goto label_3cce88;
    }
    ctx->pc = 0x3CCE80u;
    {
        const bool branch_taken_0x3cce80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CCE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCE80u;
        // 0x3cce84: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cce80) {
            ctx->pc = 0x3CCEA8u;
            goto label_3ccea8;
        }
    }
    ctx->pc = 0x3CCE88u;
label_3cce88:
    // 0x3cce88: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x3cce88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3cce8c:
    // 0x3cce8c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3cce8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3cce90:
    // 0x3cce90: 0x60f809  jalr        $v1
label_3cce94:
    if (ctx->pc == 0x3CCE94u) {
        ctx->pc = 0x3CCE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCE90u;
        // 0x3cce94: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCE98u;
        goto label_3cce98;
    }
    ctx->pc = 0x3CCE90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3CCE98u);
        ctx->pc = 0x3CCE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCE90u;
        // 0x3cce94: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CCE90u, 0x3CCE98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CCE98u;
label_3cce98:
    // 0x3cce98: 0x8e62004c  lw          $v0, 0x4C($s3)
    ctx->pc = 0x3cce98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
label_3cce9c:
    // 0x3cce9c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3cce9cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3ccea0:
    // 0x3ccea0: 0x40f809  jalr        $v0
label_3ccea4:
    if (ctx->pc == 0x3CCEA4u) {
        ctx->pc = 0x3CCEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCEA0u;
        // 0x3ccea4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCEA8u;
        goto label_3ccea8;
    }
    ctx->pc = 0x3CCEA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CCEA8u);
        ctx->pc = 0x3CCEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCEA0u;
        // 0x3ccea4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CCEA0u, 0x3CCEA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CCEA8u;
label_3ccea8:
    // 0x3ccea8: 0x8e65001c  lw          $a1, 0x1C($s3)
    ctx->pc = 0x3ccea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_3cceac:
    // 0x3cceac: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x3cceacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_3cceb0:
    // 0x3cceb0: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x3cceb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_3cceb4:
    // 0x3cceb4: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x3cceb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3cceb8:
    // 0x3cceb8: 0x1040007d  beqz        $v0, . + 4 + (0x7D << 2)
label_3ccebc:
    if (ctx->pc == 0x3CCEBCu) {
        ctx->pc = 0x3CCEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCEB8u;
        // 0x3ccebc: 0xafa0003c  sw          $zero, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCEC0u;
        goto label_3ccec0;
    }
    ctx->pc = 0x3CCEB8u;
    {
        const bool branch_taken_0x3cceb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CCEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCEB8u;
        // 0x3ccebc: 0xafa0003c  sw          $zero, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cceb8) {
            ctx->pc = 0x3CD0B0u;
            goto label_3cd0b0;
        }
    }
    ctx->pc = 0x3CCEC0u;
label_3ccec0:
    // 0x3ccec0: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x3ccec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_3ccec4:
    // 0x3ccec4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3ccec8:
    if (ctx->pc == 0x3CCEC8u) {
        ctx->pc = 0x3CCEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCEC4u;
        // 0x3ccec8: 0x60b02d  daddu       $s6, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCECCu;
        goto label_3ccecc;
    }
    ctx->pc = 0x3CCEC4u;
    {
        const bool branch_taken_0x3ccec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CCEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCEC4u;
        // 0x3ccec8: 0x60b02d  daddu       $s6, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccec4) {
            ctx->pc = 0x3CCED8u;
            goto label_3cced8;
        }
    }
    ctx->pc = 0x3CCECCu;
label_3ccecc:
    // 0x3ccecc: 0xa2b021  addu        $s6, $a1, $v0
    ctx->pc = 0x3cceccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3cced0:
    // 0x3cced0: 0x76102a  slt         $v0, $v1, $s6
    ctx->pc = 0x3cced0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_3cced4:
    // 0x3cced4: 0x62b00b  movn        $s6, $v1, $v0
    ctx->pc = 0x3cced4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 3));
label_3cced8:
    // 0x3cced8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3cced8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ccedc:
    // 0x3ccedc: 0x2c52823  subu        $a1, $s6, $a1
    ctx->pc = 0x3ccedcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
label_3ccee0:
    // 0x3ccee0: 0x296102a  slt         $v0, $s4, $s6
    ctx->pc = 0x3ccee0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_3ccee4:
    // 0x3ccee4: 0x10400072  beqz        $v0, . + 4 + (0x72 << 2)
label_3ccee8:
    if (ctx->pc == 0x3CCEE8u) {
        ctx->pc = 0x3CCEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCEE4u;
        // 0x3ccee8: 0xafa5003c  sw          $a1, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCEECu;
        goto label_3cceec;
    }
    ctx->pc = 0x3CCEE4u;
    {
        const bool branch_taken_0x3ccee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CCEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCEE4u;
        // 0x3ccee8: 0xafa5003c  sw          $a1, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccee4) {
            ctx->pc = 0x3CD0B0u;
            goto label_3cd0b0;
        }
    }
    ctx->pc = 0x3CCEECu;
label_3cceec:
    // 0x3cceec: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x3cceecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_3ccef0:
    // 0x3ccef0: 0xafbe004c  sw          $fp, 0x4C($sp)
    ctx->pc = 0x3ccef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 30));
label_3ccef4:
    // 0x3ccef4: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x3ccef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
label_3ccef8:
    // 0x3ccef8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x3ccef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3ccefc:
    // 0x3ccefc: 0x0  nop
    ctx->pc = 0x3ccefcu;
    // NOP
label_3ccf00:
    // 0x3ccf00: 0xc1036da  jal         func_40DB68
label_3ccf04:
    if (ctx->pc == 0x3CCF04u) {
        ctx->pc = 0x3CCF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCF00u;
        // 0x3ccf04: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCF08u;
        goto label_3ccf08;
    }
    ctx->pc = 0x3CCF00u;
    SET_GPR_U32(ctx, 31, 0x3CCF08u);
    ctx->pc = 0x3CCF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCF00u;
    // 0x3ccf04: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3CCF00u, 0x3CCF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCF08u;
label_3ccf08:
    // 0x3ccf08: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x3ccf08u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3ccf0c:
    // 0x3ccf0c: 0xc0f537a  jal         func_3D4DE8
label_3ccf10:
    if (ctx->pc == 0x3CCF10u) {
        ctx->pc = 0x3CCF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCF0Cu;
        // 0x3ccf10: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCF14u;
        goto label_3ccf14;
    }
    ctx->pc = 0x3CCF0Cu;
    SET_GPR_U32(ctx, 31, 0x3CCF14u);
    ctx->pc = 0x3CCF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCF0Cu;
    // 0x3ccf10: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4DE8u, 0x3CCF0Cu, 0x3CCF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCF14u;
label_3ccf14:
    // 0x3ccf14: 0x18400060  blez        $v0, . + 4 + (0x60 << 2)
label_3ccf18:
    if (ctx->pc == 0x3CCF18u) {
        ctx->pc = 0x3CCF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCF14u;
        // 0x3ccf18: 0x8fa30040  lw          $v1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCF1Cu;
        goto label_3ccf1c;
    }
    ctx->pc = 0x3CCF14u;
    {
        const bool branch_taken_0x3ccf14 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3CCF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCF14u;
        // 0x3ccf18: 0x8fa30040  lw          $v1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccf14) {
            ctx->pc = 0x3CD098u;
            goto label_3cd098;
        }
    }
    ctx->pc = 0x3CCF1Cu;
label_3ccf1c:
    // 0x3ccf1c: 0xc0c527a  jal         func_3149E8
label_3ccf20:
    if (ctx->pc == 0x3CCF20u) {
        ctx->pc = 0x3CCF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCF1Cu;
        // 0x3ccf20: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCF24u;
        goto label_3ccf24;
    }
    ctx->pc = 0x3CCF1Cu;
    SET_GPR_U32(ctx, 31, 0x3CCF24u);
    ctx->pc = 0x3CCF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCF1Cu;
    // 0x3ccf20: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3149E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3149E8u, 0x3CCF1Cu, 0x3CCF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCF24u;
label_3ccf24:
    // 0x3ccf24: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3ccf28:
    if (ctx->pc == 0x3CCF28u) {
        ctx->pc = 0x3CCF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCF24u;
        // 0x3ccf28: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCF2Cu;
        goto label_3ccf2c;
    }
    ctx->pc = 0x3CCF24u;
    {
        const bool branch_taken_0x3ccf24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CCF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCF24u;
        // 0x3ccf28: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccf24) {
            ctx->pc = 0x3CCF3Cu;
            goto label_3ccf3c;
        }
    }
    ctx->pc = 0x3CCF2Cu;
label_3ccf2c:
    // 0x3ccf2c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3ccf2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3ccf30:
    // 0x3ccf30: 0xc0c5440  jal         func_315100
label_3ccf34:
    if (ctx->pc == 0x3CCF34u) {
        ctx->pc = 0x3CCF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCF30u;
        // 0x3ccf34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCF38u;
        goto label_3ccf38;
    }
    ctx->pc = 0x3CCF30u;
    SET_GPR_U32(ctx, 31, 0x3CCF38u);
    ctx->pc = 0x3CCF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCF30u;
    // 0x3ccf34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315100u, 0x3CCF30u, 0x3CCF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCF38u;
label_3ccf38:
    // 0x3ccf38: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3ccf38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3ccf3c:
    // 0x3ccf3c: 0x2463b1e0  addiu       $v1, $v1, -0x4E20
    ctx->pc = 0x3ccf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947296));
label_3ccf40:
    // 0x3ccf40: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x3ccf40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_3ccf44:
    // 0x3ccf44: 0x2a29021  addu        $s2, $s5, $v0
    ctx->pc = 0x3ccf44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_3ccf48:
    // 0x3ccf48: 0x8e500014  lw          $s0, 0x14($s2)
    ctx->pc = 0x3ccf48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_3ccf4c:
    // 0x3ccf4c: 0x5200002c  beql        $s0, $zero, . + 4 + (0x2C << 2)
label_3ccf50:
    if (ctx->pc == 0x3CCF50u) {
        ctx->pc = 0x3CCF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCF4Cu;
        // 0x3ccf50: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCF54u;
        goto label_3ccf54;
    }
    ctx->pc = 0x3CCF4Cu;
    {
        const bool branch_taken_0x3ccf4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ccf4c) {
            ctx->pc = 0x3CCF50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CCF4Cu;
            // 0x3ccf50: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CD000u;
            goto label_3cd000;
        }
    }
    ctx->pc = 0x3CCF54u;
label_3ccf54:
    // 0x3ccf54: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3ccf54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ccf58:
    // 0x3ccf58: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x3ccf58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_3ccf5c:
    // 0x3ccf5c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_3ccf60:
    if (ctx->pc == 0x3CCF60u) {
        ctx->pc = 0x3CCF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCF5Cu;
        // 0x3ccf60: 0x8c51000c  lw          $s1, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCF64u;
        goto label_3ccf64;
    }
    ctx->pc = 0x3CCF5Cu;
    {
        const bool branch_taken_0x3ccf5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CCF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCF5Cu;
        // 0x3ccf60: 0x8c51000c  lw          $s1, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccf5c) {
            ctx->pc = 0x3CCF74u;
            goto label_3ccf74;
        }
    }
    ctx->pc = 0x3CCF64u;
label_3ccf64:
    // 0x3ccf64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ccf64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ccf68:
    // 0x3ccf68: 0xc0c8e04  jal         func_323810
label_3ccf6c:
    if (ctx->pc == 0x3CCF6Cu) {
        ctx->pc = 0x3CCF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCF68u;
        // 0x3ccf6c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCF70u;
        goto label_3ccf70;
    }
    ctx->pc = 0x3CCF68u;
    SET_GPR_U32(ctx, 31, 0x3CCF70u);
    ctx->pc = 0x3CCF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCF68u;
    // 0x3ccf6c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323810u, 0x3CCF68u, 0x3CCF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCF70u;
label_3ccf70:
    // 0x3ccf70: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x3ccf70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
label_3ccf74:
    // 0x3ccf74: 0x8e640038  lw          $a0, 0x38($s3)
    ctx->pc = 0x3ccf74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
label_3ccf78:
    // 0x3ccf78: 0x52040021  beql        $s0, $a0, . + 4 + (0x21 << 2)
label_3ccf7c:
    if (ctx->pc == 0x3CCF7Cu) {
        ctx->pc = 0x3CCF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCF78u;
        // 0x3ccf7c: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCF80u;
        goto label_3ccf80;
    }
    ctx->pc = 0x3CCF78u;
    {
        const bool branch_taken_0x3ccf78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        if (branch_taken_0x3ccf78) {
            ctx->pc = 0x3CCF7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CCF78u;
            // 0x3ccf7c: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CD000u;
            goto label_3cd000;
        }
    }
    ctx->pc = 0x3CCF80u;
label_3ccf80:
    // 0x3ccf80: 0x8e650034  lw          $a1, 0x34($s3)
    ctx->pc = 0x3ccf80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_3ccf84:
    // 0x3ccf84: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_3ccf88:
    if (ctx->pc == 0x3CCF88u) {
        ctx->pc = 0x3CCF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCF84u;
        // 0x3ccf88: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCF8Cu;
        goto label_3ccf8c;
    }
    ctx->pc = 0x3CCF84u;
    {
        const bool branch_taken_0x3ccf84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CCF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCF84u;
        // 0x3ccf88: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccf84) {
            ctx->pc = 0x3CCF98u;
            goto label_3ccf98;
        }
    }
    ctx->pc = 0x3CCF8Cu;
label_3ccf8c:
    // 0x3ccf8c: 0xc0f489c  jal         func_3D2270
label_3ccf90:
    if (ctx->pc == 0x3CCF90u) {
        ctx->pc = 0x3CCF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCF8Cu;
        // 0x3ccf90: 0x8e66003c  lw          $a2, 0x3C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCF94u;
        goto label_3ccf94;
    }
    ctx->pc = 0x3CCF8Cu;
    SET_GPR_U32(ctx, 31, 0x3CCF94u);
    ctx->pc = 0x3CCF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCF8Cu;
    // 0x3ccf90: 0x8e66003c  lw          $a2, 0x3C($s3) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D2270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D2270u, 0x3CCF8Cu, 0x3CCF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCF94u;
label_3ccf94:
    // 0x3ccf94: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x3ccf94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_3ccf98:
    // 0x3ccf98: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3ccf98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_3ccf9c:
    // 0x3ccf9c: 0x2228818  mult        $s1, $s1, $v0
    ctx->pc = 0x3ccf9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_3ccfa0:
    // 0x3ccfa0: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x3ccfa0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3ccfa4:
    // 0x3ccfa4: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_3ccfa8:
    if (ctx->pc == 0x3CCFA8u) {
        ctx->pc = 0x3CCFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCFA4u;
        // 0x3ccfa8: 0x8e650034  lw          $a1, 0x34($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCFACu;
        goto label_3ccfac;
    }
    ctx->pc = 0x3CCFA4u;
    {
        const bool branch_taken_0x3ccfa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ccfa4) {
            ctx->pc = 0x3CCFA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CCFA4u;
            // 0x3ccfa8: 0x8e650034  lw          $a1, 0x34($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CCFE4u;
            goto label_3ccfe4;
        }
    }
    ctx->pc = 0x3CCFACu;
label_3ccfac:
    // 0x3ccfac: 0x8e640034  lw          $a0, 0x34($s3)
    ctx->pc = 0x3ccfacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_3ccfb0:
    // 0x3ccfb0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_3ccfb4:
    if (ctx->pc == 0x3CCFB4u) {
        ctx->pc = 0x3CCFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCFB0u;
        // 0x3ccfb4: 0xafb10038  sw          $s1, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCFB8u;
        goto label_3ccfb8;
    }
    ctx->pc = 0x3CCFB0u;
    {
        const bool branch_taken_0x3ccfb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ccfb0) {
            ctx->pc = 0x3CCFB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CCFB0u;
            // 0x3ccfb4: 0xafb10038  sw          $s1, 0x38($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CCFC4u;
            goto label_3ccfc4;
        }
    }
    ctx->pc = 0x3CCFB8u;
label_3ccfb8:
    // 0x3ccfb8: 0xc10705c  jal         func_41C170
label_3ccfbc:
    if (ctx->pc == 0x3CCFBCu) {
        ctx->pc = 0x3CCFC0u;
        goto label_3ccfc0;
    }
    ctx->pc = 0x3CCFB8u;
    SET_GPR_U32(ctx, 31, 0x3CCFC0u);
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3CCFB8u, 0x3CCFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCFC0u;
label_3ccfc0:
    // 0x3ccfc0: 0xafb10038  sw          $s1, 0x38($sp)
    ctx->pc = 0x3ccfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 17));
label_3ccfc4:
    // 0x3ccfc4: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x3ccfc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3ccfc8:
    // 0x3ccfc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ccfc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ccfcc:
    // 0x3ccfcc: 0xc107034  jal         func_41C0D0
label_3ccfd0:
    if (ctx->pc == 0x3CCFD0u) {
        ctx->pc = 0x3CCFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCFCCu;
        // 0x3ccfd0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCFD4u;
        goto label_3ccfd4;
    }
    ctx->pc = 0x3CCFCCu;
    SET_GPR_U32(ctx, 31, 0x3CCFD4u);
    ctx->pc = 0x3CCFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCFCCu;
    // 0x3ccfd0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C0D0u, 0x3CCFCCu, 0x3CCFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCFD4u;
label_3ccfd4:
    // 0x3ccfd4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3ccfd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ccfd8:
    // 0x3ccfd8: 0xc107078  jal         func_41C1E0
label_3ccfdc:
    if (ctx->pc == 0x3CCFDCu) {
        ctx->pc = 0x3CCFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCFD8u;
        // 0x3ccfdc: 0xae620034  sw          $v0, 0x34($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCFE0u;
        goto label_3ccfe0;
    }
    ctx->pc = 0x3CCFD8u;
    SET_GPR_U32(ctx, 31, 0x3CCFE0u);
    ctx->pc = 0x3CCFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCFD8u;
    // 0x3ccfdc: 0xae620034  sw          $v0, 0x34($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C1E0u, 0x3CCFD8u, 0x3CCFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCFE0u;
label_3ccfe0:
    // 0x3ccfe0: 0x8e650034  lw          $a1, 0x34($s3)
    ctx->pc = 0x3ccfe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_3ccfe4:
    // 0x3ccfe4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ccfe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ccfe8:
    // 0x3ccfe8: 0xc0f47a8  jal         func_3D1EA0
label_3ccfec:
    if (ctx->pc == 0x3CCFECu) {
        ctx->pc = 0x3CCFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCFE8u;
        // 0x3ccfec: 0x8e460018  lw          $a2, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCFF0u;
        goto label_3ccff0;
    }
    ctx->pc = 0x3CCFE8u;
    SET_GPR_U32(ctx, 31, 0x3CCFF0u);
    ctx->pc = 0x3CCFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCFE8u;
    // 0x3ccfec: 0x8e460018  lw          $a2, 0x18($s2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D1EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D1EA0u, 0x3CCFE8u, 0x3CCFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCFF0u;
label_3ccff0:
    // 0x3ccff0: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x3ccff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_3ccff4:
    // 0x3ccff4: 0xae700038  sw          $s0, 0x38($s3)
    ctx->pc = 0x3ccff4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 16));
label_3ccff8:
    // 0x3ccff8: 0xae63003c  sw          $v1, 0x3C($s3)
    ctx->pc = 0x3ccff8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 3));
label_3ccffc:
    // 0x3ccffc: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x3ccffcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3cd000:
    // 0x3cd000: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3cd000u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3cd004:
    // 0x3cd004: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3cd004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cd008:
    // 0x3cd008: 0xc0f3078  jal         func_3CC1E0
label_3cd00c:
    if (ctx->pc == 0x3CD00Cu) {
        ctx->pc = 0x3CD00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD008u;
        // 0x3cd00c: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD010u;
        goto label_3cd010;
    }
    ctx->pc = 0x3CD008u;
    SET_GPR_U32(ctx, 31, 0x3CD010u);
    ctx->pc = 0x3CD00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD008u;
    // 0x3cd00c: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CC1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC1E0u, 0x3CD008u, 0x3CD010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD010u;
label_3cd010:
    // 0x3cd010: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3cd010u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cd014:
    // 0x3cd014: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_3cd018:
    if (ctx->pc == 0x3CD018u) {
        ctx->pc = 0x3CD018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD014u;
        // 0x3cd018: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD01Cu;
        goto label_3cd01c;
    }
    ctx->pc = 0x3CD014u;
    {
        const bool branch_taken_0x3cd014 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CD018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD014u;
        // 0x3cd018: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd014) {
            ctx->pc = 0x3CD024u;
            goto label_3cd024;
        }
    }
    ctx->pc = 0x3CD01Cu;
label_3cd01c:
    // 0x3cd01c: 0x10000020  b           . + 4 + (0x20 << 2)
label_3cd020:
    if (ctx->pc == 0x3CD020u) {
        ctx->pc = 0x3CD020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD01Cu;
        // 0x3cd020: 0x26d40001  addiu       $s4, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD024u;
        goto label_3cd024;
    }
    ctx->pc = 0x3CD01Cu;
    {
        const bool branch_taken_0x3cd01c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CD020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD01Cu;
        // 0x3cd020: 0x26d40001  addiu       $s4, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd01c) {
            ctx->pc = 0x3CD0A0u;
            goto label_3cd0a0;
        }
    }
    ctx->pc = 0x3CD024u;
label_3cd024:
    // 0x3cd024: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3cd024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cd028:
    // 0x3cd028: 0x1ae0000d  blez        $s7, . + 4 + (0xD << 2)
label_3cd02c:
    if (ctx->pc == 0x3CD02Cu) {
        ctx->pc = 0x3CD02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD028u;
        // 0x3cd02c: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD030u;
        goto label_3cd030;
    }
    ctx->pc = 0x3CD028u;
    {
        const bool branch_taken_0x3cd028 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x3CD02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD028u;
        // 0x3cd02c: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd028) {
            ctx->pc = 0x3CD060u;
            goto label_3cd060;
        }
    }
    ctx->pc = 0x3CD030u;
label_3cd030:
    // 0x3cd030: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x3cd030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_3cd034:
    // 0x3cd034: 0x5202000a  beql        $s0, $v0, . + 4 + (0xA << 2)
label_3cd038:
    if (ctx->pc == 0x3CD038u) {
        ctx->pc = 0x3CD038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD034u;
        // 0x3cd038: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD03Cu;
        goto label_3cd03c;
    }
    ctx->pc = 0x3CD034u;
    {
        const bool branch_taken_0x3cd034 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3cd034) {
            ctx->pc = 0x3CD038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CD034u;
            // 0x3cd038: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CD060u;
            goto label_3cd060;
        }
    }
    ctx->pc = 0x3CD03Cu;
label_3cd03c:
    // 0x3cd03c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3cd03cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3cd040:
    // 0x3cd040: 0x97102a  slt         $v0, $a0, $s7
    ctx->pc = 0x3cd040u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_3cd044:
    // 0x3cd044: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3cd048:
    if (ctx->pc == 0x3CD048u) {
        ctx->pc = 0x3CD048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD044u;
        // 0x3cd048: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD04Cu;
        goto label_3cd04c;
    }
    ctx->pc = 0x3CD044u;
    {
        const bool branch_taken_0x3cd044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CD048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD044u;
        // 0x3cd048: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd044) {
            ctx->pc = 0x3CD060u;
            goto label_3cd060;
        }
    }
    ctx->pc = 0x3CD04Cu;
label_3cd04c:
    // 0x3cd04c: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x3cd04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_3cd050:
    // 0x3cd050: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3cd050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3cd054:
    // 0x3cd054: 0x5603fffa  bnel        $s0, $v1, . + 4 + (-0x6 << 2)
label_3cd058:
    if (ctx->pc == 0x3CD058u) {
        ctx->pc = 0x3CD058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD054u;
        // 0x3cd058: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD05Cu;
        goto label_3cd05c;
    }
    ctx->pc = 0x3CD054u;
    {
        const bool branch_taken_0x3cd054 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x3cd054) {
            ctx->pc = 0x3CD058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CD054u;
            // 0x3cd058: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CD040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cd040;
        }
    }
    ctx->pc = 0x3CD05Cu;
label_3cd05c:
    // 0x3cd05c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3cd05cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cd060:
    // 0x3cd060: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_3cd064:
    if (ctx->pc == 0x3CD064u) {
        ctx->pc = 0x3CD064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD060u;
        // 0x3cd064: 0x8fa3004c  lw          $v1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD068u;
        goto label_3cd068;
    }
    ctx->pc = 0x3CD060u;
    {
        const bool branch_taken_0x3cd060 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CD064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD060u;
        // 0x3cd064: 0x8fa3004c  lw          $v1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd060) {
            ctx->pc = 0x3CD090u;
            goto label_3cd090;
        }
    }
    ctx->pc = 0x3CD068u;
label_3cd068:
    // 0x3cd068: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x3cd068u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_3cd06c:
    // 0x3cd06c: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x3cd06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_3cd070:
    // 0x3cd070: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x3cd070u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_3cd074:
    // 0x3cd074: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x3cd074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_3cd078:
    // 0x3cd078: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3cd078u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_3cd07c:
    // 0x3cd07c: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x3cd07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_3cd080:
    // 0x3cd080: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x3cd080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_3cd084:
    // 0x3cd084: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x3cd084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
label_3cd088:
    // 0x3cd088: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x3cd088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_3cd08c:
    // 0x3cd08c: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x3cd08cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_3cd090:
    // 0x3cd090: 0x10000003  b           . + 4 + (0x3 << 2)
label_3cd094:
    if (ctx->pc == 0x3CD094u) {
        ctx->pc = 0x3CD094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD090u;
        // 0x3cd094: 0xafa50040  sw          $a1, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD098u;
        goto label_3cd098;
    }
    ctx->pc = 0x3CD090u;
    {
        const bool branch_taken_0x3cd090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CD094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD090u;
        // 0x3cd094: 0xafa50040  sw          $a1, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd090) {
            ctx->pc = 0x3CD0A0u;
            goto label_3cd0a0;
        }
    }
    ctx->pc = 0x3CD098u;
label_3cd098:
    // 0x3cd098: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3cd098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3cd09c:
    // 0x3cd09c: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x3cd09cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
label_3cd0a0:
    // 0x3cd0a0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3cd0a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3cd0a4:
    // 0x3cd0a4: 0x296102a  slt         $v0, $s4, $s6
    ctx->pc = 0x3cd0a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_3cd0a8:
    // 0x3cd0a8: 0x1440ff95  bnez        $v0, . + 4 + (-0x6B << 2)
label_3cd0ac:
    if (ctx->pc == 0x3CD0ACu) {
        ctx->pc = 0x3CD0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD0A8u;
        // 0x3cd0ac: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD0B0u;
        goto label_3cd0b0;
    }
    ctx->pc = 0x3CD0A8u;
    {
        const bool branch_taken_0x3cd0a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CD0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD0A8u;
        // 0x3cd0ac: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd0a8) {
            ctx->pc = 0x3CCF00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ccf00;
        }
    }
    ctx->pc = 0x3CD0B0u;
label_3cd0b0:
    // 0x3cd0b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3cd0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3cd0b4:
    // 0x3cd0b4: 0x56220096  bnel        $s1, $v0, . + 4 + (0x96 << 2)
label_3cd0b8:
    if (ctx->pc == 0x3CD0B8u) {
        ctx->pc = 0x3CD0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD0B4u;
        // 0x3cd0b8: 0x8e650034  lw          $a1, 0x34($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD0BCu;
        goto label_3cd0bc;
    }
    ctx->pc = 0x3CD0B4u;
    {
        const bool branch_taken_0x3cd0b4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x3cd0b4) {
            ctx->pc = 0x3CD0B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CD0B4u;
            // 0x3cd0b8: 0x8e650034  lw          $a1, 0x34($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CD310u;
            goto label_3cd310;
        }
    }
    ctx->pc = 0x3CD0BCu;
label_3cd0bc:
    // 0x3cd0bc: 0x8e660020  lw          $a2, 0x20($s3)
    ctx->pc = 0x3cd0bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_3cd0c0:
    // 0x3cd0c0: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_3cd0c4:
    if (ctx->pc == 0x3CD0C4u) {
        ctx->pc = 0x3CD0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD0C0u;
        // 0x3cd0c4: 0x8fa3003c  lw          $v1, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD0C8u;
        goto label_3cd0c8;
    }
    ctx->pc = 0x3CD0C0u;
    {
        const bool branch_taken_0x3cd0c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CD0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD0C0u;
        // 0x3cd0c4: 0x8fa3003c  lw          $v1, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd0c0) {
            ctx->pc = 0x3CD0D4u;
            goto label_3cd0d4;
        }
    }
    ctx->pc = 0x3CD0C8u;
label_3cd0c8:
    // 0x3cd0c8: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x3cd0c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_3cd0cc:
    // 0x3cd0cc: 0x50400090  beql        $v0, $zero, . + 4 + (0x90 << 2)
label_3cd0d0:
    if (ctx->pc == 0x3CD0D0u) {
        ctx->pc = 0x3CD0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD0CCu;
        // 0x3cd0d0: 0x8e650034  lw          $a1, 0x34($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD0D4u;
        goto label_3cd0d4;
    }
    ctx->pc = 0x3CD0CCu;
    {
        const bool branch_taken_0x3cd0cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cd0cc) {
            ctx->pc = 0x3CD0D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CD0CCu;
            // 0x3cd0d0: 0x8e650034  lw          $a1, 0x34($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CD310u;
            goto label_3cd310;
        }
    }
    ctx->pc = 0x3CD0D4u;
label_3cd0d4:
    // 0x3cd0d4: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x3cd0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_3cd0d8:
    // 0x3cd0d8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3cd0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3cd0dc:
    // 0x3cd0dc: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x3cd0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_3cd0e0:
    // 0x3cd0e0: 0x442823  subu        $a1, $v0, $a0
    ctx->pc = 0x3cd0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3cd0e4:
    // 0x3cd0e4: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x3cd0e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_3cd0e8:
    // 0x3cd0e8: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
label_3cd0ec:
    if (ctx->pc == 0x3CD0ECu) {
        ctx->pc = 0x3CD0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD0E8u;
        // 0x3cd0ec: 0x3280a  movz        $a1, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD0F0u;
        goto label_3cd0f0;
    }
    ctx->pc = 0x3CD0E8u;
    {
        const bool branch_taken_0x3cd0e8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CD0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD0E8u;
        // 0x3cd0ec: 0x3280a  movz        $a1, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd0e8) {
            ctx->pc = 0x3CD0F8u;
            goto label_3cd0f8;
        }
    }
    ctx->pc = 0x3CD0F0u;
label_3cd0f0:
    // 0x3cd0f0: 0x10000007  b           . + 4 + (0x7 << 2)
label_3cd0f4:
    if (ctx->pc == 0x3CD0F4u) {
        ctx->pc = 0x3CD0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD0F0u;
        // 0x3cd0f4: 0x8fb60018  lw          $s6, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD0F8u;
        goto label_3cd0f8;
    }
    ctx->pc = 0x3CD0F0u;
    {
        const bool branch_taken_0x3cd0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CD0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD0F0u;
        // 0x3cd0f4: 0x8fb60018  lw          $s6, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd0f0) {
            ctx->pc = 0x3CD110u;
            goto label_3cd110;
        }
    }
    ctx->pc = 0x3CD0F8u;
label_3cd0f8:
    // 0x3cd0f8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x3cd0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_3cd0fc:
    // 0x3cd0fc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3cd0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3cd100:
    // 0x3cd100: 0xc31023  subu        $v0, $a2, $v1
    ctx->pc = 0x3cd100u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_3cd104:
    // 0x3cd104: 0xa2b021  addu        $s6, $a1, $v0
    ctx->pc = 0x3cd104u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3cd108:
    // 0x3cd108: 0x96182a  slt         $v1, $a0, $s6
    ctx->pc = 0x3cd108u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_3cd10c:
    // 0x3cd10c: 0x83b00b  movn        $s6, $a0, $v1
    ctx->pc = 0x3cd10cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 4));
label_3cd110:
    // 0x3cd110: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3cd110u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3cd114:
    // 0x3cd114: 0x296102a  slt         $v0, $s4, $s6
    ctx->pc = 0x3cd114u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_3cd118:
    // 0x3cd118: 0x1040007c  beqz        $v0, . + 4 + (0x7C << 2)
label_3cd11c:
    if (ctx->pc == 0x3CD11Cu) {
        ctx->pc = 0x3CD11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD118u;
        // 0x3cd11c: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD120u;
        goto label_3cd120;
    }
    ctx->pc = 0x3CD118u;
    {
        const bool branch_taken_0x3cd118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CD11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD118u;
        // 0x3cd11c: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd118) {
            ctx->pc = 0x3CD30Cu;
            goto label_3cd30c;
        }
    }
    ctx->pc = 0x3CD120u;
label_3cd120:
    // 0x3cd120: 0x171880  sll         $v1, $s7, 2
    ctx->pc = 0x3cd120u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
label_3cd124:
    // 0x3cd124: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3cd124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3cd128:
    // 0x3cd128: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x3cd128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
label_3cd12c:
    // 0x3cd12c: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x3cd12cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_3cd130:
    // 0x3cd130: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x3cd130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
label_3cd134:
    // 0x3cd134: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x3cd134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_3cd138:
    // 0x3cd138: 0xc1036da  jal         func_40DB68
label_3cd13c:
    if (ctx->pc == 0x3CD13Cu) {
        ctx->pc = 0x3CD13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD138u;
        // 0x3cd13c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD140u;
        goto label_3cd140;
    }
    ctx->pc = 0x3CD138u;
    SET_GPR_U32(ctx, 31, 0x3CD140u);
    ctx->pc = 0x3CD13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD138u;
    // 0x3cd13c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3CD138u, 0x3CD140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD140u;
label_3cd140:
    // 0x3cd140: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x3cd140u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3cd144:
    // 0x3cd144: 0x92a20002  lbu         $v0, 0x2($s5)
    ctx->pc = 0x3cd144u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
label_3cd148:
    // 0x3cd148: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3cd148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_3cd14c:
    // 0x3cd14c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3cd150:
    if (ctx->pc == 0x3CD150u) {
        ctx->pc = 0x3CD150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD14Cu;
        // 0x3cd150: 0x8fa30040  lw          $v1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD154u;
        goto label_3cd154;
    }
    ctx->pc = 0x3CD14Cu;
    {
        const bool branch_taken_0x3cd14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CD150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD14Cu;
        // 0x3cd150: 0x8fa30040  lw          $v1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd14c) {
            ctx->pc = 0x3CD168u;
            goto label_3cd168;
        }
    }
    ctx->pc = 0x3CD154u;
label_3cd154:
    // 0x3cd154: 0xc0f5386  jal         func_3D4E18
label_3cd158:
    if (ctx->pc == 0x3CD158u) {
        ctx->pc = 0x3CD158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD154u;
        // 0x3cd158: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD15Cu;
        goto label_3cd15c;
    }
    ctx->pc = 0x3CD154u;
    SET_GPR_U32(ctx, 31, 0x3CD15Cu);
    ctx->pc = 0x3CD158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD154u;
    // 0x3cd158: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4E18u, 0x3CD154u, 0x3CD15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD15Cu;
label_3cd15c:
    // 0x3cd15c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_3cd160:
    if (ctx->pc == 0x3CD160u) {
        ctx->pc = 0x3CD160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD15Cu;
        // 0x3cd160: 0x8eb00018  lw          $s0, 0x18($s5) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD164u;
        goto label_3cd164;
    }
    ctx->pc = 0x3CD15Cu;
    {
        const bool branch_taken_0x3cd15c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cd15c) {
            ctx->pc = 0x3CD160u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CD15Cu;
            // 0x3cd160: 0x8eb00018  lw          $s0, 0x18($s5) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CD174u;
            goto label_3cd174;
        }
    }
    ctx->pc = 0x3CD164u;
label_3cd164:
    // 0x3cd164: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x3cd164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_3cd168:
    // 0x3cd168: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3cd168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3cd16c:
    // 0x3cd16c: 0x10000063  b           . + 4 + (0x63 << 2)
label_3cd170:
    if (ctx->pc == 0x3CD170u) {
        ctx->pc = 0x3CD170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD16Cu;
        // 0x3cd170: 0xafa30040  sw          $v1, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD174u;
        goto label_3cd174;
    }
    ctx->pc = 0x3CD16Cu;
    {
        const bool branch_taken_0x3cd16c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CD170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD16Cu;
        // 0x3cd170: 0xafa30040  sw          $v1, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd16c) {
            ctx->pc = 0x3CD2FCu;
            goto label_3cd2fc;
        }
    }
    ctx->pc = 0x3CD174u;
label_3cd174:
    // 0x3cd174: 0xc0c529a  jal         func_314A68
label_3cd178:
    if (ctx->pc == 0x3CD178u) {
        ctx->pc = 0x3CD178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD174u;
        // 0x3cd178: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD17Cu;
        goto label_3cd17c;
    }
    ctx->pc = 0x3CD174u;
    SET_GPR_U32(ctx, 31, 0x3CD17Cu);
    ctx->pc = 0x3CD178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD174u;
    // 0x3cd178: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314A68u, 0x3CD174u, 0x3CD17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD17Cu;
label_3cd17c:
    // 0x3cd17c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3cd180:
    if (ctx->pc == 0x3CD180u) {
        ctx->pc = 0x3CD180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD17Cu;
        // 0x3cd180: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD184u;
        goto label_3cd184;
    }
    ctx->pc = 0x3CD17Cu;
    {
        const bool branch_taken_0x3cd17c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CD180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD17Cu;
        // 0x3cd180: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd17c) {
            ctx->pc = 0x3CD194u;
            goto label_3cd194;
        }
    }
    ctx->pc = 0x3CD184u;
label_3cd184:
    // 0x3cd184: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cd184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cd188:
    // 0x3cd188: 0xc0c5380  jal         func_314E00
label_3cd18c:
    if (ctx->pc == 0x3CD18Cu) {
        ctx->pc = 0x3CD18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD188u;
        // 0x3cd18c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD190u;
        goto label_3cd190;
    }
    ctx->pc = 0x3CD188u;
    SET_GPR_U32(ctx, 31, 0x3CD190u);
    ctx->pc = 0x3CD18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD188u;
    // 0x3cd18c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314E00u, 0x3CD188u, 0x3CD190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD190u;
label_3cd190:
    // 0x3cd190: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3cd190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3cd194:
    // 0x3cd194: 0x2463b1e0  addiu       $v1, $v1, -0x4E20
    ctx->pc = 0x3cd194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947296));
label_3cd198:
    // 0x3cd198: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3cd198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3cd19c:
    // 0x3cd19c: 0x2a29021  addu        $s2, $s5, $v0
    ctx->pc = 0x3cd19cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_3cd1a0:
    // 0x3cd1a0: 0x8e510014  lw          $s1, 0x14($s2)
    ctx->pc = 0x3cd1a0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_3cd1a4:
    // 0x3cd1a4: 0x5220002c  beql        $s1, $zero, . + 4 + (0x2C << 2)
label_3cd1a8:
    if (ctx->pc == 0x3CD1A8u) {
        ctx->pc = 0x3CD1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD1A4u;
        // 0x3cd1a8: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD1ACu;
        goto label_3cd1ac;
    }
    ctx->pc = 0x3CD1A4u;
    {
        const bool branch_taken_0x3cd1a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cd1a4) {
            ctx->pc = 0x3CD1A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CD1A4u;
            // 0x3cd1a8: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CD258u;
            goto label_3cd258;
        }
    }
    ctx->pc = 0x3CD1ACu;
label_3cd1ac:
    // 0x3cd1ac: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3cd1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3cd1b0:
    // 0x3cd1b0: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x3cd1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_3cd1b4:
    // 0x3cd1b4: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_3cd1b8:
    if (ctx->pc == 0x3CD1B8u) {
        ctx->pc = 0x3CD1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD1B4u;
        // 0x3cd1b8: 0x8c50000c  lw          $s0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD1BCu;
        goto label_3cd1bc;
    }
    ctx->pc = 0x3CD1B4u;
    {
        const bool branch_taken_0x3cd1b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CD1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD1B4u;
        // 0x3cd1b8: 0x8c50000c  lw          $s0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd1b4) {
            ctx->pc = 0x3CD1CCu;
            goto label_3cd1cc;
        }
    }
    ctx->pc = 0x3CD1BCu;
label_3cd1bc:
    // 0x3cd1bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cd1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cd1c0:
    // 0x3cd1c0: 0xc0c8e04  jal         func_323810
label_3cd1c4:
    if (ctx->pc == 0x3CD1C4u) {
        ctx->pc = 0x3CD1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD1C0u;
        // 0x3cd1c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD1C8u;
        goto label_3cd1c8;
    }
    ctx->pc = 0x3CD1C0u;
    SET_GPR_U32(ctx, 31, 0x3CD1C8u);
    ctx->pc = 0x3CD1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD1C0u;
    // 0x3cd1c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323810u, 0x3CD1C0u, 0x3CD1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD1C8u;
label_3cd1c8:
    // 0x3cd1c8: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x3cd1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
label_3cd1cc:
    // 0x3cd1cc: 0x8e640038  lw          $a0, 0x38($s3)
    ctx->pc = 0x3cd1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
label_3cd1d0:
    // 0x3cd1d0: 0x52240021  beql        $s1, $a0, . + 4 + (0x21 << 2)
label_3cd1d4:
    if (ctx->pc == 0x3CD1D4u) {
        ctx->pc = 0x3CD1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD1D0u;
        // 0x3cd1d4: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD1D8u;
        goto label_3cd1d8;
    }
    ctx->pc = 0x3CD1D0u;
    {
        const bool branch_taken_0x3cd1d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 4));
        if (branch_taken_0x3cd1d0) {
            ctx->pc = 0x3CD1D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CD1D0u;
            // 0x3cd1d4: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CD258u;
            goto label_3cd258;
        }
    }
    ctx->pc = 0x3CD1D8u;
label_3cd1d8:
    // 0x3cd1d8: 0x8e650034  lw          $a1, 0x34($s3)
    ctx->pc = 0x3cd1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_3cd1dc:
    // 0x3cd1dc: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_3cd1e0:
    if (ctx->pc == 0x3CD1E0u) {
        ctx->pc = 0x3CD1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD1DCu;
        // 0x3cd1e0: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD1E4u;
        goto label_3cd1e4;
    }
    ctx->pc = 0x3CD1DCu;
    {
        const bool branch_taken_0x3cd1dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CD1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD1DCu;
        // 0x3cd1e0: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd1dc) {
            ctx->pc = 0x3CD1F0u;
            goto label_3cd1f0;
        }
    }
    ctx->pc = 0x3CD1E4u;
label_3cd1e4:
    // 0x3cd1e4: 0xc0f489c  jal         func_3D2270
label_3cd1e8:
    if (ctx->pc == 0x3CD1E8u) {
        ctx->pc = 0x3CD1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD1E4u;
        // 0x3cd1e8: 0x8e66003c  lw          $a2, 0x3C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD1ECu;
        goto label_3cd1ec;
    }
    ctx->pc = 0x3CD1E4u;
    SET_GPR_U32(ctx, 31, 0x3CD1ECu);
    ctx->pc = 0x3CD1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD1E4u;
    // 0x3cd1e8: 0x8e66003c  lw          $a2, 0x3C($s3) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D2270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D2270u, 0x3CD1E4u, 0x3CD1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD1ECu;
label_3cd1ec:
    // 0x3cd1ec: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x3cd1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_3cd1f0:
    // 0x3cd1f0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3cd1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_3cd1f4:
    // 0x3cd1f4: 0x2028018  mult        $s0, $s0, $v0
    ctx->pc = 0x3cd1f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_3cd1f8:
    // 0x3cd1f8: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x3cd1f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3cd1fc:
    // 0x3cd1fc: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_3cd200:
    if (ctx->pc == 0x3CD200u) {
        ctx->pc = 0x3CD200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD1FCu;
        // 0x3cd200: 0x8e650034  lw          $a1, 0x34($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD204u;
        goto label_3cd204;
    }
    ctx->pc = 0x3CD1FCu;
    {
        const bool branch_taken_0x3cd1fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cd1fc) {
            ctx->pc = 0x3CD200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CD1FCu;
            // 0x3cd200: 0x8e650034  lw          $a1, 0x34($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CD23Cu;
            goto label_3cd23c;
        }
    }
    ctx->pc = 0x3CD204u;
label_3cd204:
    // 0x3cd204: 0x8e640034  lw          $a0, 0x34($s3)
    ctx->pc = 0x3cd204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_3cd208:
    // 0x3cd208: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_3cd20c:
    if (ctx->pc == 0x3CD20Cu) {
        ctx->pc = 0x3CD20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD208u;
        // 0x3cd20c: 0xafb00038  sw          $s0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD210u;
        goto label_3cd210;
    }
    ctx->pc = 0x3CD208u;
    {
        const bool branch_taken_0x3cd208 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cd208) {
            ctx->pc = 0x3CD20Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CD208u;
            // 0x3cd20c: 0xafb00038  sw          $s0, 0x38($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CD21Cu;
            goto label_3cd21c;
        }
    }
    ctx->pc = 0x3CD210u;
label_3cd210:
    // 0x3cd210: 0xc10705c  jal         func_41C170
label_3cd214:
    if (ctx->pc == 0x3CD214u) {
        ctx->pc = 0x3CD218u;
        goto label_3cd218;
    }
    ctx->pc = 0x3CD210u;
    SET_GPR_U32(ctx, 31, 0x3CD218u);
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3CD210u, 0x3CD218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD218u;
label_3cd218:
    // 0x3cd218: 0xafb00038  sw          $s0, 0x38($sp)
    ctx->pc = 0x3cd218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 16));
label_3cd21c:
    // 0x3cd21c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x3cd21cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3cd220:
    // 0x3cd220: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cd220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cd224:
    // 0x3cd224: 0xc107034  jal         func_41C0D0
label_3cd228:
    if (ctx->pc == 0x3CD228u) {
        ctx->pc = 0x3CD228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD224u;
        // 0x3cd228: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD22Cu;
        goto label_3cd22c;
    }
    ctx->pc = 0x3CD224u;
    SET_GPR_U32(ctx, 31, 0x3CD22Cu);
    ctx->pc = 0x3CD228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD224u;
    // 0x3cd228: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C0D0u, 0x3CD224u, 0x3CD22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD22Cu;
label_3cd22c:
    // 0x3cd22c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3cd22cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cd230:
    // 0x3cd230: 0xc107078  jal         func_41C1E0
label_3cd234:
    if (ctx->pc == 0x3CD234u) {
        ctx->pc = 0x3CD234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD230u;
        // 0x3cd234: 0xae620034  sw          $v0, 0x34($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD238u;
        goto label_3cd238;
    }
    ctx->pc = 0x3CD230u;
    SET_GPR_U32(ctx, 31, 0x3CD238u);
    ctx->pc = 0x3CD234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD230u;
    // 0x3cd234: 0xae620034  sw          $v0, 0x34($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C1E0u, 0x3CD230u, 0x3CD238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD238u;
label_3cd238:
    // 0x3cd238: 0x8e650034  lw          $a1, 0x34($s3)
    ctx->pc = 0x3cd238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_3cd23c:
    // 0x3cd23c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3cd23cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cd240:
    // 0x3cd240: 0xc0f47a8  jal         func_3D1EA0
label_3cd244:
    if (ctx->pc == 0x3CD244u) {
        ctx->pc = 0x3CD244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD240u;
        // 0x3cd244: 0x8e460018  lw          $a2, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD248u;
        goto label_3cd248;
    }
    ctx->pc = 0x3CD240u;
    SET_GPR_U32(ctx, 31, 0x3CD248u);
    ctx->pc = 0x3CD244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD240u;
    // 0x3cd244: 0x8e460018  lw          $a2, 0x18($s2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D1EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D1EA0u, 0x3CD240u, 0x3CD248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD248u;
label_3cd248:
    // 0x3cd248: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x3cd248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_3cd24c:
    // 0x3cd24c: 0xae710038  sw          $s1, 0x38($s3)
    ctx->pc = 0x3cd24cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 17));
label_3cd250:
    // 0x3cd250: 0xae63003c  sw          $v1, 0x3C($s3)
    ctx->pc = 0x3cd250u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 3));
label_3cd254:
    // 0x3cd254: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x3cd254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3cd258:
    // 0x3cd258: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3cd258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cd25c:
    // 0x3cd25c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3cd25cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3cd260:
    // 0x3cd260: 0xc0f2ff6  jal         func_3CBFD8
label_3cd264:
    if (ctx->pc == 0x3CD264u) {
        ctx->pc = 0x3CD264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD260u;
        // 0x3cd264: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD268u;
        goto label_3cd268;
    }
    ctx->pc = 0x3CD260u;
    SET_GPR_U32(ctx, 31, 0x3CD268u);
    ctx->pc = 0x3CD264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD260u;
    // 0x3cd264: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CBFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CBFD8u, 0x3CD260u, 0x3CD268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD268u;
label_3cd268:
    // 0x3cd268: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3cd26c:
    if (ctx->pc == 0x3CD26Cu) {
        ctx->pc = 0x3CD26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD268u;
        // 0x3cd26c: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD270u;
        goto label_3cd270;
    }
    ctx->pc = 0x3CD268u;
    {
        const bool branch_taken_0x3cd268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CD26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD268u;
        // 0x3cd26c: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd268) {
            ctx->pc = 0x3CD278u;
            goto label_3cd278;
        }
    }
    ctx->pc = 0x3CD270u;
label_3cd270:
    // 0x3cd270: 0x10000022  b           . + 4 + (0x22 << 2)
label_3cd274:
    if (ctx->pc == 0x3CD274u) {
        ctx->pc = 0x3CD274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD270u;
        // 0x3cd274: 0x26d40001  addiu       $s4, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD278u;
        goto label_3cd278;
    }
    ctx->pc = 0x3CD270u;
    {
        const bool branch_taken_0x3cd270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CD274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD270u;
        // 0x3cd274: 0x26d40001  addiu       $s4, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd270) {
            ctx->pc = 0x3CD2FCu;
            goto label_3cd2fc;
        }
    }
    ctx->pc = 0x3CD278u;
label_3cd278:
    // 0x3cd278: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3cd278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cd27c:
    // 0x3cd27c: 0x2463b1e0  addiu       $v1, $v1, -0x4E20
    ctx->pc = 0x3cd27cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947296));
label_3cd280:
    // 0x3cd280: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3cd280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3cd284:
    // 0x3cd284: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x3cd284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_3cd288:
    // 0x3cd288: 0x2a29021  addu        $s2, $s5, $v0
    ctx->pc = 0x3cd288u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_3cd28c:
    // 0x3cd28c: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x3cd28cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3cd290:
    // 0x3cd290: 0x1ae0000d  blez        $s7, . + 4 + (0xD << 2)
label_3cd294:
    if (ctx->pc == 0x3CD294u) {
        ctx->pc = 0x3CD294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD290u;
        // 0x3cd294: 0x8e510014  lw          $s1, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD298u;
        goto label_3cd298;
    }
    ctx->pc = 0x3CD290u;
    {
        const bool branch_taken_0x3cd290 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x3CD294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD290u;
        // 0x3cd294: 0x8e510014  lw          $s1, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd290) {
            ctx->pc = 0x3CD2C8u;
            goto label_3cd2c8;
        }
    }
    ctx->pc = 0x3CD298u;
label_3cd298:
    // 0x3cd298: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x3cd298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_3cd29c:
    // 0x3cd29c: 0x5222000a  beql        $s1, $v0, . + 4 + (0xA << 2)
label_3cd2a0:
    if (ctx->pc == 0x3CD2A0u) {
        ctx->pc = 0x3CD2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD29Cu;
        // 0x3cd2a0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD2A4u;
        goto label_3cd2a4;
    }
    ctx->pc = 0x3CD29Cu;
    {
        const bool branch_taken_0x3cd29c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x3cd29c) {
            ctx->pc = 0x3CD2A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CD29Cu;
            // 0x3cd2a0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CD2C8u;
            goto label_3cd2c8;
        }
    }
    ctx->pc = 0x3CD2A4u;
label_3cd2a4:
    // 0x3cd2a4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3cd2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3cd2a8:
    // 0x3cd2a8: 0x97102a  slt         $v0, $a0, $s7
    ctx->pc = 0x3cd2a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_3cd2ac:
    // 0x3cd2ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3cd2b0:
    if (ctx->pc == 0x3CD2B0u) {
        ctx->pc = 0x3CD2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD2ACu;
        // 0x3cd2b0: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD2B4u;
        goto label_3cd2b4;
    }
    ctx->pc = 0x3CD2ACu;
    {
        const bool branch_taken_0x3cd2ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CD2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD2ACu;
        // 0x3cd2b0: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd2ac) {
            ctx->pc = 0x3CD2C8u;
            goto label_3cd2c8;
        }
    }
    ctx->pc = 0x3CD2B4u;
label_3cd2b4:
    // 0x3cd2b4: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x3cd2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_3cd2b8:
    // 0x3cd2b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3cd2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3cd2bc:
    // 0x3cd2bc: 0x5623fffa  bnel        $s1, $v1, . + 4 + (-0x6 << 2)
label_3cd2c0:
    if (ctx->pc == 0x3CD2C0u) {
        ctx->pc = 0x3CD2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD2BCu;
        // 0x3cd2c0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD2C4u;
        goto label_3cd2c4;
    }
    ctx->pc = 0x3CD2BCu;
    {
        const bool branch_taken_0x3cd2bc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x3cd2bc) {
            ctx->pc = 0x3CD2C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CD2BCu;
            // 0x3cd2c0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CD2A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cd2a8;
        }
    }
    ctx->pc = 0x3CD2C4u;
label_3cd2c4:
    // 0x3cd2c4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3cd2c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cd2c8:
    // 0x3cd2c8: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_3cd2cc:
    if (ctx->pc == 0x3CD2CCu) {
        ctx->pc = 0x3CD2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD2C8u;
        // 0x3cd2cc: 0x8fa30044  lw          $v1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD2D0u;
        goto label_3cd2d0;
    }
    ctx->pc = 0x3CD2C8u;
    {
        const bool branch_taken_0x3cd2c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CD2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD2C8u;
        // 0x3cd2cc: 0x8fa30044  lw          $v1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd2c8) {
            ctx->pc = 0x3CD2F8u;
            goto label_3cd2f8;
        }
    }
    ctx->pc = 0x3CD2D0u;
label_3cd2d0:
    // 0x3cd2d0: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x3cd2d0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_3cd2d4:
    // 0x3cd2d4: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x3cd2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_3cd2d8:
    // 0x3cd2d8: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x3cd2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
label_3cd2dc:
    // 0x3cd2dc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3cd2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3cd2e0:
    // 0x3cd2e0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3cd2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_3cd2e4:
    // 0x3cd2e4: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x3cd2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3cd2e8:
    // 0x3cd2e8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x3cd2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_3cd2ec:
    // 0x3cd2ec: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x3cd2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
label_3cd2f0:
    // 0x3cd2f0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x3cd2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_3cd2f4:
    // 0x3cd2f4: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x3cd2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_3cd2f8:
    // 0x3cd2f8: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x3cd2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_3cd2fc:
    // 0x3cd2fc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3cd2fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3cd300:
    // 0x3cd300: 0x296102a  slt         $v0, $s4, $s6
    ctx->pc = 0x3cd300u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_3cd304:
    // 0x3cd304: 0x5440ff8c  bnel        $v0, $zero, . + 4 + (-0x74 << 2)
label_3cd308:
    if (ctx->pc == 0x3CD308u) {
        ctx->pc = 0x3CD308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD304u;
        // 0x3cd308: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD30Cu;
        goto label_3cd30c;
    }
    ctx->pc = 0x3CD304u;
    {
        const bool branch_taken_0x3cd304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cd304) {
            ctx->pc = 0x3CD308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CD304u;
            // 0x3cd308: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CD138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cd138;
        }
    }
    ctx->pc = 0x3CD30Cu;
label_3cd30c:
    // 0x3cd30c: 0x8e650034  lw          $a1, 0x34($s3)
    ctx->pc = 0x3cd30cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_3cd310:
    // 0x3cd310: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
label_3cd314:
    if (ctx->pc == 0x3CD314u) {
        ctx->pc = 0x3CD314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD310u;
        // 0x3cd314: 0x8e62004c  lw          $v0, 0x4C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD318u;
        goto label_3cd318;
    }
    ctx->pc = 0x3CD310u;
    {
        const bool branch_taken_0x3cd310 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cd310) {
            ctx->pc = 0x3CD314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CD310u;
            // 0x3cd314: 0x8e62004c  lw          $v0, 0x4C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CD328u;
            goto label_3cd328;
        }
    }
    ctx->pc = 0x3CD318u;
label_3cd318:
    // 0x3cd318: 0x8e640038  lw          $a0, 0x38($s3)
    ctx->pc = 0x3cd318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
label_3cd31c:
    // 0x3cd31c: 0xc0f489c  jal         func_3D2270
label_3cd320:
    if (ctx->pc == 0x3CD320u) {
        ctx->pc = 0x3CD320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD31Cu;
        // 0x3cd320: 0x8e66003c  lw          $a2, 0x3C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD324u;
        goto label_3cd324;
    }
    ctx->pc = 0x3CD31Cu;
    SET_GPR_U32(ctx, 31, 0x3CD324u);
    ctx->pc = 0x3CD320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD31Cu;
    // 0x3cd320: 0x8e66003c  lw          $a2, 0x3C($s3) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D2270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D2270u, 0x3CD31Cu, 0x3CD324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD324u;
label_3cd324:
    // 0x3cd324: 0x8e62004c  lw          $v0, 0x4C($s3)
    ctx->pc = 0x3cd324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
label_3cd328:
    // 0x3cd328: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_3cd32c:
    if (ctx->pc == 0x3CD32Cu) {
        ctx->pc = 0x3CD330u;
        goto label_3cd330;
    }
    ctx->pc = 0x3CD328u;
    {
        const bool branch_taken_0x3cd328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cd328) {
            ctx->pc = 0x3CD354u;
            goto label_3cd354;
        }
    }
    ctx->pc = 0x3CD330u;
label_3cd330:
    // 0x3cd330: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x3cd330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_3cd334:
    // 0x3cd334: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3cd334u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3cd338:
    // 0x3cd338: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3cd338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3cd33c:
    // 0x3cd33c: 0x40f809  jalr        $v0
label_3cd340:
    if (ctx->pc == 0x3CD340u) {
        ctx->pc = 0x3CD340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD33Cu;
        // 0x3cd340: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD344u;
        goto label_3cd344;
    }
    ctx->pc = 0x3CD33Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CD344u);
        ctx->pc = 0x3CD340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD33Cu;
        // 0x3cd340: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CD33Cu, 0x3CD344u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CD344u;
label_3cd344:
    // 0x3cd344: 0x8e62004c  lw          $v0, 0x4C($s3)
    ctx->pc = 0x3cd344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
label_3cd348:
    // 0x3cd348: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3cd348u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3cd34c:
    // 0x3cd34c: 0x40f809  jalr        $v0
label_3cd350:
    if (ctx->pc == 0x3CD350u) {
        ctx->pc = 0x3CD350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD34Cu;
        // 0x3cd350: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD354u;
        goto label_3cd354;
    }
    ctx->pc = 0x3CD34Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CD354u);
        ctx->pc = 0x3CD350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD34Cu;
        // 0x3cd350: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CD34Cu, 0x3CD354u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CD354u;
label_3cd354:
    // 0x3cd354: 0x1ae00032  blez        $s7, . + 4 + (0x32 << 2)
label_3cd358:
    if (ctx->pc == 0x3CD358u) {
        ctx->pc = 0x3CD358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD354u;
        // 0x3cd358: 0x8fb00034  lw          $s0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD35Cu;
        goto label_3cd35c;
    }
    ctx->pc = 0x3CD354u;
    {
        const bool branch_taken_0x3cd354 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x3CD358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD354u;
        // 0x3cd358: 0x8fb00034  lw          $s0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd354) {
            ctx->pc = 0x3CD420u;
            goto label_3cd420;
        }
    }
    ctx->pc = 0x3CD35Cu;
label_3cd35c:
    // 0x3cd35c: 0x171023  negu        $v0, $s7
    ctx->pc = 0x3cd35cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 23)));
label_3cd360:
    // 0x3cd360: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x3cd360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_3cd364:
    // 0x3cd364: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x3cd364u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3cd368:
    // 0x3cd368: 0x3c0882d  daddu       $s1, $fp, $zero
    ctx->pc = 0x3cd368u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3cd36c:
    // 0x3cd36c: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
label_3cd370:
    if (ctx->pc == 0x3CD370u) {
        ctx->pc = 0x3CD370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD36Cu;
        // 0x3cd370: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD374u;
        goto label_3cd374;
    }
    ctx->pc = 0x3CD36Cu;
    {
        const bool branch_taken_0x3cd36c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CD370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD36Cu;
        // 0x3cd370: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd36c) {
            ctx->pc = 0x3CD3D8u;
            goto label_3cd3d8;
        }
    }
    ctx->pc = 0x3CD374u;
label_3cd374:
    // 0x3cd374: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3cd374u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_3cd378:
    // 0x3cd378: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_3cd37c:
    if (ctx->pc == 0x3CD37Cu) {
        ctx->pc = 0x3CD37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD378u;
        // 0x3cd37c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD380u;
        goto label_3cd380;
    }
    ctx->pc = 0x3CD378u;
    {
        const bool branch_taken_0x3cd378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CD37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD378u;
        // 0x3cd37c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd378) {
            ctx->pc = 0x3CD3B8u;
            goto label_3cd3b8;
        }
    }
    ctx->pc = 0x3CD380u;
label_3cd380:
    // 0x3cd380: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_3cd384:
    if (ctx->pc == 0x3CD384u) {
        ctx->pc = 0x3CD384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD380u;
        // 0x3cd384: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD388u;
        goto label_3cd388;
    }
    ctx->pc = 0x3CD380u;
    {
        const bool branch_taken_0x3cd380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cd380) {
            ctx->pc = 0x3CD384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CD380u;
            // 0x3cd384: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CD3A4u;
            goto label_3cd3a4;
        }
    }
    ctx->pc = 0x3CD388u;
label_3cd388:
    // 0x3cd388: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x3cd388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_3cd38c:
    // 0x3cd38c: 0x26120004  addiu       $s2, $s0, 0x4
    ctx->pc = 0x3cd38cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_3cd390:
    // 0x3cd390: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3cd390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3cd394:
    // 0x3cd394: 0x26f4ffff  addiu       $s4, $s7, -0x1
    ctx->pc = 0x3cd394u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
label_3cd398:
    // 0x3cd398: 0xc0f4a6c  jal         func_3D29B0
label_3cd39c:
    if (ctx->pc == 0x3CD39Cu) {
        ctx->pc = 0x3CD39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD398u;
        // 0x3cd39c: 0x27d10004  addiu       $s1, $fp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD3A0u;
        goto label_3cd3a0;
    }
    ctx->pc = 0x3CD398u;
    SET_GPR_U32(ctx, 31, 0x3CD3A0u);
    ctx->pc = 0x3CD39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD398u;
    // 0x3cd39c: 0x27d10004  addiu       $s1, $fp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D29B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D29B0u, 0x3CD398u, 0x3CD3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD3A0u;
label_3cd3a0:
    // 0x3cd3a0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3cd3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3cd3a4:
    // 0x3cd3a4: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x3cd3a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_3cd3a8:
    // 0x3cd3a8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x3cd3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3cd3ac:
    // 0x3cd3ac: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x3cd3acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_3cd3b0:
    // 0x3cd3b0: 0xc0f4a6c  jal         func_3D29B0
label_3cd3b4:
    if (ctx->pc == 0x3CD3B4u) {
        ctx->pc = 0x3CD3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD3B0u;
        // 0x3cd3b4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD3B8u;
        goto label_3cd3b8;
    }
    ctx->pc = 0x3CD3B0u;
    SET_GPR_U32(ctx, 31, 0x3CD3B8u);
    ctx->pc = 0x3CD3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD3B0u;
    // 0x3cd3b4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D29B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D29B0u, 0x3CD3B0u, 0x3CD3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD3B8u;
label_3cd3b8:
    // 0x3cd3b8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3cd3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3cd3bc:
    // 0x3cd3bc: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x3cd3bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_3cd3c0:
    // 0x3cd3c0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x3cd3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3cd3c4:
    // 0x3cd3c4: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x3cd3c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_3cd3c8:
    // 0x3cd3c8: 0xc0f4a6c  jal         func_3D29B0
label_3cd3cc:
    if (ctx->pc == 0x3CD3CCu) {
        ctx->pc = 0x3CD3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD3C8u;
        // 0x3cd3cc: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD3D0u;
        goto label_3cd3d0;
    }
    ctx->pc = 0x3CD3C8u;
    SET_GPR_U32(ctx, 31, 0x3CD3D0u);
    ctx->pc = 0x3CD3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD3C8u;
    // 0x3cd3cc: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D29B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D29B0u, 0x3CD3C8u, 0x3CD3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD3D0u;
label_3cd3d0:
    // 0x3cd3d0: 0x12800014  beqz        $s4, . + 4 + (0x14 << 2)
label_3cd3d4:
    if (ctx->pc == 0x3CD3D4u) {
        ctx->pc = 0x3CD3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD3D0u;
        // 0x3cd3d4: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD3D8u;
        goto label_3cd3d8;
    }
    ctx->pc = 0x3CD3D0u;
    {
        const bool branch_taken_0x3cd3d0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CD3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD3D0u;
        // 0x3cd3d4: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd3d0) {
            ctx->pc = 0x3CD424u;
            goto label_3cd424;
        }
    }
    ctx->pc = 0x3CD3D8u;
label_3cd3d8:
    // 0x3cd3d8: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x3cd3d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3cd3dc:
    // 0x3cd3dc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3cd3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3cd3e0:
    // 0x3cd3e0: 0x2694fffc  addiu       $s4, $s4, -0x4
    ctx->pc = 0x3cd3e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967292));
label_3cd3e4:
    // 0x3cd3e4: 0xc0f4a6c  jal         func_3D29B0
label_3cd3e8:
    if (ctx->pc == 0x3CD3E8u) {
        ctx->pc = 0x3CD3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD3E4u;
        // 0x3cd3e8: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD3ECu;
        goto label_3cd3ec;
    }
    ctx->pc = 0x3CD3E4u;
    SET_GPR_U32(ctx, 31, 0x3CD3ECu);
    ctx->pc = 0x3CD3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD3E4u;
    // 0x3cd3e8: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D29B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D29B0u, 0x3CD3E4u, 0x3CD3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD3ECu;
label_3cd3ec:
    // 0x3cd3ec: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3cd3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3cd3f0:
    // 0x3cd3f0: 0xc0f4a6c  jal         func_3D29B0
label_3cd3f4:
    if (ctx->pc == 0x3CD3F4u) {
        ctx->pc = 0x3CD3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD3F0u;
        // 0x3cd3f4: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD3F8u;
        goto label_3cd3f8;
    }
    ctx->pc = 0x3CD3F0u;
    SET_GPR_U32(ctx, 31, 0x3CD3F8u);
    ctx->pc = 0x3CD3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD3F0u;
    // 0x3cd3f4: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D29B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D29B0u, 0x3CD3F0u, 0x3CD3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD3F8u;
label_3cd3f8:
    // 0x3cd3f8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x3cd3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3cd3fc:
    // 0x3cd3fc: 0xc0f4a6c  jal         func_3D29B0
label_3cd400:
    if (ctx->pc == 0x3CD400u) {
        ctx->pc = 0x3CD400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD3FCu;
        // 0x3cd400: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD404u;
        goto label_3cd404;
    }
    ctx->pc = 0x3CD3FCu;
    SET_GPR_U32(ctx, 31, 0x3CD404u);
    ctx->pc = 0x3CD400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD3FCu;
    // 0x3cd400: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D29B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D29B0u, 0x3CD3FCu, 0x3CD404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD404u;
label_3cd404:
    // 0x3cd404: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x3cd404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_3cd408:
    // 0x3cd408: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x3cd408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3cd40c:
    // 0x3cd40c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x3cd40cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3cd410:
    // 0x3cd410: 0xc0f4a6c  jal         func_3D29B0
label_3cd414:
    if (ctx->pc == 0x3CD414u) {
        ctx->pc = 0x3CD414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD410u;
        // 0x3cd414: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD418u;
        goto label_3cd418;
    }
    ctx->pc = 0x3CD410u;
    SET_GPR_U32(ctx, 31, 0x3CD418u);
    ctx->pc = 0x3CD414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD410u;
    // 0x3cd414: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D29B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D29B0u, 0x3CD410u, 0x3CD418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD418u;
label_3cd418:
    // 0x3cd418: 0x5680fff1  bnel        $s4, $zero, . + 4 + (-0xF << 2)
label_3cd41c:
    if (ctx->pc == 0x3CD41Cu) {
        ctx->pc = 0x3CD41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD418u;
        // 0x3cd41c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD420u;
        goto label_3cd420;
    }
    ctx->pc = 0x3CD418u;
    {
        const bool branch_taken_0x3cd418 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cd418) {
            ctx->pc = 0x3CD41Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CD418u;
            // 0x3cd41c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CD3E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cd3e0;
        }
    }
    ctx->pc = 0x3CD420u;
label_3cd420:
    // 0x3cd420: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3cd420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3cd424:
    // 0x3cd424: 0x2443e880  addiu       $v1, $v0, -0x1780
    ctx->pc = 0x3cd424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_3cd428:
    // 0x3cd428: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x3cd428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_3cd42c:
    // 0x3cd42c: 0x40f809  jalr        $v0
label_3cd430:
    if (ctx->pc == 0x3CD430u) {
        ctx->pc = 0x3CD430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD42Cu;
        // 0x3cd430: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD434u;
        goto label_3cd434;
    }
    ctx->pc = 0x3CD42Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CD434u);
        ctx->pc = 0x3CD430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD42Cu;
        // 0x3cd430: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CD42Cu, 0x3CD434u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CD434u;
label_3cd434:
    // 0x3cd434: 0x8e640034  lw          $a0, 0x34($s3)
    ctx->pc = 0x3cd434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_3cd438:
    // 0x3cd438: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_3cd43c:
    if (ctx->pc == 0x3CD43Cu) {
        ctx->pc = 0x3CD43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD438u;
        // 0x3cd43c: 0xae60003c  sw          $zero, 0x3C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD440u;
        goto label_3cd440;
    }
    ctx->pc = 0x3CD438u;
    {
        const bool branch_taken_0x3cd438 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cd438) {
            ctx->pc = 0x3CD43Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CD438u;
            // 0x3cd43c: 0xae60003c  sw          $zero, 0x3C($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CD44Cu;
            goto label_3cd44c;
        }
    }
    ctx->pc = 0x3CD440u;
label_3cd440:
    // 0x3cd440: 0xc10705c  jal         func_41C170
label_3cd444:
    if (ctx->pc == 0x3CD444u) {
        ctx->pc = 0x3CD448u;
        goto label_3cd448;
    }
    ctx->pc = 0x3CD440u;
    SET_GPR_U32(ctx, 31, 0x3CD448u);
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3CD440u, 0x3CD448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD448u;
label_3cd448:
    // 0x3cd448: 0xae60003c  sw          $zero, 0x3C($s3)
    ctx->pc = 0x3cd448u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 0));
label_3cd44c:
    // 0x3cd44c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3cd44cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3cd450:
    // 0x3cd450: 0xae600038  sw          $zero, 0x38($s3)
    ctx->pc = 0x3cd450u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 0));
label_3cd454:
    // 0x3cd454: 0xc0f5238  jal         func_3D48E0
label_3cd458:
    if (ctx->pc == 0x3CD458u) {
        ctx->pc = 0x3CD458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD454u;
        // 0x3cd458: 0xae600034  sw          $zero, 0x34($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD45Cu;
        goto label_3cd45c;
    }
    ctx->pc = 0x3CD454u;
    SET_GPR_U32(ctx, 31, 0x3CD45Cu);
    ctx->pc = 0x3CD458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD454u;
    // 0x3cd458: 0xae600034  sw          $zero, 0x34($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D48E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D48E0u, 0x3CD454u, 0x3CD45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD45Cu;
label_3cd45c:
    // 0x3cd45c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x3cd45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_3cd460:
    // 0x3cd460: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x3cd460u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_3cd464:
    // 0x3cd464: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x3cd464u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3cd468:
    // 0x3cd468: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x3cd468u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3cd46c:
    // 0x3cd46c: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x3cd46cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3cd470:
    // 0x3cd470: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x3cd470u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3cd474:
    // 0x3cd474: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x3cd474u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3cd478:
    // 0x3cd478: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x3cd478u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3cd47c:
    // 0x3cd47c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x3cd47cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3cd480:
    // 0x3cd480: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x3cd480u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3cd484:
    // 0x3cd484: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3cd484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3cd488:
    // 0x3cd488: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x3cd488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3cd48c:
    // 0x3cd48c: 0x3e00008  jr          $ra
label_3cd490:
    if (ctx->pc == 0x3CD490u) {
        ctx->pc = 0x3CD490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD48Cu;
        // 0x3cd490: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD494u;
        goto label_3cd494;
    }
    ctx->pc = 0x3CD48Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CD490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD48Cu;
        // 0x3cd490: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CD48Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CD494u;
label_3cd494:
    // 0x3cd494: 0x0  nop
    ctx->pc = 0x3cd494u;
    // NOP
    ctx->pc = 0x3cd498u;
}
